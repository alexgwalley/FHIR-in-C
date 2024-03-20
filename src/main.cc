#include <stdio.h>
#include <string>
#include <sstream>
#include <fstream>

#include "third_party/cJSON.h"
#include "native_fhir_inc.h"
#include "fhir_structure/fhir_structure.h"
#include "resource/resource.h"

#include "manual_deserialization.h"


#include "third_party/cJSON.c"
#include "native_fhir_inc.cc"
#include "fhir_structure/fhir_structure.cc"
#include "resource/resource.cc"

using namespace native_fhir;


void
GetStructureDefinitionsForFile(Arena *arena, StructureDefinitionList* list, String8 file_path)
{
	// TODO(agw): this needs to be chained
	Temp scratch = ScratchBegin(&arena, 1);
	void *json_string = ReadEntireFile(scratch.arena, file_path, 0);
	if (json_string == NULL)
	{
		printf("Could not find file %*.s\n", PRINT_STR8(file_path));
		exit(-1);
	}

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
	for (U32 i = 0; i < list->count; i++)
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
GetAllClassDefinitions(Arena *arena, FhirResourceList *res_list)
{
	Temp scratch = ScratchBegin(&arena, 1);
	ClassDefinitionList result = { 0 };
	ResourceNode *ptr = res_list->first;

	// TODO(agw): 4096 should be based on some actual number
	HashTable completed = HashTable_Create(scratch.arena, 4096);
	for (int i = 0; i < res_list->count; i++)
	{
		ClassDefinitionList def_list = GetClassDefinitionsFromResource(arena, &ptr->resource);
		for (ClassDefinitionNode *node = def_list.first; node; node = node->next)
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
OutputClassDefinitions(
                       CodeGenerationOptions *options,
                       String8 file_name,
                       ClassDefinitionList *list)
{
	std::ofstream fs((char*)file_name.str);

	if (options->namespace_name.size == 0)
	{
		options->namespace_name = Str8Lit("nf_fhir_r4");
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
    
	fs << "namespace native_fhir { " << std::endl;
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

	if (options->pre_declare_classes)
	{
		for (ClassDefinitionNode *node = list->first; node; node = node->next)
		{
			// TODO(agw): should take whether class or struct
			String8 type_name = options->use_classes ? Str8Lit("class") : Str8Lit("struct");
			fs << type_name << " " << node->def.name << ";" << std::endl;
		}
	}

	if(options->include_resource_type)
	{
		if (options->use_enum_class)
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

		for (ClassDefinitionNode *node = list->first; node; node = node->next)
		{
			fs << "\t" << node->def.name;
			if (node->next != nullptr)
			{
				fs << ",";
			}
			fs << std::endl;
		}

		fs << "};" << std::endl;
	}
    
	{
		for (ClassDefinitionNode *node = list->first; node; node = node->next)
		{
			OutputClassDefinition(fs, options, &node->def);
		}
	}
    
    
	fs << "};" << std::endl;
	fs << "};" << std::endl;
	
	fs.close();
}

////////////////////////////
// ~ GPerf 

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
         String8 union_type_name, Cardinality cardinality)
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
	                 "%S, 0x%x, %d, %d, (uint16_t)nf_fhir_r4::ResourceType::%S, (uint16_t)nf_fhir_r4::ResourceType::%S, (uint8_t)native_fhir::ValueType::%S, Cardinality::%S\n",
	                 name,
	                 (uint16_t)offset,
	                 (uint8_t)member_index,
	                 (uint8_t)type_index,
	                 mem_type_name,
	                 class_name,
	                 union_type_as_string,
	                 cardinality_str[(int)cardinality]);
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
	Str8ListPush(scratch.arena, &result_list, Str8Lit("struct native_fhir::MemberNameAndOffset;\n"));
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
				                             union_name,
				                             mem.cardinality);

				Str8ListPush(scratch.arena, &result_list, gperf_row);
			}
		}
		else if (mem.type == ClassMemberType::Single)
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
			                             Str8Lit(""),
			                             mem.cardinality);

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
		!(attrib & FileAttributes_Directory))
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
		{
			printf("could not open file with file_name %*.s\n", (int)file_name.size, file_name.str);
			exit(-1);
		}
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
    
	Str8ListPush(scratch.arena, &result_list, Str8Lit("const native_fhir::MemberNameAndOffset *\n"));
	String8 function_name = PushStr8F(scratch.arena, "ClassMemberLookup(native_fhir::%S::ResourceType type, String8 member_key)\n", options->namespace_name);
	Str8ListPush(scratch.arena, &result_list, function_name);
	Str8ListPush(scratch.arena, &result_list, Str8Lit(""));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("{\n"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("\tswitch (type)"));
	Str8ListPush(scratch.arena, &result_list, Str8Lit("\t{\n"));
    
	
	for (ClassDefinitionNode *node = list->first;
		node;
		node = node->next)
	{
        
		Str8ListPushF(scratch.arena, &result_list, "\t\tcase native_fhir::%S::ResourceType::%S:\n", options->namespace_name, node->def.name);
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
    
	Str8ListPushF(scratch.arena, &result_list, "namespace native_fhir {\n");
	Str8ListPushF(scratch.arena, &result_list, "namespace nf_fhir_r4 {\n");
	Str8ListPushF(scratch.arena, &result_list, "ClassMetadata g_class_metadata[] =\n");
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
    
    
	Str8ListPushF(scratch.arena, &result_list, "};\n");
	Str8ListPushF(scratch.arena, &result_list, "};");
	Str8ListPushF(scratch.arena, &result_list, "};");
	String8 result = Str8ListJoin(scratch.arena, result_list, 0);
	fwrite(result.str, result.size, 1, f);
    
	fflush(f);
	fclose(f);
	ScratchEnd(scratch);
}


