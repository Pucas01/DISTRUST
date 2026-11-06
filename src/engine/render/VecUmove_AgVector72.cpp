// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem547EA0 {
    char b[4];
};
void __cdecl umoveInner_547ED0(Elem547EA0* first, Elem547EA0* last, Elem547EA0* dest, char* al, Elem547EA0* nul, DTag t);

struct Vec547EA0 {
    void umove(Elem547EA0* first, Elem547EA0* last, Elem547EA0* dest);
};

// FUNCTION: 0x547EA0 ?umove@Vec547EA0@@QAEXPAUElem547EA0@@00@Z
void Vec547EA0::umove(Elem547EA0* first, Elem547EA0* last, Elem547EA0* dest)
{
    char al;
    DTag t;
    umoveInner_547ED0(first, last, dest, &al, (Elem547EA0*)0, t);
}

