extern unsigned char g_73E4BC;
extern short g_73E4BE;
extern unsigned char g_73E4BC;
extern short g_73E4BE;

extern int g_73E4B4;
extern unsigned char g_73E4C5;

bool __cdecl touchTexture(int id, int generation);
extern short g_73E4B0;

extern unsigned char g_73E4C6;
extern unsigned char g_73E4C7;
extern short g_73E4CE;
extern short g_73E4D0;
extern signed char g_6A73F9;

// FUNCTION: 0x495D20 releaseTexture73E4B0
void __cdecl releaseTexture73E4B0()
{
    short id = g_73E4B0;
    if (id != -1) {
        touchTexture(id, 0);
        g_73E4B0 = -1;
    }
}

// STUB: 0x495D50 sub_495D50 (31 bytes)
void sub_495D50()
{
}

// STUB: 0x495D70 sub_495D70 (342 bytes)
void sub_495D70()
{
}

// STUB: 0x495ED0 sub_495ED0 (234 bytes)
void sub_495ED0()
{
}

// STUB: 0x495FD0 sub_495FD0 (187 bytes)
void sub_495FD0()
{
}

// STUB: 0x496090 sub_496090 (191 bytes)
void sub_496090()
{
}

// STUB: 0x496150 sub_496150 (652 bytes)
void sub_496150()
{
}

// FUNCTION: 0x4963E0 setPair73E4CE
void __cdecl setPair73E4CE(int a, int b)
{
    if (a == 0x10)
        a = 0xf;
    if (b == 0x10)
        b = 0xf;
    if (a == 10 || b == 10) {
        signed char c = g_6A73F9;
        if (c >= 0x13) {
            if (c <= 0x1e) {
                if (a == 10)
                    a = 0x12;
                if (b == 10)
                    b = 0x12;
            }
        }
    }
    g_73E4D0 = b;
    g_73E4CE = a;
}

// STUB: 0x496440 sub_496440 (163 bytes)
void sub_496440()
{
}

// STUB: 0x4964F0 sub_4964F0 (86 bytes)
void sub_4964F0()
{
}

// STUB: 0x496550 sub_496550 (33 bytes)
void sub_496550()
{
}

// STUB: 0x496580 sub_496580 (148 bytes)
void sub_496580()
{
}

// STUB: 0x496620 sub_496620 (122 bytes)
void sub_496620()
{
}

// FUNCTION: 0x4966A0 isState73E4BCIdle
int __cdecl isState73E4BCIdle()
{
    unsigned char c = g_73E4BC;
    if (c == 0)
        return 1;
    return c == 2;
}

// FUNCTION: 0x4966C0 setState73E4BC
void __cdecl setState73E4BC(unsigned char v)
{
    g_73E4BE = 0;
    g_73E4BC = 3;
    g_73E4C5 = v;
}

// STUB: 0x4966E0 sub_4966E0 (177 bytes)
void sub_4966E0()
{
}

// FUNCTION: 0x4967A0 pushState73E4BC
void __cdecl pushState73E4BC(unsigned char a, unsigned char b)
{
    g_73E4BE = 0;
    g_73E4C6 = g_73E4C5;
    g_73E4C5 = a;
    g_73E4BC = 5;
    g_73E4C7 = b;
}

// FUNCTION: 0x4967D0 setState73E4BC1
void setState73E4BC1()
{
    g_73E4BC = 1;
    g_73E4BE = 0;
}

// FUNCTION: 0x4967E0 setState73E4BC8
void setState73E4BC8()
{
    g_73E4BC = 8;
    g_73E4BE = 0;
}
