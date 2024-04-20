//////////////////
// ~ STD Lib 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <csetjmp>

//////////////////
// ~ ANTLR - Parsing
#define ANTLR4CPP_STATIC
#include "antlr4-runtime.h"
#include "antlr_generated/fhirpathLexer.h"
#include "antlr_generated/fhirpathParser.h"
#include "antlr_generated/fhirpathBaseVisitor.h"

#include "antlr_generated/fhirpathLexer.cpp"
#include "antlr_generated/fhirpathParser.cpp"
#include "antlr_generated/fhirpathBaseVisitor.cpp"


//////////////////
// ~ ARROW - Parquet Gen
#include <arrow/api.h>
#include <arrow/io/api.h>
#include <parquet/arrow/reader.h>
#include <parquet/arrow/writer.h>
#include <parquet/exception.h>

#include <parquet/arrow/writer.h>
#include <arrow/util/type_fwd.h>


//////////////////
// ~ SIMD JSON
#include "third_party/simdjson.h"
#include "third_party/simdjson.cpp"


//////////////////
// ~ OURS
#include "native_fhir/native_fhir_inc.h"
#include "base/profiler.cc"
#include "number/number.h"

#include "fhir_r4_types.h"
#include "generated/fhir_class_definitions.h"
#include "generated/fhir_class_metadata.h"

#include "fhir_path.h"
#include "manual_deserialization.h"
#include "native_deserializer.h"
#include "resource_string_provider/resource_string_provider.h"

#include "execution/path_execution.h"
#include "fhir_class/fhir_class.h"
#include "fhir_path_visitor/fhir_path_visitor.h"

#include "data_table/data_table.h"
#include "view_definition/view_definition.h"
#include "test_execution/test_execution.h"

#include "native_fhir/native_fhir_inc.cc"
#include "number/number.cc"
#include "fhir_path_visitor/fhir_path_visitor.cc"
#include "fhir_path.cc"
#include "resource_string_provider/resource_string_provider.cc"

using namespace native_fhir;
using namespace FHIR_VERSION;
using namespace antlr4;

FHIR_VERSION::Resource nil_resource = {};

#include "execution/path_execution.cc"
#include "data_table/data_table.cc"
#include "view_definition/view_definition.cc"
#include "test_execution/test_execution.cc"


//////////////////
// ARROW PARQUET TEST
std::shared_ptr<arrow::Table> 
ArrowTableFromDataTable(DataTable table) 
{
 TimeFunction;

 Temp temp = ScratchBegin(0, 0);

 std::vector<std::shared_ptr < arrow::Array> > arrays;
 arrow::FieldVector fields;

 TimeBlock("ARROW - Copying Values")
 {
  for (DataColumnNode *col = table.first; col; col = col->next)
  {
   std::string name((char*)col->v.name.str, col->v.name.size);
   switch (col->v.value_type)
   {
    default: NotImplemented;
    case ColumnValueType::String:
    {
     auto field = arrow::field(name, arrow::utf8());
     fields.push_back(field);
     arrow::StringBuilder builder;
     for (int i = 0; i < col->v.num_values; i++)
     {
      // TODO(agw): slow
      ColumnValue val = col->v[i];
      std::string str((char*)val.str.str, val.str.size);
      PARQUET_THROW_NOT_OK(builder.Append(str));
     }

     std::shared_ptr < arrow::Array > arr;
     PARQUET_THROW_NOT_OK(builder.Finish(&arr));
     arrays.push_back(arr);
    } break;
    case ColumnValueType::ISO8601_Time:
    {
    } break;
   }
  }
 }

  std::shared_ptr < arrow::Schema > schema;
  std::shared_ptr < arrow::Table > ret;
  TimeBlock("ARROW - Making Schema")
  {
   schema = arrow::schema(fields);
  }

  TimeBlock("ARROW - Making Table")
  {
   ret = arrow::Table::Make(schema, arrays);
  }
  return ret;
}

