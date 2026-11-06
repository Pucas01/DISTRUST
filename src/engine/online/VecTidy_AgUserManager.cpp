// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem527460 {
    char b[4];
};
void __cdecl destroyRange_5268B0(Elem527460* first, Elem527460* last, char* al, DTag t);

struct Vec527460 {
    Elem527460* first;
    Elem527460* last;
    Elem527460* end;
    void tidy();
};

// FUNCTION: 0x527460 ?tidy@Vec527460@@QAEXXZ
void Vec527460::tidy()
{
    if (first) {
        char al;
        DTag t;
        destroyRange_5268B0(first, last, &al, t);
        operator delete(first);
        first = 0;
        last = 0;
        end = 0;
    }
}

struct Elem5274B0 {
    char b[4];
};
void __cdecl destroyRange_526980(Elem5274B0* first, Elem5274B0* last, char* al, DTag t);

struct Vec5274B0 {
    Elem5274B0* first;
    Elem5274B0* last;
    Elem5274B0* end;
    void tidy();
};

// FUNCTION: 0x5274B0 ?tidy@Vec5274B0@@QAEXXZ
void Vec5274B0::tidy()
{
    if (first) {
        char al;
        DTag t;
        destroyRange_526980(first, last, &al, t);
        operator delete(first);
        first = 0;
        last = 0;
        end = 0;
    }
}

