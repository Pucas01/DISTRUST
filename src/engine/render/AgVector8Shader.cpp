struct Elem8_528E90 {
    char b[8];
};

struct VecR8_528E90 {
    Elem8_528E90* first;
    Elem8_528E90* last;
    Elem8_528E90* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

// FUNCTION: 0x528E90 VecR8_528E90::_Reserve
void VecR8_528E90::_Reserve(unsigned int n)
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

// STUB: 0x528F10 sub_528F10 (65 bytes)
void sub_528F10()
{
}

// STUB: 0x528F60 sub_528F60 (203 bytes)
void sub_528F60()
{
}

// STUB: 0x529030 sub_529030 (219 bytes)
void sub_529030()
{
}

// STUB: 0x529110 sub_529110 (207 bytes)
void sub_529110()
{
}

// STUB: 0x5291E0 sub_5291E0 (203 bytes)
void sub_5291E0()
{
}

// STUB: 0x5292B0 sub_5292B0 (52 bytes)
void sub_5292B0()
{
}

// STUB: 0x5292F0 sub_5292F0 (195 bytes)
void sub_5292F0()
{
}

// STUB: 0x5293C0 sub_5293C0 (639 bytes)
void sub_5293C0()
{
}

// STUB: 0x529640 sub_529640 (67 bytes)
void sub_529640()
{
}
