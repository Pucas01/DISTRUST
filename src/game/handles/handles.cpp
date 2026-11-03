extern short g_handlesA[0x14];
extern short g_handlesB[0x14];
extern short g_handlesC[0x19];

void __cdecl sub_4CE9D0(int slot);
void __cdecl sub_4CF950(int slot, int value);

// FUNCTION: 0x46DAD0 releaseAllHandlesA
void __cdecl releaseAllHandlesA()
{
    for (int i = 0; i < 0x14; i++) {
        if (g_handlesA[i] != -1) {
            sub_4CE9D0(i + 0x32);
            g_handlesA[i] = -1;
        }
    }
}

// FUNCTION: 0x46DB10 setHandlesAValue
void __cdecl setHandlesAValue(unsigned char value)
{
    for (int i = 0; i < 0x14; i++) {
        if (g_handlesA[i] != -1)
            sub_4CF950(i + 0x32, value);
    }
}

// FUNCTION: 0x46D9A0 releaseAllHandlesB
void __cdecl releaseAllHandlesB()
{
    for (int i = 0; i < 0x14; i++) {
        if (g_handlesB[i] != -1) {
            sub_4CE9D0(i + 0x46);
            g_handlesB[i] = -1;
        }
    }
}

// FUNCTION: 0x46D9E0 freeHandleB
void __cdecl freeHandleB(int id)
{
    for (int i = 0; i < 0x14; i++) {
        if (id == g_handlesB[i]) {
            sub_4CE9D0(i + 0x46);
            g_handlesB[i] = -1;
            return;
        }
    }
}

// FUNCTION: 0x46DAA0 allocHandleB
int __cdecl allocHandleB(short id)
{
    for (int i = 0; i < 0x14; i++) {
        if (g_handlesB[i] == -1) {
            g_handlesB[i] = id;
            return i + 0x46;
        }
    }
    return -2;
}

// FUNCTION: 0x46DC40 releaseAllHandlesC
void __cdecl releaseAllHandlesC()
{
    for (int i = 0; i < 0x19; i++) {
        if (g_handlesC[i] != -1) {
            sub_4CE9D0(i + 0x5A);
            g_handlesC[i] = -1;
        }
    }
}

// FUNCTION: 0x46DC80 freeHandleC
void __cdecl freeHandleC(int id)
{
    for (int i = 0; i < 0x19; i++) {
        if (id == g_handlesC[i]) {
            sub_4CE9D0(i + 0x5A);
            g_handlesC[i] = -1;
            return;
        }
    }
}

// FUNCTION: 0x46DD20 findHandleC
int __cdecl findHandleC(int id)
{
    for (int i = 0; i < 0x19; i++) {
        if (id == g_handlesC[i])
            return i + 0x5A;
    }
    return -2;
}

// FUNCTION: 0x46DD50 allocHandleC
int __cdecl allocHandleC(short id)
{
    for (int i = 0; i < 0x19; i++) {
        if (g_handlesC[i] == -1) {
            g_handlesC[i] = id;
            return i + 0x5A;
        }
    }
    return -2;
}

// FUNCTION: 0x46DA20 resetHandlesB
void __cdecl resetHandlesB()
{
    for (int i = 0; i < 0x14; i++)
        g_handlesB[i] = -1;
}

// FUNCTION: 0x46DB90 resetHandlesA
void __cdecl resetHandlesA()
{
    for (int i = 0; i < 0x14; i++)
        g_handlesA[i] = -1;
}

// FUNCTION: 0x46DCC0 resetHandlesC
void __cdecl resetHandlesC()
{
    for (int i = 0; i < 0x19; i++)
        g_handlesC[i] = -1;
}

extern short g_7016A5;
extern char g_7016A7;

// FUNCTION: 0x46D980 clearFlags7016A5
void __cdecl clearFlags7016A5()
{
    g_7016A5 = 0;
    g_7016A7 = 0;
}
