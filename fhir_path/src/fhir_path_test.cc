#include <stdio.h>

#include "base/base_inc.h"
#include "fhir_class_definitions.h"

#include "manual_deserialization.h"
#include "native_deserializer.h"
#include "fhir_class_metadata.h"

#include "base/base_inc.cc"
#include "native_deserializer.cc"

namespace fhir_deserialize
{
	#include "generated/gperf-inc.cc"
	#include "resources-gperf.cc"
};

fhir_r4::Resource nil_resource = { };

enum FP_TokenType {
	Piece_Unknown,
	Piece_Plus,
	Piece_Minus,
	Piece_Asterisk,
	Piece_ForwardSlash,
	Piece_Percent,
	Piece_Pipe,
	Piece_Ampersand,
	Piece_Dot,
	Piece_Comma,
	Piece_BackTick,

	Piece_OpenParen,
	Piece_CloseParen,

	Piece_OpenBracket,
	Piece_CloseBracket,

	Piece_Equal,
	Piece_NotEqual,

	Piece_Tilde,
	Piece_NotTilde,

	Piece_Less,
	Piece_LessEqual,
	Piece_Greater,
	Piece_GreaterEqual,


	// NOTE(agw): not sure if we just want to clump all of this together?
	Piece_Word,
	Piece_Date,
	Piece_Number,

	Piece_FunctionInvoke,
};

typedef enum FP_Precedence
{
	P_None,
	P_Implies,
	P_Xor_Or,
	P_And,
	P_In_Contains,
	P_Equal,
	P_Greater,
	P_Pipe,
	P_Is_As,
	P_Plus_Minus_Ampersand,
	P_Mul_Divide,
	P_Unary,
	P_Indexer,
	P_Path,
	P_Dot,
	P_Max
} FP_Precedence;

// ~ Numbers
typedef struct Decimal Decimal;
struct Decimal
{
};

enum NumberType
{
	Number_Unknown,
	Number_Integer,
	Number_Decimal,
};

typedef struct Number Number;
struct Number
{
	NumberType type;
	String8 quantity;

	union
	{
		S32 s32;
		Decimal decimal;
	};
};

// ~ Piece

typedef U32 PieceFlags;
enum
{
	PieceFlag_Negative = (1 << 0),
	PieceFlag_Positive = (1 << 1),
	PieceFlag_IsBackTick = (1 << 2)
};

struct Piece;

typedef struct PieceList PieceList;
struct PieceList
{
	Piece *first;
	Piece *last;
	size_t count;
};

typedef struct Piece Piece;
struct Piece
{
	Piece *next;

	Piece *parent;
	Piece *child[2];

	String8 slice; // Actual value
	String8 name; // Set for function type

	FP_TokenType type;
	PieceFlags flags;

	// ~ If operator
	FP_Precedence precedence;

	// ~ If function
	PieceList params;

	union
	{
		Number num;
	} value;

};

Piece nil_piece = { 0 };
B32
IsNilPiece(Piece* piece)
{
	return piece == NULL || piece == &nil_piece;
}

typedef struct Tokenizer Tokenizer;
struct Tokenizer
{
	Arena *arena;

	U8* pos;
	U8* max_pos;

	Piece* first;
	Piece* last;
	size_t count;
};


typedef struct PrecedenceEntry PrecedenceEntry;
struct PrecedenceEntry
{
	U8 c;
	FP_Precedence prescedence;
	FP_TokenType type;
};

PrecedenceEntry ops[] = {
	{ '.', P_Dot, Piece_Dot },
	{ '+', P_Plus_Minus_Ampersand, Piece_Plus },
	{ '-', P_Plus_Minus_Ampersand, Piece_Minus },
	{ '&', P_Plus_Minus_Ampersand, Piece_Ampersand },

	{ '*', P_Mul_Divide, Piece_Asterisk },
	{ '/', P_Mul_Divide, Piece_ForwardSlash },
	{ '%', P_Mul_Divide, Piece_Percent },

	{ '(', P_None, Piece_OpenParen },
	{ ')', P_None, Piece_CloseParen },
};


