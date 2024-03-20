#if 1
#include <windows.h>
#endif

#include <cstdio>
#include <iostream>

/////////////////////////
// json includes
#include "third_party/cJSON.h"
#include "third_party/simdjson.h"

#include "base/base_inc.h"

#include "generated/fhir_r4_types.h"
#include "generated/fhir_class_definitions.h"
#include "metadata/metadata.h"
#include "manual_deserialization.h"
#include "generated/fhir_class_metadata.h"

#include "native_deserializer.h"

#include "base/base_inc.cc"
#include "iso8601_time/iso8601_time.cc"
#include "native_deserializer.cc"

#define USE_SIMDJSON
#define USE_PROFILER

#include "generated/fhir_class_metadata.h"

using namespace native_fhir;
using namespace nf_fhir_r4;

void*
Deserialize_File(Arena *arena,
                 native_fhir::DeserializationOptions *options,
                 String8 file_name,
                 ResourceType assumed_type,
                 ResourceType *out_type)
{
	TimeFunction;
	Temp scratch = ScratchBegin(&arena, 1);
    
	std::string_view file_string_view { (char*)file_name.str };
	simdjson::ondemand::document simd_doc;
	simdjson::ondemand::parser parser;
	simdjson::simdjson_result<simdjson::padded_string> simd_json;

	TimeBlock("Load And Iterate")
	{
		simd_json = simdjson::padded_string::load(file_string_view);
		simd_doc = parser.iterate(simd_json);
	}
	options->file_name = file_name;
    
	Resource* result;
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
			else if (Str8Match(arg_name, Str8Lit("-bn"), MatchFlag_CaseInsensitive))
			{
				i++;
				String8 value = Str8C(args[i]);
				options.benchmark_name = value;
				// TODO(agw): can add checks later...
			}
			else if (Str8Match(arg_name, Str8Lit("-prof"), MatchFlag_CaseInsensitive))
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

	ND_Init();
    
	Arena *arena = ArenaAlloc(Gigabytes(16));
    
	RunOptions run_options = RunOptionsFromArgs(arena, arg_count, args);
    
	native_fhir::DeserializationOptions options = {};
	options.class_metadata = (ClassMetadataPtr) & g_class_metadata[0];
	options.class_metadata_count = ArrayCount(g_class_metadata);
	String8 dir_name = Str8Lit("./bundles/");
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
	BeginProfile();
    
	for (int i = 0; i < entries.count; i++)
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
		printf("%.*s\n", bundle_file_name.size, bundle_file_name.str);
		ResourceType type = ResourceType::Bundle;

		total_bytes_processed += entries.v[i].file_size_low;
        
		count++;
		size_t pos = arena->pos;

		Bundle *resource;
		TimeBlock("Deserialize_DLL")
		{
			void* ptr = nd_state.DeserializeFile((char*)bundle_file_name.str, (nf_fhir_r4::Resource**) & resource);
			nd_state.FreeContext(ptr);
		}

		ArenaPopTo(arena, pos);

		// TODO(agw): deal with this later
		Assert(entries.v[i].file_size_high == 0);
		ScratchEnd(scratch);
	}
    
	printf("DONE, count: %d\n", count);
    
	EndAndPrintProfile();
	u64 CPUFreq = EstimateCPUTimerFreq();
        
        
	u64 deserialization_elapsed = 0;
	for (int i = 0; i < ArrayCount(GlobalProfiler.Anchors); i++)
	{
		if (GlobalProfiler.Anchors[i].TSCElapsed > 0 && GlobalProfiler.Anchors[i].Label != NULL &&
			strcmp(GlobalProfiler.Anchors[i].Label, "Deserialize_DLL") == 0)
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

	nd_state.Cleanup();
    
	return 0;
}
