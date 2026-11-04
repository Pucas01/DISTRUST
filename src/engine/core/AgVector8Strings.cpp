struct Elem8_4E2E60 {
    char b[8];
};

struct VecR8_4E2E60 {
    Elem8_4E2E60* first;
    Elem8_4E2E60* last;
    Elem8_4E2E60* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

// FUNCTION: 0x4E2E60 VecR8_4E2E60::_Reserve
void VecR8_4E2E60::_Reserve(unsigned int n)
{
    if ((unsigned int)(end - last) < n) {
        unsigned int size = last - first;
        if (0xFFFFFFFFu / 8 - size < n) {
            std::_Xlength_error("vector<T> too long");
        } else {
            unsigned int want = size + n;
            unsigned int cap = end - first;
            if (0xFFFFFFFFu / 8 - cap / 2 < cap)
                cap = 0;
            else
                cap += cap / 2;
            if (cap < want)
                cap = want;
            reserve(cap);
        }
    }
}

// STUB: 0x4E2EE0 sub_4E2EE0 (200 bytes)
void sub_4E2EE0()
{
}

// STUB: 0x4E2FB0 sub_4E2FB0 (270 bytes)
void sub_4E2FB0()
{
}

// STUB: 0x4E30C0 sub_4E30C0 (260 bytes)
void sub_4E30C0()
{
}

// STUB: 0x4E31D0 sub_4E31D0 (6 bytes)
void sub_4E31D0()
{
}
