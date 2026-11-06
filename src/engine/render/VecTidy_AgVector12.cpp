// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem4EFAB0 {
    char b[4];
};
void __cdecl destroyRange_4EF540(Elem4EFAB0* first, Elem4EFAB0* last, char* al, DTag t);

struct Vec4EFAB0 {
    Elem4EFAB0* first;
    Elem4EFAB0* last;
    Elem4EFAB0* end;
    void tidy();
};

// FUNCTION: 0x4EFAB0 ?tidy@Vec4EFAB0@@QAEXXZ
void Vec4EFAB0::tidy()
{
    if (first) {
        char al;
        DTag t;
        destroyRange_4EF540(first, last, &al, t);
        operator delete(first);
        first = 0;
        last = 0;
        end = 0;
    }
}

