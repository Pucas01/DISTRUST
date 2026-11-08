// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/core/AgString.h"

struct RNode {
    RNode* left;
    RNode* parent;
    RNode* right;
    char color;
    char isnil;
    char pad[2];
};

struct PlainNode532BB0 : RNode {
    int value;
};

struct StrVal4FEAF0 {
    AgString s;
    ~StrVal4FEAF0() {}
};

struct StrNode4FEAF0 : RNode {
    StrVal4FEAF0 val;
};

struct PlainTree532BB0 {
    void eraseSub(PlainNode532BB0* n);
};

struct StrTree4FEAF0 {
    void eraseSub(StrNode4FEAF0* n);
};

void __cdecl operator delete(void* block);

// FUNCTION: 0x532BB0 ?eraseSub@PlainTree532BB0@@QAEXPAUPlainNode532BB0@@@Z
void PlainTree532BB0::eraseSub(PlainNode532BB0* n)
{
    for (PlainNode532BB0* p = n; !p->isnil; n = p) {
        eraseSub((PlainNode532BB0*)p->right);
        p = (PlainNode532BB0*)p->left;
        operator delete(n);
    }
}

// FUNCTION: 0x4FEAF0 ?eraseSub@StrTree4FEAF0@@QAEXPAUStrNode4FEAF0@@@Z
void StrTree4FEAF0::eraseSub(StrNode4FEAF0* n)
{
    for (StrNode4FEAF0* p = n; !p->isnil; n = p) {
        eraseSub((StrNode4FEAF0*)p->right);
        p = (StrNode4FEAF0*)p->left;
        n->val.~StrVal4FEAF0();
        operator delete(n);
    }
}
