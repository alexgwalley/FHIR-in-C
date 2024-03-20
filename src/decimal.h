#ifndef NF_DECIMAL_H
#define ND_DECIMAL_H

/*
 * This header is meant to be a wrapper around a high-precision 
	* decimal library to support the precision levels needed in FHIR
*/

namespace native_fhir
{

	#ifdef USE_R128

	typedef struct Decimal Decimal;
	struct Decimal
	{
		R128 v;
		// NOTE(agw): number of decimal places after period
		int precision;
	};

	Decimal DecimalFromString(String8 str);
	String8 Str8FromDecimal(Arena *arena, Decimal str);

	// NOTE(agw): returns sign of a-b
	int DecimalCompare(Decimal a, Decimal b);
	B32 DecimalEqual(Decimal a, Decimal b);

	#endif

};

#endif