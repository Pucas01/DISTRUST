// FLAGS: /nologo /c /O1 /Oy- /Gy /Zl /D_MT /D_CRTBLD /DWIN32 /Itoolchain/crt /Itoolchain/winsdk/um /Itoolchain/winsdk/shared /Itoolchain/winsdk/winrt /GS /EHsc /GR /arch:IA32 /Oi /TP
// FUNCTION: 0x5F59B6 ??0?$WorkStealingQueue@V_UnrealizedChore@details@Concurrency@@V_CriticalNonReentrantLock@23@@details@Concurrency@@QAE@PAV_CriticalNonReentrantLock@12@@Z
// FUNCTION: 0x5F5A15 ??0WorkQueue@details@Concurrency@@QAE@XZ
// FUNCTION: 0x5F5A61 ?RedetachFromScheduleGroupAtSafePoint@WorkQueue@details@Concurrency@@QAEXPAVScheduleGroupSegmentBase@23@@Z
// FUNCTION: 0x5F5A85 ?Reinitialize@WorkQueue@details@Concurrency@@AAEXXZ
// FUNCTION: 0x5F5AE3 ?StaticRedetachFromScheduleGroup@WorkQueue@details@Concurrency@@CAXPAV123@@Z
// FUNCTION: 0x5F5B05 ?Steal@WorkQueue@details@Concurrency@@QAEPAV_UnrealizedChore@23@_N@Z
// FUNCTION: 0x5F5B45 ?Sweep@?$WorkStealingQueue@V_UnrealizedChore@details@Concurrency@@V_CriticalNonReentrantLock@23@@details@Concurrency@@QAEXP6A_NPAV_UnrealizedChore@23@PAX@Z12@Z
// FUNCTION: 0x5F5BE4 ?SweepUnstructured@WorkQueue@details@Concurrency@@QAEXP6A_NPAV_UnrealizedChore@23@PAX@Z12@Z
// FUNCTION: 0x5F5BF0 ?TryToSteal@WorkQueue@details@Concurrency@@QAEPAV_UnrealizedChore@23@_NAA_N@Z
// FUNCTION: 0x5F5C56 ?UnlockedSteal@?$StructuredWorkStealingQueue@V_UnrealizedChore@details@Concurrency@@V_CriticalNonReentrantLock@23@@details@Concurrency@@QAEPAV_UnrealizedChore@23@_N@Z
// FUNCTION: 0x5F5CD4 ?UnlockedSteal@?$WorkStealingQueue@V_UnrealizedChore@details@Concurrency@@V_CriticalNonReentrantLock@23@@details@Concurrency@@QAEPAV_UnrealizedChore@23@_N0@Z
// FUNCTION: 0x5F5D62 ?UnlockedSteal@WorkQueue@details@Concurrency@@AAEPAV_UnrealizedChore@23@_N@Z
#include "../../../toolchain/crt/WorkQueue.cpp"
