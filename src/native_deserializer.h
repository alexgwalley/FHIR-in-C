#ifndef NF_NATIVE_DESERIALIZER_H
#define NF_NATIVE_DESERIALIZER_H

namespace native_fhir
{
	namespace FHIR_VERSION
	{

		#if _WIN32
		#include <windows.h>

		typedef const native_fhir::MemberNameAndOffset* (WINAPI *_ND_ClassMemberLookup)(ResourceType, String8);
		typedef const ResourceNameTypePair* (WINAPI *_ND_NF_ResourceNameTypePairFromString8)(String8);

		typedef void* (WINAPI *_ND_Deserialize_File)(char*, Resource**);
		typedef void* (WINAPI *_ND_Deserialize_String)(char*, size_t len, Resource**);
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


  extern "C"
  {
   void __cdecl ND_Init(int num_contexts);
   void __cdecl ND_Cleanup(void);
   ND_ContextNode* __cdecl ND_DeserializeFile(const char* file_name, Resource **out);
   ND_ContextNode* __cdecl ND_DeserializeString(char* bytes, size_t length, Resource **out);
   ND_ContextNode* ND_DeserializeStringOfType(char* bytes, size_t length, FHIR_VERSION::Resource **out, FHIR_VERSION::ResourceType type);
   void __cdecl ND_FreeContext(ND_ContextNode *node);
   const native_fhir::MemberNameAndOffset* NF_ClassMemberLookup(ResourceType resourceType, String8 member_name);
   const native_fhir::ResourceNameTypePair * __cdecl NF_ResourceNameTypePairFromString8(String8 str); 
  }

	};
};

#endif