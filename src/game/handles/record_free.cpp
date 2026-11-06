struct RecB0 {
    void* ptr;
    unsigned char b4;
    char pad5;
    unsigned char b6;
    char pad7[0xA9];
};
extern RecB0* g_recs;
extern short g_745918;
void __cdecl sub_4EDFB0(void* p);

void* __cdecl sub_4D3F40(int a, int b, float c, int d, float e);

// STUB: 0x4D1B50 sub_4D1B50 (206 bytes)
void sub_4D1B50()
{
}

// STUB: 0x4D1C20 sub_4D1C20 (262 bytes)
void sub_4D1C20()
{
}

// STUB: 0x4D1D30 sub_4D1D30 (239 bytes)
void sub_4D1D30()
{
}

// STUB: 0x4D1E20 sub_4D1E20 (65 bytes)
void sub_4D1E20()
{
}

// STUB: 0x4D1E70 sub_4D1E70 (1001 bytes)
void sub_4D1E70()
{
}

// STUB: 0x4D2260 sub_4D2260 (469 bytes)
void sub_4D2260()
{
}

// STUB: 0x4D2440 sub_4D2440 (548 bytes)
void sub_4D2440()
{
}

// STUB: 0x4D2670 sub_4D2670 (1664 bytes)
void sub_4D2670()
{
}

// STUB: 0x4D2CF0 sub_4D2CF0 (509 bytes)
void sub_4D2CF0()
{
}

// STUB: 0x4D2EF0 sub_4D2EF0 (1206 bytes)
void sub_4D2EF0()
{
}

// STUB: 0x4D33B0 sub_4D33B0 (359 bytes)
void sub_4D33B0()
{
}

// STUB: 0x4D3520 sub_4D3520 (125 bytes)
void sub_4D3520()
{
}

// STUB: 0x4D35A0 sub_4D35A0 (162 bytes)
void sub_4D35A0()
{
}

// STUB: 0x4D3650 sub_4D3650 (351 bytes)
void sub_4D3650()
{
}

// STUB: 0x4D37B0 sub_4D37B0 (472 bytes)
void sub_4D37B0()
{
}

// STUB: 0x4D3990 sub_4D3990 (73 bytes)
void sub_4D3990()
{
}

// STUB: 0x4D39E0 sub_4D39E0 (599 bytes)
void sub_4D39E0()
{
}

// FUNCTION: 0x4D3CC0 freeRec
bool __cdecl freeRec(unsigned int index)
{
    if (index <= 0x95) {
        RecB0* r = &g_recs[index];
        if (r->b4) {
            void* p = r->ptr;
            if (p) {
                if (r->b6 == 1)
                    sub_4EDFB0(p);
                r->ptr = 0;
            }
            r->b4 = 0;
            g_745918--;
            return true;
        }
    }
    return false;
}

// FUNCTION: 0x4D3D20 sub_4D3D20
bool __cdecl sub_4D3D20(const char* s)
{
    if (!s)
        return false;
    if (*s++ != 'O') return false;
    if (*s++ != 'M') return false;
    if (*s++ != 'G') return false;
    return *s == '.';
}

// STUB: 0x4D3D50 sub_4D3D50 (163 bytes)
void sub_4D3D50()
{
}

// STUB: 0x4D3E00 sub_4D3E00 (94 bytes)
void sub_4D3E00()
{
}

// STUB: 0x4D3E60 sub_4D3E60 (107 bytes)
void sub_4D3E60()
{
}

// FUNCTION: 0x4D3ED0 sub_4D3ED0
bool __cdecl sub_4D3ED0(unsigned int i, float f)
{
    if (i <= 0x95) {
        char* r = (char*)g_recs + i * 0xb0;
        if (r[4]) {
            *(float*)(r + 0xa0) = f;
            return true;
        }
    }
    return false;
}

// FUNCTION: 0x4D3F10 sub_4D3F10
void* __cdecl sub_4D3F10(int a, int b, float c, int d)
{
    return sub_4D3F40(a, b, c, d, 0.0f);
}
