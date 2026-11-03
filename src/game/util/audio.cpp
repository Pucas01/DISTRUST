int __cdecl sub_4DB270(int bank, int index, int volume, int a, int b);

// FUNCTION: 0x463190 playSound
int __cdecl playSound(int id, int volume)
{
    int bank = -1;
    int index = -1;
    if ((unsigned)id <= 99) {
        bank = 0;
        index = id;
    } else if ((unsigned)(id - 100) <= 99) {
        bank = 1;
        index = id - 100;
    } else if ((unsigned)(id - 200) <= 99) {
        bank = 2;
        index = id - 200;
    }
    return sub_4DB270(bank, index, volume, 0, 0);
}
