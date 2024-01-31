#ifndef THREADING_H
#define THREADING_H
#include "arena.h"

#ifdef __GNUC__
#define per_thread __thread
#elif defined(_MSC_VER)
# define per_thread __declspec(thread)
#elif __STDC_VERSION__ >= 201112L
# define per_thread _Thread_local
#endif
typedef struct ThreadCtx ThreadCtx;
struct ThreadCtx
{
	Arena *scratch_arenas[2];
	char *file_name;
	U64 line_number;
	U8 thread_name[64];
	U64 thread_name_size;
	B32 is_main_thread;
	//Arena *log_arena;
};

ThreadCtx ThreadCtxAlloc(void);
void ThreadCtxRelease(ThreadCtx *tctx);

Temp
ScratchBegin(Arena **conflicts, U64 conflict_count);

#endif