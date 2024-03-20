#include <string.h>

// NOTE(agw): used to double check file validity
#define END_OF(p, type) (type*)((U8*)(p) + sizeof(*(p)))
#define U8_OFFSET(p, amt) ((U8*)(p) + (amt))
#define SERIALIZED_CM_MAGIC 0xFFFF
#define SERIALIZED_CMM_MAGIC 0xEEEE

namespace native_fhir
{

	local_function size_t
	MemberSize(ClassMember *mem, CodeGenerationOptions *options)
	{
		if (mem->IsArray())
		{
			// TODO(agw): this can depend...get's tricky when we use unique_ptr and stuff
			return sizeof(void*);
		}

		if (mem->type == ClassMemberType::Enum)
		{
			return ENUM_SIZE;
		}

		size_t max_size = 0;
		for (int i = 0; i < mem->types_count; i++)
		{
			ValueType type = mem->types[i].type;
			size_t size = options->value_type_meta[(int)type].size;
			if (size > max_size) max_size = size;
		}
		return max_size;
	}

	////////////////////////////
	// Offset Calculation 
	local_function U16
	OffsetContext_Increase(OffsetContext *context, U8 size)
	{
		U8 alignment = (size < 8) ? size : 8;
		while (context->offset % alignment != 0)
		{
			context->offset++;
		}

		U16 offset_start = context->offset;

		if (alignment > context->max_data_size)
		{
			context->max_data_size = alignment;
		}

		context->offset += size;

		return offset_start;
	}

	local_function void
	OffsetContext_Finish(OffsetContext *context)
	{
		if (context->max_data_size == 0)
		return;
		while (context->offset % context->max_data_size != 0)
		{
			context->offset++;
		}
		context->total_size = context->offset;
	}

	ClassMetadata*
	ClassMetadataFromClassDefinition(Arena *arena,
	                                 CodeGenerationOptions *options,
	                                 ClassDefinition *def)
	{
		ClassMetadata *meta = PushStruct(arena, ClassMetadata);
		meta->name = def->name;
		Assert(def->members.count <= 255);
		meta->members_count = (U8)def->members.count;

		OffsetContext offset_context = { 0 };

		int index = 0;
		for (ClassMemberNode *node = def->members.first;
			node;
			node = node->next)
		{

			if (!options->include_array_count &&
				node->mem.types[1].type == ValueType::ArrayCount)
			{
				continue;
			}

			size_t size = MemberSize(&node->mem, options);
			Assert(size < U8_MAX);
			U16 offset = OffsetContext_Increase(&offset_context, (U8)size);
			ClassMember mem = node->mem;
			ClassMemberMetadata *mem_meta = &meta->members[index];
			mem_meta->name = mem.clean_name;
			mem_meta->type = mem.type;
			mem_meta->cardinality = mem.cardinality;
			for (int i = 0; i < mem.types_count; i++)
			{
				mem_meta->types[i] = mem.types[i];
			}
			Assert(mem.types_count <= 255);
			mem_meta->types_count = (U8)mem.types_count;
			mem_meta->offset = offset;

			if (mem.types_count > 0 &&
				mem.type != ClassMemberType::Enum &&
				mem.types[0].type != ValueType::ArrayCount &&
				mem.types[0].type != ValueType::ResourceType &&
				(mem_meta->cardinality == Cardinality::OneToOne ||
					mem_meta->cardinality == Cardinality::OneToInf))
			{
				BitField_SetIndex(&meta->required_members, index);
			}
			index++;
		}

		OffsetContext_Finish(&offset_context);
		Assert(offset_context.total_size < U16_MAX);
		meta->size = (U16)offset_context.total_size;

		return meta;
	}


