# FHIR-in-C
Creates FHIR R4 Resource structs for use of FHIR in C.

There is an accompanied deserializer that deserializes FHIR R4 .json files.

### To build and create Resources
```
build.bat
build/main.exe
```
This will export:
- generated/fhir_class_definitions.h
- generated/fhir_class_metadata.h
- generated/CSGeneratedClasses.cs

To build DLL:
```cd dll
build.bat (debug|release)
```
Exported to dll/build

### See sister project FHIR-C-Marshalling
https://github.com/alexgwalley/FHIR-C-Marshalling

This sister project uses this deserializer to instantiate Firely SDK classes for regular use in C#.