typedef U32 GetTokenFlags;
enum
{
	GetPiece_Move = (1 << 0),
};


// ~ Literal Parsing

Number 
ParseNumber(Tokenizer *tokenizer, U32 *offset)
{
	Number ret = { 0 };

	U8* pos = tokenizer->pos;

	// NOTE(agw): assume integer
	S32 val = 0;
	while (CharIsDigit(*pos))
	{
		val *= 10;
		val += (S32)(pos - '0');

		pos++;
		*offset = *offset + 1;
	}

	ret.s32 = val;
	ret.type = Number_Integer;

	return ret;
}

local_function B32
IsBinaryOperator(Piece *tok)
{
	return tok->precedence != P_None;
}

Piece*
GetNextPiece(Tokenizer *tokenizer, GetTokenFlags flags)
{
	Piece *ret = PushStruct(tokenizer->arena, Piece);

	while (CharIsSpace(*tokenizer->pos))
	{
		tokenizer->pos++;
	}

	U32 offset = 0;

	B32 is_binary_op = FALSE;
	for (int i = 0; i < ArrayCount(ops); i++)
	{
		PrecedenceEntry op = ops[i];
		if(*tokenizer->pos == op.c)
		{
			ret->type = op.type;
			ret->precedence = op.prescedence;
			offset++;
			is_binary_op = TRUE;
			break;
		}
	}

	if (!IsBinaryOperator(ret) && ret->type == Piece_Unknown)
	{
		// ~ Try Parse Number
		if (CharIsDigit(*tokenizer->pos))
		{
			Number num = ParseNumber(tokenizer, &offset);
			ret->value.num = num;
			ret->type = Piece_Number;
		}
		// ~ Assume it is an identifier
		else
		{
			U8* pos = tokenizer->pos;

			B32 delim = FALSE;
			if (*pos == '`')
			{
				delim = TRUE;
				pos++;
			}
			else if(*pos != '_' && !CharIsAlpha(*pos)) { Assert(false); }


			while (pos < tokenizer->max_pos)
			{

				if (*pos == '`') { 
					if (delim) break;
					Assert(false); 
				}

				if (!delim && CharIsSymbol(*pos)) break;
				if (!delim && *pos == '(') break;
				if (!delim && *pos == ')') break;

				pos++;
				offset++;
			}

			ret->type = Piece_Word;
			ret->flags |= delim ? PieceFlag_IsBackTick : 0;
		}
	}

	ret->slice = Str8(tokenizer->pos, offset);

	if (flags & GetPiece_Move)
	{
		tokenizer->pos += offset;
	}

	return ret;
}

// ~ Direct Parsing
Piece* _ParseExpression(Tokenizer *tokenizer, FP_Precedence min_prec);

void
TokenizerAdvanceByPiece(Tokenizer *tokenizer, Piece* piece)
{
	tokenizer->pos += piece->slice.size;
}



Piece*
MakeBinary(Piece *left, Piece *mid, Piece *right)
{
	mid->child[0] = left;
	mid->child[1] = right;
	return mid;
}



PieceList
ParseParamList(Tokenizer *tokenizer, size_t *offset)
{
	PieceList list = { 0 };

	U8* start_pos = tokenizer->pos;
	while (true)
	{
		Piece *expr = _ParseExpression(tokenizer, P_None);
		if (expr->type == Piece_CloseParen) break;

		QueuePush(list.first, list.last, expr);
		list.count++;

		if (*tokenizer->pos != ',') break;
	}

	Piece* next = GetNextPiece(tokenizer, 0);
	Assert(next->type == Piece_CloseParen);
	TokenizerAdvanceByPiece(tokenizer, next);

	*offset = tokenizer->pos - start_pos;
	return list;
}

