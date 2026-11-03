#pragma once

class AgObjectPool
{
public:
    void* alloc();
    void free(void* block);
};

extern AgObjectPool g_objectPool;
