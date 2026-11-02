// FLAGS: /nologo /c /O1 /Oy- /Gy /Zl /D_MT /D_CRTBLD /DWIN32 /Itoolchain/crt /Itoolchain/winsdk/um /Itoolchain/winsdk/shared /Itoolchain/winsdk/winrt /GS /EHsc /GR /arch:IA32 /Oi /TP
// FUNCTION: 0x5F24E2 ??0AllocatorBucket@details@Concurrency@@QAE@XZ
// FUNCTION: 0x5F24F7 ??1AllocatorBucket@details@Concurrency@@QAE@XZ
// FUNCTION: 0x5F251A ?Alloc@AllocatorBucket@details@Concurrency@@QAEPATAllocationEntry@23@XZ
// FUNCTION: 0x5F2533 ?Alloc@SubAllocator@details@Concurrency@@QAEPAXI@Z
// FUNCTION: 0x5F2583 ?Free@AllocatorBucket@details@Concurrency@@QAE_NPATAllocationEntry@23@@Z
// FUNCTION: 0x5F25AD ?Free@SubAllocator@details@Concurrency@@QAEXPAX@Z
// FUNCTION: 0x5F25E4 ?GetBucketIndex@SubAllocator@details@Concurrency@@SAHI@Z
// FUNCTION: 0x5F2639 ?StaticAlloc@SubAllocator@details@Concurrency@@SAPAXI@Z
#include "../../../toolchain/crt/SubAllocator.cpp"
