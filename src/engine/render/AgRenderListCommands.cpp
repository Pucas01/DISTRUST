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
    void sendCmd06();
    void sendCmd07();
    void sendCmd0F(int a, int b, int c);
    void sendCmd10(int a, int b, int c, int d);
};

// STUB: 0x50F6C0 sub_50F6C0 (172 bytes)
void sub_50F6C0()
{
}

// FUNCTION: 0x50F770 CmdHost::sendCmd06
void CmdHost::sendCmd06()
{
    Cmd cmd;
    cmd.type = 6;
    cmd.a = 0;
    sink->sub_5166B0(&cmd);
}

// STUB: 0x50F7B0 sub_50F7B0 (108 bytes)
void sub_50F7B0()
{
}

// STUB: 0x50F820 sub_50F820 (130 bytes)
void sub_50F820()
{
}

// STUB: 0x50F8B0 sub_50F8B0 (103 bytes)
void sub_50F8B0()
{
}

// FUNCTION: 0x50F920 CmdHost::sendCmd0F
void CmdHost::sendCmd0F(int a, int b, int c)
{
    Cmd cmd;
    cmd.type = 15;
    cmd.a = a;
    cmd.b = b;
    cmd.c = c;
    sink->sub_5166B0(&cmd);
}

// FUNCTION: 0x50F970 CmdHost::sendCmd10
void CmdHost::sendCmd10(int a, int b, int c, int d)
{
    Cmd cmd;
    cmd.type = 16;
    cmd.a = a;
    cmd.b = b;
    cmd.c = c;
    cmd.d = d;
    sink->sub_5166B0(&cmd);
}

// FUNCTION: 0x50F9C0 CmdHost::sendCmd07
void CmdHost::sendCmd07()
{
    Cmd cmd;
    cmd.type = 7;
    cmd.a = 0;
    sink->sub_5166B0(&cmd);
}