arrow::Status
WriteTable(String8 file_path, std::shared_ptr <arrow::Table> table)
{
 TimeFunction;
 using parquet::ArrowWriterProperties;
 using parquet::WriterProperties;


 // Choose compression
 std::shared_ptr <WriterProperties> props =
  WriterProperties::Builder().compression(arrow::Compression::UNCOMPRESSED)->build();

 // Opt to store Arrow schema for easier reads back into Arrow
 std::shared_ptr <ArrowWriterProperties> arrow_props =
  ArrowWriterProperties::Builder().store_schema()->build();

 std::shared_ptr < arrow::io::FileOutputStream > outfile;
 std::string path_to_file((char*)file_path.str, file_path.size);
 ARROW_ASSIGN_OR_RAISE(outfile, arrow::io::FileOutputStream::Open(path_to_file));

 ARROW_RETURN_NOT_OK(parquet::arrow::WriteTable(*table.get(),
                                                arrow::default_memory_pool(), outfile,
                                                /*chunk_size=*/3, props, arrow_props));
 return arrow::Status::OK();
}

namespace native_fhir
{
 // builders
 // append data
 // make schema
 // make table

 // write table to file


 //////////////////
 // ~ Printing
 void
 PrintIndent(int indent)
 {
  for (int i = 0; i < indent; i++)
  {
   printf(" ");
  }
 }

 void
 PrintISO8601_Time(ISO8601_Time time)
 {
  if (time.precision >= Precision::Year) { printf("%04d", time.year); }
  if (time.precision >= Precision::Month) { printf("-%02d", time.month); }
  if (time.precision >= Precision::Day) { printf("-%02d", time.day); }
  if (time.precision >= Precision::Hour) { printf(":%02d", time.hour); }
  if (time.precision >= Precision::Minute) { printf(":%02d", time.minute); }
  if (time.precision >= Precision::Second) { printf(":%02d", time.second); }
  if (time.precision >= Precision::Millisecond) { printf(":%03d", time.millisecond); }

  if (time.timezone_char) { printf("%c", time.timezone_char); }

  if (time.precision >= Precision::TimezoneHour) { printf("%02d", time.timezone_hour); }
  if (time.precision >= Precision::TimezoneMinute) { printf(":%02d", time.timezone_minute); }
 }

 void PrintSingleResourceMember(FHIR_VERSION::Resource *resource, int indent);

 void
 PrintResourceMember(FHIR_VERSION::Resource *resource,
                     SerializedClassMemberMetadata *mem,
                     SerializedValueTypeAndName tan,
                     int indent)
 {
  String8 mem_name = M_GetStringFromHandle(g_meta_file, mem->name);
  switch (tan.type)
  {
   case ValueType::ClassReference:
   {
    FHIR_VERSION::Resource* child = DEREF_STRUCT(resource, mem->offset, FHIR_VERSION::Resource);
    if (child)
    {
     PrintIndent(indent + 1);
     printf("%.*s\n", PRINT_STR8(mem_name));
    }
    PrintSingleResourceMember(child, indent + 2);
   } break;
   case VALUE_TYPE_STRING_CASES:
   case ValueType::Decimal:
   {
    NullableString8 str = DEREF_VALUE(resource, mem->offset, NullableString8);
    if (str.has_value)
    {
     PrintIndent(indent);
     printf(" - %10.*s: %.*s\n", PRINT_STR8(mem_name), PRINT_STR8(str));
    }
   } break;
   case ValueType::Boolean:
   {
    NullableBoolean b_value = DEREF_VALUE(resource, mem->offset, NullableBoolean);
    if (b_value.has_value)
    {
     PrintIndent(indent);
     if (b_value.value) { printf("true\n"); }
     else { printf("false\n"); }
    }
   } break;

   case VALUE_TYPE_TIME_CASES:
   {
    ISO8601_Time time = DEREF_VALUE(resource, mem->offset, ISO8601_Time);
    if (time.precision != Precision::Unknown)
    {
     printf(" - %10.*s: ", PRINT_STR8(mem_name));
     PrintIndent(indent);
     PrintISO8601_Time(time);
     printf("\n");
    }
   } break;
  }
 }

