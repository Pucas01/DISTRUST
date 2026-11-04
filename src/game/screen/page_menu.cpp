struct ObjCheck {
    int check();
};

extern int g_73C854, g_73C858, g_73C85C, g_73C8B4, g_73C8C0, g_73C8C4, g_73C8BC, g_73C8B8, g_73C8AC, g_73C8B0;
extern int g_73C870, g_73C880, g_73C890, g_73CB48, g_73CB40;
extern int g_73C8CC[16], g_73C90C[5], g_73C920[5];
extern unsigned char g_7015AF[], g_626368[], g_73C95F, g_73C9F6;
extern const char* g_695C98[];
extern const char* g_695CA4;
extern short* g_73CB44;

int __cdecl sub_4C2100();
int __cdecl getEntryValue(unsigned int index, int slot);
void __cdecl setEntryParam(unsigned int index, short value);
void __cdecl setEntryFlag(unsigned int index, int value);
void __cdecl sub_4C8230(int a, int b, int c);
void __cdecl resetEntry(unsigned int index, const char* name);
void __cdecl setEntryOrigin(unsigned int index, float x, float y);
char __cdecl isEntryDone(unsigned int index);
int __cdecl testButtonA(int key);
int __cdecl testButtonB(int key);
int __cdecl testButtonC(int key);
int __cdecl playSound(int, int);
bool __cdecl touchTexture(int id, int generation);
int __cdecl drawSprite(int id, float x, float y, float width, float height, int unk0, int unk1, float scaleX,
                       float scaleY, float rotation, int unk2, int red, int green, int blue, int alpha, int a, int b,
                       int c, int d);
void __cdecl enableSprite(unsigned int index);
void __cdecl sub_46E690(int a, int b, int c);
char __cdecl sub_46E990(void* rec, int id);
void __cdecl releaseObjectIds(int* ids, int count);
void __cdecl releaseEntryIds(int* ids, int count);
void __cdecl clearOwnedPair(void* pair);
void __cdecl releaseAllHandlesC();
int __cdecl findHandleC(int id);
void __cdecl freeHandleC(int id);
int __cdecl allocHandleC(short id);
void __cdecl sub_46D230(int a, int b);
void __cdecl sub_46D370(int a);
void sub_4C3670();
void sub_4D7030();
void sub_4C3510();
int __cdecl sub_4F4780();
int __cdecl sub_4C6090(int id);
void __cdecl startFade(int mode, int type, int duration);
void __cdecl sub_4F3C90(int a, int b, int c, int d, int e, int f, int g, int h, int i);
void sub_45FC90();
void sub_458740();
void __cdecl sub_4586A0(int a, int b);
void __cdecl sub_461FA0(int a);
void __cdecl sub_461B10(int* a, int b);
int __cdecl sub_45EA00(int a, int b);
int __cdecl sub_461220(int a, int b);
void sub_461F40();

extern unsigned char g_applyFlag;
extern unsigned char g_slotBytes[];
extern unsigned char g_savedFlags;
extern unsigned short g_savedWordA;
extern unsigned short g_savedWordB;
extern unsigned short g_savedWordC;

char __cdecl applyValue(int unused, int value);
void sub_43EB80();
void __cdecl sub_462A10(int a, int b, int c, int d, int e);

// STUB: 0x4586A0 sub_4586A0 (153 bytes)
void __cdecl sub_4586A0(int a, int b)
{
}

// STUB: 0x458740 sub_458740 (171 bytes)
void sub_458740()
{
}

// STUB: 0x4587F0 sub_4587F0 (281 bytes)
void sub_4587F0()
{
}

// STUB: 0x458910 sub_458910 (800 bytes)
void sub_458910()
{
}

// STUB: 0x458C30 sub_458C30 (108 bytes)
void sub_458C30()
{
}

