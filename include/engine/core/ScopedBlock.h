#pragma once

struct ScopedBlockBase
{
    ~ScopedBlockBase() { operator delete(data); }

    void* data;
};

class ScopedBlock : public ScopedBlockBase
{
public:
    ~ScopedBlock();
};

class ScopedBlockOwner : public ScopedBlock
{
public:
    ~ScopedBlockOwner();
};
