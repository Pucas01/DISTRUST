struct Glyph {
    char b[16];
};

struct Font {
    char p0[0x10];
    int count;
    char p1[0x20 - 0x14];
    Glyph* glyphs;
    unsigned short* map;
};

// FUNCTION: 0x4F3A20 countLineBreaks
int __cdecl countLineBreaks(const unsigned short* s)
{
    if (!s) {
        return 0;
    }
    int n = 0;
    for (;; s++) {
        unsigned int c = *s;
        if (c == 0 || c == 10 || c == 0xD0A) {
            n++;
        }
        if (*s == 0) {
            break;
        }
    }
    return n;
}

// FUNCTION: 0x4F3560 scaleBasis
void __cdecl scaleBasis(float* m, const float* s)
{
    m[0] = m[0] * s[0];
    m[1] = m[1] * s[0];
    m[2] = m[2] * s[0];
    m[4] = s[1] * m[4];
    m[5] = s[1] * m[5];
    m[6] = s[1] * m[6];
    m[8] = s[2] * m[8];
    m[9] = m[9] * s[2];
    m[10] = m[10] * s[2];
}
