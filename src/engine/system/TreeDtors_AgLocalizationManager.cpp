// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};

struct Inner4FE880 {
    TNode* head;
    int size;
    ~Inner4FE880() { operator delete(head); }
};
struct Tree4FE880 {
    Inner4FE880 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Tree4FE880();
};

// FUNCTION: 0x4FE880 ??1Tree4FE880@@QAE@XZ
Tree4FE880::~Tree4FE880()
{
    TIter tmp;
    erase(&tmp, m.head->left, m.head);
}

