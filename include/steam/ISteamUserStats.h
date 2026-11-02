#pragma once

class ISteamUserStats
{
public:
    virtual bool RequestCurrentStats() = 0;
    virtual bool GetStatInt(const char* name, int* data) = 0;
    virtual bool GetStatFloat(const char* name, float* data) = 0;
    virtual bool SetStatInt(const char* name, int data) = 0;
    virtual bool SetStatFloat(const char* name, float data) = 0;
    virtual bool UpdateAvgRateStat(const char* name, float countThisSession, double sessionLength) = 0;
    virtual bool GetAchievement(const char* name, bool* achieved) = 0;
    virtual bool SetAchievement(const char* name) = 0;
    virtual bool ClearAchievement(const char* name) = 0;
    virtual bool GetAchievementAndUnlockTime(const char* name, bool* achieved, unsigned* unlockTime) = 0;
    virtual bool StoreStats() = 0;
};

extern "C" __declspec(dllimport) ISteamUserStats* __cdecl SteamUserStats();
