#ifndef NF_METADATA_H
#define NF_METADATA_H

namespace native_fhir
{
	// TODO(agw) rename this file for "base"

	#define METADATA_MEMBER_COUNT 150
	#define POSSIBLE_TYPES_COUNT 100

	// TODO(agw): this can be determined at compiletime
	#define SIZE_T_BITS 64
	//#define BIT_FIELD_COUNT (METADATA_MEMBER_COUNT + (SIZE_T_BITS - 1) / SIZE_T_BITS)
	#define METADATA_MAGIC 0xEAC0

 #define VERSION_SIZE 64


#define IS_SINGLE_CARDINALITY(v) (v) == Cardinality::ZeroToOne || (v) == Cardinality::OneToOne
#define IS_MULTIPLE_CARDINALITY(v) (v) == Cardinality::ZeroToInf || (v) == Cardinality::OneToInf

#define DEREF_VALUE(res, off, type) *(type*)((U8*)(res) + (off))
#define DEREF_STRUCT(res, off, type) *(type**)((U8*)(res) + (off))
#define DEREF_STRUCT_ARRAY(res, off, type) *(type***)((U8*)(res) + (off))
#define DEREF_VALUE_ARRAY(res, off, type) *(type**)((U8*)(res) + (off))
#define DEREF_COUNT(res, off) *(size_t*)((U8*)(res) + (off))

#define VALUE_TYPE_STRING_CASES ValueType::String:\
case ValueType::Uri:\
case ValueType::Base64Binary:\
case ValueType::Canonical:\
case ValueType::Id:\
case ValueType::Markdown:\
case ValueType::Oid:\
case ValueType::Xhtml:\
case ValueType::Uuid:\
case ValueType::Url:\
case ValueType::Code\

#define VALUE_TYPE_TIME_CASES ValueType::Date:\
case ValueType::DateTime:\
case ValueType::Time:\
case ValueType::Instant\

	enum class Cardinality : U8
	{
		Unknown,
		ZeroToZero,
		ZeroToOne,
		ZeroToInf,
		OneToOne,
		OneToInf,
	};

	String8 cardinality_str[] = {
		Str8Lit("Unknown"),
		Str8Lit("ZeroToZero"),
		Str8Lit("ZeroToOne"),
		Str8Lit("ZeroToInf"),
		Str8Lit("OneToOne"),
		Str8Lit("OneToInf")
	};

	enum class ClassMemberType : U8
	{
		Unknown,
		Single,
		Enum,
		Union
	};

	enum class ValueType : U8 {
		Unknown,
		Base64Binary,
		Canonical,
		Code,
		Id,
		Markdown,
		Oid,
		String,
		Xhtml,
		Uri,
		Url,
		Uuid,
		Boolean,
		Integer,
		Integer64,
		PositiveInt,
		UnsignedInt,
		Decimal,
		Date,
		DateTime,
		Time,
		Instant,
		ClassReference,
		ResourceType,
		ArrayCount,
  /*
  NOTE(agw): kind of ugly but this is used to signify that the value is a choice,
  i.e. value[x] which could be one of many, ex. integer, code, etc.
  should only really be used when trying to get an unknown typed entry
  */
  Choice, 
		Count
	};

	struct ValueTypeAndName
	{
		ValueType type;
		String8 name;
	};


	struct ClassMemberMetadata
	{
		String8 name;
		Cardinality cardinality;
		ClassMemberType type;
		U8 types_count;
		U16 offset;
		ValueTypeAndName types[POSSIBLE_TYPES_COUNT];
	};

	struct ClassMetadata
	{
		String8 name;
		U16 size;
		U8 members_count;
		BitField required_members;
		ClassMemberMetadata members[METADATA_MEMBER_COUNT];
	};

	typedef U16 M_StringHandle;

	struct SerializedValueTypeAndName
	{
		M_StringHandle name;
		ValueType type;
		U8 padding;
	};

	/* NOTE(agw):
	 * This struct contains the necessary metadata for each class member.
		*/
	typedef struct SerializedClassMemberMetadata k;
	struct SerializedClassMemberMetadata
	{
		U16 magic;
		U16 size;
		M_StringHandle name;
		U16 offset;
		Cardinality cardinality;
		ClassMemberType type;
		U8 types_count;

		// NOTE(agw): variable based on types_count,
		// type sizes are static so you can index like a normal
		// array
//		SerializedValueTypeAndName types[1];
	};

	typedef struct SerializedClassMetadata SerializedClassMetadata;
	struct SerializedClassMetadata
	{
		U16 magic;
		U16 offset_to_next; // TODO(agw): does this need to be aligned?
		M_StringHandle name;
		U16 size;

		U8 members_count; // NOTE(agw): max member count was 100 when writing this
		SerializedClassMemberMetadata **members;

		BitField required_members;

		// NOTE(agw): this is really a variable list
//		SerializedClassMemberMetadata members[1];
	};

	typedef struct SerializedCMNode SerializedCMNode;
	struct SerializedCMNode
	{
		SerializedCMNode* next;
		SerializedClassMetadata *v;
	};

	typedef struct SerializedCMList SerializedCMList;
	struct SerializedCMList
	{
		SerializedCMNode *first;
		SerializedCMNode *last;
		size_t count;
		size_t total_size;
	};

	// Sections
	enum class M_SectionType : U32
	{
		Unknown,
		ClassMetadata,
		StringTable,
	};

	struct M_Section
	{
		M_SectionType type;
		size_t size;
	};

	struct ClassMetadataSection
	{
		M_Section header;
		U32 class_count;

		// NOTE(agw): metadata start, size variable
//		SerializedClassMetadata meta[1];
	};

	struct StringTableSection
	{
		M_Section header;
		U16 string_count;
		U16 string_size;

		// NOTE(agw): strings start, size variable
//		char strings[1];
	};

	typedef struct MetadataHeader MetadataHeader;
	struct MetadataHeader
	{
		U16 magic;
		char version[VERSION_SIZE];
	};

	/* 
	 * File Layout:
		* Many strings in fhir are duplicates (especially when you flatten the structs
		* to _not_ use c++ inheritence). This metadata file contains a string table at the 
	 * beginning of the file.
	 * 
	 * The first attempt of having statically sized arrays resulted in ~250MB of memory being
	 * used...you only need ~ 30KB (something on this order of magnitude)
		*
	*/

	typedef struct MetadataFile MetadataFile;
	struct MetadataFile
	{
		MetadataHeader header;
		StringTableSection *string_table;
		ClassMetadataSection *class_meta;

		int classes_count;
		SerializedClassMetadata** classes;

		// NOTE(agw): here will go the beginning of the sections
	};

 MetadataFile *g_meta_file;
};

#endif