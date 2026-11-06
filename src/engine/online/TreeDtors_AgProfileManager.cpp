// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};

struct Inner52ABB0 {
    TNode* head;
    int size;
    ~Inner52ABB0() { operator delete(head); }
};
struct Tree52ABB0 {
    Inner52ABB0 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Tree52ABB0();
};

// FUNCTION: 0x52ABB0 ??1Tree52ABB0@@QAE@XZ
Tree52ABB0::~Tree52ABB0()
{
    TIter tmp;
    erase(&tmp, m.head->left, m.head);
}

