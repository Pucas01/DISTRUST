extern signed char g_screenState;
extern unsigned char g_screenFlag;
extern int g_screenTimer;
extern int g_screenValue;
extern short g_screenX;
extern short g_screenY;
extern int g_screenW;
extern int g_screenH;
extern short g_screenSound;
extern short g_screenLine;
extern unsigned g_6E48F4[];
extern float g_7403E0;

int __cdecl sub_435D10(int line, int flag);
int __cdecl sub_435A40(int value);
int __cdecl sub_435F10(int line, int index);
int __cdecl sub_435380(int line, int flag);
char __cdecl sub_46DD80(const unsigned* flags, int bit);
char __cdecl sub_46E930(int low, int high, int value);
int __cdecl sub_46E2F0(short* a, short* b, int* c, int* d, int e, int f, int g, int h, int i, int j, int k);
int __cdecl playSound(int a, int b);
int __cdecl testButtonA(int key);

// FUNCTION: 0x437B00 screenStateCase3
void __cdecl screenStateCase3()
{
    int result = 0;
    int count = sub_435D10(g_screenLine, g_screenFlag);
    int timer = g_screenTimer;
    int limit = count * 30;
    if (timer >= limit - 1) {
        g_screenSound = (short)sub_435A40(g_screenValue);
        if (sub_46DD80(g_6E48F4, 0x1B))
            g_screenSound += 10;
        g_screenState = 4;
        g_screenTimer = 0;
        return;
    }
    if (timer != 0 && timer < limit && timer % 30 == 0) {
        g_screenValue += sub_435F10(g_screenLine, timer / 30);
        result = 2;
    }
    if (sub_46E2F0(&g_screenX, &g_screenY, &g_screenH, &g_screenW, 0, result, 0,
                   sub_435380(g_screenLine, g_screenFlag), 0, count, 1) == -4)
        playSound(0x81, 100);
    timer = g_screenTimer;
    int next;
    if (testButtonA(0x30)) {
        next = (int)((float)g_screenTimer + g_7403E0 * 3.0f);
        next = next > limit ? limit : next;
    } else {
        next = g_screenTimer;
    }
    int after = (int)((float)next + g_7403E0);
    after = after > limit ? limit : after;
    g_screenTimer = after;
    int boundary = 0;
    for (; count > 0; count--) {
        after = g_screenTimer;
        if (sub_46E930(timer, after, boundary))
            after = boundary;
        g_screenTimer = after;
        boundary += 30;
    }
}

// FUNCTION: 0x437CB0 screenStateCase4
void __cdecl screenStateCase4()
{
    int result = 0;
    int count = sub_435D10(g_screenLine, g_screenFlag);
    int timer = g_screenTimer;
    if (timer >= 0x72) {
        g_screenState = 5;
        g_screenTimer = 0x11;
        return;
    }
    if (timer == 5)
        result = 2;
    if (sub_46E2F0(&g_screenX, &g_screenY, &g_screenH, &g_screenW, 0, result, 0,
                   sub_435380(g_screenLine, g_screenFlag), 0, count + 1, 1) == -4)
        playSound(0x82, 100);
    timer = g_screenTimer;
    int next;
    if (testButtonA(0x30)) {
        next = (int)((float)g_screenTimer + g_7403E0 * 3.0f);
        next = next > 0x72 ? 0x72 : next;
    } else {
        next = g_screenTimer;
    }
    int after = (int)((float)next + g_7403E0);
    after = after > 0x72 ? 0x72 : after;
    g_screenTimer = after;
    if (sub_46E930(timer, after, 5))
        g_screenTimer = 5;
}
