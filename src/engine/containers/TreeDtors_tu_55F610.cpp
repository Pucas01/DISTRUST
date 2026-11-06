// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};

struct Inner5601D0 {
    TNode* head;
    int size;
    ~Inner5601D0() { operator delete(head); }
};
struct Tree5601D0 {
    Inner5601D0 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Tree5601D0();
};

// FUNCTION: 0x5601D0 ??1Tree5601D0@@QAE@XZ
Tree5601D0::~Tree5601D0()
{
    TIter tmp;
    erase(&tmp, m.head->left, m.head);
}

