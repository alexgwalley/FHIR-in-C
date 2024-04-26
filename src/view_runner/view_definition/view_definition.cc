namespace native_fhir
{

 std::atomic<U64> g_res_id;

 DataTable
 ExecuteViewDefinition(Arena *arena,
                       native_fhir::ViewDefinition vd,
                       ResourceStringProvider* resource_provider,
                       int stopping_count = 0)
 {
  TimeFunction;
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

  DataTable order = GetColumnOrder(arena, vd);
  String8List order_reversed = ReverseColumns(arena, &order);

  // ~ Make a copy of the resources collection
  ResourceStringHandle handle = 0;
  ResourceSource next_source = {};
  while ((next_source = resource_provider->GetNextSource()).type != ResourceSourceType::Unknown)
  {
   if (stopping_count > 0 && next_source.id > stopping_count) break;
   if (next_source.id % 10000 == 0) std::cout << next_source.id << std::endl;

   // NOTE(agw): we can clear these because we don't have references across Bundles
   context.unique_ids.clear();

   U64 resource_id_start;

   FHIR_VERSION::Resource *res;
   ND_ContextNode *resource_context;
   TimeBlock("Deserialize")
   {
    Temp temp = ScratchBegin(&arena, 1);
    if (next_source.type == ResourceSourceType::FileName)
    {
     String8 fn = PushStr8Copy(temp.arena, next_source.file_name);
     resource_context = ND_DeserializeFile((const char*)fn.str, &res);
    }
    else if (next_source.type == ResourceSourceType::String)
    {
     NullableString8 res_str = resource_provider->GetStringValue(next_source.string_handle);
     resource_context = ND_DeserializeString((char*)res_str.str, res_str.size, &res);
    }
    ScratchEnd(temp);
   }

   Collection valid_resources = {};
   if (vd.resource_type != ResourceType::Bundle && res->resourceType == ResourceType::Bundle)
   {
    FHIR_VERSION::Bundle* bundle = (FHIR_VERSION::Bundle *)res;
    resource_id_start = g_res_id.fetch_add(bundle->_entry_count);


   Temp t = ScratchBegin(&arena, 1);

   U64 resource_id = resource_id_start;
    for (int i = 0; i < bundle->_entry_count; i++, resource_id++)
    {
     ArenaPopTo(t.arena, t.pos);
     std::string str = StdStringFromString8(bundle->_entry[i]->_resource->_id.str8);
     context.unique_ids.insert( { str, resource_id });
     context.resource_type.insert( { resource_id,  bundle->_entry[i]->_resource->resourceType });

     if (bundle->_entry[i]->_resource->resourceType == vd.resource_type)
     {
      CollectionEntry ent = {};
      ent.resource = bundle->_entry[i]->_resource;
      ent.type = EntryType::Resource;
      CollectionPushEntry(arena, &valid_resources, ent);
     }
    }

   ScratchEnd(t);

   }
   else if (vd.resource_type != res->resourceType)
   {
    continue;
   }
   else
   {
    CollectionEntry ent = {};
    ent.resource = res;
    ent.type = EntryType::Resource;
    CollectionPushEntry(arena, &valid_resources, ent);

    resource_id_start = g_res_id.fetch_add(1);

     std::string str = StdStringFromString8(res->_id.str8);
     context.unique_ids.insert( { str, resource_id_start });
     context.resource_type.insert( { resource_id_start,  res->resourceType });
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

   U64 resource_id = resource_id_start;
   for (CollectionEntryNode *node = valid_resources.first; node; node = node->next, resource_id++)
   {
    context.unique_id = resource_id;
    if (node->v.type != EntryType::Resource) continue;

    DataTableList table_list = {};
    for (ViewElem *v = vd.first; v; v = v->next)
    {
     DataTable next_table = ExecuteView(view_temp.arena, v, node->v.resource, &context);
     table_list.AddTable(view_temp.arena, next_table);
    }

    DataTable temp = RowProduct(view_temp.arena, table_list);
    SortColumns(view_temp.arena, &temp, order_reversed);

    DataTable_CopyValuesToArena(arena, &temp);
    DataTable_UnionDataTables(arena, &table, &temp, &context);
   }
   ScratchEnd(view_temp);

   SortColumns(arena, &table, order_reversed);

   ND_FreeContext(resource_context);
  }

  return table;
 }
};