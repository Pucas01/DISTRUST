// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem4FE8F0 {
    char b[4];
};
void __cdecl destroyRange_4FE070(Elem4FE8F0* first, Elem4FE8F0* last, char* al, DTag t);

struct Vec4FE8F0 {
    Elem4FE8F0* first;
    Elem4FE8F0* last;
    Elem4FE8F0* end;
    void tidy();
};

// FUNCTION: 0x4FE8F0 ?tidy@Vec4FE8F0@@QAEXXZ
void Vec4FE8F0::tidy()
{
    if (first) {
        char al;
        DTag t;
        destroyRange_4FE070(first, last, &al, t);
        operator delete(first);
        first = 0;
        last = 0;
        end = 0;
    }
}

