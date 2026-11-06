// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};

struct Inner551AF0 {
    TNode* head;
    int size;
    ~Inner551AF0() { operator delete(head); }
};
struct Tree551AF0 {
    Inner551AF0 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Tree551AF0();
};

// FUNCTION: 0x551AF0 ??1Tree551AF0@@QAE@XZ
Tree551AF0::~Tree551AF0()
{
    TIter tmp;
    erase(&tmp, m.head->left, m.head);
}

