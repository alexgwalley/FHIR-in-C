#ifndef BITFIELD_H
#define BITFIELD_H
// TODO(agw): this is dependent on metadata
#define BIT_FIELD_COUNT 3
struct BitField 
{
	U64 values[BIT_FIELD_COUNT];
};

inline bool BitField_GetIndex(BitField *bf, size_t index);
inline void BitField_SetIndex(BitField *bf, size_t index);
inline void BitField_ResetIndex(BitField *bf, size_t index);

#endif