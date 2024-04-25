namespace native_fhir
{

/* REGEX for FHIR version
([0-9]([0-9]([0-9][1-9]|[1-9]0)|[1-9]00)|[1-9]000)(-(0[1-9]|1[0-2])(-(0[1-9]|[1-2][0-9]|3[0-1])
	(T([01][0-9]|2[0-3]):[0-5][0-9]:([0-5][0-9]|60)(\.[0-9]{1,9})?)?)?(Z|(\+|-)((0[0-9]|1[0-3]):[0-
	5][0-9]|14:00)?)?)?
*/

inline int
CharToInt(char c)
{
	return c - '0';
}

ISO8601_Time
Deserialize_ISO8601_Impl(String8 str,
                         U32 required,
                         U32 optional,
                         U32 exclude)
{
	ISO8601_Time time = { 0 };
	char* ptr = (char*)str.str;

	if (required & ISO_YEAR)
	{
		Assert(str.size > 0);

		////////////////////////
		// YEAR
		time.year += (U8)CharToInt(*ptr) * 1000;
		ptr++;
		time.year += (U8)CharToInt(*ptr) * 100;
		ptr++;
		time.year += (U8)CharToInt(*ptr) * 10;
		ptr++;
		time.year += (U8)CharToInt(*ptr);
		ptr++;

		time.precision = Precision::Year;
    
		if ((U8*)ptr - (U8*)str.str >= (ptrdiff_t)str.size)
		{
			if (required & ISO_MONTH || required & ISO_DAY)
			{
				// TODO(agw): ERROR
			}
			return time;
		}

		Assert(*ptr == '-');
		ptr++;
    
		////////////////////////
		// MONTH 
		time.month += (U8)CharToInt(*ptr) * 10;
		ptr++;
		time.month += (U8)CharToInt(*ptr);
		ptr++;
		time.precision = Precision::Month;
    
		if (ptr - (char*)str.str >= (ptrdiff_t)str.size)
		{
			if (required & ISO_DAY)
			{
				// TODO(agw): ERROR
			}
			return time;
		}
    
		// TODO(agw): this is _technically_ optional
		Assert(*ptr == '-');
		ptr++;
    
		////////////////////////
		// DAY 
		time.day += (U8)CharToInt(*ptr) * 10;
		ptr++;
		time.day += (U8)CharToInt(*ptr);
		ptr++;
		time.precision = Precision::Day;

		if (ptr - (char*)str.str >= (ptrdiff_t)str.size)
		{
			if (required & ISO_TIME)
			{
				// TODO(agw): ERROR
			}
			return time;
		}

		Assert(*ptr == 'T');
		ptr++;
	}

	if (required & ISO_TIME || optional & ISO_TIME)
	{
		if (optional & ISO_TIME)
		{
			if (ptr - (char*)str.str == (ptrdiff_t)str.size)
				return time;
		}

		// NOTE(agw): should have HH:MM:SS <- 8 chars
		Assert(ptr - (char*)str.str >= 8);

		////////////////////////
		// HOUR 
		time.hour += (U8)CharToInt(*ptr) * 10;
		ptr++;
		time.hour += (U8)CharToInt(*ptr);
		ptr++;
		Assert(time.hour >= 0 && time.hour <= 23);
        
		time.precision = Precision::Hour;
        
		Assert(*ptr == ':');
		ptr++;

		////////////////////////
		// MINUTE 
		time.minute += (U8)CharToInt(*ptr) * 10;
		ptr++;
		time.minute += (U8)CharToInt(*ptr);
		ptr++;
		Assert(time.minute >= 0 && time.minute < 60);

		time.precision = Precision::Minute;

		Assert(*ptr == ':');
		ptr++;
    
		////////////////////////
		// SECOND
		time.second += (U8)CharToInt(*ptr) * 10;
		ptr++;
		time.second += (U8)CharToInt(*ptr);
		ptr++;
		Assert(time.second >= 0 && time.second < 60);

		time.precision = Precision::Second;

		////////////////////////
		// MILLISECOND

		if (required & ISO_MILLISECOND || (optional & ISO_MILLISECOND && *ptr == '.'))
		{
			//.sss
			Assert(ptr - (char*)str.str >= 4);
			Assert(*ptr == '.');
			ptr++;

   ////////////////////////
   // SECOND
   int num_digits = 0;
   while (CharIsDigit(*ptr) && num_digits <= 9)
   {
    time.millisecond *= 10;
    time.millisecond += (U8)CharToInt(*ptr);
    ptr++;
    num_digits++;
   }

			time.precision = Precision::Millisecond;
		}

		if (exclude & ISO_TIME_OFFSET)
		{
			Assert(ptr - (char*)str.str >= (ptrdiff_t)str.size);
		}

		if (!(required & ISO_TIME_OFFSET) && !(optional & ISO_TIME_OFFSET))
		{
			return time;
		}
        
		char offset_char = *ptr;
		ptr++;

		time.timezone_char = offset_char;

		if (offset_char == 'Z')
		{
			Assert(ptr - (char*)str.str >= (ptrdiff_t)str.size);
			return time;
		}

		// NOTE(agw): should have MM:SS <- 5 chars
		Assert(ptr - (char*)str.str >= 5);

		////////////////////////
		// TIMEZONE_MINUTE 
		time.timezone_hour += (U8)CharToInt(*ptr) * 10;
		ptr++;
		time.timezone_hour += (U8)CharToInt(*ptr);
		ptr++;
		Assert(time.timezone_hour >= 0 && time.timezone_hour < 60);

		time.precision = Precision::TimezoneHour;

		Assert(*ptr == ':');
		ptr++;

		////////////////////////
		// TIMEZONE_SECOND
		time.timezone_minute += (U8)CharToInt(*ptr) * 10;
		ptr++;
		time.timezone_minute += (U8)CharToInt(*ptr);
		ptr++;
		Assert(time.timezone_minute >= 0 && time.timezone_minute < 60);
		time.precision = Precision::TimezoneMinute;

		Assert(ptr - (char*)str.str >= (ptrdiff_t)str.size);
	}

	return time;
}

};