void __cdecl releaseObject(void* object);
void* __cdecl sub_4EA2A0(int n);

struct Elem12_4EFA10 {
    char b[12];
};

struct VecR12_4EFA10 {
    Elem12_4EFA10* first;
    Elem12_4EFA10* last;
    Elem12_4EFA10* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

// STUB: 0x4EF540 sub_4EF540 (214 bytes)
void sub_4EF540()
{
}

// STUB: 0x4EF620 sub_4EF620 (262 bytes)
void sub_4EF620()
{
}

// STUB: 0x4EF730 sub_4EF730 (171 bytes)
void sub_4EF730()
{
}

// STUB: 0x4EF7E0 sub_4EF7E0 (173 bytes)
void sub_4EF7E0()
{
}

// STUB: 0x4EF890 sub_4EF890 (85 bytes)
void sub_4EF890()
{
}

// STUB: 0x4EF910 sub_4EF910 (250 bytes)
void sub_4EF910()
{
}

// FUNCTION: 0x4EFA10 VecR12_4EFA10::_Reserve
void VecR12_4EFA10::_Reserve(unsigned int n)
{
    if ((unsigned int)(end - last) < n) {
        unsigned int size = last - first;
        if (0xFFFFFFFFu / 12 - size < n) {
            std::_Xlength_error("vector<T> too long");
        } else {
            unsigned int want = size + n;
            unsigned int cap = end - first;
            if (0xFFFFFFFFu / 12 - cap / 2 < cap)
                cap = 0;
            else
                cap += cap / 2;
            if (cap < want)
                cap = want;
            reserve(cap);
        }
    }
}

// STUB: 0x4EFAB0 sub_4EFAB0 (66 bytes)
void sub_4EFAB0()
{
}

// STUB: 0x4EFB00 sub_4EFB00 (255 bytes)
void sub_4EFB00()
{
}

// STUB: 0x4EFC00 sub_4EFC00 (259 bytes)
void sub_4EFC00()
{
}

// STUB: 0x4EFD10 sub_4EFD10 (139 bytes)
void sub_4EFD10()
{
}

// STUB: 0x4EFDA0 sub_4EFDA0 (402 bytes)
void sub_4EFDA0()
{
}

// STUB: 0x4EFF80 sub_4EFF80 (257 bytes)
void sub_4EFF80()
{
}

// STUB: 0x4F0090 sub_4F0090 (3241 bytes)
void sub_4F0090()
{
}

// STUB: 0x4F0D60 sub_4F0D60 (254 bytes)
void sub_4F0D60()
{
}

// STUB: 0x4F0E60 sub_4F0E60 (1276 bytes)
void sub_4F0E60()
{
}

// STUB: 0x4F1360 sub_4F1360 (264 bytes)
void sub_4F1360()
{
}

// STUB: 0x4F1470 sub_4F1470 (341 bytes)
void sub_4F1470()
{
}

// STUB: 0x4F1660 sub_4F1660 (231 bytes)
void sub_4F1660()
{
}

// STUB: 0x4F1750 sub_4F1750 (145 bytes)
void sub_4F1750()
{
}

// STUB: 0x4F17F0 sub_4F17F0 (40 bytes)
void sub_4F17F0()
{
}

// STUB: 0x4F1820 sub_4F1820 (65 bytes)
void sub_4F1820()
{
}

// STUB: 0x4F1870 sub_4F1870 (151 bytes)
void sub_4F1870()
{
}

// STUB: 0x4F1910 sub_4F1910 (281 bytes)
void sub_4F1910()
{
}

// STUB: 0x4F1A30 sub_4F1A30 (123 bytes)
void sub_4F1A30()
{
}

// FUNCTION: 0x4F1AB0 reallocSlot
bool __cdecl reallocSlot(void** slot, int n)
{
    if (*slot)
        releaseObject(*slot);
    if (n <= 0) {
        *slot = 0;
        return true;
    }
    *slot = sub_4EA2A0(n);
    return *slot != 0;
}

// STUB: 0x4F1AF0 sub_4F1AF0 (80 bytes)
void sub_4F1AF0()
{
}
