#include <limits.h>

namespace native_fhir
{

 DataTable
 GetViewOrder(Arena *arena, ViewElem *view);

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
   default: NF_NotImplemented; break;
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
     default: NF_NotImplemented;
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

 DataChunkNode* 
 DataColumn::AddChunk(Arena *arena)
 {
  TimeFunction;
  DataChunkNode *ret = PushStruct(arena, DataChunkNode);

  ret->value_type = value_type; // TODO(agw): this probably isn't necessary

  ret->max_count = CHUNK_SIZE;
  size_t value_size = column_value_sizes[(int)value_type];
  // TODO(agw): may be able to get away with not zero'ing
  ret->data = ArenaPush(arena, value_size * ret->max_count);

  SLLQueuePush(first, last, ret);
  chunk_count++;

  return ret;
 }

 void
 DataColumn::AddValue(Arena *arena, ColumnValue val)
 {
  TimeFunction;
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

  U8* last_slot = (U8*)last->data + column_value_sizes[(int)val.value_type] * last->count;
  MemoryCopy(last_slot, &(val.v), column_value_sizes[(int)val.value_type]);

  last->count++;
 }

 void
 DataColumn::AddAllValuesFromColumn(Arena *arena, DataColumn col)
 {
  TimeFunction;
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

  if (col.value_type != value_type)
  {
   std::cerr << "column \"" << col.name << "\"'s type: \"" 
    << column_value_type_names[(int)col.value_type] << "\" does not match column: \"" 
    << this->name << "\"'s value type: \"" << column_value_type_names[(int)this->value_type] << "\"" << std::endl;
   Assert(col.value_type == value_type);
  }

  if (col.value_type == ColumnValueType::Array)
  {
   ColumnIterator itr = {};
   itr.Init(&col, 0);

   // NOTE(agw): when we have nested columns (multiple values per column entry)
   // we need to copy the data chunk nodes to the arena
   for(int i = 0; i < col.num_values; i++)
   {
    DataColumn** ptr = (DataColumn**)itr.Next();

    DataColumn* new_col = PushStruct(arena, DataColumn);
    new_col->SetValueType(arena, (*ptr)->value_type);
    new_col->AddAllValuesFromColumn(arena, **ptr);
    ColumnValue val = {};
    val.value_type = ColumnValueType::Array;
    val.array = new_col;
    this->AddValue(arena, val);
   }
   return;
  }


  size_t value_size = column_value_sizes[(int)col.value_type];

  for (DataChunkNode *node = col.first; node; node = node->next)
  {
   size_t n_data_size = node->count * value_size;
   size_t n_data_count_remaining = node->count;
    
   U8* data_end = (U8 *)last->data + (last->count * value_size);
   size_t data_size_remaining = (last->max_count - last->count) * value_size;

   size_t copy_length = Min(data_size_remaining, n_data_size);
   size_t count = Min(node->count, last->max_count - last->count);
   MemoryCopy(data_end, node->data, copy_length);

   n_data_count_remaining -= count;
   last->count += count;

   // Overflow add in new chunk
   if (n_data_count_remaining > 0)
   {
    this->AddChunk(arena);

    U8* n_data_ptr = (U8 *)node->data + copy_length;
    size_t n_data_remaining = (node->count - count) * value_size;
    MemoryCopy(last->data, n_data_ptr, n_data_remaining);
    last->count += n_data_count_remaining;
   }
  }

  this->num_values += col.num_values;
 }

 B32
 DataColumn::Equal(DataColumn const& other) const
 {
  if (value_type != other.value_type) return false;
  if (num_values != other.num_values) return false;

  ColumnIterator itr = {};
  itr.Init(this, 0);

  ColumnIterator oitr = {};
  oitr.Init(&other, 0);

  for (int i = 0; i < num_values; i++)
  {
   void *val = itr.Next();
   void* other_val = oitr.Next();

   switch (value_type)
   {
    default: NF_NotImplemented;
    case ColumnValueType::Null: {} break;
    case ColumnValueType::String:
    {
     NullableString8* str = (NullableString8*)val;
     NullableString8* other_str = (NullableString8*)other_val;
     if (str->has_value != other_str->has_value) return false;
     if (!Str8Match(str->str8, other_str->str8, 0)) return false;
    } break;
    case ColumnValueType::Boolean:
    case ColumnValueType::Int32:
    case ColumnValueType::Int64:
    case ColumnValueType::Double:
    case ColumnValueType::ISO8601_Time:
    {
     B32 equal = memcmp(val, other_val, itr.stride) == 0;
     if (!equal) return false;
    } break;
    case ColumnValueType::Array:
    {
     DataColumn* col = (DataColumn*)val;
     DataColumn* other_column = (DataColumn*)other_val;
     if (*col != *other_column) return false;
    } break;
   }
  }

  return true;
 }

