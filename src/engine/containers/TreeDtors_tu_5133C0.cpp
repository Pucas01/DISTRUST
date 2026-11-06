// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};

struct Inner5136B0 {
    TNode* head;
    int size;
    ~Inner5136B0() { operator delete(head); }
};
struct Tree5136B0 {
    Inner5136B0 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Tree5136B0();
};

// FUNCTION: 0x5136B0 ??1Tree5136B0@@QAE@XZ
Tree5136B0::~Tree5136B0()
{
    TIter tmp;
    erase(&tmp, m.head->left, m.head);
}

