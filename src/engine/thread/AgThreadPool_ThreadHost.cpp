// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /EHa
#include "engine/thread/AgThreadPool.gen.h"

// FUNCTION: 0x528E30 ??_GThreadHost@AgThreadPool@@UAEPAXI@Z
// FUNCTION: 0x529740 AgThreadPool::ThreadHost::vfn_1
void AgThreadPool::ThreadHost::vfn_1()
{
    pool->fn_529EF0(this);
    handle = 0;
}

AgThreadPool::ThreadHost* createPoolThreadHost()
{
    return new AgThreadPool::ThreadHost;
}
