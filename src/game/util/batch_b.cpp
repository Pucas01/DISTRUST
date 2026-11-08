struct Vec2f {
    float x;
    float y;
};

extern int g_73C52C;
extern int g_73C530;
extern float g_623418;
extern float g_623160;
extern int g_7005F4[];
extern unsigned char g_6A9C77;
extern unsigned char g_6A9C78;
extern short g_745910;

struct Slot8 {
    int handle;
    unsigned char used;
    char pad[3];
};
extern Slot8* g_slots8;

void __cdecl sub_4D79A0(Vec2f p);
void __cdecl sub_4EDFB0(int handle);

// FUNCTION: 0x441CF0 sub_441CF0
void sub_441CF0(int x, int y)
{
    g_73C52C = x;
    g_73C530 = y;
    Vec2f p = { (float)x, (float)y };
    sub_4D79A0(p);
}

// FUNCTION: 0x436160 sub_436160
int sub_436160(int i)
{
    int total = g_7005F4[i * 6 + 1];
    if (total <= 0)
        return 0;
    int v = (int)((float)g_7005F4[i * 6] / (float)total * g_623418);
    if (v > 40)
        v = 40;
    return v;
}

// FUNCTION: 0x4D3990 sub_4D3990
bool sub_4D3990(unsigned int i)
{
    if (i <= 0x3F) {
        Slot8* s = &g_slots8[i];
        if (!s->used)
            return false;
        if (s->handle) {
            sub_4EDFB0(s->handle);
            s->handle = 0;
        }
        s->used = 0;
        g_745910--;
        return true;
    }
    return false;
}

// FUNCTION: 0x435A40 sub_435A40
__declspec(safebuffers) int sub_435A40(int v)
{
    float scale[3] = { 0.8f, 0.9f, 1.0f };
    return (int)((float)v * g_623160 * scale[g_6A9C78] * scale[g_6A9C77]);
}

// FUNCTION: 0x4F2860 sub_4F2860
void sub_4F2860(float* m)
{
    for (int i = 0; i < 16; i++)
        m[i] = 0;
    m[0] = 1.0f;
    m[5] = 1.0f;
    m[10] = 1.0f;
    m[15] = 1.0f;
}

// STUB: 0x441190 sub_441190 (69 bytes)
void sub_441190()
{
}
