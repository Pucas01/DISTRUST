extern void* g_73E9D0;
extern void* g_73E9CC;
void __cdecl freeUnmanaged(void* p);

struct Slot10F0 {
    unsigned char b0;
    char pad1[8];
    unsigned char b9;
    char pad_a[0xA];
    unsigned short w14;
    char pad16[0x10DA];
};

void __cdecl sub_4CE9D0(int id);

// STUB: 0x4A0490 sub_4A0490 (72 bytes)
void sub_4A0490()
{
}

// FUNCTION: 0x4A04E0 sub_4A04E0
int __cdecl sub_4A04E0(int id)
{
    char* p = (char*)g_73E9CC;
    if (!p)
        return -1;
    for (int i = 0; i < 10; i++, p += 0x10f0) {
        if (p[0] && *(unsigned short*)(p + 0x14) == id)
            return (unsigned char)p[0xd28];
    }
    return -1;
}

// FUNCTION: 0x4A0530 sub_4A0530
void __cdecl sub_4A0530(unsigned int i)
{
    if (g_73E9CC) {
        if (i <= 9) {
            char* p = (char*)g_73E9CC + i * 0x10f0;
            sub_4CE9D0(*(unsigned short*)(p + 0x14));
            p[0] = 0;
        }
    }
}

// STUB: 0x4A0560 sub_4A0560 (1061 bytes)
void sub_4A0560()
{
}

// FUNCTION: 0x4A0990 sub_4A0990
int __cdecl sub_4A0990(unsigned int i)
{
    if (g_73E9CC && i <= 9)
        return *(unsigned short*)((char*)g_73E9CC + i * 0x10f0 + 0x14);
    return -1;
}

// FUNCTION: 0x4A09C0 freeBuffers73E9
void freeBuffers73E9()
{
    if (g_73E9D0) {
        freeUnmanaged(g_73E9D0);
        g_73E9D0 = 0;
    }
    if (g_73E9CC) {
        freeUnmanaged(g_73E9CC);
        g_73E9CC = 0;
    }
}

// STUB: 0x4A0A00 sub_4A0A00 (93 bytes)
void sub_4A0A00()
{
}

// STUB: 0x4A0A60 sub_4A0A60 (295 bytes)
void sub_4A0A60()
{
}

// STUB: 0x4A0B90 sub_4A0B90 (103 bytes)
void sub_4A0B90()
{
}

// STUB: 0x4A0C00 sub_4A0C00 (103 bytes)
void sub_4A0C00()
{
}

// STUB: 0x4A0C70 sub_4A0C70 (103 bytes)
void sub_4A0C70()
{
}

// STUB: 0x4A0CE0 sub_4A0CE0 (80 bytes)
void sub_4A0CE0()
{
}

// FUNCTION: 0x4A0D30 sub_4A0D30
void __cdecl sub_4A0D30(int id)
{
    char* p = (char*)g_73E9CC;
    if (!p)
        return;
    for (int i = 0; i < 10; i++, p += 0x10f0) {
        if (p[0] && *(unsigned short*)(p + 0x14) == id) {
            p[0xa] = 7;
            *(unsigned short*)(p + 0xc) = 0;
            return;
        }
    }
}

// FUNCTION: 0x4A0D70 sub_4A0D70
int sub_4A0D70()
{
    char* p = (char*)g_73E9CC;
    if (!p)
        return 1;
    for (int i = 0; i < 10; i++, p += 0x10f0) {
        if (p[0])
            return 0;
    }
    return 1;
}

// FUNCTION: 0x4A0DA0 findSlotByWord
int __cdecl findSlotByWord(int id)
{
    Slot10F0* p = (Slot10F0*)g_73E9CC;
    if (!p)
        return -1;
    for (int i = 0; i < 10; i++, p++) {
        if (p->b0 && p->w14 == id)
            return p->b9;
    }
    return -1;
}

// STUB: 0x4A0DE0 sub_4A0DE0 (1445 bytes)
void sub_4A0DE0()
{
}

// FUNCTION: 0x4A1390 getSlotOrigin
void __cdecl getSlotOrigin(unsigned int index, int* x, int* y)
{
    char* base = (char*)g_73E9CC;
    *x = 0;
    *y = 0;
    if (base && index <= 9) {
        char* s = base + index * 0x10F0;
        *x = (int)*(float*)(s + 0xD08);
        *y = (int)*(float*)(s + 0xD0C);
    }
}

// FUNCTION: 0x4A13E0 sub_4A13E0
void __cdecl sub_4A13E0(unsigned int i)
{
    if (g_73E9CC && i <= 9)
        *((char*)g_73E9CC + i * 0x10f0 + 1) = 1;
}

// STUB: 0x4A1410 sub_4A1410 (150 bytes)
void sub_4A1410()
{
}
