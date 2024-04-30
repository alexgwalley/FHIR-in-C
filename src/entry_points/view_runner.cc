//////////////////
// ~ STD Lib    //
//////////////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <thread>
#include <atomic>

//////////////////
// ~ OURS       //
//////////////////

#define NDEBUG
// Native Fhir
#include "native_fhir/native_fhir_inc.h"
#include "resource_string_provider/resource_string_provider.h"

// R4
#include "fhir_r4_inc.h"

// Fhir Path
#include "fhir_path/fhir_path_inc.h"

// Deserializer 
#include "deserializer/deserializer.h"

// View Runner
#include "view_runner/view_runner_inc.h"

//////////////////
// .CC files    //
//////////////////
#include "base/profiler.cc"

// Native Fhir
#include "native_fhir/native_fhir_inc.cc"
#include "resource_string_provider/resource_string_provider.cc"

#ifdef STATIC_BUILD
#include "entry_points/deserialization_dll.cc"
#endif

// Fhir Path
#include "fhir_path/fhir_path_inc.cc"

// View Runner
#include "view_runner/view_runner_inc.cc"


using namespace native_fhir;
using namespace FHIR_VERSION;
using namespace antlr4;

/////////////////
// ~ Argument Parsing

enum class ArgumentType
{
 Unknown,
 BundleCount,
 BundleDir,
 Parallel,
 Test,
 Output
};

struct Argument
{
 String8 name;
 ArgumentType type;
 String8 description;

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
 String8 output_file;
 B32 parallel;
 B32 test;
};

Argument arguments[] =
{
 { Str8Lit("--count"), ArgumentType::BundleCount, Str8Lit("number of bundles to process from the folder") },
 { Str8Lit("--dir"), ArgumentType::BundleDir, Str8Lit("Directory for bundles, do not include final '/' or '\\'") },
 { Str8Lit("--parallel"), ArgumentType::Parallel, Str8Lit("Flag to run on multiple threads") },
 { Str8Lit("--test"), ArgumentType::Test, Str8Lit("Flag to run SQL-on-FHIR unit tests") },
 { Str8Lit("--output"), ArgumentType::Output, Str8Lit("Output folder") }
};

ExecutionArguments
ParseArguments(Arena *arena, int count, char** args)
{
 ExecutionArguments ret = {};

 for (int i = 0; i < count; i++)
 {
  String8 str = Str8C(args[i]);

  for (int j = 0; j < ArrayCount(arguments); j++)
  {
   if (!Str8Match(arguments[j].name, str, 0)) { continue; }
   switch (arguments[j].type)
   {
    case ArgumentType::BundleCount:
    {
     i++;
     String8 value = Str8C(args[i]);
     int int_val = atoi(args[i]);
     ret.bundle_count = int_val;
     std::cout << "Set bundle count: " << int_val << std::endl;
    } break;
    case ArgumentType::BundleDir:
    {
     i++;
     String8 value = Str8C(args[i]);
     ret.bundle_dir = value;
     std::cout << "Set bundle dir: " << value << std::endl;
    } break;
    case ArgumentType::Output:
    {
     i++;
     String8 value = Str8C(args[i]);
     ret.output_file = value;
     std::cout << "Set output directory:" << value << std::endl;
    } break;
    case ArgumentType::Parallel:
    {
     ret.parallel = true;
     std::cout << "Set parallel" << std::endl;
    } break;
    case ArgumentType::Test:
    {
     ret.test = true;
     std::cout << "Set Test" << std::endl;
    } break;

   }
  }

 }

 return ret;
}

/////////////////
// ~ Running

DataTable
CreateDataTableFromViewDefinition(Arena *arena, native_fhir::ViewDefinition vd, ResourceStringProvider* resources, int stopping_count)
{
 TimeFunction;
 DataTable table = {};
 try
 {
  table = ExecuteViewDefinition(arena, vd, resources, stopping_count);
 } catch(std::exception &e)
 {
  std::cerr << e.what() << std::endl;
 }
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
 std::shared_ptr < arrow::Table > arrow_table;
};

void ThreadWork(ToThread* opts)
{
 ThreadCtx tctx = ThreadCtxAlloc();
 SetThreadCtx(&tctx);

 Arena *arena = ArenaAlloc(Megabytes(64));
 if (opts->view_definitions.count > 0)
 {
  DataTable table = {};

  // TODO(agw): This loop needs to go inside the CreateDataTable function (one deserialization per resource)
  for (ViewDefinitionNode *node = opts->view_definitions.first; node; node = node->next)
  {
   DataTable next_table = ExecuteViewDefinition(arena, node->v, opts->res_provider, opts->bundle_stopping_count);

   for (DataColumnNode *col = next_table.first; col; col = col->next)
   {
    table.AddColumn(arena, col->v);
   }
  }

  std::cout << "Num rows in table: " << table.GetRowCount() << std::endl;
  auto t = ArrowTableFromDataTable(table);
  opts->arrow_table = t;
 }

 ArenaRelease(arena);
 ThreadCtxRelease(&tctx);
}

int
main(int argc, char** argv)
{
 /////////////////// 
 // ~ Setup
 ///////////////////
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

 /////////////////////////////
 // ~ Parse and use arguments 
 /////////////////////////////
 ExecutionArguments args = ParseArguments(temp.arena, argc, argv);

 String8 base_file_name = Str8Lit("C:/Users/awalley/Code/Ncqa.HT.Firely/Hedis2023/BuildArtifacts/Decks/13698_extracted");
 if (args.bundle_dir.size > 0) { base_file_name = args.bundle_dir; }

 ResourceStringProvider res_provider(base_file_name);

 if (args.test) { ReadAndExecuteTests(Str8Lit("")); }

 BeginProfile();


 ViewDefinitionList list = LoadViewDefinitions(temp.arena, Str8Lit("view_definitions.json"));

 ////////////////////////
 // ~ Parallel Execution 
 ////////////////////////
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
    to_thread->bundle_stopping_count = args.bundle_count;
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
   std::cout << "Before value or die" << std::endl;
   std::shared_ptr < arrow::Table > merged_table = res_merged_table.ValueOrDie();
   auto num_rows = merged_table->num_rows();
   std::cout << "Output Table # of rows: " << num_rows << std::endl;
   auto res = WriteTable(Str8Lit("./output.parquet"), merged_table);
  }
  else
  {
   std::cerr << "Error merging tables" << std::endl;
  }

  std::cout << "Num resources: " << g_res_id << std::endl;
 }
 //////////////////////////////
 // ~ Single Thread Execution
 //////////////////////////////
 else
 {
  if (list.count > 0)
  {
   Arena *main_arena = ArenaAlloc(Megabytes(64));
   DataTable table = {};
   DataTableList table_list = {};
   for (ViewDefinitionNode *node = list.first; node; node = node->next)
   {
    DataTable next_table = CreateDataTableFromViewDefinition(main_arena, node->v, &res_provider, args.bundle_count);

    DataTableNode *n = PushStruct(main_arena, DataTableNode);
    n->table = next_table;
    SLLQueuePush(table_list.first, table_list.last, n);
    table_list.count++;
   }

   table = RowProduct(main_arena, table_list);
   auto t = ArrowTableFromDataTable(table);
   std::cout << "Row count: " << table.GetRowCount() << std::endl;
   auto res = WriteTable(Str8Lit("./output.parquet"), t);

   ArenaRelease(main_arena);
  }
 }

 EndAndPrintProfile();


 //////////////
 // ~ Cleanup 
 //////////////

 ND_Cleanup();
 ScratchEnd(temp);

 return 0;
}