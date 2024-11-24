#include "HAL/Claw.h"
#include <iostream>


Claw::Claw()
{
    // TODO - configure mechanism
    std::cout << "configured claw mechanism" << std::endl;
}

void Claw::Clasp()
{
    if (_signal != 1)
    {
        std::cout << "claw is clasping" << std::endl;
        _signal = 1;
    }

    // TODO - implement mechanism to clasp
}

void Claw::Unclasp()
{
    if (_signal != 2)
    {
        std::cout << "claw is unclasping" << std::endl;
        _signal = 2;
    }
    
    // TODO - implement mechanism to clasp
}