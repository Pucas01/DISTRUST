extern int g_74D8A0;
extern int g_7558E0;
extern int g_7538C0;
extern int g_7538C4;

struct SlotRec {
    char data[0x17C];
};

extern SlotRec g_slots[];

struct Triple3 {
    int a;
    int b;
    int c;
    Triple3* clear();
};

struct OwnedBuf {
    char* data;
    int length;
    void release();
};

struct IntVec {
    int* first;
    int* last;
    int* end;
    unsigned int grow(unsigned int want);
};

void __cdecl operator delete[](void* block);
void* __cdecl memmove(void* dst, const void* src, unsigned int n);

struct Elem4_4E5520 {
    char b[4];
};

struct VecR4_4E5520 {
    Elem4_4E5520* first;
    Elem4_4E5520* last;
    Elem4_4E5520* end;
    void reserve(unsigned int n);
    void _Reserve(unsigned int n);
};
namespace std {
__declspec(noreturn) void __cdecl _Xlength_error(const char* what);
}

// STUB: 0x4E47D0 sub_4E47D0 (144 bytes)
void sub_4E47D0()
{
}

// STUB: 0x4E4870 sub_4E4870 (530 bytes)
void sub_4E4870()
{
}

// STUB: 0x4E4A90 sub_4E4A90 (380 bytes)
void sub_4E4A90()
{
}

// STUB: 0x4E4C10 sub_4E4C10 (285 bytes)
void sub_4E4C10()
{
}

// FUNCTION: 0x4E4D30 copyInts
int* __stdcall copyInts(const int* first, const int* last, int* dest)
{
    int n = last - first;
    return (int*)memmove(dest, first, n * 4) + n;
}

// STUB: 0x4E4D60 sub_4E4D60 (307 bytes)
void sub_4E4D60()
{
}

// STUB: 0x4E4EA0 sub_4E4EA0 (357 bytes)
void sub_4E4EA0()
{
}

// FUNCTION: 0x4E5010 Triple3::clear
Triple3* Triple3::clear()
{
    a = 0;
    b = 0;
    c = 0;
    return this;
}

// STUB: 0x4E5030 sub_4E5030 (313 bytes)
void sub_4E5030()
{
}

// STUB: 0x4E5170 sub_4E5170 (119 bytes)
void sub_4E5170()
{
}

// FUNCTION: 0x4E51F0 OwnedBuf::release
void OwnedBuf::release()
{
    operator delete[](data);
    data = 0;
    length = 0;
}

// STUB: 0x4E5210 sub_4E5210 (114 bytes)
void sub_4E5210()
{
}

// STUB: 0x4E5290 sub_4E5290 (93 bytes)
void sub_4E5290()
{
}

// STUB: 0x4E52F0 sub_4E52F0 (211 bytes)
void sub_4E52F0()
{
}

// STUB: 0x4E53D0 sub_4E53D0 (45 bytes)
void sub_4E53D0()
{
}

// STUB: 0x4E5400 sub_4E5400 (54 bytes)
void sub_4E5400()
{
}

// STUB: 0x4E5440 sub_4E5440 (29 bytes)
void sub_4E5440()
{
}

// FUNCTION: 0x4E5460 IntVec::grow
unsigned int IntVec::grow(unsigned int want)
{
    unsigned int cap = end - first;
    if (0x3FFFFFFF - cap / 2 < cap)
        cap = 0;
    else
        cap += cap / 2;
    return cap < want ? want : cap;
}

// STUB: 0x4E54A0 sub_4E54A0 (123 bytes)
void sub_4E54A0()
{
}

// FUNCTION: 0x4E5520 VecR4_4E5520::_Reserve
void VecR4_4E5520::_Reserve(unsigned int n)
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

// STUB: 0x4E55A0 sub_4E55A0 (156 bytes)
void sub_4E55A0()
{
}

// STUB: 0x4E5640 sub_4E5640 (117 bytes)
void sub_4E5640()
{
}

// STUB: 0x4E56C0 sub_4E56C0 (183 bytes)
void sub_4E56C0()
{
}

// STUB: 0x4E5780 sub_4E5780 (1364 bytes)
void sub_4E5780()
{
}

// STUB: 0x4E5CE0 sub_4E5CE0 (61 bytes)
void sub_4E5CE0()
{
}

// STUB: 0x4E5D20 sub_4E5D20 (86 bytes)
void sub_4E5D20()
{
}

// FUNCTION: 0x4E5D80 getSlot
SlotRec* __cdecl getSlot(int index)
{
    return &g_slots[index];
}

// STUB: 0x4E5DA0 allocGraphicsMemory (212 bytes)
void allocGraphicsMemory()
{
}

// STUB: 0x4E5E80 sub_4E5E80 (216 bytes)
void sub_4E5E80()
{
}

// FUNCTION: 0x4E5F60 copyGlobal74D8A0
void copyGlobal74D8A0()
{
    g_7558E0 = g_74D8A0;
}

// STUB: 0x4E5F70 freeGraphicsMemory (209 bytes)
void freeGraphicsMemory()
{
}

// STUB: 0x4E6050 sub_4E6050 (162 bytes)
void sub_4E6050()
{
}

// FUNCTION: 0x4E6100 resetGlobals7538C0
void resetGlobals7538C0()
{
    g_7538C0 = -1;
    g_7538C4 = -1;
}

// STUB: 0x4E6120 sub_4E6120 (101 bytes)
void sub_4E6120()
{
}

// STUB: 0x4E6190 sub_4E6190 (145 bytes)
void sub_4E6190()
{
}

// STUB: 0x4E6230 sub_4E6230 (150 bytes)
void sub_4E6230()
{
}

// STUB: 0x4E62D0 sub_4E62D0 (278 bytes)
void sub_4E62D0()
{
}

// STUB: 0x4E63F0 sub_4E63F0 (84 bytes)
void sub_4E63F0()
{
}

// STUB: 0x4E6450 sub_4E6450 (305 bytes)
void sub_4E6450()
{
}

// STUB: 0x4E6590 sub_4E6590 (324 bytes)
void sub_4E6590()
{
}

// STUB: 0x4E66E0 sub_4E66E0 (1932 bytes)
void sub_4E66E0()
{
}

// STUB: 0x4E6E70 sub_4E6E70 (220 bytes)
void sub_4E6E70()
{
}

// STUB: 0x4E6F50 sub_4E6F50 (308 bytes)
void sub_4E6F50()
{
}
