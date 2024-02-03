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
#include "base/logging.h"
#include <mutex>

#include "iso8601_time.h"

#include "manual_deserialization.h"
#include "generated/fhir_class_definitions.h"

#include "base/profiler.cc"
#include "base/core.c"
#include "base/arena.c"
#include "base/string8.cc"
#include "base/bitfield.cc"
#include "base/threading.c"
#include "base/logging.cc"
#include "base/os.cc"

#include "iso8601_time.cc"

// NOTE(agw): Annoying we have to do this but for some reason the thread local memory was being overwritten
extern "C" Temp
DLL_Scratch_Begin(ND_Context* context, Arena **conflicts, U64 conflict_count);

#define USE_SIMDJSON
#define USE_PROFILER
#include "third_party/simdjson.cpp"
#include "generated/fhir_class_metadata.h"
#include "manual_deserialization_simdjson.cc"




//#include "src/manual_deserialization_simdjson.cc"

using namespace fhir_deserialize;

extern "C"
{

struct ND_GlobalContext {
    ND_ContextNode *first_free;
    ND_ContextNode *last_free;

    // NOTE(agw): to make sure they _all_ get cleaned up on clean up
    // in case someone forgot to free it individually
    ND_ContextNode *first;
    ND_ContextNode *last;
};

std::mutex mutex;
static Arena *contexts_arena;
static ND_GlobalContext contexts;

Temp DLL_Scratch_Begin(ND_Context *context, Arena **conflicts, U64 conflict_count)
{
	Temp scratch = {0};
	for(U64 tctx_idx = 0; tctx_idx < ArrayCount(context->scratch_arenas); tctx_idx += 1)
	{
		B32 is_conflicting = 0;
		for(Arena **conflict = conflicts; conflict < conflicts+conflict_count; conflict += 1)
		{
			if(*conflict == context->scratch_arenas[tctx_idx])
			{
				is_conflicting = 1;
				break;
			}
		}
		if(is_conflicting == 0)
		{
			scratch.arena = context->scratch_arenas[tctx_idx];
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

	__declspec(dllexport) void __cdecl ND_Init(int num_contexts);
	__declspec(dllexport) void __cdecl ND_Cleanup(void);
	__declspec(dllexport) ND_ContextNode* __cdecl ND_DeserializeFile(char* file_name, fhir_r4::Resource **out);
	__declspec(dllexport) ND_ContextNode* __cdecl ND_DeserializeString(char* bytes, size_t length, fhir_r4::Resource **out);
    __declspec(dllexport) void __cdecl ND_FreeContext(ND_ContextNode *node);

	void
	ND_Cleanup(void)
	{
        // NOTE(agw): theoretically the free list should be "full" with all possible values...
        // should probably have a way to check this
        for (ND_ContextNode *node = contexts.first; node; node = node->next)
        {
            ND_Context context = node->value;
            for(U64 arena_idx = 0; arena_idx < ArrayCount(context.scratch_arenas); arena_idx += 1)
            {
                if (context.scratch_arenas[arena_idx])
                {
                    ArenaRelease(context.scratch_arenas[arena_idx]);
                }
            }
            if (context.log.arena)
            {
                ArenaRelease(context.log.arena);
            }

            if (context.main_arena)
            {
                ArenaRelease(context.main_arena);
            }
        }

	}

    ND_ContextNode*
    ND_CreateContext(Arena *arena)
    {
        ND_ContextNode *node = PushStruct(contexts_arena, ND_ContextNode);
        ND_Context *context = &node->value;

        context->options = {};
        context->options.class_metadata = (ClassMetadata*)&fhir_deserialize::class_metadata[0];
        context->options.class_metadata_count = ArrayCount(fhir_deserialize::class_metadata);
        context->main_arena = ArenaAlloc(Gigabytes(8));

        for(U64 arena_idx = 0; arena_idx < ArrayCount(context->scratch_arenas); arena_idx += 1)
        {
            context->scratch_arenas[arena_idx] = ArenaAlloc(Gigabytes(8));
        }

        context->log.arena = ArenaAlloc(Megabytes(64));

        QueuePush(contexts.first, contexts.last, node);

        return node;
    }

    ND_ContextNode*
    ND_GetFreeContext(Arena *arena)
    {
        ND_ContextNode *node;
        
        mutex.lock();

        if (contexts.first_free != NULL)
        {
            node = contexts.first_free;
            if (contexts.first_free == contexts.last_free) {
                contexts.first_free = NULL;
                contexts.last_free = NULL;
            }
            else {
                contexts.first_free = contexts.first_free->next;
            }
        }
        else
        {
            node = ND_CreateContext(arena);
        }

        mutex.unlock();

        return node;
    }

    void
    ND_PushFreeContext(ND_ContextNode *ctx)
    {
        mutex.lock();
        QueuePush(contexts.first_free, contexts.last_free, ctx);
        mutex.unlock();
    }

	void
	ND_Init(int num_contexts)
	{
		contexts_arena = ArenaAlloc(Megabytes(4));

        for (int i = 0; i < num_contexts; i++)
        {
            ND_ContextNode *node = ND_CreateContext(contexts_arena);
            QueuePush(contexts.first_free, contexts.last_free, node);
            QueuePush(contexts.first, contexts.last, node);
        }

	}

    ND_ContextNode*
    ND_DeserializeString(char* bytes, size_t length, fhir_r4::Resource **out)
    {
        ND_ContextNode *node = ND_GetFreeContext(contexts_arena);
		if (node->value.main_arena)
		{
			ArenaPopTo(node->value.main_arena, 0);
		}

		if (node->value.log.arena)
		{
			ArenaPopTo(node->value.log.arena, 0);
		}

        simdjson::ondemand::parser parser;
		simdjson::ondemand::document simd_doc = parser.iterate(bytes, length-64, length);
		node->value.options.file_name = Str8C("Unknown File Name");
        auto obj_res = simd_doc.get_object();
        if (obj_res.error())
        {
            *out = nullptr;
            return NULL;
        }
        simdjson::ondemand::object obj = obj_res.value_unsafe();

		
		fhir_r4::Resource* result = Resource_Deserialize_SIMDJSON(&node->value,
		                                                          node->value.main_arena,
		                                                          &node->value.options,
		                                                          ResourceType::Unknown,
		                                                          obj);
		fhir_r4::Bundle* bundle = (fhir_r4::Bundle*)result;
		*out = result;
        return node;
    }

    ND_ContextNode*
	ND_DeserializeFile(char* file_name, fhir_r4::Resource **out)
	{
        ND_ContextNode *node = ND_GetFreeContext(contexts_arena);
		if (node->value.main_arena)
		{
			ArenaPopTo(node->value.main_arena, 0);
		}

		if (node->value.log.arena)
		{
			ArenaPopTo(node->value.log.arena, 0);
		}

		std::string_view file_string_view{file_name};

		auto simd_json = simdjson::padded_string::load(file_string_view);
		if (simd_json.error())
		{
			printf("SIMD_JSON ERROR: %d\n", simd_json.error());
			return NULL;
		}

        simdjson::ondemand::parser parser;
		simdjson::ondemand::document simd_doc = parser.iterate(simd_json);
		node->value.options.file_name = Str8C(file_name);
		
		fhir_r4::Resource* result = Resource_Deserialize_SIMDJSON(&node->value,
		                                                          node->value.main_arena,
                                                                &node->value.options,
                                                                ResourceType::Unknown,
                                                                simd_doc.get_object());
		fhir_r4::Bundle* bundle = (fhir_r4::Bundle*)result;
		*out = result;
        return node;
	}

    void
    ND_FreeContext(ND_ContextNode *node)
    {
        if (node == NULL) return;
        ND_PushFreeContext(node);
    }

}
