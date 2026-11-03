#include <string.h>
extern signed char g_screenState;
extern int g_screenTimer;
extern float g_7403E0;

void __cdecl screenStateCase0();
void __cdecl screenStateCase1();
void __cdecl screenStateCase2();
void __cdecl screenStateCase3();
void __cdecl screenStateCase4();
void __cdecl screenStateCase5();
void __cdecl screenStateCase6();
void __cdecl screenStateCase7();
void __cdecl screenStateCase8();
void __cdecl screenStateCase9();
void __cdecl screenStateAdvance();
int __cdecl sub_4C4F70();

// FUNCTION: 0x438220 updateScreenState
void __cdecl updateScreenState()
{
    switch (g_screenState) {
    case 0: screenStateCase0(); break;
    case 1: screenStateCase1(); break;
    case 2: screenStateCase2(); break;
    case 3: screenStateCase3(); break;
    case 4: screenStateCase4(); break;
    case 5: screenStateCase5(); break;
    case 6: screenStateCase6(); break;
    case 7: screenStateCase7(); break;
    case 8: screenStateCase8(); break;
    case 9: screenStateCase9(); break;
    case 10:
        if (g_screenTimer <= 0) {
            screenStateAdvance();
            break;
        }
        g_screenTimer = (int)((float)g_screenTimer - g_7403E0);
        if (g_screenTimer < 0)
            g_screenTimer = 0;
        break;
    case 11:
    case 12:
        if (sub_4C4F70())
            screenStateAdvance();
        break;
    }
}

struct ScreenSlot {
    int words[120];
};
extern ScreenSlot g_7005F4;
extern ScreenSlot g_7007D4[];
extern unsigned char g_screenFlag;
extern int g_screenValue;
extern int g_screenCursor;
struct ScreenRect {
    short x;
    short y;
    int w;
};
extern ScreenRect g_screenX;
extern int g_screenH;
extern short g_screenSound;
extern short g_screenLine;
extern unsigned char g_screenReady;
extern unsigned char g_screenDirty;

int __cdecl sub_435330(int line);
int __cdecl sub_435580(int line);
void __cdecl sub_46D370(int id);
void __cdecl sub_46D9A0();
void __cdecl sub_4D06C0(int v);

// FUNCTION: 0x437DE0 screenStateAdvance
void __cdecl screenStateAdvance()
{
    if (g_screenFlag == 0) {
        if (sub_435330(g_screenLine) > sub_435580(g_screenLine))
            g_7007D4[g_screenLine] = g_7005F4;
        sub_46D370(8);
        sub_46D370(9);
        sub_46D370(0xB);
    }
    sub_46D9A0();
    sub_4D06C0(g_screenCursor);
    g_screenCursor = -1;
    g_screenTimer = 0;
    g_screenValue = 0;
    g_screenState = 13;
    memset(&g_screenX, 0, sizeof(g_screenX));
    g_screenH = 0;
    g_screenDirty = 0;
    g_screenSound = 0;
    g_screenLine = 0;
    g_screenFlag = 0;
    g_screenReady = 1;
}
