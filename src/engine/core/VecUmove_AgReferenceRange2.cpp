// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem4FE590 {
    char b[4];
};
void __cdecl umoveInner_4FE5C0(Elem4FE590* first, Elem4FE590* last, Elem4FE590* dest, char* al, Elem4FE590* nul, DTag t);

struct Vec4FE590 {
    void umove(Elem4FE590* first, Elem4FE590* last, Elem4FE590* dest);
};

// FUNCTION: 0x4FE590 ?umove@Vec4FE590@@QAEXPAUElem4FE590@@00@Z
void Vec4FE590::umove(Elem4FE590* first, Elem4FE590* last, Elem4FE590* dest)
{
    char al;
    DTag t;
    umoveInner_4FE5C0(first, last, dest, &al, (Elem4FE590*)0, t);
}

