// FUNCTION: 0x4BCB90 cstrEqual
int __cdecl cstrEqual(const char* a, const char* b)
{
    if (!a || !b) {
        return 0;
    }
    while (*a == *b) {
        if (*a == 0) {
            return 1;
        }
        a++;
        b++;
    }
    return 0;
}
