/* ========================================================================

(C) Copyright 2023 by Molly Rocket, Inc., All Rights Reserved.
   
This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.
   
Please see https://computerenhance.com for more information
   
======================================================================== */
typedef U64 u64;
typedef U32 u32;
typedef double f64;

#if _WIN32

#include <intrin.h>
#include <windows.h>

static u64 GetOSTimerFreq(void)
{
	LARGE_INTEGER Freq;
	QueryPerformanceFrequency(&Freq);
	return Freq.QuadPart;
}

static u64 ReadOSTimer(void)
{
	LARGE_INTEGER Value;
	QueryPerformanceCounter(&Value);
	return Value.QuadPart;
}

#else

#include <x86intrin.h>
#include <sys/time.h>

static u64 GetOSTimerFreq(void)
{
	return 1000000;
}

static u64 ReadOSTimer(void)
{
	// NOTE(casey): The "struct" keyword is not necessary here when compiling in C++,
	// but just in case anyone is using this file from C, I include it.
	struct timeval Value;
	gettimeofday(&Value, 0);
	
	u64 Result = GetOSTimerFreq()*(u64)Value.tv_sec + (u64)Value.tv_usec;
	return Result;
}

#endif

/* NOTE(casey): This does not need to be "inline", it could just be "static"
	because compilers will inline it anyway. But compilers will warn about 
	static functions that aren't used. So "inline" is just the simplest way 
	to tell them to stop complaining about that. */
inline u64 ReadCPUTimer(void)
{
	// NOTE(casey): If you were on ARM, you would need to replace __rdtsc
	// with one of their performance counter read instructions, depending
	// on which ones are available on your platform.
	
	return __rdtsc();
}

static u64 EstimateCPUTimerFreq(void)
{
	u64 MillisecondsToWait = 100;
	u64 OSFreq = GetOSTimerFreq();

	u64 CPUStart = ReadCPUTimer();
	u64 OSStart = ReadOSTimer();
	u64 OSEnd = 0;
	u64 OSElapsed = 0;
	u64 OSWaitTime = OSFreq * MillisecondsToWait / 1000;
	while(OSElapsed < OSWaitTime)
	{
		OSEnd = ReadOSTimer();
		OSElapsed = OSEnd - OSStart;
	}
	
	u64 CPUEnd = ReadCPUTimer();
	u64 CPUElapsed = CPUEnd - CPUStart;
	
	u64 CPUFreq = 0;
	if(OSElapsed)
	{
		CPUFreq = OSFreq * CPUElapsed / OSElapsed;
	}
	
	return CPUFreq;
}

struct profile_anchor
{
	u64 TSCElapsed;
	u64 TSCElapsedChildren;
	u64 TSCElapsedAtRoot;
	u64 HitCount;
	char const *Label;
};

struct profiler
{
	profile_anchor Anchors[4096];
    
	u64 StartTSC;
	u64 EndTSC;
};
static profiler GlobalProfiler;
static u32 GlobalProfilerParent;

struct profile_block
{
	profile_block(char const *Label_, u32 AnchorIndex_)
	{
		ParentIndex = GlobalProfilerParent;
        
		AnchorIndex = AnchorIndex_;
		Label = Label_;
        
		profile_anchor *Anchor = GlobalProfiler.Anchors + AnchorIndex;
		OldTSCElapsedAtRoot = Anchor->TSCElapsedAtRoot;
        
		GlobalProfilerParent = AnchorIndex;
		StartTSC = ReadCPUTimer();
	}
    
	~profile_block(void)
	{
		u64 Elapsed = ReadCPUTimer() - StartTSC;
		GlobalProfilerParent = ParentIndex;
    
		profile_anchor *Parent = GlobalProfiler.Anchors + ParentIndex;
		profile_anchor *Anchor = GlobalProfiler.Anchors + AnchorIndex;
        
		Parent->TSCElapsedChildren += Elapsed;
		Anchor->TSCElapsedAtRoot = OldTSCElapsedAtRoot + Elapsed;
		Anchor->TSCElapsed += Elapsed;
		++Anchor->HitCount;
        
		/* NOTE(casey): This write happens every time solely because there is no
		straightforward way in C++ to have the same ease-of-use. In a better programming
		language, it would be simple to have the anchor points gathered and labeled at compile
		time, and this repetative write would be eliminated. */
		Anchor->Label = Label;
	}
    
	char const *Label;
	u64 OldTSCElapsedAtRoot;
	u64 StartTSC;
	u32 ParentIndex;
	u32 AnchorIndex;
};

#define NameConcat2(A, B) A##B
#define NameConcat(A, B) NameConcat2(A, B)
#define TimeBlock(Name) profile_block NameConcat(Block, __LINE__)(Name, __COUNTER__ + 1);
#define TimeFunction TimeBlock(__func__)

static void PrintTimeElapsed(u64 TotalTSCElapsed, profile_anchor *Anchor)
{
	u64 TSCElapsedSelf = Anchor->TSCElapsed - Anchor->TSCElapsedChildren;
	f64 Percent = 100.0 * ((f64)TSCElapsedSelf / (f64)TotalTSCElapsed);
	printf("  %s[%llu]: %llu (%.2f%%", Anchor->Label, Anchor->HitCount, TSCElapsedSelf, Percent);
	if(Anchor->TSCElapsedAtRoot != TSCElapsedSelf)
	{
		f64 PercentWithChildren = 100.0 * ((f64)Anchor->TSCElapsedAtRoot / (f64)TotalTSCElapsed);
		printf(", %.2f%% w/children", PercentWithChildren);
	}
	printf(")\n");
}

static void BeginProfile(void)
{
	GlobalProfiler.StartTSC = ReadCPUTimer();
}

static void EndAndPrintProfile()
{
	GlobalProfiler.EndTSC = ReadCPUTimer();
	u64 CPUFreq = EstimateCPUTimerFreq();
    
	u64 TotalCPUElapsed = GlobalProfiler.EndTSC - GlobalProfiler.StartTSC;
    
	if(CPUFreq)
	{
		printf("\nTotal time: %0.4fms (CPU freq %llu)\n", 1000.0 * (f64)TotalCPUElapsed / (f64)CPUFreq, CPUFreq);
	}
    
	for(u32 AnchorIndex = 0; AnchorIndex < ArrayCount(GlobalProfiler.Anchors); ++AnchorIndex)
	{
		profile_anchor *Anchor = GlobalProfiler.Anchors + AnchorIndex;
		if(Anchor->TSCElapsed)
		{
			PrintTimeElapsed(TotalCPUElapsed, Anchor);
		}
	}
}
        