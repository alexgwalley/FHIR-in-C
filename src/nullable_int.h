#ifndef NULLABLE_INT
#define NULLABLE_INT
struct NullableInt
{
	B32 has_value;
	size_t value;
};
#endif