#pragma once

class AgTimer
{
public:
    AgTimer(double maxStep);
    double getStep();
    double getElapsed();
    void setMaxStep(double maxStep);
    void reset();
    void update();
    static double now();

    double step;
    double elapsed;
    double maxStep;
    double lastTick;
    double unused;
};