 void
 PrintIndexedResourceMember(FHIR_VERSION::Resource *resource,
                            SerializedClassMemberMetadata *mem,
                            SerializedValueTypeAndName tan,
                            int indent,
                            int index)
 {
  String8 mem_name = M_GetStringFromHandle(g_meta_file, mem->name);
  switch (tan.type)
  {
   case ValueType::ClassReference:
   {
    FHIR_VERSION::Resource** resources = DEREF_STRUCT_ARRAY(resource, mem->offset, FHIR_VERSION::Resource);
    FHIR_VERSION::Resource* child = resources[index];
    if (child)
    {
     PrintIndent(indent + 1);
     printf("%.*s\n", PRINT_STR8(mem_name));
    }
    PrintSingleResourceMember(child, indent + 2);
   } break;
   case VALUE_TYPE_STRING_CASES:
   case ValueType::Decimal:
   {
    NullableString8* strs = DEREF_VALUE_ARRAY(resource, mem->offset, NullableString8);
    NullableString8 str = strs[index];
    if (str.has_value)
    {
     PrintIndent(indent);
     printf(" - %10.*s: %.*s\n", PRINT_STR8(mem_name), PRINT_STR8(str));
    }
   } break;
   case ValueType::Boolean:
   {
    NullableBoolean* bools = DEREF_VALUE_ARRAY(resource, mem->offset, NullableBoolean);
    NullableBoolean b_value = bools[index];
    if (b_value.has_value)
    {
     PrintIndent(indent);
     if (b_value.value) { printf("true\n"); }
     else { printf("false\n"); }
    }
   } break;

   case VALUE_TYPE_TIME_CASES:
   {
    ISO8601_Time* times = DEREF_VALUE_ARRAY(resource, mem->offset, ISO8601_Time);
    ISO8601_Time time = times[index];
    if (time.precision != Precision::Unknown)
    {
     printf(" - %10.*s: ", PRINT_STR8(mem_name));
     PrintIndent(indent);
     PrintISO8601_Time(time);
     printf("\n");
    }
   } break;
  }
 }

 void
 PrintSingleResourceMember(FHIR_VERSION::Resource *resource, int indent)
 {
  if (!resource) return;

  SerializedClassMetadata *meta = M_GetClassMetadata(g_meta_file, (int)resource->resourceType);
  String8 meta_name = M_GetStringFromHandle(g_meta_file, meta->name);

  PrintIndent(indent);
  printf("%.*s\n", PRINT_STR8(meta_name));

  for (int i = 0; i < meta->members_count; i++)
  {
   SerializedClassMemberMetadata *mem = M_GetClassMemberMetadata(meta, i);
   switch (mem->cardinality)
   {
    case Cardinality::ZeroToOne:
    case Cardinality::OneToOne:
    {
     if (mem->type == ClassMemberType::Single)
     {
      SerializedValueTypeAndName tan = M_GetClassMemberType(mem, 0);
      PrintResourceMember(resource, mem, tan, indent);
     } else if (mem->type == ClassMemberType::Union)
     {
      SerializedClassMemberMetadata *enum_mem = M_GetClassMemberMetadata(meta, i + 1);

      U32 type_index = DEREF_VALUE(resource, enum_mem->offset, U32);

      SerializedValueTypeAndName tan = M_GetClassMemberType(mem, type_index);
      PrintResourceMember(resource, mem, tan, indent);
     }
    } break;
    case Cardinality::OneToInf:
    case Cardinality::ZeroToInf:
    {
     if (mem->type == ClassMemberType::Single)
     {
      SerializedClassMemberMetadata *count_mem = M_GetClassMemberMetadata(meta, i - 1);
      size_t count = DEREF_COUNT(resource, count_mem->offset);
      for (int j = 0; j < count; j++)
      {
       printf("[%d]: ", j);
       SerializedValueTypeAndName tan = M_GetClassMemberType(mem, 0);
       PrintIndexedResourceMember(resource, mem, tan, indent, j);
      }
     }
    } break;
   }
  }
 }

