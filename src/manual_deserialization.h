#ifndef MANUAL_DESERIALIZATION_H
#define MANUAL_DESERIALIZATION_H


// TODO(agw): make this more dynamic, or strict (not up to compiler)
#define ENUM_SIZE 4

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

};
#endif
