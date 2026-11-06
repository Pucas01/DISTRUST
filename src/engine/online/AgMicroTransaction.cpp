// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/online/AgMicroTransaction.gen.h"

// FUNCTION: 0x549F60 ??_GAgMicroTransaction@@UAEPAXI@Z

AgMicroTransaction* createAgMicroTransaction()
{
    return new AgMicroTransaction;
}
