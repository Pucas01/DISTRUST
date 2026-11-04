#include <emmintrin.h>

struct Vec2 {
    float x;
    float y;
};

struct Node {
    Node* child;
    int refs;
    char pad[0x34];
    void* data;
};

struct Vec4 {
    float x;
    float y;
    float z;
    float w;
    Vec4() {}
    Vec4(float a, float b, float c, float d) : x(a), y(b), z(c), w(d) {}
};

struct TableRow {
    int v[8];
};

struct ResObj {
    unsigned short w0;
    unsigned short w2;
    int i4;
    unsigned i8;
    int ic;
    struct ResObj* p10;
    int i14;
    unsigned i18;
    int slots[8];
    int count3c;
    long long q40;
    long long q48;
};

struct Vec3 {
    float x;
    float y;
    float z;
    Vec3& operator=(const Vec3& o)
    {
        x = o.x;
        y = o.y;
        z = o.z;
        return *this;
    }
};

struct Quad {
    int a;
    Vec3 v;
};

typedef void* (__cdecl* AllocFn)(unsigned int);
typedef void (__cdecl* ErrFn)(const wchar_t*, const wchar_t*, const wchar_t*, unsigned int, unsigned int);

extern AllocFn g_allocA;
extern ErrFn g_errA;
extern AllocFn g_allocB;
extern ErrFn g_errB;

void* __cdecl malloc(unsigned int size);
void __cdecl _invalid_parameter(const wchar_t*, const wchar_t*, const wchar_t*, unsigned int, unsigned int);
void __cdecl sub_4EA470(ResObj* o);
void __cdecl sub_4EB610(ResObj* o);
void __cdecl sub_4E8970(ResObj* o);
void __cdecl releaseObject(void* object);
void __cdecl sub_4EC4E0(int a, const Vec4* v);
extern TableRow g_objTable[];
void __cdecl releaseNode(Node* n);
__declspec(noinline) void __cdecl unrefObject(ResObj* o);

// FUNCTION: 0x4EA310 setAllocators
void __cdecl setAllocators(AllocFn alloc, ErrFn err)
{
    if (!alloc)
        alloc = malloc;
    if (!err)
        err = _invalid_parameter;
    g_allocA = alloc;
    g_errA = err;
    g_allocB = g_allocA;
    g_errB = g_errA;
}

// FUNCTION: 0x4EA350 setAllocatorsB
void __cdecl setAllocatorsB(AllocFn alloc, ErrFn err)
{
    if (!alloc)
        alloc = malloc;
    if (!err)
        err = _invalid_parameter;
    g_allocB = alloc;
    g_errB = err;
}

// FUNCTION: 0x4EA380 isOmgHeader
char __cdecl isOmgHeader(const unsigned int* data, int size)
{
    if (!data)
        return 0;
    if ((unsigned int)(size - 1) <= 0x1E)
        return 0;
    if (data[0] != 0x2E474D4F)
        return 0;
    if (data[1] != 0x312E3030)
        return 0;
    return data[2] == 0x505350;
}

// FUNCTION: 0x4EA3C0 countChunks
int __cdecl countChunks(char* base, unsigned int type)
{
    if (!base)
        return 0;
    char* end = base + *(int*)(base + 4);
    char* p;
    int n = 0;
    if (*(unsigned short*)base & 0x8000)
        p = end;
    else
        p = base + *(int*)(base + 8);
    while (p < end) {
        if (!type || (*(unsigned short*)p & ~0x8000) == type)
            n++;
        p += *(int*)(p + 4);
    }
    return n;
}

// FUNCTION: 0x4EA410 findChunk3
char* __cdecl findChunk3(char* obj, int unused, int index)
{
    char* base = obj;
    if (base)
        base += 0x10;
    if (!base)
        return 0;
    char* end = base + *(int*)(base + 4);
    char* p;
    if (*(unsigned short*)base & 0x8000)
        p = end;
    else
        p = base + *(int*)(base + 8);
    for (; p < end; p += *(int*)(p + 4)) {
        if ((*(unsigned short*)p & ~0x8000) == 3) {
            if (index-- == 0)
                return p;
        }
    }
    return 0;
}

