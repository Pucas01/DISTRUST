struct Elem8_50F4E0 {
    char b[8];
};

struct VecR8_50F4E0 {
    Elem8_50F4E0* first;
    Elem8_50F4E0* last;
    Elem8_50F4E0* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

struct Elem8_50F560 {
    char b[8];
};

struct VecR8_50F560 {
    Elem8_50F560* first;
    Elem8_50F560* last;
    Elem8_50F560* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

struct Elem8_50F5E0 {
    char b[16];
};

struct VecR8_50F5E0 {
    Elem8_50F5E0* first;
    Elem8_50F5E0* last;
    Elem8_50F5E0* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

// STUB: 0x50F250 sub_50F250 (222 bytes)
void sub_50F250()
{
}

// STUB: 0x50F330 sub_50F330 (222 bytes)
void sub_50F330()
{
}

// STUB: 0x50F410 sub_50F410 (204 bytes)
void sub_50F410()
{
}

// FUNCTION: 0x50F4E0 VecR8_50F4E0::_Reserve
void VecR8_50F4E0::_Reserve(unsigned int n)
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

// FUNCTION: 0x50F560 VecR8_50F560::_Reserve
void VecR8_50F560::_Reserve(unsigned int n)
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

// FUNCTION: 0x50F5E0 VecR8_50F5E0::_Reserve
void VecR8_50F5E0::_Reserve(unsigned int n)
{
    if ((unsigned int)(end - last) < n) {
        unsigned int size = last - first;
        if (0xFFFFFFFFu / 16 - size < n) {
            std::_Xlength_error("vector<T> too long");
        } else {
            unsigned int want = size + n;
            unsigned int cap = end - first;
            if (0xFFFFFFFFu / 16 - cap / 2 < cap)
                cap = 0;
            else
                cap += cap / 2;
            if (cap < want)
                cap = want;
            reserve(cap);
        }
    }
}
