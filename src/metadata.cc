#include "bitfield.h"
#include <inttypes.h>

struct OffsetContext
{
	U16 offset;
	U8 max_data_size;
	U32 total_size;
};

U16
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

void
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

String8
SerializeMemberTypes(Arena *arena, CodeGenerationOptions *options, ClassMemberMetadata *mem)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };

	Str8ListPushF(scratch.arena, &result_list,
	              "\t\t\t{\n");
	
	for (int i = 0; i < ArrayCount(mem->types); i++)
	{
		ValueTypeAndName type = mem->types[i];
		if (type.type == ValueType::Unknown) break;

		Str8ListPush(scratch.arena, &result_list,
		              Str8Lit("\t\t\t\t{ "));
		String8 type_name = value_type_meta[(int)type.type].string;
		Str8ListPushF(scratch.arena, &result_list,
					"ValueType::%S, ", 
					type_name);
		if (mem->type == ClassMemberType::Union)
		{
			Str8ListPushF(scratch.arena, &result_list,
			              "Str8LitComp(\"%S\")",
			              GetUnionInternalTypeName(scratch.arena,
			                                       options,
			                                       type,
			                                       mem->name));
		} else {
			Str8ListPushF(scratch.arena, &result_list,
			              "Str8LitComp(\"%S\")",
			              mem->types[i].name);
		}
		Str8ListPush(scratch.arena, &result_list,
		              Str8Lit(" }"));
		if (i != ArrayCount(mem->types) - 1) {
			Str8ListPush(scratch.arena, &result_list,
						Str8Lit(",\n"));
		}
	}

	Str8ListPushF(scratch.arena, &result_list,
	              "\t\t\t}");

	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}

void
SerializeRequiredMembers(Arena *arena, String8List *list, BitField *bf)
{
	Str8ListPushF(arena, list, "{ ");
	for (int i = 0; i < ArrayCount(bf->values); i++)
	{
		if (sizeof(void*) == 4)
		{
			Str8ListPushF(arena, list, "0x%" PRIx32, bf->values[i]);
		}
		else if (sizeof(void*) == 8)
		{
			Str8ListPushF(arena, list, "0x%" PRIx64, bf->values[i]);
		}
		else
		{
			Assert(false);
		}
		if (i != ArrayCount(bf->values) - 1)
		{
			Str8ListPushF(arena, list, ", ", bf->values[i]);
		}
	}
	Str8ListPushF(arena, list, "}");
}

String8
SerializeClassMetadata(Arena *arena, CodeGenerationOptions *options, ClassMetadata *metadata)
{
	Temp scratch = ScratchBegin(&arena, 1);
	String8List result_list = { 0 };
	Str8ListPushF(scratch.arena, &result_list,
	              "{\n");
	Str8ListPushF(scratch.arena, &result_list,
	              "\tStr8Lit(\"%S\"),\n",
	              metadata->name);
	Str8ListPushF(scratch.arena, &result_list,
	              "\t%d,\n",
	              metadata->size);
	Str8ListPushF(scratch.arena, &result_list,
	              "\t%d,\n",
	              metadata->members_count);

	SerializeRequiredMembers(scratch.arena, &result_list, &metadata->required_members);
	Str8ListPushF(scratch.arena, &result_list, ",\n");

	Str8ListPushF(scratch.arena, &result_list, "\t{\n");


	for (int i = 0; i < metadata->members_count; i++)
	{

		Str8ListPushF(scratch.arena, &result_list, "\t\t{\n");
		ClassMemberMetadata mem = metadata->members[i];

		Str8ListPushF(scratch.arena, &result_list,
		              "\t\t\tStr8LitComp(\"%S\"),\n",
						mem.name);

		String8 cardinality = cardinality_str[(int)mem.cardinality];
		Str8ListPushF(scratch.arena, &result_list,
		              "\t\t\tCardinality::%S,\n",
		              cardinality);

		String8 class_member_type = class_member_type_str[(int)mem.type];
		Str8ListPushF(scratch.arena, &result_list,
		              "\t\t\tClassMemberType::%S,\n",
		              class_member_type);

		Str8ListPushF(scratch.arena, &result_list,
		              "\t\t\t%d,\n",
		              mem.offset);

		Str8ListPushF(scratch.arena, &result_list,
		              "\t\t\t%d,\n",
		              mem.size);

		String8 member_types = SerializeMemberTypes(scratch.arena, options, &mem);
		Str8ListPushF(scratch.arena, &result_list,
		              "%S\n",
					member_types);


		Str8ListPushF(scratch.arena, &result_list, "\t\t}");
		if (i != metadata->members_count - 1)
		{
			Str8ListPushF(scratch.arena, &result_list, ",");
		}
		Str8ListPushF(scratch.arena, &result_list, "\n");
	}
	Str8ListPushF(scratch.arena, &result_list, "\t}\n");

	Str8ListPushF(scratch.arena, &result_list,
	              "}\n");
	String8 result = Str8ListJoin(arena, result_list, 0);
	ScratchEnd(scratch);
	return result;
}

size_t
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

ClassMetadata*
ClassMetadataFromClassDefinition(Arena *arena,
                                 CodeGenerationOptions *options,
                                ClassDefinition *def)
{
	ClassMetadata *meta = PushStruct(arena, ClassMetadata);
	meta->name = def->name;
	meta->members_count = def->members.count;

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
		U16 offset = OffsetContext_Increase(&offset_context, size);
		ClassMember mem = node->mem;
		ClassMemberMetadata *mem_meta = &meta->members[index];
		mem_meta->size = size;
		mem_meta->name = mem.clean_name;
		mem_meta->type = mem.type;
		mem_meta->cardinality = mem.cardinality;
		for (int i = 0; i < mem.types_count; i++)
		{
			mem_meta->types[i] = mem.types[i];
		}
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
	meta->size = offset_context.total_size;

	return meta;
}