#include <stdio.h>
#include <string>
#include <sstream>
#include <fstream>

#include "core.h"
#include "arena.h"
#include "string8.h"
#include "os.h"
#include "threading.h"

#include "iso8601_time.h"
#include "fhir_structure.h"
#include "resource.h"
#include "fhir_class.h"
#include "exporter.h"
#include "metadata.h"
#include "cJSON.h"

#include "core.c"
#include "arena.c"
#include "string8.cc"
#include "threading.c"
#include "os.cc"

#include "bitfield.cc"
#include "hash_table.cc"
#include "fhir_structure.cc"
#include "resource.cc"
#include "fhir_class.cc"
#include "metadata.cc"

#include "cJSON.c"
#include "exporter.cc"

#define STL

void*
ReadEntireFile(Arena *arena, String8 file_name)
{
	FILE *f = fopen((const char*)file_name.str, "r");
	fseek(f,  0, SEEK_END);
	long length = ftell(f);
	void *result = ArenaPush(arena, length);
	fseek(f, 0, SEEK_SET);
    
	fread(result, length, 1, f);
	fclose(f);
	return result;
}

void
GetStructureDefinitionsForFile(Arena *arena, StructureDefinitionList* list, String8 file_path)
{
	Temp scratch = ScratchBegin(&arena, 1);
	void *json_string = ReadEntireFile(scratch.arena, file_path);
	cJSON *json = cJSON_Parse((char*)json_string);
    
	cJSON *entry = cJSON_GetObjectItem(json, "entry");
	if (!entry)
	{
		printf("Could not find entry\n");
	}
    
	int entry_len = cJSON_GetArraySize(entry);
	for (int i = 0; i < entry_len; i++)
	{
		cJSON *item = cJSON_GetArrayItem(entry, i);
		cJSON *resource = cJSON_GetObjectItem(item, "resource");
		cJSON *resourceType = cJSON_GetObjectItem(resource, "resourceType");
		String8 type = Str8C(cJSON_GetStringValue(resourceType));
		if (!Str8Match(type, Str8Lit("StructureDefinition"), 0)) continue;
        

		StructureDefinition *def = StructureDefinitionFromJson(arena, resource);
		// TODO(agw): not sure what to do about repeat structure
		if (def)
		{
			SDListPush(arena, list, def);
		}
	}
    
	cJSON_free(json);
	ScratchEnd(scratch);
}


////////////////////////////
// Class Definitions 

ClassDefinition*
GetClassDefinitionFromList(ClassDefinitionList *list, String8 name)
{
	ClassDefinitionNode *node = list->first;
	for (int i = 0; i < list->count; i++)
	{
		if (Str8Match(node->def.name, name, 0))
		{
			return &node->def;
		}
		node = node->next;
	}
    
	return nullptr;
}

ClassDefinitionList
GetAllClassDefinitions(Arena *arena, ResourceList *res_list)
{
	Temp scratch = ScratchBegin(&arena, 1);
	ClassDefinitionList result = { 0 };
	ResourceNode *ptr = res_list->first;

	// TODO(agw): 4096 should be based on some actual number
	HashTable completed = HashTable_Create(scratch.arena, 4096);
	for (int i = 0; i < res_list->count; i++)
	{
		ClassDefinitionList def_list = GetClassDefinitionsFromResource(arena, &ptr->resource);
		for(ClassDefinitionNode *node = def_list.first; node; node = node->next)
		{
			if (HashTable_Has(&completed, node->def.name))
				continue;
			
			CDListPush(arena, &result, node->def);
			HashTable_Add(&completed, node->def.name, Str8Lit(""));
		}
		ptr = ptr->next;
	}
    
	ScratchEnd(scratch);
	return result;
}

