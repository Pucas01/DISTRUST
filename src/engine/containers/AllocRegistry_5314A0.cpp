// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/render/AgFactory.h"

class AgResource;
typedef AgFactory<AgResource>::IAllocator IAlloc;

struct Str5314A0 {
    int length;
    char* data;
    Str5314A0(const char* text, int count);
    ~Str5314A0();
    int size();
    char* c_str();
};
struct IdMap5314A0 {
    void*& at(unsigned* key);
};
unsigned __cdecl sub_55C780(const char* data, int length);

struct Alloc5314A0 : IAlloc {
    Alloc5314A0() throw() {}
    virtual ~Alloc5314A0();
    virtual void vfn_1();
    virtual void vfn_2();
    virtual void vfn_3();
};

struct Reg5314A0 {
    IdMap5314A0 map;
    void add(const char* name);
};

// FUNCTION: 0x5314A0 Reg5314A0::add
void Reg5314A0::add(const char* name)
{
    unsigned key;
    {
        Str5314A0 s(name, -1);
        key = sub_55C780(s.c_str(), s.size());
    }
    map.at(&key) = new Alloc5314A0();
}
