// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct DTag {};
struct Elem509860 {
    char b[8];
};
void __cdecl destroyRange_507EE0(Elem509860* first, Elem509860* last, char* al, DTag t);

struct Vec509860 {
    Elem509860* first;
    Elem509860* last;
    Elem509860* end;
    void umove(Elem509860* f, Elem509860* l, Elem509860* dest);
    void realloc(unsigned int n);
};

// FUNCTION: 0x509860 ?realloc@Vec509860@@QAEXI@Z
void Vec509860::realloc(unsigned int n)
{
    Elem509860* p = 0;
    if (n != 0) {
        if (n > 0x1FFFFFFF || (p = (Elem509860*)operator new(n * 8)) == 0)
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
        destroyRange_507EE0(first, last, &al, t);
        operator delete(first);
    }
    end = p + n;
    last = p + sz;
    first = p;
}
