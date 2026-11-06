struct SpriteBatchRaw {
    char pad[0x210];
};
extern SpriteBatchRaw* g_spriteBatches;

// STUB: 0x4DDB10 sub_4DDB10 (474 bytes)
void sub_4DDB10()
{
}

// FUNCTION: 0x4DDCF0 setBatchFlag8
void __cdecl setBatchFlag8(unsigned int index)
{
    if (index <= 0x3F)
        ((char*)&g_spriteBatches[index])[8] = 1;
}

// FUNCTION: 0x4DDD10 sub_4DDD10
void __cdecl sub_4DDD10(unsigned int i, char c, short s)
{
    if (i <= 0x3f) {
        char* b = (char*)g_spriteBatches + i * 0x210;
        b[0x15] = c;
        *(short*)(b + 0x1a) = s;
        b[2] = 0;
    }
}

// FUNCTION: 0x4DDD40 sub_4DDD40
void __cdecl sub_4DDD40(unsigned int i, char c, short s)
{
    if (i <= 0x3f) {
        char* b = (char*)g_spriteBatches + i * 0x210;
        b[0x15] = c;
        *(short*)(b + 0x1a) = s;
        b[2] = 1;
    }
}

// FUNCTION: 0x4DDD70 sub_4DDD70
void __cdecl sub_4DDD70(unsigned int i)
{
    if (i <= 0x3f) {
        SpriteBatchRaw* b = (SpriteBatchRaw*)((char*)g_spriteBatches + i * 0x210);
        *((char*)b + 0xb) = 1;
        *((char*)b + 2) = 0;
    }
}

// FUNCTION: 0x4DDDA0 setBatchFlag6
void __cdecl setBatchFlag6(unsigned int index)
{
    if (index <= 0x3F)
        ((char*)&g_spriteBatches[index])[6] = 1;
}

// FUNCTION: 0x4DDDC0 setBatchFlag4
void __cdecl setBatchFlag4(unsigned int index)
{
    if (index <= 0x3F)
        ((char*)&g_spriteBatches[index])[4] = 1;
}

// FUNCTION: 0x4DDDE0 setBatchFlag7
void __cdecl setBatchFlag7(unsigned int index)
{
    if (index <= 0x3F)
        ((char*)&g_spriteBatches[index])[7] = 1;
}

// STUB: 0x4DDE00 sub_4DDE00 (398 bytes)
void sub_4DDE00()
{
}

// STUB: 0x4DDF90 sub_4DDF90 (914 bytes)
void sub_4DDF90()
{
}
