
namespace native_fhir
{
 DataTable
 ExecuteViewDefinition(Arena *arena,
                       native_fhir::ViewDefinition vd,
                       ResourceStringProvider* resource_provider)
 {
  DataTable table = GetColumnOrder(arena, vd);

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
  ResourceStringHandle handle = 0;
  while ((handle = resource_provider->GetNextString()))
  {
   NullableString8 resource_string = resource_provider->GetStringValue(handle);
   FHIR_VERSION::Resource *res;
   ND_ContextNode *resource_context;
   TimeBlock("Deserialize")
   {
    resource_context = ND_DeserializeString((char*)resource_string.str, resource_string.size, &res);
   }


   Collection valid_resources = {};
   if (vd.resource_type != ResourceType::Bundle && res->resourceType == ResourceType::Bundle)
   {
    FHIR_VERSION::Bundle* bundle = (FHIR_VERSION::Bundle*)res;
    for (int i = 0; i < bundle->_entry_count; i++)
    {
     if (bundle->_entry[i]->_resource->resourceType == vd.resource_type)
     {
      CollectionEntry ent = {};
      ent.resource = bundle->_entry[i]->_resource;
      ent.type = EntryType::Resource;
      CollectionPushEntry(arena, &valid_resources, ent);
     }
    }
   }
   else
   {
    CollectionEntry ent = {};
    ent.resource = res;
    ent.type = EntryType::Resource;
    CollectionPushEntry(arena, &valid_resources, ent);
   }



   // ~ Filter out resources using where statements
   Temp where_temp = ScratchBegin(&arena, 1);
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

     Piece* root_piece = Antlr_ParseExpression(where_node->string);
     context.Set(1, &node->v.resource, root_piece);

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

   Temp view_temp = ScratchBegin(&arena, 1);
   // for each resource
   for (CollectionEntryNode *node = valid_resources.first; node; node = node->next)
   {
    if (node->v.type != EntryType::Resource) continue;

    DataTableList table_list = {};
    for (ViewElem *v = vd.first; v; v = v->next)
    {
     DataTable next_table = ExecuteView(view_temp.arena, v, node->v.resource, &context);
     table_list.AddTable(view_temp.arena, next_table);
    }

    DataTable temp = RowProduct(view_temp.arena, table_list);
    SortColumns(view_temp.arena, &temp, vd);
    // NOTE(agw): before we merge, we want to make sure that the strings will stay
    DataTable_CopyAllStringsTo(arena, &temp);
    DataTable_UnionDataTables(arena, &table, &temp, &context);
   }
   ScratchEnd(view_temp);

   SortColumns(arena, &table, vd);

   ND_FreeContext(resource_context);
  }

  return table;
 }
};