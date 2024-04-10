#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <csetjmp>

//////////////////
// ~ ANTLR - Parsing
#define ANTLR4CPP_STATIC
#include "antlr4-runtime.h"
#include "generated/fhirpathLexer.h"
#include "generated/fhirpathParser.h"
#include "generated/fhirpathBaseVisitor.h"

#include "generated/fhirpathLexer.cpp"
#include "generated/fhirpathParser.cpp"
#include "generated/fhirpathBaseVisitor.cpp"


//////////////////
// ~ ARROW - Parquet Gen
#include <arrow/api.h>
#include <arrow/io/api.h>
#include <parquet/arrow/reader.h>
#include <parquet/arrow/writer.h>
#include <parquet/exception.h>


//////////////////
// ~ OURS
#include "native_fhir_inc.h"
#include "execution/number.h"

#include "fhir_r4_types.h"
#include "generated/fhir_class_definitions.h"
#include "generated/fhir_class_metadata.h"

#include "fhir_path.h"
#include "manual_deserialization.h"
#include "native_deserializer.h"
#include "execution/path_execution.h"
#include "fhir_class/fhir_class.h"
#include "fhir_path_visitor.h"

#include "native_fhir_inc.cc"
#include "fhir_path_visitor.cc"


// TODO(agw): this should go in an include header
extern "C"
{
	__declspec(dllexport) void __cdecl ND_Init(int num_contexts);
	__declspec(dllexport) void __cdecl ND_Cleanup(void);
	__declspec(dllexport) ND_ContextNode* __cdecl ND_DeserializeFile(const char* file_name, Resource **out);
	__declspec(dllexport) ND_ContextNode* __cdecl ND_DeserializeString(char* bytes, size_t length, Resource **out);
	__declspec(dllexport) void __cdecl ND_FreeContext(ND_ContextNode *node);
	__declspec(dllexport) const native_fhir::MemberNameAndOffset* NF_ClassMemberLookup(ResourceType resourceType, String8 member_name);
	__declspec(dllexport) const native_fhir::ResourceNameTypePair * __cdecl NF_ResourceNameTypePairFromString8(String8 str); 
}

#include "execution/path_execution.cc"

using namespace native_fhir;
using namespace nf_fhir_r4;
using namespace antlr4;

MetadataFile *g_meta_file;

nf_fhir_r4::Resource nil_resource = {};

//////////////////
// ARROW PARQUET TEST
std::shared_ptr<arrow::Table> generate_table() {
 arrow::Int64Builder i64builder;

 PARQUET_THROW_NOT_OK(i64builder.AppendValues({1, 2, 3, 4, 5}));


 std::shared_ptr<arrow::Array> i64array;
 PARQUET_THROW_NOT_OK(i64builder.Finish(&i64array));

 arrow::StringBuilder strbuilder;
 PARQUET_THROW_NOT_OK(strbuilder.Append("some"));
 PARQUET_THROW_NOT_OK(strbuilder.Append("string"));
 PARQUET_THROW_NOT_OK(strbuilder.Append("content"));
 PARQUET_THROW_NOT_OK(strbuilder.Append("in"));
 PARQUET_THROW_NOT_OK(strbuilder.Append("rows"));

 std::shared_ptr<arrow::Array> strarray;
 PARQUET_THROW_NOT_OK(strbuilder.Finish(&strarray));

 std::shared_ptr<arrow::Schema> schema = arrow::schema(
  {arrow::field("int", arrow::int64()), arrow::field("str", arrow::utf8())});

 return arrow::Table::Make(schema, {i64array, strarray});
}

Piece*
Antlr_ParseExpression(String8 str)
{
 ANTLRInputStream input((const char*)str.str, str.size);
 fhirpathLexer lexer(&input);
 CommonTokenStream tokens(&lexer);
 fhirpathParser parser(&tokens);

 native_fhir::FhirPathVisitor visitor; 
 fhirpathParser::EntireExpressionContext* entireExpression = parser.entireExpression();
 std::any visit_result = visitor.visitEntireExpression(entireExpression);
 Piece* root = std::any_cast < Piece* > (visit_result);
 return root;
}

