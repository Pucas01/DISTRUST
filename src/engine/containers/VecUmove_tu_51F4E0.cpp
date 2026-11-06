// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem51F520 {
    char b[4];
};
void __cdecl umoveInner_51F580(Elem51F520* first, Elem51F520* last, Elem51F520* dest, char* al, Elem51F520* nul, DTag t);

struct Vec51F520 {
    void umove(Elem51F520* first, Elem51F520* last, Elem51F520* dest);
};

// FUNCTION: 0x51F520 ?umove@Vec51F520@@QAEXPAUElem51F520@@00@Z
void Vec51F520::umove(Elem51F520* first, Elem51F520* last, Elem51F520* dest)
{
    char al;
    DTag t;
    umoveInner_51F580(first, last, dest, &al, (Elem51F520*)0, t);
}

struct Elem51F550 {
    char b[4];
};
void __cdecl umoveInner_51F600(Elem51F550* first, Elem51F550* last, Elem51F550* dest, char* al, Elem51F550* nul, DTag t);

struct Vec51F550 {
    void umove(Elem51F550* first, Elem51F550* last, Elem51F550* dest);
};

// FUNCTION: 0x51F550 ?umove@Vec51F550@@QAEXPAUElem51F550@@00@Z
void Vec51F550::umove(Elem51F550* first, Elem51F550* last, Elem51F550* dest)
{
    char al;
    DTag t;
    umoveInner_51F600(first, last, dest, &al, (Elem51F550*)0, t);
}

