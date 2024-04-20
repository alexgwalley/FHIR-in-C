#ifndef NF_NATIVE_DESERIALIZER_H
#define NF_NATIVE_DESERIALIZER_H

namespace native_fhir
{
	namespace FHIR_VERSION
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

  extern "C"
  {
   void __cdecl ND_Init(int num_contexts);
   void __cdecl ND_Cleanup(void);
   ND_ContextNode* __cdecl ND_DeserializeFile(const char* file_name, Resource **out);
   ND_ContextNode* __cdecl ND_DeserializeString(char* bytes, size_t length, Resource **out);
   void __cdecl ND_FreeContext(ND_ContextNode *node);
   const native_fhir::MemberNameAndOffset* NF_ClassMemberLookup(ResourceType resourceType, String8 member_name);
   const native_fhir::ResourceNameTypePair * __cdecl NF_ResourceNameTypePairFromString8(String8 str); 
  }

	};
};

#endif