struct StringRef
{
    const char* text;
    int length;

    StringRef* set(const char* s);
};

// FUNCTION: 0x4FD320 StringRef::set
StringRef* StringRef::set(const char* s)
{
    text = s;
    if (s) {
        const char* next = s + 1;
        while (*s++) {
        }
        length = (int)(s - next);
    } else {
        length = 0;
    }
    return this;
}
