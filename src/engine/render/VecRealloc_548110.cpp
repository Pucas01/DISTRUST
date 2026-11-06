// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Elem548110 {
    char b[72];
};

struct Vec548110 {
    Elem548110* first;
    Elem548110* last;
    Elem548110* end;
    void umove(Elem548110* f, Elem548110* l, Elem548110* dest);
    void realloc(unsigned int n);
};

// FUNCTION: 0x548110 ?realloc@Vec548110@@QAEXI@Z
void Vec548110::realloc(unsigned int n)
{
    Elem548110* p = 0;
    if (n != 0) {
        if (n > 0x38E38E3 || (p = (Elem548110*)operator new(n * 72)) == 0)
            std::_Xbad_alloc();
    }
    try {
        umove(first, last, p);
    } catch (...) {
        operator delete(p);
        throw;
    }
    unsigned int sz = last - first;
    if (first)
        operator delete(first);
    end = p + n;
    last = p + sz;
    first = p;
}
