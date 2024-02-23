@echo off

mkdir build

set INCLUDES=/Isrc/code  /I../src

@rem wd4505 for un-used linked function
@rem wd4201 for nameless structs 
set FLAGS=/wd4505 /wd4201 /EHsc /Fe:main.exe /std:c++17 

pushd build
echo %cd%
cl %FLAGS% ../src/main.cc /Zi /W4 %INCLUDES%

popd
