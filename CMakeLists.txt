# Set the minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Define the project name and version
project(Native_FHIR VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)

include_directories(src .)

# Add an executable target
add_library(deserialization_dll SHARED dll/deserialization_dll.cc)

add_executable(main src/main.cc)
add_executable(fhir_path_test fhir_path/src/fhir_path_test.cc)
target_link_libraries(fhir_path_test deserialization_dll)
