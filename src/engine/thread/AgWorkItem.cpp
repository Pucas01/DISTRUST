struct Flagged {
    char pad[0xC];
    int flag;
    void setFlag(int unused);
};

// FUNCTION: 0x4F47C0 Flagged::setFlag
void Flagged::setFlag(int unused)
{
    flag = 1;
}
