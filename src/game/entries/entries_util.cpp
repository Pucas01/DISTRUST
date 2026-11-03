int __cdecl sub_4C5FC0(int id, int flag);

// FUNCTION: 0x4C6090 sub_4C6090
int __cdecl sub_4C6090(int id)
{
    return sub_4C5FC0(id, 1);
}

int __cdecl sub_4C66C0(const unsigned char* blob, int index);

// FUNCTION: 0x4C6640 getBlobEntry
unsigned char* __cdecl getBlobEntry(const unsigned char* blob, int index)
{
    if (blob) {
        int count = (blob[3] << 24) | (blob[2] << 16) | (blob[1] << 8) | blob[0];
        if (index >= 0 && index < count)
            return (unsigned char*)blob + sub_4C66C0(blob, index);
    }
    return 0;
}

// FUNCTION: 0x4C6690 getBlobCount
int __cdecl getBlobCount(const unsigned char* blob)
{
    if (!blob)
        return -1;
    return (blob[3] << 24) | (blob[2] << 16) | (blob[1] << 8) | blob[0];
}
