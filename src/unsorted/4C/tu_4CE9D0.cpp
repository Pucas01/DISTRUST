// STUB: 0x4CE9D0 sub_4CE9D0 (267 bytes)
void sub_4CE9D0()
{
}

// STUB: 0x4CEAE0 sub_4CEAE0 (58 bytes)
void sub_4CEAE0()
{
}

// FUNCTION: 0x4CEB20 sub_4CEB20
struct Rec4CEB20 {
    int a;
    int b;
    int c;
    int d;
    int e;
    char pad[0x18];
    int f;
    int g;
    float h;
    float i;
};
extern Rec4CEB20 g_740638[];
void __cdecl sub_4CEB20(unsigned int i)
{
    if (i <= 0xff) {
        Rec4CEB20* r = &g_740638[i];
        r->a = 0x1ff00;
        r->b = 0x20001;
        r->c = 0;
        r->d = 0;
        r->e = 0x2710;
        r->f = 0;
        r->g = 0;
        r->h = 960.0f;
        r->i = 544.0f;
    }
}

// STUB: 0x4CEBA0 sub_4CEBA0 (3496 bytes)
void sub_4CEBA0()
{
}
