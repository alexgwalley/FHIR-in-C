#ifndef NULLABLE_H
#define NULLABLE_H

struct NullableString8 {
	U8* str;
	U64 size;
	B32 has_value;
};

struct NullableInt32 {
    B32 has_value;
    int32_t value;
};

struct NullableInt64 {
    B32 has_value;
    int64_t value;
};

struct NullableDouble {
    B32 has_value;
    double value;
};

struct NullableBoolean {
    B32 has_value;
    B32 value;
};
#endif