// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct DTag {};
struct Elem4F67C0 {
    char b[4];
};
void __cdecl destroyRange_4F4B20(Elem4F67C0* first, Elem4F67C0* last, char* al, DTag t);

struct Vec4F67C0 {
    Elem4F67C0* first;
    Elem4F67C0* last;
    Elem4F67C0* end;
    void tidy();
};

// FUNCTION: 0x4F67C0 ?tidy@Vec4F67C0@@QAEXXZ
void Vec4F67C0::tidy()
{
    if (first) {
        char al;
        DTag t;
        destroyRange_4F4B20(first, last, &al, t);
        operator delete(first);
        first = 0;
        last = 0;
        end = 0;
    }
}

