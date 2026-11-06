// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/render/AgFactory.h"

class AgResource;
typedef AgFactory<AgResource>::IAllocator IAlloc;

struct Str531760 {
    int length;
    char* data;
    Str531760(const char* text, int count);
    ~Str531760();
    int size();
    char* c_str();
};
struct IdMap531760 {
    void*& at(unsigned* key);
};
unsigned __cdecl sub_55C780(const char* data, int length);

struct Alloc531760 : IAlloc {
    Alloc531760() throw() {}
    virtual ~Alloc531760();
    virtual void vfn_1();
    virtual void vfn_2();
    virtual void vfn_3();
};

struct Reg531760 {
    IdMap531760 map;
    void add(const char* name);
};

// FUNCTION: 0x531760 Reg531760::add
void Reg531760::add(const char* name)
{
    unsigned key;
    {
        Str531760 s(name, -1);
        key = sub_55C780(s.c_str(), s.size());
    }
    map.at(&key) = new Alloc531760();
}
