struct Elem48_561FF0 {
    char b[48];
};

struct VecR48_561FF0 {
    Elem48_561FF0* first;
    Elem48_561FF0* last;
    Elem48_561FF0* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

// STUB: 0x561EF0 sub_561EF0 (245 bytes)
void sub_561EF0()
{
}

// FUNCTION: 0x561FF0 VecR48_561FF0::_Reserve
void VecR48_561FF0::_Reserve(unsigned int n)
{
    if ((unsigned int)(end - last) < n) {
        unsigned int size = last - first;
        if (0xFFFFFFFFu / 48 - size < n) {
            std::_Xlength_error("vector<T> too long");
        } else {
            unsigned int want = size + n;
            unsigned int cap = end - first;
            if (0xFFFFFFFFu / 48 - cap / 2 < cap)
                cap = 0;
            else
                cap += cap / 2;
            if (cap < want)
                cap = want;
            reserve(cap);
        }
    }
}
