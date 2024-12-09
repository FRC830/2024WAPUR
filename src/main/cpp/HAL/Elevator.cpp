#include "HAL/Elevator.h"
#include <iostream>
#include <frc/Timer.h>
#include <math.h>


Elevator::Elevator()
{
    m_profileState = 0;
    m_Timer = frc::Timer();
    // TODO - configure motors
    std::cout << "configured elevator motors" << std::endl;
}



//setHeight switched to ProfiledMoveToHeight
// void Elevator::SetHeight(double desired_height)
// {
//     // TODO - set motors to go to height
//     std::cout << "elevator setting height to " << desired_height << std::endl;
// }
void Elevator::ProfiledMoveToHeight(bool direction) 
{
    std::string height_increase;
    int shelfNumber = shelfCurrent + 1;
    // TODO - make motors go up or down 
    std::cout << "elevator performing profiled move to " << shelfNumber << std::endl;
    if (shelfCurrent < 3)
    {
        if (direction)
    {
        m_elevatorMotor.Set(0.5);
        ++shelfCurrent;
    } else if (direction){
        m_elevatorMotor.Set(-0.5);
        --shelfCurrent;
    }
    std::cout << "performed profiled move to " << shelfNumber << std::endl;
    std::cout << "elevator moving" << height_increase << std::endl;
    }
    

}