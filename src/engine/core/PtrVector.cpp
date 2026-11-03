struct PtrVector
{
    void* first;
    void* last;
    void* end;

    void tidy();
};

// FUNCTION: 0x52B330 PtrVector::tidy
void PtrVector::tidy()
{
    if (first) {
        operator delete(first);
        first = 0;
        last = 0;
        end = 0;
    }
}
