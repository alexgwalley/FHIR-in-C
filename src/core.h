#ifndef CORE_H
#define CORE_H

#include <cinttypes>

#define Bytes(n)      (n)
#define Kilobytes(n)  (n << 10)
#define Megabytes(n)  (n << 20)
#define Gigabytes(n)  (((U64)n) << 30)
#define Terabytes(n)  (((U64)n) << 40)

#define ArrayCount(a) (sizeof(a) / sizeof((a)[0]))

//- rjf: linked list helpers

#define CheckNull(p) ((p)==0)
#define SetNull(p) ((p)=0)

#define QueuePush_NZ(f,l,n,next,zchk,zset) (zchk(f)?\
(((f)=(l)=(n)), zset((n)->next)):\
((l)->next=(n),(l)=(n),zset((n)->next)))
#define QueuePushFront_NZ(f,l,n,next,zchk,zset) (zchk(f) ? (((f) = (l) = (n)), zset((n)->next)) :\
((n)->next = (f)), ((f) = (n)))
#define QueuePop_NZ(f,l,next,zset) ((f)==(l)?\
(zset(f),zset(l)):\
((f)=(f)->next))

#define QueuePush(f,l,n)         QueuePush_NZ(f,l,n,next,CheckNull,SetNull)
#define QueuePushFront(f,l,n)    QueuePushFront_NZ(f,l,n,next,CheckNull,SetNull)
#define QueuePop(f,l)            QueuePop_NZ(f,l,next,SetNull)

#if defined(_MSC_VER)
#define OS_DebugBreak __debugbreak()
#else
#include <signal.h>
#define OS_DebugBreak raise(SIGTRAP)
#endif


#ifdef CUSTOM_DEBUG
#define Assert(b) do { if(!(b)) { OS_DebugBreak; } } while(0)
#else
#define Assert(...)
#endif

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