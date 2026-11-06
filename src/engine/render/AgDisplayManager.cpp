// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/core/AgSingleton.h"

class AgDisplayManager : public AgSingleton<AgDisplayManager>
{
public:
    virtual void vfn_1();
    virtual void vfn_2();
    void fn_512CE0();
    void fn_512D40();
    void fn_512E50();
    void fn_512F10();
    void fn_5131B0();
};

// FUNCTION: 0x512C80 ??_GAgDisplayManager@@UAEPAXI@Z

// STUB: 0x512CE0 AgDisplayManager::fn_512CE0 (86 bytes)
void AgDisplayManager::fn_512CE0()
{
}

// STUB: 0x512D40 AgDisplayManager::fn_512D40 (260 bytes)
void AgDisplayManager::fn_512D40()
{
}

// STUB: 0x512F10 AgDisplayManager::fn_512F10 (666 bytes)
void AgDisplayManager::fn_512F10()
{
}

// STUB: 0x5131B0 AgDisplayManager::fn_5131B0 (237 bytes)
void AgDisplayManager::fn_5131B0()
{
}

// STUB: 0x5132A0 AgDisplayManager::vfn_2 (136 bytes)
void AgDisplayManager::vfn_2()
{
}

// STUB: 0x513330 AgDisplayManager::vfn_1 (132 bytes)
void AgDisplayManager::vfn_1()
{
}

// FUNCTION: 0x512A30 ??1?$AgSingleton@VAgDisplayManager@@@@UAE@XZ
// FUNCTION: 0x512C50 ??_G?$AgSingleton@VAgDisplayManager@@@@UAEPAXI@Z
template class AgSingleton<AgDisplayManager>;

// STUB: 0x512AB0 sub_512AB0 (97 bytes)
void sub_512AB0()
{
}

// STUB: 0x512B20 sub_512B20 (68 bytes)
void sub_512B20()
{
}

// STUB: 0x512B70 sub_512B70 (218 bytes)
void sub_512B70()
{
}

AgDisplayManager* createDisplayManager()
{
    return new AgDisplayManager;
}
