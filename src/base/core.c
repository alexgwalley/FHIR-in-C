
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