// builders
// append data
// make schema
// make table

// write table to file



//////////////////
// ~ Printing
void
PrintIndent(int indent)
{
	for (int i = 0; i < indent; i++)
	{
		printf(" ");
	}
}

void
PrintISO8601_Time(ISO8601_Time time)
{
	if (time.precision >= Precision::Year) { printf("%04d", time.year); }
	if (time.precision >= Precision::Month) { printf("-%02d", time.month); }
	if (time.precision >= Precision::Day) { printf("-%02d", time.day); }
	if (time.precision >= Precision::Hour) { printf(":%02d", time.hour); }
	if (time.precision >= Precision::Minute) { printf(":%02d", time.minute); }
	if (time.precision >= Precision::Second) { printf(":%02d", time.second); }
	if (time.precision >= Precision::Millisecond) { printf(":%03d", time.millisecond); }

 if (time.timezone_char) { printf("%c", time.timezone_char); }

	if (time.precision >= Precision::TimezoneHour)   { printf("%02d", time.timezone_hour); }
	if (time.precision >= Precision::TimezoneMinute) { printf(":%02d", time.timezone_minute); }
}

void PrintSingleResourceMember(nf_fhir_r4::Resource *resource, int indent);

void
PrintResourceMember(nf_fhir_r4::Resource *resource,
                    SerializedClassMemberMetadata *mem,
                    SerializedValueTypeAndName tan,
                    int indent)
{
  String8 mem_name = M_GetStringFromHandle(g_meta_file, mem->name);
  switch (tan.type)
  {
   case ValueType::ClassReference:
   {
    nf_fhir_r4::Resource* child = DEREF_STRUCT(resource, mem->offset, nf_fhir_r4::Resource);
    if (child)
    {
     PrintIndent(indent + 1);
     printf("%.*s\n", PRINT_STR8(mem_name));
    }
    PrintSingleResourceMember(child, indent+2);
   } break;
   case VALUE_TYPE_STRING_CASES:
   case ValueType::Decimal:
    {
     NullableString8 str = DEREF_VALUE(resource, mem->offset, NullableString8);
     if (str.has_value)
     {
      PrintIndent(indent);
      printf(" - %10.*s: %.*s\n", PRINT_STR8(mem_name), PRINT_STR8(str));
     }
    } break;
   case ValueType::Boolean:
   {
    NullableBoolean b_value = DEREF_VALUE(resource, mem->offset, NullableBoolean);
    if (b_value.has_value)
    {
     PrintIndent(indent);
     if (b_value.value) { printf("true\n"); }
     else { printf("false\n"); }
    }
   } break;

   case VALUE_TYPE_TIME_CASES:
   {
    ISO8601_Time time = DEREF_VALUE(resource, mem->offset, ISO8601_Time);
    if (time.precision != Precision::Unknown)
    {
     printf(" - %10.*s: ", PRINT_STR8(mem_name));
     PrintIndent(indent);
     PrintISO8601_Time(time);
     printf("\n");
    }
   } break;
  }
}

