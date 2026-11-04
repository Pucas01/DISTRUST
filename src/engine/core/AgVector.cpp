struct Vec8Arr {
    float* p;
    float get(int i);
};

struct Pair8 {
    int a;
    int b;
};

struct Vec8Grow {
    Pair8* first;
    Pair8* last;
    Pair8* end;
    unsigned int grow(unsigned int want);
};

struct Slot16 {
    int a;
    void* ptr;
    int b;
    int c;
};
void __cdecl operator delete(void* block);

struct Elem24_4B6DE0 {
    char b[24];
};

struct VecR24_4B6DE0 {
    Elem24_4B6DE0* first;
    Elem24_4B6DE0* last;
    Elem24_4B6DE0* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

struct Elem12_4B6E90 {
    char b[12];
};

struct VecR12_4B6E90 {
    Elem12_4B6E90* first;
    Elem12_4B6E90* last;
    Elem12_4B6E90* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

// FUNCTION: 0x4B6660 destroySlot16Range
void __cdecl destroySlot16Range(Slot16* first, Slot16* last)
{
    for (; first != last; first++) {
        if (first->ptr) {
            operator delete(first->ptr);
            first->ptr = 0;
            first->b = 0;
            first->c = 0;
        }
    }
}

// STUB: 0x4B66B0 sub_4B66B0 (41 bytes)
void sub_4B66B0()
{
}

// STUB: 0x4B66E0 sub_4B66E0 (41 bytes)
void sub_4B66E0()
{
}

// STUB: 0x4B6710 sub_4B6710 (40 bytes)
void sub_4B6710()
{
}

// STUB: 0x4B6740 sub_4B6740 (54 bytes)
void sub_4B6740()
{
}

// STUB: 0x4B6780 sub_4B6780 (60 bytes)
void sub_4B6780()
{
}

// STUB: 0x4B67C0 sub_4B67C0 (48 bytes)
void sub_4B67C0()
{
}

// STUB: 0x4B67F0 sub_4B67F0 (107 bytes)
void sub_4B67F0()
{
}

// STUB: 0x4B6860 sub_4B6860 (215 bytes)
void sub_4B6860()
{
}

// FUNCTION: 0x4B6940 Vec8Grow::grow
unsigned int Vec8Grow::grow(unsigned int want)
{
    unsigned int cap = end - first;
    if (0x1FFFFFFF - cap / 2 < cap)
        cap = 0;
    else
        cap += cap / 2;
    return cap < want ? want : cap;
}

// STUB: 0x4B6980 sub_4B6980 (631 bytes)
void sub_4B6980()
{
}

// STUB: 0x4B6C00 sub_4B6C00 (227 bytes)
void sub_4B6C00()
{
}

// STUB: 0x4B6CF0 sub_4B6CF0 (226 bytes)
void sub_4B6CF0()
{
}

// FUNCTION: 0x4B6DE0 VecR24_4B6DE0::_Reserve
void VecR24_4B6DE0::_Reserve(unsigned int n)
{
    if ((unsigned int)(end - last) < n) {
        unsigned int size = last - first;
        if (0xFFFFFFFFu / 24 - size < n) {
            std::_Xlength_error("vector<T> too long");
        } else {
            unsigned int want = size + n;
            unsigned int cap = end - first;
            if (0xFFFFFFFFu / 24 - cap / 2 < cap)
                cap = 0;
            else
                cap += cap / 2;
            if (cap < want)
                cap = want;
            reserve(cap);
        }
    }
}

// FUNCTION: 0x4B6E90 VecR12_4B6E90::_Reserve
void VecR12_4B6E90::_Reserve(unsigned int n)
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

// STUB: 0x4B6F30 sub_4B6F30 (90 bytes)
void sub_4B6F30()
{
}

// STUB: 0x4B6F90 sub_4B6F90 (66 bytes)
void sub_4B6F90()
{
}

// STUB: 0x4B6FE0 sub_4B6FE0 (66 bytes)
void sub_4B6FE0()
{
}

// STUB: 0x4B7030 sub_4B7030 (19 bytes)
void sub_4B7030()
{
}

// STUB: 0x4B7050 sub_4B7050 (8 bytes)
void sub_4B7050()
{
}

// FUNCTION: 0x4B7060 Vec8Arr::get
float Vec8Arr::get(int i)
{
    return p[i * 2];
}

// STUB: 0x4B7070 sub_4B7070 (41 bytes)
void sub_4B7070()
{
}

// STUB: 0x4B70A0 sub_4B70A0 (1394 bytes)
void sub_4B70A0()
{
}

// STUB: 0x4B7620 sub_4B7620 (168 bytes)
void sub_4B7620()
{
}
