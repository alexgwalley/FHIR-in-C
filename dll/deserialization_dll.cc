#include "native_fhir_inc.h"

#include <windows.h>
#include "stdio.h"

#include "third_party/cJSON.h"
#include "third_party/simdjson.h"

#include <mutex>

#include "generated/fhir_r4_types.h"
#include "generated/fhir_class_definitions.h"

#include "manual_deserialization.h"

#include "generated/fhir_class_metadata.h"
#include "native_deserializer.h"

#include "native_fhir_inc.cc"


using namespace native_fhir;
using namespace nf_fhir_r4;
extern "C" Temp
DLL_Scratch_Begin(ND_Context* context, Arena **conflicts, U64 conflict_count);

#define USE_SIMDJSON
#define USE_PROFILER
#include "third_party/simdjson.cpp"
#include "manual_deserialization_simdjson.cc"


extern "C"
{

	struct ND_GlobalContext {
		ND_ContextNode *first_free;
		ND_ContextNode *last_free;
		int num_contexts;

		// NOTE(agw): to make sure they _all_ get cleaned up on clean up
		// in case someone forgot to free it individually
		ND_ContextNode *first;
		ND_ContextNode *last;
	};

	std::mutex mutex;
	static Arena *contexts_arena;
	static Arena *meta_arena;
	static ND_GlobalContext contexts;

	MetadataFile *meta_file;

	Temp DLL_Scratch_Begin(ND_Context *context, Arena **conflicts, U64 conflict_count)
	{
		Temp scratch = { 0 };
		for (U64 tctx_idx = 0; tctx_idx < ArrayCount(context->scratch_arenas); tctx_idx += 1)
		{
			B32 is_conflicting = 0;
			for (Arena **conflict = conflicts; conflict < conflicts + conflict_count; conflict += 1)
			{
				if (*conflict == context->scratch_arenas[tctx_idx])
				{
					is_conflicting = 1;
					break;
				}
			}
			if (is_conflicting == 0)
			{
				scratch.arena = context->scratch_arenas[tctx_idx];
				scratch.pos = scratch.arena->pos;
				break;
			}
		}
		return scratch;
	}

	BOOL APIENTRY DllMain(
		HANDLE hModule, // Handle to DLL module
		DWORD ul_reason_for_call, // Reason for calling function
		LPVOID lpReserved) // Reserved
	{
		switch (ul_reason_for_call)
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

	// ~ General Helpers
	__declspec(dllexport)
 const native_fhir::MemberNameAndOffset*
 __cdecl NF_ClassMemberLookup(native_fhir::nf_fhir_r4::ResourceType resourceType, String8 member_name);

	const native_fhir::MemberNameAndOffset*
	NF_ClassMemberLookup(ResourceType resourceType, String8 member_name)
	{
		return ClassMemberLookup(resourceType, member_name);
	}

	__declspec(dllexport)
	const ResourceNameTypePair *
	__cdecl NF_ResourceNameTypePairFromString8(String8 str);

	const ResourceNameTypePair *
	NF_ResourceNameTypePairFromString8(String8 str)
	{
		return  Perfect_Hash::in_word_set((char*)str.str, str.size);
	}


	// ~ Deserializer
	__declspec(dllexport) void __cdecl ND_Init(int num_contexts);
	__declspec(dllexport) void __cdecl ND_Cleanup(void);
	__declspec(dllexport) ND_ContextNode* __cdecl ND_DeserializeFile(const char* file_name, nf_fhir_r4::Resource **out);
	__declspec(dllexport) ND_ContextNode* __cdecl ND_DeserializeString(char* bytes, size_t length, nf_fhir_r4::Resource **out);
	__declspec(dllexport) void __cdecl ND_FreeContext(ND_ContextNode *node);


	void
	ND_Cleanup(void)
	{
		// NOTE(agw): theoretically the free list should be "full" with all possible values...
		// should probably have a way to check this
		for (ND_ContextNode *node = contexts.first; node; node = node->next)
		{
			ND_Context context = node->value;
			for (U64 arena_idx = 0; arena_idx < ArrayCount(context.scratch_arenas); arena_idx += 1)
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
		context->options.meta_file = meta_file;
		context->main_arena = ArenaAlloc(Gigabytes(8));

		for (U64 arena_idx = 0; arena_idx < ArrayCount(context->scratch_arenas); arena_idx += 1)
		{
			context->scratch_arenas[arena_idx] = ArenaAlloc(Gigabytes(8));
		}

		context->log.arena = ArenaAlloc(Megabytes(64));

		QueuePush(contexts.first, contexts.last, node);
		contexts.num_contexts++;
		#if DEBUG
		OutputDebugString("Created a new Context\n");
		#endif

		return node;
	}

	ND_ContextNode*
	ND_GetFreeContext(Arena *arena)
	{
		ND_ContextNode *node;
        
		mutex.lock();

		if (contexts.first_free)
		{
			// OutputDebugString("Using free context\n");
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
		meta_arena = ArenaAlloc(Megabytes(64));

		meta_file = PushStruct(meta_arena, MetadataFile);
		MetadataFile file = M_Deserialize(meta_arena, &g_metadata, sizeof(g_metadata));
		MemoryCopy(meta_file, &file, sizeof(MetadataFile));

		for (int i = 0; i < num_contexts; i++)
		{
			ND_ContextNode *node = ND_CreateContext(contexts_arena);
			QueuePush(contexts.first_free, contexts.last_free, node);
			QueuePush(contexts.first, contexts.last, node);
		}

	}

	ND_ContextNode*
	ND_DeserializeString(char* bytes, size_t length, nf_fhir_r4::Resource **out)
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

		#if DEBUG
		char buffer[4096];
		sprintf(buffer, "Main Arena Commit Pos: %llu\n", node->value.main_arena->commit_pos);
		OutputDebugString(buffer);

		sprintf(buffer, "Scratch Arena[0] Commit Pos: %llu\n", node->value.scratch_arenas[0]->commit_pos);
		OutputDebugString(buffer);

		sprintf(buffer, "Scratch Arena[1] Commit Pos: %llu\n", node->value.scratch_arenas[1]->commit_pos);
		OutputDebugString(buffer);

		sprintf(buffer, "Log Arena Commit Pos: %llu\n", node->value.log.arena->commit_pos);
		OutputDebugString(buffer);

		sprintf(buffer, "num_contexts: %d\n", contexts.num_contexts);
		OutputDebugString(buffer);

		size_t total_memory_usage = node->value.main_arena->commit_pos;
		total_memory_usage += node->value.log.arena->commit_pos;
		total_memory_usage += node->value.scratch_arenas[0]->commit_pos;
		total_memory_usage += node->value.scratch_arenas[1]->commit_pos;

		sprintf(buffer, "total memory usage for context: %llu\n", total_memory_usage);
		OutputDebugString(buffer);
		#endif


		simdjson::ondemand::parser parser;
		simdjson::ondemand::document simd_doc = parser.iterate(bytes, length - 64, length);
		node->value.options.file_name = Str8C("Unknown File Name");
		auto obj_res = simd_doc.get_object();
		if (obj_res.error())
		{
			*out = nullptr;
			return NULL;
		}
		simdjson::ondemand::object obj = obj_res.value_unsafe();

		
		nf_fhir_r4::Resource* result = Resource_Deserialize_SIMDJSON(&node->value,
		                                                          node->value.main_arena,
		                                                          &node->value.options,
		                                                          ResourceType::Unknown,
		                                                          obj);
		Bundle* bundle = (Bundle*)result;
		*out = result;
		return node;
	}

	ND_ContextNode*
	ND_DeserializeFile(const char* file_name, nf_fhir_r4::Resource **out)
	{
		ND_ContextNode *node = ND_GetFreeContext(contexts_arena);

		std::string_view file_string_view { file_name };

		auto simd_json = simdjson::padded_string::load(file_string_view);
		if (simd_json.error())
		{
			printf("SIMD_JSON ERROR: %d\n", simd_json.error());
			return NULL;
		}

		simdjson::ondemand::parser parser;
		simdjson::ondemand::document simd_doc = parser.iterate(simd_json);
		node->value.options.file_name = Str8C((char*)file_name);
		
		nf_fhir_r4::Resource* result = Resource_Deserialize_SIMDJSON(&node->value,
		                                                          node->value.main_arena,
		                                                          &node->value.options,
		                                                          ResourceType::Unknown,
		                                                          simd_doc.get_object());
		Bundle* bundle = (Bundle*)result;
		*out = result;
		return node;
	}

	void
	ND_FreeContext(ND_ContextNode *node)
	{
		#if DEBUG
		char buffer[4096];
		sprintf(buffer, "Freeing Node: %p\n", node);
		OutputDebugString(buffer);
		#endif
		if (node == NULL)
		{
			return;
		}

		for (U64 i = 0; i < ArrayCount(node->value.scratch_arenas); i += 1)
		{
			if (node->value.scratch_arenas[i])
			{
				ArenaPopTo(node->value.scratch_arenas[i], 0);
			}
		}


		if (node->value.main_arena)
		{
			ArenaPopTo(node->value.main_arena, 0);
		}

		if (node->value.log.arena)
		{
			ArenaPopTo(node->value.log.arena, 0);
		}
		ND_PushFreeContext(node);
	}

}
