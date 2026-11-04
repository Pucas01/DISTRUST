#include "engine/core/AgString.h"

struct MapNode {
    MapNode* left;
    MapNode* parent;
    MapNode* right;
    unsigned char color;
    unsigned char isNil;
    char pad[6];
    AgString key;
};

struct StrKeyed {
    int pad;
    AgString key;
    void dtorKey();
};

struct NodeMap {
    void eraseTree(MapNode* n);
};

struct Registry {
    char pad[0x1C];
};

extern void* g_73F4D0;

__declspec(noreturn) void __cdecl sub_5E2317();
void* __cdecl operator new(unsigned int size);
void __cdecl operator delete(void* block);
inline void* operator new(unsigned int, void* where) { return where; }
void __fastcall sub_4B8880(void* self);

// STUB: 0x4B76D0 sub_4B76D0 (139 bytes)
void sub_4B76D0()
{
}

// STUB: 0x4B7760 sub_4B7760 (152 bytes)
void sub_4B7760()
{
}

// STUB: 0x4B7800 sub_4B7800 (152 bytes)
void sub_4B7800()
{
}

// STUB: 0x4B78A0 sub_4B78A0 (198 bytes)
void sub_4B78A0()
{
}

// STUB: 0x4B7970 sub_4B7970 (129 bytes)
void sub_4B7970()
{
}

// STUB: 0x4B7A00 sub_4B7A00 (129 bytes)
void sub_4B7A00()
{
}

// STUB: 0x4B7A90 sub_4B7A90 (236 bytes)
void sub_4B7A90()
{
}

// STUB: 0x4B7B80 sub_4B7B80 (1166 bytes)
void sub_4B7B80()
{
}

// STUB: 0x4B8030 sub_4B8030 (164 bytes)
void sub_4B8030()
{
}

// STUB: 0x4B80E0 sub_4B80E0 (62 bytes)
void sub_4B80E0()
{
}

// STUB: 0x4B8120 sub_4B8120 (530 bytes)
void sub_4B8120()
{
}

// STUB: 0x4B8340 sub_4B8340 (285 bytes)
void sub_4B8340()
{
}

// STUB: 0x4B8460 sub_4B8460 (96 bytes)
void sub_4B8460()
{
}

// STUB: 0x4B84C0 sub_4B84C0 (167 bytes)
void sub_4B84C0()
{
}

// STUB: 0x4B8570 sub_4B8570 (366 bytes)
void sub_4B8570()
{
}

// STUB: 0x4B86E0 sub_4B86E0 (114 bytes)
void sub_4B86E0()
{
}

// STUB: 0x4B8760 sub_4B8760 (36 bytes)
void sub_4B8760()
{
}

// FUNCTION: 0x4B8790 StrKeyed::dtorKey
void StrKeyed::dtorKey()
{
    key.~AgString();
}

// STUB: 0x4B87A0 sub_4B87A0 (66 bytes)
void sub_4B87A0()
{
}

// STUB: 0x4B87F0 sub_4B87F0 (24 bytes)
void sub_4B87F0()
{
}

// STUB: 0x4B8810 sub_4B8810 (98 bytes)
void sub_4B8810()
{
}

// STUB: 0x4B8880 sub_4B8880 (372 bytes)
void sub_4B8880()
{
}

// STUB: 0x4B8A00 sub_4B8A00 (520 bytes)
void sub_4B8A00()
{
}

// FUNCTION: 0x4B8C10 newHeadNode
MapNode* __cdecl newHeadNode()
{
    MapNode* p = (MapNode*)operator new(0x28);
    if (!p)
        sub_5E2317();
    p->left = p;
    new ((void*)&p->parent) MapNode*(p);
    new ((void*)&p->right) MapNode*(p);
    p->color = 1;
    p->isNil = 1;
    return p;
}

// STUB: 0x4B8C40 sub_4B8C40 (54 bytes)
void sub_4B8C40()
{
}

// FUNCTION: 0x4B8C80 NodeMap::eraseTree
void NodeMap::eraseTree(MapNode* root)
{
    for (MapNode* p = root; !p->isNil; root = p) {
        eraseTree(p->right);
        p = p->left;
        root->key.~AgString();
        operator delete(root);
    }
}

// STUB: 0x4B8CC0 sub_4B8CC0 (243 bytes)
void sub_4B8CC0()
{
}

// STUB: 0x4B8DC0 sub_4B8DC0 (158 bytes)
void sub_4B8DC0()
{
}

// STUB: 0x4B8E60 sub_4B8E60 (107 bytes)
void sub_4B8E60()
{
}

// STUB: 0x4B8ED0 sub_4B8ED0 (185 bytes)
void sub_4B8ED0()
{
}

// STUB: 0x4B8F90 sub_4B8F90 (128 bytes)
void sub_4B8F90()
{
}

// FUNCTION: 0x4B9010 clearRegistry
void clearRegistry()
{
    void* p = g_73F4D0;
    if (p) {
        sub_4B8880(p);
        operator delete(p);
    }
    g_73F4D0 = 0;
}

// STUB: 0x4B9040 sub_4B9040 (188 bytes)
void sub_4B9040()
{
}

// STUB: 0x4B9100 sub_4B9100 (614 bytes)
void sub_4B9100()
{
}

// STUB: 0x4B9370 sub_4B9370 (76 bytes)
void sub_4B9370()
{
}

// STUB: 0x4B93C0 sub_4B93C0 (82 bytes)
void sub_4B93C0()
{
}

// STUB: 0x4B9420 sub_4B9420 (9 bytes)
void sub_4B9420()
{
}
