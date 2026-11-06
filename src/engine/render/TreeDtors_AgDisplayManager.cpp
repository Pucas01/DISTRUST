// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};

struct Inner512A40 {
    TNode* head;
    int size;
    ~Inner512A40() { operator delete(head); }
};
struct Tree512A40 {
    Inner512A40 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Tree512A40();
};

// FUNCTION: 0x512A40 ??1Tree512A40@@QAE@XZ
Tree512A40::~Tree512A40()
{
    TIter tmp;
    erase(&tmp, m.head->left, m.head);
}

