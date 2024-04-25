#include "arena.h"

U64 _page_size = 0;

void
OS_Init()
{
 _page_size = OS_PageSize();
}

#if defined(_MSC_VER)
#include <windows.h>

void *
OS_Reserve(U64 size)
{
 U64 gb_snapped_size = size;
 gb_snapped_size += Gigabytes(1) - 1;
 gb_snapped_size -= gb_snapped_size % Gigabytes(1);
 void *ptr = VirtualAlloc(0, gb_snapped_size, MEM_RESERVE, PAGE_NOACCESS);
 return ptr;
}

void *
OS_Reserve_At_Location(U64 size, void* loc)
{
 U64 gb_snapped_size = size;
 gb_snapped_size += Gigabytes(1) - 1;
 gb_snapped_size -= gb_snapped_size % Gigabytes(1);
 void *ptr = VirtualAlloc(loc, gb_snapped_size, MEM_RESERVE, PAGE_NOACCESS);
 return ptr;
}

void
OS_Release(void *ptr, U64 size)
{
 VirtualFree(ptr, size, MEM_RELEASE);
}

void
OS_Commit(void *ptr, U64 size)
{
 U64 page_snapped_size = size;
 page_snapped_size += _page_size - 1;
 page_snapped_size -= page_snapped_size % _page_size;
 VirtualAlloc(ptr, page_snapped_size, MEM_COMMIT, PAGE_READWRITE);
}

void
OS_Decommit(void *ptr, U64 size)
{
 VirtualFree(ptr, size, MEM_DECOMMIT);
}

U64
OS_PageSize(void)
{
 if (_page_size == 0)
 {
  SYSTEM_INFO info;
  GetSystemInfo(&info);
  _page_size = info.dwPageSize;
 }
 return _page_size;
}
#else
#include <sys/mman.h>
#include <unistd.h>


void *
OS_Reserve(U64 size)
{
 U64 gb_snapped_size = size;
 gb_snapped_size += Gigabytes(1) - 1;
 gb_snapped_size -= gb_snapped_size % Gigabytes(1);
 void *ptr = mmap(0,
                  gb_snapped_size,
                  PROT_NONE,
                  MAP_ANONYMOUS | MAP_PRIVATE,
                  0, 0);
 return ptr;
}

void
OS_Release(void *ptr, U64 size)
{
 munmap(ptr, size);
}

void
OS_Commit(void *ptr, U64 size)
{
 U64 page_snapped_size = size;
 page_snapped_size += OS_PageSize() - 1;
 page_snapped_size -= page_snapped_size % OS_PageSize();
 // NOTE(agw): I belive to commit to mmap'ed memory you just write to it?
 // I cannot find a similar setup to VirtualAlloc(COMMIT)
 // People online said this would work
 mprotect(ptr, page_snapped_size, PROT_READ | PROT_WRITE);
}

void
OS_Decommit(void *ptr, U64 size)
{
 madvise(ptr, size, MADV_DONTNEED);
}

U64
OS_PageSize(void)
{
 if (_page_size == 0)
 {
  _page_size = getpagesize();
 }
 return _page_size;
}
#endif

#if !defined(ArenaImpl_Reserve)
#error ArenaImpl_Reserve must be defined to use base memory.
#endif
#if !defined(ArenaImpl_Release)
#error ArenaImpl_Release must be defined to use base memory.
#endif
#if !defined(ArenaImpl_Commit)
#error ArenaImpl_Commit must be defined to use base memory.
#endif
#if !defined(ArenaImpl_Decommit)
#error ArenaImpl_Decommit must be defined to use base memory.
#endif

////////////////////////////////
//~ rjf: Arena Functions
Arena *
ArenaAllocAtLocation(U64 size, void *loc)
{
 if (_page_size == 0)
  _page_size = OS_PageSize();

 U64 size_roundup_granularity = Megabytes(64);
 size += size_roundup_granularity - 1;
 size -= size % size_roundup_granularity;
 //void *block = ArenaImpl_Reserve_At_Location(size, loc);
 void *block = loc;
 U64 initial_commit_size = ARENA_COMMIT_GRANULARITY;
 Assert(initial_commit_size >= ARENA_HEADER_SIZE);
 ArenaImpl_Commit(block, initial_commit_size);
 Arena *arena = (Arena *)block;
 arena->pos = ARENA_HEADER_SIZE;
 arena->commit_pos = initial_commit_size;
 arena->align = 8;
 arena->reserve_size = size;
 return arena;
}

Arena *
ArenaAlloc(U64 size)
{
 if (_page_size == 0)
  _page_size = OS_PageSize();

 U64 initial_reserve_size = AlignPow2(size, _page_size);

 void *memory = ArenaImpl_Reserve(initial_reserve_size);
 U64 initial_commit_size = AlignPow2(ARENA_COMMIT_GRANULARITY, _page_size);

 Assert(initial_commit_size >= ARENA_HEADER_SIZE);

 ArenaImpl_Commit(memory, initial_commit_size);

 Arena *arena = (Arena *)memory;
 arena->prev = 0;
 arena->current = arena;
 arena->pos = ARENA_HEADER_SIZE;
 arena->commit_pos = initial_commit_size;
 arena->reserve_size = initial_reserve_size;
 arena->base_pos = 0;
 arena->align = 8;
 return arena;
}

Arena *
ArenaAllocDefault(void)
{
 Arena *arena = ArenaAlloc(Gigabytes(8));
 return arena;
}

