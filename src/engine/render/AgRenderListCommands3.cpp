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
    void sendCmd12(int a);
    void sendCmd11(int a);
    void sendCmd22(int a);
    void sendCmd19(int a);
    void sendCmd17(int a);
    void sendCmd13(int a, int b, int c, int d);
};

// STUB: 0x510060 sub_510060 (246 bytes)
void sub_510060()
{
}

// FUNCTION: 0x510160 CmdHost::sendCmd13
void CmdHost::sendCmd13(int a, int b, int c, int d)
{
    Cmd cmd;
    cmd.type = 19;
    cmd.a = a;
    cmd.b = b;
    cmd.c = c;
    cmd.d = d;
    sink->sub_5166B0(&cmd);
}

// FUNCTION: 0x5101B0 CmdHost::sendCmd12
void CmdHost::sendCmd12(int a)
{
    Cmd cmd;
    cmd.type = 18;
    cmd.a = a;
    sink->sub_5166B0(&cmd);
}

// FUNCTION: 0x5101F0 CmdHost::sendCmd11
void CmdHost::sendCmd11(int a)
{
    Cmd cmd;
    cmd.type = 17;
    cmd.a = a;
    sink->sub_5166B0(&cmd);
}

// STUB: 0x510230 sub_510230 (112 bytes)
void sub_510230()
{
}

// FUNCTION: 0x5102A0 CmdHost::sendCmd22
void CmdHost::sendCmd22(int a)
{
    Cmd cmd;
    cmd.type = 34;
    cmd.a = a;
    sink->sub_5166B0(&cmd);
}

// FUNCTION: 0x5102E0 CmdHost::sendCmd19
void CmdHost::sendCmd19(int a)
{
    Cmd cmd;
    cmd.type = 25;
    cmd.a = a;
    sink->sub_5166B0(&cmd);
}

// FUNCTION: 0x510320 CmdHost::sendCmd17
void CmdHost::sendCmd17(int a)
{
    Cmd cmd;
    cmd.type = 23;
    cmd.a = a;
    sink->sub_5166B0(&cmd);
}
