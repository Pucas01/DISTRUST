struct Mat {
    char on;
    char p1[3];
    short id;
    char p2[6];
    char c0, c1, c2, c3;
    int i10, i14, i18, i1c;
    char p3[8];
    float f28, f2c, f30, f34, f38, f3c;
    char p4[8];
    float f48;
    char p5[8];
    int blk[9];
    char p6[0xa4 - 0x78];
};

struct Blk {
    int v[9];
};

struct Mesh {
    char p0[0x24];
    short n;
    char p1[0xc8 - 0x26];
    Mat* mats;
};

struct Part {
    char on;
    char p0[0x0f];
    short id;
    char p1[6];
    short n;
    char p2[0x2c - 0x1a];
    char c0, c1, c2, c3;
    int i30, i34, i38, i3c;
    float f40, f44, f48, f4c, f50;
    int blk[9];
    char nm[0x40];
    char p3[0xcc - 0xb8];
    Mat* mats;
    char p4[0xf0 - 0xd0];
};

struct Name {
    unsigned char* s;
    char p[0x20];
};

struct Model {
    char p0[0x2a];
    short n;
    unsigned short nNames;
    char p1[0xcc - 0x2e];
    Part* parts;
    Name* names;
};

// FUNCTION: 0x4CA660 setMeshScale
void __cdecl setMeshScale(Mesh* m, short id, float a, float b)
{
    if (m->mats) {
        for (int i = 0; i < m->n; i++) {
            Mat* e = &m->mats[i];
            if (e->id == id) {
                e->f28 = a;
                e->f2c = b;
            }
        }
    }
}

// FUNCTION: 0x4CA6C0 resetMeshScale
void __cdecl resetMeshScale(Mesh* m, short id)
{
    if (m->mats) {
        for (int i = 0; i < m->n; i++) {
            Mat* e = &m->mats[i];
            if (e->id == id) {
                e->f28 = e->f30;
                e->f2c = e->f34;
            }
        }
    }
}

// FUNCTION: 0x4CA710 setMeshVec
void __cdecl setMeshVec(Mesh* m, short id, float a, float b, float c)
{
    if (m->mats) {
        for (int i = 0; i < m->n; i++) {
            Mat* e = &m->mats[i];
            if (e->id == id) {
                e->f38 = a;
                e->f3c = b;
                e->f48 = c;
            }
        }
    }
}

// FUNCTION: 0x4CDD00 setPartColor
void __cdecl setPartColor(Model* m, short id, char r, char g, char b, char a)
{
    if (m->parts) {
        Part* p = m->parts;
        for (int i = 0; i < m->n; i++, p++) {
            if (p->id == id) {
                p->c0 = r;
                p->c1 = g;
                p->c2 = b;
                p->c3 = a;
                return;
            }
        }
    }
}

// FUNCTION: 0x4CDD50 setPartInts
void __cdecl setPartInts(Model* m, short id, int a, int b, int c, int d)
{
    if (m->parts) {
        Part* p = m->parts;
        for (int i = 0; i < m->n; i++, p++) {
            if (p->id == id) {
                p->i30 = a;
                p->i34 = b;
                p->i38 = c;
                p->i3c = d;
                return;
            }
        }
    }
}

// FUNCTION: 0x4CDE30 setPartUv
void __cdecl setPartUv(Model* m, short id, float a, float b)
{
    if (m->parts) {
        Part* p = m->parts;
        for (int i = 0; i < m->n; i++, p++) {
            if (p->id == id) {
                p->f40 = a;
                p->f44 = b;
                return;
            }
        }
    }
}

// FUNCTION: 0x4CDE80 clearPartUv
void __cdecl clearPartUv(Model* m, short id)
{
    if (m->parts) {
        Part* p = m->parts;
        for (int i = 0; i < m->n; i++, p++) {
            if (p->id == id) {
                p->f40 = 0;
                p->f44 = 0;
                return;
            }
        }
    }
}

// FUNCTION: 0x4CDED0 setPartVec
void __cdecl setPartVec(Model* m, short id, float a, float b, float c)
{
    if (m->parts) {
        Part* p = m->parts;
        for (int i = 0; i < m->n; i++, p++) {
            if (p->id == id) {
                p->f48 = a;
                p->f4c = b;
                p->f50 = c;
                return;
            }
        }
    }
}

