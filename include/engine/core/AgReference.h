#pragma once

struct AgControlBlock
{
    volatile int uses;
    volatile int weak;
    void* volatile object;
    int addRef();
};

class AgReferencedObject
{
public:
    AgReferencedObject() : control(0) {}
    int acquire(void* owner);

    AgControlBlock* control;
};

template <class T>
class AgReference
{
public:
    AgReference() : control(0), object(0) {}
    AgReference(const AgReference& other);
    AgReference(T* raw)
    {
        control = 0;
        object = 0;
        if (raw)
        {
            int created = raw->AgReferencedObject::acquire(raw);
            AgControlBlock* block = raw->AgReferencedObject::control;
            if (!created)
                block->addRef();
            control = block;
            object = raw;
        }
    }
    ~AgReference();
    void assign(const AgReference& other);
    void releaseInPlace();

    AgReference& operator=(const AgReference& other)
    {
        AgReference copy;
        copy.assign(other);
        AgControlBlock* oldControl = control;
        T* oldObject = object;
        control = copy.control;
        object = copy.object;
        copy.control = oldControl;
        copy.object = oldObject;
        return *this;
    }

    AgControlBlock* control;
    T* object;
};
