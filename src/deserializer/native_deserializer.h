#ifndef NF_NATIVE_DESERIALIZER_H
#define NF_NATIVE_DESERIALIZER_H

#define NF_NUM_RESOURCES 710

namespace native_fhir
{
  typedef struct ValueTypeSizePair ValueTypeSizePair;
  struct ValueTypeSizePair
  {
   ValueType type;
   U64 size;
  };

  struct DeserializationOptions
  {
   String8 file_name;
   MetadataFile *meta_file;
   bool profile;
  };
    
  typedef struct SerializationSettings
  {
   bool pretty_print : 1;
  } SerializationSettings;

  typedef struct ResourceNameTypePair ResourceNameTypePair;
  struct ResourceNameTypePair { char* name; int type; };
    
  struct MemberNameAndOffset {
   char *name; // 8
   uint16_t offset; // 2
   uint8_t member_index; // 1
   uint8_t type_index; // 1

   /*ResourceType*/
   uint16_t member_first_type_class_type; // 2
   /*ResourceType*/
   uint16_t union_resource_type; // 2

   /*ValueType*/
   uint8_t union_type_type; // 1
   Cardinality cardinality;
   uint8_t reserved[2];
  };

		struct ND_Context
		{
			Arena *main_arena;
			Arena *scratch_arenas[2];
			Log log;
			DeserializationOptions options;
   simdjson::ondemand::parser* parser;
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
   ND_ContextNode* __cdecl ND_DeserializeFile(const char* file_name, FHIR_VERSION::Resource **out);
   ND_ContextNode* __cdecl ND_DeserializeString(char* bytes, size_t length, FHIR_VERSION::Resource **out);
   ND_ContextNode* ND_DeserializeStringOfType(char* bytes, size_t length, FHIR_VERSION::Resource * *out, FHIR_VERSION::ResourceType type);
   void __cdecl ND_FreeContext(ND_ContextNode *node);
   const native_fhir::MemberNameAndOffset* NF_ClassMemberLookup(FHIR_VERSION::ResourceType resourceType, String8 member_name);
   const native_fhir::ResourceNameTypePair * __cdecl NF_ResourceNameTypePairFromString8(String8 str); 
  }

};

#endif