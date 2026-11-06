// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
};
struct TIter {
    TNode* p;
};
struct TEmpty {
    ~TEmpty() { }
    int x;
};
struct InnerB {
    TNode* head;
    int size;
    ~InnerB() { operator delete(head); }
};
struct TreeB {
    InnerB m;
    TEmpty n;
    void erase(TIter* out, TNode* first, TNode* last);
    ~TreeB();
};

// FUNCTION: 0x512AB0 ??1TreeB@@QAE@XZ
TreeB::~TreeB()
{
    TIter tmp;
    erase(&tmp, m.head->left, m.head);
}
