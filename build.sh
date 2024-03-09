#!/bin/sh

mkdir build
pushd build
pwd

g++ -o main ../src/main.cc -std=c++17 -I../src 

popd
