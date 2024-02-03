#if 0
#include <windows.h>
#endif

#include <cstdio>
#include <iostream>

/////////////////////////
// json includes
#include "third_party/cJSON.h"
#include "third_party/simdjson.h"

#include "base/core.h"
#include "base/arena.h"
#include "base/string8.h"
#include "base/bitfield.h"
#include "base/nullable.h"
#include "base/threading.h"
#include "base/os.h"
#include "base/logging.h"

#include "iso8601_time.h"
#include "manual_deserialization.h"
#include "generated/fhir_class_definitions.h"


#include "base/profiler.cc"
#include "base/core.c"
#include "base/arena.c"
#include "base/string8.cc"
#include "base/bitfield.cc"
#include "base/threading.c"
#include "base/os.cc"
#include "base/logging.cc"

#include "iso8601_time.cc"

#define USE_SIMDJSON
#define USE_PROFILER

#include "generated/fhir_class_metadata.h"
//#include "src/manual_deserialization_simdjson.cc"

void*
ReadEntireFile(Arena *arena, String8 file_name)
{
	FILE *f = fopen((char*)file_name.str, "r");
	fseek(f,  0, SEEK_END);
	long length = ftell(f);
	void *result = ArenaPush(arena, length);
	fseek(f, 0, SEEK_SET);
    
	fread(result, length, 1, f);
	fclose(f);
	return result;
}


void*
Deserialize_File(Arena *arena, 
                 fhir_deserialize::DeserializationOptions *options,
                 String8 file_name,
                 ResourceType assumed_type,
                 ResourceType *out_type)
{
    TimeFunction;
	Temp scratch = ScratchBegin(&arena, 1);
    
	std::string_view file_string_view{(char*)file_name.str};
    simdjson::ondemand::document simd_doc;
    simdjson::ondemand::parser parser;
    simdjson::simdjson_result<simdjson::padded_string> simd_json;

    TimeBlock("Load And Iterate")
    {
        simd_json = simdjson::padded_string::load(file_string_view);
        simd_doc = parser.iterate(simd_json);
    }
	options->file_name = file_name;
    
    fhir_r4::Resource* result;
    TimeBlock("Deserialize")
    {
        
        /*
        result = Resource_Deserialize_SIMDJSON(arena,
                                               options,
                                               assumed_type,
                                               simd_doc.get_object());
        */
    }
	ScratchEnd(scratch);
	return result;
}

struct RunOptions
{
	bool profile;
	String8 directory_name;
	String8 benchmark_name;
};

RunOptions
RunOptionsFromArgs(Arena *arena, int args_count, char** args)
{
	// -dir directory_name
	// -bn benchmark_name
	// -prof // sets profile to true
	RunOptions options = {};
	ArenaTempBlock(arena, temp)
	{
		for (int i = 1; i < args_count; i++)
		{
			String8 arg_name = Str8C(args[i]);
			if (Str8Match(arg_name, Str8Lit("-dir"), MatchFlag_CaseInsensitive))
			{
				i++;
				String8 value = Str8C(args[i]);
				options.directory_name = value;
				// TODO(agw): can add checks later...
			} 
			else if(Str8Match(arg_name, Str8Lit("-bn"), MatchFlag_CaseInsensitive))
			{
				i++;
				String8 value = Str8C(args[i]);
				options.benchmark_name = value;
				// TODO(agw): can add checks later...
			}
			else if(Str8Match(arg_name, Str8Lit("-prof"), MatchFlag_CaseInsensitive))
			{
				options.profile = true;
			}
		}
	}
	return options;
}

typedef void* (WINAPI *DLL_Deserialize_File)(char*, fhir_r4::Resource**);
typedef void* (WINAPI *DLL_Deserialize_String)(char*, size_t len, fhir_r4::Resource**);
typedef void (WINAPI *DLL_Init)(int);
typedef void (WINAPI *DLL_End)();
typedef void (WINAPI *DLL_FreeContext)(void*);