	////////////////////////////
	// New Serialization
	local_function M_StringHandle
	GetStringHandle(Arena *arena, HashTable *table, String8List *list, M_StringHandle *curr_max, String8 str)
	{
		if (str.size == 0) return 0;

		// NOTE(agw): just going to store the value in the "size" field
		if (HashTable_Has(table, str))
		{
			String8 val = HashTable_Get(table, str);
			Assert(val.size < U16_MAX);
			return (U16)val.size;
		}

		(*curr_max)++;
		String8 val = Str8(0, *curr_max);
		HashTable_Add(table, str, val);
		Str8ListPush(arena, list, str);

		Assert(val.size < U16_MAX);
		return (U16)val.size;
	}

	MetadataFile
	M_Deserialize(Arena* arena, void* bytes, size_t length)
	{
		MetadataFile meta = { 0 };

		MetadataFile *file = (MetadataFile*)bytes;
		Assert(file->header.magic == METADATA_MAGIC);

		MemoryCopy(&meta, file, sizeof(meta));

		M_Section *curr_section = (M_Section*)((U8*)file + sizeof(*file));
		U8* pos = (U8*)curr_section;
		while (pos < (U8*)bytes + length)
		{
			switch (curr_section->type)
			{
				case M_SectionType::ClassMetadata:
				{
					meta.class_meta = (ClassMetadataSection*)pos;

					meta.classes_count = meta.class_meta->class_count;
					meta.classes = PushArray(arena,  SerializedClassMetadata*, meta.class_meta->class_count);

					SerializedClassMetadata *class_ptr = (SerializedClassMetadata*)U8_OFFSET(curr_section, sizeof(ClassMetadataSection));
					int idx = 0;
					while (class_ptr->offset_to_next)
					{
						Assert(idx < meta.classes_count);
						Assert(class_ptr->magic == SERIALIZED_CM_MAGIC);

						meta.classes[idx] = class_ptr;
						class_ptr = (SerializedClassMetadata*)U8_OFFSET(class_ptr, class_ptr->offset_to_next);
						class_ptr->members = PushArray(arena, SerializedClassMemberMetadata*, class_ptr->members_count);

						SerializedClassMemberMetadata *s_member = (SerializedClassMemberMetadata*)END_OF(class_ptr, SerializedClassMetadata);
						for (int i = 0; i < class_ptr->members_count; i++)
						{
							Assert(s_member->magic == SERIALIZED_CMM_MAGIC);
							class_ptr->members[i] = s_member;

							int size = sizeof(*s_member) + s_member->types_count * sizeof(SerializedValueTypeAndName);
							s_member = (SerializedClassMemberMetadata *)U8_OFFSET(s_member, size);
						}

						idx++;
					}

				} break;
				case M_SectionType::StringTable:
				{
					meta.string_table = (StringTableSection*)pos;
				} break;
			}

			if (curr_section->size == 0) break;
			pos += curr_section->size;
			curr_section = (M_Section*)pos;
		}

		return meta;
	}

	String8
	M_GetStringFromHandle(MetadataFile *file, M_StringHandle handle)
	{
		if (handle == 0) return Str8Lit("Unknown");

		StringTableSection *string_table = file->string_table;
		Assert(handle < string_table->string_count);

		U8* strings = END_OF(string_table, U8);
		U8* string = strings + string_table->string_size * handle;
		String8 str = Str8C((char*)string);
		return str;
	}

	inline SerializedClassMetadata*
	M_GetClassMetadata(MetadataFile *file, int type)
	{
		Assert(file->classes);
		Assert(type < file->classes_count);
		SerializedClassMetadata* ret = file->classes[type];
		return ret;
	}

	inline SerializedClassMemberMetadata*
	M_GetClassMemberMetadata(SerializedClassMetadata* meta, int mem_index)
	{
		Assert(mem_index < meta->members_count);
		SerializedClassMemberMetadata* mem_meta = meta->members[mem_index];
		return mem_meta;
	}

