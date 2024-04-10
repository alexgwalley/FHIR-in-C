namespace native_fhir
{
 // TODO(agw): should be in header
Piece* Antlr_ParseExpression(String8 str);
Collection ExecutePieces(Arena *arena, FP_ExecutionContext* context);
void PrintCollection(Collection col);

typedef struct VD_Where VD_Where;
struct VD_Where
{
 String8 full_path;
 String8 desc;
};

typedef struct ColumnDef ColumnDef;
struct ColumnDef
{
 String8 full_path;
 String8 name;
};

typedef struct ColumnNode ColumnNode;
struct ColumnNode
{
 ColumnNode* next;
 ColumnDef v;
};

typedef struct ColumnList ColumnList;
struct ColumnList
{
 ColumnNode* first;
 ColumnNode* last;
 size_t count;

 size_t where_count;
 VD_Where* wheres;
};


ColumnList
ParseViewDefinition(Arena* arena, nf_fhir_r4::ViewDefinition* vd)
{

 ColumnList list = {};
 list.wheres = PushArray(arena, VD_Where, vd->_where_count);
 for (int j = 0; j < vd->_where_count; j++)
 {
  nf_fhir_r4::ViewDefinition_Where *where = vd->_where[j];
  list.where_count = vd->_where_count;
  VD_Where w = {};
  w.full_path = where->_path.str8;
  w.desc = where->_description.str8;
  list.wheres[j] = w;
 }

 // TODO(agw): this is recursive...
 for (int j = 0; j < vd->_select_count; j++)
 {
  nf_fhir_r4::ViewDefinition_Select *select = vd->_select[j];
  NullableString8 forEach = select->_forEach;

  for (int k = 0; k < select->_column_count; k++)
  {
   nf_fhir_r4::ViewDefinition_Select_Column *column = select->_column[k];
   NullableString8 name = column->_name;
   NullableString8 path = column->_path;

   // Full Path: Bundle.entry.resource.ofType({resource_name}).{path}
   NullableString8 resource_name = vd->_resource;
   ColumnDef def = {};
   if (forEach.has_value)
   {
    def.full_path = PushStr8F(arena, "%S.%S.%S", resource_name.str8, forEach.str8, path.str8);
   }
   else
   {
    def.full_path = PushStr8F(arena, "%S.%S", resource_name.str8, path.str8);
   }

   def.name = PushStr8Copy(arena, name.str8);
   ColumnNode *node = PushStruct(arena, ColumnNode);
   node->v = def;

   QueuePush(list.first, list.last, node);
   list.count++;
  }

 }

 return list;
}

ColumnList
ParseViewDefinitions(Arena* arena)
{
 nf_fhir_r4::Resource *res;
 ND_ContextNode *ctx_node = ND_DeserializeFile("C:\\Users\\awalley\\Code\\FHIR-in-C\\fhir_path\\view_definitions.json", &res);

 Assert(res->resourceType == ResourceType::Bundle);
 nf_fhir_r4::Bundle *bundle = (nf_fhir_r4::Bundle *)res;

 for (int i = 0; i < bundle->_entry_count; i++)
 {
  nf_fhir_r4::Bundle_Entry *entry = bundle->_entry[i];
  if (entry->_resource == NULL || entry->_resource->resourceType != ResourceType::ViewDefinition)
  {
   continue;
  }

  nf_fhir_r4::ViewDefinition *vd = (nf_fhir_r4::ViewDefinition *)entry->_resource;
 }

 ND_FreeContext(ctx_node);

 ColumnList list = {};
 return list;
}

void
ExecuteViewDefinitions(ColumnList list, FP_ExecutionContext *context, int res_count, nf_fhir_r4::Resource** res)
{

		if (setjmp(context->error_buf) != 0)
		{
			if (context->error_message.size > 0)
			{
				printf("ERROR: %.*s\n", PRINT_STR8(context->error_message));
			}
   return;
		}


 // TODO(agw): this is awful....clean this
 Temp temp = ScratchBegin(0, 0);
 context->res_count = res_count;
 context->resources = res;
 for (int i = 0; i < list.where_count; i++)
 {
  VD_Where where = list.wheres[i];

  Piece* piece = Antlr_ParseExpression(where.full_path);

  Collection passes_where = {};
  int next_res_count = context->res_count;
  nf_fhir_r4::Resource** next_res = context->resources;
  for (int j = 0; j < next_res_count; j++)
  {
   context->root_node = piece;
   context->res_count = 1;
   context->resources = &next_res[j];
   context->entry_stack_first = context->entry_stack_last = &nil_entry_node;
   context->meta_file = g_meta_file;

   Collection single_res = ExecutePieces(temp.arena, context);
   if (single_res.count > 0)
   {
    if (single_res.first->v.b)
    {
     CollectionEntry ent = {};
     ent.type = EntryType::Resource;
     ent.resource = next_res[j];
     CollectionPushEntry(temp.arena, &passes_where, ent);
    }
   }
  }

  int num_true = passes_where.count;
  nf_fhir_r4::Resource** next_resources = PushArray(temp.arena, nf_fhir_r4::Resource*, num_true);
  int j = 0;
  int next_idx = 0;
  for (CollectionEntryNode *n = passes_where.first; n; n = n->next, j++)
  {
   next_resources[next_idx] = n->v.resource;
   next_idx++;
  }

  context->res_count = num_true;
  context->resources = next_resources;
 }

 // TODO(agw): first filter the resources, then execute path for each resource
 int next_res_count = context->res_count;
 nf_fhir_r4::Resource** next_res = context->resources;

 for (int i = 0; i < next_res_count; i++)
 {
  for (ColumnNode *node = list.first; node; node = node->next)
  {
   context->res_count = 1;
   context->resources = &next_res[i];

   Temp inner_temp = ScratchBegin(&temp.arena, 1);
   String8 path_expr = node->v.full_path;
   Piece* piece = Antlr_ParseExpression(path_expr);
   context->root_node = piece;
   CollectionEntry res_entry = {};
   Collection col = ExecutePieces(temp.arena, context);
   PrintCollection(col);
   ScratchEnd(inner_temp);
  }
 }


 ScratchEnd(temp);
}

inline String8
String8FromStringView(Arena* arena, std::string_view view)
{
	String8 str = {};
	str.size = view.size();
	str.str = (U8*)view.data();
 return PushStr8Copy(arena, str);
}

FP_TestResult
DeserializeTestResult(Arena *arena, simdjson::ondemand::object base)
{
 FP_TestResult res = {};

 return res;
}

FP_Test
DeserializeTest(Arena *arena, simdjson::ondemand::object base)
{
 FP_Test test = {};

 std::string_view title = base["title"];
 test.title = String8FromStringView(arena, title);

 S64 count = 0;

 simdjson::ondemand::object view_obj = base["view"];
 std::string_view view = view_obj.raw_json();
 String8 str = {};
 str.size = view.size() + 64;
 str.str = (U8*)view.data();

 str.str = PushArray(arena, U8, str.size);
 MemoryCopy(str.str, view.data(), str.size);

 nf_fhir_r4::Resource* res = 0;

 ND_ContextNode *context = ND_DeserializeStringOfType((char*)str.str, str.size, &res, nf_fhir_r4::ResourceType::ViewDefinition);
 test.ctx = context;

 Assert(res->resourceType == nf_fhir_r4::ResourceType::ViewDefinition);
 test.vd = (nf_fhir_r4::ViewDefinition*)res;

 return test;
}

FP_TestCollection
DeserializeTestCollection(Arena *arena, String8 file_name)
{
 FP_TestCollection col = { };

 std::string_view file_string_view ( (char*)file_name.str, file_name.size );
 auto json = simdjson::padded_string::load(file_string_view);

 simdjson::ondemand::parser parser;
 simdjson::ondemand::document simd_doc = parser.iterate(json);
 simdjson::ondemand::object base = simd_doc.get_object();

 std::string_view title = base["title"];
 col.title = String8FromStringView(arena, title);

 std::string_view desc = base["description"];
 col.desc = String8FromStringView(arena, desc);

 for (simdjson::ondemand::object obj : base["resources"])
 {
 col.res_count++;
 }

 base.reset();

 col.res = PushArray(arena, nf_fhir_r4::Resource*, col.res_count);

 int res_i = 0;
 for (simdjson::ondemand::object obj : base["resources"])
 {
  std::string_view view = obj.raw_json();
  String8 str = {};
  str.size = view.size() + 64;
  str.str = (U8*)view.data();

  str.str = PushArray(arena, U8, str.size);
  MemoryCopy(str.str, view.data(), str.size);

  nf_fhir_r4::Resource* res = 0;

  ND_ContextNode *context = ND_DeserializeString((char*)str.str, str.size, &res);

  col.res[res_i] = res;
  res_i++;

  // TODO(agw): should be able to deserialize into arena...(?)
  QueuePush(col.ctx_first, col.ctx_last, context);
 }

 for (simdjson::ondemand::object obj : base["tests"])
 {
  col.test_count++;
 }

 base.reset();


 col.tests = PushArray(arena, FP_Test, col.test_count);
 int i = 0;
 for (simdjson::ondemand::object obj : base["tests"])
 {
  col.tests[i] = DeserializeTest(arena, obj);
  i++;
 }

 return col;
}

void
ExecuteTestCollection(FP_TestCollection col)
{
 Temp temp = ScratchBegin(0, 0);

	FP_ExecutionContext context = { 0 };
	context.arena = ArenaAlloc(Gigabytes(1));
 context.entry_stack_first = context.entry_stack_last = &nil_entry_node;
 context.meta_file = g_meta_file;

 for (int i = 0; i < col.test_count; i++)
 {
  FP_Test test = col.tests[i];

  printf("==========================================\n");
  printf("Test: %.*s\n", test.title.size, test.title.str);
  ColumnList columns = ParseViewDefinition(temp.arena, test.vd);

  ExecuteViewDefinitions(columns, &context, col.res_count, col.res);
 }

 ScratchEnd(temp);
}

void
ReadAndExecuteTests(String8 test_folder)
{
 String8 test_file_name = Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\basic.json");


 Temp temp = ScratchBegin(0, 0);
 FP_TestCollection test_col = DeserializeTestCollection(temp.arena, test_file_name);

 ExecuteTestCollection(test_col);

 // TODO(agw): would love if these were all in one arena
 for (int i = 0; i < test_col.test_count; i++)
 {
  ND_FreeContext(test_col.tests[i].ctx);
 }

 for (ND_ContextNode* node = test_col.ctx_first; node; node = node->next)
 {
  ND_FreeContext(node);
 }

 ScratchEnd(temp);
}

};