int 
main(int arg_count, char** args)
{
	OS_Init();
	ThreadCtx tctx = ThreadCtxAlloc();
	tctx.is_main_thread = 1;
	SetThreadCtx(&tctx);
    
	Arena *arena = ArenaAlloc(Gigabytes(16));
    
	RunOptions run_options = RunOptionsFromArgs(arena, arg_count, args);
    
	fhir_deserialize::DeserializationOptions options = {};
	options.class_metadata = (ClassMetadata*)&fhir_deserialize::class_metadata[0];
	options.class_metadata_count = ArrayCount(fhir_deserialize::class_metadata);
	String8 dir_name = Str8Lit("./FHIR-Struct-Generator/bundles/");
	if (run_options.directory_name.size != 0)
	{
		dir_name = run_options.directory_name;

		if (run_options.directory_name.str[run_options.directory_name.size] != '/')
		{
			dir_name = PushStr8F(arena, "%S/", run_options.directory_name);
		}
	}
    
	bool should_profile = false;
	if (run_options.benchmark_name.size != 0)
	{
		should_profile = true;
	}
    
	printf("Deserializing all in %.*s\n", (int)dir_name.size, dir_name.str);
    
	Temp file_name_scratch = ScratchBegin(&arena, 1);
    
	Temp scratch = ScratchBegin(&arena, 1);
	String8 path = PushStr8F(scratch.arena, "%S\\*", dir_name);
	String16 path16 = Str16From8(scratch.arena, path);

    HMODULE dllHandle = LoadLibrary("deserialization_dll");
    if (dllHandle == NULL) printf("could not find dll\n");
    DLL_Init dll_init = (DLL_Init)GetProcAddress(dllHandle, "ND_Init");

    DLL_End dll_end = (DLL_End)GetProcAddress(dllHandle, "ND_Cleanup");

    if (dll_init == NULL) printf("could not find dll_init\n");
    dll_init(1);
    DLL_Deserialize_File deserialize_file_ptr = (DLL_Deserialize_File)GetProcAddress(dllHandle, "ND_DeserializeFile");
    if (deserialize_file_ptr == NULL) printf("could not find deserialize_file_ptr\n");

    DLL_Deserialize_String deserialize_string_ptr = (DLL_Deserialize_String)GetProcAddress(dllHandle, "ND_DeserializeString");
    if (deserialize_string_ptr == NULL) printf("could not find deserialize_file_ptr\n");


    DLL_FreeContext free_context_ptr = (DLL_Deserialize_String)GetProcAddress(dllHandle, "ND_FreeContext");
    if (free_context_ptr == NULL) printf("could not find free_context_ptr\n");
    
    
    FileEntries entries = OS_EnumerateDirectory(arena, dir_name);
	ScratchEnd(scratch);
    
	size_t total_bytes_processed = 0;
	int count = 0;
	if (should_profile)
	{
		BeginProfile();
	}
    
	for (int i = 0; i < entries.count;  i++)
    {
		if (entries.v[i].attr & FileAttributes_Directory ||
			FindSubstr8(entries.v[i].file_name, Str8Lit(".json"), 0, 0) == entries.v[i].file_name.size)
        {
            continue;
        }
        
        Temp scratch = ScratchBegin(&arena, 1);
        String8 bundle_file_name = PushStr8F(scratch.arena, "%S\\%S", 
                                             dir_name, 
                                             entries.v[i].file_name);
        ResourceType type = ResourceType::Bundle;
        
        count++;
        size_t pos = arena->pos;

        fhir_r4::Bundle *resource;
        TimeBlock("Deserialize_DLL")
        {
            //const char* data = "{\"resourceType\":\"Bundle\", \"id\": \"hello\"}";
            //simdjson::padded_string str(data, strlen(data));
            //deserialize_string_ptr(str.data(), str.size(), (fhir_r4::Resource**) & resource);
            void* ptr = deserialize_file_ptr((char*)bundle_file_name.str, (fhir_r4::Resource**)&resource);
            free_context_ptr(ptr);
        }
        printf("resource->_id %.*s\n", resource->_id.size, resource->_id.str);

		fhir_r4::StructureDefinition* ext = (fhir_r4::StructureDefinition*)(*resource->_entry)->_resource;
		total_bytes_processed += entries.v[i].file_size_low;

        ArenaPopTo(arena, pos);

		// TODO(agw): deal with this later
		Assert(entries.v[i].file_size_high == 0);
        ScratchEnd(scratch);
    }
    
    printf("DONE, count: %d\n", count);
    
    if (should_profile)
    {
        EndAndPrintProfile();
        u64 CPUFreq = EstimateCPUTimerFreq();
        
        
        u64 deserialization_elapsed = 0;
        for(int i = 0; i < ArrayCount(GlobalProfiler.Anchors); i++)
        {
			if (GlobalProfiler.Anchors[i].TSCElapsed > 0 && GlobalProfiler.Anchors[i].Label != NULL &&
                strcmp(GlobalProfiler.Anchors[i].Label, "Deserialize_File") == 0)
            {
                deserialization_elapsed = GlobalProfiler.Anchors[i].TSCElapsed;
                break;
            }
        }
        
        
        printf("Deserialized %d bundles, %0.4f GB\n", count, (f64)total_bytes_processed / (1024 * 1024 * 1024));
        f64 milliseconds = 1000.0 * (f64)deserialization_elapsed / (f64)CPUFreq;
        printf("Deserialization Time: %0.4fms (%llu)\n", milliseconds, deserialization_elapsed);
        printf("Total Bytes Processed: %llu \n", total_bytes_processed);
        
		// TODO(agw): this doesn't really mean much...
        printf("\nTime per bundle: %0.4fms (CPU freq %llu)\n", milliseconds / count, CPUFreq);
        
        f64 gigabytes = (f64)total_bytes_processed / Gigabytes(1);
        f64 seconds = milliseconds / 1000.0;
        
        printf("Gigabytes: %0.4fGB \n", gigabytes);
        printf("Seconds: %0.4fs \n", seconds);
        printf("Deserialization GB/s: %0.4f(GB/s) \n", gigabytes / seconds);
        
        String8 test_str = PushStr8F(arena,
                                     "Benchmark Name: %S, Deserialization GB/s: %0.4f(GB/s) \n",
                                     run_options.benchmark_name,
                                     gigabytes / seconds);
        
        FILE *f = fopen("tests.txt", "a+");
        fwrite(test_str.str, test_str.size, 1, f);
        fclose(f);
    }

    dll_end();
    
    return 0;
}
