// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
struct Hldr4E8900;
struct Lk4E8900 {
    Lk4E8900* next;
    Hldr4E8900* owner;
};
struct Hldr4E8900 {
    Lk4E8900* first;
    Lk4E8900 lk;
};
struct Obj4E8900 {
    char p[8];
    Hldr4E8900* tgt;
};
void __cdecl sub_4E89C0(Hldr4E8900* h, Lk4E8900* l);

// FUNCTION: 0x4E8900 initHolder4E8900
void __cdecl initHolder4E8900(Hldr4E8900* h)
{
    if (h) {
        h->first = 0;
        Lk4E8900* l = &h->lk;
        if (l) {
            l->owner = 0;
            l->next = 0;
        }
    }
}

// FUNCTION: 0x4E8930 attach4E8930
void __cdecl attach4E8930(Hldr4E8900* h, Obj4E8900* o)
{
    if (h && o) {
        Hldr4E8900* t = o->tgt;
        Lk4E8900* l = &h->lk;
        if (l) {
            if (l->owner != t) {
                sub_4E89C0(l->owner, l);
                l->owner = t;
                if (t) {
                    l->next = t->first;
                    t->first = l;
                }
            }
        }
    }
}

// FUNCTION: 0x4E8970 detachAll4E8970
void __cdecl detachAll4E8970(Hldr4E8900* h)
{
    if (h) {
        Lk4E8900* l = &h->lk;
        if (l) {
            if (l->owner) {
                sub_4E89C0(l->owner, l);
                l->owner = 0;
            }
        }
        for (Lk4E8900* p = h->first; p; p = p->next) {
            p->owner = 0;
        }
        h->first = 0;
    }
}

// FUNCTION: 0x4E89C0 sub_4E89C0
void __cdecl sub_4E89C0(Hldr4E8900* h, Lk4E8900* l)
{
    if (h && l) {
        Lk4E8900* prev = 0;
        Lk4E8900* p = h->first;
        while (p) {
            if (p == l) {
                if (prev) {
                    prev->next = p->next;
                } else {
                    h->first = p->next;
                }
                l->owner = 0;
                return;
            }
            prev = p;
            p = p->next;
        }
    }
}
