#pragma once

class AgIThreadHost
{
public:
    AgIThreadHost();
    virtual ~AgIThreadHost() {}
    virtual void vfn_1() = 0;
    virtual void vfn_2() = 0;
    virtual void vfn_3(); // 0x4135B0
    virtual void vfn_4() = 0;
};
