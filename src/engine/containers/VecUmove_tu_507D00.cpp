// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem508760 {
    char b[4];
};
void __cdecl umoveInner_5087C0(Elem508760* first, Elem508760* last, Elem508760* dest, char* al, Elem508760* nul, DTag t);

struct Vec508760 {
    void umove(Elem508760* first, Elem508760* last, Elem508760* dest);
};

// FUNCTION: 0x508760 ?umove@Vec508760@@QAEXPAUElem508760@@00@Z
void Vec508760::umove(Elem508760* first, Elem508760* last, Elem508760* dest)
{
    char al;
    DTag t;
    umoveInner_5087C0(first, last, dest, &al, (Elem508760*)0, t);
}

struct Elem508790 {
    char b[4];
};
void __cdecl umoveInner_508860(Elem508790* first, Elem508790* last, Elem508790* dest, char* al, Elem508790* nul, DTag t);

struct Vec508790 {
    void umove(Elem508790* first, Elem508790* last, Elem508790* dest);
};

// FUNCTION: 0x508790 ?umove@Vec508790@@QAEXPAUElem508790@@00@Z
void Vec508790::umove(Elem508790* first, Elem508790* last, Elem508790* dest)
{
    char al;
    DTag t;
    umoveInner_508860(first, last, dest, &al, (Elem508790*)0, t);
}

