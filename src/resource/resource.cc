namespace native_fhir
{

	local_function FhirResource*
	GetSubResource(Arena *arena, FhirResource *res, FhirPath resource_path, bool use_end);


	////////////////////////////
	// FHIR Path helpers 
	FhirPath
	FhirPathFromString8(Arena *arena, String8 path)
	{
		String8 splits[] = { Str8Lit(".") };
		String8List strs = StrSplit8(arena, path, ArrayCount(splits), splits);
		FhirPath fhir_path;
		fhir_path.parts = strs;
		return fhir_path;
	}

	String8
	Str8FromFhirPath(Arena* arena, FhirPath path)
	{
		StringJoin params = { 0 };
		params.sep = Str8Lit(".");
		return Str8ListJoin(arena, path.parts, &params);
	}

	String8
	FhirPathFinalPart(Arena *arena, FhirPath path)
	{
		if (path.parts.node_count == 0) return Str8Lit("");
		return PushStr8Copy(arena, path.parts.last->string);
	}

	FhirPath
	FhirPathWithoutFront(Arena *arena, FhirPath path)
	{
		if (path.parts.node_count == 0) return path;
		FhirPath next_path;
		String8List *parts_array = PushArray(arena, String8List, 1);
		parts_array->node_count = path.parts.node_count - 1;
		parts_array->first = path.parts.first->next;
		next_path.parts = *parts_array;
		return next_path;
	}

	FhirPath
	FhirPathWithoutEnd(Arena *arena, FhirPath path)
	{
		if (path.parts.node_count <= 1) return path;
		FhirPath next_path;

		String8List *parts_array = PushArray(arena, String8List, 1);
		parts_array->node_count = path.parts.node_count - 1;
		parts_array->first = path.parts.first;
		String8Node *ptr = path.parts.first;

		for (int i = 0; i < parts_array->node_count - 1; i++)
		{
			ptr = ptr->next;
		}

		parts_array->last = ptr;
		parts_array->last->next = nullptr;

		next_path.parts = *parts_array;
		return next_path;
	}

	////////////////////////////
	// General Helpers 

	local_function Cardinality
	CardinalityFromElementDefinition(ElementDefinition *elem_def)
	{
		if (elem_def->max.size == 0) return Cardinality::Unknown;
		B32 max_is_zero = Str8Match(elem_def->max, Str8Lit("0"), 0);
		B32 max_is_one = Str8Match(elem_def->max, Str8Lit("1"), 0);
		B32 max_is_inf = Str8Match(elem_def->max, Str8Lit("*"), 0);
    
		if (elem_def->min == 0.0 && max_is_zero)
		{
			return Cardinality::ZeroToZero;
		} else if (elem_def->min == 0.0 && max_is_inf)
		{
			return Cardinality::ZeroToInf;
		}
		else if (elem_def->min == 1.0 && max_is_inf)
		{
			return Cardinality::OneToInf;
		}
		else if (elem_def->min == 0.0 && max_is_one)
		{
			return Cardinality::ZeroToOne;
		}
		else if (elem_def->min == 1.0 && max_is_one)
		{
			return Cardinality::OneToOne;
		}
    
		return Cardinality::Unknown;
	}


	////////////////////////////
	// Resource Member 

	local_function void
	ResourceAddMemberOrSubresourceMember(Arena *arena, FhirResource *res, FhirPath path, ResourceMember *member)
	{
		FhirResource *to_modify = res;
		FhirResource *subresource = GetSubResource(arena, res, path, false);
		if (subresource) {
			to_modify = subresource;
		}
    
		RMListPush(arena, &to_modify->members, member);
	}

	local_function ResourceMember*
	ResourceMemberFromElementDefinition(Arena *arena, ElementDefinition* elem_def)
	{
		String8 member_name = FhirPathFinalPart(arena, elem_def->path);
		Cardinality member_card = CardinalityFromElementDefinition(elem_def);
    
		ResourceMember *member = PushArray(arena, ResourceMember, 1);
		member->name = member_name;

		for (String8Node *node = elem_def->value_types.first;
			node;
			node = node->next)
		{
			Str8ListPush(arena, &member->value_types, node->string);
		}

		member->content_reference = elem_def->content_reference;
		member->cardinality = member_card;
    
		return member;
	}

	////////////////////////////
	// Subresources 
	local_function FhirResource*
	GetSubResource(Arena *arena, FhirResource *res, FhirPath resource_path, bool use_end)
	{
		// TODO(agw): test what happens if we return nil resource struct instead
		if (!res->sub_resources) return nullptr;

		Temp scratch = ScratchBegin(&arena, 1);
		FhirPath path_to_check = resource_path;
		if (!use_end)
		{
			path_to_check = FhirPathWithoutEnd(scratch.arena, path_to_check);
		}

		for (ResourceNode *ptr = res->sub_resources->first;
			ptr;
			ptr = ptr->next)
		{
			FhirResource resource = ptr->resource;
			if (resource.sub_resources->count > 0)
			{
				FhirResource *possible_sub = GetSubResource(arena, &resource, path_to_check, true);
				if (possible_sub)
				{
					return possible_sub;
				}
			}
        
			FhirPath res_fhir_path = FhirPathFromString8(scratch.arena, resource.name);
        
			if (res_fhir_path.parts.node_count != path_to_check.parts.node_count)
			{
				continue;
			}

			bool matches = true;

			if (res_fhir_path.parts.node_count != path_to_check.parts.node_count)
			continue;

			String8Node *res_part = res_fhir_path.parts.first;
			for (String8Node *without_end_part = path_to_check.parts.first;
				without_end_part;
				without_end_part = without_end_part->next,
				res_part = res_part->next)
			{
				if (!Str8Match(res_part->string, without_end_part->string, 0))
				{
					matches = false;
					break;
				}
			}
        
        
			if (matches) {
				ScratchEnd(scratch);
				return &ptr->resource;
			}
        
		}
    
		ScratchEnd(scratch);
		return nullptr;
	}

	local_function void
	ResourceAddSubResource(Arena *arena, FhirResource *res, FhirPath path, ElementDefinition *elem_def)
	{
		FhirResource *to_modify = res;
		FhirResource *subresource = GetSubResource(arena, res, path, false);
		if (subresource) {
			to_modify = subresource;
		}
    
		FhirResource *resource = PushArray(arena, FhirResource, 1);
		resource->name = Str8FromFhirPath(arena, FhirPathFromString8(arena, elem_def->id));
		resource->sub_resources = PushArray(arena, FhirResourceList, 1);
		ResourceListPush(arena, to_modify->sub_resources, resource);
    
		ResourceMember *member = ResourceMemberFromElementDefinition(arena, elem_def);
		String8 class_type_name = ClassNameFromResourceName(arena, elem_def->id);
    
		String8List member_value_types = { 0 };
		Str8ListPush(arena, &member_value_types, class_type_name);
		member->value_types = member_value_types;
    
		RMListPush(arena, &to_modify->members, member);
	}

	////////////////////////////
	// Inherited 
	local_function bool
	ResourceHasInherited(FhirResource *res, String8 resource_name)
	{
		String8Node *ptr = res->inherits.first;
		for (int i = 0; i < res->inherits.node_count; i++)
		{
			if (Str8Match(resource_name, ptr->string, 0)) {
				return true;
			}
			ptr = ptr->next;
		}
		return false;
	}

	local_function void
	ResourceAddInherited(Arena *arena, FhirResource *res, String8 resource_name)
	{
//		Resource *to_modify = res;
		//Resource *subresource = GetSubResource(arena, res, path, false);
		if (ResourceHasInherited(res, resource_name)) {
			// NOTE(alex): we have already indicated that a resource depends on another, continue;
			return;
			//ResourceAddInherited(arena, subresource, FhirPathWithoutFront(arena, path), resource_name);
		}
    
		String8 copy = PushStr8Copy(arena, resource_name);
		Str8ListPush(arena, &res->inherits, copy);
	}

	FhirResource*
	ResourceFromStructureDefinition(Arena *arena, StructureDefinition* def)
	{
		Temp scratch = ScratchBegin(&arena, 1);
		for (int i = 0; i < ArrayCount(value_type_meta); i++)
		{
			for (int j = 0; j < ArrayCount(value_type_meta[i].fhir_names); j++)
			{
				if (Str8Match(def->type, value_type_meta[i].fhir_names[j], 0))
				{
					ScratchEnd(scratch);
					return nullptr;
				}
			}
		}
    
		FhirResource *result = PushArray(arena, FhirResource, 1);
		result->name = Str8FromFhirPath(arena, def->id);
		result->sub_resources = PushStruct(arena, FhirResourceList);
    
		for (int i = 0; i < def->elements.count; i++) {
			ElementDefinition elem = def->elements.v[i];

			if (Str8Match(elem.id, def->type, 0)) continue;
			if (elem.base_path.parts.node_count == 0) continue;
        
			#if 0
			String8 base_path = elem.base_path.parts.first->string;
			String8 def_id_base = def->id.parts.first->string;
			bool is_interited_element = !Str8Match(base_path, def_id_base, 0);
			if (is_interited_element &&
				!GetSubResource(arena, result, FhirPathFromString8(scratch.arena, elem.id), true)) {

				ResourceAddInherited(arena, result, elem.path, base_path);
				continue;
			}
   #endif

   // TODO(agw): this is temporary and should be changed ASAP to be properly handled
   if (elem.value_types.node_count >= 1)
   {
    String8 str = elem.value_types.first->string;
    if (Str8Match(str, Str8Lit("Base"), 0))
    {
     continue;
    }
   }
        
			if (ElementDefinitionIsResource(&elem)) {
				ResourceAddSubResource(arena, result, elem.path, &elem);
				continue;
			}
        
			// Regular element definition describing something...
			// could resource or sub resource
			String8 member_name = FhirPathFinalPart(arena, elem.path);
        
			ResourceMember *member = ResourceMemberFromElementDefinition(arena, &elem);
			ResourceAddMemberOrSubresourceMember(arena, result, elem.path, member);
		}
    
		ScratchEnd(scratch);
		return result;
	}

};