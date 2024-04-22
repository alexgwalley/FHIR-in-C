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
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL")

message("${CMAKE_MSVC_RUNTIME_LIBRARY}")
message("test")

include_directories(src .)
include_directories(fhir_path/src/third_party/antlr .)
include_directories(fhir_path/src/third_party/arrow .)

if (MSVC)
 set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /wd5033 /wd4244 /EHsc")
endif()

# generated targets
add_executable(main src/main.cc)
add_library(deserialization_dll SHARED dll/deserialization_dll.cc)
add_executable(fhir_path_test fhir_path/src/fhir_path_test.cc)

#add_executable(test src/test.cc)
#target_link_libraries(test deserialization_dll)

# Link libs
#link_directories(${CMAKE_SOURCE_DIR}/fhir_path/src/third_party/antlr)

# Find ANTLR and link it
find_library(ANTLR_LIB NAMES antlr4_runtime PATHS ${CMAKE_SOURCE_DIR}/libs)
find_library(ANTLR_LIB_RELEASE NAMES antlr4_runtime_release PATHS ${CMAKE_SOURCE_DIR}/libs)

find_library(ARROW_LIB NAMES arrow PATHS ${CMAKE_SOURCE_DIR}/libs)
find_library(ARROW_LIB_RELEASE NAMES arrow_release PATHS ${CMAKE_SOURCE_DIR}/libs)

find_library(PARQUET_LIB NAMES parquet PATHS ${CMAKE_SOURCE_DIR}/libs)
find_library(PARQUET_LIB_RELEASE NAMES parquet_release PATHS ${CMAKE_SOURCE_DIR}/libs)

# This isn't really correct, since we are using a multi-configured version of cmake...
if(DEBUG)
target_link_libraries(fhir_path_test deserialization_dll ${ARROW_LIB} ${PARQUET_LIB} ${ANTLR_LIB})
else()
target_link_libraries(fhir_path_test deserialization_dll ${ARROW_LIB_RELEASE} ${PARQUET_LIB_RELEASE} ${ANTLR_LIB_RELEASE})
endif()



