// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/core/AgString.h"

struct V4FEA90 {
    int p;
    int q;
    ~V4FEA90();
};

struct NodeHdr4FEA90 {
    NodeHdr4FEA90* left;
    NodeHdr4FEA90* parent;
    NodeHdr4FEA90* right;
    unsigned char color;
    unsigned char isNil;
    char pad[2];
};

struct StrVal4FEA90 {
    AgString s;
    ~StrVal4FEA90() {}
};

struct StrNode4FEA90 : NodeHdr4FEA90 {
    StrVal4FEA90 val;
};

struct ValVal5277A0 {
    int pad[2];
    V4FEA90 v;
    ~ValVal5277A0() {}
};

struct ValNode5277A0 : NodeHdr4FEA90 {
    ValVal5277A0 val;
};

void __cdecl operator delete(void* block);

// FUNCTION: 0x4FEA90 ?freeStrNode@@YGXPAUStrNode4FEA90@@@Z
void __stdcall freeStrNode(StrNode4FEA90* n)
{
    n->val.~StrVal4FEA90();
    operator delete(n);
}

// FUNCTION: 0x5277A0 ?freeValNode@@YGXPAUValNode5277A0@@@Z
void __stdcall freeValNode(ValNode5277A0* n)
{
    n->val.~ValVal5277A0();
    operator delete(n);
}
