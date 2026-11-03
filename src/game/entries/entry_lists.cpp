struct OwnedPair
{
    int id;
    void* first;
    void* second;
};

void __cdecl sub_4C8390(int index);
bool __cdecl touchTexture(int id, int generation);
void __cdecl freeUnmanaged(void* block);

// FUNCTION: 0x46E710 releaseEntryIds
void __cdecl releaseEntryIds(int* ids, int count)
{
    for (int i = 0; i < count; i++) {
        if (ids[i] > -1) {
            sub_4C8390(ids[i]);
            ids[i] = -1;
        }
    }
}

// FUNCTION: 0x46E950 releaseObjectIds
void __cdecl releaseObjectIds(int* ids, int count)
{
    for (int i = 0; i < count; i++) {
        if (ids[i] > -1) {
            touchTexture(ids[i], 0);
            ids[i] = -1;
        }
    }
}

// FUNCTION: 0x46E930 isStrictlyBetween
bool __cdecl isStrictlyBetween(int low, int high, int value)
{
    return low < value && value < high;
}

// FUNCTION: 0x46EA60 clearOwnedPair
void __cdecl clearOwnedPair(OwnedPair* pair)
{
    pair->id = -1;
    if (pair->first) {
        freeUnmanaged(pair->first);
        pair->first = 0;
    }
    if (pair->second) {
        freeUnmanaged(pair->second);
        pair->second = 0;
    }
}

// STUB: 0x46E990 sub_46E990 (193 bytes)
void sub_46E990()
{
}
