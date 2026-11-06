// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem526F80 {
    char b[4];
};
void __cdecl umoveInner_526FE0(Elem526F80* first, Elem526F80* last, Elem526F80* dest, char* al, Elem526F80* nul, DTag t);

struct Vec526F80 {
    void umove(Elem526F80* first, Elem526F80* last, Elem526F80* dest);
};

// FUNCTION: 0x526F80 ?umove@Vec526F80@@QAEXPAUElem526F80@@00@Z
void Vec526F80::umove(Elem526F80* first, Elem526F80* last, Elem526F80* dest)
{
    char al;
    DTag t;
    umoveInner_526FE0(first, last, dest, &al, (Elem526F80*)0, t);
}

struct Elem526FB0 {
    char b[4];
};
void __cdecl umoveInner_527080(Elem526FB0* first, Elem526FB0* last, Elem526FB0* dest, char* al, Elem526FB0* nul, DTag t);

struct Vec526FB0 {
    void umove(Elem526FB0* first, Elem526FB0* last, Elem526FB0* dest);
};

// FUNCTION: 0x526FB0 ?umove@Vec526FB0@@QAEXPAUElem526FB0@@00@Z
void Vec526FB0::umove(Elem526FB0* first, Elem526FB0* last, Elem526FB0* dest)
{
    char al;
    DTag t;
    umoveInner_527080(first, last, dest, &al, (Elem526FB0*)0, t);
}

