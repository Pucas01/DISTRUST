// FLAGS: /nologo /c /O1 /Oy- /Gy /Zl /D_MT /D_CRTBLD /DWIN32 /Itoolchain/crt /Itoolchain/winsdk/um /Itoolchain/winsdk/shared /Itoolchain/winsdk/winrt /GS /EHsc /GR /arch:IA32 /Oi /TP
// FUNCTION: 0x5F57E3 ?_Current_exception@exception_ptr@std@@SA?AV12@XZ
// FUNCTION: 0x5F581D ?_FinishCancelState@_TaskCollectionBase@details@Concurrency@@IAEXI@Z
// FUNCTION: 0x5F5843 ?_GetTokenState@_TaskCollectionBase@details@Concurrency@@QAEPAV_CancellationTokenState@23@PAPAV_CancellationTokenRegistration@23@@Z
// FUNCTION: 0x5F586B ?_MarkCancellation@_TaskCollectionBase@details@Concurrency@@IAE_NXZ
// FUNCTION: 0x5F5893 ?_RaisedException@_TaskCollectionBase@details@Concurrency@@IAEXXZ
// FUNCTION: 0x5F5902 ?_RethrowException@_TaskCollectionBase@details@Concurrency@@IAEXXZ
// FUNCTION: 0x5F5972 ?current_exception@std@@YA?AVexception_ptr@1@XZ
// FUNCTION: 0x5F5988 ?rethrow_exception@std@@YAXVexception_ptr@1@@Z
#include "../../../toolchain/crt/TaskCollectionBase.cpp"
