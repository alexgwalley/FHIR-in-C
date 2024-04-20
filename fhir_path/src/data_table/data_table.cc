#include <limits.h>

namespace native_fhir
{

 /////////////////////
 // ~ Column Value Impl

 B32
 ColumnValue::Equal(ColumnValue& o)
 {
  if (value_type != o.value_type) return false;
  if (value_type == ColumnValueType::String)
  {
   if (str.has_value != o.str.has_value) return false;
   B32 equal = Str8Match(str.str8, o.str.str8, 0);
   return equal;
  }
  else if (value_type == ColumnValueType::Array)
  {
   DataColumn* other_column = o.array;
   if ((o.array == NULL && array != NULL) ||
    (array == NULL && o.array != NULL))
   {
    return false;
   }

   B32 equal = (*o.array) == (*array);
   return equal;
  }

  B32 equal = memcmp(this, &o, sizeof(ColumnValue)) == 0;
  return equal;
 }

 bool 
 ColumnValue::operator==(ColumnValue& o)
 {
  bool equal = Equal(o);
  return equal;
 }

 bool 
 ColumnValue::operator!=(ColumnValue& o)
 {
  bool equal = Equal(o);
  return !equal;
 }

 ColumnValue
 ColumnValueFromCollectionEntry(CollectionEntry ent, ColumnValueType column_type)
 {
  ColumnValue ret = {};
  switch (ent.type)
  {
   default: NotImplemented; break;
   case EntryType::Boolean: 
   { 
    ret.value_type = ColumnValueType::Boolean;
    NullableBoolean value = {};
    value.has_value = true;
    value.value = ent.b;
    ret.b = value;
   } break;
   case EntryType::String: 
   {
    ret.value_type = ColumnValueType::String;
    ret.str = ent.str;
   } break;
   case EntryType::Iso8601:
   {
    ret.value_type = ColumnValueType::ISO8601_Time;
    ret.time = ent.time;
   } break;
   case EntryType::Number:
   {
    switch (column_type)
    {
     default: NotImplemented;
     case ColumnValueType::Int32:
     {
      if (ent.number.type == NumberType::Decimal)
      {
       // Convert
       S64 s64 = IntFromDecimal(ent.number.decimal);
       ent.number.s64 = s64;
       ent.number.type = NumberType::Integer;
      }
      if (ent.number.s64 > INT_MAX) { throw; }

      S32 s32 = (S32)ent.number.s64;

      ret.value_type = ColumnValueType::Int32;
      NullableInt32 ni = {};
      ni.has_value = true;
      ni.value = s32;
      ret.s32 = ni;
     } break;
     case ColumnValueType::Int64:
     {
      ret.value_type = ColumnValueType::Int64;
      NullableInt64 ni = {};
      ni.has_value = true;
      ni.value = ent.number.s64;
      ret.s64 = ni;
     } break;
     case ColumnValueType::Double:
     {
      F64 double_value = DoubleFromDecimal(ent.number.decimal);
      ret.value_type = ColumnValueType::Double;
      NullableDouble nd = {};
      nd.has_value = true;
      nd.value = double_value;
      ret._double = nd;
     } break;
    }
   } break;
  }
  return ret;
 }

 /////////////////////
 // ~ Data Column Impl

 void
 DataColumn::AddValue(Arena *arena, ColumnValue val)
 {
  if (!last || last->count >= last->max_count)
  {
   DataChunkNode* _ = AddChunk(arena);
  }

  num_values++;
  if (val.value_type == ColumnValueType::Null)
  {
   last->count++;
   return;
  }
  else
  {
   Assert(val.value_type == value_type);
  }

  switch (val.value_type)
  {
   default: NotImplemented;
   case ColumnValueType::String:
   {
    NullableString8* array = (NullableString8*)last->data;
    array[last->count] = val.str;
   } break;
   case ColumnValueType::Boolean:
   {
    NullableBoolean* array = (NullableBoolean*)last->data;
    array[last->count] = val.b;
   } break;
   case ColumnValueType::ISO8601_Time:
   {
    ISO8601_Time* array = (ISO8601_Time*)last->data;
    array[last->count] = val.time;
   } break;
   case ColumnValueType::Int32:
   {
    NullableInt32* array = (NullableInt32*)last->data;
    array[last->count] = val.s32;
   } break;
   case ColumnValueType::Int64:
   {
    NullableInt64* array = (NullableInt64*)last->data;
    array[last->count] = val.s64;
   } break;
   case ColumnValueType::Double:
   {
    NullableDouble* array = (NullableDouble*)last->data;
    array[last->count] = val._double;
   } break;
   case ColumnValueType::Array:
   {
    DataColumn** array = (DataColumn**)last->data;
    array[last->count] = val.array;
   } break;
  }

  last->count++;
 }

