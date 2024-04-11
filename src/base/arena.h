#ifndef ARENA_H 
#define ARENA_H
#include "core.h"

////////////////////////////////
//~ rjf: Constants

#define ARENA_HEADER_SIZE 128

#if !defined(ARENA_COMMIT_GRANULARITY)
#define ARENA_COMMIT_GRANULARITY Kilobytes(4)
#endif

#if !defined(ARENA_DECOMMIT_THRESHOLD)
#define ARENA_DECOMMIT_THRESHOLD Kilobytes(64)
#endif

void OS_Init();
void * OS_Reserve(U64 size);
void * OS_Reserve_At_Location(U64 size, void* loc);
void OS_Release(void *ptr, U64 size);
void OS_Commit(void *ptr, U64 size);
void OS_Decommit(void *ptr, U64 size);
U64 OS_PageSize(void);

#if !defined(ArenaImpl_Reserve)
# define ArenaImpl_Reserve  OS_Reserve
#endif
#if !defined(ArenaImpl_Reserve_At_Location)
# define ArenaImpl_Reserve_At_Location  OS_Reserve_At_Location
#endif
#if !defined(ArenaImpl_Release)
# define ArenaImpl_Release  OS_Release
#endif
#if !defined(ArenaImpl_Commit)
# define ArenaImpl_Commit   OS_Commit
#endif
#if !defined(ArenaImpl_Decommit)
# define ArenaImpl_Decommit OS_Decommit
#endif

#if !defined(ThreadCtxImpl_SetThreadName)
# define ThreadCtxImpl_SetThreadName OS_SetThreadName
#endif

////////////////////////////////
//~ rjf: Arena Allocator Types

typedef struct Arena Arena;
struct Arena
{
 Arena *prev;
 Arena *current;
 U64 pos;
 U64 commit_pos;
 U64 base_pos;
 U64 align;
 U64 reserve_size;
 Arena *ptr;
 U64 _unused_[1];
};

typedef struct Temp Temp;
struct Temp
{
 Arena *arena;
 U64 pos;
};

////////////////////////////////
//~ rjf: Arena Functions

Arena *ArenaAlloc(U64 size);
Arena *ArenaAllocDefault(void);
void ArenaRelease(Arena *arena);
void *ArenaPushNoZero(Arena *arena, U64 size);
void *ArenaPushAligner(Arena *arena, U64 alignment);
void *ArenaPush(Arena *arena, U64 size);
void ArenaPopTo(Arena *arena, U64 pos);
void ArenaSetAutoAlign(Arena *arena, U64 align);
void ArenaPop(Arena *arena, U64 size);
void ArenaClear(Arena *arena);
U64 ArenaPos(Arena *arena);

#define PushArrayNoZero(arena, type, count) (type *)ArenaPushNoZero((arena), sizeof(type)*(count))
#define PushArray(arena, type, count)       (type *)ArenaPush((arena), sizeof(type)*(count))
#define PushStruct(arena, type)				PushArray(arena, type, 1)
#define PushStructNoZero(arena, type)		PushArrayNoZero(arena, type, 1)

////////////////////////////////
//~ rjf: Arena Temp Functions

Temp TempBegin(Arena *arena);
void TempEnd(Temp temp);

#define ScratchEnd(temp) TempEnd(temp)
#define ArenaTempBlock(arena, name) Temp name = {0}; DeferLoop(name = TempBegin(arena), TempEnd(name))

#endif // ARENA_H 
