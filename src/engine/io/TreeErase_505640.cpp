// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct TNode {
    TNode* left;
    TNode* parent;
    TNode* right;
    char color;
    char isnil;
};
static TNode* minNode(TNode* n)
{
    while (!n->left->isnil)
        n = n->left;
    return n;
}
struct TIter {
    TNode* p;
    TIter postinc()
    {
        TIter t = *this;
        inc();
        return t;
    }
    void inc()
    {
        if (!p->isnil) {
            TNode* r = p->right;
            if (!r->isnil) {
                p = minNode(r);
            } else {
                TNode* pn;
                while (!(pn = p->parent)->isnil && p == pn->right)
                    p = pn;
                p = pn;
            }
        }
    }
};
struct Tree505640 {
    TNode* head;
    unsigned int size;
    void eraseSub(TNode* root);
    void erase1(TIter* out, TNode* where);
    TIter* erase(TIter* out, TIter first, TIter last);
};

// FUNCTION: 0x505640 ?erase@Tree505640@@QAEPAUTIter@@PAU2@U2@1@Z
TIter* Tree505640::erase(TIter* out, TIter first, TIter last)
{
    if (first.p == head->left && last.p == head) {
        eraseSub(head->parent);
        head->parent = head;
        head->left = head;
        head->right = head;
        size = 0;
        out->p = head->left;
        return out;
    }
    while (first.p != last.p) {
        TIter tmp;
        TIter where = first.postinc();
        erase1(&tmp, where.p);
    }
    out->p = first.p;
    return out;
}