void
OutputClassDefinitions(Arena *arena, 
                       CodeGenerationOptions *options,
                       String8 file_name,
                       ClassDefinitionList *list)
{
	std::ofstream fs((char*)file_name.str);

	if(options->namespace_name.size == 0)
	{
		options->namespace_name = Str8Lit("fhir_r4");
	}

	for (int i = 0; i < options->include_files_count; i++)
	{
		switch (options->type)
		{
			default: Assert(false);
			case CodeGenerationType::Cpp:
			{
				if (options->include_files[i].wrap_in_angle_brackets)
				{
					fs << "#include <" << options->include_files[i].name << ">" << std::endl;
				}
				else
				{
					fs << "#include \"" << options->include_files[i].name << "\"" << std::endl;
				}
			} break;
			case CodeGenerationType::CSharp:
			{
				fs << "using " << options->include_files[i].name << ";" << std::endl;
			} break;
		}
	}
    
	fs << "namespace " << options->namespace_name << " {" << std::endl;

	// TODO(agw): add using's for primative types
	switch (options->type)
	{
		case CodeGenerationType::Cpp:
			for (int i = 0; i < options->primative_typedefs_count; i++)
			{
				fs << "typedef " << options->primative_typedefs[i].pre << " " << options->primative_typedefs[i].post << ";" << std::endl;
			}
			break;
		case CodeGenerationType::CSharp:
			for (int i = 0; i < options->primative_typedefs_count; i++)
			{
				fs << "using " << options->primative_typedefs[i].post << " = " << options->primative_typedefs[i].pre << ";" << std::endl;
			}
			break;
	}

	if(options->pre_declare_classes)
	{
		for (ClassDefinitionNode *node = list->first; node; node = node->next)
		{
			// TODO(agw): should take whether class or struct
			fs << "class " << node->def.name << ";" << std::endl;
		}
	}


	if(options->use_enum_class)
	{
		fs << "enum class ResourceType {" << std::endl;
	}
	else
	{
        if (options->type == CodeGenerationType::CSharp) {
            fs << "public enum ResourceType {" << std::endl;
        }
        else {
            fs << "enum ResourceType {" << std::endl;
        }
	}

	// TODO(agw): this should be implicit somehow??
	fs << "\tUnknown," << std::endl;

	{
		for (ClassDefinitionNode *node = list->first; node; node = node->next)
		{
				fs << "\t" << node->def.name;
				if (node->next != nullptr)
				{
					fs << ",";
				}
				fs << std::endl;
		}
	}

	fs << "};" << std::endl;
    
	{
		for (ClassDefinitionNode *node = list->first; node; node = node->next)
		{
			OutputClassDefinition(fs, options, &node->def);
		}
	}
    
    
	fs << "}" << std::endl;
	
	fs.close();
}

////////////////////////////
// GPerf 

String8
GperfClassName(Arena *arena, ClassDefinition *def)
{
	return PushStr8F(arena, "%S_Gperf", def->name);
}

String8
GperfFunctionLookup(Arena *arena, ClassDefinition *def)
{
	return PushStr8F(arena, "%S_MemberLookup", def->name);
}

// TODO(agw): pull this out into a struct
String8
GPerfRow(Arena *arena, String8 name, size_t offset, size_t member_index, size_t type_index,
         String8 member_name, String8 member_first_type_name, ValueType union_type_type, 
         String8 union_type_name)
{


	String8 class_name;
	if (union_type_name.size > 0 && union_type_type == ValueType::ClassReference)
	{
		class_name = GetClassNameFromUnionName(arena,
		                                       union_type_name,
		                                       member_name);
	}
	else
	{
		class_name = Str8Lit("Unknown");
	}

	String8 mem_type_name = member_first_type_name;
	if (mem_type_name.size == 0)
	{
		mem_type_name = Str8Lit("Unknown");
	}

	String8 union_type_as_string = value_type_meta[(int)union_type_type].string;

	// TODO(agw): make namespace non-constant
	return PushStr8F(arena,
	                 "%S, 0x%x, %d, %d, {(U8*)\"%S\", %d}, fhir_deserialize::ResourceType::%S, fhir_deserialize::ValueType::%S, fhir_deserialize::ResourceType::%S\n", 
					name,
					offset,
					member_index,
					type_index,
					member_name,
					member_name.size,
					mem_type_name,
					union_type_as_string,
					class_name);
}


