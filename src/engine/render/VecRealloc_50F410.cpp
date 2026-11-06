// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct Elem50F410 {
    char b[16];
};

struct Vec50F410 {
    Elem50F410* first;
    Elem50F410* last;
    Elem50F410* end;
    void umove(Elem50F410* f, Elem50F410* l, Elem50F410* dest);
    void realloc(unsigned int n);
};

// FUNCTION: 0x50F410 ?realloc@Vec50F410@@QAEXI@Z
void Vec50F410::realloc(unsigned int n)
{
    Elem50F410* p = 0;
    if (n != 0) {
        if (n > 0xFFFFFFF || (p = (Elem50F410*)operator new(n * 16)) == 0)
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