 void
 PrintCollection(Collection col)
 {
  printf("Collection: -----------------\n");
  TimeFunction;
  for (CollectionEntryNode *node = col.first; !IsNilCollectionEntryNode(node); node = node->next)
  {
   switch (node->v.type)
   {
    case EntryType::Resource:
    {
     PrintSingleResourceMember(node->v.resource, 0);
    } break;
    case EntryType::String:
    {
     PrintIndent(0);
     printf("%.*s\n", PRINT_STR8(node->v.str));
    } break;
    case EntryType::Number:
    {
     switch (node->v.number.type)
     {
      case NumberType::Integer:
      {
       printf("%lld\n", node->v.number.s64);
      } break;
      case NumberType::Decimal:
      {
       Temp temp = ScratchBegin(0, 0);
       String8 str = Str8FromDecimal(temp.arena, node->v.number.decimal);
       printf("%.*s\n", PRINT_STR8(str));
       ScratchEnd(temp);
      } break;
     }
    } break;
    case EntryType::Boolean:
    {
     if (node->v.b) { printf("true\n"); }
     else { printf("false\n"); }
    } break;
    case EntryType::Iso8601:
    {
     PrintISO8601_Time(node->v.time);
     printf("\n");
    } break;
   }
  }

  printf("-------------------------------- ");
  printf("Collection Count: %llu\n", col.count);
 }
};

ND_ContextNode*
DeserializeFile(const char* fn, FHIR_VERSION::Resource** res)
{
	TimeFunction;
	return ND_DeserializeFile((char*)fn, res);
}

DataTable
CreateDataTableFromViewDefinition(Arena *arena, native_fhir::ViewDefinition vd, ResourceStringProvider resources)
{
  TimeFunction;
  DataTable table = ExecuteViewDefinition(arena, vd, resources);
  return table;
}

ViewDefinitionList
LoadViewDefinitions(Arena *arena, String8 file_name)
{
 TimeFunction;
 ViewDefinitionList result = {};

 FHIR_VERSION::Resource* res = 0;

 String8 null_str = PushStr8Copy(arena, file_name);
 ND_ContextNode *context = ND_DeserializeFile((const char*)null_str.str, &res);

 Assert(res->resourceType == FHIR_VERSION::ResourceType::Bundle);

 FHIR_VERSION::Bundle* bundle = (FHIR_VERSION::Bundle*)res;
 for (int i = 0; i < bundle->_entry_count; i++)
 {
  Bundle_Entry* entry = bundle->_entry[i];
  if (entry->_resource && entry->_resource->resourceType == ResourceType::ViewDefinition)
  {
   FHIR_VERSION::ViewDefinition* vd = (FHIR_VERSION::ViewDefinition*)entry->_resource;
   native_fhir::ViewDefinition converted = ConvertViewDefinition(arena, vd);
   ViewDefinitionNode *node = PushStruct(arena, ViewDefinitionNode);
   node->v = converted;
   SLLQueuePush(result.first, result.last, node);
   result.count++;
  }
 }

 ND_FreeContext(context);

 return result;
}


