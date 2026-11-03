// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /EHa
#include "shim/windows.h"
#include "engine/system/AgPCExceptionHandler.h"

long __stdcall sub_55BDC0(void* info);

struct CrashFilterGuard {
    CrashFilterGuard() { SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)sub_55BDC0); }
};

// FUNCTION: 0x526700 ??_GAgPCExceptionHandler@@UAEPAXI@Z
// FUNCTION: 0x55BE70 AgPCExceptionHandler::vfn_1
int AgPCExceptionHandler::vfn_1()
{
    guard = new CrashFilterGuard;
    return 1;
}

// FUNCTION: 0x55BE50 AgPCExceptionHandler::vfn_2
int AgPCExceptionHandler::vfn_2()
{
    delete guard;
    guard = 0;
    return 1;
}

AgPCExceptionHandler* createPCExceptionHandler()
{
    return new AgPCExceptionHandler;
}
