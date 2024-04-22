#ifndef ISO8601_Time_H
#define ISO8601_Time_H

namespace native_fhir
{

 /*

 NOTE(agw): For some reason, second and millisecond
 precisions are equivalent in FHIR Path
 */
	enum class Precision : U8 {
		Unknown = 0,
		Year    = 4,
		Month   = 6,
		Day     = 8,
		Hour    = 10,
		Minute  = 12,
		Second  = 14,
		Millisecond  = 17,
		TimezoneHour = 19,
		TimezoneMinute = 21,
	};

	struct ISO8601_Time
	{
		uint8_t month;
		uint8_t day;
		uint8_t hour;
		// 'T'
		uint8_t minute;
		uint8_t second;
		// 'Z' | '+' | '-'
		char timezone_char;
		uint8_t timezone_hour;
		uint8_t timezone_minute;

		uint16_t year;
		Precision precision;
		Precision min_precision;
		uint32_t millisecond;
	};


	#define ISO_YEAR (1 << 0)
	#define ISO_MONTH (1 << 1)
	#define ISO_DAY (1 << 2)
	#define ISO_MILLISECOND (1 << 3)
	#define ISO_TIME (1 << 4)
	#define ISO_TIME_OFFSET (1 << 5)


	ISO8601_Time
	Deserialize_ISO8601_Impl(String8 str,
	                         U32 required,
	                         U32 optional,
	                         U32 exclude);

};
#endif