// STUB: 0x4EA470 sub_4EA470 (749 bytes)
void sub_4EA470()
{
}

// STUB: 0x4EA760 sub_4EA760 (145 bytes)
void sub_4EA760()
{
}

// FUNCTION: 0x4EA800 objDataSize
int __cdecl objDataSize(ResObj* o)
{
    if (o->w0 & 0x8000)
        return o->i4 - 8;
    return o->ic - o->w2;
}

// STUB: 0x4EA830 sub_4EA830 (221 bytes)
void sub_4EA830()
{
}

// FUNCTION: 0x4EA910 releaseNode
void __cdecl releaseNode(Node* n)
{
    if (n && --n->refs == 0) {
        releaseNode(n->child);
        n->child = 0;
        releaseObject(n->data);
        n->data = 0;
        releaseObject(n);
    }
}

// STUB: 0x4EA950 sub_4EA950 (216 bytes)
void sub_4EA950()
{
}

// STUB: 0x4EAA30 sub_4EAA30 (338 bytes)
void sub_4EAA30()
{
}

// FUNCTION: 0x4EABB0 setObjParams
void __cdecl setObjParams(ResObj* o, int a, int b, int c)
{
    if (o) {
        o->i14 = a;
        o->i18 = b;
        o->slots[0] = c;
    }
}

// FUNCTION: 0x4EABD0 initObjFromTable
void __cdecl initObjFromTable(ResObj* o, int index)
{
    if (o) {
        o->ic = index;
        const TableRow* r = &g_objTable[index - 0x82];
        o->slots[4] = r->v[0];
        o->slots[6] = r->v[1];
        o->slots[5] = r->v[2];
        o->i14 = r->v[3];
        o->i18 = r->v[4];
        o->slots[0] = r->v[5];
        o->slots[2] = r->v[6];
        o->slots[3] = r->v[7];
    }
}

// FUNCTION: 0x4EAC20 setObjBounds
void __cdecl setObjBounds(ResObj* o, const long long* q)
{
    if (!o)
        return;
    if (!q) {
        o->i8 &= ~1u;
        return;
    }
    o->i8 |= 1;
    _mm_storel_epi64((__m128i*)&o->q40, _mm_loadl_epi64((const __m128i*)&q[0]));
    _mm_storel_epi64((__m128i*)&o->q48, _mm_loadl_epi64((const __m128i*)&q[1]));
}

// FUNCTION: 0x4EAC50 releaseNodeChild
void __cdecl releaseNodeChild(Node* n)
{
    if (n) {
        Node* c = n->child;
        if (c && --c->refs == 0) {
            releaseNodeChild(c);
            releaseObject(c);
        }
        n->child = 0;
        releaseObject(n->data);
        n->data = 0;
    }
}

// STUB: 0x4EACA0 sub_4EACA0 (588 bytes)
void sub_4EACA0()
{
}

// STUB: 0x4EAF30 sub_4EAF30 (443 bytes)
void sub_4EAF30()
{
}

// FUNCTION: 0x4EB0F0 unrefObject
void __cdecl unrefObject(ResObj* o)
{
    if (o && --o->i14 == 0) {
        sub_4EB610(o);
        sub_4E8970(o);
        releaseObject(o);
    }
}

// STUB: 0x4EB120 sub_4EB120 (330 bytes)
void sub_4EB120()
{
}

// FUNCTION: 0x4EB270 getObjSlot
int __cdecl getObjSlot(ResObj* o, int index)
{
    if (!o)
        return 0;
    index &= 0xFFF;
    if (index >= o->count3c)
        return 0;
    return o->slots[index - 0 + 0];
}

// FUNCTION: 0x4EB2A0 getObjCount
int __cdecl getObjCount(ResObj* o)
{
    if (!o)
        return 1;
    return o->count3c;
}