 void
 DataColumn::AddAllValuesFromColumn(Arena *arena, DataColumn col)
 {
  if (!last || last->count >= last->max_count)
  {
   DataChunkNode* _ = AddChunk(arena);
  }

  if (col.value_type == ColumnValueType::Unknown || col.value_type == ColumnValueType::Null)
  {
   ColumnValue val = {};
   val.value_type = ColumnValueType::Null;
   for (int i = 0; i < col.num_values; i++)
   {
    this->AddValue(arena, val);
   }
   return;
  }

  Assert(col.value_type == value_type);

  for (DataChunkNode *node = col.first; node; node = node->next)
  {
   size_t n_data_size = node->count * column_value_sizes[(int)col.value_type];
   void* n_data_end = (U8*)node->data + (node->max_count * column_value_sizes[(int)value_type]);
   size_t n_data_count_remaining = node->count;
    
   U8* data_end = (U8*)last->data + (last->count * column_value_sizes[(int)value_type]);
   U8* max_end = (U8*)last->data + (last->max_count * column_value_sizes[(int)value_type]);
   size_t data_size_remaining = max_end - data_end;

   if (n_data_size <= data_size_remaining)
   {
    // ~ Copy the data over
    MemoryCopy(data_end, node->data, n_data_size);
    last->count += node->count;
   }
   else
   {
    U8* n_data_ptr = (U8*)node->data;
    size_t n_count_remaining = node->count;

    // ~ copy first part of node data into remaining part of chunk 
    size_t copy_length = (U8*)max_end - (U8*)data_end;
    MemoryCopy(data_end, n_data_ptr, copy_length);
    n_count_remaining -= last->max_count - last->count;
    last->count = last->max_count;

    n_data_ptr += copy_length;
    // copy remaining node data into new chunk node
    this->AddChunk(arena);

    // TODO(agw): this could be worked around for different sized chunks, for now I will just place this assert
    Assert(n_count_remaining < last->max_count);

    size_t n_data_remaining = (U8*)n_data_end - (U8*)n_data_ptr;
    MemoryCopy(last->data, n_data_ptr, n_data_remaining);
    last->count += n_data_count_remaining;
   }
  }

  this->num_values += col.num_values;
 }

 local_function void 
 DataColumn_AddCollection(Arena *arena, FP_ExecutionContext *context, DataColumn *column, Collection col)
 {
  TimeFunction;

  DataChunkNode *chunk_node = column->last;
  if (!chunk_node)
  {
   chunk_node = column->AddChunk(arena);
  } else if (chunk_node->count > chunk_node->max_count)
  {
   chunk_node = column->AddChunk(arena);
  }

  if (column->value_type == ColumnValueType::Array)
  {
   DataColumn *new_col = PushStruct(arena, DataColumn);
   ColumnValue value = {};
   for (CollectionEntryNode *node = col.first; node; node = node->next)
   {
    ColumnValue value = ColumnValueFromCollectionEntry(node->v, new_col->value_type);
    if (value.value_type != ColumnValueType::Null && new_col->value_type == ColumnValueType::Unknown)
    {
     new_col->SetValueType(arena, value.value_type);
    }

    new_col->AddValue(arena, value);
   }

   value.value_type = ColumnValueType::Array;
   value.array = new_col;
   column->AddValue(arena, value);
   return;
  }

  if (col.count > 0)
  {
   ColumnValue value = ColumnValueFromCollectionEntry(col.first->v, column->value_type);
   if (value.value_type != ColumnValueType::Null && column->value_type == ColumnValueType::Unknown)
   {
    column->SetValueType(arena, value.value_type);
   }
   column->AddValue(arena, value);
  }
  else
  {
   ColumnValue null_value = {};
   null_value.value_type = ColumnValueType::Null;
   column->AddValue(arena, null_value);
  }

 }


 ////////////////////
 // ~ Data Table Impl

