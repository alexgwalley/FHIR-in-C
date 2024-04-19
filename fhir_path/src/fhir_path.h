#ifndef NF_FHIR_PATH_H
#define NF_FHIR_PATH_H

#define FP_AssertAll(cond, context, msg, _break) if (!(cond)) { (context)->error_message = msg; if ((_break)) { OS_DebugBreak; } throw -1; }

#define NotImplemented OS_DebugBreak
#define FP_Assert(cond, context, msg) FP_AssertAll(cond, context, msg, 0)

namespace native_fhir
{

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

 // NOTE(agw): I am upset this has to be here...
 // I believe it is because Number uses operator overloading (?)
 CollectionEntry() {}

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

typedef struct CollectionNode CollectionNode;
struct CollectionNode
{
 CollectionNode *next;
 Collection v;
};

typedef struct CollectionList CollectionList;
struct CollectionList
{
 CollectionNode *first;
 CollectionNode *last;
 int count;
};

 struct Constant
 {
  ValueType type;
  String8 name;
  CollectionEntry v;
 };

	enum PieceType {
		Piece_Unknown,
		Piece_Plus,
		Piece_Minus,
		Piece_Multiply,
		Piece_Union,
		Piece_Ampersand,
		Piece_Dot,

  Piece_And,
  Piece_Or,
  Piece_Not,

		Piece_EqualCompare,
		Piece_Is,
		Piece_As,

		Piece_QuantityCompare,
		Piece_Less,
		Piece_LessEqual,
		Piece_Greater,
		Piece_GreaterEqual,

		Piece_Literal,
		Piece_String,
		Piece_Date,
		Piece_Number,
  Piece_Boolean,

  Piece_Divide,
  Piece_Mod,

  Piece_Polarity_Negative,
  Piece_Polarity_Positive,

  // Invocations
  Piece_MemberInvocation,
		Piece_FunctionInvocation,
  Piece_ThisInvocation,

  Piece_Index,

  Piece_Identifier,

		Piece_FunctionParameter,

  Piece_Constant
	};

	typedef U32 PieceFlags;
	enum
	{
		PieceFlag_Negative = (1 << 0),
		PieceFlag_Positive = (1 << 1),
		PieceFlag_IsBackTick = (1 << 2)
	};

	typedef U32 CompareTypeFlags;
	enum
	{
		CompareType_Unknown,
		CompareType_Negate = (1 << 0),
		CompareType_Equal = (1 << 1),
		CompareType_Equivalent = (1 << 2),
	};

	typedef U32 QuantityCompareFlags;
	enum
	{
		QuantityCompare_Equal = (1 << 0),
		QuantityCompare_Less = (1 << 1),
		QuantityCompare_Greater = (1 << 2),
	};

	union PieceMetadata
	{
		CompareTypeFlags equal_compare_data;
		QuantityCompareFlags quantity_compare_data;
	};

	struct Piece;
	typedef struct PieceNode PieceNode;
	struct PieceNode
	{
		PieceNode *next;
		Piece *v;
	};

	typedef struct PieceList PieceList;
	struct PieceList
	{
		PieceNode *first;
		PieceNode *last;
		size_t count;
	};

	typedef struct Piece Piece;
	struct Piece
	{
		Piece *next;
		Piece *prev;

		Piece *parent;
		Piece *child[2];

		String8 slice; // Full string contents

		// TODO(agw): Should describe parameter value
		//	String8 value; // Set for function param

		PieceType type;

		PieceMetadata meta;

		PieceFlags flags;

		// ~ If function
		PieceList params;

		union
		{
			Number num;
			NullableString8 str;
			ISO8601_Time time;
   B32 b;
		} value;
	};

	Piece nil_piece = { 0 };
	B32
	IsNilPiece(Piece* piece)
	{
		return piece == NULL || piece == &nil_piece;
	}


 Piece* Antlr_ParseExpression(String8 str);

};
#endif