extern signed char g_screenState;
extern unsigned char g_screenDirty;
extern unsigned char g_screenFlag;
extern int g_screenTimer;
extern short g_screenX;
extern short g_screenY;
extern int g_screenW;
extern int g_screenH;
extern short g_screenLine;
extern int g_6A9BE4[];
extern float g_7403E0;

int __cdecl sub_435D10(int line, int flag);
int __cdecl sub_435380(int line, int flag);
int __cdecl sub_435720(int line, int x);
int __cdecl sub_435D40(int line, int x);
int __cdecl sub_4354B0(int line);
int __cdecl sub_435290(int line);
int __cdecl sub_46E2F0(short* a, short* b, int* c, int* d, int e, int f, int g, int h, int i, int j, int k);
void __cdecl sub_46E690(int a, int b, int c);
int __cdecl playSound(int a, int b);
void __cdecl sub_4C89A0(int a, const char* name);
char __cdecl isEntryDone(unsigned int index);
void __cdecl startFade(int a, int b, int c);
int __cdecl testButtonA(int key);
int __cdecl testButtonC(int key);
int __cdecl testButtonB(int key);
int __cdecl confirmFlag();
int __cdecl cancelFlag();

static __forceinline void screenMenuTick()
{
    int t;
    if (testButtonA(0x30)) {
        t = (int)((float)g_screenTimer + g_7403E0 * 3.0f);
        t = t > 0xD1 ? 0xD1 : t;
    } else {
        t = g_screenTimer;
    }
    t = (int)((float)t + g_7403E0);
    g_screenTimer = t > 0xD1 ? 0xD1 : t;
}

// FUNCTION: 0x43B850 screenStateCase5
void __cdecl screenStateCase5()
{
    if (g_screenDirty) {
        if (isEntryDone(g_6A9BE4[0])) {
            g_screenTimer = 0;
            g_screenState = 7;
            g_screenDirty = 0;
        }
        return;
    }
    int keys = 0;
    int count = sub_435D10(g_screenLine, g_screenFlag);
    if (testButtonB(0x16))
        keys = confirmFlag();
    if (testButtonB(0x17))
        keys |= cancelFlag();
    if (testButtonC(0x14))
        keys |= 1;
    if (testButtonC(0x15))
        keys |= 2;
    int last = count + 1;
    int result = sub_46E2F0(&g_screenX, &g_screenY, &g_screenH, &g_screenW, 0, keys, 0,
                            sub_435380(g_screenLine, g_screenFlag), 0, last, 0);
    if (g_screenTimer == 0) {
        int index;
        if (g_screenFlag)
            index = sub_4354B0(g_screenLine);
        else
            index = sub_435290(g_screenLine);
        sub_4C89A0(g_6A9BE4[0], "fl_in_2");
        sub_46E690(g_6A9BE4[0], 0, g_6A9BE4[index]);
    }
    if (result == -2) {
        sub_4C89A0(g_6A9BE4[0], "fl_out");
        g_screenDirty = 0;
        playSound(5, 100);
    } else if (result == -4) {
        g_screenState = 6;
        g_screenTimer = 0;
        return;
    } else if (result > -1 && result < last) {
        if (!g_screenFlag) {
            sub_4C89A0(g_6A9BE4[0], "fl_out");
            g_screenDirty = 1;
            playSound(4, 100);
            return;
        }
    } else if (result == last && g_screenFlag) {
        startFade(1, 1, 10);
        g_screenState = 0xB;
        return;
    }
    screenMenuTick();
}

// FUNCTION: 0x43B5E0 screenStateCase6
void __cdecl screenStateCase6()
{
    int keys = 0;
    int count = sub_435D10(g_screenLine, g_screenFlag);
    if (testButtonB(0x16))
        keys = 0x10;
    if (testButtonB(0x17))
        keys |= 0x20;
    if (testButtonC(0x14))
        keys |= 0x100001;
    else if (testButtonC(0x15))
        keys |= 0x200002;
    int last = count + 1;
    int result = sub_46E2F0(&g_screenX, &g_screenY, &g_screenH, &g_screenW, 0, keys, 0,
                            sub_435380(g_screenLine, g_screenFlag), 0, last, 0);
    if (g_screenTimer == 0) {
        int index;
        if (g_screenFlag)
            index = sub_435720(g_screenLine, g_screenX);
        else
            index = sub_435D40(g_screenLine, g_screenX);
        sub_4C89A0(g_6A9BE4[0], "fl_in_2");
        sub_46E690(g_6A9BE4[0], 0, g_6A9BE4[index]);
    }
    if (result == -2) {
        sub_4C89A0(g_6A9BE4[0], "fl_out");
        g_screenDirty = 0;
        playSound(5, 100);
    } else if (result == -4) {
        if (g_screenY == count)
            g_screenState = (signed char)(g_screenDirty ? 7 : 5);
        g_screenTimer = 0;
        return;
    } else if (result > -1 && result < last) {
        if (!g_screenFlag) {
            sub_4C89A0(g_6A9BE4[0], "fl_out");
            g_screenY = (short)count;
            g_screenDirty = 1;
            playSound(4, 100);
            return;
        }
    } else if (result == last && g_screenFlag) {
        startFade(1, 1, 10);
        g_screenState = 0xC;
        return;
    }
    screenMenuTick();
}
