#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <csetjmp>

//////////////////
// ANTLR
#define ANTLR4CPP_STATIC
#include "antlr/antlr4-runtime.h"
#include "generated/fhirpathLexer.h"
#include "generated/fhirpathParser.h"
#include "generated/fhirpathBaseVisitor.h"

#include "generated/fhirpathLexer.cpp"
#include "generated/fhirpathParser.cpp"
#include "generated/fhirpathBaseVisitor.cpp"

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

#include "native_fhir_inc.cc"

#include "fhir_path_visitor.h"
#include "fhir_path_visitor.cc"

extern "C"
{
	__declspec(dllexport) void __cdecl ND_Init(int num_contexts);
	__declspec(dllexport) void __cdecl ND_Cleanup(void);
	__declspec(dllexport) ND_ContextNode* __cdecl ND_DeserializeFile(const char* file_name, Resource **out);
	__declspec(dllexport) ND_ContextNode* __cdecl ND_DeserializeString(char* bytes, size_t length, Resource **out);
	__declspec(dllexport) void __cdecl ND_FreeContext(ND_ContextNode *node);
	__declspec(dllexport) const native_fhir::MemberNameAndOffset* NF_ClassMemberLookup(ResourceType resourceType, String8 member_name);
	__declspec(dllexport) const ResourceNameTypePair * __cdecl NF_ResourceNameTypePairFromString8(String8 str); 
}

#include "fhir_path.cc"
#include "execution/path_execution.cc"

using namespace native_fhir;
using namespace nf_fhir_r4;
using namespace antlr4;

MetadataFile *g_meta_file;

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
	if (time.precision >= Precision::Year)
	{
		printf("%04d", time.year);
	}
	if (time.precision >= Precision::Month)
	{
		printf("-%02d", time.month);
	}
	if (time.precision >= Precision::Day)
	{
		printf("-%02d", time.day);
	}
	if (time.precision >= Precision::Hour)
	{
		printf(":%02d", time.hour);
	}
	if (time.precision >= Precision::Minute)
	{
		printf(":%02d", time.minute);
	}
	if (time.precision >= Precision::Second)
	{
		printf(":%02d", time.second);
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
				if(mem->type == ClassMemberType::Single)
				{
					SerializedValueTypeAndName mem_type = M_GetClassMemberType(mem, 0);
					String8 mem_name = M_GetStringFromHandle(g_meta_file, mem->name);
					switch (mem_type.type)
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
									printf(" - %.*s: %.*s\n", PRINT_STR8(mem_name), PRINT_STR8(str));
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
								printf(" - %.*s: ", PRINT_STR8(mem_name));
        PrintIndent(indent);
        PrintISO8601_Time(time);
								printf("\n");
							}
						} break;
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
			case FP_Entry_Resource:
			{
				PrintSingleResourceMember(node->v.resource, 0);
			} break;
			case FP_Entry_String:
			{
				PrintIndent(0);
				printf("%.*s\n", PRINT_STR8(node->v.str));
			} break;
			case FP_Entry_Number:
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
			case FP_Entry_Boolean:
			{
				if (node->v.b) { printf("true\n"); }
				else { printf("false\n"); }
			} break;
			case FP_Entry_Iso8601:
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
//	return (ND_ContextNode*)nd_state.DeserializeFile(fn, res);
	return ND_DeserializeFile((char*)fn, res);
}



int 
main(void)
{
 printf("TEsting\n");
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
	Tokenizer tokenizer = { 0 };
	tokenizer.arena = ArenaAlloc(Megabytes(64));

 ND_Init(1);

 /////////////////// 
 // Temp ANTLR Parsing

	Bundle *res = 0;
	ND_ContextNode* deserializer_context = DeserializeFile("C:/Users/awalley/Code/FHIR-in-C/bundles/0d364907-59cd-0c67-dd9a-5f28fd1a8b81.json", (Resource**) & res);

 /////////////////// 
 // Execute Expression

	FP_ExecutionContext context = { 0 };
	context.arena = ArenaAlloc(Gigabytes(1));

	char line[4096];
	Assert(expr.size < sizeof(line));
	MemoryCopy(&line, expr.str, expr.size);
	line[expr.size] = '\0';

	while (true)
	{

		if (setjmp(context.error_buf) != 0 || setjmp(tokenizer.error_buf) != 0)
		{
			if (context.error_message.size > 0)
			{
				printf("ERROR: %.*s\n", PRINT_STR8(context.error_message));
			}
			else
			{
				printf("ERROR: %.*s\n", PRINT_STR8(tokenizer.error_message));
			}
			fgets(&line[0], ArrayCount(line), stdin);
		}

		// ~ Set Default Tokenizer
		String8 line_str = Str8C(line);
		tokenizer.pos = line_str.str;
		tokenizer.max_pos = line_str.str + line_str.size;
		if (line_str.str[line_str.size-1] == '\0') tokenizer.max_pos--;
		context.error_message = { 0 };
		ArenaPopTo(tokenizer.arena, 0);

		ArenaPopTo(context.arena, 0);
  context.base_res = (nf_fhir_r4::Resource*)res;
  context.entry_stack_first = &nil_entry_node;
  context.entry_stack_last = &nil_entry_node;
  context.meta_file = g_meta_file;

		BeginProfile();

		Piece *tok = Antlr_ParseExpression(line_str);
		context.root_node = tok;

		Collection collection = ExecutePieces(context.arena, &context);

		PrintCollection(collection);

		EndAndPrintProfile();

		double gb = tokenizer.arena->commit_pos / (double)Gigabytes(1);
		printf("tokenizer arena: %f GB\n", gb);

		double gb2 = context.arena->commit_pos / (double)Gigabytes(1);
		printf("context arena: %f GB\n", gb2);

		fgets(&line[0], ArrayCount(line), stdin);
	}

	ND_FreeContext(deserializer_context);
	ND_Cleanup();

	return 0;
}