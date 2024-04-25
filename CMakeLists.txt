# Set the minimum version of CMake required
cmake_minimum_required(VERSION 3.15)

# Define the project name and version
project(native_fhir VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_VERBOSE_MAKEFILE on)

set(ANTLR4_WITH_STATIC_CRT OFF)
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL")


include_directories(src .)
include_directories(src/third_party/antlr .)
include_directories(src/third_party/arrow .)

# generated targets
add_executable(main src/entry_points/main.cc)
add_library(deserialization_dll SHARED src/entry_points/deserialization_dll.cc)
add_executable(view_runner src/entry_points/view_runner.cc)

if (MSVC)
 set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /wd5033 /wd4244 /EHsc /Bt")
endif()

# Find ANTLR and link it
find_library(ANTLR_LIB_RELEASE NAMES antlr4_runtime_release PATHS ${CMAKE_SOURCE_DIR}/libs)
find_library(ARROW_LIB_RELEASE NAMES arrow_release PATHS ${CMAKE_SOURCE_DIR}/libs)
find_library(PARQUET_LIB_RELEASE NAMES parquet_release PATHS ${CMAKE_SOURCE_DIR}/libs)

target_link_libraries(view_runner deserialization_dll ${ARROW_LIB_RELEASE} ${PARQUET_LIB_RELEASE} ${ANTLR_LIB_RELEASE})

