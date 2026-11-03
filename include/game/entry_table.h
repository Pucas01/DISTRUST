#pragma once

#pragma pack(push, 1)
struct Entry
{
    unsigned char unk_00[2];
    unsigned char active;
    unsigned char visible;
    unsigned char unk_04[0x54];
};
#pragma pack(pop)

extern Entry* g_entries;
