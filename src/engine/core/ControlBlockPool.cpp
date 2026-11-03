struct ControlBlockPool
{
    void release(void* block);
};

extern ControlBlockPool* g_controlBlockPool;

// FUNCTION: 0x500E20 freeControlBlock
void __cdecl freeControlBlock(void* block)
{
    g_controlBlockPool->release(block);
}
