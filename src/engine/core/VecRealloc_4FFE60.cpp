// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Elem4FFE60 {
    char b[4];
};

struct Vec4FFE60 {
    Elem4FFE60* first;
    Elem4FFE60* last;
    Elem4FFE60* end;
    void umove(Elem4FFE60* f, Elem4FFE60* l, Elem4FFE60* dest);
    void realloc(unsigned int n);
};

// FUNCTION: 0x4FFE60 ?realloc@Vec4FFE60@@QAEXI@Z
void Vec4FFE60::realloc(unsigned int n)
{
    Elem4FFE60* p = 0;
    if (n != 0) {
        if (n > 0x3FFFFFFF || (p = (Elem4FFE60*)operator new(n * 4)) == 0)
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
