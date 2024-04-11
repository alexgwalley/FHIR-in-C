#ifndef CORE_H
#define CORE_H

#include <cinttypes>

#define Bytes(n)      (n)
#define Kilobytes(n)  (n << 10)
#define Megabytes(n)  (n << 20)
#define Gigabytes(n)  (((U64)n) << 30)
#define Terabytes(n)  (((U64)n) << 40)

#define AlignPow2(x,b) (((x) + (b) - 1)&(~((b) - 1)))

#define ArrayCount(a) (sizeof(a) / sizeof((a)[0]))

//- rjf: linked list helpers
//- rjf: linked list helpers

#define CheckNil(nil,p) ((p) == 0 || (p) == nil)
#define SetNil(nil,p) ((p) = nil)

#define CheckNull(p) ((p) == 0)
#define SetNull(p) ((p) = 0)

//- rjf: Base Doubly-Linked-List Macros
#define DLLInsert_NPZ(nil,f,l,p,n,next,prev) (CheckNil(nil,f) ? \
((f) = (l) = (n), SetNil(nil,(n)->next), SetNil(nil,(n)->prev)) :\
CheckNil(nil,p) ? \
((n)->next = (f), (f)->prev = (n), (f) = (n), SetNil(nil,(n)->prev)) :\
((p)==(l)) ? \
((l)->next = (n), (n)->prev = (l), (l) = (n), SetNil(nil, (n)->next)) :\
(((!CheckNil(nil,p) && CheckNil(nil,(p)->next)) ? (0) : ((p)->next->prev = (n))), ((n)->next = (p)->next), ((p)->next = (n)), ((n)->prev = (p))))
#define DLLPushBack_NPZ(nil,f,l,n,next,prev) DLLInsert_NPZ(nil,f,l,l,n,next,prev)
#define DLLPushFront_NPZ(nil,f,l,n,next,prev) DLLInsert_NPZ(nil,l,f,f,n,prev,next)
#define DLLRemove_NPZ(nil,f,l,n,next,prev) (((n) == (f) ? (f) = (n)->next : (0)),\
((n) == (l) ? (l) = (l)->prev : (0)),\
(CheckNil(nil,(n)->prev) ? (0) :\
	((n)->prev->next = (n)->next)),\
