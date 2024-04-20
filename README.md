# FHIR-in-C
Creates FHIR R4 Resource structs for use of FHIR in C.

There is an accompanied deserializer that deserializes FHIR R4 .json files.

### Warning - Active Development
This is in active development and the repository is highly volatile. Use at your own risk.


### To build all
```
mkdir build
cd build
cmake ..
cmake -build .
```

### To generate struct and metadata
copy build/main.exe to root folder

run `./main.exe` (make sure gperf.exe is in root folder as well)

This will export:
- generated/fhir_class_definitions.h
- generated/fhir_class_metadata.h
- generated/CSGeneratedClasses.cs

### See sister project FHIR-C-Marshalling
https://github.com/alexgwalley/FHIR-C-Marshalling

This sister project uses this deserializer to instantiate Firely SDK classes for regular use in C#.
