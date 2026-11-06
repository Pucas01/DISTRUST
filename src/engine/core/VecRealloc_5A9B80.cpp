// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Elem5A9B80 {
    char b[12];
};

struct Vec5A9B80 {
    Elem5A9B80* first;
    Elem5A9B80* last;
    Elem5A9B80* end;
    void umove(Elem5A9B80* f, Elem5A9B80* l, Elem5A9B80* dest);
    void realloc(unsigned int n);
};

// FUNCTION: 0x5A9B80 ?realloc@Vec5A9B80@@QAEXI@Z
void Vec5A9B80::realloc(unsigned int n)
{
    Elem5A9B80* p = 0;
    if (n != 0) {
        if (n > 0x15555555 || (p = (Elem5A9B80*)operator new(n * 12)) == 0)
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
