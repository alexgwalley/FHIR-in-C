#include <limits.h>

namespace native_fhir
{

 // TODO(agw): needs to be in header file
 Piece* Antlr_ParseExpression(String8 str);

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

  if (col.value_type == ColumnValueType::Unknown)
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
 DataTable_UnionDataTables(Arena *arena, DataTable *dst, DataTable* src, FP_ExecutionContext *context)
 {
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

 local_function DataTable
 DataTable_CrossJoin(Arena *arena, DataTable *dst, DataTable* src)
 {
  DataTable ret = {};

  // For each row in the first, add all values of the second, repeating the value in the first
  for (DataColumnNode *col = dst->first; col; col = col->next)
  {
   DataColumn new_column = {};
   new_column.name = col->v.name;
   new_column.value_type = col->v.value_type;

   DataColumnNode* new_column_node = ret.AddColumn(arena, new_column);

   for (DataChunkNode *node = col->v.first; node; node = node->next)
   {
    // For each value, repeat for row count in the other table
    for (int val_idx = 0; val_idx < node->count; val_idx++)
    {
     ColumnValue val = {};
     switch (col->v.value_type)
     {
      default: NotImplemented;
      case ColumnValueType::Unknown:
      {
       val.value_type = ColumnValueType::Null;
      } break;
      case ColumnValueType::String:
      {
       val.value_type = ColumnValueType::String;
       NullableString8* array = (NullableString8*)node->data;
       val.str = array[val_idx];
      } break;
      case ColumnValueType::Boolean:
      {
       val.value_type = ColumnValueType::Boolean;
       NullableBoolean* array = (NullableBoolean*)node->data;
       val.b = array[val_idx];
      } break;
      case ColumnValueType::ISO8601_Time:
      {
       val.value_type = ColumnValueType::ISO8601_Time;
       ISO8601_Time* array = (ISO8601_Time*)node->data;
       val.time = array[val_idx];
      } break;
      case ColumnValueType::Int32:
      {
       val.value_type = ColumnValueType::Int32;
       NullableInt32* array = (NullableInt32*)node->data;
       val.s32 = array[val_idx];
      } break;
      case ColumnValueType::Int64:
      {
       val.value_type = ColumnValueType::Int64;
       NullableInt64* array = (NullableInt64*)node->data;
       val.s64 = array[val_idx];
      } break;
      case ColumnValueType::Double:
      {
       val.value_type = ColumnValueType::Double;
       NullableDouble* array = (NullableDouble*)node->data;
       val._double = array[val_idx];
      } break;
      case ColumnValueType::Array:
      {
       val.value_type = ColumnValueType::Array;
       DataColumn** array = (DataColumn**)node->data;
       val.array = array[val_idx];
      } break;
     }

     for (int i = 0; i < src->GetRowCount(); i++) { new_column_node->v.AddValue(arena, val); }

     // ~ Copy all values from src for each row in dst
    }
   }

   if (new_column_node->v.num_values == 0)
   {
    ret.RemoveColumn(new_column_node);
   }
  }

  if (dst->GetRowCount() > 0)
  {
   for (DataColumnNode *src_col = src->first; src_col; src_col = src_col->next)
   {
    DataColumn col = src_col->v;

    for (S64 i = 0; i < dst->GetRowCount() - 1; i++)
    {
     col.AddAllValuesFromColumn(arena, src_col->v);
    }

    ret.AddColumn(arena, col);
   }
  }

  return ret;
 }

 local_function void 
 DataColumn_AddCollectionEntry(Arena *arena, FP_ExecutionContext *context, DataColumn *column, CollectionEntry ent)
 {
  if (column->value_type == ColumnValueType::Unknown)
  {
   switch (ent.type)
   {
    case EntryType::String: { column->value_type = ColumnValueType::String; } break;
    case EntryType::Boolean: { column->value_type = ColumnValueType::Boolean; } break;
    case EntryType::Iso8601: { column->value_type = ColumnValueType::ISO8601_Time; } break;
    case EntryType::Number: {
     if(ent.number.type == Number_Integer) { column->value_type = ColumnValueType::Int64; }
     else if(ent.number.type == Number_Decimal) { column->value_type = ColumnValueType::Double; }
    } break;
    default: FP_Assert(false, context, PushStr8F(context->arena, "Unknown Value Type for column \"%S\"", column->name) );
   }
  }

  DataChunkNode *chunk_node = column->last;
  if (!chunk_node)
  {
   chunk_node = column->AddChunk(arena);
  } else if (chunk_node->count > chunk_node->max_count)
  {
   chunk_node = column->AddChunk(arena);
  }

  column->num_values++;

  switch (ent.type)
  {
   default: NotImplemented; break;
   case EntryType::Boolean: 
   { 
    FP_Assert(column->value_type == ColumnValueType::Boolean, context, 
              PushStr8F(context->arena,
                        "Trying to assign a boolean value to column %S, when the column's type is not boolean",
                        column->name));

    NullableBoolean* bool_ptr = (NullableBoolean*)chunk_node->data;
    NullableBoolean value = {};
    value.has_value = true;
    value.value = ent.b;
    bool_ptr[chunk_node->count] = value;
    chunk_node->count++;

   } break;
   case EntryType::String: 
   {
    FP_Assert(column->value_type == ColumnValueType::String, context, 
              PushStr8F(context->arena,
                        "Trying to assign a string value to column %S, when the column's type is not string",
                        column->name));

    NullableString8* string_ptr = (NullableString8*)chunk_node->data;
    string_ptr[chunk_node->count] = ent.str;
    chunk_node->count++;

   } break;
   case EntryType::Iso8601:
   {
    FP_Assert(column->value_type == ColumnValueType::ISO8601_Time, context, 
              PushStr8F(context->arena,
                        "Trying to assign a Date/Time value to column %S, when the column's type is not Date/Time",
                        column->name));

    ISO8601_Time* string_ptr = (ISO8601_Time*)chunk_node->data;
    string_ptr[chunk_node->count] = ent.time;
    chunk_node->count++;

   } break;
   case EntryType::Number:
   {
    switch (column->value_type)
    {
     case ColumnValueType::Int32:
     {
      if (ent.number.type != Number_Integer || ent.number.s64 > INT_MAX) { throw; }
      S32 s32 = (S32)ent.number.s64;

      S32* string_ptr = (S32*)chunk_node->data;
      string_ptr[chunk_node->count] = s32;
      chunk_node->count++;

     } break;
     case ColumnValueType::Int64:
     {
      S64* string_ptr = (S64*)chunk_node->data;
      string_ptr[chunk_node->count] = ent.number.s64;
      chunk_node->count++;
     } break;
     case ColumnValueType::Double:
     {
      F64* string_ptr = (F64*)chunk_node->data;
      F64 double_value = DoubleFromDecimal(ent.number.decimal);
      string_ptr[chunk_node->count] = double_value;

      chunk_node->count++;
     } break;
    }

   } break;
  }

 }

 local_function DataTable
 ExecuteView(Arena *arena, View* view, nf_fhir_r4::Resource* resource, FP_ExecutionContext* context)
 {
  DataTable result = {};

  switch (view->type)
  {
   case ViewType::Select:
   {
    // This whole thing could be wrapped in a forEach
    Temp temp = ScratchBegin(&arena, 1);

    Collection resources = {};
    if (view->for_each.has_value)
    {
     context->Set(1, &resource, view->for_each.str8);
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


     // ~ Calculate Columns
     DataTable column_result = {};
     for (View *node = view->column_first; node; node = node->next)
     {
      DataTable node_table = ExecuteView(arena, node, ent_node->v.resource, context);

      // Since we are select, just append a new column
      for (DataColumnNode *col_node = node_table.first; col_node; col_node = col_node->next)
      {
       FP_Assert(col_node->v.num_values == 1, context, Str8Lit(""));
       column_result.AddColumn(arena, col_node->v);
      }
     }

     // ~ Calculate Select
     DataTable select_result = {};
     if (view->select_first)
     {
      for (View *v = view->select_first; v; v = v->next)
      {
       DataTable next_table = ExecuteView(arena, v, ent_node->v.resource, context);
       if (select_result.column_count == 0 && v == view->select_first)
       {
        select_result = next_table;
       }
       else
       {
        select_result = DataTable_CrossJoin(arena, &select_result, &next_table);
       }
      }
     }

     // ~ Calculate Union
     DataTable union_result = {};
     if (view->union_first)
     {
      for (View *v = view->union_first; v; v = v->next)
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
     }

     DataTable parts = {};
     if (parts.column_count == 0)
     {
      parts = column_result;
     }
     else
     {
      parts = DataTable_CrossJoin(arena, &parts, &column_result);
     }

     if (view->select_count > 0)
     {
      if (parts.column_count == 0)
      {
       parts = select_result;
      }
      else
      {
       parts = DataTable_CrossJoin(arena, &parts, &select_result);
      }
     }

     if (view->union_count > 0)
     {
      if (parts.column_count == 0)
      {
       parts = union_result;
      }
      else
      {
       parts = DataTable_CrossJoin(arena, &parts, &union_result);
      }
     }



     /*
      ~ Combine union, select, and column results.

      Each Column result should only have one value
      Repeat that value for every row required from the select(s)

      The lengths of all the select(s) _should_ be the same length (I think)
     */

     /*
     size_t row_count = parts.GetRowCount();
     for (DataColumnNode * col_node = column_result.first; col_node; col_node = col_node->next)
     {
      if (row_count > 0)
      {
       Assert(col_node->v.num_values <= row_count);

       while (col_node->v.num_values < row_count)
       {
        // ~ Repeat the last value
        ColumnValue val = col_node->v.GetLastValue();
        col_node->v.AddValue(arena, val);
       }
      }

      select_result.AddColumn(arena, col_node->v);
     }
      */

     // ~ Add all values to result
     for (DataColumnNode *temp_node = parts.first; temp_node; temp_node = temp_node->next)
     {
      DataColumnNode *matching_node = result.GetMatchingColumn(temp_node->v.name);
      if (matching_node)
      {
       matching_node->v.AddAllValuesFromColumn(arena, temp_node->v);
      }
      else
      {
       result.AddColumn(arena, temp_node->v);
      }
     }

    }

    ScratchEnd(temp);
   } break;
   case ViewType::Column:
   {
    // NOTE(agw): we do _not_ want to zero out the entry stack here, should be set in parent select
    context->root_node = Antlr_ParseExpression(view->path.str8);
    context->res_count = 1;
    context->resources = &resource;

    CollectionEntry res_entry = {};
    Collection col = ExecutePieces(arena, context);

    DataColumn column = {};
    column.name = view->name.str8;
    column.value_type = view->data_type;

    for (CollectionEntryNode *node = col.first; node; node = node->next)
    {
     CollectionEntry ent = node->v;
     DataColumn_AddCollectionEntry(arena, context, &column, ent);
    }

    if (col.count == 0)
    {
     ColumnValue null_value = {};
     null_value.value_type = ColumnValueType::Null;
     column.AddValue(arena, null_value);
    }

    result.AddColumn(arena, column);
   } break;
  }

  return result;
 }

 DataTable
 ExecuteViewDefinition(Arena *arena,
                       native_fhir::ViewDefinition vd,
                       Collection resources)
 {
  DataTable table = {};

  FP_ExecutionContext context = { 0 };
  context.arena = ArenaAlloc(Megabytes(64));
  context.entry_stack_first = context.entry_stack_last = &nil_entry_node;
  context.meta_file = g_meta_file;

  // ~ Set on-error
  if (setjmp(context.error_buf) != 0)
  {
   if (context.error_message.size > 0)
   {
    printf("ERROR: %.*s\n", PRINT_STR8(context.error_message));
   }

   DataTable data_table = {};
   data_table.execution_error = true;
   ArenaRelease(context.arena);
   return data_table;
  }

  // ~ Make a copy of the resources collection
  Collection valid_resources = {};
  for (CollectionEntryNode *node = resources.first; node; node = node->next)
  {
   CollectionPushEntry(arena, &valid_resources, node->v);
  }

  // ~ Filter out resources using where statements
  Temp where_temp = ScratchBegin(0, 0);
  for (String8Node *where_node = vd.where.first; where_node; where_node = where_node->next)
  {
   for (CollectionEntryNode *node = valid_resources.first; node; node = node->next)
   {
    // TODO(agw): we don't need to evaluate the where_node path every time
    if (node->v.resource->resourceType != vd.resource_type)
    {
     DLLRemove(valid_resources.first, valid_resources.last, node);
     valid_resources.count--;
     continue;
    }

    context.Set(1, &node->v.resource, where_node->string);

    Collection single_res = ExecutePieces(where_temp.arena, &context);
    if (single_res.count == 0 || !single_res.first->v.b)
    {
     DLLRemove(valid_resources.first, valid_resources.last, node);
     valid_resources.count--;
    }
   }
  }
  ScratchEnd(where_temp);

  // for each resource
  for (CollectionEntryNode *node = valid_resources.first; node; node = node->next)
  {
   if (node->v.type != EntryType::Resource) continue;

   DataTable temp = {};

   for (View *v = vd.first; v; v = v->next)
   {
    DataTable next_table = ExecuteView(arena, v, node->v.resource, &context);
    if (temp.column_count == 0 && v == vd.first)
    {
     temp = next_table;
    }
    else
    {
     temp = DataTable_CrossJoin(arena, &temp, &next_table);
    }
   }

   if (table.column_count == 0) { table = temp; }
   else { DataTable_UnionDataTables(arena, &table, &temp, &context); }
  }

  return table;
 }

};