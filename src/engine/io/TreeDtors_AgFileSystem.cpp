// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};

struct Inner509120 {
    TNode* head;
    int size;
    ~Inner509120() { operator delete(head); }
};
struct Tree509120 {
    Inner509120 m;
    void erase(TIter* out, TNode* first, TNode* last);
    ~Tree509120();
};

// FUNCTION: 0x509120 ??1Tree509120@@QAE@XZ
Tree509120::~Tree509120()
{
    TIter tmp;
    erase(&tmp, m.head->left, m.head);
}

