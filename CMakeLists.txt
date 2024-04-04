# Set the minimum version of CMake required
cmake_minimum_required(VERSION 3.15)

# Define the project name and version
project(Native_FHIR VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_VERBOSE_MAKEFILE on)

set(ANTLR4_WITH_STATIC_CRT OFF)
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreadedDebugDLL")

include_directories(src .)
include_directories(fhir_path/src/antlr .)

if ( MSVC )
 set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /wd5033 /wd4244")
endif()

add_executable(main src/main.cc)
# Add an executable target
add_library(deserialization_dll SHARED dll/deserialization_dll.cc)
add_executable(fhir_path_test fhir_path/src/fhir_path_test.cc)

# Link libs
link_directories(${CMAKE_SOURCE_DIR}/fhir_path/src/antlr)

# Find ANTLR and link it
find_library(ANTLR_LIB NAMES antlr4_runtime_static PATHS ${CMAKE_SOURCE_DIR}/fhir_path/src/antlr)
target_link_libraries(fhir_path_test deserialization_dll ${ANTLR_LIB})
