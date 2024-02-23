@echo off

@rem read compile mode, can be either "debug" or "release" (without quotes)
set compile_mode=%1

mkdir build

pushd build
echo %cd%
@rem wd5033 is to remove "register" warning from gperf
cl /std:c++17 /Zi /DDEBUG /wd5033 /wd4505 /EHsc /MDd /DEBUG /Fe:test.exe ../../src/third_party/simdjson.cpp ../tests.cc /I../../src /I../../ /link /DEBUG:FULL
popd