// FUNCTION: 0x458CD0 sub_458CD0
int sub_458CD0()
{
    int i;
    int xs[5] = { 0x7E, 0x10E, 0x19E, 0x22E, 0x2BE };
    int hB;
    int row;
    float ox;
    float oy;
    int hs[6];
    int baseY;
    int h2;
    int restore;
    int fxAlpha;
    int cur;
    unsigned char al;
    int prevCur;
    int h0;
    int state;
    int spriteId;
    int tx[86];
    int h3;
    unsigned char noRedraw;
    float fy;
    int hE;
    int step;
    unsigned char orderA[5] = { 0x0D, 0x0E, 0x0F, 0x10, 0x11 };
    int trans;
    int ix;
    int h4;
    int s0;
    int hC;
    int fx;
    unsigned char started;
    unsigned char orderB[5] = { 3, 5, 7, 9, 0x0B };
    unsigned char done;
    int ux[86];
    int hD;
    int anim;
    int j;
    int kind;
    int k;
    int uy[86];
    int h1;
    int ty[86];
    unsigned char toggle;
    int rec[10];

    baseY = sub_4C2100() ? 0x27A : 0x27E;
    cur = 0;
    step = 0;
    state = 0;
    anim = 0;
    fxAlpha = 0;
    fx = 0;
    kind = 0;
    toggle = 0;
    started = 0;
    ox = 0.0f;
    oy = 0.0f;
    trans = -1;
    h0 = g_73C854;
    h1 = g_73C8B4;
    h2 = g_73C8C0;
    h3 = g_73C8C4;
    h4 = g_73C858;
    hs[0] = h0;
    hs[1] = h1;
    hs[2] = h2;
    hs[3] = h3;
    hs[4] = h4;
    hs[5] = g_73C85C;
    spriteId = getEntryValue(h3, 0);
    for (i = 0; i < 5; i++) {
        tx[i] = ux[i] = getEntryValue(h2, i);
        ty[i] = uy[i] = getEntryValue(h2, i + 5);
    }
    tx[85] = ux[85] = getEntryValue(h2, 10);
    ty[85] = uy[85] = getEntryValue(h2, 11);
    for (i = 5; i < 85; i++) {
        ux[i] = tx[i] = tx[85];
        uy[i] = ty[i] = ty[85];
    }
    for (k = 0; k < 16; k++) {
        if (sub_46E990(&rec, g_73C8CC[k])) {
            ux[5 + k * 5 + 0] = rec[0];
            uy[5 + k * 5 + 0] = rec[5 + 0];
            if (g_7015AF[5 + k * 5 + 0] > 0) {
                tx[5 + k * 5 + 0] = rec[0];
                ty[5 + k * 5 + 0] = rec[5 + 0];
            }
            ux[5 + k * 5 + 1] = rec[1];
            uy[5 + k * 5 + 1] = rec[5 + 1];
            if (g_7015AF[5 + k * 5 + 1] > 0) {
                tx[5 + k * 5 + 1] = rec[1];
                ty[5 + k * 5 + 1] = rec[5 + 1];
            }
            ux[5 + k * 5 + 2] = rec[2];
            uy[5 + k * 5 + 2] = rec[5 + 2];
            if (g_7015AF[5 + k * 5 + 2] > 0) {
                tx[5 + k * 5 + 2] = rec[2];
                ty[5 + k * 5 + 2] = rec[5 + 2];
            }
            ux[5 + k * 5 + 3] = rec[3];
            uy[5 + k * 5 + 3] = rec[5 + 3];
            if (g_7015AF[5 + k * 5 + 3] > 0) {
                tx[5 + k * 5 + 3] = rec[3];
                ty[5 + k * 5 + 3] = rec[5 + 3];
            }
            ux[5 + k * 5 + 4] = rec[4];
            uy[5 + k * 5 + 4] = rec[5 + 4];
            if (g_7015AF[5 + k * 5 + 4] > 0) {
                tx[5 + k * 5 + 4] = rec[4];
                ty[5 + k * 5 + 4] = rec[5 + 4];
            }
            g_73C8CC[k] = -1;
        }
    }
    for (i = 0; i < 85; i += 5) {
        if (g_7015AF[i + 0] == 0) {
            tx[i + 0] = tx[85];
            ty[i + 0] = ty[85];
        }
        if (g_7015AF[i + 1] == 0) {
            tx[i + 1] = tx[85];
            ty[i + 1] = ty[85];
        }
        if (g_7015AF[i + 2] == 0) {
            tx[i + 2] = tx[85];
            ty[i + 2] = ty[85];
        }
        if (g_7015AF[i + 3] == 0) {
            tx[i + 3] = tx[85];
            ty[i + 3] = ty[85];
        }
        if (g_7015AF[i + 4] == 0) {
            tx[i + 4] = tx[85];
            ty[i + 4] = ty[85];
        }
    }
    hB = g_73C8BC;
    hC = g_73C8B8;
    hD = g_73C8AC;
    hE = g_73C8B0;
    restore = getEntryValue(hB, 0);
    setEntryParam(hB, 0x960);
    setEntryParam(hC, 0x9C4);
    setEntryParam(hD, 0xA28);
    setEntryParam(hE, 0xA8C);
    sub_46E690(h0, 0, g_73C870);
    sub_46E690(h4, 0, g_73C880);
    sub_46E690(h4, 1, g_73C890);
    for (i = 0; i < 5; i++) {
        sub_4C8230(h2, i, tx[i]);
        sub_4C8230(h2, i + 5, ty[i]);
    }
    sub_45FC90();
    for (i = 0; i < 6; i++) {
        setEntryParam(hs[i], (i + 13) * 100);
        resetEntry(hs[i], i ? "fl_in" : "fl_wait");
        setEntryFlag(hs[i], 1);
    }
    sub_461F40();
    sub_461FA0(h3);
    resetEntry(h2, g_695CA4);
    resetEntry(h3, g_695CA4);
    sub_461FA0(h3);
    releaseAllHandlesC();
    state = 0;

    for (;;) {
        sub_4C3670();
        sub_4D7030();
        prevCur = cur;
        done = 0;
        noRedraw = 0;

        if (state == 0) {
            if (testButtonC(0x14)) {
                if (step % 5 == 0) {
                    if (cur > 0 || (testButtonB(0x14) && cur == 0)) {
                        trans = 1;
                        step = 4;
                        playSound(5, 100);
                        for (i = 0; i < 5; i++) {
                            if (g_73C920[i] != -1) {
                                touchTexture(g_73C920[i], 0);
                                g_73C920[i] = -1;
                            }
                        }
                        sub_4586A0(cur ? cur - 1 : 0x54, 0);
                        goto transL;
                    }
                } else {
                    step--;
                    cur--;
                    playSound(5, 100);
                    goto transSet;
                }
            } else if (testButtonC(0x15)) {
                if (step > 0 && step % 4 == 0) {
                    if (cur < 0x54 || (testButtonB(0x15) && cur == 0x54)) {
                        trans = 2;
                        step = 0;
                        playSound(5, 100);
                        for (i = 0; i < 5; i++) {
                            if (g_73C920[i] != -1) {
                                touchTexture(g_73C920[i], 0);
                                g_73C920[i] = -1;
                            }
                        }
                        if (cur == 0x54)
                            sub_4586A0(0, 1);
                        else
                            sub_4586A0(cur + 1, 1);
                        goto transR;
                    }
                } else {
                    step++;
                    cur++;
                    playSound(5, 100);
                    goto transSet;
                }
            } else if (testButtonB(0x16)) {
                kind = sub_45EA00(g_7015AF[cur], g_626368[cur]);
                if (kind == 2 || kind == 3)
                    state = 4;
                else if (kind == 0 || kind == 1)
                    state = 8;
            }
            if (trans == 1) {
            transL:
                resetEntry(h1, "fl_l");
                anim = 0;
                state = 2;
                al = 0;
                goto settle;
            } else if (trans == 2) {
            transR:
                resetEntry(h1, "fl_r");
                anim = 0;
                state = 1;
                al = 0;
                goto settle;
            } else if (trans == 3) {
            transSet:
                s0 = orderB[step];
                resetEntry(h2, g_695C98[s0]);
                resetEntry(h3, g_695C98[s0]);
                trans = 0;
            }
        } else if (state == 1) {
            if (trans == 1) {
                if (anim == 10) {
                    setEntryFlag(h2, 0);
                } else if (anim == 1) {
                    state = 3;
                }
                anim--;
            } else {
                if (anim == 0) {
                    setEntryFlag(h2, 0);
                } else if (anim == 9) {
                    cur = cur == 0x54 ? 0 : cur + 1;
                    state = 2;
                }
                anim++;
            }
            ix = (int)((float)anim * 0.1f * 130.0f);
            fy = (float)(0x82 - ix);
            for (k = 0; k < 5; k++) {
                fx = drawSprite(ty[cur / 5 * 5 + k], (float)xs[k], 0.0f, fy, 544.0f, ix, 0, 100.0f, 100.0f, 0.0f, 0,
                                0xFF, 0xFF, 0xFF, 0xFF, 0x60E, 2, 1, 0xFF);
                enableSprite(fx);
            }
        } else if (state == 2) {
            if (trans == 1) {
                if (anim == 0) {
                    setEntryFlag(h2, 0);
                } else if (anim == 9) {
                    if (cur == 0)
                        cur = 0x54;
                    else
                        cur--;
                    state = 1;
                }
                anim++;
            } else {
                if (anim == 10) {
                    setEntryFlag(h2, 0);
                } else if (anim == 1) {
                    state = 3;
                }
                anim--;
            }
            ix = (int)((float)anim * 0.1f * 130.0f);
            fy = (float)(0x82 - ix);
            for (k = 0; k < 5; k++) {
                fx = drawSprite(ty[cur / 5 * 5 + k], (float)(xs[k] + ix), 0.0f, fy, 544.0f, 0, 0, 100.0f, 100.0f, 0.0f,
                                0, 0xFF, 0xFF, 0xFF, 0xFF, 0x60E, 2, 1, 0xFF);
                enableSprite(fx);
            }
        } else if (state == 3) {
            for (k = 0; k < 5; k++) {
                sub_4C8230(h2, k, tx[cur / 5 * 5 + k]);
                sub_4C8230(h2, k + 5, ty[cur / 5 * 5 + k]);
            }
            setEntryFlag(h2, 1);
            resetEntry(h2, g_695C98[orderB[step]]);
            resetEntry(h3, g_695C98[orderB[step]]);
            trans = 0;
            state = 0;
            al = 0;
            goto settle;
        } else if (state == 4) {
            resetEntry(h2, g_695C98[orderA[step]]);
            resetEntry(h3, g_695C98[orderA[step]]);
            state = 5;
        } else if (state == 5) {
            if (isEntryDone(h2) && isEntryDone(h3)) {
                row = cur % 5;
                if (g_73C920[row] != -1) {
                    if (findHandleC(100) != -2)
                        freeHandleC(100);
                    sub_4C8230(hB, 0, g_73C920[row]);
                    resetEntry(hB, "fl_in");
                    resetEntry(hC, "fl_in");
                    g_7015AF[cur] = 3;
                    anim = 0;
                    state = 6;
                    goto drawFx;
                }
            }
        } else if (state == 6) {
            int b = testButtonB(0x16);
            if (toggle) {
                if (b) {
                    resetEntry(hB, "fl_wait_1");
                    resetEntry(hC, "fl_down");
                    resetEntry(hD, "fl_out");
                    ox = 0.0f;
                    oy = 0.0f;
                    toggle = 0;
                    playSound(0xD, 100);
                } else {
                    int mx = (int)ox;
                    int my = (int)oy;
                    if (testButtonA(0x13)) {
                        oy -= 6.0f;
                        if (oy < -280.0f)
                            oy = -280.0f;
                        resetEntry(hD, "fl_wait_3");
                    }
                    if (testButtonA(0x15)) {
                        ox -= 6.0f;
                        if (ox < -64.0f)
                            ox = -64.0f;
                        resetEntry(hD, "fl_wait_4");
                    }
                    if (testButtonA(0x12)) {
                        oy += 6.0f;
                        if (oy > 280.0f)
                            oy = 280.0f;
                        resetEntry(hD, "fl_wait_1");
                    }
                    if (testButtonA(0x14)) {
                        ox += 6.0f;
                        if (ox > 64.0f)
                            ox = 64.0f;
                        resetEntry(hD, "fl_wait_2");
                    }
                    if ((float)mx == ox && (float)my == oy)
                        resetEntry(hD, "fl_in");
                }
            } else if (b) {
                resetEntry(hB, "fl_wait_2");
                resetEntry(hC, "fl_up");
                resetEntry(hD, "fl_in");
                ox = 0.0f;
                oy = 0.0f;
                toggle = 1;
                playSound(0xD, 100);
            }
            if (testButtonB(0x17)) {
                resetEntry(hB, "fl_stop");
                resetEntry(hC, "fl_stop");
                resetEntry(hD, "fl_stop");
                ox = 0.0f;
                oy = 0.0f;
                toggle = 0;
                state = 7;
                playSound(9, 100);
            }
            setEntryOrigin(hB, ox, oy);
            anim += anim < 10;
            fxAlpha = (int)((float)anim * 0.0005f);
            enableSprite(fx);
        } else if (state == 7) {
            anim -= anim > 0;
            fxAlpha = (int)((float)anim * 0.0005f);
            if (anim > 0)
                goto drawFx;
            state = 0;
            al = 1;
            goto settleDone;
        } else if (state == 8) {
            kind = kind;
            if (sub_461220(kind, 0x3A98) == 8) {
                if (g_73C95F && !g_73C9F6 && kind == 0) {
                    sub_46D230(2, -(int)g_626368[cur]);
                    g_7015AF[cur] = 2;
                    releaseAllHandlesC();
                    sub_45FC90();
                    done = 1;
                    playSound(0x65, 100);
                    sub_46D370(7);
                }
                state = 0;
                al = 0;
                goto settleDone;
            }
        }

    drawFx:
        if (state == 6 || state == 7) {
            fx = drawSprite(spriteId, 0.0f, 0.0f, 14.0f, 544.0f, 0, 0, 15000.0f, 100.0f, 0.0f, 0, 0xFF, 0xFF, 0xFF,
                            fxAlpha, 0x8FC, 2, 1, 0xFF);
        }
        if (cur != prevCur)
            goto realloc;
        al = noRedraw;
    settle:
    settleDone:
        if (started && !done && !al)
            goto rows;
    realloc:
        if (findHandleC(100) != -2)
            freeHandleC(100);
        {
            int hh = allocHandleC(100);
            if (hh != -2) {
                unsigned char fl = g_7015AF[cur];
                int idx = fl == 0 ? 0x55 : cur;
                sub_4F3C90(0, hh, 0x1D4, baseY, 0, g_73CB44[idx] + g_73CB48, 0, (fl == 0 || fl == 1) ? 0x18 : 0xE, 1);
            }
        }
        started = 1;
    rows:
        for (k = 0; k < 16; k++) {
            if (sub_46E990(&rec, g_73C8CC[k])) {
                int b0 = 5 + k * 5;
                bool inRow;
                ux[b0 + 0] = rec[0];
                uy[b0 + 0] = rec[5 + 0];
                if (g_7015AF[b0 + 0] > 0) {
                    tx[b0 + 0] = rec[0];
                    ty[b0 + 0] = rec[5 + 0];
                }
                inRow = b0 == cur;
                ux[b0 + 1] = rec[1];
                uy[b0 + 1] = rec[5 + 1];
                if (g_7015AF[b0 + 1] > 0) {
                    tx[b0 + 1] = rec[1];
                    ty[b0 + 1] = rec[5 + 1];
                }
                if (!inRow)
                    inRow = b0 + 1 == cur;
                ux[b0 + 2] = rec[2];
                uy[b0 + 2] = rec[5 + 2];
                if (g_7015AF[b0 + 2] > 0) {
                    tx[b0 + 2] = rec[2];
                    ty[b0 + 2] = rec[5 + 2];
                }
                if (!inRow)
                    inRow = b0 + 2 == cur;
                ux[b0 + 3] = rec[3];
                uy[b0 + 3] = rec[5 + 3];
                if (g_7015AF[b0 + 3] > 0) {
                    tx[b0 + 3] = rec[3];
                    ty[b0 + 3] = rec[5 + 3];
                }
                if (!inRow)
                    inRow = b0 + 3 == cur;
                ux[b0 + 4] = rec[4];
                uy[b0 + 4] = rec[5 + 4];
                if (g_7015AF[b0 + 4] > 0) {
                    tx[b0 + 4] = rec[4];
                    ty[b0 + 4] = rec[5 + 4];
                }
                if (!inRow)
                    inRow = b0 + 4 == cur;
                if (inRow) {
                    for (j = 0; j < 5; j++) {
                        sub_4C8230(h2, j, tx[cur / 5 * 5 + j]);
                        sub_4C8230(h2, j + 5, ty[cur / 5 * 5 + j]);
                    }
                }
                g_73C8CC[k] = -1;
            }
        }
        sub_458740();
        sub_4C3510();
        {
            ObjCheck* o = (ObjCheck*)sub_4F4780();
            if (!o || o->check())
                return 0x1E;
        }
        if (testButtonB(0x17) && state < 5) {
            playSound(9, 100);
            for (i = 1; i < 6; i++)
                resetEntry(hs[i], "fl_out");
            releaseAllHandlesC();
            sub_461FA0(h4);
            startFade(1, 1, 0x1E);
            sub_461F40();
            for (i = 0; i < 6; i++) {
                resetEntry(hs[i], "fl_stop");
                setEntryFlag(hs[i], 0);
            }
            for (i = 0; i < 5; i++) {
                sub_4C8230(h2, i, ux[i]);
                sub_4C8230(h2, i + 5, uy[i]);
            }
            sub_4C8230(hB, 0, restore);
            releaseEntryIds(&g_73C8AC, 7);
            clearOwnedPair(&g_73CB40);
            releaseObjectIds(&ux[5], 0x50);
            releaseObjectIds(&uy[5], 0x50);
            for (i = 0; i < 5; i++) {
                if (g_73C920[i] != -1) {
                    touchTexture(g_73C920[i], 0);
                    g_73C920[i] = -1;
                }
            }
            for (i = 0; i < 16; i++) {
                if (g_73C8CC[i] != -1) {
                    sub_4C6090(g_73C8CC[i]);
                    g_73C8CC[i] = -1;
                }
            }
            for (i = 0; i < 5; i++) {
                if (g_73C90C[i] != -1) {
                    sub_4C6090(g_73C90C[i]);
                    g_73C90C[i] = -1;
                }
            }
            restore = 1;
            sub_461B10(&restore, 1);
            return 0xC;
        }
    }
}

