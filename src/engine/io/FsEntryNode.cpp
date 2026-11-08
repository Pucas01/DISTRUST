// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/core/AgString.h"

struct V509190 {
    int p;
    int q;
    ~V509190();
};

struct Entry509190 {
    AgString name;
    V509190 value;
    ~Entry509190();
};

struct Node509190 {
    Node509190* left;
    Node509190* parent;
    Node509190* right;
    unsigned char color;
    unsigned char isNil;
    char pad[2];
    Entry509190 val;
};

void __cdecl operator delete(void* block);

// FUNCTION: 0x509190 ??1Entry509190@@QAE@XZ
Entry509190::~Entry509190()
{
}

// FUNCTION: 0x5097F0 ?freeNode509190@@YGXPAUNode509190@@@Z
void __stdcall freeNode509190(Node509190* n)
{
    n->val.~Entry509190();
    operator delete(n);
}
