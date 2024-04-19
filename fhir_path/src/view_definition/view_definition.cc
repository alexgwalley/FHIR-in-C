
namespace native_fhir
{
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

  for (int i = 0; i < vd.constant_count; i++)
  {
   Constant c = vd.constants[i];
   std::string name((char*)c.name.str, c.name.size);
   context.constants.insert( { name, c });
  }

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

    CollectionEntryNode *cpy = PushStruct(where_temp.arena, CollectionEntryNode);
    MemoryCopy(cpy, node, sizeof(*node));
    SLLStackPush(context.entry_stack_first, cpy);

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

   DataTableList table_list = {};
   for (ViewElem *v = vd.first; v; v = v->next)
   {
    DataTable next_table = ExecuteView(arena, v, node->v.resource, &context);
    table_list.AddTable(arena, next_table);
   }

   DataTable temp = RowProduct(arena, table_list);

   if (table.column_count == 0) { table = temp; }
   else if(table.column_count == temp.column_count)
   { 
    DataTable_UnionDataTables(arena, &table, &temp, &context); 
   }
  }

  SortColumns(&table, vd);

  return table;
 }
};