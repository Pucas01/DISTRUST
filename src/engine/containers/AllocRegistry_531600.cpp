// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/render/AgFactory.h"

class AgResource;
typedef AgFactory<AgResource>::IAllocator IAlloc;

struct Str531600 {
    int length;
    char* data;
    Str531600(const char* text, int count);
    ~Str531600();
    int size();
    char* c_str();
};
struct IdMap531600 {
    void*& at(unsigned* key);
};
unsigned __cdecl sub_55C780(const char* data, int length);

struct Alloc531600 : IAlloc {
    Alloc531600() throw() {}
    virtual ~Alloc531600();
    virtual void vfn_1();
    virtual void vfn_2();
    virtual void vfn_3();
};

struct Reg531600 {
    IdMap531600 map;
    void add(const char* name);
};

// FUNCTION: 0x531600 Reg531600::add
void Reg531600::add(const char* name)
{
    unsigned key;
    {
        Str531600 s(name, -1);
        key = sub_55C780(s.c_str(), s.size());
    }
    map.at(&key) = new Alloc531600();
}
