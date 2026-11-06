struct Elem8_4FEC50 {
    char b[8];
};

struct VecR8_4FEC50 {
    Elem8_4FEC50* first;
    Elem8_4FEC50* last;
    Elem8_4FEC50* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

// STUB: 0x4FEA90 sub_4FEA90 (83 bytes)
void sub_4FEA90()
{
}

// STUB: 0x4FEAF0 sub_4FEAF0 (117 bytes)
void sub_4FEAF0()
{
}

// FUNCTION: 0x4FEC50 VecR8_4FEC50::_Reserve
void VecR8_4FEC50::_Reserve(unsigned int n)
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

// STUB: 0x4FED90 sub_4FED90 (663 bytes)
void sub_4FED90()
{
}

// STUB: 0x4FF030 sub_4FF030 (106 bytes)
void sub_4FF030()
{
}

// STUB: 0x4FF0A0 sub_4FF0A0 (106 bytes)
void sub_4FF0A0()
{
}

// STUB: 0x4FF110 sub_4FF110 (154 bytes)
void sub_4FF110()
{
}

// STUB: 0x4FF1B0 sub_4FF1B0 (105 bytes)
void sub_4FF1B0()
{
}

// STUB: 0x4FF220 sub_4FF220 (1169 bytes)
void sub_4FF220()
{
}
