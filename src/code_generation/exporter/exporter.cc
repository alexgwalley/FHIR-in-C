
namespace native_fhir
{
	////////////////////////////
	// General Helpers 
	std::ostream& operator<<(std::ostream& ss, String8 str)
	{

		std::string ret;
		ret.assign((char*)str.str,
		           str.size);
		ss << ret;
		return ss;
	}

	String8
	String8FromValueType(CodeGenerationOptions *options, ValueTypeAndName tan)
	{
		if (tan.type == ValueType::ClassReference)
		{
			return tan.name;
		}

		return options->value_type_meta[(int)tan.type].string;
	}

	local_function String8
	CS_String8FromValueType(CodeGenerationOptions *options, ValueTypeAndName tan)
	{
		if (tan.type == ValueType::ClassReference)
		{
			return tan.name;
		}

		return options->value_type_meta[(int)tan.type].cs_name;
	}

	local_function String8
	CPP_String8FromValueType(CodeGenerationOptions *options, ValueTypeAndName tan)
	{
		if (tan.type == ValueType::ClassReference)
		{
			return tan.name;
		}

		return options->value_type_meta[(int)tan.type].cpp_name;
	}

	////////////////////////////
	// Enum Helpers 

	String8
	EnumMemberNameFromMemberName(Arena *arena, String8 member_name)
	{
		return PushStr8F(arena, "%S_type", member_name);
	}

	String8
	MemberNameFromEnumMemberName(String8 enum_member_name)
	{
		return Prefix8(enum_member_name, enum_member_name.size - 5);
	}

	String8
	EnumNameFromMemberName(Arena *arena, String8 member_name)
	{
		// TODO(agw): add scratch
		Temp scratch = ScratchBegin(&arena, 1);
    
		// member_name will likely have [x] suffix
		// ex. incoming camelCase[x] => CamelCase
		String8 result = PushStr8F(arena, "%SType", MemberNameFromEnumMemberName(member_name));
		result.str[0] = CharToUpper(result.str[0]);
    
		ScratchEnd(scratch);
		return result;
	}

	String8
	GetEnumInternalName(Arena *arena, CodeGenerationOptions *options, ValueTypeAndName tan)
	{
		Temp scratch = ScratchBegin(&arena, 1);
		String8 str = PushStr8Copy(scratch.arena, options->value_type_meta[(int)tan.type].string);
		if (tan.type == ValueType::ClassReference)
		{
			str = PushStr8Copy(scratch.arena, tan.name);
		}
		str.str[0] = CharToUpper(str.str[0]);
		ScratchEnd(scratch);
		return str;
	}

	////////////////////////////
	// Union Helpers 

	String8
	GetUnionInternalTypeName(Arena *arena, CodeGenerationOptions *options, ValueTypeAndName tan, String8 member_name)
	{
		Temp scratch = ScratchBegin(&arena, 1);
		String8 str = PushStr8Copy(scratch.arena, options->value_type_meta[(int)tan.type].string);
		if (tan.type == ValueType::ClassReference)
		{
			str = PushStr8Copy(scratch.arena, tan.name);
		}

		str.str[0] = CharToUpper(str.str[0]);
		String8 result = PushStr8F(arena,
		                           "%S%S",
		                           member_name,
		                           str);
		ScratchEnd(scratch);
		return result;
	}

	String8
	GetClassNameFromUnionName(Arena* arena, String8 union_name, String8 member_name)
	{
		String8 str = PushStr8Copy(arena, union_name);
		String8 result = Str8Skip(str, member_name.size - 1);
		result.str[0] = CharToUpper(result.str[0]);
		return result;
	}

	////////////////////////////
	// C Sharp Exporting

	local_function void
	AppendCSEnum(std::ostream &ss, CodeGenerationOptions *options, ClassMember *mem, ClassMemberMetadata *meta)
	{
		Temp scratch = ScratchBegin(0, 0);
		String8 enum_name = EnumNameFromMemberName(scratch.arena, Str8Skip(mem->clean_name, 1));

		ss << "\tpublic enum " << enum_name << " {" << std::endl;

		for (int i = 0; i < mem->types_count; i++)
		{
			String8 value_type = GetEnumInternalName(scratch.arena, options, mem->types[i]);
			ss << "\t\t" << value_type;
        
			if (i != mem->types_count - 1) {
				ss << ",";
			}
        
			ss << std::endl;
		}
    
		ss << "\t};" << std::endl;

		ss << "[FieldOffset(" << meta->offset << ")] ";
		ss << "public " << enum_name << " " << mem->clean_name << ";" << std::endl;
		ScratchEnd(scratch);
	}


