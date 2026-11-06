struct XY {
    int x;
    int y;
};
struct Unit {
    unsigned char n;
    char p[3];
    XY pos[32];
    XY dim[32];
    char rest[0x2c4 - 0x204];
};
extern char* g_73E2A4;
int __cdecl sub_4D0640(int v);
int sub_4C2100();
void __cdecl sub_4D0360(int x, int y, int w, int h);

// FUNCTION: 0x488290 releaseUnit
void __cdecl releaseUnit(int idx)
{
    Unit* u = (Unit*)(g_73E2A4 + 0x14C + idx * 0x2C4);
    if (u->n == 0) {
        return;
    }
    for (int i = 0; i < u->n; i++) {
        int x = u->pos[i].x / 32;
        int y = u->pos[i].y / 32;
        int w = sub_4D0640(u->dim[i].x + 8);
        int h = sub_4D0640(u->dim[i].y + 8);
        if (!sub_4C2100()) {
            w = (w + 3) / 4 * 4;
        }
        sub_4D0360(x, y, w, h);
    }
    u->n = 0;
}

// FUNCTION: 0x487F80 releaseAllUnits
void releaseAllUnits()
{
    for (int off = 0; off < 0x1620; off += 0x2C4) {
        Unit* u = (Unit*)(g_73E2A4 + 0x14C + off);
        if (u->n != 0) {
            for (int i = 0; i < u->n; i++) {
                int x = u->pos[i].x / 32;
                int y = u->pos[i].y / 32;
                int w = sub_4D0640(u->dim[i].x + 8);
                int h = sub_4D0640(u->dim[i].y + 8);
                if (!sub_4C2100()) {
                    w = (w + 3) / 4 * 4;
                }
                sub_4D0360(x, y, w, h);
            }
            u->n = 0;
        }
    }
}
