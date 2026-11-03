#pragma once

class AgTracked;

class AgTrackedHost
{
public:
    void untrack(AgTracked* object);
};

class AgTracked
{
public:
    ~AgTracked();

    char pad00[0xC];
    AgTrackedHost* host;
};
