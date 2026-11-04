struct Cmd {
    int type;
    int a;
    int b;
    int c;
    int d;
};

struct CmdSink {
    void sub_5166B0(Cmd* cmd);
};

struct CmdHost {
    char pad[0x4C];
    CmdSink* sink;
    void sendCmd2B();
};

// FUNCTION: 0x50FA90 CmdHost::sendCmd2B
void CmdHost::sendCmd2B()
{
    Cmd cmd;
    cmd.type = 43;
    cmd.a = 0;
    sink->sub_5166B0(&cmd);
}

// STUB: 0x50FAD0 sub_50FAD0 (172 bytes)
void sub_50FAD0()
{
}

// STUB: 0x50FB80 sub_50FB80 (172 bytes)
void sub_50FB80()
{
}

// STUB: 0x50FC30 sub_50FC30 (172 bytes)
void sub_50FC30()
{
}

// STUB: 0x50FCE0 sub_50FCE0 (185 bytes)
void sub_50FCE0()
{
}

// STUB: 0x50FDA0 sub_50FDA0 (26 bytes)
void sub_50FDA0()
{
}

// STUB: 0x50FDC0 sub_50FDC0 (337 bytes)
void sub_50FDC0()
{
}

// STUB: 0x50FF20 sub_50FF20 (313 bytes)
void sub_50FF20()
{
}
