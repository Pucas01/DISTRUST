struct Elem12_5520C0 {
    char b[12];
};

struct VecR12_5520C0 {
    Elem12_5520C0* first;
    Elem12_5520C0* last;
    Elem12_5520C0* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

// STUB: 0x5514B0 sub_5514B0 (249 bytes)
void sub_5514B0()
{
}

// STUB: 0x5515B0 sub_5515B0 (222 bytes)
void sub_5515B0()
{
}

// STUB: 0x551690 sub_551690 (144 bytes)
void sub_551690()
{
}

// STUB: 0x551720 sub_551720 (282 bytes)
void sub_551720()
{
}

// STUB: 0x551840 sub_551840 (285 bytes)
void sub_551840()
{
}

// STUB: 0x551960 sub_551960 (225 bytes)
void sub_551960()
{
}

// STUB: 0x551A50 sub_551A50 (156 bytes)
void sub_551A50()
{
}

// STUB: 0x551AF0 sub_551AF0 (97 bytes)
void sub_551AF0()
{
}

// STUB: 0x551B60 sub_551B60 (97 bytes)
void sub_551B60()
{
}

// STUB: 0x551BD0 sub_551BD0 (87 bytes)
void sub_551BD0()
{
}

// STUB: 0x551C80 sub_551C80 (79 bytes)
void sub_551C80()
{
}

// STUB: 0x551CD0 sub_551CD0 (160 bytes)
void sub_551CD0()
{
}

// STUB: 0x551D70 sub_551D70 (176 bytes)
void sub_551D70()
{
}

// STUB: 0x551E20 sub_551E20 (160 bytes)
void sub_551E20()
{
}

// STUB: 0x551EC0 sub_551EC0 (105 bytes)
void sub_551EC0()
{
}

// STUB: 0x551F30 sub_551F30 (139 bytes)
void sub_551F30()
{
}

// STUB: 0x551FC0 sub_551FC0 (252 bytes)
void sub_551FC0()
{
}

// FUNCTION: 0x5520C0 VecR12_5520C0::_Reserve
void VecR12_5520C0::_Reserve(unsigned int n)
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

// STUB: 0x552160 sub_552160 (250 bytes)
void sub_552160()
{
}

// STUB: 0x552260 sub_552260 (189 bytes)
void sub_552260()
{
}

// STUB: 0x552320 sub_552320 (685 bytes)
void sub_552320()
{
}

// STUB: 0x5525D0 sub_5525D0 (308 bytes)
void sub_5525D0()
{
}

// STUB: 0x552710 sub_552710 (445 bytes)
void sub_552710()
{
}

// STUB: 0x5528D0 sub_5528D0 (921 bytes)
void sub_5528D0()
{
}

// STUB: 0x552C90 sub_552C90 (225 bytes)
void sub_552C90()
{
}
