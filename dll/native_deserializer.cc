using namespace native_fhir;
using namespace nf_fhir_r4;

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

	nd_state.ClassMemberLookup = (_ND_ClassMemberLookup)GetProcAddress(dllHandle, "NF_ClassMemberLookup");
	if (nd_state.ClassMemberLookup == NULL)
	{ 
		printf("could not find class_member_lookup\n");
		return false;
	}

	nd_state.NF_ResourceNameTypePairFromString8 = (_ND_NF_ResourceNameTypePairFromString8)GetProcAddress(dllHandle, "NF_ResourceNameTypePairFromString8");
	if (nd_state.NF_ResourceNameTypePairFromString8 == NULL)
	{ 
		printf("could not find NF_ResourceNameTypePairFromString8\n");
		return false;
	}

	nd_state.Init = (_ND_Init)GetProcAddress(dllHandle, "ND_Init");
	if (nd_state.Init == NULL)
	{ 
		printf("could not find dll_init\n");
		return false;
	}

	nd_state.Cleanup = (_ND_End)GetProcAddress(dllHandle, "ND_Cleanup");
	if (nd_state.Cleanup == NULL)
	{
		printf("could not find dll_init\n");
		return false;
	}

	nd_state.DeserializeFile = (_ND_Deserialize_File)GetProcAddress(dllHandle, "ND_DeserializeFile");
	if (nd_state.DeserializeFile == NULL)
	{
		printf("could not find deserialize_file_ptr\n");
		return false;
	}

	nd_state.DeserializeString = (_ND_Deserialize_String)GetProcAddress(dllHandle, "ND_DeserializeString");
	if (nd_state.DeserializeString == NULL)
	{
		printf("could not find deserialize_file_ptr\n");
		return false;
	}

	nd_state.FreeContext = (_ND_FreeContext)GetProcAddress(dllHandle, "ND_FreeContext");
	if (nd_state.FreeContext == NULL)
	{
		printf("could not find free_context_ptr\n");
		return false;
	}

	nd_state.Init(1);

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