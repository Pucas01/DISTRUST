#include "game/map_state.h"

extern unsigned char g_73DB1E;
extern unsigned char g_73DA4E;
extern unsigned char g_73D9F8;
extern short g_73D9EA;
extern int g_73DA44;
extern short g_73DA4C;
extern int g_73DA5C;

void sub_4558E0();
void sub_4738D0();

// FUNCTION: 0x479150 mapAdvance
int mapAdvance()
{
    int v = g_mapState.unk_D0;
    unsigned char a = g_73DA4E;
    if (v > 0x18)
        a = 1;
    v++;
    g_73DA4E = a;
    g_mapState.unk_D0 = v;
    return 3;
}

// FUNCTION: 0x479180 mapStepBack
int mapStepBack()
{
    if (g_mapState.unk_D0 < 0) {
        int v = *(int*)&g_mapState + g_73DA44;
        g_73DA4E = 8;
        g_73DA4C = (short)v;
        g_mapState.cursorTarget = (short)v;
        g_mapState.cursor = (short)v;
        g_mapState.unk_D0 = 0;
        g_73DA5C = 0;
        return 3;
    }
    g_mapState.unk_D0--;
    return 3;
}

// STUB: 0x4791E0 sub_4791E0 (798 bytes)
void sub_4791E0()
{
}

// STUB: 0x479500 sub_479500 (299 bytes)
void sub_479500()
{
}

// STUB: 0x479630 sub_479630 (397 bytes)
void sub_479630()
{
}

// STUB: 0x4797C0 sub_4797C0 (172 bytes)
void sub_4797C0()
{
}

// STUB: 0x479870 sub_479870 (277 bytes)
void sub_479870()
{
}

// STUB: 0x479BA0 sub_479BA0 (146 bytes)
void sub_479BA0()
{
}

// STUB: 0x479C40 sub_479C40 (102 bytes)
void sub_479C40()
{
}

// STUB: 0x479CB0 sub_479CB0 (241 bytes)
void sub_479CB0()
{
}

// FUNCTION: 0x479DB0 mapStepDownNine
int mapStepDownNine()
{
    if (g_mapState.unk_D0 >= 10) {
        g_73DB1E = 9;
        return 2;
    }
    g_mapState.unk_D0++;
    return 2;
}

// STUB: 0x479DE0 sub_479DE0 (301 bytes)
void sub_479DE0()
{
}

// STUB: 0x479F10 sub_479F10 (972 bytes)
void sub_479F10()
{
}

// STUB: 0x47A310 sub_47A310 (89 bytes)
void sub_47A310()
{
}

// STUB: 0x47A370 sub_47A370 (85 bytes)
void sub_47A370()
{
}

// STUB: 0x47A3D0 sub_47A3D0 (197 bytes)
void sub_47A3D0()
{
}

// STUB: 0x47A4A0 sub_47A4A0 (900 bytes)
void sub_47A4A0()
{
}

// FUNCTION: 0x47A830 mapStepDownOne
int mapStepDownOne()
{
    if (g_mapState.unk_D0 >= 10) {
        g_73DB1E = 1;
        g_mapState.unk_D0 = 0x18;
        return 2;
    }
    g_mapState.unk_D0++;
    return 2;
}

// FUNCTION: 0x47A860 mapStepUp
int mapStepUp()
{
    if (g_mapState.unk_D0 <= 0) {
        g_73DB1E = 7;
        return 0x10;
    }
    g_mapState.unk_D0--;
    return 2;
}

// FUNCTION: 0x47A890 mapStepUpWrap
int mapStepUpWrap()
{
    if (g_mapState.unk_D0 <= 0) {
        g_73DB1E = 2;
        g_mapState.unk_D0 = 10;
        sub_4738D0();
        return 2;
    }
    g_mapState.unk_D0--;
    return 2;
}

// STUB: 0x47A8D0 sub_47A8D0 (967 bytes)
void sub_47A8D0()
{
}

// STUB: 0x47ACA0 sub_47ACA0 (1082 bytes)
void sub_47ACA0()
{
}

// STUB: 0x47B0E0 sub_47B0E0 (1039 bytes)
void sub_47B0E0()
{
}

// STUB: 0x47B4F0 sub_47B4F0 (703 bytes)
void sub_47B4F0()
{
}

// STUB: 0x47B7B0 sub_47B7B0 (569 bytes)
void sub_47B7B0()
{
}

// FUNCTION: 0x47B9F0 mapStepAdvance
int mapStepAdvance()
{
    if (g_mapState.unk_D0 > 0x18) {
        if (g_73D9F8)
            sub_4558E0();
        g_73DB1E = 1;
    }
    g_mapState.unk_D0++;
    return 2;
}

// STUB: 0x47BA20 sub_47BA20 (117 bytes)
void sub_47BA20()
{
}

// STUB: 0x47BAA0 sub_47BAA0 (580 bytes)
void sub_47BAA0()
{
}

// STUB: 0x47BCF0 sub_47BCF0 (235 bytes)
void sub_47BCF0()
{
}

// STUB: 0x47BDE0 sub_47BDE0 (156 bytes)
void sub_47BDE0()
{
}

// STUB: 0x47BE80 sub_47BE80 (151 bytes)
void sub_47BE80()
{
}

// STUB: 0x47BF20 sub_47BF20 (293 bytes)
void sub_47BF20()
{
}

// FUNCTION: 0x47C130 mapStepScroll
void mapStepScroll()
{
    if (g_mapState.unk_D0 % 20 != 0) {
        if (g_73D9EA + 15 > 360)
            g_73D9EA = 0;
        else
            g_73D9EA += 15;
    }
}

// STUB: 0x47C210 sub_47C210 (345 bytes)
void sub_47C210()
{
}

// STUB: 0x47C370 sub_47C370 (530 bytes)
void sub_47C370()
{
}

// STUB: 0x47C590 sub_47C590 (678 bytes)
void sub_47C590()
{
}

// STUB: 0x47C840 sub_47C840 (416 bytes)
void sub_47C840()
{
}

// STUB: 0x47CAA0 sub_47CAA0 (333 bytes)
void sub_47CAA0()
{
}

// STUB: 0x47CBF0 loadMapTextures (576 bytes)
void loadMapTextures()
{
}

// FUNCTION: 0x47CE30 openMapMode
void __cdecl openMapMode(int mode)
{
    clearMapState();
    g_mapState.mode = mode;
    loadMapTextures((char)mode);
    g_73DC04 = playSound(0xC, 100);
}
