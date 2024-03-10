
ND_State nd_state = {0};

B32
ND_Init()
{
	#if _WIN32
	HMODULE dllHandle = LoadLibrary("deserialization_dll");

	if (dllHandle == NULL)
	{
		printf("could not find dll\n");
		return false;
	}

	nd_state.init = (_ND_Init)GetProcAddress(dllHandle, "ND_Init");
	if (nd_state.init == NULL)
	{ 
		printf("could not find dll_init\n");
		return false;
	}

	nd_state.end = (_ND_End)GetProcAddress(dllHandle, "ND_Cleanup");
	if (nd_state.end == NULL)
	{
		printf("could not find dll_init\n");
		return false;
	}

	nd_state.deserialize_file = (_ND_Deserialize_File)GetProcAddress(dllHandle, "ND_DeserializeFile");
	if (nd_state.deserialize_file == NULL)
	{
		printf("could not find deserialize_file_ptr\n");
		return false;
	}

	nd_state.deserialize_string = (_ND_Deserialize_String)GetProcAddress(dllHandle, "ND_DeserializeString");
	if (nd_state.deserialize_string == NULL)
	{
		printf("could not find deserialize_file_ptr\n");
		return false;
	}

	nd_state.free_context = (_ND_FreeContext)GetProcAddress(dllHandle, "ND_FreeContext");
	if (nd_state.free_context == NULL)
	{
		printf("could not find free_context_ptr\n");
		return false;
	}

	nd_state.init(1);

	return true;
	#endif
	return false;
}

// NOTE(agw): this is a poor helper function to pack a string to use in SIMDJSON
String8
PackStr8_64(Arena *arena, String8 str)
{
	void* bytes = ArenaPushNoZero(arena, str.size + 64);
	MemorySet((U8*)bytes + str.size, 0, 64);
	memcpy(bytes, str.str, str.size);
	return Str8((U8*)bytes, str.size + 64);
}

ND_ContextNode*
ND_DeserializeString(String8 str, fhir_r4::Resource **res)
{
	void *context = nd_state.deserialize_string((char*)str.str, str.size, res);
	return (ND_ContextNode*)context;
}