Piece *
ParseIncreasingPrecedence(Tokenizer *tokenizer, Piece *left, FP_Precedence min_prec)
{
	// ~ Do a couple of checks on next token...
	Piece *next = GetNextPiece(tokenizer, 0);

	if (!IsBinaryOperator(next)) { return left; }
	if ((S32)next->precedence <= (S32)min_prec) { return left; }

	// ~ If it works for us, eat it
	GetNextPiece(tokenizer, GetPiece_Move);

	Piece *right = _ParseExpression(tokenizer, next->precedence);
	Piece *ret = MakeBinary(left, next, right);
	return ret;
}

Piece*
_ParseExpression(Tokenizer *tokenizer, FP_Precedence _min_prec)
{
	FP_Precedence min_prec = _min_prec;
	Piece *left = GetNextPiece(tokenizer, GetPiece_Move);

	// ~ Deal with leading parens
	if (left->type == Piece_OpenParen)
	{
		left = GetNextPiece(tokenizer, GetPiece_Move);
		min_prec = P_None; // Reset precedence
	}

	while (true)
	{
		Piece *node = ParseIncreasingPrecedence(tokenizer, left, min_prec);
		if (node == left)
		{
			Piece *next = GetNextPiece(tokenizer, 0);
			if (next->type == Piece_OpenParen)
			{
				TokenizerAdvanceByPiece(tokenizer, next);

				// Here we know we are expecting a function
				if(left->type == Piece_Word)
				{
					size_t offset = 0;
					PieceList list = ParseParamList(tokenizer, &offset);
					node->type = Piece_FunctionInvoke;
					node->params = list;
					node->name = node->slice;

					// NOTE(agw): +1 for the open param
					node->slice.size += offset + 1;
				}
				else break; // Otherwise we are just starting a new expression
			} 
			else if (next->type == Piece_CloseParen)
			{
				// we are done this expression
				TokenizerAdvanceByPiece(tokenizer, next);
				return left;
			} else break;
		}

		left = node;
 }

	return left;
}

Piece*
ParseExpression(Tokenizer *tokenizer)
{
	Piece *tok = _ParseExpression(tokenizer, P_None);
	return tok;
}
using namespace fhir_r4;

// ~ Execution
enum EntryType
{
	FP_Entry_Unknown,
	FP_Entry_Resource,
	FP_Entry_String,
	FP_Entry_Number,
};

typedef struct CollectionEntry CollectionEntry;
struct CollectionEntry
{
	CollectionEntry *next;
	EntryType type;

	union
	{
		fhir_r4::Resource *resource;
		NullableString8 str;
		Number number;
	};
};

typedef struct Collection Collection;
struct Collection
{
	CollectionEntry *first;
	CollectionEntry *last;
	size_t count;
};

typedef struct FP_ExecutionContext FP_ExecutionContext;
struct FP_ExecutionContext
{
	Arena *arena;
	Resource *base_res;
	Piece *root_node;

	CollectionEntry *free_entry_first;
	CollectionEntry *free_entry_last;
};

CollectionEntry*
PushCollectionEntry(Arena *arena)
{
	CollectionEntry *ret = PushStruct(arena, CollectionEntry);
	ret->resource = &nil_resource;
	return ret;
}

B32
IsNilCollectionEntry(CollectionEntry *entry)
{
	return entry == NULL;
}


void
CollectionPushEntry(Collection *collection, CollectionEntry *entry)
{
	QueuePush(collection->first, collection->last, entry);
	collection->count++;
}

CollectionEntry*
GetCollectionEntry(FP_ExecutionContext *context)
{
	CollectionEntry *ret = 0;
	if (!IsNilCollectionEntry(context->free_entry_first))
	{
		ret = context->free_entry_first;
		QueuePop(context->free_entry_first, context->free_entry_last);
		MemorySet(ret, 0, sizeof(CollectionEntry));
	}
	else 
	{
		ret = PushCollectionEntry(context->arena);
	}

	return ret;
}

