#pragma once

template <class Base>
class AgFactory
{
public:
    class IAllocator
    {
    public:
        IAllocator();
        virtual ~IAllocator() {}
        virtual void vfn_1() = 0;
        virtual void vfn_2() = 0;
        virtual void vfn_3() = 0;
    };
};

template <class Base>
AgFactory<Base>::IAllocator::IAllocator()
{
}
