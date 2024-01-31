#if 0
#include <windows.h>
#endif

#include <cstdio>
#include <iostream>

/////////////////////////
// json includes
#include "cJSON.h"
#include "third_party/simdjson.h"

#include "core.h"
#include "arena.h"
#include "string8.h"
#include "threading.h"
#include "os.h"
#include "nullable.h"
#include "manual_deserialization.h"

#include "generated/fhir_class_definitions.h"

#include "src/profiler.cc"
#include "src/core.c"
#include "src/arena.c"
#include "src/string8.cc"
#include "src/threading.c"
#include "os.cc"

#define USE_SIMDJSON
#define USE_PROFILER

#include "generated/fhir_class_metadata.h"
#include "src/manual_deserialization_simdjson.cc"

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
    
	Temp scratch = ScratchBegin(&arena, 1);
    
	simdjson::ondemand::parser parser;
	std::string_view file_string_view{(char*)file_name.str};
    
	auto simd_json = simdjson::padded_string::load(file_string_view);
	simdjson::ondemand::document simd_doc = parser.iterate(simd_json);
	options->file_name = file_name;
    
	fhir_r4::Resource* result = Resource_Deserialize_SIMDJSON(arena,
	                                             options,
	                                             assumed_type,
	                                             simd_doc.get_object());
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





int 
main(int arg_count, char** args)
{
	OS_Init();
	ThreadCtx tctx = ThreadCtxAlloc();
	tctx.is_main_thread = 1;
	SetThreadCtx(&tctx);
    
	Arena *arena = ArenaAlloc(Gigabytes(16));
	global_log.arena = ArenaAlloc(Megabytes(64));
    
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
        fhir_r4::Bundle* resource = (fhir_r4::Bundle*)Deserialize_File(arena, 
                                                                       &options,
                                                                       bundle_file_name,
                                                                       ResourceType::Bundle,
                                                                       &type);

		fhir_r4::StructureDefinition* ext = (fhir_r4::StructureDefinition*)(*resource->_entry)->_resource;
		total_bytes_processed += entries.v[i].file_size_low;

		// TODO(agw): deal with this later
		Assert(entries.v[i].file_size_high == 0);
        ScratchEnd(scratch);
    }
    
    printf("DONE, count: %d\n", count);
    
    // TODO(agw): behind some define? deserialization_options somehow?
    PrintLog(&global_log);
    
    if (should_profile)
    {
        EndAndPrintProfile();
        u64 CPUFreq = EstimateCPUTimerFreq();
        
        
        u64 deserialization_elapsed = 0;
        for(int i = 0; i < ArrayCount(GlobalProfiler.Anchors); i++)
        {
			if (GlobalProfiler.Anchors[i].TSCElapsed > 0 && GlobalProfiler.Anchors[i].Label != NULL &&
                strcmp(GlobalProfiler.Anchors[i].Label, "Resource_Deserialize_SIMDJSON") == 0)
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
    
    return 0;
}