int 
main(void)
{
 /////////////////// 
 // Setup
	OS_Init();
	ThreadCtx tctx = ThreadCtxAlloc();
	tctx.is_main_thread = 1;
	SetThreadCtx(&tctx);

	Arena *meta_arena = ArenaAlloc(Megabytes(64));
	MetadataFile file = M_Deserialize(meta_arena, &g_metadata, ArrayCount(g_metadata));
	g_meta_file = PushStruct(meta_arena, MetadataFile);
	MemoryCopy(g_meta_file, &file, sizeof(MetadataFile));
 
 /////////////////// 
 // Parse Expression
	String8 expr = Str8Lit("");

 ND_Init(1);

 /////////////////// 
 // Execute Expression
	FP_ExecutionContext context = { 0 };
	context.arena = ArenaAlloc(Gigabytes(1));
 context.entry_stack_first = context.entry_stack_last = &nil_entry_node;
 context.meta_file = g_meta_file;

 Temp temp = ScratchBegin(0, 0);
 FileEntries entries = OS_EnumerateDirectory(temp.arena, Str8Lit("C:/Users/awalley/Code/FHIR-in-C/bundles/*")); 

 context.resources = PushArray(temp.arena, FHIR_VERSION::Resource*, entries.count);
 context.res_count = entries.count;

 for (int i = 0; i < entries.count; i++)
 {
  context.resources[i] = &nil_resource;
 }

 ND_ContextList resource_contexts = {};

 ResourceStringProvider res_provider = {};
 res_provider.arena = ArenaAlloc(Megabytes(64));

 for (int i = 0; i < entries.count; i++)
 {
  FileEntry entry = entries.v[i];
  if (Str8Match(Str8Lit("."), entry.file_name, 0) ||
      Str8Match(Str8Lit(".."), entry.file_name, 0))
  {
   continue;
  }

  String8 full_name = PushStr8F(temp.arena, "C:/Users/awalley/Code/FHIR-in-C/bundles/%S", entry.file_name);
  res_provider.AddJsonFile(full_name);
  ND_ContextNode* deserializer_context = DeserializeFile((char*)full_name.str, (Resource**) &context.resources[i]);

  QueuePush(resource_contexts.first, resource_contexts.last, deserializer_context);
  resource_contexts.count++;
 }

 if (setjmp(context.error_buf) != 0)
 {
  if (context.error_message.size > 0)
  {
   printf("ERROR: %.*s\n", PRINT_STR8(context.error_message));
  }
 }

// ReadAndExecuteTests(Str8Lit(""));

 BeginProfile();

 ViewDefinitionList list = LoadViewDefinitions(temp.arena, Str8Lit("C:/Users/awalley/Code/FHIR-in-C/fhir_path/view_definitions.json"));
 if (list.count > 0)
 {
  Collection resources = {};
  for (int i = 0; i < context.res_count; i++)
  {
   if (!context.resources[i] || context.resources[i] == &nil_resource) continue;
   FHIR_VERSION::Resource *r = context.resources[i];
   if (r->resourceType == ResourceType::Bundle)
   {
    FHIR_VERSION::Bundle* b = (FHIR_VERSION::Bundle*)r;
    for (int j = 0; j < b->_entry_count; j++)
    {
     Bundle_Entry *entry = b->_entry[j];
     if (entry->_resource)
     {
      CollectionEntry ent = {};
      ent.type = EntryType::Resource;
      ent.resource = entry->_resource;
      CollectionPushEntry(temp.arena, &resources, ent);
     }
    }
   }
  }

  DataTable table = CreateDataTableFromViewDefinition(temp.arena, list.first->v, res_provider);
  auto t = ArrowTableFromDataTable(table);
  auto res = WriteTable(Str8Lit("./output.parquet"), t);

  EndAndPrintProfile();
 }

 ArenaRelease(res_provider.arena);


	char line[4096];
	Assert(expr.size < sizeof(line));
	MemoryCopy(&line, expr.str, expr.size);
	line[expr.size] = '\0';

	while (true)
	{

		String8 line_str = Str8C(line);

  if (line_str.size > 0)
  {

   ArenaPopTo(context.arena, 0);
   context.entry_stack_first = context.entry_stack_last = &nil_entry_node;
   context.meta_file = g_meta_file;

   BeginProfile();

   Piece *tok = Antlr_ParseExpression(line_str);
   context.root_node = tok;

   try
   {
    Collection collection = ExecutePieces(context.arena, &context);

    PrintCollection(collection);

    EndAndPrintProfile();

    double gb2 = context.arena->commit_pos / (double)Gigabytes(1);
    printf("context arena: %f GB\n", gb2);
   }
   catch (int err)
   {
    if (context.error_message.size > 0)
    {
     printf("ERROR: %.*s\n", PRINT_STR8(context.error_message));
    }
   }
  }

		fgets(&line[0], ArrayCount(line), stdin);
	}

	ND_Cleanup();
 ScratchEnd(temp);

	return 0;
}