struct Obj4C6800 {
    char p0[0x14];
    unsigned char b14;
    char p15[0x19];
    short w2e;
    char p30[0xA4];
    float fd4;
    float fd8;
    int idc;
    int ie0;
    int ie4;
    int ie8;
    int iec;
    int if0;
    unsigned char wf4lo;
    unsigned char wf4hi;
    short pf6;
    int df8;
};
extern char* g_entryTable;

// FUNCTION: 0x4C66C0 getEntryOffset
int __cdecl getEntryOffset(unsigned char* p, int idx)
{
    if (p) {
        int n = (((p[3] << 8 | p[2]) << 8 | p[1]) << 8) | p[0];
        if (idx >= 0 && idx < n)
            return ((int*)p)[idx + 1];
    }
    return -1;
}

// STUB: 0x4C6710 sub_4C6710 (121 bytes)
void sub_4C6710()
{
}

// STUB: 0x4C6790 sub_4C6790 (108 bytes)
void sub_4C6790()
{
}

// FUNCTION: 0x4C6800 resetObj4C6800
void __cdecl resetObj4C6800(Obj4C6800* o)
{
    o->b14 = 0;
    o->wf4lo = 0xFF;
    o->wf4hi = 0xFF;
    o->w2e = 0;
    o->df8 = 0;
    o->fd4 = 480.0f;
    o->fd8 = 272.0f;
    o->idc = 0;
    o->ie0 = 0;
    o->ie4 = 0;
    o->ie8 = 0;
    o->iec = 0;
    o->if0 = 0;
}

// STUB: 0x4C6860 sub_4C6860 (880 bytes)
void sub_4C6860()
{
}

// STUB: 0x4C6BD0 sub_4C6BD0 (128 bytes)
void sub_4C6BD0()
{
}

// STUB: 0x4C6C50 sub_4C6C50 (307 bytes)
void sub_4C6C50()
{
}

// STUB: 0x4C6D90 sub_4C6D90 (400 bytes)
void sub_4C6D90()
{
}

// STUB: 0x4C6FD0 sub_4C6FD0 (2310 bytes)
void sub_4C6FD0()
{
}

// STUB: 0x4C78E0 sub_4C78E0 (87 bytes)
void sub_4C78E0()
{
}

// STUB: 0x4C7940 sub_4C7940 (900 bytes)
void sub_4C7940()
{
}

// STUB: 0x4C7CD0 sub_4C7CD0 (110 bytes)
void sub_4C7CD0()
{
}

// STUB: 0x4C7D40 sub_4C7D40 (160 bytes)
void sub_4C7D40()
{
}

// STUB: 0x4C7DE0 sub_4C7DE0 (323 bytes)
void sub_4C7DE0()
{
}

// STUB: 0x4C7F30 sub_4C7F30 (63 bytes)
void sub_4C7F30()
{
}

// STUB: 0x4C7F70 sub_4C7F70 (296 bytes)
void sub_4C7F70()
{
}

// STUB: 0x4C80A0 sub_4C80A0 (364 bytes)
void sub_4C80A0()
{
}

// FUNCTION: 0x4C8210 sub_4C8210
void __cdecl sub_4C8210(unsigned int i, char v)
{
    if (i <= 0x6d)
        g_entryTable[(i << 8) + 0x13] = v;
}

// STUB: 0x4C8230 sub_4C8230 (301 bytes)
void sub_4C8230()
{
}

// FUNCTION: 0x4C8360 sub_4C8360
void __cdecl sub_4C8360(unsigned int i, float a, float b)
{
    if (i <= 0x6d) {
        char* e = g_entryTable + (i << 8);
        if (e[0]) {
            *(float*)(e + 0x58) = a;
            *(float*)(e + 0x5c) = b;
        }
    }
}

// STUB: 0x4C8390 sub_4C8390 (468 bytes)
void sub_4C8390()
{
}

// STUB: 0x4C8570 sub_4C8570 (62 bytes)
void sub_4C8570()
{
}

// FUNCTION: 0x4C85B0 sub_4C85B0
int __cdecl sub_4C85B0(unsigned int i)
{
    if (i <= 0x6d) {
        char* e = g_entryTable + (i << 8);
        if (e[0])
            return *(short*)(e + 0x20);
    }
    return -1;
}
