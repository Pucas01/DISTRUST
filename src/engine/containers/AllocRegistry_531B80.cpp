// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/render/AgFactory.h"

class AgResource;
typedef AgFactory<AgResource>::IAllocator IAlloc;

struct Str531B80 {
    int length;
    char* data;
    Str531B80(const char* text, int count);
    ~Str531B80();
    int size();
    char* c_str();
};
struct IdMap531B80 {
    void*& at(unsigned* key);
};
unsigned __cdecl sub_55C780(const char* data, int length);

struct Alloc531B80 : IAlloc {
    Alloc531B80() throw() {}
    virtual ~Alloc531B80();
    virtual void vfn_1();
    virtual void vfn_2();
    virtual void vfn_3();
};

struct Reg531B80 {
    IdMap531B80 map;
    void add(const char* name);
};

// FUNCTION: 0x531B80 Reg531B80::add
void Reg531B80::add(const char* name)
{
    unsigned key;
    {
        Str531B80 s(name, -1);
        key = sub_55C780(s.c_str(), s.size());
    }
    map.at(&key) = new Alloc531B80();
}
