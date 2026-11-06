// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem503A20 {
    char b[4];
};
void __cdecl umoveInner_503A50(Elem503A20* first, Elem503A20* last, Elem503A20* dest, char* al, Elem503A20* nul, DTag t);

struct Vec503A20 {
    void umove(Elem503A20* first, Elem503A20* last, Elem503A20* dest);
};

// FUNCTION: 0x503A20 ?umove@Vec503A20@@QAEXPAUElem503A20@@00@Z
void Vec503A20::umove(Elem503A20* first, Elem503A20* last, Elem503A20* dest)
{
    char al;
    DTag t;
    umoveInner_503A50(first, last, dest, &al, (Elem503A20*)0, t);
}

