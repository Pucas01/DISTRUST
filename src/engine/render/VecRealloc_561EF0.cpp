// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct DTag {};
struct Elem561EF0 {
    char b[48];
};
void __cdecl destroyRange_507D90(Elem561EF0* first, Elem561EF0* last, char* al, DTag t);

struct Vec561EF0 {
    Elem561EF0* first;
    Elem561EF0* last;
    Elem561EF0* end;
    void umove(Elem561EF0* f, Elem561EF0* l, Elem561EF0* dest);
    void realloc(unsigned int n);
};

// FUNCTION: 0x561EF0 ?realloc@Vec561EF0@@QAEXI@Z
void Vec561EF0::realloc(unsigned int n)
{
    Elem561EF0* p = 0;
    if (n != 0) {
        if (n > 0x5555555 || (p = (Elem561EF0*)operator new(n * 48)) == 0)
            std::_Xbad_alloc();
    }
    try {
        umove(first, last, p);
    } catch (...) {
        operator delete(p);
        throw;
    }
    unsigned int sz = last - first;
    if (first) {
        char al;
        DTag t;
        destroyRange_507D90(first, last, &al, t);
        operator delete(first);
    }
    end = p + n;
    last = p + sz;
    first = p;
}
