// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem520B90 {
    char b[4];
};
void __cdecl destroyRange_520620(Elem520B90* first, Elem520B90* last, char* al, DTag t);

struct Vec520B90 {
    Elem520B90* first;
    Elem520B90* last;
    Elem520B90* end;
    void tidy();
};

// FUNCTION: 0x520B90 ?tidy@Vec520B90@@QAEXXZ
void Vec520B90::tidy()
{
    if (first) {
        char al;
        DTag t;
        destroyRange_520620(first, last, &al, t);
        operator delete(first);
        first = 0;
        last = 0;
        end = 0;
    }
}

struct Elem520BE0 {
    char b[4];
};
void __cdecl destroyRange_5206C0(Elem520BE0* first, Elem520BE0* last, char* al, DTag t);

struct Vec520BE0 {
    Elem520BE0* first;
    Elem520BE0* last;
    Elem520BE0* end;
    void tidy();
};

// FUNCTION: 0x520BE0 ?tidy@Vec520BE0@@QAEXXZ
void Vec520BE0::tidy()
{
    if (first) {
        char al;
        DTag t;
        destroyRange_5206C0(first, last, &al, t);
        operator delete(first);
        first = 0;
        last = 0;
        end = 0;
    }
}