	local_function void
	AppendCSUnion(std::ostream& ss, CodeGenerationOptions *options, ClassMember *mem, ClassMemberMetadata *meta)
	{
		Temp scratch = ScratchBegin(0, 0);

		ss << "\t[System.Runtime.InteropServices.StructLayout(LayoutKind.Explicit)]" << std::endl;

		String8 mem_name_copy = PushStr8Copy(scratch.arena, Str8Skip(mem->clean_name, 1));
		mem_name_copy.str[0] = CharToUpper(mem_name_copy.str[0]);
		String8 union_name = PushStr8F(scratch.arena, "%SUnion", mem_name_copy);

		ss << "\tpublic unsafe struct " << union_name << " {" << std::endl;

		for (int i = 0; i < mem->types_count; i++)
		{
			ss << "\t\t[System.Runtime.InteropServices.FieldOffset(0)]" << std::endl;

			String8 hl7_fhir_type = options->value_type_meta[(int)mem->types[i].type].hl7_fhir_name;
			if (hl7_fhir_type.size > 0)
			{
				ss << "\t\t[NativeFhirType(typeof(" << hl7_fhir_type << "))]" << std::endl;
			}

			String8 value_type = CS_String8FromValueType(options, mem->types[i]);
			ss << "\t\tpublic " << value_type;
	
			if (mem->types[i].type == ValueType::ClassReference)
			{
				ss << "*";
			}

			String8 internal_name = GetUnionInternalTypeName(scratch.arena, options, mem->types[i], mem->clean_name);
			ss << " " << internal_name << ";" << std::endl;
		}

		ss << "\t};" << std::endl;


		ss << "\t[FhirNameAttribute(\"" << mem->fhir_name << "\")]" << std::endl;
		ss << "\t" << "[FieldOffset(" << meta->offset << ")] ";
		ss << "public " << union_name << " " << mem->clean_name << ";" << std::endl;

		ScratchEnd(scratch);
	}


	////////////////////////////
	// CPP Exporting 

	local_function void
	AppendCPPEnum(std::ostream &ss, CodeGenerationOptions *options, ClassMember *mem)
	{
		Temp scratch = ScratchBegin(0, 0);
		String8 enum_name = EnumNameFromMemberName(scratch.arena, mem->clean_name);

		if (options->use_enum_class)
		{
			ss << "\tenum class " << enum_name << " {" << std::endl;
		}
		else
		{
			ss << "\tenum " << enum_name << " {" << std::endl;
		}

		for (int i = 0; i < mem->types_count; i++)
		{
			String8 value_type = GetEnumInternalName(scratch.arena, options, mem->types[i]);
			ss << "\t\t" << value_type;
        
			if (i != mem->types_count - 1) {
				ss << ",";
			}
        
			ss << std::endl;
		}
    
		ss << "\t};" << std::endl;

		ss << enum_name << " " << mem->clean_name << ";" << std::endl;
		ScratchEnd(scratch);
	}

	local_function void
	AppendCPPUnion(std::ostream& ss, CodeGenerationOptions *options, ClassMember *mem)
	{
		Temp scratch = ScratchBegin(0, 0);

		ss << "\tunion {" << std::endl;
		for (int i = 0; i < mem->types_count; i++)
		{
			ss << "\t\t";
			String8 value_type = CPP_String8FromValueType(options,  mem->types[i]);

			ss << value_type;
			if (mem->types[i].type == ValueType::ClassReference)
			{
				ss << "*";
			}
        
			String8 internal_name = GetUnionInternalTypeName(scratch.arena, options, mem->types[i], mem->clean_name);
        
			ss << " " << internal_name << ";" << std::endl;
		}
		ss << "\t} " << mem->clean_name << ";" << std::endl;
    
		ScratchEnd(scratch);
	}

	////////////////////////////
	// General 

