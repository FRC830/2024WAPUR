#include "HAL/Elevator.h"
#include <iostream>


Elevator::Elevator()
{
    // TODO - configure motors
    std::cout << "configured elevator motors" << std::endl;
}

void Elevator::ProfiledMoveToHeight(double desired_height)
{
    // TODO - implement profiled move semantics
    std::cout << "elevator performing profiled move to " << desired_height << std::endl;
    SetHeight(desired_height);
}

double Elevator::GetHeight()
{
    // TODO - read motors for height
    std::cout << "elevator height measured as 0.0 inches" << std::endl;
    return 0.0f;
}

void Elevator::SetHeight(double desired_height)
{
    // TODO - set motors to go to height
    std::cout << "elevator setting height to " << desired_height << std::endl;
}