 local_function void
 DataTable_UnionDataTables(Arena *arena, DataTable *dst, DataTable* src, FP_ExecutionContext *context)
 {
  TimeFunction;
  if (src->column_count == 0) return;
  if (dst->column_count == 0)
  {
   for (DataColumnNode *node = src->first; node; node = node->next)
   {
    dst->AddColumn(arena, node->v);
   }
   return;
  }

  FP_Assert(dst->column_count == src->column_count, context, Str8Lit("UnionAll column count mismatch"));
  // ~ Add columns that if not present,
  DataColumnNode *dst_node = dst->first;
  for (DataColumnNode *node = src->first; node; node = node->next, dst_node = dst_node->next)
  {
   FP_Assert(Str8Match(dst_node->v.name, node->v.name, 0), context, Str8Lit("UnionAll column name mismatch (order?)"));

   dst_node->v.AddAllValuesFromColumn(arena, node->v);
  }
 }



 DataTable
 RowProduct(Arena *arena, DataTableList table_list)
 {
  TimeFunction;
  // TODO(agw): make sure when you do this that the values are copied into arena
  DataTable res = {};

  // TODO(agw): getting each row is slow...just seeing if this works
  // for each table
  for (DataTableNode *table_node = table_list.first; table_node; table_node = table_node->next)
  {
   DataTable new_table = {};

   if (res.column_count == 0)
   {
    res = table_node->table;
    continue;
   }

   // Add all necessary columns
   if (table_node->table.column_count == 0)
   {
    res = {};
    return res;
   }

   for (DataColumnNode *tc = table_node->table.first; tc; tc = tc->next)
   {
    DataColumn cpy = {};
    cpy.name = tc->v.name;
    cpy.value_type = tc->v.value_type;
    new_table.AddColumn(arena, cpy);
   }

   for (DataColumnNode *rc = res.first; rc; rc = rc->next)
   {
    DataColumn cpy = {};
    cpy.name = rc->v.name;
    cpy.value_type = rc->v.value_type;
    new_table.AddColumn(arena, cpy);
   }

   // for each row of curr_table
   for (int tr_idx = 0; tr_idx < table_node->table.GetRowCount(); tr_idx++)
   {
    DataRow table_row = table_node->table.GetRow(arena, tr_idx);
     // for each row of existing table
    for (int rr_idx = 0; rr_idx < res.GetRowCount(); rr_idx++)
    {
     DataRow res_row = res.GetRow(arena, rr_idx);
     // Merge the two
     DataColumnNode *col = new_table.first;
     for (int i = 0; i < table_row.count; i++)
     {
      col->v.AddValue(arena, table_row.v[i]);
      col = col->next;
     }

     for (int i = 0; i < res_row.count; i++)
     {
      col->v.AddValue(arena, res_row.v[i]);
      col = col->next;
     }
    }
   }

   res = new_table;
  }

  return res;
 }

