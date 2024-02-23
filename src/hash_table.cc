#include "third_party/meow_hash_x64_aesni.h"
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

U128
HashFromString(String8 string)
{
	U128 hash = { 0 };
	meow_u128 meow_hash = MeowHash(MeowDefaultSeed, string.size, string.str);
	MemoryCopy(&hash, &meow_hash, Min(sizeof(meow_hash), sizeof(hash)));
	return hash;
}

void
HashTable_Add(HashTable *table, String8 key, String8 data)
{
	U128 hash = HashFromString(key);
	U64 entry_index = hash.u64[1] % table->mod;
	if (table->entries[entry_index].key.size != 0)
	{
		U64 start_index = entry_index;
		entry_index = entry_index+1 % table->mod;
		while (start_index != entry_index)
		{
			if (table->entries[entry_index].key.size == 0)
			{
				break;
			}
			entry_index++;
			entry_index %= table->mod;
		}
	}
    
	table->entries[entry_index].value = data;
	table->entries[entry_index].key = key;
}

bool
HashTable_Has(HashTable *table, String8 key)
{
	U128 hash = HashFromString(key);
    
	U64 entry_index = hash.u64[1] % table->mod;

	if (table->entries[entry_index].key.size == 0)
		return false;
    
	if (Str8Match(key, table->entries[entry_index].key, 0))
	{
		return true;
	}
    
	U64 start_index = entry_index;
	entry_index++;
	entry_index %= table->mod;
    
	while (!Str8Match(key, table->entries[entry_index].key, 0) &&
           entry_index != start_index)
	{
		entry_index++;
		entry_index %= table->mod;
	}

	if (entry_index == start_index) return false;
	if (!Str8Match(key, table->entries[entry_index].key, 0))
		return false;
	return true;
}

String8
HashTable_Get(HashTable *table, String8 key)
{
	U128 hash = HashFromString(key);
    
	U64 entry_index = hash.u64[1] % table->mod;
#if 0
	if (table->entries[entry_index].key.size == 0)
		Assert(false);
#endif
    
	if (key.str[0] == table->entries[entry_index].key.str[0] &&
		Str8Match(key, table->entries[entry_index].key, 0))
	{
		return table->entries[entry_index].value;
	}
    
	U64 start_index = entry_index;
	entry_index++;
	entry_index %= table->mod;
    
	while ( !Str8Match(key, table->entries[entry_index].key, 0) &&
           entry_index != start_index)
	{
		entry_index++;
		entry_index %= table->mod;
	}

	Assert(entry_index != start_index);
	Assert(Str8Match(key, table->entries[entry_index].key, 0));
    
	return table->entries[entry_index].value;
}


HashTable
HashTable_Create(Arena *arena, U64 num_entries)
{
	HashTable table = {};
	table.count = num_entries;
	table.entries = PushArray(arena, HashTableEntry,  num_entries);
	table.mod = num_entries-1;
	return table;
}