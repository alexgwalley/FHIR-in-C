U64
HashFromString(String8 string)
{
	U64 result = 87019979;
	for(U64 i = 0; i < string.size; i += 1)
	{
		result = ((result << 5) + result) + string.str[i];
	}

	return result;
}

void
HashTable_Add(HashTable *table, String8 key, String8 data)
{
	U64 hash = HashFromString(key);
	U64 entry_index = hash % table->mod;
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
	U64 hash = HashFromString(key);
    
	U64 entry_index = hash % table->mod;

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
	U64 hash = HashFromString(key);
    
	U64 entry_index = hash % table->mod;
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
