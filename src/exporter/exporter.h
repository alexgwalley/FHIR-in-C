#ifndef NF_EXPORTER_H
#define NF_EXPORTER_H

#include <iostream>

namespace native_fhir
{

	struct OffsetContext
	{
		U16 offset;
		U8 max_data_size;
		U32 total_size;
	};

	struct PreAndPostFix
	{
		String8 pre;
		String8 post;
	};

	enum class IncludeType
	{
		Cpp,
		Using
	};

	struct IncludeFile
	{
		String8 name;
		bool wrap_in_angle_brackets;
		IncludeType type;
	};

	struct TypeNameSize
	{
		ValueType type;
		String8 name;
		size_t size;
	};

	enum class CodeGenerationType
	{
		Cpp,
		CSharp
	};

	struct CodeGenerationOptions
	{
		String8 namespace_name;
		ValueTypeMetaInformation *value_type_meta;

		size_t primative_typedefs_count;
		PreAndPostFix* primative_typedefs;

		size_t include_files_count;
		IncludeFile *include_files;

		PreAndPostFix type_pre_and_post;
		PreAndPostFix array_pre_and_post;
		PreAndPostFix reference_pre_and_post;
		PreAndPostFix class_pre_and_post;
		bool include_array_count;
		bool pre_declare_classes;
		bool use_classes;
		bool use_enum_class;
		bool include_resource_type;
		CodeGenerationType type;
	};

	String8 CallToExportString(Arena *arena, char *fmt, ...);
	String8 String8FromValueType(Arena *arena, ValueType type, String8 class_reference_name);
	String8 EnumNameFromMemberName(Arena *arena, String8 member_name);
	String8 EnumMemberNameFromMemberName(Arena *arena, String8 member_name);

	String8 GetClassNameFromUnionName(Arena* arena, String8 union_name);
	String8 GetUnionInternalTypeName(Arena *arena, CodeGenerationOptions *options, ValueTypeAndName tan, String8 member_name);

	U16 OffsetContext_Increase(OffsetContext *context, U8 size);
	void OffsetContext_Finish(OffsetContext *context);

	CodeGenerationOptions* CppOptions(Arena *arena);
	CodeGenerationOptions* CSOptions(Arena *arena);

};
	#endif
