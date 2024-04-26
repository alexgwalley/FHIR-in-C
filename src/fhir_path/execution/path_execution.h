#ifndef COLLECTION_H
#define COLLECTION_H

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
		Extension,
		GetResourceKey,
  GetReferenceKey,
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
		{ Str8LitComp("join"),    Function::Join },
		{ Str8LitComp("extension"),         Function::Extension },
		{ Str8LitComp("getResourceKey"),    Function::GetResourceKey },
		{ Str8LitComp("getReferenceKey"),   Function::GetReferenceKey },
	};


enum class EmptyBool
{
 True,
 False,
 Empty
};

// ~ Execution

CollectionEntryNode nil_entry_node = { 0 };

typedef struct FP_ExecutionContext FP_ExecutionContext;
struct FP_ExecutionContext
{
 // NOTE(agw): this is only meant to hold info needed
 // to report errors. Generated collections
 // will store their data in another arena (typically)
	Arena *arena;

 int res_count;
	FHIR_VERSION::Resource **resources;
	Piece *root_node;

	MetadataFile *meta_file;

	CollectionEntryNode *entry_stack_first;
	CollectionEntryNode *entry_stack_last;

	CollectionEntry *free_entry_first;
	CollectionEntry *free_entry_last;

 std::unordered_map<std::string, Constant> constants;

 U64 unique_id;
 std::unordered_map<std::string, U64> unique_ids;
 // From unique id -> resource type
 std::unordered_map<U64, FHIR_VERSION::ResourceType> resource_types;

	String8 error_message;

 void ZeroOut()
 {
  entry_stack_first = entry_stack_last = 0;
  meta_file = g_meta_file;
  ArenaPopTo(arena, 0);
 }

 void Set(size_t num_resources, FHIR_VERSION::Resource** resources, Piece *node)
 {
  this->ZeroOut();
  res_count = num_resources;
  this->resources = resources;
  root_node = node;
 }


};

};
#endif