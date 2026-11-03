extern unsigned int g_6E4798[];
extern short g_handlesA[0x14];
extern unsigned char g_628020[][14];

struct AgObjectPool
{
    void free(int object);
};

extern AgObjectPool g_objectPool;

struct SpriteRecord
{
    int a;
    int b;
    char pad[0x20];
};

extern SpriteRecord* g_6A5BC4;
extern short g_6A5BBA;

void __cdecl sub_4DA6E0(int value);
void __cdecl sub_4CE9D0(int handle);
void __cdecl sub_50C970(int value);
int __stdcall sub_4B7070(int value);

// FUNCTION: 0x41F460 clearFlag
void __cdecl clearFlag(int bit)
{
    g_6E4798[bit / 32] &= ~(1 << (bit & 31));
}

// FUNCTION: 0x423A40 setFlag
void __cdecl setFlag(int bit)
{
    g_6E4798[bit / 32] |= 1 << (bit & 31);
}

// FUNCTION: 0x462F40 applyValue
char __cdecl applyValue(int unused, int value)
{
    if (value < 0)
        value = 0;
    sub_4DA6E0(value);
    return 1;
}

// FUNCTION: 0x46DB50 freeHandleA
void __cdecl freeHandleA(int id)
{
    for (int i = 0; i < 0x14; i++) {
        if (id == g_handlesA[i]) {
            sub_4CE9D0(i + 0x32);
            g_handlesA[i] = -1;
            return;
        }
    }
}

// FUNCTION: 0x46E860 splitDigits
void __cdecl splitDigits(int* out, int count, int value)
{
    int i = 0;
    while (value > 0 || i < count) {
        out[i++] = value % 10;
        value /= 10;
    }
}

// FUNCTION: 0x4C3E10 freePooledObject
void __cdecl freePooledObject(int object)
{
    g_objectPool.free(object);
}

// FUNCTION: 0x476350 getTableRecord
void* __cdecl getTableRecord(unsigned int index)
{
    if (index <= 0x3D)
        return g_628020[index];
    return 0;
}

// FUNCTION: 0x5121B0 touchValue
int __cdecl touchValue(int value)
{
    sub_50C970(value);
    return value;
}

// FUNCTION: 0x4B9CC0 isOne
bool __stdcall isOne(int value)
{
    return sub_4B7070(value) == 1;
}
