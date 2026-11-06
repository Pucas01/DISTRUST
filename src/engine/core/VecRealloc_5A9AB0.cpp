// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Elem5A9AB0 {
    char b[8];
};

struct Vec5A9AB0 {
    Elem5A9AB0* first;
    Elem5A9AB0* last;
    Elem5A9AB0* end;
    void umove(Elem5A9AB0* f, Elem5A9AB0* l, Elem5A9AB0* dest);
    void realloc(unsigned int n);
};

// FUNCTION: 0x5A9AB0 ?realloc@Vec5A9AB0@@QAEXI@Z
void Vec5A9AB0::realloc(unsigned int n)
{
    Elem5A9AB0* p = 0;
    if (n != 0) {
        if (n > 0x1FFFFFFF || (p = (Elem5A9AB0*)operator new(n * 8)) == 0)
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
