// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem50E300 {
    char b[4];
};
void __cdecl umoveInner_50E440(Elem50E300* first, Elem50E300* last, Elem50E300* dest, char* al, Elem50E300* nul, DTag t);

struct Vec50E300 {
    void umove(Elem50E300* first, Elem50E300* last, Elem50E300* dest);
};

// FUNCTION: 0x50E300 ?umove@Vec50E300@@QAEXPAUElem50E300@@00@Z
void Vec50E300::umove(Elem50E300* first, Elem50E300* last, Elem50E300* dest)
{
    char al;
    DTag t;
    umoveInner_50E440(first, last, dest, &al, (Elem50E300*)0, t);
}

struct Elem50E330 {
    char b[4];
};
void __cdecl umoveInner_50E4D0(Elem50E330* first, Elem50E330* last, Elem50E330* dest, char* al, Elem50E330* nul, DTag t);

struct Vec50E330 {
    void umove(Elem50E330* first, Elem50E330* last, Elem50E330* dest);
};

// FUNCTION: 0x50E330 ?umove@Vec50E330@@QAEXPAUElem50E330@@00@Z
void Vec50E330::umove(Elem50E330* first, Elem50E330* last, Elem50E330* dest)
{
    char al;
    DTag t;
    umoveInner_50E4D0(first, last, dest, &al, (Elem50E330*)0, t);
}

struct Elem50E360 {
    char b[4];
};
void __cdecl umoveInner_50E570(Elem50E360* first, Elem50E360* last, Elem50E360* dest, char* al, Elem50E360* nul, DTag t);

struct Vec50E360 {
    void umove(Elem50E360* first, Elem50E360* last, Elem50E360* dest);
};

// FUNCTION: 0x50E360 ?umove@Vec50E360@@QAEXPAUElem50E360@@00@Z
void Vec50E360::umove(Elem50E360* first, Elem50E360* last, Elem50E360* dest)
{
    char al;
    DTag t;
    umoveInner_50E570(first, last, dest, &al, (Elem50E360*)0, t);
}

struct Elem50E390 {
    char b[4];
};
void __cdecl umoveInner_50E610(Elem50E390* first, Elem50E390* last, Elem50E390* dest, char* al, Elem50E390* nul, DTag t);

struct Vec50E390 {
    void umove(Elem50E390* first, Elem50E390* last, Elem50E390* dest);
};

// FUNCTION: 0x50E390 ?umove@Vec50E390@@QAEXPAUElem50E390@@00@Z
void Vec50E390::umove(Elem50E390* first, Elem50E390* last, Elem50E390* dest)
{
    char al;
    DTag t;
    umoveInner_50E610(first, last, dest, &al, (Elem50E390*)0, t);
}

