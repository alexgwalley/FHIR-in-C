# FHIR-in-C
Creates FHIR R4 Resource structs for use of FHIR in C.

There is an accompanied deserializer that deserializes FHIR R4 .json files.

### Warning - Active Development
This is in active development and the repository is highly volatile. Use at your own risk.

### To Include In Project
```c
// Base, must be included if subsequent
#include "native_fhir/native_fhir_inc.h"
#include "native_fhir/native_fhir_inc.cc"

// R4 type enum / names
#include "fhir_r4_types.h"

// Deserializer
#include "deserializer/native_deserializer.h"
#ifdef STATIC_BUILD
  #include "entry_points/deserializer_dll.cc"
#else
  // Must link against deserializer_dll.dll
#endif

//FHIR Path Impl -> Requires Antlr4 runtime lib
#include "fhir_path/fhir_path_inc.h"
#include "fhir_path/fhir_path_inc.cc"

// Parquet View Runner -> Requires fhir_path and arrow libs
#include "view_runner/view_runner_inc.h"
#include "view_runner/view_runner_inc.cc"
```


### To build all
```
mkdir build
cd build
cmake ..
cmake --build . [--config Release]
```
For a static build / single executable
```
cmake -DSTATIC_BUILD=1 ..
cmake --build . --config Release
```

### To generate struct and metadata
cd 'FHIR-in-C'
run `./build/Debug/main.exe` (make sure gperf.exe is in root folder as well)

This will export:
- generated/fhir_class_definitions.h
- generated/fhir_class_metadata.h
- generated/CSGeneratedClasses.cs

### See sister project FHIR-C-Marshalling
https://github.com/alexgwalley/FHIR-C-Marshalling

This sister project uses this deserializer to instantiate Firely SDK classes for regular use in C#.
