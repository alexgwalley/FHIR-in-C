@echo off

mkdir build

pushd build

echo %cd%
cl /EHsc /Fe:main.exe /std:c++17 ../src/main.cc /Zi /Isrc/code /W4 /I../src
popd
