#include <any>
namespace native_fhir
{

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

ColumnValue
ColumnValueFromValue(Arena *arena, simdjson::ondemand::value value)
{
 ColumnValue ret = {};
 switch (value.type())
 {
  default: NotImplemented;
  case simdjson::ondemand::json_type::null:
  {
   ret.value_type = ColumnValueType::Null;
  } break;
  case simdjson::ondemand::json_type::string:
  {
   std::string_view str_view;
   auto res = value.get(str_view);
   Assert(res == simdjson::error_code::SUCCESS);

   String8 str8 = String8FromStringView(arena, str_view);
   NullableString8 n_str = {};
   n_str.has_value = true;
   n_str.str8 = str8;

   ret.value_type = ColumnValueType::String;
   ret.str = n_str;
  } break;
  case simdjson::ondemand::json_type::number:
  {
   auto raw_value = value.raw_json();
   Assert(raw_value.error() == simdjson::error_code::SUCCESS);

   std::string_view view = raw_value.value_unsafe();

   String8 str = String8FromStringView(arena, view);
   Number num = Number::FromString(str);

   if (num.type == NumberType::Integer)
   {
    ret.value_type = ColumnValueType::Int32;
    NullableInt32 n = {};
    n.has_value = true;
    n.value = (S32)num.s64;
    ret.s32 = n;
   }
   else
   {
    ret.value_type = ColumnValueType::Double;

    NullableDouble n = {};
    n.has_value = true;
    n.value = DoubleFromDecimal(num.decimal);
    ret._double = n;
   }

  } break;
  case simdjson::ondemand::json_type::boolean: // copy into dest
  {
   bool _boolean;
   auto res = value.get(_boolean);
   Assert(res == simdjson::error_code::SUCCESS);

   ret.value_type = ColumnValueType::Boolean;
   NullableBoolean n_bool = {};
   n_bool.has_value = true;
   n_bool.value = _boolean;
   ret.b = n_bool;
  } break;
  case simdjson::ondemand::json_type::object: // copy into dest
  {
   NotImplemented;
  } break;
  case simdjson::ondemand::json_type::array:
  {
   ret.value_type = ColumnValueType::Array;

   simdjson::ondemand::array arr;
   auto res = value.get(arr);

   DataColumn *col = PushStruct(arena, DataColumn);
   for (auto field : arr)
   {
    simdjson::ondemand::value v = field.value();
    ColumnValue arr_val = ColumnValueFromValue(arena, v);
    if ((col->value_type == ColumnValueType::Unknown || col->value_type == ColumnValueType::Null) && arr_val.value_type != col->value_type)
    {
     col->SetValueType(arena, arr_val.value_type);
    }
    col->AddValue(arena, arr_val);
   }

   ret.array = col;
  } break;
 }

 return ret;
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

  ColumnValue val = ColumnValueFromValue(arena, value);
  if ((col.value_type == ColumnValueType::Unknown || col.value_type == ColumnValueType::Null) && val.value_type != col.value_type)
  {
   col.SetValueType(arena, val.value_type);
  }

  col.AddValue(arena, val);

  table.AddColumn(arena, col);
 }

 return table;
}