void
PrintIndexedResourceMember(nf_fhir_r4::Resource *resource,
                    SerializedClassMemberMetadata *mem,
                    SerializedValueTypeAndName tan,
                    int indent,
                    int index)
{
  String8 mem_name = M_GetStringFromHandle(g_meta_file, mem->name);
  switch (tan.type)
  {
   case ValueType::ClassReference:
   {
    nf_fhir_r4::Resource** resources = DEREF_STRUCT_ARRAY(resource, mem->offset, nf_fhir_r4::Resource);
    nf_fhir_r4::Resource* child = resources[index];
    if (child)
    {
     PrintIndent(indent + 1);
     printf("%.*s\n", PRINT_STR8(mem_name));
    }
    PrintSingleResourceMember(child, indent+2);
   } break;
   case VALUE_TYPE_STRING_CASES:
   case ValueType::Decimal:
    {
     NullableString8* strs = DEREF_VALUE_ARRAY(resource, mem->offset, NullableString8);
     NullableString8 str = strs[index];
     if (str.has_value)
     {
      PrintIndent(indent);
      printf(" - %10.*s: %.*s\n", PRINT_STR8(mem_name), PRINT_STR8(str));
     }
    } break;
   case ValueType::Boolean:
   {
    NullableBoolean* bools = DEREF_VALUE_ARRAY(resource, mem->offset, NullableBoolean);
    NullableBoolean b_value = bools[index];
    if (b_value.has_value)
    {
     PrintIndent(indent);
     if (b_value.value) { printf("true\n"); }
     else { printf("false\n"); }
    }
   } break;

   case VALUE_TYPE_TIME_CASES:
   {
    ISO8601_Time* times = DEREF_VALUE_ARRAY(resource, mem->offset, ISO8601_Time);
    ISO8601_Time time = times[index];
    if (time.precision != Precision::Unknown)
    {
     printf(" - %10.*s: ", PRINT_STR8(mem_name));
     PrintIndent(indent);
     PrintISO8601_Time(time);
     printf("\n");
    }
   } break;
  }
}

void
PrintSingleResourceMember(nf_fhir_r4::Resource *resource, int indent)
{
	if (!resource) return;

	SerializedClassMetadata *meta = M_GetClassMetadata(g_meta_file, (int)resource->resourceType);
	String8 meta_name = M_GetStringFromHandle(g_meta_file, meta->name);

	PrintIndent(indent);
	printf("%.*s\n", PRINT_STR8(meta_name));

	for (int i = 0; i < meta->members_count; i++)
	{
		SerializedClassMemberMetadata *mem = M_GetClassMemberMetadata(meta, i);
		switch (mem->cardinality)
		{
   case Cardinality::ZeroToOne:
   case Cardinality::OneToOne:
   {
    if (mem->type == ClassMemberType::Single)
    {
     SerializedValueTypeAndName tan = M_GetClassMemberType(mem, 0);
     PrintResourceMember(resource, mem, tan, indent);
    } else if (mem->type == ClassMemberType::Union)
    {
     SerializedClassMemberMetadata *enum_mem = M_GetClassMemberMetadata(meta, i + 1);

     U32 type_index = DEREF_VALUE(resource, enum_mem->offset, U32);

     SerializedValueTypeAndName tan = M_GetClassMemberType(mem, type_index);
     PrintResourceMember(resource, mem, tan, indent);
    }
			} break;
   case Cardinality::OneToInf:
   case Cardinality::ZeroToInf:
   {
    if (mem->type == ClassMemberType::Single)
    {
     SerializedClassMemberMetadata *count_mem = M_GetClassMemberMetadata(meta, i - 1);
     size_t count = DEREF_COUNT(resource, count_mem->offset);
     for (int j = 0; j < count; j++)
     {
      printf("[%d]: ", j);
      SerializedValueTypeAndName tan = M_GetClassMemberType(mem, 0);
      PrintIndexedResourceMember(resource, mem, tan, indent, j);
     }
    }
   } break;
		}
	}
}

