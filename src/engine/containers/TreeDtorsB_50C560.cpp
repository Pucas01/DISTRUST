// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};
struct Inner50C560 {
    TNode* head;
    int size;
    ~Inner50C560() { operator delete(head); }
};
struct Base50C560 {
    Inner50C560 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Base50C560() {
        TIter tmp;
        erase(&tmp, m.head->left, m.head);
    }
};
struct Tree50C560 : Base50C560 {
    ~Tree50C560();
};

// FUNCTION: 0x50C560 ??1Tree50C560@@QAE@XZ
Tree50C560::~Tree50C560()
{
}
