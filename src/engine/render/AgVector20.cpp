struct Elem20_516550 {
    char b[20];
};

struct VecR20_516550 {
    Elem20_516550* first;
    Elem20_516550* last;
    Elem20_516550* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

// FUNCTION: 0x516550 VecR20_516550::_Reserve
void VecR20_516550::_Reserve(unsigned int n)
{
    if ((unsigned int)(end - last) < n) {
        unsigned int size = last - first;
        if (0xFFFFFFFFu / 20 - size < n) {
            std::_Xlength_error("vector<T> too long");
        } else {
            unsigned int want = size + n;
            unsigned int cap = end - first;
            if (0xFFFFFFFFu / 20 - cap / 2 < cap)
                cap = 0;
            else
                cap += cap / 2;
            if (cap < want)
                cap = want;
            reserve(cap);
        }
    }
}

// STUB: 0x516600 sub_516600 (73 bytes)
void sub_516600()
{
}

// STUB: 0x516650 sub_516650 (6 bytes)
void sub_516650()
{
}
