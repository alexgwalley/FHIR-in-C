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
  }

  last->count++;
  num_values++;
 }

 void
 DataColumn::AddAllValuesFromColumn(Arena *arena, DataColumn col)
 {
  if (col.value_type == ColumnValueType::Unknown)
  {
   ColumnValue val = {};
   val.value_type = ColumnValueType::Null;
   this->AddValue(arena, val);
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
 DataTable_UnionDataTables(Arena *arena, DataTable *dst, DataTable* src)
 {
  // ~ Add columns that if not present,
  for (DataColumnNode *node = src->first; node; node = node->next)
  {
   DataColumnNode *matching_node = dst->GetMatchingColumn(node->v.name);
   if (!matching_node) { throw; }

   matching_node->v.AddAllValuesFromColumn(arena, node->v);
  }

 }

 local_function void
 DataTable_CrossJoin(DataTable *dst, DataTable* src)
 {
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

    DataTable column_result = {};
    for (View *node = view->column_first; node; node = node->next)
    {
     DataTable node_table = ExecuteView(arena, node, resource, context);

     if (view->is_union)
     {
      DataTable_UnionDataTables(arena, &column_result, &node_table);
     }
     else
     {
      // Since we are select, just append a new column
      for (DataColumnNode *col_node = node_table.first; col_node; col_node = col_node->next)
      {
       FP_Assert(col_node->v.num_values == 1, context, Str8Lit(""));
       column_result.AddColumn(arena, col_node->v);
      }

     }
    }

    DataTable select_result = {};
    S64 num_values = 0;
    for (View *node = view->select_first; node; node = node->next)
    {
     DataTable next_table = ExecuteView(arena, node, resource, context);
     for (DataColumnNode *col_node = next_table.first;
          col_node;
          col_node = col_node->next)
     {
      if (num_values == 0)
      {
       num_values = col_node->v.num_values;
      }
      else
      {
       FP_Assert(num_values == col_node->v.num_values, context, Str8Lit("Mismatch on column lengths in child select(s)"));
      }

      select_result.AddColumn(arena, col_node->v);
     }
    }

    /*
     ~ Combine select and column results.

     Each Column result should only have one value
     Repeat that value for every row required from the select(s)

     The lengths of all the select(s) _should_ be the same length (I think)
    */

    for (DataColumnNode * col_node = column_result.first; col_node; col_node = col_node->next)
    {
     if (num_values > 0)
     {
      Assert(col_node->v.num_values <= num_values);

      while (col_node->v.num_values < num_values)
      {
       // ~ Repeat the last value
       ColumnValue val = col_node->v.GetLastValue();
       col_node->v.AddValue(arena, val);
      }
     }

     result.AddColumn(arena, col_node->v);
    }

    // TODO(agw): not sure if we want to do this here or at a higher level
    /*
    for (View *node = view->next; node; node = node->next)
    {
     DataTable next_table = ExecuteView(arena, view, resource, context);
     DataTable_CrossJoin(&result, &next_table);
    }
   */

   } break;
   case ViewType::Column:
   {
    context->Set(1, &resource, view->path.str8);

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

   DataTable temp = ExecuteView(arena, vd.first, node->v.resource, &context);

   if (table.column_count == 0) { table = temp; }
   else { DataTable_UnionDataTables(arena, &table, &temp); }
  }

  return table;
 }

};