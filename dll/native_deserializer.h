#ifndef NATIVE_DESERIALIZER

#if _WIN32
#include <windows.h>

typedef void* (WINAPI *_ND_Deserialize_File)(char*, fhir_r4::Resource**);
typedef void* (WINAPI *_ND_Deserialize_String)(char*, size_t len, fhir_r4::Resource**);
typedef void (WINAPI *_ND_Init)(int);
typedef void (WINAPI *_ND_End)();
typedef void (WINAPI *_ND_FreeContext)(void*);
#endif

typedef struct ND_State ND_State;
struct ND_State
{
	_ND_Deserialize_File deserialize_file;
	_ND_Deserialize_String deserialize_string;
	_ND_Init init;
	_ND_End end;
	_ND_FreeContext free_context;
};

struct ND_Context
{
				Arena *main_arena;
				Arena *scratch_arenas[2];
				Log log;
				fhir_deserialize::DeserializationOptions options;
};

struct ND_ContextNode {
				ND_ContextNode *next;
				ND_Context value;
};

#endif