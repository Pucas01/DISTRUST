// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct S4FDE20 {
    char* data;
    int len;
    int find(int c, int from);
    int rfind(int c, int from);
    S4FDE20 substr(int pos, int cnt);
};
int __cdecl sub_525AD0(int len, char* data, int c, int from);
int __cdecl sub_525B00(int len, char* data, int c, int from);
void __cdecl sub_525B90(S4FDE20* out, int len, char* data, int pos, int cnt);

// FUNCTION: 0x4FDE20 S4FDE20::find
int S4FDE20::find(int c, int from)
{
    return sub_525AD0(len, data, c, from);
}

// FUNCTION: 0x4FDE40 S4FDE20::rfind
int S4FDE20::rfind(int c, int from)
{
    return sub_525B00(len, data, c, from);
}

// FUNCTION: 0x4FDE60 S4FDE20::substr
S4FDE20 S4FDE20::substr(int pos, int cnt)
{
    S4FDE20 r;
    sub_525B90(&r, len, data, pos, cnt);
    return r;
}