// NOTE(agw): this is not exact, it was temporary to remove a lot of manual work
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

	FhirResourceList *resource_list = PushStruct(arena, FhirResourceList);
	// ~ Get StructureDefinitions
	{
		StructureDefinitionList list = { 0 };

		//TODO(agw): take directory name input
		GetStructureDefinitionsForFile(arena, &list, Str8Lit("fhir/profiles-resources.json"));
		GetStructureDefinitionsForFile(arena, &list, Str8Lit("fhir/profiles-types.json"));
		GetStructureDefinitionsForFile(arena, &list, Str8Lit("fhir/profiles-others.json"));

		printf("Converting to resources...\n");
		// Map to resources
		for (StructureDefinitionNode *node = list.first;
			node;
			node = node->next)
		{
			FhirResource *res = ResourceFromStructureDefinition(arena, &node->def);
			if (res && res->members.count > 0)
			{
				ResourceListPush(arena, resource_list, res);
			}
		}
	}
    
	////////////////////////////
	// ~ Class Definitions 
	ClassDefinitionList class_defs = GetAllClassDefinitions(arena, resource_list);

	////////////////////////////
	// ~ Output class definitions
	OS_CreateDirectory(Str8Lit("generated"));
	{
		Temp scratch = ScratchBegin(&arena, 1);
		OutputClassDefinitions(
		                       CppOptions(scratch.arena),
		                       Str8Lit("generated/fhir_class_definitions.h"),
		                       &class_defs);
		ScratchEnd(scratch);
	}
    
	////////////////////////////
	// ~ Output class metadata
	{
		Temp scratch = ScratchBegin(&arena, 1);
		OutputClassMetadata(scratch.arena,
		                    CppOptions(scratch.arena),
		                    Str8Lit("generated/fhir_class_metadata.h"),
		                    &class_defs);

		M_Serialize(class_defs, Str8Lit("generated/fhir_class_metadata.bin"));
		ScratchEnd(scratch);
	}

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

	////////////////////////////
	// Generate C# code 

	{
		Temp scratch = ScratchBegin(&arena, 1);
		OutputClassDefinitions(
		                       CSOptions(scratch.arena),
		                       Str8Lit("generated/CSGeneratedClasses.cs"),
		                       &class_defs);
		ScratchEnd(scratch);
	}
}
