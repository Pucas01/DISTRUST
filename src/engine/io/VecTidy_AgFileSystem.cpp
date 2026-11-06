// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem5091F0 {
    char b[4];
};
void __cdecl destroyRange_507D90(Elem5091F0* first, Elem5091F0* last, char* al, DTag t);

struct Vec5091F0 {
    Elem5091F0* first;
    Elem5091F0* last;
    Elem5091F0* end;
    void tidy();
};

// FUNCTION: 0x5091F0 ?tidy@Vec5091F0@@QAEXXZ
void Vec5091F0::tidy()
{
    if (first) {
        char al;
        DTag t;
        destroyRange_507D90(first, last, &al, t);
        operator delete(first);
        first = 0;
        last = 0;
        end = 0;
    }
}

struct Elem509240 {
    char b[4];
};
void __cdecl destroyRange_507EE0(Elem509240* first, Elem509240* last, char* al, DTag t);

struct Vec509240 {
    Elem509240* first;
    Elem509240* last;
    Elem509240* end;
    void tidy();
};

// FUNCTION: 0x509240 ?tidy@Vec509240@@QAEXXZ
void Vec509240::tidy()
{
    if (first) {
        char al;
        DTag t;
        destroyRange_507EE0(first, last, &al, t);
        operator delete(first);
        first = 0;
        last = 0;
        end = 0;
    }
}

