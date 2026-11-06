struct Chan {
    int isIdle();
    int flag();
    void close();
};
struct ChanSlot {
    int a;
    Chan* o;
};
extern ChanSlot g_7492A0[];
extern ChanSlot g_7492B0[];
extern short g_74C068[];
extern short g_74C072[];
extern short g_74C07C[];
extern unsigned short g_74C03C[];
extern unsigned short g_74C040[];
extern unsigned short g_74C044[];
extern short g_74C048[];
extern short g_74C000;
extern short g_74C002;
extern short g_74C004;
extern short g_74C008;
void sub_4D8FE0();

// FUNCTION: 0x4D9DA0 resetChannelIfFlag
void __cdecl resetChannelIfFlag(int ch)
{
    if (g_7492B0[ch].o->flag()) {
        g_74C068[ch] = 0;
        g_74C072[ch] = -1;
        g_74C07C[ch] = -1;
    }
}

// FUNCTION: 0x4D9FA0 closeChannel
void __cdecl closeChannel(int ch)
{
    Chan* c = g_7492A0[ch].o;
    if (c) {
        c->close();
    }
    g_74C040[ch] = g_74C03C[ch];
    g_74C03C[ch] = 12;
}

// FUNCTION: 0x4DA3F0 advanceChannel
void __cdecl advanceChannel(int ch)
{
    Chan* c = g_7492A0[ch].o;
    if (c && !c->isIdle()) {
        return;
    }
    unsigned short v = g_74C044[ch];
    if (v) {
        g_74C03C[ch] = v;
        g_74C044[ch] = 0;
    } else {
        g_74C03C[ch] = 0;
        g_74C048[ch] = -1;
    }
}

// FUNCTION: 0x4DA450 selectTrack
void __cdecl selectTrack(int id)
{
    if (id != -1) {
        if (!(g_74C002 == id && (g_74C000 == 3 || g_74C000 == 1))) {
            g_74C008 = 0;
            sub_4D8FE0();
        }
        g_74C002 = id;
        g_74C004 = -1;
    }
}
