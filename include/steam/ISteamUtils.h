#pragma once

class ISteamUtils
{
public:
    virtual unsigned GetSecondsSinceAppActive() = 0;
    virtual unsigned GetSecondsSinceComputerActive() = 0;
    virtual int GetConnectedUniverse() = 0;
    virtual unsigned GetServerRealTime() = 0;
    virtual const char* GetIPCountry() = 0;
    virtual bool GetImageSize(int image, unsigned* width, unsigned* height) = 0;
    virtual bool GetImageRGBA(int image, unsigned char* dest, int destSize) = 0;
    virtual bool GetCSERIPPort(unsigned* ip, unsigned short* port) = 0;
    virtual unsigned char GetCurrentBatteryPower() = 0;
    virtual unsigned GetAppID() = 0;
    virtual void SetOverlayNotificationPosition(int position) = 0;
};

extern "C" __declspec(dllimport) ISteamUtils* __cdecl SteamUtils();
extern "C" __declspec(dllimport) bool __cdecl SteamAPI_Init();
extern "C" __declspec(dllimport) void __cdecl SteamAPI_Shutdown();
