#include <stdio.h>
#include <string>
#include <sstream>
#include <fstream>
#include <unordered_set>

//////////////////
// ~ SIMD JSON
#include "third_party/simdjson.h"
#include "third_party/simdjson.cpp"


//////////////////
// ~ OURS
#include "native_fhir/native_fhir_inc.h"
#include "base/profiler.cc"

#include "fhir_r4_types.h"
#include "generated/fhir_class_definitions.h"
#include "generated/fhir_class_metadata.h"

#include "manual_deserialization.h"
#include "native_deserializer.h"

#include "fhir_class/fhir_class.h"

#include "native_fhir/native_fhir_inc.cc"

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

 char* fn = "test_bundles/100002.json";
 fhir_r4::Resource *res;
 ND_ContextNode *node = ND_DeserializeFile(fn, &res);

 int a = 0;
}