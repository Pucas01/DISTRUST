struct Chan {
    int flag();
    void stop();
    void pause();
    void close();
};
struct ChanSlot {
    int a;
    Chan* o;
};
extern ChanSlot g_7492A0[];
extern ChanSlot g_7492B0[];
extern unsigned short g_74C068[];
extern unsigned short g_74C03C[];
extern unsigned short g_74C044[];
extern short g_74C048[];
extern unsigned char g_74BFFA;
void __cdecl sub_4D9BB0(int ch);
void __cdecl sub_4D9DE0(int ch);
void __cdecl sub_4D9DA0(int ch);
void __cdecl sub_4DA310(int ch);
void __cdecl sub_4D9FE0(int ch);
void __cdecl sub_4DA390(int ch);
void __cdecl sub_4D9FA0(int ch);
void __cdecl sub_4DA3F0(int ch);

// FUNCTION: 0x4D9AF0 updateChannelB
void __cdecl updateChannelB(int ch)
{
    short st = g_74C068[ch];
    if (st == 0) {
        return;
    }
    if (st == 2) {
        sub_4D9BB0(ch);
        return;
    }
    if (st == 4) {
        Chan* c = g_7492B0[ch].o;
        if (c) {
            c->stop();
        }
        g_74C068[ch] = 12;
        return;
    }
    if (st == 9) {
        g_7492B0[ch].o->pause();
        g_74C068[ch] = 13;
        return;
    }
    if (st == 10) {
        g_7492B0[ch].o->close();
        g_74C068[ch] = 12;
        return;
    }
    if (st == 12) {
        sub_4D9DE0(ch);
        return;
    }
    if (st == 13) {
        sub_4D9DA0(ch);
    }
}

// FUNCTION: 0x4D9E90 updateChannelA
void __cdecl updateChannelA(int ch)
{
    unsigned char s = g_74BFFA;
    if (s != 3) {
        if (s == 0) {
            return;
        }
        g_74BFFA = 3;
    }
    short st = g_74C03C[ch];
    if (st == 0) {
        return;
    }
    if (st == 1) {
        g_74C03C[ch] = 11;
        g_74C044[ch] = 0;
        return;
    }
    if (st == 3) {
        sub_4DA310(ch);
        return;
    }
    if (st == 2) {
        sub_4D9FE0(ch);
        return;
    }
    if (st == 4) {
        sub_4DA390(ch);
        return;
    }
    if (st == 9) {
        Chan* c = g_7492A0[ch].o;
        if (c) {
            c->pause();
        }
        g_74C03C[ch] = 13;
        return;
    }
    if (st == 10) {
        sub_4D9FA0(ch);
        return;
    }
    if (st == 11) {
        return;
    }
    if (st == 12) {
        sub_4DA3F0(ch);
        return;
    }
    if (st == 13) {
        if (g_7492A0[ch].o->flag()) {
            g_74C03C[ch] = 0;
            g_74C048[ch] = -1;
        }
    }
}
