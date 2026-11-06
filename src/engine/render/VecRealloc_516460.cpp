// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Elem516460 {
    char b[20];
};

struct Vec516460 {
    Elem516460* first;
    Elem516460* last;
    Elem516460* end;
    void umove(Elem516460* f, Elem516460* l, Elem516460* dest);
    void realloc(unsigned int n);
};

// FUNCTION: 0x516460 ?realloc@Vec516460@@QAEXI@Z
void Vec516460::realloc(unsigned int n)
{
    Elem516460* p = 0;
    if (n != 0) {
        if (n > 0xCCCCCCC || (p = (Elem516460*)operator new(n * 20)) == 0)
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