void
PrintCollection(Collection col)
{
	printf("Collection: -----------------\n\n");
	TimeFunction;
	for (CollectionEntryNode *node = col.first; !IsNilCollectionEntryNode(node); node = node->next)
	{
		switch (node->v.type)
		{
			case EntryType::Resource:
			{
				PrintSingleResourceMember(node->v.resource, 0);
			} break;
			case EntryType::String:
			{
				PrintIndent(0);
				printf("%.*s\n", PRINT_STR8(node->v.str));
			} break;
			case EntryType::Number:
			{
				switch (node->v.number.type)
				{
					case Number_Integer:
					{
						printf("%lld\n", node->v.number.s64);
					} break;
					case Number_Decimal:
					{
						Temp temp = ScratchBegin(0, 0);
						String8 str = Str8FromDecimal(temp.arena, node->v.number.decimal);
						printf("%.*s\n", PRINT_STR8(str));
						ScratchEnd(temp);
					} break;
				}
			} break;
			case EntryType::Boolean:
			{
				if (node->v.b) { printf("true\n"); }
				else { printf("false\n"); }
			} break;
			case EntryType::Iso8601:
			{
				PrintISO8601_Time(node->v.time);
				printf("\n");
			} break;
		}

  printf("\n\n");
	}

	printf("\n--------------------------------\n");
	printf("Collection Count: %llu\n", col.count);
}

ND_ContextNode*
DeserializeFile(const char* fn, nf_fhir_r4::Resource** res)
{
	TimeFunction;
	return ND_DeserializeFile((char*)fn, res);
}

typedef struct ColumnDef ColumnDef;
struct ColumnDef
{
 String8 full_path;
 String8 name;
};

typedef struct ColumnNode ColumnNode;
struct ColumnNode
{
 ColumnNode* next;
 ColumnDef v;
};

typedef struct ColumnList ColumnList;
struct ColumnList
{
 ColumnNode* first;
 ColumnNode* last;
 size_t count;
};

ColumnList
ParseViewDefinitions(Arena* arena)
{
 nf_fhir_r4::Resource *res;
 ND_ContextNode *ctx_node = ND_DeserializeFile("C:\\Users\\awalley\\Code\\FHIR-in-C\\fhir_path\\view_definitions.json", &res);

 ColumnList list = {};

 Assert(res->resourceType == ResourceType::Bundle);
 nf_fhir_r4::Bundle *bundle = (nf_fhir_r4::Bundle *)res;

 for (int i = 0; i < bundle->_entry_count; i++)
 {
  nf_fhir_r4::Bundle_Entry *entry = bundle->_entry[i];
  if (entry->_resource == NULL || entry->_resource->resourceType != ResourceType::ViewDefinition)
  {
   continue;
  }

  nf_fhir_r4::ViewDefinition *vd = (nf_fhir_r4::ViewDefinition *)entry->_resource;
  NullableString8 resource_name = vd->_resource;

  for (int j = 0; j < vd->_where_count; j++)
  {
   nf_fhir_r4::ViewDefinition_Where *where = vd->_where[j];
  }

  // TODO(agw): this is recursive...
  for (int j = 0; j < vd->_select_count; j++)
  {
   nf_fhir_r4::ViewDefinition_Select *select = vd->_select[j];
   NullableString8 forEach = select->_forEach;

   for (int k = 0; k < select->_column_count; k++)
   {
    nf_fhir_r4::ViewDefinition_Select_Column *column = select->_column[k];
    NullableString8 name = column->_name;
    NullableString8 path = column->_path;

    // Full Path: Bundle.entry.resource.ofType({resource_name}).{path}
    ColumnDef def = {};
    if (forEach.has_value)
    {
     def.full_path = PushStr8F(arena, "Bundle.entry.resource.ofType(%S).%S.%S", resource_name.str8, forEach.str8, path.str8);
    }
    else
    {
     def.full_path = PushStr8F(arena, "Bundle.entry.resource.ofType(%S).%S", resource_name.str8, path.str8);
    }

    def.name = PushStr8Copy(arena, name.str8);
    ColumnNode *node = PushStruct(arena, ColumnNode);
    node->v = def;

    QueuePush(list.first, list.last, node);
    list.count++;
   }

  }

 }

 ND_FreeContext(ctx_node);

 return list;
}

void
ExecuteViewDefinitions(ColumnList list, FP_ExecutionContext *context)
{
 for (ColumnNode *node = list.first; node; node = node->next)
 {
  Temp temp = ScratchBegin(0, 0);
  String8 path_expr = node->v.full_path;
  Piece* piece = Antlr_ParseExpression(path_expr);
  context->root_node = piece;
  Collection col = ExecutePieces(temp.arena, context);
  PrintCollection(col);
  ScratchEnd(temp);
 }
}

