// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Elem4F80D0 {
    char b[8];
};

struct Vec4F80D0 {
    Elem4F80D0* first;
    Elem4F80D0* last;
    Elem4F80D0* end;
    void umove(Elem4F80D0* f, Elem4F80D0* l, Elem4F80D0* dest);
    void realloc(unsigned int n);
};

// FUNCTION: 0x4F80D0 ?realloc@Vec4F80D0@@QAEXI@Z
void Vec4F80D0::realloc(unsigned int n)
{
    Elem4F80D0* p = 0;
    if (n != 0) {
        if (n > 0x1FFFFFFF || (p = (Elem4F80D0*)operator new(n * 8)) == 0)
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
