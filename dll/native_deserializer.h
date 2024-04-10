#ifndef NF_NATIVE_DESERIALIZER_H
#define NF_NATIVE_DESERIALIZER_H

namespace native_fhir
{
	namespace nf_fhir_r4
	{

		struct ND_Context
		{
			Arena *main_arena;
			Arena *scratch_arenas[2];
			Log log;
			DeserializationOptions options;
		};

		struct ND_ContextNode {
			ND_ContextNode *next;
			ND_Context value;
		};

  struct ND_ContextList
  {
   ND_ContextNode *first;
   ND_ContextNode *last;
   size_t count;
  };

		#if _WIN32
		#include <windows.h>

		typedef const native_fhir::MemberNameAndOffset* (WINAPI *_ND_ClassMemberLookup)(ResourceType, String8);
		typedef const ResourceNameTypePair* (WINAPI *_ND_NF_ResourceNameTypePairFromString8)(String8);

		typedef ND_ContextNode* (WINAPI *_ND_Deserialize_File)(char* fn, nf_fhir_r4::Resource** resource);
		typedef void* (WINAPI *_ND_Deserialize_String)(char* str, size_t len, nf_fhir_r4::Resource**);
		typedef void (WINAPI *_ND_Init)(int);
		typedef void (WINAPI *_ND_End)();
		typedef void (WINAPI *_ND_FreeContext)(void*);

		#endif

		typedef struct ND_State ND_State;
		struct ND_State
		{
			_ND_NF_ResourceNameTypePairFromString8 NF_ResourceNameTypePairFromString8;
		 _ND_ClassMemberLookup ClassMemberLookup;

			_ND_Deserialize_File DeserializeFile;
			_ND_Deserialize_String DeserializeString;
			_ND_Init Init;
			_ND_End Cleanup;
			_ND_FreeContext FreeContext;
		};


	};
};

#endif