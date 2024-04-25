namespace native_fhir
{
	////////////////////////////
	// Class Definition Helpers
	void
	CDListPush(Arena *arena, ClassDefinitionList *list, ClassDefinition def)
	{
		ClassDefinitionNode *node = PushArray(arena, ClassDefinitionNode, 1);
		node->def = def;
		QueuePush(list->first, list->last, node);
		list->count += 1;
	}

	ClassDefinitionList
	CDListMerge(ClassDefinitionList a, ClassDefinitionList b)
	{
		if (a.first && b.first)
		{
			ClassDefinitionList result = { 0 };
			result.first = a.first;
			result.last = b.last;
			a.last->next = b.first;
			b.last->next = nullptr;
			result.count = a.count + b.count;
			return result;
		}
		else if (a.first)
		{
			return a;
		}
		else if (b.first)
		{
			return b;
		}
 

		Assert(false);
		return a;
	}

	////////////////////////////
	// Class Member Helpers
	void
	CMListPush(Arena *arena, ClassMemberList *list, ClassMember mem)
	{
		ClassMemberNode *node = PushArray(arena, ClassMemberNode, 1);
		node->mem = mem;
		QueuePush(list->first, list->last, node);
		list->count += 1;
	}


	////////////////////////////
	// General Helpers 

	String8
	ClassNameFromResourceName(Arena *arena, String8 res_name)
	{
		String8 result = {};
		result.size = res_name.size;
		result.str = (U8*)ArenaPush(arena, result.size);

		for (int i = 0; i < res_name.size; i++)
		{
			//TODO(agw): this does not work with non-ascii
			char c = res_name.str[i];
			if (c == '.') {
				result.str[i] = '_';
				i++;
				if (i < res_name.size)
				{
					result.str[i] = CharToUpper(res_name.str[i]);
				}
			} else if (c == '-')
			{
				result.str[i] = '_';
			}
			else if (c == ':')
			{
				result.size = i;
				break;
			}
			else
			{
				result.str[i] = res_name.str[i];
			}
		}

		if (result.size > 0)
		{
			result.str[0] = CharToUpper(result.str[0]);
		}

		return result;
	}


	String8
	CleanContentReference(Arena *arena, String8 content_reference)
	{

  U64 hash_idx = FindSubstr8(content_reference, Str8Lit("#"), 0, 0);
  String8 res = Str8Skip(content_reference, hash_idx);
		if (hash_idx > 0 || content_reference.str[0] == '#')
		{
			String8 result = PushStr8Copy(arena, res);
			result.str++;
			result.size--;
			return result;
		}
		return content_reference;
	}

	String8
	RemoveBrackets(Arena *arena, String8 member_name)
	{
		if (FindSubstr8(member_name, Str8Lit("[x]"), 0, 0) != member_name.size) {
			String8 without_brackets = Prefix8(member_name, member_name.size - 3);
			return PushStr8Copy(arena, without_brackets);
		}
		return member_name;
	}

	String8
	CleanMemberName(Arena *arena, String8 member_name)
	{
		String8 without_brackets = RemoveBrackets(arena, member_name);
		if (!Str8Match(without_brackets, member_name, 0))
		{
			return PushStr8F(arena, "_%S", without_brackets);
		}

		return PushStr8F(arena, "_%S", member_name);
	}

	// TODO(agw): hash these into a table
	ValueType
	ValueTypeFromString8(String8 str)
	{
		for (int i = 0; i < ArrayCount(value_type_meta); i++)
		{
			for (int j = 0; j < ArrayCount(value_type_meta[i].fhir_names); j++)
			{
				if (Str8Match(str, value_type_meta[i].fhir_names[j], 0))
				{
					return value_type_meta[i].type;
				}
			}
		}
		// TODO(agw): should probably check if a valid class
		return ValueType::ClassReference;
	}

	size_t
	ValueTypesFromResourceMember(Arena *arena, ResourceMember *mem, ValueTypeAndName **out_types)
	{
		size_t num_types = mem->value_types.node_count;
		ValueTypeAndName *types = PushArray(arena, ValueTypeAndName, num_types);

		String8Node *vt_node = mem->value_types.first;
		for (int i = 0;
			i < num_types;
			i++, vt_node = vt_node->next)
		{
			types[i].type = ValueTypeFromString8(vt_node->string);

			if (types[i].type == ValueType::ClassReference)
			{
				types[i].name = ClassNameFromResourceName(arena, vt_node->string);
			}
		}

		*out_types = types;
		return num_types;
	}

	////////////////////////////
	// Class Members 
	ClassMember
	ArrayCountClassMember(Arena *arena, ClassMember array_mem)
	{
		// NOTE(alex): split into two members, one for count and one for array of data
		ClassMember count = {};
		count.clean_name = count.fhir_name = PushStr8F(arena, "%S_count", array_mem.clean_name);
	
		count.cardinality = Cardinality::OneToOne;
		count.type = ClassMemberType::Single;
	
		count.types = PushArray(arena, ValueTypeAndName, 1);
		count.types_count = 1;
		count.types[0].type = ValueType::ArrayCount;
	
		return count;
	}

	ClassMember
	EnumClassMember(Arena *arena, ClassMember union_mem)
	{
		ClassMember _enum = {};
		_enum.clean_name = _enum.fhir_name = EnumMemberNameFromMemberName(arena, union_mem.clean_name);
		_enum.cardinality = Cardinality::OneToOne;
		_enum.type = ClassMemberType::Enum;
		_enum.types = union_mem.types;
		_enum.types_count = union_mem.types_count;
		return _enum;
	}

	ClassMember
	ResourceTypeClassMember(Arena *arena, String8 class_name)
	{
		ClassMember resource_type_mem = {};
		resource_type_mem.clean_name = resource_type_mem.fhir_name = Str8Lit("resourceType");
		resource_type_mem.cardinality = Cardinality::OneToOne;
		resource_type_mem.type = ClassMemberType::Single;

		resource_type_mem.types = PushArray(arena, ValueTypeAndName, 1);
		resource_type_mem.types_count = 1;
		resource_type_mem.types[0].type = ValueType::ResourceType;
		resource_type_mem.types[0].name = class_name;

		return resource_type_mem;
	}

	ClassMemberList
	ClassMembersFromResourceMember(Arena *arena, ResourceMember *mem)
	{
		ClassMemberList result = { 0 };

		ClassMember class_mem = { 0 };
		class_mem.clean_name = CleanMemberName(arena, mem->name);
		class_mem.fhir_name = RemoveBrackets(arena, mem->name);
		class_mem.cardinality = mem->cardinality;


		if (mem->content_reference.size != 0)
		{
			Temp scratch = ScratchBegin(&arena, 1);
			String8 content_reference = CleanContentReference(scratch.arena, mem->content_reference);
			String8 class_name = ClassNameFromResourceName(arena, content_reference);

			class_mem.types = PushArray(arena, ValueTypeAndName, 1);
			class_mem.types[0].type = ValueType::ClassReference;
			class_mem.types[0].name = class_name;
			class_mem.types_count = 1;

			ScratchEnd(scratch);
		}
		else
		{
			class_mem.types_count = ValueTypesFromResourceMember(arena, mem, &class_mem.types);
		}


		class_mem.type = (class_mem.types_count > 1) ? ClassMemberType::Union : ClassMemberType::Single;

		CMListPush(arena, &result, class_mem);

		if (class_mem.types_count > 1)
		{
			// NOTE(agw): Add corresponding enum for the union
			ClassMember _enum = EnumClassMember(arena, class_mem);
			CMListPush(arena, &result, _enum);

		}

		return result;
	}

	////////////////////////////
	// Exported

	ClassDefinitionList
	GetClassDefinitionsFromResource(Arena *arena, FhirResource *res)
	{
		ClassDefinitionList result = {};

		ClassDefinition class_def = {};
		class_def.name = ClassNameFromResourceName(arena, res->name);
		class_def.inherits = res->inherits;

		ClassMember resource_type_member = ResourceTypeClassMember(arena, class_def.name);
		CMListPush(arena,
		           &class_def.members,
		           resource_type_member);

  std::unordered_set<std::string> members;
		for (ResourceMemberNode *ptr = res->members.first;
			ptr;
			ptr = ptr->next)
		{
			ClassMemberList mem_list = ClassMembersFromResourceMember(arena, &ptr->member);

			for (ClassMemberNode *mem_node = mem_list.first;
				mem_node;
				mem_node = mem_node->next)
			{
    std::string clean_name = StdStringFromString8(mem_node->mem.clean_name);
    if (members.find(clean_name) != members.end())
     continue;

				if (mem_node->mem.IsArray())
				{
					// NOTE(agw): split into two members, one for count and one for array of data
					ClassMember count = ArrayCountClassMember(arena, mem_node->mem);
					CMListPush(arena, &class_def.members, count);
				}

				CMListPush(arena, &class_def.members, mem_node->mem);
    members.emplace(clean_name);
			}

		}

		// TODO(agw): this should actually be an output, "max member count"
		// Then this can be evaluated dynamically
		Assert(class_def.members.count < METADATA_MEMBER_COUNT);

		CDListPush(arena, &result, class_def);

		for (ResourceNode *res_ptr = res->sub_resources->first;
			res_ptr;
			res_ptr = res_ptr->next)
		{
			ClassDefinitionList sub_list = GetClassDefinitionsFromResource(arena, &res_ptr->resource);
			result = CDListMerge(result, sub_list);
		}

		return result;
	}

};