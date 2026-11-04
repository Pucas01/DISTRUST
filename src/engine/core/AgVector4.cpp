struct Elem8_4FFF30 {
    char b[4];
};

struct VecR8_4FFF30 {
    Elem8_4FFF30* first;
    Elem8_4FFF30* last;
    Elem8_4FFF30* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

// STUB: 0x4FFE60 sub_4FFE60 (205 bytes)
void sub_4FFE60()
{
}

// FUNCTION: 0x4FFF30 VecR8_4FFF30::_Reserve
void VecR8_4FFF30::_Reserve(unsigned int n)
{
    if ((unsigned int)(end - last) < n) {
        unsigned int size = last - first;
        if (0xFFFFFFFFu / 4 - size < n) {
            std::_Xlength_error("vector<T> too long");
        } else {
            unsigned int want = size + n;
            unsigned int cap = end - first;
            if (0xFFFFFFFFu / 4 - cap / 2 < cap)
                cap = 0;
            else
                cap += cap / 2;
            if (cap < want)
                cap = want;
            reserve(cap);
        }
    }
}

// STUB: 0x4FFFB0 sub_4FFFB0 (869 bytes)
void sub_4FFFB0()
{
}

// STUB: 0x500320 sub_500320 (175 bytes)
void sub_500320()
{
}

// STUB: 0x5003D0 sub_5003D0 (139 bytes)
void sub_5003D0()
{
}

// STUB: 0x500460 sub_500460 (139 bytes)
void sub_500460()
{
}

// STUB: 0x5004F0 sub_5004F0 (139 bytes)
void sub_5004F0()
{
}

// STUB: 0x500580 sub_500580 (685 bytes)
void sub_500580()
{
}
