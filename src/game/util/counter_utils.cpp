void sub_44B530();
void sub_44F3F0();

extern unsigned short g_6FD878[];
extern unsigned short g_6FD684[];

extern unsigned char g_6E4737;

void __cdecl sub_423240(int value);

// STUB: 0x448DD0 sub_448DD0 (354 bytes)
void sub_448DD0()
{
}

// STUB: 0x448F40 sub_448F40 (170 bytes)
void sub_448F40()
{
}

// STUB: 0x448FF0 sub_448FF0 (429 bytes)
void sub_448FF0()
{
}

// STUB: 0x4491A0 sub_4491A0 (1197 bytes)
void sub_4491A0()
{
}

// STUB: 0x449680 sub_449680 (1459 bytes)
void sub_449680()
{
}

// STUB: 0x449C40 sub_449C40 (242 bytes)
void sub_449C40()
{
}

// STUB: 0x449D40 sub_449D40 (198 bytes)
void sub_449D40()
{
}

// STUB: 0x449E10 sub_449E10 (462 bytes)
void sub_449E10()
{
}

// STUB: 0x449FE0 sub_449FE0 (340 bytes)
void sub_449FE0()
{
}

// STUB: 0x44A140 sub_44A140 (408 bytes)
void sub_44A140()
{
}

// STUB: 0x44A2E0 sub_44A2E0 (419 bytes)
void sub_44A2E0()
{
}

// STUB: 0x44A490 sub_44A490 (744 bytes)
void sub_44A490()
{
}

// FUNCTION: 0x44A780 checkCode6E4737
__declspec(safebuffers) void __cdecl checkCode6E4737(int a, int b)
{
    if (b == 0 || (a == 10 && b == 0x13)) {
        unsigned char t[11] = { 0x15, 0x29, 0x3d, 0x51, 0x94, 0x9b, 0x12, 0xa0, 0x01, 0x65, 0xf8 };
        unsigned char c = g_6E4737;
        for (int i = 0; i < 11; i++) {
            if (t[i] == c) {
                sub_423240(0);
                return;
            }
        }
        sub_423240(1);
        return;
    }
    sub_423240(0);
}

// FUNCTION: 0x44A7E0 isKnownCode6E4737
__declspec(safebuffers) bool __cdecl isKnownCode6E4737()
{
    unsigned char t[11] = { 0x15, 0x29, 0x3d, 0x51, 0x94, 0x9b, 0x12, 0xa0, 0x01, 0x65, 0xf8 };
    unsigned char c = g_6E4737;
    for (int i = 0; i < 11; i++) {
        if (t[i] == c)
            return true;
    }
    return false;
}

// STUB: 0x44A820 sub_44A820 (311 bytes)
void sub_44A820()
{
}

// FUNCTION: 0x44A960 sub_44A960
int __cdecl sub_44A960(int key, int n)
{
    for (int i = 0; i < n; i++) {
        if (g_6FD878[i] == key)
            return g_6FD684[i];
    }
    return -1;
}

// STUB: 0x44A9A0 sub_44A9A0 (129 bytes)
void sub_44A9A0()
{
}

// STUB: 0x44AA30 sub_44AA30 (430 bytes)
void sub_44AA30()
{
}

// STUB: 0x44ABE0 sub_44ABE0 (148 bytes)
void sub_44ABE0()
{
}

// FUNCTION: 0x44AC80 carryTens
void __cdecl carryTens(int* a, int* b)
{
    if (*a >= 30) {
        int q = *a / 10;
        int nb = q * 100 + *b;
        *a -= q * 10;
        *b = nb;
    }
}

// FUNCTION: 0x44ACC0 callPair44B530
void callPair44B530()
{
    sub_44B530();
    sub_44F3F0();
}

// STUB: 0x44ACE0 sub_44ACE0 (911 bytes)
void sub_44ACE0()
{
}

// STUB: 0x44B070 sub_44B070 (996 bytes)
void sub_44B070()
{
}

// STUB: 0x44B460 sub_44B460 (207 bytes)
void sub_44B460()
{
}