// NOTE(agw): make the tree easily iterable
void
UpdateNextPieces(Piece* piece, Piece *parent)
{
	if (IsNilPiece(piece)) return;
	piece->parent = parent;

	UpdateNextPieces(piece->child[0], piece);

	piece->next = piece->child[1];

	B32 is_left = parent->child[0] == piece;
	if (is_left)
	{
		piece->next = parent;
 }
	else
	{
		piece->next = parent->parent;
	}

	UpdateNextPieces(piece->child[1], piece);
}


Collection
GetResourcesOfType(FP_ExecutionContext *context, ResourceType type)
{
	Collection ret = { 0 };

	if(context->base_res->resourceType == type)
	{
		CollectionEntry *entry = PushCollectionEntry(context->arena);
		entry->resource = context->base_res;

		CollectionPushEntry(&ret, entry);
	}

	return ret;
}

inline void*
PushResource(Arena *arena, ResourceType type)
{
	return ArenaPush(arena, fhir_deserialize::g_class_metadata[(int)type].size);
}

Collection
GetMembersFromCollection(FP_ExecutionContext *context, Collection collection, String8 member_name)
{
	Collection ret = { 0 };

	for (CollectionEntry *entry = collection.first; !IsNilCollectionEntry(entry);
	entry = entry->next)
	{
		// TODO(agw): this could go in the dll
		// TODO(agw): this needs to use same namespace
		const fhir_deserialize::MemberNameAndOffset *mem = ClassMemberLookup((fhir_deserialize::ResourceType) entry->resource->resourceType, member_name);
		Assert(mem);

		fhir_deserialize::ClassMetadata *class_meta = &fhir_deserialize::g_class_metadata[(size_t)entry->resource->resourceType];
		fhir_deserialize::ClassMemberMetadata *member_meta = &class_meta->members[mem->member_index];

//		fhir_deserialize::ClassMemberMetadata *meta = &fhir_deserialize::g_class_metadata->members[mem->member_index];
		void* mem_ptr = (U8*)entry->resource + mem->offset;
		
		// ~ Single Cardinality
		if (mem->cardinality == fhir_deserialize::Cardinality::ZeroToOne ||
			mem->cardinality == fhir_deserialize::Cardinality::OneToOne)
		{
			// ~ Non-union
			if (member_meta->type == fhir_deserialize::ClassMemberType::Single)
			{
				fhir_deserialize::ValueType value_type = member_meta->types[0].type;
				CollectionEntry *ent = GetCollectionEntry(context);
				switch (value_type)
				{
					case fhir_deserialize::ValueType::ClassReference:
					{
						fhir_r4::Resource* ptr = (fhir_r4::Resource*)mem_ptr;
						ent->resource = ptr;
						ent->type = FP_Entry_Resource;
					} break;

					case fhir_deserialize::ValueType::String:
					{
						NullableString8 str = *(NullableString8*)mem_ptr;
						if (str.has_value)
						{
							ent->str = str;
							ent->type = FP_Entry_String;
						}
					} break;

					default: Assert(false); // TODO(agw): fill out all types
				}

				if (ent->type != FP_Entry_Unknown)
				{
					CollectionPushEntry(&ret, ent);
				}
				else
				{
					Assert(false); // TODO(agw): free entry
				}
			}
			// ~ Union Type
			else if (member_meta->type == fhir_deserialize::ClassMemberType::Union)
			{
				Assert(false);
			}
		}
		else if (mem->cardinality == fhir_deserialize::Cardinality::ZeroToInf ||
			mem->cardinality == fhir_deserialize::Cardinality::OneToInf)
		{

			// ~ Non-union
			if (member_meta->type == fhir_deserialize::ClassMemberType::Single)
			{
				fhir_deserialize::ValueType value_type = member_meta->types[0].type;
				fhir_deserialize::ClassMemberMetadata *count_meta = &class_meta->members[mem->member_index - 1];
				size_t count = *(size_t*)((U8*)entry->resource + count_meta->offset);
				switch (value_type)
				{
					case fhir_deserialize::ValueType::ClassReference:
					{
						fhir_r4::Resource** resources = *(fhir_r4::Resource***)mem_ptr;
						for (int i = 0; i < count; i++)
						{
							CollectionEntry* ent = GetCollectionEntry(context);
							ent->resource = resources[i];
							CollectionPushEntry(&ret, ent);
						}
					} break;
					case fhir_deserialize::ValueType::String:
					{
							NullableString8* strings = *(NullableString8**)mem_ptr;
							for (int i = 0; i < count; i++)
							{
								CollectionEntry* ent = GetCollectionEntry(context);
								NullableString8 str = strings[i];
								ent->str = str;
								ent->type = FP_Entry_String;
								CollectionPushEntry(&ret, ent);
							}
					} break;

					default: Assert(false); // TODO(agw): fill out all types
				}

			}
		}
	}

	return ret;
}

