// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t
#include "game/achievements.h"
#include "steam/ISteamUserStats.h"

#pragma strict_gs_check(on)

// FUNCTION: 0x4E7540 consumeAchievementPending
int __cdecl consumeAchievementPending()
{
    if (!g_achievementsReady)
        return -1;
    if (!g_achievementPending)
        return -1;
    g_achievementPending = 0;
    return 0;
}

// FUNCTION: 0x4E7570 enableAchievements
int __cdecl enableAchievements()
{
    g_achievementsReady = true;
    return 0;
}

// FUNCTION: 0x4E7580 unlockAchievement
bool __cdecl unlockAchievement(int id)
{
    if (!g_achievementsReady)
        return false;
    if (SteamUserStats())
    {
        if (!SteamUserStats()->SetAchievement(g_achievementNames[id]) || !SteamUserStats()->StoreStats())
            logTrace("[GB][Warning] Unable to unlock achievement: %s", g_achievementNames[id]);
        bool unlocked = true;
        for (unsigned i = 0; i < ACHIEVEMENT_COUNT; i++)
        {
            if (!SteamUserStats()->GetAchievement(g_achievementNames[i], &unlocked) || !unlocked)
                goto done;
        }
        if (!SteamUserStats()->SetAchievement("LAST_REWARD") || !SteamUserStats()->StoreStats())
            logTrace("[GB][Warning] Unable to unlock achievement: %s", g_achievementNames[id]);
    }
done:
    return true;
}
