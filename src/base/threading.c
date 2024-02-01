ThreadCtx
ThreadCtxAlloc(void)
{
	ThreadCtx tctx = {0};
	for(U64 arena_idx = 0; arena_idx < ArrayCount(tctx.scratch_arenas); arena_idx += 1)
	{
		tctx.scratch_arenas[arena_idx] = ArenaAlloc(Gigabytes(8));
	}
	return tctx;
}

void
ThreadCtxRelease(ThreadCtx *tctx)
{
	for(U64 arena_idx = 0; arena_idx < ArrayCount(tctx->scratch_arenas); arena_idx += 1)
	{
		ArenaRelease(tctx->scratch_arenas[arena_idx]);
	}
}

Temp
ScratchBegin(Arena **conflicts, U64 conflict_count)
{
	Temp scratch = {0};
	ThreadCtx *tctx = GetThreadCtx();
	for(U64 tctx_idx = 0; tctx_idx < ArrayCount(tctx->scratch_arenas); tctx_idx += 1)
	{
		B32 is_conflicting = 0;
		for(Arena **conflict = conflicts; conflict < conflicts+conflict_count; conflict += 1)
		{
			if(*conflict == tctx->scratch_arenas[tctx_idx])
			{
				is_conflicting = 1;
				break;
			}
		}

		if(is_conflicting == 0)
		{
			scratch.arena = tctx->scratch_arenas[tctx_idx];
			scratch.pos = scratch.arena->pos;
			break;
		}
	}
	return scratch;
}
