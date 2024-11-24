#pragma once

class Elevator
{
public:
    Elevator();
    ~Elevator() = default;

    // Functions that make using the elevator simple
    void ProfiledMoveToHeight(double desired_height);

    double GetHeight();

private:

    // Raw set height used by profiled move to set the height
    void SetHeight(double desired_height);

    // TODO - define motors

};