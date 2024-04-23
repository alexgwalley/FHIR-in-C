//////////////////
// ~ STD Lib 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <csetjmp>
#include <thread>

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
#include "parquet/apache_arrow.h"
#include "view_definition/view_definition.h"
#include "test_execution/test_execution.h"

// .CC files

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
#include "parquet/apache_arrow.cc"
#include "view_definition/view_definition.cc"
#include "test_execution/test_execution.cc"
#include "print_collection.cc"


/////////////////
// ~ Argument Parsing

enum class ArgumentType
{
 Unknown,
 BundleCount,
 BundleDir,
 Parallel
};

struct Argument
{
 String8 name;
 ArgumentType type;

 union
 {
  S64 s64;
  String8 str;
 };
};

struct ArgumentNode
{
 ArgumentNode* next;
 Argument arg;
};

struct ExecutionArguments
{
 int bundle_count;
 String8 bundle_dir;
 B32 parallel;
};

Argument arguments[] = 
{
 {Str8Lit("--count"), ArgumentType::BundleCount},
 {Str8Lit("--dir"), ArgumentType::BundleDir},
 {Str8Lit("--parallel"), ArgumentType::Parallel}
};

ExecutionArguments
ParseArguments(Arena *arena, int count, char** args)
{
 /*
  --count max_count_per_thread
  --dir directory_of_bundles
 */

 ExecutionArguments ret = {};

 for (int i = 0; i < count; i++)
 {
  String8 str = Str8C(args[i]);
  for (int j = 0; j < ArrayCount(arguments); j++)
  {
   if (Str8Match(arguments[j].name, str, 0))
   {
    if (arguments[j].type == ArgumentType::BundleCount)
    {
     i++;
     String8 value = Str8C(args[i]);
     int int_val = atoi(args[i]);
     ret.bundle_count = int_val;
     std::cout << "Set bundle count: " << int_val << std::endl;
    } else if (arguments[j].type == ArgumentType::BundleDir)
    {
     i++;
     String8 value = Str8C(args[i]);
     ret.bundle_dir = value;
     std::cout << "Set bundle dir: " << value << std::endl;
    } else if (arguments[j].type == ArgumentType::Parallel)
    {
     ret.parallel = true;
     std::cout << "Set parallel" << std::endl;
    }
   }
  }
 }

 return ret;
}

/////////////////
// ~ Running

ND_ContextNode*
DeserializeFile(const char* fn, FHIR_VERSION::Resource** res)
{
	TimeFunction;
	return ND_DeserializeFile((char*)fn, res);
}

DataTable
CreateDataTableFromViewDefinition(Arena *arena, native_fhir::ViewDefinition vd, ResourceStringProvider* resources, int stopping_count)
{
  TimeFunction;
  DataTable table = ExecuteViewDefinition(arena, vd, resources, stopping_count);
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

struct ToThread
{
 ResourceStringProvider *res_provider;
 ViewDefinitionList view_definitions;
 DataTable *out;
 int bundle_stopping_count;
 std::shared_ptr<arrow::Table> arrow_table;
};

void ThreadWork(ToThread* opts)
{
	ThreadCtx tctx = ThreadCtxAlloc();
	SetThreadCtx(&tctx);

 Temp temp = ScratchBegin(0, 0);
 if (opts->view_definitions.count > 0)
 {
  DataTable table = {};
   // TODO(agw): This loop needs to go inside the CreateDataTable function (one deserialization per resource)
  for (ViewDefinitionNode *node = opts->view_definitions.first; node; node = node->next)
  {
   DataTable next_table = CreateDataTableFromViewDefinition(temp.arena, node->v, opts->res_provider, opts->bundle_stopping_count);

   for (DataColumnNode *col = next_table.first; col; col = col->next)
   {
    table.AddColumn(temp.arena, col->v);
   }
  }

  auto t = ArrowTableFromDataTable(table);
  opts->arrow_table = t;
 }
 ScratchEnd(temp);
}

int 
main(int argc, char** argv)
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

 ND_Init(1);

 Temp temp = ScratchBegin(0, 0);

 ExecutionArguments args = ParseArguments(temp.arena, argc, argv);

 String8 base_file_name = Str8Lit("C:/Users/awalley/Code/Ncqa.HT.Firely/Hedis2023/BuildArtifacts/Decks/13698_extracted");
 if (args.bundle_dir.size > 0)
 {
  base_file_name = args.bundle_dir;
 }

 FileEntries entries = OS_EnumerateDirectory(temp.arena, PushStr8F(temp.arena, "%S/*", base_file_name)); 

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

  String8 full_name = PushStr8F(temp.arena, "%S/%S",base_file_name, entry.file_name);
  res_provider.AddJsonFile(full_name);
 }

 ReadAndExecuteTests(Str8Lit(""));

BeginProfile();

Arena *main_arena = ArenaAlloc(Megabytes(64));

ViewDefinitionList list = LoadViewDefinitions(temp.arena, Str8Lit("view_definitions.json"));
// NOTE(agw): set for multi-threading
if (args.parallel)
{
 const int num_threads = std::thread::hardware_concurrency();
 DataTable *tables = PushArray(temp.arena, DataTable, num_threads);
 ToThread *to_threads = PushArray(temp.arena, ToThread, num_threads);

 std::vector<std::thread> threads;
 for (int i = 0; i < num_threads; i++)
 {
  ToThread *to_thread = & (to_threads[i]);
  to_thread->res_provider = &res_provider;
  to_thread->view_definitions = list;
  to_thread->out = & (tables[i]);

  if (args.bundle_count != 0)
  {
   to_thread->bundle_stopping_count = args.bundle_count / num_threads;
  }

  std::thread worker_thread(ThreadWork, to_thread);
  threads.push_back(std::move(worker_thread));
 }

 for (int i = 0; i < num_threads; i++)
 {
  threads[i].join();
 }

 std::vector<std::shared_ptr < arrow::Table> > arrow_tables;
 S64 row_count = 0;
 for (int i = 0; i < num_threads; i++)
 {
  arrow_tables.push_back(to_threads[i].arrow_table);

 }

 auto res_merged_table = arrow::ConcatenateTables(arrow_tables);
 if (res_merged_table.ok())
 {
  std::shared_ptr < arrow::Table > merged_table = res_merged_table.ValueOrDie();
  auto num_rows = merged_table->num_rows();
  std::cout << "Output Table # of rows: " << num_rows << std::endl;
  auto res = WriteTable(Str8Lit("./output.parquet"), merged_table);
 }
 else
 {
  std::cout << "Error merging tables" << std::endl;
 }
}
else
{
 if (list.count > 0)
 {
  DataTable table = {};
  DataTableList table_list = {};
  for (ViewDefinitionNode *node = list.first; node; node = node->next)
  {
   DataTable next_table = CreateDataTableFromViewDefinition(main_arena, node->v, &res_provider, args.bundle_count);

   DataTableNode *n = PushStruct(main_arena, DataTableNode);
   n->table = next_table;
   SLLQueuePush(table_list.first, table_list.last, n);
   table_list.count++;

   /*
   for (DataColumnNode *col = next_table.first; col; col = col->next)
   {
    table.AddColumn(temp.arena, col->v);
   }
   */

  }

  table = RowProduct(main_arena, table_list);
  auto t = ArrowTableFromDataTable(table);
  auto res = WriteTable(Str8Lit("./output.parquet"), t);
 }
}

 EndAndPrintProfile();


 ArenaRelease(res_provider.arena);

	ND_Cleanup();
 ScratchEnd(temp);

	return 0;
}