String8
SingleClassGperf(Arena *arena, CodeGenerationOptions *options, ClassDefinition *def)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };
    
	Str8ListPush(scratch.arena, &result_list, Str8Lit("%language=C++\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("%compare-strncmp\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("%readonly-tables\n"));
	String8 lookup_function_name = PushStr8F(scratch.arena, "%S", GperfFunctionLookup(arena, def));
	Str8ListPushF(scratch.arena,
	              &result_list,
	              "%%define lookup-function-name %S\n", 
	              lookup_function_name);
	Str8ListPushF(scratch.arena,
	              &result_list,
	              "%%enum\n", def->name);
	Str8ListPushF(scratch.arena,
	              &result_list,
	              "%%define word-array-name word_array_%S\n",
	              def->name);
	Str8ListPushF(scratch.arena,
	              &result_list,
	              "%%define class-name %S\n",
	              GperfClassName(arena, def));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("struct fhir_deserialize::MemberNameAndOffset;\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("%%\n"));
    
    
	ClassMetadata *meta = ClassMetadataFromClassDefinition(scratch.arena, options, def);
	int i = 0;
	for (ClassMemberNode *node = def->members.first; node; node = node->next, i++)
	{
		ClassMember mem = node->mem;
		U16 offset = meta->members[i].offset;
        
		if (mem.type == ClassMemberType::Union)
		{
			for (int j = 0; j < mem.types_count; j++)
			{
                
				ValueTypeAndName tan = mem.types[j];
				String8 union_name = GetUnionInternalTypeName(scratch.arena,
				                                              options,
				                                              tan,
				                                              mem.fhir_name);

				String8 gperf_row = GPerfRow(scratch.arena,
									union_name,
									offset,
									i,
									j,
									mem.clean_name,
									mem.types[0].name,
									tan.type,
									union_name);

				Str8ListPush(scratch.arena, &result_list, gperf_row);
			}
		}
		else if(mem.type == ClassMemberType::Single)
		{
			String8 class_value_name = mem.types[0].name;
			if (mem.types[0].type != ValueType::ClassReference)
			{
				class_value_name = Str8Lit("");
			}

			String8 gperf_row = GPerfRow(scratch.arena,
			                             mem.fhir_name,
			                             offset,
			                             i,
			                             0,
			                             mem.clean_name,
			                             class_value_name,
			                             ValueType::Unknown,
			                             Str8Lit(""));

			Str8ListPush(scratch.arena, &result_list, gperf_row);
		}
	}
    
	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}

void
OutputGperfFiles(Arena *arena, CodeGenerationOptions *options, String8 in_dir_name, ClassDefinitionList *list) {
	// NOTE(agw): guarantee null terminator
	String8 dir_name = PushStr8Copy(arena, in_dir_name);
    
    FileAttributes attrib = OS_GetFileAttributes(dir_name);
    
	if (attrib == FileAttributes_DoesNotExist ||
        !(attrib & FileAttributes_Directory) )
	{
		OS_CreateDirectory(dir_name);
	}

	String8 hash_tables_path = Str8Lit("./src/generated/gperf_hash_tables");
	if (OS_GetFileAttributes(hash_tables_path) & FileAttributes_DoesNotExist)
	{
		OS_CreateDirectory(hash_tables_path);
	}
    
	String8 gperf_inc_file_name = PushStr8F(arena, "src/generated/gperf-inc.cc");
	FILE *gperf_inc_file = fopen((char*)gperf_inc_file_name.str, "w");
    
	for (ClassDefinitionNode *node = list->first;
         node;
         node = node->next)
	{
		String8 file_name = PushStr8F(arena, "%S/%S.gperf", dir_name, node->def.name);
		String8 gperf_contents = SingleClassGperf(arena, options, &node->def);
        
		FILE *f = fopen((char*)file_name.str, "w");
		if (!f)
			Assert(false);
		fwrite(gperf_contents.str, gperf_contents.size, 1, f);
		fclose(f);
        
		String8 include_declaration = PushStr8F(arena,
		                                        "namespace %S_gperf {\n",
		                                        node->def.name);
		fwrite(include_declaration.str, include_declaration.size, 1, gperf_inc_file);
        
		include_declaration = PushStr8F(arena,
										"#include \"generated/gperf_hash_tables/%S-Member-Lookup.cc\"\n",
										node->def.name);
		fwrite(include_declaration.str, include_declaration.size, 1, gperf_inc_file);
        
		include_declaration = Str8Lit("};\n");
		fwrite(include_declaration.str, include_declaration.size, 1, gperf_inc_file);
        
		String8 gperf_call = PushStr8F(arena, 
		                               "gperf.exe -t %S --output-file=src/generated/gperf_hash_tables/%S-Member-Lookup.cc -CGD",
		                               file_name,
                                       node->def.name);
        // TODO(agw): we don't _always_ need to call this
		system((char*)gperf_call.str);
	}
    
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };
    
	Str8ListPush(scratch.arena, &result_list, Str8Lit("const fhir_deserialize::MemberNameAndOffset *\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("ClassMemberLookup(fhir_deserialize::ResourceType type, String8 member_key)\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("{\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("\tswitch (type)"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("\t{\n"));
    
	
	for (ClassDefinitionNode *node = list->first;
         node;
         node = node->next)
	{
        
		Str8ListPushF(scratch.arena, &result_list, "\t\tcase fhir_deserialize::ResourceType::%S:\n", node->def.name);
		Str8ListPushF(scratch.arena,
		              &result_list,
		              "\t\t\treturn %S_gperf::%S_Gperf::%S_MemberLookup((char*)member_key.str, member_key.size);\n",
		              node->def.name,
		              node->def.name,
		              node->def.name);
	}
    
	Str8ListPush(scratch.arena, &result_list, Str8Lit("\t}\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("}\n"));
	String8 switch_function = Str8ListJoin(arena, result_list, 0);
	fwrite(switch_function.str, (size_t)switch_function.size, 1, gperf_inc_file);
	ScratchEnd(scratch);
    
	fclose(gperf_inc_file);
}


////////////////////////////
// Metadata 

void
OutputClassMetadata(Arena *arena, 
                    CodeGenerationOptions *options,
                    String8 file_name,
                    ClassDefinitionList *list)
{
	Temp scratch = ScratchBegin(&arena, 1);
	FILE *f = fopen((char*)file_name.str, "w");
	Assert(f);
    
	String8List result_list = { 0 };
    
	Str8ListPushF(scratch.arena, &result_list, "namespace fhir_deserialize {\n");
	Str8ListPushF(scratch.arena, &result_list, "ClassMetadata class_metadata[] =\n");
	Str8ListPushF(scratch.arena, &result_list, "{\n");
    
	ClassDefinition zeroed = { 0 };
	zeroed.name = Str8Lit("Unknown");
	ClassMetadata *meta = ClassMetadataFromClassDefinition(scratch.arena, 
	                                                       options,
	                                                       &zeroed);
	String8 str = SerializeClassMetadata(scratch.arena, options, meta);
	Str8ListPushF(scratch.arena, &result_list, "%.*s,",
                  str.size, str.str);
    
	for (ClassDefinitionNode *node = list->first;
         node;
         node = node->next)
	{
		ClassMetadata *curr_meta = ClassMetadataFromClassDefinition(scratch.arena, 
		                                                            options,
		                                                            &node->def);
		String8 str = SerializeClassMetadata(scratch.arena, options, curr_meta);
		Str8ListPushF(scratch.arena, &result_list, "%.*s,",
		              str.size, str.str);
	}
    
    
	Str8ListPushF(scratch.arena, &result_list, "};");
	Str8ListPushF(scratch.arena, &result_list, "};");
	String8 result = Str8ListJoin(scratch.arena, result_list, 0);
	fwrite(result.str, result.size, 1, f);
    
	fflush(f);
	fclose(f);
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
		{ Str8Lit("iso8601_time.h"), false, IncludeType::Cpp },
	};

	options->include_files_count = ArrayCount(include_files);
	options->include_files = PushArray(arena, IncludeFile, ArrayCount(include_files));
	for(int i = 0; i < ArrayCount(include_files); i++)
	{
		options->include_files[i].name = include_files[i].name;
		options->include_files[i].wrap_in_angle_brackets = include_files[i].wrap_in_angle_brackets;
	}

	options->value_type_meta = value_type_meta;

#define STRING_TYPE String8
	String8 string_type_name = Str8Lit("String8");
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
	for(int i = 0; i < ArrayCount(cs_primative_typedefs); i++)
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
	for(int i = 0; i < ArrayCount(cs_include_files); i++)
	{
		cs_options->include_files[i].name = cs_include_files[i].name;
		cs_options->include_files[i].wrap_in_angle_brackets = cs_include_files[i].wrap_in_angle_brackets;
		cs_options->include_files[i].type = cs_include_files[i].type;
	}

	cs_options->type_pre_and_post.pre = Str8Lit("public readonly");
	return cs_options;
}

void
OutputFirelyMappings(ClassDefinitionList list)
{
    Temp scratch = ScratchBegin(0, 0);
	std::ofstream fs("generated/firely_mappings.cs");

    fs << "var nativeToFirely = new Dictionary<Type, Type>() {" << std::endl;
    for (ClassDefinitionNode *node = list.first; node; node = node->next)
    {
        String8 firely_name = PushStr8Copy(scratch.arena, node->def.name);
        bool is_child = false;
        for (int i = 0; i < firely_name.size; i++)
        {
            if (firely_name.str[i] == '_') {
                firely_name.str[i] = '.';
                is_child = true;
            }
        }
        if (is_child)
            firely_name = PushStr8F(scratch.arena, "%SComponent", firely_name);
        fs << "{ typeof(" << node->def.name << "), typeof(Hl7.Fhir.Model." << firely_name << ") },";
        fs << std::endl;
    }

    fs << "};" << std::endl;

    ScratchEnd(scratch);
    fs.close();
}

int main()
{
	OS_Init();
	ThreadCtx tctx = ThreadCtxAlloc();
	tctx.is_main_thread = 1;
	SetThreadCtx(&tctx);
	Arena *arena = ArenaAlloc(Gigabytes(16));

	ResourceList *resource_list = PushStruct(arena, ResourceList);
	{
		printf("Loading fhir structures...\n");
		StructureDefinitionList list = { 0 };
		//TODO(agw): take directory name input
		Temp scratch = ScratchBegin(&arena, 1);
#if 1
		GetStructureDefinitionsForFile(scratch.arena, &list, Str8Lit("fhir/profiles-resources.json"));
		GetStructureDefinitionsForFile(scratch.arena, &list, Str8Lit("fhir/profiles-types.json"));
		GetStructureDefinitionsForFile(scratch.arena, &list, Str8Lit("fhir/profiles-others.json"));
#endif

		printf("Converting to resources...\n");
		// Map to resources
		for (StructureDefinitionNode *node = list.first; 
			node;
			node = node->next)
		{
			Resource *res = ResourceFromStructureDefinition(arena, &node->def);
			if (res && res->members.count > 0)
			{
				ResourceListPush(arena, resource_list, res);
			}
		}
		ScratchEnd(scratch);
	}
    
////////////////////////////
// Class Definitions 
	ClassDefinitionList class_defs = GetAllClassDefinitions(arena, resource_list);

    /*
    OutputFirelyMappings(class_defs);
    return 0;
        */
    
////////////////////////////
// Output class definitions
	{
		Temp scratch = ScratchBegin(&arena, 1);
		OutputClassDefinitions(scratch.arena,
		                       CppOptions(scratch.arena),
								Str8Lit("generated/fhir_class_definitions.h"),
								&class_defs);
		ScratchEnd(scratch);
	}
    
	{
		Temp scratch = ScratchBegin(&arena, 1);
		OutputClassMetadata(scratch.arena,
		                    CppOptions(scratch.arena),
							Str8Lit("generated/fhir_class_metadata.h"),
							&class_defs);
		ScratchEnd(scratch);
	}

#if 1
	{
		Temp scratch = ScratchBegin(&arena, 1);
		String8 generated_path = Str8Lit("./src/generated/");
			if (OS_GetFileAttributes(generated_path) & FileAttributes_DoesNotExist)
			{
				OS_CreateDirectory(generated_path);
			}

			generated_path = Str8Lit("./src/generated/gperf_class_files");
			if (OS_GetFileAttributes(generated_path) & FileAttributes_DoesNotExist)
			{
				OS_CreateDirectory(generated_path);
			}

			OutputGperfFiles(scratch.arena,
			                 CppOptions(scratch.arena),
			                 Str8Lit("./src/generated/gperf_class_files"),
			                 &class_defs);

		ScratchEnd(scratch);
	}
#endif 

////////////////////////////
// Generate C# code 

	{
		Temp scratch = ScratchBegin(&arena, 1);
		OutputClassDefinitions(scratch.arena,
							CSOptions(scratch.arena),
							Str8Lit("generated/cs_generated_classes.cs"),
							&class_defs);
		ScratchEnd(scratch);
	}
}