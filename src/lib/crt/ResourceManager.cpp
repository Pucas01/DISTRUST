// FLAGS: /nologo /c /O1 /Oy- /Gy /Zl /D_MT /D_CRTBLD /DWIN32 /Itoolchain/crt /Itoolchain/winsdk/um /Itoolchain/winsdk/shared /Itoolchain/winsdk/winrt /EHsc /GR /TP
// FUNCTION: 0x5E57F6 ??0bad_alloc@std@@QAE@ABV01@@Z
// FUNCTION: 0x5E582C ??1GlobalNode@details@Concurrency@@QAE@XZ
// FUNCTION: 0x5E58F6 ??1_Scoped_lock@_NonReentrantBlockingLock@details@Concurrency@@QAE@XZ
// FUNCTION: 0x5E58FD ??1_Scoped_lock@_NonReentrantLock@details@Concurrency@@QAE@XZ
// FUNCTION: 0x5E5906 ??_EGlobalNode@details@Concurrency@@QAEPAXI@Z
// FUNCTION: 0x5E5954 ?AddTail@?$List@VSchedulerProxy@details@Concurrency@@VCount@CollectionTypes@23@@details@Concurrency@@QAEXPAVSchedulerProxy@23@@Z
// FUNCTION: 0x5E5A5D ?ApplyAffinityLimits@AffinityRestriction@ResourceManager@details@Concurrency@@QAEXPAU_GROUP_AFFINITY@@@Z
// FUNCTION: 0x5E5A80 ?ApplyAffinityRestrictions@ResourceManager@details@Concurrency@@CAXPAK@Z
// FUNCTION: 0x5E5AAF ?ApplyAffinityRestrictions@ResourceManager@details@Concurrency@@CAXPAU_GROUP_AFFINITY@@@Z
// FUNCTION: 0x5E5BFF ?CleanupTopologyInformation@ResourceManager@details@Concurrency@@CAXXZ
// FUNCTION: 0x5E5C1A ?CommitStolenCores@ResourceManager@details@Concurrency@@AAEXPAVSchedulerProxy@23@@Z
// FUNCTION: 0x5E89BB ?Remove@?$List@VSchedulerProxy@details@Concurrency@@VCount@CollectionTypes@23@@details@Concurrency@@QAEXPAVSchedulerProxy@23@@Z
// FUNCTION: 0x5E8B70 ?ReserveAtHigherUseCounts@ResourceManager@details@Concurrency@@AAEIPAVSchedulerProxy@23@I@Z
// FUNCTION: 0x5E8BA4 ?ReserveCores@ResourceManager@details@Concurrency@@AAEIPAVSchedulerProxy@23@II@Z
// FUNCTION: 0x5E8D76 ?ResetGlobalAllocationData@ResourceManager@details@Concurrency@@AAEXXZ
// FUNCTION: 0x5E9074 ?SafeReference@ResourceManager@details@Concurrency@@AAE_NXZ
// FUNCTION: 0x5E9093 ?SendResourceNotifications@ResourceManager@details@Concurrency@@QAEXPAVSchedulerProxy@23@@Z
// FUNCTION: 0x5E9330 ?Shutdown@ResourceManager@details@Concurrency@@QAEXPAVSchedulerProxy@23@@Z
// FUNCTION: 0x5E93E9 ?SubscribeCurrentThread@ResourceManager@details@Concurrency@@QAEPAVExecutionResource@23@PAVSchedulerProxy@23@@Z
// FUNCTION: 0x5E943A ?ToggleRMIdleState@ResourceManager@details@Concurrency@@AAEXPAUSchedulerNode@23@PAUSchedulerCore@23@PAUGlobalNode@23@PAUGlobalCore@23@PAUAllocationData@23@@Z
// FUNCTION: 0x5E94A7 ?Version@ResourceManager@details@Concurrency@@SA?AW4OSVersion@IResourceManager@3@XZ
#include "../../../toolchain/crt/ResourceManager.cpp"