// FUNCTION: 0x4EB2C0 getObjDrawCount
int __cdecl getObjDrawCount(ResObj* o)
{
    if (!o)
        return 1;
    int n = o->count3c;
    unsigned flags = o->i18;
    if (flags & 0xFF0000) {
        if (flags & 0x40000)
            n++;
        else if (flags & 0x10000)
            n++;
    }
    return n;
}

// STUB: 0x4EB2F0 sub_4EB2F0 (592 bytes)
void sub_4EB2F0()
{
}

// FUNCTION: 0x4EB610 releaseObjSlots
void __cdecl releaseObjSlots(ResObj* o)
{
    if (o) {
        for (int i = 0; i < o->count3c; i++)
            releaseNode((Node*)o->slots[i]);
        o->count3c = 0;
        unrefObject(o->p10);
        o->p10 = 0;
    }
}

// FUNCTION: 0x4EB690 releaseIfFlag
void __cdecl releaseIfFlag(ResObj* o, int unused, unsigned flags)
{
    if (o && (flags & 1))
        sub_4EA470(o);
}

// STUB: 0x4EB6B0 sub_4EB6B0 (1836 bytes)
void sub_4EB6B0()
{
}

// STUB: 0x4EBDF0 sub_4EBDF0 (403 bytes)
void sub_4EBDF0()
{
}

// STUB: 0x4EBF90 sub_4EBF90 (500 bytes)
void sub_4EBF90()
{
}

// FUNCTION: 0x4EC190 halfToFloat
float __cdecl halfToFloat(int h)
{
    int e = (h >> 10) & 0x1F;
    if (h & 0x7FFF)
        e += 0x70;
    h = ((((e << 7) | (h & 0xFFFF8000)) << 3) | (h & 0x3FF)) << 13;
    return *(float*)&h;
}

// STUB: 0x4EC1D0 sub_4EC1D0 (320 bytes)
void sub_4EC1D0()
{
}

// STUB: 0x4EC310 sub_4EC310 (219 bytes)
void sub_4EC310()
{
}

// STUB: 0x4EC3F0 sub_4EC3F0 (225 bytes)
void sub_4EC3F0()
{
}

// STUB: 0x4EC4E0 sub_4EC4E0 (210 bytes)
void sub_4EC4E0()
{
}

// FUNCTION: 0x4EC5C0 callWithVec4
void __cdecl callWithVec4(int a, const Vec4* p)
{
    Vec4 v(p->x, p->y, p->z, p->w);
    sub_4EC4E0(a, &v);
}

// FUNCTION: 0x4EC610 callWithFloats
void __cdecl callWithFloats(int a, float x, float y, float z, float w)
{
    Vec4 v(x, y, z, w);
    sub_4EC4E0(a, &v);
}

// STUB: 0x4EC660 sub_4EC660 (1281 bytes)
void sub_4EC660()
{
}

// STUB: 0x4ECB80 sub_4ECB80 (410 bytes)
void sub_4ECB80()
{
}

// STUB: 0x4ECD20 sub_4ECD20 (335 bytes)
void sub_4ECD20()
{
}

// STUB: 0x4ECE70 sub_4ECE70 (155 bytes)
void sub_4ECE70()
{
}

// STUB: 0x4ECF10 sub_4ECF10 (994 bytes)
void sub_4ECF10()
{
}

// STUB: 0x4ED300 sub_4ED300 (202 bytes)
void sub_4ED300()
{
}

// STUB: 0x4ED3D0 sub_4ED3D0 (137 bytes)
void sub_4ED3D0()
{
}

// STUB: 0x4ED460 sub_4ED460 (282 bytes)
void sub_4ED460()
{
}

// STUB: 0x4ED580 sub_4ED580 (283 bytes)
void sub_4ED580()
{
}

// FUNCTION: 0x4ED6A0 copyQuad
Quad* __cdecl copyQuad(Quad* dst, const Quad* src)
{
    float x = src->v.x;
    float y = src->v.y;
    float z = src->v.z;
    dst->a = src->a;
    dst->v.x = x;
    dst->v.y = y;
    dst->v.z = z;
    return dst;
}

// STUB: 0x4ED6D0 sub_4ED6D0 (422 bytes)
void sub_4ED6D0()
{
}
