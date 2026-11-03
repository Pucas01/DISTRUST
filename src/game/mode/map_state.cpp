#include "game/map_state.h"

// FUNCTION: 0x4810E0 restartFade
void __cdecl restartFade()
{
    g_mapState.unk_D5 = 10;
    g_mapState.unk_F0 = 0;
}

// FUNCTION: 0x483B40 setCursor
void __cdecl setCursor(int index)
{
    g_mapState.cursor = index - 1;
    g_mapState.cursorTarget = index - 1;
    g_mapState.color = getColorTableB()[g_mapState.cursor];
}

// FUNCTION: 0x480F00 resetMapState
void __cdecl resetMapState()
{
    clearMapState();
    g_mapState.mode = 5;
    g_mapState.unk_D4 = 10;
    g_mapState.cursor = 1;
    g_mapState.cursorTarget = 1;
    g_mapState.unk_CA = 0;
    g_mapState.color = 0xFFFFFF;
    g_mapState.unk_EC = 0x6401;
    g_mapState.unk_EE = 0;
    g_mapState.unk_F0 = 0;
    sub_480E30(0);
}

// FUNCTION: 0x4836F0 resetMapStateA
void __cdecl resetMapStateA()
{
    g_mapState.unk_C8 = 0;
    g_mapState.cursor = 0;
    g_mapState.cursorTarget = 0;
    g_mapState.unk_CA = 0;
    g_mapState.unk_B8 = 0;
    int* colors = getColorTableA();
    int cursor = g_mapState.cursor;
    g_73DCB4 = 0;
    g_mapState.color = colors[cursor];
    g_mapState.unk_C4 = 0;
    g_mapState.unk_CB = 0;
    g_mapState.unk_D0 = 0;
    g_73DCB5 = 12;
    resetHandlesA();
}

// FUNCTION: 0x4841A0 resetMapStateB
void __cdecl resetMapStateB()
{
    g_mapState.unk_C8 = 0;
    g_mapState.unk_CC = 100;
    g_mapState.unk_CE = sub_476350(0x1C)[1];
    g_mapState.cursor = 0;
    g_mapState.cursorTarget = 0;
    g_mapState.unk_CA = 0;
    g_mapState.unk_B8 = 0;
    int* colors = getColorTableB();
    int cursor = g_mapState.cursor;
    g_73DCBA = 0;
    g_mapState.color = colors[cursor];
    g_mapState.unk_C4 = 0;
    g_mapState.unk_CB = 0;
    g_mapState.unk_D0 = 0;
    g_73DCBB = 12;
    resetHandlesA();
}

// FUNCTION: 0x47CED0 openMap
void __cdecl openMap(int arg)
{
    char mode = arg;
    g_mapState.cursor = 0;
    g_mapState.cursorTarget = 0;
    g_mapState.unk_CA = 0;
    g_mapState.unk_CB = 0;
    g_mapState.unk_B8 = 0;
    g_mapState.unk_C4 = 0;
    g_mapState.unk_D0 = 0;
    g_mapState.mode = mode;
    g_mapState.unk_C8 = 0;
    g_mapState.color = -1;
    g_mapState.unk_E1 = 1;
    loadMapTextures(mode);
    g_73DC04 = playSound(12, 100);
}