 local_function void
 DataColumn_AddCollection(Arena *arena, FP_ExecutionContext *context, DataColumn *column, Collection col)
 {
  TimeFunction;
  // TODO(agw): I think all collection values will be the same type...could do this in bulk conversion

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

 DataColumnNode* 
 DataTable::AddColumn(Arena *arena, DataColumn column)
 {
  Assert(this->GetMatchingColumn(column.name) == NULL);

  DataColumnNode *ret = PushStruct(arena, DataColumnNode);
  ret->v = column;
  DLLPushBack(first, last, ret);
  column_count++;

  return ret;
 }

 DataColumnNode* 
 DataTable::AddColumnWithoutValues(Arena *arena, DataColumn column)
 {
  DataColumnNode *ret = PushStruct(arena, DataColumnNode);
  ret->v = column;
  ret->v.chunk_count = 0;
  ret->v.first = ret->v.last = NULL;
  DLLPushBack(first, last, ret);
  column_count++;

  return ret;
 }

 void 
 DataTable::AddAllColumnsWithoutValues(Arena *arena, DataTable table)
 {
  for (DataColumnNode *n = table.first; n; n = n->next)
  {
   if (this->GetMatchingColumn(n->v.name) == NULL)
   {
    AddColumnWithoutValues(arena, n->v);
   }
  }
 }


 DataRow
 DataTable::GetRow(Arena *arena, int idx)
 {
  TimeFunction;
  DataRow res = {};
  res.count = column_count;
  res.v = PushArray(arena, ColumnValue, res.count);

  int column_idx = 0;
  for (DataColumnNode* node = first; node; node = node->next, column_idx++)
  {
   res.v[column_idx] = node->v[idx];
  }

  return res;
 }

 // TODO(agw): this can be a hash map
 DataColumnNode*
 DataTable::GetMatchingColumn(String8 name)
 {
  for (DataColumnNode *node = first; node; node = node->next)
  {
   if (Str8Match(name, node->v.name, 0))
   {
    return node;
   }
  }
  return 0;
 }

 B32
 DataTable::HasMatchingRow(DataTable* o, size_t comparison_row)
 {
  if (o->column_count != column_count) return false;

  Temp temp = ScratchBegin(0, 0);
  ColumnValueNamePair *row = PushArray(temp.arena, ColumnValueNamePair, column_count);
  ColumnValueNamePair *other_row = PushArray(temp.arena, ColumnValueNamePair, column_count);

  // Fill Our Row
  int column_idx = 0;
  for (DataColumnNode* node = first; node; node = node->next, column_idx++)
  {
   row[column_idx].v = node->v[comparison_row];
   row[column_idx].name = node->v.name;
  }

  DataColumn col = o->first->v;
  // For each row
  for (int i = 0; i < col.num_values; i++)
  {
   // Fill other row
   int other_column_idx = 0;
   for (DataColumnNode* node = o->first; node; node = node->next, other_column_idx++)
   {
    other_row[other_column_idx].v = node->v[i];
    other_row[other_column_idx].name = node->v.name;
   }

   // Compare the two
   B32 row_equal = true;
   for (int idx = 0; idx < column_count; idx++)
   {
    B32 has_matching_value = false;
    for (int j = 0; j < column_count; j++)
    {
     if (row[idx].v == other_row[j].v && Str8Match(row[idx].name, other_row[j].name, 0))
     {
      has_matching_value = true;
     }
    }

    if (!has_matching_value)
    {
     row_equal = false;
     break;
    }
   }

   if (row_equal)
   {
    ScratchEnd(temp);
    return true;
   }

  }

  ScratchEnd(temp);
  return false;
 }

 S64 DataTable::GetRowCount()
 {
   S64 row_count = 0;
   for (DataColumnNode *node = first; node; node = node->next)
   {
    S64 count = node->v.num_values;
    if (row_count == 0) row_count = count;
    else
    {
     Assert(row_count == count);
    }
   }

   return row_count;
 }

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

  // TODO(agw): wondering if we could just bulk add all values to the end, then try to merge any chunks that are 
  // not completly full
  // Union does not guarantee row ordering

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
    ColumnIterator itr = {};

    DataColumnNode *col = new_table.first;
    // Copy column value res.GetRowCount()
    for (int i = 0; i < table_row.count; i++)
    {
     for (int rr_idx = 0; rr_idx < res.GetRowCount(); rr_idx++)
     {
      // TODO(agw): this could by an iterator
      col->v.AddValue(arena, table_row.v[i]);
     }
     col = col->next;
    }

    // Copy res row
    DataColumnNode *res_col = res.first;
    for (int i = 0; i < res.column_count; i++)
    {
     col->v.AddAllValuesFromColumn(arena, res_col->v);
     col = col->next;
     res_col = res_col->next;
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
  DataTable result = GetViewOrder(arena, view);
  String8List order_reversed = ReverseColumns(arena, &result);

  switch (view->type)
  {
   case ViewElemType::Select:
   {
    // This whole thing could be wrapped in a forEach

    Collection resources = {};
    if (view->for_each.has_value)
    {
     context->Set(1, &resource, view->for_each_piece);

     // TODO(agw): this could go in a function in context
     CollectionEntryNode *cpy = PushStruct(arena, CollectionEntryNode);
     cpy->v = CollectionEntryFromResource(resource);
     DLLPushFront(context->entry_stack_first, context->entry_stack_last, cpy);

     resources = ExecutePieces(arena, context);

     DLLRemove(context->entry_stack_first, context->entry_stack_last, cpy);

    }
    else
    {
     CollectionEntry res_entry = {};
     res_entry.type = EntryType::Resource;
     res_entry.resource = resource;
     CollectionPushEntry(arena, &resources, res_entry);
    }

    // NOTE(agw): we want to create a null column, so we will put a nil resource here
    if (view->for_each_is_null && resources.count == 0)
    {
     CollectionEntry res_entry = {};
     res_entry.type = EntryType::Resource;
     res_entry.resource = &nil_resource;
     CollectionPushEntry(arena, &resources, res_entry);
    }

    for (CollectionEntryNode *ent_node = resources.first; !IsNilCollectionEntryNode(ent_node); ent_node = ent_node->next)
    {
     context->ZeroOut();

     CollectionEntryNode *cpy = PushStruct(arena, CollectionEntryNode);
     MemoryCopy(cpy, ent_node, sizeof(*ent_node));
     DLLPushFront(context->entry_stack_first, context->entry_stack_last, cpy);

     DataTableList table_list = {};

     ///////////////////////
     // ~ Calculate Columns
     for (ViewElem *node = view->column_first; node; node = node->next)
     {
      DataTable node_table = ExecuteView(arena, node, ent_node->v.resource, context);
      table_list.AddTable(arena, node_table);

      // Since we are select, just append a new column
      /*
      for (DataColumnNode *col_node = node_table.first; col_node; col_node = col_node->next)
      {
       FP_Assert(col_node->v.num_values == 1, context, Str8Lit(""));
       column_result.AddColumn(arena, col_node->v);
      }
      */
     }


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
     SortColumns(arena, &res, order_reversed);

     // TODO(agw): double check this
     DataTable_UnionDataTables(arena, &result, &res, context);
    }

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

    result.GetMatchingColumn(column.name)->v.AddAllValuesFromColumn(arena, column);
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
 GetColumnOrder(Arena *arena, native_fhir::ViewDefinition vd, bool reverse = false)
 {
  DataTable res = {};
  for (ViewElem *view = vd.first; view; view = view->next)
  {
   DataTable view_order = GetViewOrder(arena, view);
   res.AddAllColumnsWithoutValues(arena, view_order);
  }

  return res;
 }

 String8List
 ReverseColumns(Arena *arena, DataTable *order)
 {
  String8List order_reversed = {};
  for (DataColumnNode *node = order->first; node; node = node->next)
  {
   Str8ListPushFront(arena, &order_reversed, node->v.name);
  }
  return order_reversed;
 }

 void
 SortColumns(Arena *arena, DataTable *table, String8List order_reversed)
 {
  TimeFunction;
  Temp temp = ScratchBegin(&arena, 1);



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

 local_function
 void
 DataColumn_CopyAllStringsTo(Arena *arena, DataColumn *col)
 {
   ColumnIterator itr = {};
   itr.Init(col, 0);

  if(col->value_type == ColumnValueType::String)
  {
   for (int i = 0; i < col->num_values; i++)
   {
    NullableString8* str = (NullableString8*)itr.Next();
    if (str->has_value)
    {
     str->str8 = PushStr8Copy(arena, str->str8);
    }
   }
  }
  else if (col->value_type == ColumnValueType::Array)
  {
    for (int i = 0; i < col->num_values; i++)
    {
     DataColumn* next_col = (DataColumn*)itr.Next();
     DataColumn_CopyAllStringsTo(arena, next_col);
    }
  }
 }

 void
 DataTable_CopyValuesToArena(Arena *arena, DataTable *table)
 {
  TimeFunction;
  for (DataColumnNode *node = table->first; node; node = node->next)
  {
   // TODO(agw): copy map of strings to reduce duplication
   if (node->v.value_type == ColumnValueType::String)
   {
    ColumnIterator itr = {};
    itr.Init( & (node->v), 0);
    for (int i = 0; i < node->v.num_values; i++)
    {
     NullableString8* str = (NullableString8*)itr.Next();

     if (str->has_value)
     {
      str->str8 = PushStr8Copy(arena, str->str8);
     }

    }
   }
   else if (node->v.value_type == ColumnValueType::Array)
   {
    ColumnIterator itr = {};
    itr.Init(&(node->v), 0);

    for (int i = 0; i < node->v.num_values; i++)
    {
     DataColumn** c = (DataColumn**)itr.Next();
     DataColumn_CopyAllStringsTo(arena, *c);
    }
   }

  }
 }

};