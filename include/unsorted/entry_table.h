#pragma once

struct EntryRecord
{
    char valid;           // 0x00
    char pad01[0x1f];
    short count;          // 0x20
    char pad22[0xc4 - 0x22];
    short* values;        // 0xc4, entries are 10 bytes apart
    char padc8[0x100 - 0xc8];
};
