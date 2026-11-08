// FUNCTION: 0x4F2670 sub_4F2670
struct RM4F2670 {
    char pad[0xc];
    struct CmdHost* host;
};
struct CmdHost {
    void sendCmd22(int a);
};
extern unsigned int g_755B68;
RM4F2670* getRenderManager();
void __cdecl sub_4F2670(int bit)
{
    if (bit == 5 && (g_755B68 & 0x20))
        {
            CmdHost* h = getRenderManager()->host;
            h->sendCmd22(0);
        }
    g_755B68 &= ~(1 << bit);
}

// STUB: 0x4F26B0 sub_4F26B0 (147 bytes)
void sub_4F26B0()
{
}