// STUB: 0x45A2A0 sub_45A2A0 (3564 bytes)
void sub_45A2A0()
{
}

// STUB: 0x45B090 sub_45B090 (1477 bytes)
void sub_45B090()
{
}

// STUB: 0x45B660 sub_45B660 (430 bytes)
void sub_45B660()
{
}

// STUB: 0x45B810 sub_45B810 (2504 bytes)
void sub_45B810()
{
}

// FUNCTION: 0x45C1E0 submitSavedWords
void submitSavedWords()
{
    int a = g_savedWordA;
    int b = g_savedWordB;
    int c = g_savedWordC;
    if (g_savedFlags & 1) {
        sub_43EB80();
        a = 0;
        b = 0;
        c = 0;
    }
    sub_462A10(a, b, c, 0, 1);
}

// STUB: 0x45C220 sub_45C220 (202 bytes)
void sub_45C220()
{
}

// STUB: 0x45C2F0 sub_45C2F0 (1316 bytes)
void sub_45C2F0()
{
}

// STUB: 0x45C820 sub_45C820 (324 bytes)
void sub_45C820()
{
}

// STUB: 0x45C970 sub_45C970 (4363 bytes)
void sub_45C970()
{
}

// STUB: 0x45DA80 sub_45DA80 (3774 bytes)
void sub_45DA80()
{
}

