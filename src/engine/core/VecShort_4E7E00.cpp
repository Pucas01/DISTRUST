// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include <string.h>
namespace std {
__declspec(noreturn) void __cdecl _Xbad_alloc();
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

struct VecS4E7E00 {
    unsigned short* first;
    unsigned short* last;
    unsigned short* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};

// FUNCTION: 0x4E7E00 VecS4E7E00::reserve
void VecS4E7E00::reserve(unsigned int n)
{
    unsigned short* p = 0;
    if (n != 0) {
        if (n > 0x7FFFFFFF || (p = (unsigned short*)operator new(n * 2)) == 0)
            std::_Xbad_alloc();
    }
    memmove(p, first, (last - first) * 2);
    unsigned int sz = last - first;
    if (first)
        operator delete(first);
    end = p + n;
    last = p + sz;
    first = p;
}

// FUNCTION: 0x4E7E80 VecS4E7E00::_Reserve
void VecS4E7E00::_Reserve(unsigned int n)
{
    if ((unsigned int)(end - last) < n) {
        unsigned int size = last - first;
        if (0x7FFFFFFFu - size < n) {
            std::_Xlength_error("vector<T> too long");
        } else {
            unsigned int want = size + n;
            unsigned int cap = end - first;
            if (0x7FFFFFFFu - cap / 2 < cap)
                cap = 0;
            else
                cap += cap / 2;
            if (cap < want)
                cap = want;
            reserve(cap);
        }
    }
}
