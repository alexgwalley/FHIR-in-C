namespace native_fhir
{
 // TODO(agw): should be in header
Piece* Antlr_ParseExpression(String8 str);

Collection ExecutePieces(Arena *arena, FP_ExecutionContext* context);
void PrintCollection(Collection col);

inline String8
String8FromStringView(Arena* arena, std::string_view view)
{
	String8 str = {};
	str.size = view.size();
	str.str = (U8*)view.data();
 return PushStr8Copy(arena, str);
}

void
AddTestArrayToColumn(Arena *arena, simdjson::ondemand::array array, DataColumn* column)
{
 DataColumn *col = PushStruct(arena, DataColumn);
 for (auto field : array)
 {
  simdjson::ondemand::value value = field.value();
  switch (value.type())
  {
			case simdjson::ondemand::json_type::string:
   {
				std::string_view str_view;
				auto res = value.get(str_view);
				Assert(res == simdjson::error_code::SUCCESS);

    String8 str8 = String8FromStringView(arena, str_view);
    NullableString8 n_str = {};
    n_str.has_value = true;
    n_str.str8 = str8;

    ColumnValue value = {};
    value.value_type = ColumnValueType::String;
    value.str = n_str;

    col->AddValue(arena, value);
			} break;
			case simdjson::ondemand::json_type::number:
			{
    auto raw_value = field.value().raw_json();
    Assert(raw_value.error() == simdjson::error_code::SUCCESS);

    std::string_view view = raw_value.value_unsafe();

    String8 str = String8FromStringView(arena, view);
    Number num = Number::FromString(str);

    ColumnValue value = {};
    if (num.type == Number_Integer)
    {
     value.value_type = ColumnValueType::Int64;
     value.s64 = num.s64;
    }
    else
    {
     value.value_type = ColumnValueType::Int64;
     value._double = DoubleFromDecimal(num.decimal);
    }

    col->AddValue(arena, value);
			} break;
			case simdjson::ondemand::json_type::boolean: // copy into dest
			{
				bool _boolean;
				auto res = value.get(_boolean);
				Assert(res == simdjson::error_code::SUCCESS);

    ColumnValue value = {};
    value.value_type = ColumnValueType::Boolean;
    NullableBoolean n_bool = {};
    n_bool.has_value = true;
    n_bool.value = _boolean;
    value.b = n_bool;

    col->AddValue(arena, value);
			} break;

   case simdjson::ondemand::json_type::array:
   case simdjson::ondemand::json_type::object:
   {
    NotImplemented;
   } break;
  }
 }

 ColumnValue value = { };
 value.value_type = ColumnValueType::Array;
 value.array = col;

 col->AddValue(arena, value);
}

DataTable
DeserializeTestResult(Arena *arena, simdjson::ondemand::object base)
{
 DataTable table = {};

 for (auto field : base)
 {
  DataColumn col = {};
		String8 key = String8FromStringView(arena, field.unescaped_key());
  col.name = key;

  simdjson::ondemand::value value = field.value();
  switch (value.type())
		{
			case simdjson::ondemand::json_type::string:
			{
    col.value_type = ColumnValueType::String;

				std::string_view str_view;
				auto res = value.get(str_view);
				Assert(res == simdjson::error_code::SUCCESS);

    String8 str8 = String8FromStringView(arena, str_view);
    NullableString8 n_str = {};
    n_str.has_value = true;
    n_str.str8 = str8;

    ColumnValue value = {};
    value.value_type = ColumnValueType::String;
    value.str = n_str;

    col.AddValue(arena, value);
			} break;
			case simdjson::ondemand::json_type::number:
			{
    col.value_type = ColumnValueType::Double;
    auto raw_value = field.value().raw_json();
    Assert(raw_value.error() == simdjson::error_code::SUCCESS);

    std::string_view view = raw_value.value_unsafe();

    String8 str = String8FromStringView(arena, view);
    Number num = Number::FromString(str);

    ColumnValue value = {};
    if (num.type == Number_Integer)
    {
     value.value_type = ColumnValueType::Int64;
     value.s64 = num.s64;

     col.value_type = ColumnValueType::Int64;
    }
    else
    {
     value.value_type = ColumnValueType::Double;
     value._double = DoubleFromDecimal(num.decimal);
    }

    col.AddValue(arena, value);

			} break;
			case simdjson::ondemand::json_type::boolean: // copy into dest
			{
    col.value_type = ColumnValueType::Boolean;

				bool _boolean;
				auto res = value.get(_boolean);
				Assert(res == simdjson::error_code::SUCCESS);

    ColumnValue value = {};
    value.value_type = ColumnValueType::Boolean;
    NullableBoolean n_bool = {};
    n_bool.has_value = true;
    n_bool.value = _boolean;
    value.b = n_bool;

    col.AddValue(arena, value);
			} break;
			case simdjson::ondemand::json_type::object: // copy into dest
			{
    NotImplemented;
			} break;
			case simdjson::ondemand::json_type::array:
			{
    col.value_type = ColumnValueType::Array;

				simdjson::ondemand::array arr;
				auto res = value.get(arr);

    AddTestArrayToColumn(arena, arr, &col);
			} break;
		}

  table.AddColumn(arena, col);
 }

 return table;
}

View*
ConvertSelect(Arena *arena, nf_fhir_r4::ViewDefinition_Select *select)
{
 View *result = PushStruct(arena, View);
 result->type = ViewType::Select;

 // ~ Columns
 for (int i = 0; i < select->_column_count; i++)
 {
  nf_fhir_r4::ViewDefinition_Select_Column* column = select->_column[i];

  View *col_view = PushStruct(arena, View);

  col_view->type = ViewType::Column;
  col_view->path = column->_path;
  col_view->name = column->_name;
  col_view->description = column->_description;
  col_view->collection = column->_collection;

  SLLQueuePush(result->column_first, result->column_last, col_view);
  result->column_count++;
 }

 // ~ Select
 for (int i = 0; i < select->_select_count; i++)
 {
  View *view = ConvertSelect(arena, select->_select[i]);
  SLLQueuePush(result->select_first, result->select_last, view);
  result->select_count++;
 }

 // ~ UnionAll
 for (int i = 0; i < select->_unionAll_count; i++)
 {
  View *view = ConvertSelect(arena, select->_unionAll[i]);
  view->is_union = true;
  SLLQueuePush(result->select_first, result->select_last, view);
  result->select_count++;
 }

 // ~ For Each
 if (select->_forEach.has_value)
 {
  result->for_each = select->_forEach;
 }

 if (select->_forEachOrNull.has_value)
 {
  result->for_each = select->_forEachOrNull;
  result->for_each_is_null = true;
 }

 return result;
}

native_fhir::ViewDefinition
ConvertViewDefinition(Arena *arena, nf_fhir_r4::ViewDefinition *vd)
{
 native_fhir::ViewDefinition result = {};

 // ~ Resource Type
 String8 res_name = vd->_resource.str8;
 const ResourceNameTypePair *pair = NF_ResourceNameTypePairFromString8(res_name);
 Assert(pair);
 result.resource_type = (nf_fhir_r4::ResourceType)pair->type;

 // ~ Where
 for (int i = 0; i < vd->_where_count; i++)
 {
  nf_fhir_r4::ViewDefinition_Where *where = vd->_where[i];
  String8 full_path = PushStr8F(arena, "%S.%S", vd->_resource.str8, where->_path.str8);
  Str8ListPush(arena, &result.where, full_path);
 }

 for (int i = 0; i < vd->_select_count; i++)
 {
  View *view = ConvertSelect(arena, vd->_select[i]);
  SLLQueuePush(result.first, result.last, view);
 }

 return result;
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
 test.vd = ConvertViewDefinition(arena, (nf_fhir_r4::ViewDefinition*)res);

 if (base["expect"].error() == simdjson::SUCCESS)
 {
  for (simdjson::ondemand::object obj : base["expect"])
  {

   DataTable result = DeserializeTestResult(arena, obj);

   for (DataColumnNode *node = result.first; node; node = node->next)
   {
    DataColumnNode* matching_column = test.expectations.GetMatchingColumn(node->v.name);
    if (matching_column)
    {
     matching_column->v.AddAllValuesFromColumn(arena, node->v);
    }
    else
    {
     test.expectations.AddColumn(arena, node->v);
    }
   }
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
 for (int i = 0; i < col.test_count; i++)
 {
  Temp temp = ScratchBegin(0, 0);
  FP_Test test = col.tests[i];

  printf("==========================================\n");
  printf("Test: %.*s\n", test.title.size, test.title.str);
  //ColumnList columns = ParseViewDefinition(temp.arena, test.vd);

  Collection resources = {};
  for (int i = 0; i < col.res_count; i++)
  {
   if (test.vd.resource_type != col.res[i]->resourceType) continue;

   CollectionEntry ent = {};
   ent.type = EntryType::Resource;
   ent.resource = col.res[i];
   CollectionPushEntry(temp.arena, &resources, ent);
  }

  DataTable table = ExecuteViewDefinition(temp.arena, test.vd, resources);

  B32 passed = true;
  if (test.expect_error)
  {
   passed = table.execution_error;
  }
  else if (table.column_count != test.expectations.column_count)
  {
   // Fail Test
   passed = false;
  }
  else
  {
   for(DataColumnNode *node = table.first; node; node = node->next)
   {
    DataColumnNode *test_node = test.expectations.GetMatchingColumn(node->v.name);
    if (node->v.num_values != test_node->v.num_values)
    {
     // Fail Test
     passed = false;
    }
    else if (node->v.value_type != test_node->v.value_type)
    {
     passed = false;
    }
    else
    {
     // ~ Compare each chunk
     DataChunkNode *test_chunk = test_node->v.first;
     for (DataChunkNode *chunk = node->v.first;
      chunk && test_chunk;
      chunk = chunk->next, test_chunk = test_chunk->next)
     {
      switch (node->v.value_type)
      {
       default: NotImplemented;
       case ColumnValueType::String:
       {
        NullableString8* chunk_array = (NullableString8*)chunk->data;
        NullableString8* test_array = (NullableString8*)test_chunk->data;
        for (int i = 0; i < chunk->count; i++)
        {
         if (Str8Match(chunk_array[i].str8, test_array[i].str8, 0) == 0)
         {
          passed = false;
         }
        }
       } break;
       case ColumnValueType::Int32:
       case ColumnValueType::Int64:
       case ColumnValueType::Double:
       case ColumnValueType::ISO8601_Time:
       case ColumnValueType::Boolean:
       {
        B32 equal = memcmp(chunk->data, test_chunk->data, chunk->MaxDataSize()) == 0;
        if (!equal) passed = false;
       } break;
      }
     }
    }

   }
  }

  if (passed)
  {
   printf("PASSED: \"%.*s\"\n", PRINT_STR8(test.title));
  }
   else
  {
   printf("FAILED: \"%.*s\"\n", PRINT_STR8(test.title));
  }

  ScratchEnd(temp);
 }

}

void
ReadAndExecuteTests(String8 test_folder)
{
 String8 test_file_name = Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\where.json");


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