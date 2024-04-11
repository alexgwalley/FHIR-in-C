namespace native_fhir
{
 // TODO(agw): should be in header
Piece* Antlr_ParseExpression(String8 str);
Collection ExecutePieces(Arena *arena, FP_ExecutionContext* context);
void PrintCollection(Collection col);

local_function void
MergeColumnLists(ColumnList *dst, ColumnList *src)
{
 if (dst->last)
 {
  dst->last->next = src->first;
  dst->last = src->first;
 }
 else
 {
  dst->first = src->first;
  dst->last = src->last;
 }

 dst->count += src->count;
}

local_function ColumnList
ParseViewSelect(Arena *arena, nf_fhir_r4::ViewDefinition_Select* select, String8 resource_name)
{
 ColumnList list = {};
 NullableString8 forEach = select->_forEach;

 for (int k = 0; k < select->_column_count; k++)
 {
  nf_fhir_r4::ViewDefinition_Select_Column *column = select->_column[k];
  NullableString8 name = column->_name;
  NullableString8 path = column->_path;

  ColumnDef def = {};
  if (forEach.has_value)
  {
   def.full_path = PushStr8F(arena, "%S.%S.%S", resource_name, forEach.str8, path.str8);
  }
  else
  {
   def.full_path = PushStr8F(arena, "%S.%S", resource_name, path.str8);
  }
  def.name = PushStr8Copy(arena, name.str8);
  def.collection = column->_collection;

  ColumnNode *node = PushStruct(arena, ColumnNode);
  node->v = def;

  QueuePush(list.first, list.last, node);
  list.count++;
 }

 for (int j = 0; j < select->_select_count; j++)
 {
  nf_fhir_r4::ViewDefinition_Select *inner_select = select->_select[j];
  ColumnList inner_list = ParseViewSelect(arena, inner_select, resource_name);
  MergeColumnLists(&list, &inner_list);
 }

 return list;
}

local_function ColumnList
ParseViewDefinition(Arena* arena, nf_fhir_r4::ViewDefinition* vd)
{

 ColumnList list = {};
 list.wheres = PushArray(arena, VD_Where, vd->_where_count);
 for (int j = 0; j < vd->_where_count; j++)
 {
  nf_fhir_r4::ViewDefinition_Where *where = vd->_where[j];
  list.where_count = vd->_where_count;
  VD_Where w = {};
  w.full_path = PushStr8F(arena, "%S.%S", vd->_resource.str8, where->_path.str8);
  w.desc = where->_description.str8;
  list.wheres[j] = w;
 }

 // TODO(agw): this is recursive...
 for (int j = 0; j < vd->_select_count; j++)
 {
  nf_fhir_r4::ViewDefinition_Select *select = vd->_select[j];
  Assert(vd->_resource.has_value);
  ColumnList inner_list = ParseViewSelect(arena, select, vd->_resource.str8);
  MergeColumnLists(&list, &inner_list);
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
ExecuteViewDefinitions(ColumnList columns, FP_Test test, FP_ExecutionContext *context, int res_count, nf_fhir_r4::Resource** res)
{

 if (setjmp(context->error_buf) != 0)
 {
  if (context->error_message.size > 0)
  {
   printf("ERROR: %.*s\n", PRINT_STR8(context->error_message));
  }
  return;
 }

 Temp temp = ScratchBegin(0, 0);
 context->res_count = res_count;
 context->resources = res;

 Collection valid_resources = {};
 for (int i = 0; i < res_count; i++)
 {
  const ResourceNameTypePair* pair = NF_ResourceNameTypePairFromString8(test.vd->_resource.str8);
  if (pair && (nf_fhir_r4::ResourceType)pair->type != res[i]->resourceType) continue;
  CollectionEntry ent = {};
  ent.type = EntryType::Resource;
  ent.resource = res[i];
  CollectionPushEntry(temp.arena, &valid_resources, ent);
 }


 for (int i = 0; i < columns.where_count; i++)
 {
  VD_Where where = columns.wheres[i];
  Piece* piece = Antlr_ParseExpression(where.full_path);

  for (CollectionEntryNode *node = valid_resources.first; node; node = node->next)
  {
   context->root_node = piece;
   context->res_count = 1;
   context->resources = &node->v.resource;
   context->entry_stack_first = context->entry_stack_last = &nil_entry_node;
   context->meta_file = g_meta_file;

   Collection single_res = ExecutePieces(temp.arena, context);
   if (single_res.count == 0 || !single_res.first->v.b)
   {
    DLLRemove(valid_resources.first, valid_resources.last, node);
    valid_resources.count--;
   }
  }
 }

 int next_res_count = valid_resources.count;
 nf_fhir_r4::Resource** next_res = PushArray(temp.arena, nf_fhir_r4::Resource*, valid_resources.count);

 int idx = 0;
 for (CollectionEntryNode *node = valid_resources.first; node; node = node->next, idx++)
 {
  next_res[idx] = node->v.resource;
 }

 DataTable data_table = {};
 data_table.num_rows = next_res_count;
 data_table.rows = PushArray(temp.arena, DataRow, data_table.num_rows);

 for (int i = 0; i < next_res_count; i++)
 {
  DataRow *row = &data_table.rows[i];
  row->count = columns.count;
  row->data = PushArray(temp.arena, Collection, next_res_count);

  for (ColumnNode *node = columns.first; node; node = node->next)
  {
   context->res_count = 1;
   context->resources = &next_res[i];

   Temp inner_temp = ScratchBegin(&temp.arena, 1);
   context->root_node = Antlr_ParseExpression(node->v.full_path);

   CollectionEntry res_entry = {};
   Collection col = ExecutePieces(temp.arena, context);
   MergeCollections(&row->data[i], &col);

   if (node->v.collection.has_value && node->v.collection.value == false && col.count > 1)
   {
    // TODO(agw): passes test
    if (test.expect_error) return;
    FP_Assert(false, context, Str8Lit("Test may not have collection"));
   }

   ScratchEnd(inner_temp);
  }
 }

 // ~ Compare results
 for (int i = 0; i < test.expectations.num_rows; i++)
 {
  DataRow expectation = test.expectations.rows[i];
//  B32 equal = CollectionEqual(all_columns, expectation);
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

Collection
CollectionFromTestArray(Arena *arena, simdjson::ondemand::array array)
{
 Collection col = {};

 for (auto field : array)
 {
  simdjson::ondemand::value value = field.value();
  switch (value.type())
  {
			{
				std::string_view str_view;
				auto res = value.get(str_view);
				Assert(res == simdjson::error_code::SUCCESS);

    String8 str8 = String8FromStringView(arena, str_view);
    CollectionEntry ent = CollectionEntryFromString(str8);
    CollectionPushEntry(arena, &col, ent);
			} break;
			case simdjson::ondemand::json_type::number:
			{
    auto raw_value = field.value().raw_json();
    Assert(raw_value.error() == simdjson::error_code::SUCCESS);

    std::string_view view = raw_value.value_unsafe();

    String8 str = String8FromStringView(arena, view);
    Number num = Number::FromString(str);

    CollectionEntry ent = CollectionEntryFromNumber(num);
    CollectionPushEntry(arena, &col, ent);
			} break;
			case simdjson::ondemand::json_type::boolean: // copy into dest
			{
				bool _boolean;
				auto res = value.get(_boolean);
				Assert(res == simdjson::error_code::SUCCESS);

    CollectionEntry ent = CollectionEntryFromBoolean((B32)_boolean);
    CollectionPushEntry(arena, &col, ent);
			} break;

   case simdjson::ondemand::json_type::array:
   case simdjson::ondemand::json_type::object:
   {
    NotImplemented;
   } break;
  }
 }

 return col;
}

DataRow
DeserializeTestResult(Arena *arena, simdjson::ondemand::object base)
{
 DataRow test_res = {};
 //test_res.columns = PushStruct(arena, ColumnList);

 for (auto field : base) { test_res.count++; }

 base.reset();

 int i = 0;
 for (auto field : base)
 {
		String8 key = String8FromStringView(arena, field.unescaped_key());
  Str8ListPush(arena, &test_res.column_names, key);

  simdjson::ondemand::value value = field.value();
  switch (value.type())
		{
			case simdjson::ondemand::json_type::string:
			{
				std::string_view str_view;
				auto res = value.get(str_view);
				Assert(res == simdjson::error_code::SUCCESS);

    String8 str8 = String8FromStringView(arena, str_view);
    CollectionEntry ent = CollectionEntryFromString(str8);
    CollectionPushEntry(arena, &test_res.data[i], ent);
			} break;
			case simdjson::ondemand::json_type::number:
			{
    auto raw_value = field.value().raw_json();
    Assert(raw_value.error() == simdjson::error_code::SUCCESS);

    std::string_view view = raw_value.value_unsafe();

    String8 str = String8FromStringView(arena, view);
    Number num = Number::FromString(str);

    CollectionEntry ent = CollectionEntryFromNumber(num);
    CollectionPushEntry(arena, &test_res.data[i], ent);
			} break;
			case simdjson::ondemand::json_type::boolean: // copy into dest
			{
				bool _boolean;
				auto res = value.get(_boolean);
				Assert(res == simdjson::error_code::SUCCESS);

    CollectionEntry ent = CollectionEntryFromBoolean((B32)_boolean);
    CollectionPushEntry(arena, &test_res.data[i], ent);
			} break;
			case simdjson::ondemand::json_type::object: // copy into dest
			{
    NotImplemented;
			} break;
			case simdjson::ondemand::json_type::array:
			{
				simdjson::ondemand::array arr;
				auto res = value.get(arr);

    Collection col = CollectionFromTestArray(arena, arr);
    test_res.data[i] = col;
			} break;
		}

  i++;
 }

 return test_res;
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

 if (base["expect"].error() == simdjson::SUCCESS)
 {
  for (simdjson::ondemand::object obj : base["expect"])
  {
   test.expectations.num_rows++;
  }

  base.reset();

  test.expectations.rows = PushArray(arena, DataRow, test.expectations.num_rows);

  S64 expect_idx = 0;
  for (simdjson::ondemand::object obj : base["expect"])
  {
   DataRow result = DeserializeTestResult(arena, obj);
   test.expectations.rows[expect_idx] = result;
   expect_idx++;
  }
 }
 else
 {
  simdjson::ondemand::value value = base["expectError"];
  bool b = false;
  value.get(b);
  test.expect_error = b;
 }

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

  ExecuteViewDefinitions(columns, test, &context, col.res_count, col.res);
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