struct Vtbl3 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct Holder {
    char pad[0x1C8];
    Vtbl3* b;
    int gap;
    Vtbl3* a;
    void stopBoth();
};

struct Boxed {
    char pad[0x10];
    char inner[4];
};

void __stdcall sub_4F9590(int a, int b);
void __fastcall sub_4F6730(void* self);
void __cdecl operator delete(void* block);

struct Elem8_4F81A0 {
    char b[8];
};

struct VecR8_4F81A0 {
    Elem8_4F81A0* first;
    Elem8_4F81A0* last;
    Elem8_4F81A0* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

struct Elem8_4F8220 {
    char b[8];
};

struct VecR8_4F8220 {
    Elem8_4F8220* first;
    Elem8_4F8220* last;
    Elem8_4F8220* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

// STUB: 0x4F7840 sub_4F7840 (129 bytes)
void sub_4F7840()
{
}

// STUB: 0x4F78D0 sub_4F78D0 (113 bytes)
void sub_4F78D0()
{
}

// FUNCTION: 0x4F7950 destroyBoxed
void __stdcall destroyBoxed(Boxed* o)
{
    sub_4F6730(o->inner);
    operator delete(o);
}

// STUB: 0x4F7970 sub_4F7970 (152 bytes)
void sub_4F7970()
{
}

// STUB: 0x4F7A10 sub_4F7A10 (205 bytes)
void sub_4F7A10()
{
}

// STUB: 0x4F7AE0 sub_4F7AE0 (607 bytes)
void sub_4F7AE0()
{
}

// STUB: 0x4F7D40 sub_4F7D40 (251 bytes)
void sub_4F7D40()
{
}

// STUB: 0x4F7E40 sub_4F7E40 (204 bytes)
void sub_4F7E40()
{
}

// STUB: 0x4F7F10 sub_4F7F10 (217 bytes)
void sub_4F7F10()
{
}

// STUB: 0x4F7FF0 sub_4F7FF0 (222 bytes)
void sub_4F7FF0()
{
}

// STUB: 0x4F80D0 sub_4F80D0 (205 bytes)
void sub_4F80D0()
{
}

// FUNCTION: 0x4F81A0 VecR8_4F81A0::_Reserve
void VecR8_4F81A0::_Reserve(unsigned int n)
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

// FUNCTION: 0x4F8220 VecR8_4F8220::_Reserve
void VecR8_4F8220::_Reserve(unsigned int n)
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

// STUB: 0x4F82A0 sub_4F82A0 (97 bytes)
void sub_4F82A0()
{
}

// FUNCTION: 0x4F8310 fillInts
int* __stdcall fillInts(int* first, unsigned int count, const int* value)
{
    int* p = first;
    for (unsigned int n = count; n; --n) {
        *p = *value;
        p++;
    }
    return first + count;
}

// STUB: 0x4F8340 sub_4F8340 (388 bytes)
void sub_4F8340()
{
}

// STUB: 0x4F84D0 sub_4F84D0 (198 bytes)
void sub_4F84D0()
{
}

// FUNCTION: 0x4F85A0 Holder::stopBoth
void Holder::stopBoth()
{
    a->v2();
    b->v2();
}

// STUB: 0x4F85C0 sub_4F85C0 (99 bytes)
void sub_4F85C0()
{
}

// STUB: 0x4F8630 sub_4F8630 (112 bytes)
void sub_4F8630()
{
}

// STUB: 0x4F86A0 sub_4F86A0 (115 bytes)
void sub_4F86A0()
{
}

// STUB: 0x4F8720 sub_4F8720 (319 bytes)
void sub_4F8720()
{
}

// STUB: 0x4F8860 sub_4F8860 (180 bytes)
void sub_4F8860()
{
}

// STUB: 0x4F8920 sub_4F8920 (91 bytes)
void sub_4F8920()
{
}

// STUB: 0x4F8980 sub_4F8980 (189 bytes)
void sub_4F8980()
{
}

// STUB: 0x4F8A40 sub_4F8A40 (691 bytes)
void sub_4F8A40()
{
}

// STUB: 0x4F8D00 sub_4F8D00 (189 bytes)
void sub_4F8D00()
{
}

// STUB: 0x4F8DC0 sub_4F8DC0 (724 bytes)
void sub_4F8DC0()
{
}

// STUB: 0x4F90A0 sub_4F90A0 (158 bytes)
void sub_4F90A0()
{
}

// STUB: 0x4F9140 sub_4F9140 (604 bytes)
void sub_4F9140()
{
}

// STUB: 0x4F93A0 sub_4F93A0 (90 bytes)
void sub_4F93A0()
{
}

// STUB: 0x4F9400 sub_4F9400 (395 bytes)
void sub_4F9400()
{
}

// STUB: 0x4F9590 sub_4F9590 (484 bytes)
void sub_4F9590()
{
}

// STUB: 0x4F9780 sub_4F9780 (301 bytes)
void sub_4F9780()
{
}

// STUB: 0x4F98B0 sub_4F98B0 (212 bytes)
void sub_4F98B0()
{
}

// STUB: 0x4F9990 sub_4F9990 (118 bytes)
void sub_4F9990()
{
}

// FUNCTION: 0x4F9A10 forwardFirst
int __stdcall forwardFirst(int a, int b)
{
    sub_4F9590(a, b);
    return a;
}
