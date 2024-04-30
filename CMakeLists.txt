# Set the minimum version of CMake required
cmake_minimum_required(VERSION 3.15)

# Define the project name and version
project(native_fhir VERSION 1.0)

message(STATUS "Arrow version: ${ARROW_VERSION}")
message(STATUS "Arrow SO version: ${ARROW_FULL_SO_VERSION}")

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_VERBOSE_MAKEFILE on)

set(ANTLR4_WITH_STATIC_CRT OFF)

if(MSVC)
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL")
endif()

include_directories(src .)
include_directories(src/third_party/antlr .)
include_directories(src/third_party/arrow .)


# generated targets
add_executable(main src/entry_points/main.cc)
if(NOT STATIC_BUILD)
add_library(deserialization_dll SHARED src/entry_points/deserialization_dll.cc)
endif()

add_executable(view_runner src/entry_points/view_runner.cc)
#add_executable(test src/test.cc)

if (MSVC)
 set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /wd5033 /wd4244 /EHsc")
 set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} /wd5033 /wd4244 /EHsc /Bt")

 set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /INCREMENTAL:NO /OPT:REF /OPT:ICF")
 #set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} /DEBUG /OPT:REF /OPT:ICF")

 if(STATIC_BUILD)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /DSTATIC_BUILD=1")
  set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} /DSTATIC_BUILD=1 /DANTLR4CPP_STATIC=1")
 endif()

endif()


# Adding ANTLR4 CPP Runtime
if(STATIC_BUILD)
add_compile_definitions(ANTLR4CPP_STATIC)
endif()


if(NOT STATIC_BUILD)
 # Find ANTLR and link it
 find_library(ANTLR_LIB_RELEASE NAMES antlr4-runtime PATHS ${CMAKE_SOURCE_DIR}/libs)
 find_library(ARROW_LIB_RELEASE NAMES arrow_release PATHS ${CMAKE_SOURCE_DIR}/libs)
 find_library(PARQUET_LIB_RELEASE NAMES parquet_release PATHS ${CMAKE_SOURCE_DIR}/libs)
 target_link_libraries(view_runner PRIVATE deserialization_dll ${ARROW_LIB_RELEASE} ${PARQUET_LIB_RELEASE} ${ANTLR_LIB_RELEASE})

else()
 message("STATIC BUILD")
 # Find ANTLR and link it
 find_library(ANTLR_LIB_RELEASE NAMES antlr4-runtime-static PATHS ${CMAKE_SOURCE_DIR}/libs/release)
 find_library(PARQUET_LIB_RELEASE NAMES parquet_static PATHS ${CMAKE_SOURCE_DIR}/libs/release)
 find_library(ARROW_LIB_RELEASE NAMES arrow_static PATHS ${CMAKE_SOURCE_DIR}/libs/release)
 find_library(ARROW_BUNDLED NAMES arrow_bundled_dependencies PATHS ${CMAKE_SOURCE_DIR}/libs/release)

 target_compile_definitions(view_runner PUBLIC ARROW_STATIC ANTLR4CPP_STATIC PARQUET_STATIC)
 target_link_libraries(view_runner PRIVATE ${ARROW_LIB_RELEASE} ${PARQUET_LIB_RELEASE} ${ANTLR_LIB_RELEASE} ${ARROW_BUNDLED})
endif()