ViewElem*
ConvertSelect(Arena *arena, FHIR_VERSION::ViewDefinition_Select *select)
{
 ViewElem *result = PushStruct(arena, ViewElem);
 result->type = ViewElemType::Select;

 // ~ Columns
 for (int i = 0; i < select->_column_count; i++)
 {
  FHIR_VERSION::ViewDefinition_Select_Column* column = select->_column[i];

  ViewElem *col_view = PushStruct(arena, ViewElem);

  col_view->type = ViewElemType::Column;
  col_view->path = column->_path;
  if (column->_path.has_value)
  {
   col_view->root_piece = Antlr_ParseExpression(column->_path.str8);
  }
  col_view->name = column->_name;
  col_view->description = column->_description;
  col_view->collection = column->_collection;
  col_view->column_data_type = column->_type;

  if (column->_type.has_value)
  {
   ValueType value_type = ValueType::Unknown;
   for (int i = 0; i < ArrayCount(native_fhir::value_type_meta); i++)
   {
    for (int j = 0; j < ArrayCount(native_fhir::value_type_meta[i].fhir_names); j++)
    {
     if (Str8Match(native_fhir::value_type_meta[i].fhir_names[j], column->_type.str8, 0))
     {
      value_type = native_fhir::value_type_meta[i].type;
      break;
     }
    }
    if (value_type != ValueType::Unknown) break;
   }

   switch (value_type)
   {
    default: NotImplemented;
    case VALUE_TYPE_STRING_CASES: { col_view->data_type = ColumnValueType::String; } break;
    case VALUE_TYPE_TIME_CASES:   { col_view->data_type = ColumnValueType::ISO8601_Time; } break;
    case ValueType::Integer:      { col_view->data_type = ColumnValueType::Int32; } break;
    case ValueType::Integer64:    { col_view->data_type = ColumnValueType::Int64; } break;
    case ValueType::Decimal: { col_view->data_type = ColumnValueType::Double; } break;
    case ValueType::Boolean: { col_view->data_type = ColumnValueType::Boolean; } break;
   }

   if (column->_collection.has_value && column->_collection.value)
   {
    col_view->data_type = ColumnValueType::Array;
   }
  }

  SLLQueuePush(result->column_first, result->column_last, col_view);
  result->column_count++;
 }

 // ~ Select
 for (int i = 0; i < select->_select_count; i++)
 {
  ViewElem *view = ConvertSelect(arena, select->_select[i]);
  SLLQueuePush(result->select_first, result->select_last, view);
  result->select_count++;
 }

 // ~ UnionAll
 for (int i = 0; i < select->_unionAll_count; i++)
 {
  ViewElem *view = ConvertSelect(arena, select->_unionAll[i]);
  view->is_union = true;
  SLLQueuePush(result->union_first, result->union_last, view);
  result->union_count++;
 }

 // ~ For Each
 if (select->_forEach.has_value)
 {
  result->for_each_piece = Antlr_ParseExpression(select->_forEach.str8);
  result->for_each = select->_forEach;
 }

 if (select->_forEachOrNull.has_value)
 {
  result->for_each_piece = Antlr_ParseExpression(select->_forEachOrNull.str8);
  result->for_each = select->_forEachOrNull;
  result->for_each_is_null = true;
 }

 return result;
}

