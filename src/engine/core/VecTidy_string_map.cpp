// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem4B87A0 {
    char b[4];
};
void __cdecl destroyRange_4B80E0(Elem4B87A0* first, Elem4B87A0* last, char* al, DTag t);

struct Vec4B87A0 {
    Elem4B87A0* first;
    Elem4B87A0* last;
    Elem4B87A0* end;
    void tidy();
};

// FUNCTION: 0x4B87A0 ?tidy@Vec4B87A0@@QAEXXZ
void Vec4B87A0::tidy()
{
    if (first) {
        char al;
        DTag t;
        destroyRange_4B80E0(first, last, &al, t);
        operator delete(first);
        first = 0;
        last = 0;
        end = 0;
    }
}