 local_function DataTable
 ExecuteView(Arena *arena, ViewElem* view, FHIR_VERSION::Resource* resource, FP_ExecutionContext* context)
 {
  TimeFunction;
  DataTable result = {};

  switch (view->type)
  {
   case ViewElemType::Select:
   {
    // This whole thing could be wrapped in a forEach
    Temp temp = ScratchBegin(&arena, 1);

    Collection resources = {};
    if (view->for_each.has_value)
    {
     context->Set(1, &resource, view->for_each_piece);
     resources = ExecutePieces(temp.arena, context);
    }
    else
    {
     CollectionEntry res_entry = {};
     res_entry.type = EntryType::Resource;
     res_entry.resource = resource;
     CollectionPushEntry(temp.arena, &resources, res_entry);
    }

    // NOTE(agw): we want to create a null column, so we will put a nil resource here
    if (view->for_each_is_null && resources.count == 0)
    {
     CollectionEntry res_entry = {};
     res_entry.type = EntryType::Resource;
     res_entry.resource = &nil_resource;
     CollectionPushEntry(temp.arena, &resources, res_entry);
    }

    for (CollectionEntryNode *ent_node = resources.first; !IsNilCollectionEntryNode(ent_node); ent_node = ent_node->next)
    {
     context->ZeroOut();

     CollectionEntryNode *cpy = PushStruct(temp.arena, CollectionEntryNode);
     MemoryCopy(cpy, ent_node, sizeof(*ent_node));
     SLLStackPush(context->entry_stack_first, cpy);

     DataTableList table_list = {};

     ///////////////////////
     // ~ Calculate Columns
     DataTable column_result = {};
     for (ViewElem *node = view->column_first; node; node = node->next)
     {
      DataTable node_table = ExecuteView(arena, node, ent_node->v.resource, context);

      // Since we are select, just append a new column
      for (DataColumnNode *col_node = node_table.first; col_node; col_node = col_node->next)
      {
       FP_Assert(col_node->v.num_values == 1, context, Str8Lit(""));
       column_result.AddColumn(arena, col_node->v);
      }
     }

     table_list.AddTable(arena, column_result);

     ///////////////////////
     // ~ Calculate Select
     DataTable select_result = {};
     for (ViewElem *v = view->select_first; v; v = v->next)
     {
      DataTable next_table = ExecuteView(arena, v, ent_node->v.resource, context);
      table_list.AddTable(arena, next_table);
     }

     ///////////////////////
     // ~ Calculate Union
     if (view->union_first)
     {
      DataTable union_result = {};
      for (ViewElem *v = view->union_first; v; v = v->next)
      {
       DataTable next_table = ExecuteView(arena, v, ent_node->v.resource, context);
       if (union_result.column_count == 0 && v == view->union_first)
       {
        union_result = next_table;
       }
       else
       {
        DataTable_UnionDataTables(arena, &union_result, &next_table, context);
       }
      }

      table_list.AddTable(arena, union_result);
     }

     DataTable res = RowProduct(arena, table_list);

     // TODO(agw): double check this
     DataTable_UnionDataTables(arena, &result, &res, context);
    }

    ScratchEnd(temp);
   } break;
   case ViewElemType::Column:
   {
    // NOTE(agw): we do _not_ want to zero out the entry stack here, should be set in parent select
    context->root_node = view->root_piece;
    context->res_count = 1;
    context->resources = &resource;

    CollectionEntry res_entry = {};
    Collection col = ExecutePieces(arena, context);

    DataColumn column = {};
    column.name = view->name.str8;
    column.value_type = view->data_type;
    if (view->collection.has_value && view->collection.value)
    {
     column.value_type = ColumnValueType::Array;
    }
    else if (view->collection.has_value && view->collection.value == false)
    {
     FP_Assert(col.count == 1, context, 
               PushStr8F(context->arena, "Collection generated for column %S, but collection = false", column.name));
    }

    DataColumn_AddCollection(arena, context, &column, col);

    result.AddColumn(arena, column);
   } break;
  }

  return result;
 }

 DataTable
 GetViewOrder(Arena *arena, ViewElem *view)
 {
  DataTable res = {};
  switch (view->type)
  {
   case ViewElemType::Select:
   {
    for (ViewElem* v = view->column_first; v; v = v->next)
    {
     DataTable v_list = GetViewOrder(arena, v);
     res.AddAllColumnsWithoutValues(arena, v_list);
    }

    for (ViewElem* v = view->select_first; v; v = v->next)
    {
     DataTable v_list = GetViewOrder(arena, v);
     res.AddAllColumnsWithoutValues(arena, v_list);
    }

    for (ViewElem* v = view->union_first; v; v = v->next)
    {
     DataTable v_list = GetViewOrder(arena, v);
     res.AddAllColumnsWithoutValues(arena, v_list);
    }
   } break;
   case ViewElemType::Column:
   {
    DataColumn col = {};
    col.name = view->name.str8;
    col.value_type = view->data_type;
    res.AddColumnWithoutValues(arena, col);
   } break;
  }

  return res;
 }

 DataTable
 GetColumnOrder(Arena *arena, native_fhir::ViewDefinition vd)
 {
  DataTable res = {};
  for (ViewElem *view = vd.first; view; view = view->next)
  {
   DataTable view_order = GetViewOrder(arena, view);
   res.AddAllColumnsWithoutValues(arena, view_order);
  }

  return res;
 }

 void
 SortColumns(DataTable *table, native_fhir::ViewDefinition vd)
 {
  TimeFunction;
  Temp temp = ScratchBegin(0, 0);

  DataTable order = GetColumnOrder(temp.arena, vd);

  String8List order_reversed = {};
  for (DataColumnNode *node = order.first; node; node = node->next)
  {
   Str8ListPushFront(temp.arena, &order_reversed, node->v.name);
  }

  for (String8Node *node = order_reversed.first; node; node = node->next)
  {
   DataColumnNode* cn = table->GetMatchingColumn(node->string);
   if (cn)
   {
    DLLRemove(table->first, table->last, cn);
    DLLPushFront(table->first, table->last, cn);
   }
  }

  ScratchEnd(temp);
 }

};