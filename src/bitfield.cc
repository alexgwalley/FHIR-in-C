
inline bool
BitField_GetIndex(BitField *bf, size_t index)
{
	size_t num_values = ArrayCount(bf->values);
	// TODO(agw): the compiler will probably already do this, 
	// but we could do some special shifting and and'ing rather
	// than these divides and modulo
	size_t value_index = index / SIZE_T_BITS;
	size_t bit_index = index % SIZE_T_BITS;
	size_t bit = (((size_t)1) << bit_index);
	return (bf->values[value_index] & bit) > 0;
}

inline void
BitField_SetIndex(BitField *bf, size_t index)
{
	size_t num_values = ArrayCount(bf->values);
	size_t value_index = index / SIZE_T_BITS;
	size_t bit_index = index % SIZE_T_BITS;
	size_t bit = (((size_t)1) << bit_index);
	bf->values[value_index] |= bit;
}

inline void
BitField_ResetIndex(BitField *bf, size_t index)
{
	size_t num_values = ArrayCount(bf->values);
	size_t value_index = index / SIZE_T_BITS;
	size_t bit_index = index % SIZE_T_BITS;
	size_t bit = (((size_t)1) << bit_index);
	size_t mask = ~bit;
	bf->values[value_index] &= mask;
}