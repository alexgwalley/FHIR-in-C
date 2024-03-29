@echo off

@rem read compile mode, can be either "debug" or "release" (without quotes)
set compile_mode=%1

mkdir build

pushd build
echo %cd%
@rem wd5033 is to remove "register" warning from gperf
if %compile_mode%==release cl /std:c++17   /O2 /Zi /EHsc /wd5033 /LD ../deserialization_dll.cc /I../../src /I../../ /link /OUT:deserialization_dll.dll /incremental:no
if %compile_mode%==debug cl /std:c++17 /Zi /DCUSTOM_DEBUG /wd5033 /EHsc /MDd /DEBUG /LDd ../deserialization_dll.cc /I../../src /I../../ /link /DEBUG:FULL /OUT:deserialization_dll.dll
popd
