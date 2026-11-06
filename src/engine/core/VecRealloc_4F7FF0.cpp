// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
}
struct DTag {};
struct Elem4F7FF0 {
    char b[8];
};
void __cdecl destroyRange_5268B0(Elem4F7FF0* first, Elem4F7FF0* last, char* al, DTag t);

struct Vec4F7FF0 {
    Elem4F7FF0* first;
    Elem4F7FF0* last;
    Elem4F7FF0* end;
    void umove(Elem4F7FF0* f, Elem4F7FF0* l, Elem4F7FF0* dest);
    void realloc(unsigned int n);
};

// FUNCTION: 0x4F7FF0 ?realloc@Vec4F7FF0@@QAEXI@Z
void Vec4F7FF0::realloc(unsigned int n)
{
    Elem4F7FF0* p = 0;
    if (n != 0) {
        if (n > 0x1FFFFFFF || (p = (Elem4F7FF0*)operator new(n * 8)) == 0)
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
        destroyRange_5268B0(first, last, &al, t);
        operator delete(first);
    }
    end = p + n;
    last = p + sz;
    first = p;
}