native_fhir::ViewDefinition
ConvertViewDefinition(Arena *arena, FHIR_VERSION::ViewDefinition *vd)
{
 native_fhir::ViewDefinition result = {};

 // ~ Resource Type
 String8 res_name = vd->_resource.str8;
 const ResourceNameTypePair *pair = NF_ResourceNameTypePairFromString8(res_name);
 if (pair)
 {
  result.resource_type = (FHIR_VERSION::ResourceType)pair->type;
 }

 // ~ Where
 for (int i = 0; i < vd->_where_count; i++)
 {
  FHIR_VERSION::ViewDefinition_Where *where = vd->_where[i];
  String8 full_path = PushStr8F(arena, "%S", where->_path.str8);
  Str8ListPush(arena, &result.where, full_path);
 }

 for (int i = 0; i < vd->_select_count; i++)
 {
  ViewElem *view = ConvertSelect(arena, vd->_select[i]);
  SLLQueuePush(result.first, result.last, view);
 }


 result.constant_count = vd->_constant_count;
 if (result.constant_count > 0)
 { 
  result.constants = PushArray(arena, Constant, result.constant_count);
 }
 for (int i = 0; i < vd->_constant_count; i++)
 {
  FHIR_VERSION::ViewDefinition_Constant* constant = vd->_constant[i];
  Constant *c = &(result.constants[i]);
  Assert(constant->_name.has_value);
  c->name = PushStr8Copy(arena, constant->_name.str8);
  switch (constant->_value_type)
  {
   default: NotImplemented;
    // Strings
   case FHIR_VERSION::ViewDefinition_Constant::_valueType::Base64Binary: 
   case FHIR_VERSION::ViewDefinition_Constant::_valueType::Canonical: 
   case FHIR_VERSION::ViewDefinition_Constant::_valueType::Code:
   case FHIR_VERSION::ViewDefinition_Constant::_valueType::Id:
   case FHIR_VERSION::ViewDefinition_Constant::_valueType::Oid:
   case FHIR_VERSION::ViewDefinition_Constant::_valueType::String:
   case FHIR_VERSION::ViewDefinition_Constant::_valueType::Uri:
   case FHIR_VERSION::ViewDefinition_Constant::_valueType::Url:
   case FHIR_VERSION::ViewDefinition_Constant::_valueType::Uuid:
   {
    if (constant->_value._valueString.has_value)
    {
     c->v = CollectionEntryFromString(constant->_value._valueString.str8);
    }
   } break;

   case FHIR_VERSION::ViewDefinition_Constant::_valueType::Boolean: {
    if (constant->_value._valueBoolean.has_value)
    {
     c->v = CollectionEntryFromBoolean(constant->_value._valueBoolean.value);
    }
   } break;
   case FHIR_VERSION::ViewDefinition_Constant::_valueType::Date:
   case FHIR_VERSION::ViewDefinition_Constant::_valueType::DateTime:
   case FHIR_VERSION::ViewDefinition_Constant::_valueType::Instant:
   case FHIR_VERSION::ViewDefinition_Constant::_valueType::Time:
   {
    if (constant->_value._valueDate.precision > Precision::Unknown)
    {
     c->v = CollectionEntryFromDate(constant->_value._valueDate);
    }
   } break;
   case FHIR_VERSION::ViewDefinition_Constant::_valueType::Integer64:
   {
    if (constant->_value._valueInteger64.has_value)
    {
     Number num = {};
     num.type = NumberType::Integer;
     num.s64 = constant->_value._valueInteger64.value;
     c->v = CollectionEntryFromNumber(num);
    }
   } break;
   case FHIR_VERSION::ViewDefinition_Constant::_valueType::Integer:
   case FHIR_VERSION::ViewDefinition_Constant::_valueType::PositiveInt:
   case FHIR_VERSION::ViewDefinition_Constant::_valueType::UnsignedInt:
   {
    if (constant->_value._valueInteger.has_value)
    {
     Number num = {};
     num.type = NumberType::Integer;
     num.s64 = constant->_value._valueInteger.value;
     c->v = CollectionEntryFromNumber(num);
    }
   } break;

   case FHIR_VERSION::ViewDefinition_Constant::_valueType::Decimal: {
    c->type = ValueType::Decimal;
    if (constant->_value._valueDecimal.has_value)
    {
     Number num = {};
     num.type = NumberType::Decimal;
     num.decimal = DecimalFromString(constant->_value._valueDecimal.str8);;
     c->v = CollectionEntryFromNumber(num);
    }
   } break;
  }

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
 str.str = (U8 *)view.data();

 str.str = PushArray(arena, U8, str.size);
 MemoryCopy(str.str, view.data(), str.size);

 FHIR_VERSION::Resource* res = 0;

 ND_ContextNode *context = ND_DeserializeStringOfType((char*)str.str, str.size, &res, FHIR_VERSION::ResourceType::ViewDefinition);
 test.ctx = context;

 Assert(res->resourceType == FHIR_VERSION::ResourceType::ViewDefinition);
 test.vd = ConvertViewDefinition(arena, (FHIR_VERSION::ViewDefinition*)res);

 DataTable columns = GetColumnOrder(arena, test.vd);
 test.expectations = columns;

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
     if (matching_column->v.value_type == ColumnValueType::Unknown && node->v.value_type != ColumnValueType::Unknown)
     {
      matching_column->v.SetValueType(arena, node->v.value_type);
     }

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

 for (DataColumnNode *n = test.expectations.first; n; n = n->next)
 {
  if (n->v.num_values == 0)
  {
   DLLRemove(test.expectations.first, test.expectations.last, n);
   test.expectations.column_count--;
  }
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

 col.res = PushArray(arena, FHIR_VERSION::Resource*, col.res_count);

 int res_i = 0;
 for (simdjson::ondemand::object obj : base["resources"])
 {
  std::string_view view = obj.raw_json();
  String8 str = {};
  str.size = view.size() + 64;
  str.str = (U8*)view.data();

  str.str = PushArray(arena, U8, str.size);
  MemoryCopy(str.str, view.data(), str.size);

  FHIR_VERSION::Resource* res = 0;

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

enum class ViewDefinitionValidationError
{
 Unknown,
 Success,
 NoResourceType,
 Count
};

ViewDefinitionValidationError ValidateViewDefinition(native_fhir::ViewDefinition vd)
{
 if (vd.resource_type == FHIR_VERSION::ResourceType::Unknown)
 {
  return ViewDefinitionValidationError::NoResourceType;
 }

 return ViewDefinitionValidationError::Success;
}

B32
ExecuteTestCollection(FP_TestCollection col)
{
 B32 test_passed = true;
 for (int i = 0; i < col.test_count; i++)
 {
  Temp temp = ScratchBegin(0, 0);
  FP_Test test = col.tests[i];

  //printf("==========================================\n");
  //printf("Test: %.*s\n", PRINT_STR8(test.title));
  //ColumnList columns = ParseViewDefinition(temp.arena, test.vd);

  B32 passed = false;

  ViewDefinitionValidationError valid = ValidateViewDefinition(test.vd);
  if (valid != ViewDefinitionValidationError::Success)
  {
   if (test.expect_error)
   {
    //printf("PASSED: \"%.*s\"\n", PRINT_STR8(test.title));
   }
   else
   {
    printf("FAILED: \"%.*s\"\n", PRINT_STR8(test.title));
    test_passed = false;
   }
   continue;
  }

  Collection resources = {};
  for (int i = 0; i < col.res_count; i++)
  {
   if (test.vd.resource_type != col.res[i]->resourceType) continue;

   CollectionEntry ent = {};
   ent.type = EntryType::Resource;
   ent.resource = col.res[i];
   CollectionPushEntry(temp.arena, &resources, ent);
  }

  DataTable table = {};
  try
  {
   table = ExecuteViewDefinition(temp.arena, test.vd, resources);
  }
  // TODO(agw): proper throw catch for custom errors
  catch (std::bad_any_cast a)
  {
   table.execution_error = true;
  }
  catch(int err)
  {
   table.execution_error = true;
  }

  size_t num_rows = table.first ? table.first->v.num_values : 0;
  size_t test_num_rows = test.expectations.first ? test.expectations.first->v.num_values : 0;

  if (test.expect_error)
  {
   passed = table.execution_error;
  }
  else if (table.column_count == test.expectations.column_count && 
           num_rows == test_num_rows)
  {
   passed = num_rows == 0;
   if(num_rows != 0)
   {
    passed = true;
    for (int i = 0; i < table.first->v.num_values; i++)
    {
     B32 has_matching = table.HasMatchingRow(&test.expectations, i);
     if (!has_matching)
     {
      passed = false;
      break;
     }
    }
   }
  }

  if (passed)
  {
   //printf("PASSED: \"%.*s\"\n", PRINT_STR8(test.title));
  }
   else
  {
   printf("FAILED: \"%.*s\"\n", PRINT_STR8(test.title));
   test_passed = false;
  }

  ScratchEnd(temp);
 }

 return test_passed;
}

void
ReadAndExecuteTests(String8 test_folder)
{
 //String8 test_file_name = Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\union.json");

 String8 tests[] = {
  Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\basic.json"),
  Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\collection.json"),
  Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\combinations.json"),
  Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\constant.json"),
  Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\fhirpath.json"),
  Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\fhirpath_numbers.json"),
//  Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\fn_boundary.json"),
  Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\fn_empty.json"),
  Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\fn_extension.json"),
  Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\fn_first.json"),
  Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\fn_join.json"),
  Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\fn_oftype.json"),
  Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\fn_reference_keys.json"),
  Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\foreach.json"),
  Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\logic.json"),
  Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\union.json"),
  Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\validate.json"),
  Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\view_resource.json"),
  Str8Lit("C:\\Users\\awalley\\Code\\sql-on-fhir-v2\\tests\\where.json")
 };


 for (int tidx = 0; tidx < ArrayCount(tests); tidx++)
 {
  Temp temp = ScratchBegin(0, 0);
  FP_TestCollection test_col = DeserializeTestCollection(temp.arena, tests[tidx]);

  B32 passed = ExecuteTestCollection(test_col);
  if (passed)
  {
   printf("-------------------------------------------------------\n");
   printf("PASSED: %.*s\n", PRINT_STR8(tests[tidx]));
   printf("-------------------------------------------------------\n");
  }
  else if (!passed)
  {
   printf("-------------------------------------------------------\n");
   printf("FAILED: %.*s\n", PRINT_STR8(tests[tidx]));
   printf("-------------------------------------------------------\n");
  }

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
}

};