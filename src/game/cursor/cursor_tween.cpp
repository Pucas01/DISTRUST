struct Tween {
    unsigned char state;
    unsigned char b1;
    unsigned char b2;
    unsigned char flag;
    short step;
    short sub;
    short s4;
    short pad;
    int i8;
    float fEC;
    float fF0;
    float fF4;
    float fF8;
    short handle;
};
extern Tween g_73E4DC;
extern int g_698C38;
extern int g_698C48;
extern int g_698C50;

void __cdecl sub_4C8390(int handle);
void __cdecl sub_4C89A0(int handle, int arg);
void __cdecl sub_4C8910(int handle, int arg);
char __cdecl sub_4C88E0(int handle);
int __cdecl sub_497940(int a);
int __cdecl sub_4977D0(int a);
short __cdecl sub_4C8640(int a, int b);
void __cdecl sub_4C8C50(int handle, int arg);
void __cdecl sub_4C8B90(int a, int b);
void __cdecl sub_4C8D30(int handle, const char* name, int arg);
extern char g_623B74[];
extern char g_623B88[];
extern char g_623BA4[];
extern char g_623BBC[];
extern char g_623BD8[];
extern char g_623BF0[];

// FUNCTION: 0x496E00 releaseTween
void releaseTween()
{
    if (g_73E4DC.handle != -1) {
        sub_4C8390(g_73E4DC.handle);
        g_73E4DC.handle = -1;
    }
    g_73E4DC.state = 0;
}

// FUNCTION: 0x496E70 stopTween
void stopTween()
{
    if (g_73E4DC.state != 0 && g_73E4DC.state != 4) {
        g_73E4DC.state = 4;
        g_73E4DC.b1 = 0;
        g_73E4DC.step = 0;
    }
}

// FUNCTION: 0x496E90 getTweenPos
void __cdecl getTweenPos(float* x, float* y)
{
    *x = g_73E4DC.fF4;
    *y = g_73E4DC.fF8;
}

// FUNCTION: 0x496EC0 easeTweenTo
void __cdecl easeTweenTo(float x, float y)
{
    float dx = x - g_73E4DC.fF4;
    float dy = y - g_73E4DC.fF8;
    g_73E4DC.flag = 1;
    dx *= 0.5f;
    dy *= 0.5f;
    dx += g_73E4DC.fF4;
    dy += g_73E4DC.fF8;
    g_73E4DC.s4 = 0;
    g_73E4DC.i8 = 0;
    g_73E4DC.fF4 = dx;
    g_73E4DC.fEC = dx;
    g_73E4DC.fF8 = dy;
    g_73E4DC.fF0 = dy;
}

// FUNCTION: 0x496F40 startTween
void startTween()
{
    if (g_73E4DC.state != 1 && g_73E4DC.state != 2) {
        g_73E4DC.state = 1;
        g_73E4DC.b1 = 1;
        g_73E4DC.step = 0;
        g_73E4DC.sub = 0;
        g_73E4DC.flag = 0;
        g_73E4DC.s4 = 0;
        g_73E4DC.i8 = 0;
    }
}

// FUNCTION: 0x497200 stepTweenA
void stepTweenA()
{
    if (g_73E4DC.step == 0) {
        sub_4C89A0(g_73E4DC.handle, g_698C38);
        g_73E4DC.step++;
        g_73E4DC.sub = 0;
    } else if (g_73E4DC.step == 1) {
        if (sub_4C88E0(g_73E4DC.handle) == 1) {
            g_73E4DC.state = 2;
            g_73E4DC.step = 0;
        }
    }
}

// FUNCTION: 0x4974E0 stepTweenB
void stepTweenB()
{
    if (g_73E4DC.step == 0) {
        sub_4C8910(g_73E4DC.handle, g_698C48);
        g_73E4DC.step++;
        g_73E4DC.sub = 0;
    } else if (g_73E4DC.step == 1) {
        if (sub_4C88E0(g_73E4DC.handle) == 1) {
            g_73E4DC.state = 0;
            g_73E4DC.step = 0;
        }
    }
}

// FUNCTION: 0x497540 stepTweenC
void stepTweenC()
{
    if (g_73E4DC.step == 0) {
        sub_4C8910(g_73E4DC.handle, g_698C50);
        g_73E4DC.step++;
        g_73E4DC.sub = 0;
    } else if (g_73E4DC.step == 1) {
        if (sub_4C88E0(g_73E4DC.handle) == 1) {
            g_73E4DC.state = 0;
            g_73E4DC.step = 0;
        }
    }
}

// FUNCTION: 0x496D00 initTween
void __cdecl initTween(int a)
{
    if (g_73E4DC.handle != -1) {
        sub_4C8390(g_73E4DC.handle);
    }
    g_73E4DC.handle = sub_4C8640(sub_4977D0(a), sub_497940(a));
    if (g_73E4DC.handle == -1) {
        g_73E4DC.state = 0;
        return;
    }
    sub_4C8C50(g_73E4DC.handle, 0x2E7C);
    sub_4C8D30(g_73E4DC.handle, g_623B74, 4);
    sub_4C8D30(g_73E4DC.handle, g_623B88, 4);
    sub_4C8D30(g_73E4DC.handle, g_623BA4, 4);
    sub_4C8D30(g_73E4DC.handle, g_623BBC, 4);
    sub_4C8D30(g_73E4DC.handle, g_623BD8, 4);
    sub_4C8D30(g_73E4DC.handle, g_623BF0, 4);
    g_73E4DC.fEC = 480.0f;
    g_73E4DC.fF0 = 272.0f;
}

// FUNCTION: 0x496C00 closeTween
void closeTween()
{
    if (g_73E4DC.state != 0 && g_73E4DC.state != 3 && g_73E4DC.state != 4) {
        g_73E4DC.state = 3;
        g_73E4DC.step = 0;
    }
}

extern unsigned char g_6879EC;
void __cdecl sub_4C8C30(int h, int v);
void __cdecl sub_4C8AF0(int h, float x, float y);
void sub_496F70();
void sub_497200();
void sub_497260();
void sub_497540();
void sub_4974E0();

// FUNCTION: 0x496C30 updateTween
void updateTween()
{
    if (g_73E4DC.state == 0) {
        return;
    }
    if (g_6879EC == 0) {
        sub_4C8C30(g_73E4DC.handle, 1);
        sub_4C8B90(g_73E4DC.handle, 0);
        return;
    }
    sub_4C8C30(g_73E4DC.handle, 0);
    sub_4C8B90(g_73E4DC.handle, 1);
    if (g_73E4DC.b1 == 1) {
        sub_496F70();
    }
    unsigned char s = g_73E4DC.state;
    if (s == 1) {
        sub_497200();
    } else if (s == 2) {
        sub_497260();
    } else if (s == 3) {
        sub_497540();
    } else if (s == 4) {
        sub_4974E0();
    }
    sub_4C8AF0(g_73E4DC.handle, g_73E4DC.fF4 - 64.0f, g_73E4DC.fF8 - 64.0f);
}