int 
main(void)
{
 /////////////////// 
 // Setup
	OS_Init();
	ThreadCtx tctx = ThreadCtxAlloc();
	tctx.is_main_thread = 1;
	SetThreadCtx(&tctx);

	// TODO(agw): this needs to be a chained arena...
	Arena *meta_arena = ArenaAlloc(Megabytes(64));
	MetadataFile file = M_Deserialize(meta_arena, &g_metadata, ArrayCount(g_metadata));
	g_meta_file = PushStruct(meta_arena, MetadataFile);
	MemoryCopy(g_meta_file, &file, sizeof(MetadataFile));

 
 /////////////////// 
 // Parse Expression
	String8 expr = Str8Lit("Bundle.entry.exists() and Bundle.entry.empty()");

 ND_Init(1);

 /////////////////// 
 // Execute Expression
	FP_ExecutionContext context = { 0 };
	context.arena = ArenaAlloc(Gigabytes(1));
 context.entry_stack_first = context.entry_stack_last = &nil_entry_node;
 context.meta_file = g_meta_file;

 Temp temp = ScratchBegin(0, 0);
 FileEntries entries = OS_EnumerateDirectory(temp.arena, Str8Lit("C:/Users/awalley/Code/FHIR-in-C/bundles/*")); 

 context.resources = PushArray(temp.arena, nf_fhir_r4::Resource*, entries.count);
 context.res_count = entries.count;

 for (int i = 0; i < entries.count; i++)
 {
  context.resources[i] = &nil_resource;
 }

 ND_ContextList resource_contexts = {};

 for (int i = 0; i < entries.count; i++)
 {
  FileEntry entry = entries.v[i];
  if (Str8Match(Str8Lit("."), entry.file_name, 0) ||
      Str8Match(Str8Lit(".."), entry.file_name, 0))
  {
   continue;
  }

  String8 full_name = PushStr8F(temp.arena, "C:/Users/awalley/Code/FHIR-in-C/bundles/%S", entry.file_name);
  ND_ContextNode* deserializer_context = DeserializeFile((char*)full_name.str, (Resource**) &context.resources[i]);

  QueuePush(resource_contexts.first, resource_contexts.last, deserializer_context);
  resource_contexts.count++;
 }



 if (setjmp(context.error_buf) != 0)
 {
  if (context.error_message.size > 0)
  {
   printf("ERROR: %.*s\n", PRINT_STR8(context.error_message));
  }
 }

 ColumnList column_list = ParseViewDefinitions(meta_arena);
 ExecuteViewDefinitions(column_list, &context);

	char line[4096];
	Assert(expr.size < sizeof(line));
	MemoryCopy(&line, expr.str, expr.size);
	line[expr.size] = '\0';

	while (true)
	{
		if (setjmp(context.error_buf) != 0)
		{
			if (context.error_message.size > 0)
			{
				printf("ERROR: %.*s\n", PRINT_STR8(context.error_message));
			}
			fgets(&line[0], ArrayCount(line), stdin);
		}

		String8 line_str = Str8C(line);

		ArenaPopTo(context.arena, 0);
  context.entry_stack_first = context.entry_stack_last = &nil_entry_node;
  context.meta_file = g_meta_file;

		BeginProfile();

		Piece *tok = Antlr_ParseExpression(line_str);
		context.root_node = tok;

		Collection collection = ExecutePieces(context.arena, &context);

		PrintCollection(collection);

		EndAndPrintProfile();

		double gb2 = context.arena->commit_pos / (double)Gigabytes(1);
		printf("context arena: %f GB\n", gb2);

		fgets(&line[0], ArrayCount(line), stdin);
	}

	ND_Cleanup();
 ScratchEnd(temp);

	return 0;
}