	inline SerializedValueTypeAndName
	M_GetClassMemberType(SerializedClassMemberMetadata* mem, int type_index)
	{
		Assert(type_index < mem->types_count);
		SerializedValueTypeAndName *type = END_OF(mem, SerializedValueTypeAndName);
		return type[type_index];
	}

	void
	M_Serialize(ClassDefinitionList class_defs, String8 file_name)
	{
		Temp temp = ScratchBegin(0, 0);
		String8 null_term = PushStr8Copy(temp.arena, file_name);
		FILE *f; 
		errno_t error = fopen_s(&f, (char*)null_term.str, "wb");
		if (!f)
		{
			char* error_str = strerror(error);
			printf("could not open file %.*s for writing. error: %s\n", PRINT_STR8(null_term), error_str);
			exit(-1);
		}

		// NOTE(agw): since arenas always just push on the end...we can take advantage of that.
		// We will just push and build out the structure just as if we would with semi-regular code.
		// Then we can just copy all of the contents of the arena over.
		Arena *meta_arena = ArenaAlloc(Megabytes(64));
		ArenaSetAutoAlign(meta_arena, 1);

		U8* meta_start = ArenaPosPtr(meta_arena);

		MetadataFile *file = PushStruct(meta_arena, MetadataFile);
		char version[64] = "r4";
		file->header.magic = METADATA_MAGIC;
		file->classes_count = class_defs.count + 1;
		memcpy(&file->header.version, version, sizeof(version));
		// ~ Write top part of metadata file

		U8* cm_section_start = ArenaPosPtr(meta_arena);
		// ~ Serialize Class Metadata
		ClassMetadataSection *cm_section = PushStruct(meta_arena, ClassMetadataSection);
		cm_section->header.type = M_SectionType::ClassMetadata;
		cm_section->class_count = class_defs.count + 1;

		// Serialize binary
		SerializedCMList list = { 0 };

		SerializedClassMetadata c_temp_meta = { 0 };

		Arena *hash_arena = ArenaAlloc(Megabytes(64));
		HashTable str_table = HashTable_Create(hash_arena, 1<<15);
		String8List str_list = { 0 };

		Str8ListPush(hash_arena, &str_list, Str8Lit("Unknown"));


		size_t max_str_len = 0;
		double sum_str_len = 0;

		size_t index = 0;
		M_StringHandle string_handle_curr = 0;

		SerializedClassMetadata *unknown_class = PushStruct(meta_arena, SerializedClassMetadata);
		unknown_class->magic = SERIALIZED_CM_MAGIC;

		SerializedClassMetadata* prev_class = unknown_class;

		for (ClassDefinitionNode *node = class_defs.first; node;
		node = node->next, index++)
		{
			if (prev_class)
			{
				ptrdiff_t offset = ArenaPosPtr(meta_arena) - (U8*)prev_class;
				Assert(offset < U16_MAX);
				prev_class->offset_to_next = (U16)offset;
			}
			ClassMetadata *curr_meta = ClassMetadataFromClassDefinition(temp.arena,
			                                                            CppOptions(temp.arena),
			                                                            &node->def);
			max_str_len = Max(max_str_len, curr_meta->name.size);
			sum_str_len += curr_meta->name.size;

			SerializedClassMetadata *meta = PushStruct(meta_arena, SerializedClassMetadata);
			meta->name = GetStringHandle(hash_arena, &str_table, &str_list, &string_handle_curr, curr_meta->name);
			meta->magic = SERIALIZED_CM_MAGIC;
			meta->size = curr_meta->size;
			meta->members_count = curr_meta->members_count;
			meta->required_members = curr_meta->required_members;

			// ~ Get Members
			SerializedClassMemberMetadata* prev_mm = 0;
			for (int i = 0; i < curr_meta->members_count; i++)
			{
				if (prev_mm)
				{
					ptrdiff_t size = ArenaPosPtr(meta_arena) - (U8*)prev_mm;
					Assert(size < U16_MAX);
				}

				ClassMemberMetadata mem_meta = curr_meta->members[i];
				SerializedClassMemberMetadata* s_meta = PushStruct(meta_arena, SerializedClassMemberMetadata);

				s_meta->name = GetStringHandle(hash_arena, &str_table, &str_list, &string_handle_curr, mem_meta.name);
				s_meta->magic = SERIALIZED_CMM_MAGIC;
				s_meta->offset = mem_meta.offset;
				s_meta->cardinality = mem_meta.cardinality;
				s_meta->type = mem_meta.type;
				s_meta->types_count = mem_meta.types_count;

				max_str_len = Max(max_str_len, mem_meta.name.size);
				sum_str_len += mem_meta.name.size;

				U8* type_ptr = (U8*)s_meta + sizeof(SerializedClassMemberMetadata);
				for (int j = 0; j < mem_meta.types_count; j++)
				{
					SerializedValueTypeAndName *vt = PushStruct(meta_arena, SerializedValueTypeAndName);

					vt->name = GetStringHandle(hash_arena, &str_table, &str_list, &string_handle_curr, mem_meta.types[j].name);
					vt->type = mem_meta.types[j].type;
					// TODO(agw): set values
					type_ptr += sizeof(*vt);
				}

				prev_mm = (SerializedClassMemberMetadata*)s_meta;
			}

			prev_class = meta;
		}
		ScratchEnd(temp);
		prev_class->offset_to_next = 0;

		void *filler = ArenaPush(meta_arena, 512);
		MemorySet(filler, 0xAA, 512);

		// Update class section header
		cm_section->header.size = (U8*)ArenaPosPtr(meta_arena) - (U8*)cm_section_start;

		// ~ Serialize String Table
		StringTableSection* str_section = PushStruct(meta_arena, StringTableSection);
		str_section->header.type = M_SectionType::StringTable;
		Assert(str_list.node_count < U16_MAX);
		str_section->string_count = (U16)str_list.node_count;
		Assert(max_str_len < U16_MAX - 1);
		str_section->string_size = (U16)max_str_len + 1;


		// ~ Push String Data
		for (String8Node *node = str_list.first; node; node = node->next)
		{
			void* cpy = ArenaPush(meta_arena, str_section->string_size);
			MemoryCopy(cpy, node->string.str, node->string.size);
		}
		str_section->header.size = ArenaPosPtr(meta_arena) - (U8*)str_section;

		// Write actual class metadata
		size_t to_write = ArenaPosPtr(meta_arena) - meta_start;
		size_t written = fwrite(meta_start, 1, to_write, f);
		Assert(written == to_write);

		fclose(f);

		FILE *f_h;
		errno_t f_h_error = fopen_s(&f_h,"generated/fhir_class_metadata.h", "w");
		if (f_h_error)
		{
			char *str_error = strerror(f_h_error);
			printf("Error opening file: generated/fhir_class_metadata.h, error: %s\n", str_error);
		}
		fprintf(f_h, "#ifndef R4_METADATA_H\n");
		fprintf(f_h, "#define R4_METADATA_H\n");
		fprintf(f_h, "unsigned char g_metadata[] = {\n");

		U8* ptr = meta_start;
		for (size_t i = 0; i < to_write; i++)
		{
			fprintf(f_h, "0x%x", *ptr);
			if (i < to_write - 1)
			{
				fprintf(f_h, ",");
			}

			if ((i + 1) % 84 == 0)
			{
				fprintf(f_h, "\n");
			}

			ptr++;
		}
		fprintf(f_h, "\n};");
		fprintf(f_h, "\n#endif");
		fclose(f_h);


		printf("Num Unique Strings: %d\n", string_handle_curr);
		printf("Max String size: %zd\n", max_str_len);
		printf("Mean String size: %f\n", sum_str_len / string_handle_curr);

		ArenaRelease(meta_arena);
		ArenaRelease(hash_arena);
	}

};