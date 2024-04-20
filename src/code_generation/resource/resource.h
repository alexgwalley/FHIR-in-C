#ifndef NF_RESOURCE_H
#define NF_RESOURCE_H

namespace native_fhir
{

	void
	RMListPush(Arena *arena, ResourceMemberList *list, ResourceMember *member)
	{
		ResourceMemberNode *node = PushArray(arena, ResourceMemberNode, 1);
		node->member = *member;
    
		QueuePush(list->first, list->last, node);
		list->count += 1;
	}

	void
	ResourceListPush(Arena *arena, FhirResourceList *list, FhirResource *resource)
	{
		ResourceNode *node = PushArray(arena, ResourceNode, 1);
		node->resource = *resource;
    
		QueuePush(list->first, list->last, node);
		list->count += 1;
	}

	FhirResource*
	ResourceFromStructureDefinition(Arena *arena, StructureDefinition* def);

};
#endif