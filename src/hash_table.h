#ifndef NF_HASH_TABLE_H
#define NF_HASH_TABLE_H

struct HashTableEntry
{
	String8 value;
	String8 key;
};

struct HashTable
{
	U64 count;
	HashTableEntry *entries;
	U64 mod;
};

#endif