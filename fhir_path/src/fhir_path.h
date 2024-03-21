#ifndef NF_FHIR_PATH_H
#define NF_FHIR_PATH_H

#define FP_AssertAll(cond, context, msg, _break) if (!(cond)) { (context)->error_message = msg; if ((_break)) { OS_DebugBreak; } longjmp((context)->error_buf, -1); }

#define NotImplemented OS_DebugBreak
#define FP_Assert(cond, context, msg) FP_AssertAll(cond, context, msg, 0)

namespace native_fhir
{

	enum FP_PieceType {
		Piece_Unknown,
		Piece_Plus,
		Piece_Minus,
		Piece_Asterisk,
		Piece_ForwardSlash,
		Piece_Percent,
		Piece_Union,
		Piece_Ampersand,
		Piece_Dot,
		Piece_Comma,
		Piece_BackTick,

		Piece_OpenParen,
		Piece_CloseParen,

		Piece_OpenBracket,
		Piece_CloseBracket,

		Piece_EqualCompare,
		Piece_Is,
		Piece_As,

		Piece_QuantityCompare,
		Piece_Less,
		Piece_LessEqual,
		Piece_Greater,
		Piece_GreaterEqual,


		// NOTE(agw): not sure if we just want to clump all of this together?
		Piece_Literal,
		Piece_String,
		Piece_Date,
		Piece_Number,

		Piece_FunctionInvoke,
		Piece_FunctionParameter,
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
		String8 unit;

		union
		{
			S64 s64;
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

	typedef U32 CompareTypeFlags;
	enum
	{
		CompareType_Unknown,
		CompareType_Negate,
		CompareType_Equal,
		CompareType_Equivalent,
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

		// TODO(agw): should describe function names
		// should describe parameter name
		String8 name;
		// TODO(agw): Should describe parameter value
		//	String8 value; // Set for function param

		FP_PieceType type;

		PieceMetadata meta;

		PieceFlags flags;

		// ~ If operator
		FP_Precedence precedence;

		// ~ If function
		PieceList params;

		union
		{
			Number num;
			NullableString8 str;
			ISO8601_Time time;
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

		size_t parens_depth;

		Piece* first;
		Piece* last;
		size_t count;

		String8 error_message;
		jmp_buf error_buf;
	};


	typedef struct PrecedenceEntry PrecedenceEntry;
	struct PrecedenceEntry
	{
		String8 c;
		FP_Precedence prescedence;
		FP_PieceType type;
		PieceMetadata meta;
	};

};
#endif