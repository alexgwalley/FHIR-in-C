#include <cstdio>
#include <iostream>

/////////////////////////
// json includes
#include "third_party/cJSON.h"
#include "third_party/simdjson.h"

#include "base/core.h"
#include "base/arena.h"
#include "base/string8.h"
#include "base/bitfield.h"
#include "base/nullable.h"
#include "base/threading.h"
#include "base/os.h"
#include "base/logging.h"

#include "iso8601_time.h"
#include "manual_deserialization.h"
#include "generated/fhir_class_definitions.h"


#include "base/profiler.cc"
#include "base/core.c"
#include "base/arena.c"
#include "base/string8.cc"
#include "base/bitfield.cc"
#include "base/threading.c"
#include "base/os.cc"
#include "base/logging.cc"

#include "iso8601_time.cc"

#define USE_SIMDJSON
#define USE_PROFILER
#include "generated/fhir_class_metadata.h"

Temp 
DLL_Scratch_Begin(ND_Context *context, Arena **conflicts, U64 conflict_count)
{
    return {};
}

#include "manual_deserialization_simdjson.cc"


void 
TestISOTime() {
    String8 str1 = Str8Lit("2024-01-01T00:00:00.000-05:00");
    Deserialize_ISO8601(str1, ValueType::DateTime);
}

int main()
{
    printf("Hello\n");
    TestISOTime();
    return 0;
}
