struct Elem72_548200 {
    char b[72];
};

struct VecR72_548200 {
    Elem72_548200* first;
    Elem72_548200* last;
    Elem72_548200* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

// STUB: 0x547EA0 sub_547EA0 (36 bytes)
void sub_547EA0()
{
}

// STUB: 0x547ED0 sub_547ED0 (128 bytes)
void sub_547ED0()
{
}

// STUB: 0x547F60 sub_547F60 (90 bytes)
void sub_547F60()
{
}

// STUB: 0x547FC0 sub_547FC0 (175 bytes)
void sub_547FC0()
{
}

// STUB: 0x548070 sub_548070 (154 bytes)
void sub_548070()
{
}

// STUB: 0x548110 sub_548110 (224 bytes)
void sub_548110()
{
}

// FUNCTION: 0x548200 VecR72_548200::_Reserve
void VecR72_548200::_Reserve(unsigned int n)
{
    if ((unsigned int)(end - last) < n) {
        unsigned int size = last - first;
        if (0xFFFFFFFFu / 72 - size < n) {
            std::_Xlength_error("vector<T> too long");
        } else {
            unsigned int want = size + n;
            unsigned int cap = end - first;
            if (0xFFFFFFFFu / 72 - cap / 2 < cap)
                cap = 0;
            else
                cap += cap / 2;
            if (cap < want)
                cap = want;
            reserve(cap);
        }
    }
}

// STUB: 0x5482B0 sub_5482B0 (220 bytes)
void sub_5482B0()
{
}

// STUB: 0x548390 sub_548390 (62 bytes)
void sub_548390()
{
}

// STUB: 0x5483D0 sub_5483D0 (110 bytes)
void sub_5483D0()
{
}

// STUB: 0x548440 sub_548440 (2636 bytes)
void sub_548440()
{
}

// STUB: 0x548E90 sub_548E90 (185 bytes)
void sub_548E90()
{
}

// STUB: 0x548F50 sub_548F50 (194 bytes)
void sub_548F50()
{
}

// STUB: 0x549020 sub_549020 (191 bytes)
void sub_549020()
{
}

// STUB: 0x5490E0 sub_5490E0 (139 bytes)
void sub_5490E0()
{
}
