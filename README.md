# FHIR-in-C
To Create FHIR structs
```
build.bat main
build/main.exe
```

This will export:
- generated/fhir_class_definitions.h
- generated/fhir_class_metadata.h
- generated/cs_generated_classes.cs

To build DLL:
```cd dll
build.bat (debug|release)
```
Exported to dll/build
