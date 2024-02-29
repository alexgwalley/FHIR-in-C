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

String8
CS_String8FromValueType(Arena *arena, CodeGenerationOptions *options, ValueTypeAndName tan)
{
	if (tan.type == ValueType::ClassReference)
	{
		return tan.name;
	}

	return options->value_type_meta[(int)tan.type].cs_name;
}

String8
CPP_String8FromValueType(Arena *arena, CodeGenerationOptions *options, ValueTypeAndName tan)
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
MemberNameFromEnumMemberName(Arena *arena, String8 enum_member_name)
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
	String8 result = PushStr8F(arena, "%SType", MemberNameFromEnumMemberName(scratch.arena, member_name));
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

void
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


void
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

		String8 value_type = CS_String8FromValueType(scratch.arena, options, mem->types[i]);
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

void
AppendCPPEnum(std::ostream &ss, CodeGenerationOptions *options, ClassMember *mem, ClassMemberMetadata *meta)
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

void
AppendCPPUnion(std::ostream& ss, CodeGenerationOptions *options, ClassMember *mem)
{
	Temp scratch = ScratchBegin(0, 0);

	ss << "\tunion {" << std::endl;
	for (int i = 0; i < mem->types_count; i++)
	{
		ss << "\t\t";
		String8 value_type = CPP_String8FromValueType(scratch.arena, options,  mem->types[i]);

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

void
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
				value_type = CS_String8FromValueType(0, options, mem->types[0]);
			}
			else
			{
				value_type = CPP_String8FromValueType(0, options, mem->types[0]);
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
				AppendCPPEnum(ss, options, mem, meta);
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