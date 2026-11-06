extern unsigned char g_73C3C0;
extern short g_73C3C6;
extern unsigned char g_73C3C2;
extern unsigned char g_68DF50[];
void __cdecl sub_4230B0();
void __cdecl sub_41AE40();
extern unsigned char g_6E4736;

// FUNCTION: 0x441D90 sub_441D90
void sub_441D90()
{
    unsigned char c = g_73C3C0;
    if (c != 0 && c != 4) {
        g_73C3C0 = 4;
        g_73C3C6 = 0;
    }
}

// FUNCTION: 0x441DB0 sub_441DB0
void __cdecl sub_441DB0(int a)
{
    g_73C3C0 = (unsigned char)(((a != 1) - 1) & 3);
}

// STUB: 0x441DD0 sub_441DD0 (129 bytes)
void sub_441DD0()
{
}

// STUB: 0x441E60 sub_441E60 (141 bytes)
void sub_441E60()
{
}

// STUB: 0x441EF0 sub_441EF0 (1537 bytes)
void sub_441EF0()
{
}

// STUB: 0x442500 sub_442500 (1411 bytes)
void sub_442500()
{
}

// STUB: 0x442A90 sub_442A90 (2648 bytes)
void sub_442A90()
{
}

// STUB: 0x4434F0 sub_4434F0 (316 bytes)
void sub_4434F0()
{
}

// FUNCTION: 0x443630 sub_443630
int sub_443630()
{
    unsigned char c = g_73C3C2;
    if (c != 0 && c < 5)
        return g_68DF50[c];
    return 0;
}

// STUB: 0x443650 sub_443650 (4443 bytes)
void sub_443650()
{
}

// STUB: 0x4447B0 sub_4447B0 (55 bytes)
void sub_4447B0()
{
}

// STUB: 0x4447F0 sub_4447F0 (275 bytes)
void sub_4447F0()
{
}

// STUB: 0x444910 sub_444910 (22 bytes)
void sub_444910()
{
}

// STUB: 0x444930 sub_444930 (33 bytes)
void sub_444930()
{
}

// STUB: 0x444960 sub_444960 (458 bytes)
void sub_444960()
{
}

// STUB: 0x444B30 sub_444B30 (408 bytes)
void sub_444B30()
{
}

// STUB: 0x444CD0 sub_444CD0 (818 bytes)
void sub_444CD0()
{
}

// STUB: 0x445020 sub_445020 (13625 bytes)
void sub_445020()
{
}

// STUB: 0x448790 sub_448790 (468 bytes)
void sub_448790()
{
}

// STUB: 0x448970 sub_448970 (150 bytes)
void sub_448970()
{
}

// STUB: 0x448A10 sub_448A10 (457 bytes)
void sub_448A10()
{
}

// STUB: 0x448BE0 sub_448BE0 (58 bytes)
void sub_448BE0()
{
}

// STUB: 0x448C20 sub_448C20 (123 bytes)
void sub_448C20()
{
}

// STUB: 0x448CA0 sub_448CA0 (292 bytes)
void sub_448CA0()
{
}