// STUB: 0x45E940 sub_45E940 (181 bytes)
void sub_45E940()
{
}

// STUB: 0x45EA00 sub_45EA00 (428 bytes)
int __cdecl sub_45EA00(int a, int b)
{
    return 0;
}

// STUB: 0x45EBB0 sub_45EBB0 (1111 bytes)
void sub_45EBB0()
{
}

// STUB: 0x45F010 sub_45F010 (3198 bytes)
void sub_45F010()
{
}

// STUB: 0x45FC90 sub_45FC90 (263 bytes)
void sub_45FC90()
{
}

// STUB: 0x45FDA0 sub_45FDA0 (2497 bytes)
void sub_45FDA0()
{
}

// STUB: 0x460770 sub_460770 (1629 bytes)
void sub_460770()
{
}

// STUB: 0x460DD0 sub_460DD0 (109 bytes)
void sub_460DD0()
{
}

// STUB: 0x460E40 sub_460E40 (141 bytes)
void sub_460E40()
{
}

// STUB: 0x460ED0 sub_460ED0 (174 bytes)
void sub_460ED0()
{
}

// STUB: 0x460F80 sub_460F80 (528 bytes)
void sub_460F80()
{
}

// STUB: 0x461190 sub_461190 (142 bytes)
void sub_461190()
{
}

