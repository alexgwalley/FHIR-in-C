#ifndef ISO8601_Time_H
#define ISO8601_Time_H

enum Precision : U8 {
    Year,
    Month,
    Day,
    Hour,
    Minute,
    Second,
    Millisecond,
    TimezoneMinute,
    TimezoneSecond,
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
	uint16_t millisecond;
    Precision precision;
	uint8_t reserved[3];
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

#endif