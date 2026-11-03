#include <algorithm>
#include "shim/windows.h"
#include "engine/core/AgTimer.h"

static LARGE_INTEGER s_nowFrequency;
static LARGE_INTEGER s_updateFrequency;

// FUNCTION: 0x4FD150 ??0AgTimer@@QAE@N@Z
AgTimer::AgTimer(double maxStep)
{
    step = 0;
    elapsed = 0;
    this->maxStep = maxStep;
    lastTick = 0;
    unused = 0;
}

// FUNCTION: 0x4FD180 AgTimer::getStep
double AgTimer::getStep()
{
    return step;
}

// FUNCTION: 0x4FD1E0 AgTimer::getElapsed
double AgTimer::getElapsed()
{
    return elapsed;
}

// FUNCTION: 0x4FD210 AgTimer::setMaxStep
void AgTimer::setMaxStep(double value)
{
    maxStep = value;
}

// FUNCTION: 0x4FD190 AgTimer::now
double AgTimer::now()
{
    LARGE_INTEGER counter;
    QueryPerformanceCounter(&counter);
    if (s_nowFrequency.QuadPart == 0)
        QueryPerformanceFrequency(&s_nowFrequency);
    return (double)counter.QuadPart / (double)s_nowFrequency.QuadPart;
}

// FUNCTION: 0x4FD1F0 AgTimer::reset
void AgTimer::reset()
{
    lastTick = 0;
    step = 0;
    elapsed = 0;
    update();
}

// FUNCTION: 0x4FD230 AgTimer::update
void AgTimer::update()
{
    LARGE_INTEGER counter;
    QueryPerformanceCounter(&counter);
    if (s_updateFrequency.QuadPart == 0) {
        QueryPerformanceFrequency(&s_updateFrequency);
        lastTick = (double)counter.QuadPart;
    }
    if (lastTick == 0)
        lastTick = (double)counter.QuadPart;
    double tick = (double)counter.QuadPart;
    double delta = (tick - lastTick) / (double)s_updateFrequency.QuadPart;
    lastTick = tick;
    if (maxStep > 0) {
        step = std::min(delta, maxStep);
        elapsed += step;
    } else {
        step = delta;
        elapsed += delta;
    }
}
