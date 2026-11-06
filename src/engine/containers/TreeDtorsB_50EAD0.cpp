// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};
struct Inner50EAD0 {
    TNode* head;
    int size;
    ~Inner50EAD0() { operator delete(head); }
};
struct Base50EAD0 {
    Inner50EAD0 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Base50EAD0() {
        TIter tmp;
        erase(&tmp, m.head->left, m.head);
    }
};
struct Tree50EAD0 : Base50EAD0 {
    ~Tree50EAD0();
};

// FUNCTION: 0x50EAD0 ??1Tree50EAD0@@QAE@XZ
Tree50EAD0::~Tree50EAD0()
{
}