Collection
ExecutePieces(FP_ExecutionContext* context)
{
	Collection ret = { 0 };
	UpdateNextPieces(context->root_node, &nil_piece);

	Piece* node = context->root_node;

	while (!IsNilPiece(node->child[0]))
	{
		node = node->child[0];
	}

	while (!IsNilPiece(node))
	{
		Collection next_ret = { 0 };
		switch (node->type)
		{
			case Piece_Word:
			{
				const fhir_deserialize::ResourceNameTypePair *pair = fhir_deserialize::Perfect_Hash::in_word_set((char*)node->slice.str, node->slice.size);
				B32 valid_resource_name = pair != NULL;
				if (valid_resource_name)
				{
					next_ret = GetResourcesOfType(context, (ResourceType)pair->type);
				}
			} break;
			case Piece_Dot:
			{
				if (node->child[1]->type != Piece_FunctionInvoke)
				{
					String8 member_name = node->child[1]->slice;
					next_ret = GetMembersFromCollection(context, ret, member_name);
				}
				else
				{
					String8 func_name = node->child[1]->name;
					if (FindSubstr8(func_name, Str8Lit("count"), 0, 0) != func_name.size)
					{
						CollectionEntry *ent = GetCollectionEntry(context);
						ent->number = { 0 };
						ent->number.type = Number_Integer;
						ent->number.s32 = ret.count;

						next_ret.first = ent;
						next_ret.last = ent;
						next_ret.count;
					}
				}

			} break;

		}

		// TODO(agw): push all of ret's to free list
		ret = next_ret;
		node = node->next;
	}

	return ret;
}


int main()
{
	OS_Init();
	if (!ND_Init()) return -1;

	ThreadCtx tctx = ThreadCtxAlloc();
	tctx.is_main_thread = 1;
	SetThreadCtx(&tctx);

	Arena *arena = ArenaAlloc(Gigabytes(2));

	void* patient = ReadEntireFile(arena, Str8Lit("patient.json"));
	String8 str = PackStr8_64(arena, Str8C((char*)patient));


	Patient *res = 0;
	ND_ContextNode* node = ND_DeserializeString(str, (Resource**)&res);

	String8 expr = Str8Lit("Patient.name.given");

	Tokenizer tokenizer = { 0 };
	tokenizer.pos = expr.str;
	tokenizer.max_pos = expr.str + expr.size;
	tokenizer.arena = ArenaAlloc(Gigabytes(8));

	Piece *tok = ParseExpression(&tokenizer);

	FP_ExecutionContext context = { 0 };
	context.arena = ArenaAlloc(Gigabytes(1));
	context.base_res = (Resource*)res;
	context.root_node = tok;

	Collection collection = ExecutePieces(&context);

	printf("hello\n");
	return 0;
}