// STUB: 0x461220 sub_461220 (608 bytes)
int __cdecl sub_461220(int a, int b)
{
    return 0;
}

// STUB: 0x461480 sub_461480 (233 bytes)
void sub_461480()
{
}

// STUB: 0x461570 sub_461570 (145 bytes)
void sub_461570()
{
}

// STUB: 0x461610 sub_461610 (942 bytes)
void sub_461610()
{
}

// STUB: 0x4619C0 sub_4619C0 (241 bytes)
void sub_4619C0()
{
}

// FUNCTION: 0x461AC0 refreshApplyFlag
void __cdecl refreshApplyFlag(int value)
{
    if (g_applyFlag)
        g_applyFlag = !applyValue(0, value);
}

// FUNCTION: 0x461AF0 lookupSlotByte
int __cdecl lookupSlotByte(unsigned int index)
{
    if (index <= 0x24)
        return g_slotBytes[index];
    return -1;
}

// STUB: 0x461B10 sub_461B10 (277 bytes)
void __cdecl sub_461B10(int* a, int b)
{
}

// STUB: 0x461C30 sub_461C30 (781 bytes)
void sub_461C30()
{
}

// STUB: 0x461F40 sub_461F40 (88 bytes)
void sub_461F40()
{
}

// STUB: 0x461FA0 sub_461FA0 (83 bytes)
void __cdecl sub_461FA0(int a)
{
}

// STUB: 0x462000 sub_462000 (99 bytes)
void sub_462000()
{
}

// STUB: 0x462070 sub_462070 (470 bytes)
void sub_462070()
{
}
