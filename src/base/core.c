
Rng1U64 R1U64(U64 min, U64 max)
{
 Rng1U64 result = { min, max };
 if(result.max < result.min)
 {
  Swap(U64, result.min, result.max);
 }
 return result;
}

////////////////////////////////
//~ rjf: Scratch Memory
per_thread ThreadCtx *tl_tctx = 0;

no_name_mangle void
SetThreadCtx(ThreadCtx *tctx)
{
 tl_tctx = tctx;
}

no_name_mangle ThreadCtx *
GetThreadCtx(void)
{
 return tl_tctx;
}

void*
ReadEntireFile(Arena *arena, String8 file_name)
{
	FILE *f = fopen((const char*)file_name.str, "r");
	if (!f) return NULL;

	fseek(f,  0, SEEK_END);
	long length = ftell(f);
	void *result = ArenaPush(arena, length);
	fseek(f, 0, SEEK_SET);
    
	fread(result, length, 1, f);
	fclose(f);
	return result;
}
