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
    void sendCmd18(int a);
    void sendCmd20(int a);
};

// FUNCTION: 0x510360 CmdHost::sendCmd18
void CmdHost::sendCmd18(int a)
{
    Cmd cmd;
    cmd.type = 24;
    cmd.a = a;
    sink->sub_5166B0(&cmd);
}

// FUNCTION: 0x5103A0 CmdHost::sendCmd20
void CmdHost::sendCmd20(int a)
{
    Cmd cmd;
    cmd.type = 32;
    cmd.a = a;
    sink->sub_5166B0(&cmd);
}

// STUB: 0x5103E0 sub_5103E0 (91 bytes)
void sub_5103E0()
{
}

// STUB: 0x510440 sub_510440 (139 bytes)
void sub_510440()
{
}

// STUB: 0x5104D0 sub_5104D0 (156 bytes)
void sub_5104D0()
{
}

// STUB: 0x510570 sub_510570 (156 bytes)
void sub_510570()
{
}

// STUB: 0x510610 sub_510610 (51 bytes)
void sub_510610()
{
}

// STUB: 0x510650 sub_510650 (52 bytes)
void sub_510650()
{
}

// STUB: 0x510690 sub_510690 (42 bytes)
void sub_510690()
{
}

// STUB: 0x5106C0 sub_5106C0 (35 bytes)
void sub_5106C0()
{
}

// STUB: 0x5106F0 sub_5106F0 (23 bytes)
void sub_5106F0()
{
}

// STUB: 0x510710 sub_510710 (236 bytes)
void sub_510710()
{
}
