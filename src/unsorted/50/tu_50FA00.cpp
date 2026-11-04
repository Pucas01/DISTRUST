struct E8 {
    int a;
    int b;
};

struct E16 {
    int a[4];
};

struct Impl50 {
    char pad0[0x18];
    E8* p18;
    E8* p1c;
    E8* p20;
    E8* p24;
    E8* p28;
    E8* p2c;
    E8* p30;
    E8* p34;
    E8* p38;
    E8* p3c;
    char pad40[8];
    E8* p48;
    E8* p4c;
    E8* p50;
    E8* p54;
    E8* p58;
    E16* p5c;
};

struct Holder50 {
    char pad[0x4C];
    Impl50* impl;
    int count38();
    int count50();
    int count20();
    int count2c();
    int count5c();
};

// FUNCTION: 0x50FA00 Holder50::count38
int Holder50::count38()
{
    return impl->p38 - impl->p30;
}

// STUB: 0x50FA10 sub_50FA10 (26 bytes)
void sub_50FA10()
{
}

// FUNCTION: 0x50FA30 Holder50::count50
int Holder50::count50()
{
    return impl->p50 - impl->p48;
}

// STUB: 0x50FA40 sub_50FA40 (7 bytes)
void sub_50FA40()
{
}

// STUB: 0x50FA50 sub_50FA50 (9 bytes)
void sub_50FA50()
{
}

// FUNCTION: 0x50FA60 Holder50::count20
int Holder50::count20()
{
    return impl->p20 - impl->p18;
}

// FUNCTION: 0x50FA70 Holder50::count2c
int Holder50::count2c()
{
    return impl->p2c - impl->p24;
}

// FUNCTION: 0x50FA80 Holder50::count5c
int Holder50::count5c()
{
    return (E16*)impl->p5c - (E16*)impl->p54;
}
