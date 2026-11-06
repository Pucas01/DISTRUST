// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/render/AgFactory.h"

class AgResource;
typedef AgFactory<AgResource>::IAllocator IAlloc;

struct Str531340 {
    int length;
    char* data;
    Str531340(const char* text, int count);
    ~Str531340();
    int size();
    char* c_str();
};
struct IdMap531340 {
    void*& at(unsigned* key);
};
unsigned __cdecl sub_55C780(const char* data, int length);

struct Alloc531340 : IAlloc {
    Alloc531340() throw() {}
    virtual ~Alloc531340();
    virtual void vfn_1();
    virtual void vfn_2();
    virtual void vfn_3();
};

struct Reg531340 {
    IdMap531340 map;
    void add(const char* name);
};

// FUNCTION: 0x531340 Reg531340::add
void Reg531340::add(const char* name)
{
    unsigned key;
    {
        Str531340 s(name, -1);
        key = sub_55C780(s.c_str(), s.size());
    }
    map.at(&key) = new Alloc531340();
}
