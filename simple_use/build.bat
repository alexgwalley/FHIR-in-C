@echo off

@rem read compile mode, can be either "debug" or "release" (without quotes)
set compile_mode=%1

@rem wd5033 is to remove "register" warning from gperf
@rem wd4505 is to remove unreferenced function link
set FLAGS= /std:c++17 /wd5033 /wd4505 /EHsc /Fe:simple_use.exe
set DEBUG_FLAGS=/MDd /DEBUG /DDEBUG
set DEBUG_LINK=/link /DEBUG:FULL deserialization_dll.lib
set FILES= ../../src/third_party/simdjson.cpp ../simple_use.cc
set INCLUDES=/I../../src /I../../

mkdir build

pushd build
echo %cd%

if %compile_mode%==release cl /O2 /Zi %FLAGS%  %FILES% /Zi %INCLUDES%
if %compile_mode%==debug cl /Zi %FLAGS% %DEBUG_FLAGS%  %FILES% %INCLUDES% %DEBUG_LINK%
popd