// FUNCTION: 0x4CD8D0 clearPart
void __cdecl clearPart(Model* m, short id)
{
    if (m->parts) {
        Part* p = m->parts;
        for (int i = 0; i < m->n; i++, p++) {
            if (p->id == id) {
                p->on = 0;
                *(unsigned short*)&p->id = 0xFFFF;
                return;
            }
        }
    }
}

// FUNCTION: 0x4CCC40 clearMat
void __cdecl clearMat(Model* m, int pi, short id)
{
    if (m->parts && pi >= 0 && pi < m->n) {
        Part* p = &m->parts[pi];
        if (p->mats) {
            for (int i = 0; i < p->n; i++) {
                Mat* e = &p->mats[i];
                if (e->id == id) {
                    e->on = 0;
                    *(unsigned short*)&e->id = 0xFFFF;
                }
            }
        }
    }
}

// FUNCTION: 0x4CCDD0 setMatColor
void __cdecl setMatColor(Model* m, int pi, short id, int r, int g, int b, int a)
{
    if (m->parts && pi >= 0 && pi < m->n) {
        Part* p = &m->parts[pi];
        if (p->mats) {
            for (int i = 0; i < p->n; i++) {
                Mat* e = &p->mats[i];
                if (e->id == id) {
                    e->c0 = r;
                    e->c1 = g;
                    e->c2 = b;
                    e->c3 = a;
                }
            }
        }
    }
}

// FUNCTION: 0x4CCE50 setMatInts
void __cdecl setMatInts(Model* m, int pi, short id, int a, int b, int c, int d)
{
    if (m->parts && pi >= 0 && pi < m->n) {
        Part* p = &m->parts[pi];
        if (p->mats) {
            for (int i = 0; i < p->n; i++) {
                Mat* e = &p->mats[i];
                if (e->id == id) {
                    e->i10 = a;
                    e->i14 = b;
                    e->i18 = c;
                    e->i1c = d;
                }
            }
        }
    }
}

// FUNCTION: 0x4CCF80 setMatScale
void __cdecl setMatScale(Model* m, int pi, short id, float a, float b)
{
    if (m->parts && pi >= 0 && pi < m->n) {
        Part* p = &m->parts[pi];
        if (p->mats) {
            for (int i = 0; i < p->n; i++) {
                Mat* e = &p->mats[i];
                if (e->id == id) {
                    e->f28 = a;
                    e->f2c = b;
                }
            }
        }
    }
}

// FUNCTION: 0x4CD000 resetMatScale
void __cdecl resetMatScale(Model* m, int pi, short id)
{
    if (m->parts && pi >= 0 && pi < m->n) {
        Part* p = &m->parts[pi];
        if (p->mats) {
            for (int i = 0; i < p->n; i++) {
                Mat* e = &p->mats[i];
                if (e->id == id) {
                    e->f28 = e->f30;
                    e->f2c = e->f34;
                }
            }
        }
    }
}

// FUNCTION: 0x4CD080 setMatVec
void __cdecl setMatVec(Model* m, int pi, short id, float a, float b, float c)
{
    if (m->parts && pi >= 0 && pi < m->n) {
        Part* p = &m->parts[pi];
        if (p->mats) {
            for (int i = 0; i < p->n; i++) {
                Mat* e = &p->mats[i];
                if (e->id == id) {
                    e->f38 = a;
                    e->f3c = b;
                    e->f48 = c;
                }
            }
        }
    }
}


// FUNCTION: 0x4CD630 findName
int __cdecl findName(Model* m, const char* name)
{
    if (!name) {
        return -1;
    }
    Name* e = m->names;
    if (!e) {
        return -1;
    }
    unsigned short cnt = m->nNames;
    if (cnt == 0) {
        return -1;
    }
    int seen = 0;
    for (int idx = 0; idx < 0x100; idx++, e++) {
        if (e->s) {
            for (int j = 0; j < 0x40; j++) {
                unsigned char c = e->s[j];
                if (c != name[j]) {
                    break;
                }
                if (c == 0) {
                    if (j) {
                        return idx;
                    }
                    break;
                }
            }
            if (++seen >= (short)cnt) {
                break;
            }
        }
    }
    return -1;
}
