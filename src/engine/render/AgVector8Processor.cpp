struct Elem8_4B0660 {
    char b[8];
};

struct VecR8_4B0660 {
    Elem8_4B0660* first;
    Elem8_4B0660* last;
    Elem8_4B0660* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

// STUB: 0x4B0580 sub_4B0580 (208 bytes)
void sub_4B0580()
{
}

// FUNCTION: 0x4B0660 VecR8_4B0660::_Reserve
void VecR8_4B0660::_Reserve(unsigned int n)
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

// STUB: 0x4B06E0 sub_4B06E0 (47 bytes)
void sub_4B06E0()
{
}

// STUB: 0x4B0710 sub_4B0710 (282 bytes)
void sub_4B0710()
{
}

// STUB: 0x4B0830 sub_4B0830 (249 bytes)
void sub_4B0830()
{
}

// STUB: 0x4B0930 sub_4B0930 (22 bytes)
void sub_4B0930()
{
}

// STUB: 0x4B0950 sub_4B0950 (236 bytes)
void sub_4B0950()
{
}

// STUB: 0x4B0A40 sub_4B0A40 (205 bytes)
void sub_4B0A40()
{
}

// STUB: 0x4B0B10 sub_4B0B10 (188 bytes)
void sub_4B0B10()
{
}

// STUB: 0x4B0BD0 sub_4B0BD0 (71 bytes)
void sub_4B0BD0()
{
}

// STUB: 0x4B0C20 sub_4B0C20 (369 bytes)
void sub_4B0C20()
{
}

// STUB: 0x4B0DA0 sub_4B0DA0 (563 bytes)
void sub_4B0DA0()
{
}

// STUB: 0x4B0FE0 sub_4B0FE0 (1788 bytes)
void sub_4B0FE0()
{
}

// STUB: 0x4B16E0 sub_4B16E0 (131 bytes)
void sub_4B16E0()
{
}
