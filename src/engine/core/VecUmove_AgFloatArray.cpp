// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem551100 {
    char b[4];
};
void __cdecl umoveInner_551130(Elem551100* first, Elem551100* last, Elem551100* dest, char* al, Elem551100* nul, DTag t);

struct Vec551100 {
    void umove(Elem551100* first, Elem551100* last, Elem551100* dest);
};

// FUNCTION: 0x551100 ?umove@Vec551100@@QAEXPAUElem551100@@00@Z
void Vec551100::umove(Elem551100* first, Elem551100* last, Elem551100* dest)
{
    char al;
    DTag t;
    umoveInner_551130(first, last, dest, &al, (Elem551100*)0, t);
}

