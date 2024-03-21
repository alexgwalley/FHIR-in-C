@echo off

mkdir build

set INCLUDES=/Isrc/code  /I../src /I../../src/ /I../../dll /I../../

@rem wd4505 for un-used linked function
@rem wd4201 for nameless structs 
set FLAGS=/wd4505 /wd4201 /wd5033 /wd4127 /DEBUG /Fe:fhir_path_tests.exe /std:c++20

pushd build
echo %cd%
echo %pwd%
cl %FLAGS% ../src/fhir_path_test.cc /Zi /W4 %INCLUDES% /link ../../dll/build/deserialization_dll.lib
popd
