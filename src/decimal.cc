#ifdef USE_R128
namespace native_fhir
{

	Decimal 
	DecimalFromString(String8 str)
	{
		char* end = 0;
		Decimal ret = { 0 };
		r128FromString(&ret.v, (char*)str.str, &end);

		U8* pos = str.str;
		U8* end_ptr = pos + str.size;
		B32 is_decimal = FALSE;
		int num_after_period = 0;
		while ((CharIsDigit(*pos) || *pos == '.') && pos < end_ptr)
		{
			pos++;
			if (is_decimal && CharIsDigit(*pos)) num_after_period++;

			if (*pos == '.')
			{
				if (is_decimal)
				{
					Assert(false);
				}
				else
				{
					is_decimal = TRUE;
				}
			}

		}

		ret.precision = num_after_period;

		return ret;
	}

	String8
	Str8FromDecimal(Arena *arena, Decimal decimal)
	{
		String8 str = { 0 };
		int size = 48;
		str.str = (U8*)ArenaPush(arena, size);
		str.size = size;

		R128ToStringFormat format = { 0 };
		format.precision = decimal.precision;

		r128ToStringOpt((char*)str.str, str.size, &decimal.v, &format);

		return str;
	}


	int
	DecimalCompare(Decimal a, Decimal b)
	{
		return r128Cmp(&a.v, &b.v);
	}

	B32 
	DecimalEqual(Decimal a, Decimal b)
	{
   return a.v.lo == b.v.lo && a.v.hi == b.v.hi;
	}


};
#endif