int __cdecl sub_4C93E0(int a, int b, int bits);

struct Rec4CA {
    char p0[4];
    short w4;
    char p6[6];
    unsigned char b0c;
    unsigned char b0d;
    unsigned char b0e;
    unsigned char b0f;
    int d10;
    int d14;
    int d18;
    int d1c;
    char pad[0x84];
};
struct Owner4CA {
    char p0[0x24];
    short count;
    char p26[0xA2];
    Rec4CA* recs;
};

// FUNCTION: 0x4C93A0 readSignedBits
int __cdecl readSignedBits(int a, int b, int bits)
{
    if (!bits)
        return 0;
    int v = sub_4C93E0(a, b, bits);
    int m = 1 << (bits - 1);
    if (v & m)
        v |= -1 << bits;
    return v;
}

// STUB: 0x4C93E0 sub_4C93E0 (96 bytes)
void sub_4C93E0()
{
}

// STUB: 0x4C9440 sub_4C9440 (84 bytes)
void sub_4C9440()
{
}

// STUB: 0x4C94A0 sub_4C94A0 (3301 bytes)
void sub_4C94A0()
{
}

// FUNCTION: 0x4CA190 clearRecById
void __cdecl clearRecById(Owner4CA* o, short id)
{
    if (!o->recs)
        return;
    for (int i = 0; i < o->count; i++) {
        Rec4CA* r = &o->recs[i];
        if (r->w4 == id) {
            r->p0[0] = 0;
            *(unsigned short*)&r->w4 = 0xFFFF;
        }
    }
}

// STUB: 0x4CA1F0 sub_4CA1F0 (800 bytes)
void sub_4CA1F0()
{
}

// FUNCTION: 0x4CA510 setRecBytes
void __cdecl setRecBytes(Owner4CA* o, short id, int a, int b, int c, int d)
{
    if (!o->recs)
        return;
    for (int i = 0; i < o->count; i++) {
        Rec4CA* r = &o->recs[i];
        if (r->w4 == id) {
            r->b0c = a;
            r->b0d = b;
            r->b0e = c;
            r->b0f = d;
        }
    }
}

// FUNCTION: 0x4CA570 setRecInts
void __cdecl setRecInts(Owner4CA* o, short id, int a, int b, int c, int d)
{
    if (!o->recs)
        return;
    for (int i = 0; i < o->count; i++) {
        Rec4CA* r = &o->recs[i];
        if (r->w4 == id) {
            r->d10 = a;
            r->d14 = b;
            r->d18 = c;
            r->d1c = d;
        }
    }
}