(CheckNil(nil,(n)->next) ? (0) :\
	((n)->next->prev = (n)->prev)))


	//- rjf: Doubly-Linked-List Wrappers
	#define DLLInsert_NP(f,l,p,n,next,prev) DLLInsert_NPZ(0,f,l,p,n,next,prev)
	#define DLLPushBack_NP(f,l,n,next,prev) DLLPushBack_NPZ(0,f,l,n,next,prev)
	#define DLLPushFront_NP(f,l,n,next,prev) DLLPushFront_NPZ(0,f,l,n,next,prev)
	#define DLLRemove_NP(f,l,n,next,prev) DLLRemove_NPZ(0,f,l,n,next,prev)
	#define DLLInsert(f,l,p,n) DLLInsert_NPZ(0,f,l,p,n,next,prev)
	#define DLLPushBack(f,l,n) DLLPushBack_NPZ(0,f,l,n,next,prev)
	#define DLLPushFront(f,l,n) DLLPushFront_NPZ(0,f,l,n,next,prev)
	#define DLLRemove(f,l,n) DLLRemove_NPZ(0,f,l,n,next,prev)

	//- rjf: Base Singly-Linked-List Queue Macros
	#define SLLQueuePush_NZ(nil,f,l,n,next) (CheckNil(nil,f)?\
	((f)=(l)=(n),SetNil(nil,(n)->next)):\
	((l)->next=(n),(l)=(n),SetNil(nil,(n)->next)))
	#define SLLQueuePushFront_NZ(nil,f,l,n,next) (CheckNil(nil,f)?\
	((f)=(l)=(n),SetNil(nil,(n)->next)):\
	((n)->next=(f),(f)=(n)))
	#define SLLQueuePop_NZ(nil,f,l,next) ((f)==(l)?\
	(SetNil(nil,f),SetNil(nil,l)):\
	((f)=(f)->next))

	//- rjf: Base Singly-Linked-List Stack Macros
	#define SLLStackPush_N(f,n,next) ((n)->next=(f), (f)=(n))
	#define SLLStackPop_N(f,next) ((f)=(f)->next)
	//- rjf: Singly-Linked-List Queue Wrappers
	#define SLLQueuePush_N(f,l,n,next) SLLQueuePush_NZ(0,f,l,n,next)
	#define SLLQueuePushFront_N(f,l,n,next) SLLQueuePushFront_NZ(0,f,l,n,next)
	#define SLLQueuePop_N(f,l,next) SLLQueuePop_NZ(0,f,l,next)
	#define SLLQueuePush(f,l,n) SLLQueuePush_NZ(0,f,l,n,next)
	#define SLLQueuePushFront(f,l,n) SLLQueuePushFront_NZ(0,f,l,n,next)
	#define SLLQueuePop(f,l) SLLQueuePop_NZ(0,f,l,next)

	//- rjf: Singly-Linked-List Stack Wrappers
	#define SLLStackPush(f,n) SLLStackPush_N(f,n,next)
	#define SLLStackPop(f) SLLStackPop_N(f,next)

	#define QueuePush_NZ(f, l, n, next, zchk, zset) (zchk(f)?\
	(((f) = (l) = (n)), zset((n)->next)):\
	((l)->next = (n), (l) = (n), zset((n)->next)))
	#define QueuePushFront_NZ(f, l, n, next, zchk, zset) (zchk(f) ? (((f) = (l) = (n)), zset((n)->next)) :\
	((n)->next = (f)), ((f) = (n)))
	#define QueuePop_NZ(f, l, next, zset) ((f) == (l)?\
	(zset(f), zset(l)):\
	((f) = (f)->next))

	#define QueuePush(f, l, n)         QueuePush_NZ(f, l, n, next, CheckNull, SetNull)
	#define QueuePushFront(f, l, n)    QueuePushFront_NZ(f, l, n, next, CheckNull, SetNull)
	#define QueuePop(f, l)            QueuePop_NZ(f, l, next, SetNull)

#if defined(_MSC_VER)
#define OS_DebugBreak __debugbreak()
#else
#include <signal.h>
#define OS_DebugBreak raise(SIGTRAP)
#endif


//#ifdef DEBUG
#define Assert(b) do { if(!(b)) { OS_DebugBreak; } } while(0)
//#else
//#define Assert(...)
//#endif

#define Min(a, b) (((a)<(b)) ? (a) : (b))
#define Max(a, b) (((a)>(b)) ? (a) : (b))
#define Clamp(a, x, b) (((a)>(x))?(a):((b)<(x))?(b):(x))

#define MemoryCopy memcpy
#define MemoryMove memmove
#define MemorySet  memset

#define Swap(type, a, b) do{ type _swapper_ = a; a = b; b = _swapper_; }while(0)
#define root_function static
#define global         static
#define local_persist  static
#define local_function  static
#define no_name_mangle extern "C"

#if defined(_MSC_VER)
# pragma section(".roglob", read)
#define read_only __declspec(allocate(".roglob"))
#else
#define read_only
#endif

#define PRINT_STR8(str8) (int)(str8).size, (str8).str

#define DeferLoop(start, end) for (int _i_ = ((start), 0); _i_ == 0; _i_ += 1, (end))

////////////////////////////////
//~ rjf: Base-Types
typedef int8_t   S8;
typedef int16_t  S16;
typedef int32_t  S32;
typedef int64_t  S64;
typedef uint8_t  U8;
typedef uint16_t U16;
typedef uint32_t U32;
typedef uint64_t U64;
typedef S8       B8;
typedef S16      B16;
typedef S32      B32;
typedef S64      B64;
typedef float    F32;
typedef double   F64;
typedef void VoidFunction(void);
typedef struct U128 U128;
struct U128 {U64 u64[2];};

#define U8_MAX UCHAR_MAX
#define U16_MAX USHRT_MAX

typedef union Rng1U64 Rng1U64;
union Rng1U64
{
    struct
    {
        U64 min;
        U64 max;
    };
    U64 v[2];
};

Rng1U64 R1U64(U64 min, U64 max);

#endif