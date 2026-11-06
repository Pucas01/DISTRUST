// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct DTag {};
struct Elem520E20 {
    char b[8];
};
void __cdecl destroyRange_520620(Elem520E20* first, Elem520E20* last, char* al, DTag t);

struct Vec520E20 {
    Elem520E20* first;
    Elem520E20* last;
    Elem520E20* end;
    void umove(Elem520E20* f, Elem520E20* l, Elem520E20* dest);
    void realloc(unsigned int n);
};

// FUNCTION: 0x520E20 ?realloc@Vec520E20@@QAEXI@Z
void Vec520E20::realloc(unsigned int n)
{
    Elem520E20* p = 0;
    if (n != 0) {
        if (n > 0x1FFFFFFF || (p = (Elem520E20*)operator new(n * 8)) == 0)
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
        destroyRange_520620(first, last, &al, t);
        operator delete(first);
    }
    end = p + n;
    last = p + sz;
    first = p;
}
