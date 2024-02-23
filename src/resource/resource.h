#ifndef RESOURCE_H
#define RESOURCE_H


enum class Cardinality
{
	Unknown,
	ZeroToZero,
	ZeroToOne,
	ZeroToInf,
	OneToOne,
	OneToInf,
};

String8 cardinality_str[] = {
	Str8Lit("Unknown"),
	Str8Lit("ZeroToZero"),
	Str8Lit("ZeroToOne"),
	Str8Lit("ZeroToInf"),
	Str8Lit("OneToOne"),
	Str8Lit("OneToInf")
};

struct ResourceMember
{
	String8 name;
	String8List value_types;
	String8 content_reference;
	Cardinality cardinality;
};

struct ResourceMemberNode
{
	ResourceMemberNode *next;
	ResourceMember member;
};

struct ResourceMemberList
{
	ResourceMemberNode *first;
	ResourceMemberNode *last;
	U64 count;
};

void
RMListPush(Arena *arena, ResourceMemberList *list, ResourceMember *member)
{
	ResourceMemberNode *node = PushArray(arena, ResourceMemberNode, 1);
	node->member = *member;
    
	QueuePush(list->first, list->last, node);
	list->count += 1;
}

typedef struct ResourceList ResourceList;

typedef struct Resource Resource;
struct Resource
{
	String8 name;
	
	// All unique members of this resource
	ResourceMemberList members;
    
	// Ex. Account_Coverage for Resource "Account"
	ResourceList *sub_resources;
    
	// Ex. DomainResource for Resource "Account"
	String8List inherits;
    
	// Will recursively add a member to interited/sub resources if need be
	void AddMemberOrSubresourceMember(String8 path, ResourceMember member);
	void AddSubResource(String8 path, ElementDefinition* def);
	void AddInherited(String8 path, String8 resource_name);
};

typedef struct ResourceNode ResourceNode;
struct ResourceNode
{
	ResourceNode *next;
	Resource resource;
};

struct ResourceList
{
	ResourceNode *first;
	ResourceNode *last;
	U64 count;
};

void
ResourceListPush(Arena *arena, ResourceList *list, Resource *resource)
{
	ResourceNode *node = PushArray(arena, ResourceNode, 1);
	node->resource = *resource;
    
	QueuePush(list->first, list->last, node);
	list->count += 1;
}

Resource*
ResourceFromStructureDefinition(Arena *arena, StructureDefinition* def);

#endif