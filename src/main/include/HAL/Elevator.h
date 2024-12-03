#pragma once

#include <frc/Timer.h>

class Elevator
{
public:
    Elevator();
    ~Elevator() = default;

    // Functions that make using the elevator simple
    void ProfiledMoveToHeight(int shelf);

    double GetHeight();
    int m_profileState = 0;

private:
    // Raw set height used by profiled move to set the height
    void SetHeight(double desired_height);
    void MoveHeightBy(double desired_height);
    // TODO - define motors
    frc::Timer m_Timer;

};