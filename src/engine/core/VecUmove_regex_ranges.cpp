// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem5A45F0 {
    char b[4];
};
void __cdecl umoveInner_5A4940(Elem5A45F0* first, Elem5A45F0* last, Elem5A45F0* dest, char* al, Elem5A45F0* nul, DTag t);

struct Vec5A45F0 {
    void umove(Elem5A45F0* first, Elem5A45F0* last, Elem5A45F0* dest);
};

// FUNCTION: 0x5A45F0 ?umove@Vec5A45F0@@QAEXPAUElem5A45F0@@00@Z
void Vec5A45F0::umove(Elem5A45F0* first, Elem5A45F0* last, Elem5A45F0* dest)
{
    char al;
    DTag t;
    umoveInner_5A4940(first, last, dest, &al, (Elem5A45F0*)0, t);
}