void
ArenaRelease(Arena *arena)
{
 ArenaImpl_Release(arena, arena->reserve_size);
}

void *
ArenaPushNoZero(Arena *arena, U64 size)
{
 void *result = 0;

 Arena *current = arena->current;
 U64 mem_pos = AlignPow2(current->pos, arena->align);
 U64 new_pos = mem_pos + size;

 if (new_pos > current->reserve_size)
 {
  Arena *new_arena;
  if (size < Megabytes(64))
  {
   new_arena = ArenaAlloc(Megabytes(64));
  }
  else
  {
   U64 new_arena_size = size + ARENA_HEADER_SIZE;
   new_arena = ArenaAlloc(new_arena_size);
  }

  if (new_arena)
  {
   new_arena->base_pos = current->base_pos + current->reserve_size;
   SLLStackPush_N(arena->current, new_arena, prev);

   current = new_arena;
   mem_pos = AlignPow2(current->pos, current->align);
   new_pos = mem_pos + size;
  }

 }

 if (current->commit_pos < new_pos)
 {
  U64 cmt_new_aligned = AlignPow2(new_pos, ARENA_COMMIT_GRANULARITY);
  U64 cmt_new_clamped = Min(cmt_new_aligned, current->reserve_size);
  U64 cmt_new_size    = cmt_new_clamped - current->commit_pos;
  ArenaImpl_Commit((U8 *)current + current->commit_pos, cmt_new_size);
  arena->commit_pos += cmt_new_size;

  result = (U8*)current + mem_pos;
  current->pos = new_pos;

  /*
  U8* base = (U8*)arena;
  U64 post_align_pos = (arena->pos + (arena->align - 1));
  post_align_pos -= post_align_pos % arena->align;
  U64 align = post_align_pos - arena->pos;
  result = base + arena->pos + align;
  arena->pos += size + align;
  if (arena->commit_pos < arena->pos)
  {
   U64 size_to_commit = arena->pos - arena->commit_pos;
   size_to_commit += ARENA_COMMIT_GRANULARITY - 1;
   size_to_commit -= size_to_commit % ARENA_COMMIT_GRANULARITY;
   ArenaImpl_Commit(base + arena->commit_pos, size_to_commit);
   arena->commit_pos += size_to_commit;
  }
   */
 }
 else
 {
  result = (U8*)current + mem_pos;
  current->pos = new_pos;
 }

 return result;
}

void *
ArenaPushAligner(Arena *arena, U64 alignment)
{
 U64 pos = arena->pos;
 U64 pos_rounded_up = pos + alignment-1;
 pos_rounded_up -= pos_rounded_up % alignment;
 U64 size_to_alloc = pos_rounded_up - pos;
 void *result = 0;
 if (size_to_alloc != 0)
 {
  result = ArenaPushNoZero(arena, size_to_alloc);
 }
 return result;
}

void *
ArenaPush(Arena *arena, U64 size)
{
 void *result = ArenaPushNoZero(arena, size);
 // TODO(rjf): we can avoid the explicit MemoryZero by relying on commit
 // boundaries
 MemorySet(result, 0, size);
 return result;
}

void
ArenaPopTo(Arena *arena, U64 pos)
{
 U64 min_pos = ARENA_HEADER_SIZE;
 U64 new_pos = Max(min_pos, pos);
 arena->pos = new_pos;

 Arena *current = arena->current;
 for (Arena *prev = 0; current->base_pos >= new_pos; current = prev)
 {
  prev = current->prev;
  ArenaImpl_Decommit(current, current->reserve_size);
 }

 Assert(current);
 arena->current = current;
 current->pos = new_pos;

 /*
 U64 pos_aligned_to_commit_chunks = arena->pos + ARENA_COMMIT_GRANULARITY-1;
 pos_aligned_to_commit_chunks -= pos_aligned_to_commit_chunks % ARENA_COMMIT_GRANULARITY;
 if (pos_aligned_to_commit_chunks + ARENA_DECOMMIT_THRESHOLD <= arena->commit_pos)
 {
  U8 *base = (U8 *)arena;
  U64 size_to_decommit = arena->commit_pos - pos_aligned_to_commit_chunks;
  ArenaImpl_Decommit(base + pos_aligned_to_commit_chunks, size_to_decommit);
  arena->commit_pos -= size_to_decommit;
 }
  */
}

void
ArenaSetAutoAlign(Arena *arena, U64 align)
{
 arena->align = align;
}

void
ArenaPop(Arena *arena, U64 size)
{
 U64 min_pos = ARENA_HEADER_SIZE;
 U64 size_to_pop = Min(size, arena->pos);
 U64 new_pos = arena->pos - size_to_pop;
 new_pos = Max(new_pos, min_pos);
 ArenaPopTo(arena, new_pos);
}

void
ArenaClear(Arena *arena)
{
 ArenaPopTo(arena, ARENA_HEADER_SIZE);
}

U64
ArenaPos(Arena *arena)
{
 return arena->pos;
}

U8*
ArenaPosPtr(Arena *arena)
{
 return (U8*)arena + arena->pos;
}

////////////////////////////////
//~ rjf: Arena Temp Functions

Temp
TempBegin(Arena *arena)
{
 Temp temp = { 0 };
 temp.arena = arena;
 temp.pos = arena->pos;
 return temp;
}

void
TempEnd(Temp temp)
{
 ArenaPopTo(temp.arena, temp.pos);
}
