#ifndef COLLECTION_H
#define COLLECTION_H

using namespace native_fhir::nf_fhir_r4;
namespace native_fhir
{

	// NOTE(agw): make sure to update the functions table
	enum Function
	{
		Unknown,
		First,
		Last,
		Tail,
		Single,
		Count,
		Empty,
		Exists,
		Skip,
		Take,
		Select,
		Where,
		OfType,
		Not,
		Join,
		Function_Count,
	};

	struct FunctionAndName
	{
		String8 name;
		Function func;
	};

	FunctionAndName pe_functions[] = 
	{
		{ Str8LitComp("Unknown"), Function::Unknown },
		{ Str8LitComp("first"),   Function::First },
		{ Str8LitComp("last"),    Function::Last },
		{ Str8LitComp("tail"),    Function::Tail },
		{ Str8LitComp("single"),  Function::Single },
		{ Str8LitComp("count"),   Function::Count },
		{ Str8LitComp("empty"),   Function::Empty },
		{ Str8LitComp("exists"),  Function::Exists },
		{ Str8LitComp("skip"),    Function::Skip },
		{ Str8LitComp("take"),    Function::Take },
		{ Str8LitComp("select"),  Function::Select },
		{ Str8LitComp("where"),   Function::Where },
		{ Str8LitComp("ofType"),  Function::OfType },
		{ Str8LitComp("not"),     Function::Not },
		{ Str8LitComp("join"),    Function::Join }
	};


enum class EmptyBool
{
 True,
 False,
 Empty
};

// ~ Execution
enum class EntryType
{
	Unknown,
	Resource,
	Boolean,
	ResourceType,
	String,
	Number,
	Iso8601,
};

typedef struct CollectionEntry CollectionEntry;
struct CollectionEntry
{
	EntryType type;

	union
	{
		nf_fhir_r4::Resource *resource;
		nf_fhir_r4::ResourceType resource_type;
		NullableString8 str;
		ISO8601_Time time;
		Number number;
		B32 b;
	};
};

typedef struct CollectionEntryNode CollectionEntryNode;
struct CollectionEntryNode
{
	CollectionEntryNode *next;
	CollectionEntryNode *prev;
	CollectionEntry v;
};

typedef struct Collection Collection;
struct Collection
{
	CollectionEntryNode *first;
	CollectionEntryNode *last;
	S64 count;
};

typedef struct FP_ExecutionContext FP_ExecutionContext;
struct FP_ExecutionContext
{
	Arena *arena;

 int res_count;
	nf_fhir_r4::Resource **resources;
	Piece *root_node;

	MetadataFile *meta_file;

	CollectionEntryNode *entry_stack_first;
	CollectionEntryNode *entry_stack_last;

	CollectionEntry *free_entry_first;
	CollectionEntry *free_entry_last;

	jmp_buf error_buf;
	String8 error_message;
};

};
#endif