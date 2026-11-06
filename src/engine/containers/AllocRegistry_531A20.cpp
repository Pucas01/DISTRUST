// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/render/AgFactory.h"

class AgResource;
typedef AgFactory<AgResource>::IAllocator IAlloc;

struct Str531A20 {
    int length;
    char* data;
    Str531A20(const char* text, int count);
    ~Str531A20();
    int size();
    char* c_str();
};
struct IdMap531A20 {
    void*& at(unsigned* key);
};
unsigned __cdecl sub_55C780(const char* data, int length);

struct Alloc531A20 : IAlloc {
    Alloc531A20() throw() {}
    virtual ~Alloc531A20();
    virtual void vfn_1();
    virtual void vfn_2();
    virtual void vfn_3();
};

struct Reg531A20 {
    IdMap531A20 map;
    void add(const char* name);
};

// FUNCTION: 0x531A20 Reg531A20::add
void Reg531A20::add(const char* name)
{
    unsigned key;
    {
        Str531A20 s(name, -1);
        key = sub_55C780(s.c_str(), s.size());
    }
    map.at(&key) = new Alloc531A20();
}
