// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem50EB40 {
    char b[4];
};
void __cdecl destroyRange_50E1A0(Elem50EB40* first, Elem50EB40* last, char* al, DTag t);

struct Vec50EB40 {
    Elem50EB40* first;
    Elem50EB40* last;
    Elem50EB40* end;
    void tidy();
};

// FUNCTION: 0x50EB40 ?tidy@Vec50EB40@@QAEXXZ
void Vec50EB40::tidy()
{
    if (first) {
        char al;
        DTag t;
        destroyRange_50E1A0(first, last, &al, t);
        operator delete(first);
        first = 0;
        last = 0;
        end = 0;
    }
}

struct Elem50EB90 {
    char b[4];
};
void __cdecl destroyRange_50E240(Elem50EB90* first, Elem50EB90* last, char* al, DTag t);

struct Vec50EB90 {
    Elem50EB90* first;
    Elem50EB90* last;
    Elem50EB90* end;
    void tidy();
};

// FUNCTION: 0x50EB90 ?tidy@Vec50EB90@@QAEXXZ
void Vec50EB90::tidy()
{
    if (first) {
        char al;
        DTag t;
        destroyRange_50E240(first, last, &al, t);
        operator delete(first);
        first = 0;
        last = 0;
        end = 0;
    }
}