	local_function void
	AppendClassMember(std::ostream& ss, CodeGenerationOptions *options, ClassMember *mem, ClassMemberMetadata *meta)
	{
		switch (mem->type)
		{
			case ClassMemberType::Single:
			{
				if (!options->include_array_count &&
					mem->types[0].type == ValueType::ArrayCount)
				{
					break;
				}

				if (options->type == CodeGenerationType::CSharp)
				{
					if (mem->type == ClassMemberType::Single && mem->types[0].type != ValueType::ArrayCount)
					{
						ss << "[FhirNameAttribute(\"" << mem->fhir_name << "\")]" << std::endl;
					}
					ss << "[FieldOffset(" << meta->offset << ")]";
				}

				bool is_multiple = (mem->cardinality == Cardinality::ZeroToInf ||
					mem->cardinality == Cardinality::OneToInf
				);
				bool is_class_ref = mem->types[0].type == ValueType::ClassReference;

				String8 value_type;
				if (options->type == CodeGenerationType::CSharp)
				{
					value_type = CS_String8FromValueType(options, mem->types[0]);
				}
				else
				{
					value_type = CPP_String8FromValueType(options, mem->types[0]);
				}

				ss << "\t";

				if (options->type_pre_and_post.pre.size > 0)
				{
					ss << options->type_pre_and_post.pre << " ";
				}

				if (is_multiple)
				{
					PreAndPostFix fixes = options->array_pre_and_post;
					ss << fixes.pre;
				}

				if (is_class_ref)
				{
					PreAndPostFix fixes = options->reference_pre_and_post;
					ss << fixes.pre;
				}

				ss << value_type;

				if (is_multiple)
				{
					PreAndPostFix fixes = options->array_pre_and_post;
					ss << fixes.post;
				}

				if (is_class_ref)
				{
					PreAndPostFix fixes = options->reference_pre_and_post;
					ss << fixes.post;
				}


				if (options->type_pre_and_post.post.size > 0)
				{
					ss << options->type_pre_and_post.post << " ";
				}

				ss << " " << mem->clean_name << ";";
			} break;
			case ClassMemberType::Enum:
			{
				if (options->type == CodeGenerationType::Cpp)
				{
					AppendCPPEnum(ss, options, mem);
				}
				else if (options->type == CodeGenerationType::CSharp)
				{
					AppendCSEnum(ss, options, mem, meta);
				}
			} break;
			case ClassMemberType::Union:
			{
				if (options->type == CodeGenerationType::Cpp)
				{
					AppendCPPUnion(ss, options, mem);
				}
				else if (options->type == CodeGenerationType::CSharp)
				{
					AppendCSUnion(ss, options, mem, meta);
				}
			} break;
		}
	}

	void
	OutputClassDefinition(std::ostream& ss, CodeGenerationOptions *options, ClassDefinition *def)
	{
		Assert(def->name.size);
	
		if (options->type == CodeGenerationType::CSharp)
		{
			ss << "[StructLayout(LayoutKind.Explicit)]" << std::endl;
		}

		if (options->class_pre_and_post.pre.size > 0)
		{
			ss << options->class_pre_and_post.pre << " ";
		}

		ss << (options->use_classes ? "class" : "struct");
		ss << " " << def->name;

		#if 0
		if (def->inherits.node_count > 0)
		{
			String8 inherit = def->inherits.first->string;
			ss << " : " << inherit;
		}
		#endif

		Temp scratch = ScratchBegin(0, 0);
		ClassMetadata *meta = ClassMetadataFromClassDefinition(scratch.arena, options, def);

		ss << " {" << std::endl;

		int i = 0;
		for (ClassMemberNode *node = def->members.first;
			node;
			node = node->next, i++)
		{
			AppendClassMember(ss, options, &node->mem, &meta->members[i]);
			ss << std::endl;
		}
    
		ss << "};" << std::endl;

		ScratchEnd(scratch);
	}


