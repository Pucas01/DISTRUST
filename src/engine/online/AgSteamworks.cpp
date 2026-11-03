// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /EHa
#include "engine/online/AgSteamworks.h"
#include "steam/ISteamUserStats.h"
#include "steam/ISteamUtils.h"

void __cdecl logTrace(const char* message);

extern int g_759FF4;

// FUNCTION: 0x516DA0 ??_GAgSteamworks@@UAEPAXI@Z
// FUNCTION: 0x534420 AgSteamworks::init
int AgSteamworks::init()
{
    g_759FF4 = 1;
    if (!SteamAPI_Init()) {
        logTrace("[steam] Warning: failed to init Steam API");
        g_759FF4 = 0;
    }
    ISteamUtils* utils = SteamUtils();
    if (utils)
        utils->SetOverlayNotificationPosition(0);
    if (g_759FF4 == 1) {
        if (SteamUserStats())
            SteamUserStats()->RequestCurrentStats();
    }
    return 1;
}

// FUNCTION: 0x534410 AgSteamworks::shutdown
int AgSteamworks::shutdown()
{
    SteamAPI_Shutdown();
    return 1;
}

// FUNCTION: 0x516BB0 ??1?$AgSingleton@VAgSteamworks@@@@UAE@XZ
// FUNCTION: 0x516D10 ??_G?$AgSingleton@VAgSteamworks@@@@UAEPAXI@Z
template class AgSingleton<AgSteamworks>;

AgSteamworks* createSteamworks()
{
    return new AgSteamworks;
}
