#include <stdio.h>
#include <string>
#include <sstream>
#include <fstream>
#include <unordered_set>

//////////////////
// ~ SIMD JSON
#define NDEBUG
#include "third_party/simdjson.h"
#include "third_party/simdjson.cpp"

//////////////////
// ~ OURS
// Native Fhir
#include "native_fhir/native_fhir_inc.h"
#include "resource_string_provider/resource_string_provider.h"

// R4
#include "fhir_r4_inc.h"

// Deserializer 
#include "deserializer/deserializer.h"

#include "fhir_path/fhir_path_inc.h"

// View Runner
#include "view_runner/view_runner_inc.h"

#define STATIC_BUILD
#include "entry_points/deserialization_dll.cc"

#include "native_fhir/native_fhir_inc.cc"
#include "resource_string_provider/resource_string_provider.cc"

#include "fhir_path/fhir_path_inc.cc"

// View Runner
#include "view_runner/view_runner_inc.cc"


using namespace native_fhir;
using namespace FHIR_VERSION;

FHIR_VERSION::Resource nil_resource = {};

void
main()
{
 OS_Init();
	ThreadCtx tctx = ThreadCtxAlloc();
	tctx.is_main_thread = 1;
	SetThreadCtx(&tctx);
 ND_Init(0);

 ResourceStringProvider res_provider(Str8Lit("C:/Users/awalley/Code/Ncqa.HT.Firely/Hedis2023/BuildArtifacts/Decks/13698_extracted"));

 BeginProfile();

 ResourceSource next = {};
 int a = 0;
 while ((int)(next = res_provider.GetNextSource()).type)
 {
  Temp temp = ScratchBegin(0, 0);
  String8 fn = PushStr8Copy(temp.arena, next.file_name);
  fhir_r4::Resource *res;
  ND_ContextNode *node = ND_DeserializeFile((const char*)fn.str, &res);

  if ((++a) % 1000 == 0)
  {
   std::cout << a << std::endl;
  }
  ND_FreeContext(node);
  ScratchEnd(temp);

  if (a > 1000) break;
 }

 ResourceStringProvider res_provider2(Str8Lit("C:/Users/awalley/Code/Ncqa.HT.Firely/Hedis2023/BuildArtifacts/Decks/13698_extracted"));


 if (true) { ReadAndExecuteTests(Str8Lit("")); }

 EndAndPrintProfile();

 BeginProfile();
 int max = 40000;
 int i = 0;
 u64 start = 0;
 LARGE_INTEGER s = {};
 QueryPerformanceCounter(&s);
 start = s.QuadPart;

 Piece* p = Antlr_ParseExpression(Str8Lit("count"));

 LARGE_INTEGER f = {};
 QueryPerformanceFrequency(&f);
 U64 freq = f.QuadPart;
 while ((int)(next = res_provider2.GetNextSource()).type)
 {
  Temp temp = ScratchBegin(0, 0);
  String8 fn = PushStr8Copy(temp.arena, next.file_name);
  fhir_r4::Resource *res;
  ND_ContextNode *node = ND_DeserializeFile((const char*)fn.str, &res);

  if ((++i) % 1000 == 0)
  {
   int idx = (i / 1000) - 1;
   BOOL b = QueryPerformanceCounter(&s);
   U64 curr = s.QuadPart;
   u64 diff = (curr - start);
   F64 ms = 1000.0 * (F64)diff / (F64)freq;
   std::cout << ms << "," << std::endl;
  }

  ND_FreeContext(node);

  ScratchEnd(temp);

  if (i > max) break;
 }

 EndAndPrintProfile();

}