struct Slot24 {
    char* name;
    int i4;
    char p8[2];
    unsigned char bA;
    unsigned char bB;
    unsigned char bC;
    unsigned char bD;
    char pE[2];
    unsigned char b10;
    char p11[0x24 - 0x11];
};

struct Model2 {
    unsigned char on;
    char p[0xd0 - 1];
    Slot24* slots;
};

struct Part2 {
    char p0[4];
    unsigned char b4;
    char p5[2];
    unsigned char b7;
    unsigned char b8;
    unsigned char b9;
    unsigned char bA;
    unsigned char bB;
    char pC[0xc8 - 0xc];
    int c8;
};

extern char* g_entryTable;
int __cdecl sub_4CD500(Model2* m, const char* name);
Part2* __cdecl sub_4CDB80(Model2* m, const char* name);
void __cdecl sub_4CE9D0(int a);

// FUNCTION: 0x4C9160 setSlotB10
void __cdecl setSlotB10(unsigned idx, const char* name, char v)
{
    if (idx > 0x6D) {
        return;
    }
    Model2* m = (Model2*)(g_entryTable + idx * 256);
    if (!m->on) {
        return;
    }
    int s = sub_4CD500(m, name);
    if (s < 0) {
        return;
    }
    m->slots[s].b10 = v;
    Part2* p = sub_4CDB80(m, name);
    if (p) {
        p->b4 = v;
    }
}

// FUNCTION: 0x4C9290 clearSlot
void __cdecl clearSlot(unsigned idx, const char* name)
{
    if (idx > 0x6D) {
        return;
    }
    Model2* m = (Model2*)(g_entryTable + idx * 256);
    if (!m->on) {
        return;
    }
    int s = sub_4CD500(m, name);
    if (s < 0) {
        return;
    }
    m->slots[s].i4 = 0;
    Part2* p = sub_4CDB80(m, name);
    if (!p) {
        return;
    }
    if (p->c8 == 0) {
        return;
    }
    if (p->bB == 1) {
        sub_4CE9D0(p->b7);
    }
    p->c8 = 0;
    p->bB = 0;
}

// FUNCTION: 0x4C8E50 setSlot
void __cdecl setSlot(unsigned idx, const char* name, int a, unsigned char b, unsigned char c, unsigned char d, unsigned char e)
{
    if (idx > 0x6D) {
        return;
    }
    Model2* m = (Model2*)(g_entryTable + idx * 256);
    if (!m->on) {
        return;
    }
    int s = sub_4CD500(m, name);
    if (s < 0) {
        return;
    }
    Slot24* sl = &m->slots[s];
    sl->i4 = a;
    sl->bA = b;
    sl->bB = c;
    sl->bC = d;
    sl->bD = e;
    Part2* p = sub_4CDB80(m, name);
    if (!p) {
        return;
    }
    if (p->bB == 1) {
        sub_4CE9D0(p->b7);
        p->bB = 0;
    }
    p->c8 = sl->i4;
    p->b7 = sl->bA;
    p->b8 = sl->bB;
    p->b9 = sl->bC;
    p->bA = sl->bD;
}
