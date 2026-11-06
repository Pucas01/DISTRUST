// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem534490 {
    char b[4];
};
void __cdecl umoveInner_5344C0(Elem534490* first, Elem534490* last, Elem534490* dest, char* al, Elem534490* nul, DTag t);

struct Vec534490 {
    void umove(Elem534490* first, Elem534490* last, Elem534490* dest);
};

// FUNCTION: 0x534490 ?umove@Vec534490@@QAEXPAUElem534490@@00@Z
void Vec534490::umove(Elem534490* first, Elem534490* last, Elem534490* dest)
{
    char al;
    DTag t;
    umoveInner_5344C0(first, last, dest, &al, (Elem534490*)0, t);
}

