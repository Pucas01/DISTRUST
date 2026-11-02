#pragma once
#include <stddef.h>
#include <intrin.h>

#define WINAPI __stdcall
#define TRUE 1
#define FALSE 0
#define CALLBACK __stdcall
#define DECLSPEC_IMPORT __declspec(dllimport)
#define INFINITE 0xFFFFFFFF
#define WAIT_OBJECT_0 0
#define NULL_HANDLE 0

typedef int BOOL;
typedef unsigned long DWORD;
typedef unsigned short WORD;
typedef unsigned char BYTE;
typedef long LONG;
typedef unsigned long ULONG;
typedef void *HANDLE;
typedef void *LPVOID;
typedef const void *LPCVOID;
typedef const char *LPCSTR;
typedef unsigned long ULONG_PTR;
typedef DWORD *LPDWORD;

typedef struct _RTL_CRITICAL_SECTION
{
    void *DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
} CRITICAL_SECTION;

typedef union _LARGE_INTEGER
{
    struct
    {
        DWORD LowPart;
        LONG HighPart;
    };
    __int64 QuadPart;
} LARGE_INTEGER;

typedef struct _SECURITY_ATTRIBUTES
{
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
} SECURITY_ATTRIBUTES, *LPSECURITY_ATTRIBUTES;

typedef struct _SYSTEM_INFO
{
    union
    {
        DWORD dwOemId;
        struct
        {
            WORD wProcessorArchitecture;
            WORD wReserved;
        };
    };
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    ULONG_PTR dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
} SYSTEM_INFO, *LPSYSTEM_INFO;

#ifdef __cplusplus
extern "C" {
#endif
DECLSPEC_IMPORT void WINAPI GetSystemInfo(LPSYSTEM_INFO info);
DECLSPEC_IMPORT HANDLE WINAPI CreateEventA(LPSECURITY_ATTRIBUTES attr, BOOL manualReset, BOOL initialState, LPCSTR name);
DECLSPEC_IMPORT BOOL WINAPI SetEvent(HANDLE h);
DECLSPEC_IMPORT BOOL WINAPI ResetEvent(HANDLE h);
DECLSPEC_IMPORT DWORD WINAPI WaitForSingleObject(HANDLE h, DWORD ms);
DECLSPEC_IMPORT BOOL WINAPI CloseHandle(HANDLE h);
DECLSPEC_IMPORT void WINAPI Sleep(DWORD ms);
DECLSPEC_IMPORT DWORD WINAPI TlsAlloc(void);
DECLSPEC_IMPORT LPVOID WINAPI TlsGetValue(DWORD index);
DECLSPEC_IMPORT BOOL WINAPI TlsSetValue(DWORD index, LPVOID value);
DECLSPEC_IMPORT DWORD WINAPI GetCurrentThreadId(void);
DECLSPEC_IMPORT void WINAPI InitializeCriticalSection(CRITICAL_SECTION *cs);
DECLSPEC_IMPORT void WINAPI EnterCriticalSection(CRITICAL_SECTION *cs);
DECLSPEC_IMPORT void WINAPI LeaveCriticalSection(CRITICAL_SECTION *cs);
DECLSPEC_IMPORT void WINAPI DeleteCriticalSection(CRITICAL_SECTION *cs);
DECLSPEC_IMPORT BOOL WINAPI QueryPerformanceCounter(LARGE_INTEGER *count);
DECLSPEC_IMPORT BOOL WINAPI QueryPerformanceFrequency(LARGE_INTEGER *freq);
DECLSPEC_IMPORT HANDLE WINAPI CreateSemaphoreA(LPSECURITY_ATTRIBUTES attr, LONG initial, LONG maximum, LPCSTR name);
DECLSPEC_IMPORT BOOL WINAPI ReleaseSemaphore(HANDLE h, LONG count, LONG *previous);
DECLSPEC_IMPORT BOOL WINAPI TerminateThread(HANDLE h, DWORD code);
#ifdef __cplusplus
}
#endif

#define CreateEvent CreateEventA
#define CreateSemaphore CreateSemaphoreA
#define InterlockedIncrement _InterlockedIncrement
#define InterlockedDecrement _InterlockedDecrement
#define InterlockedCompareExchange _InterlockedCompareExchange
#define InterlockedCompareExchangePointer(d, e, c) ((void *)_InterlockedCompareExchange((volatile long *)(d), (long)(e), (long)(c)))
#define terminate_thread TerminateThread
