extern signed char g_screenState;
extern int g_screenTimer;
extern float g_7403E0;

void __cdecl sub_463190(int a, int b);
int __cdecl sub_4D6DA0(int key);

// FUNCTION: 0x437F80 screenStateCase0
void __cdecl screenStateCase0()
{
    int t;
    if (sub_4D6DA0(0x30)) {
        t = (int)((float)g_screenTimer + g_7403E0 * 3.0f);
        if (t > 14)
            t = 14;
    } else
        t = g_screenTimer;
    if (t >= 14) {
        g_screenState = 1;
        g_screenTimer = 0;
        return;
    }
    t = (int)((float)t + g_7403E0);
    g_screenTimer = t > 14 ? 14 : t;
}

// FUNCTION: 0x438000 screenStateCase1
void __cdecl screenStateCase1()
{
    int t;
    if (sub_4D6DA0(0x30)) {
        t = (int)((float)g_screenTimer + g_7403E0 * 3.0f);
        if (t > 10)
            t = 10;
    } else
        t = g_screenTimer;
    if (t >= 10) {
        g_screenState = 2;
        g_screenTimer = 0;
        return;
    }
    t = (int)((float)t + g_7403E0);
    g_screenTimer = t > 10 ? 10 : t;
}

// FUNCTION: 0x438080 screenStateCase2
void __cdecl screenStateCase2()
{
    int t;
    if (sub_4D6DA0(0x30)) {
        t = (int)((float)g_screenTimer + g_7403E0 * 3.0f);
        if (t > 38)
            t = 38;
    } else
        t = g_screenTimer;
    if (t >= 38) {
        g_screenState = 3;
        g_screenTimer = 0;
        sub_463190(0x81, 100);
        return;
    }
    t = (int)((float)t + g_7403E0);
    g_screenTimer = t > 38 ? 38 : t;
}

extern short g_6E47C8;
char __cdecl sub_46E930(int low, int high, int value);
int __cdecl sub_4D6EE0(int key);
void __cdecl sub_46D230(int a, int b);
extern short g_screenSound;

// FUNCTION: 0x43BAA0 screenStateCase9
void __cdecl screenStateCase9()
{
    int timer = g_screenTimer;
    if (timer >= 0x35) {
        g_screenState = 10;
        g_screenTimer = 14;
        return;
    }
    int t;
    if (sub_4D6DA0(0x30)) {
        t = (int)((float)g_screenTimer + g_7403E0 * 3.0f);
        t = t > 0x35 ? 0x35 : t;
    } else {
        t = g_screenTimer;
    }
    t = (int)((float)t + g_7403E0);
    t = t > 0x35 ? 0x35 : t;
    g_screenTimer = t;
    if (sub_46E930(timer, t, 0x20))
        g_screenTimer = 0x20;
}

// FUNCTION: 0x43BB50 screenStateCase7
void __cdecl screenStateCase7()
{
    if (g_screenTimer >= 0x45) {
        g_screenState = 8;
        g_screenTimer = 0;
        return;
    }
    int t;
    if (sub_4D6DA0(0x30)) {
        t = (int)((float)g_screenTimer + g_7403E0 * 3.0f);
        t = t > 0x45 ? 0x45 : t;
    } else {
        t = g_screenTimer;
    }
    t = (int)((float)t + g_7403E0);
    g_screenTimer = t > 0x45 ? 0x45 : t;
}

// FUNCTION: 0x43BBD0 screenStateCase8
void __cdecl screenStateCase8()
{
    if (sub_4D6EE0(0x16)) {
        sub_46D230(2, g_screenSound);
        if (g_6E47C8 > 999)
            g_6E47C8 = 999;
        g_screenTimer = 0;
        g_screenState = 9;
        sub_463190(4, 100);
    }
}
