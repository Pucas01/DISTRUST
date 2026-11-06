// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct DTag {};
struct Elem527800 {
    char b[8];
};
void __cdecl destroyRange_5206C0(Elem527800* first, Elem527800* last, char* al, DTag t);

struct Vec527800 {
    Elem527800* first;
    Elem527800* last;
    Elem527800* end;
    void umove(Elem527800* f, Elem527800* l, Elem527800* dest);
    void realloc(unsigned int n);
};

// FUNCTION: 0x527800 ?realloc@Vec527800@@QAEXI@Z
void Vec527800::realloc(unsigned int n)
{
    Elem527800* p = 0;
    if (n != 0) {
        if (n > 0x1FFFFFFF || (p = (Elem527800*)operator new(n * 8)) == 0)
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
        destroyRange_5206C0(first, last, &al, t);
        operator delete(first);
    }
    end = p + n;
    last = p + sz;
    first = p;
}