	////////////////////////////
	// Export Options 
	CodeGenerationOptions*
	CppOptions(Arena *arena)
	{
		CodeGenerationOptions *options = PushStruct(arena, CodeGenerationOptions);
		options->namespace_name = Str8Lit("fhir_r4");
		options->pre_declare_classes = true;
		options->use_enum_class = true;
		options->include_resource_type = false;
		options->include_array_count = true;
		options->array_pre_and_post = {
			Str8Lit(""),
			Str8Lit("*")
		};
		options->reference_pre_and_post = {
			Str8Lit(""),
			Str8Lit("*")
		};

		IncludeFile include_files[] = {
			//{ Str8Lit("string"), true },
			//{ Str8Lit("vector"), true },
			//{ Str8Lit("memory"), true },
			{ Str8Lit("iso8601_time/iso8601_time.h"), false, IncludeType::Cpp },
		};

		options->include_files_count = ArrayCount(include_files);
		options->include_files = PushArray(arena, IncludeFile, ArrayCount(include_files));
		for (int i = 0; i < ArrayCount(include_files); i++)
		{
			options->include_files[i].name = include_files[i].name;
			options->include_files[i].wrap_in_angle_brackets = include_files[i].wrap_in_angle_brackets;
		}

		options->value_type_meta = value_type_meta;

		#define STRING_TYPE NullableString8
		String8 string_type_name = Str8Lit("NullableString8");
		TypeNameSize typedef_pairs[] = {
			{ ValueType::Unknown, Str8Lit(""), 0 },
			{ ValueType::Base64Binary, string_type_name, sizeof(STRING_TYPE) },
			{ ValueType::Canonical, string_type_name, sizeof(STRING_TYPE) },
			{ ValueType::Code, string_type_name, sizeof(STRING_TYPE) },
			{ ValueType::Id, string_type_name, sizeof(STRING_TYPE) },
			{ ValueType::Markdown, string_type_name, sizeof(STRING_TYPE) },
			{ ValueType::Oid, string_type_name, sizeof(STRING_TYPE) },
			{ ValueType::String, string_type_name, sizeof(STRING_TYPE) },
			{ ValueType::Xhtml, string_type_name, sizeof(STRING_TYPE) },
			{ ValueType::Uri, string_type_name, sizeof(STRING_TYPE) },
			{ ValueType::Url, string_type_name, sizeof(STRING_TYPE) },
			{ ValueType::Uuid, string_type_name, sizeof(STRING_TYPE) },
			{ ValueType::Boolean, Str8Lit("B32"), sizeof(B32) },
			{ ValueType::Integer, Str8Lit("unsigned long int"), sizeof(unsigned int long) },
			{ ValueType::PositiveInt, Str8Lit("unsigned long int"), sizeof(unsigned int long) },
			{ ValueType::UnsignedInt, Str8Lit("unsigned long int"), sizeof(unsigned int long) },
			{ ValueType::Decimal, Str8Lit("double"), sizeof(double) },
			{ ValueType::Date, Str8Lit("ISO8601_Time"), sizeof(ISO8601_Time) },
			{ ValueType::DateTime, Str8Lit("ISO8601_Time"), sizeof(ISO8601_Time) },
			{ ValueType::Time, Str8Lit("ISO8601_Time"), sizeof(ISO8601_Time) },
			{ ValueType::Instant, Str8Lit("ISO8601_Time"), sizeof(ISO8601_Time) },
			{ ValueType::ClassReference, Str8Lit(""), sizeof(void*) },
			{ ValueType::ResourceType, Str8Lit("ResourceType"), ENUM_SIZE },
			{ ValueType::ArrayCount, Str8Lit("size_t"), sizeof(size_t) }
		};

		return options;
	}

	CodeGenerationOptions*
	CSOptions(Arena *arena)
	{
		CodeGenerationOptions *cs_options = PushStruct(arena, CodeGenerationOptions);
		cs_options->namespace_name = Str8Lit("FHIR_Marshalling");
		cs_options->include_array_count = true;
		cs_options->class_pre_and_post.pre = Str8Lit("public unsafe");
		cs_options->type = CodeGenerationType::CSharp;
		cs_options->use_classes = true;
		cs_options->include_resource_type = true;
		cs_options->array_pre_and_post = {
			Str8Lit(""),
			Str8Lit("*")
		};
		cs_options->reference_pre_and_post = {
			Str8Lit(""),
			Str8Lit("*")
		};


		/////////////////////
		// Primative Typedefs
		String8 integer_name = Str8Lit("FhirInteger");
		String8 positive_integer_name = Str8Lit("FhirPositiveInteger");
		String8 unsigned_integer_name = Str8Lit("FhirUnsignedInteger");
		PreAndPostFix cs_primative_typedefs[] = {
			{ Str8Lit("Int32"), integer_name },
			{ Str8Lit("Int32"), positive_integer_name },
			{ Str8Lit("Int32"), unsigned_integer_name },
		};

		cs_options->primative_typedefs_count = ArrayCount(cs_primative_typedefs);
		cs_options->primative_typedefs = PushArray(arena, PreAndPostFix, ArrayCount(cs_primative_typedefs));
		for (int i = 0; i < ArrayCount(cs_primative_typedefs); i++)
		{
			cs_options->primative_typedefs[i].pre = cs_primative_typedefs[i].pre;
			cs_options->primative_typedefs[i].post = cs_primative_typedefs[i].post;
		}

		cs_options->value_type_meta = value_type_meta;

		IncludeFile cs_include_files[] = {
			{ Str8Lit("System"), false, IncludeType::Using },
			{ Str8Lit("System.Runtime.InteropServices"), false, IncludeType::Using },
			{ Str8Lit("Hl7.Fhir.Model"), false, IncludeType::Using },
		};

		cs_options->include_files_count = ArrayCount(cs_include_files);
		cs_options->include_files = PushArray(arena, IncludeFile, ArrayCount(cs_include_files));
		for (int i = 0; i < ArrayCount(cs_include_files); i++)
		{
			cs_options->include_files[i].name = cs_include_files[i].name;
			cs_options->include_files[i].wrap_in_angle_brackets = cs_include_files[i].wrap_in_angle_brackets;
			cs_options->include_files[i].type = cs_include_files[i].type;
		}

		cs_options->type_pre_and_post.pre = Str8Lit("public readonly");
		return cs_options;
	}


};