#include <windows.h>
#include "stdio.h"

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

#include "iso8601_time.cc"

#define USE_SIMDJSON
#define USE_PROFILER

#include "generated/fhir_class_metadata.h"

// NOTE(agw): Annoying we have to do this but for some reason the thread local memory was being overwritten
extern "C" Temp
DLL_Scratch_Begin(Arena **conflicts, U64 conflict_count);

#define ScratchBegin(...) DLL_Scratch_Begin(__VA_ARGS__)
#include "src/manual_deserialization_simdjson.cc"
#undef ScratchBegin

extern "C"
{
struct FD_Context
{
	Arena *main_arena;
	Arena *scratch_arenas[2];
	fhir_deserialize::DeserializationOptions options;
};

per_thread static FD_Context context;

per_thread static simdjson::ondemand::parser parser;
	
Temp
DLL_Scratch_Begin(Arena **conflicts, U64 conflict_count)
{
	Temp scratch = {0};
	for(U64 tctx_idx = 0; tctx_idx < ArrayCount(context.scratch_arenas); tctx_idx += 1)
	{
		B32 is_conflicting = 0;
		for(Arena **conflict = conflicts; conflict < conflicts+conflict_count; conflict += 1)
		{
			if(*conflict == context.scratch_arenas[tctx_idx])
			{
				is_conflicting = 1;
				break;
			}
		}
		if(is_conflicting == 0)
		{
			scratch.arena = context.scratch_arenas[tctx_idx];
			scratch.pos = scratch.arena->pos;
			break;
		}
	}
	return scratch;
}

BOOL APIENTRY DllMain(
	HANDLE hModule,// Handle to DLL module
	DWORD ul_reason_for_call,// Reason for calling function
	LPVOID lpReserved ) // Reserved
{
	switch ( ul_reason_for_call )
	{
		case DLL_PROCESS_ATTACH: // A process is loading the DLL.
		{
			context = {};
			OS_Init();
		} break;
		case DLL_THREAD_ATTACH: // A process is creating a new thread.
		{
		} break;
		case DLL_THREAD_DETACH: // A thread exits normally.
		{
		} break;
		case DLL_PROCESS_DETACH: // A process unloads the DLL.
			break;
	}
	return TRUE;
}

	__declspec(dllexport) void __cdecl ND_Init(void);
	__declspec(dllexport) void __cdecl ND_Cleanup(void);
	__declspec(dllexport) void __cdecl ND_DeserializeFile(char* file_name, fhir_r4::Resource **out);

	void
	ND_Init(void)
	{
		context.options = {};
		context.options.class_metadata = (ClassMetadata*)&fhir_deserialize::class_metadata[0];
		context.options.class_metadata_count = ArrayCount(fhir_deserialize::class_metadata);
		context.main_arena = ArenaAlloc(Gigabytes(8));

		global_log.arena = ArenaAlloc(Megabytes(64));

		for(U64 arena_idx = 0; arena_idx < ArrayCount(context.scratch_arenas); arena_idx += 1)
		{
			context.scratch_arenas[arena_idx] = ArenaAlloc(Gigabytes(8));
		}
	}

	void
	ND_Cleanup(void)
	{
		for(U64 arena_idx = 0; arena_idx < ArrayCount(context.scratch_arenas); arena_idx += 1)
		{
            if (context.scratch_arenas[arena_idx])
            {
                ArenaRelease(context.scratch_arenas[arena_idx]);
            }
		}
        if (global_log.arena)
        {
            ArenaRelease(global_log.arena);
        }

        if (context.main_arena)
        {
            ArenaRelease(context.main_arena);
        }
	}

	void
	ND_DeserializeFile(char* file_name, fhir_r4::Resource **out)
	{
		if (context.main_arena)
		{
			ArenaPopTo(context.main_arena, 0);
		}

		if (global_log.arena)
		{
			ArenaPopTo(global_log.arena, 0);
		}

		std::string_view file_string_view{file_name};

		auto simd_json = simdjson::padded_string::load(file_string_view);
		if (simd_json.error())
		{
			printf("SIMD_JSON ERROR: %d\n", simd_json.error());
			return;
		}

		simdjson::ondemand::document simd_doc = parser.iterate(simd_json);
		context.options.file_name = Str8C(file_name);
		
		fhir_r4::Resource* result = Resource_Deserialize_SIMDJSON(context.main_arena,
													&context.options,
													ResourceType::Unknown,
													simd_doc.get_object());
		fhir_r4::Bundle* bundle = (fhir_r4::Bundle*)result;
		*out = result;

	}
}