// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/render/AgFactory.h"

class AgResource;
typedef AgFactory<AgResource>::IAllocator IAlloc;

struct Str5318C0 {
    int length;
    char* data;
    Str5318C0(const char* text, int count);
    ~Str5318C0();
    int size();
    char* c_str();
};
struct IdMap5318C0 {
    void*& at(unsigned* key);
};
unsigned __cdecl sub_55C780(const char* data, int length);

struct Alloc5318C0 : IAlloc {
    Alloc5318C0() throw() {}
    virtual ~Alloc5318C0();
    virtual void vfn_1();
    virtual void vfn_2();
    virtual void vfn_3();
};

struct Reg5318C0 {
    IdMap5318C0 map;
    void add(const char* name);
};

// FUNCTION: 0x5318C0 Reg5318C0::add
void Reg5318C0::add(const char* name)
{
    unsigned key;
    {
        Str5318C0 s(name, -1);
        key = sub_55C780(s.c_str(), s.size());
    }
    map.at(&key) = new Alloc5318C0();
}
