#include "HAL/Elevator.h"
#include <iostream>
#include <frc/Timer.h>


Elevator::Elevator()
{
    m_profileState = 0;
    m_Timer = frc::Timer();
    // TODO - configure motors
    std::cout << "configured elevator motors" << std::endl;
}

void Elevator::ProfiledMoveToHeight(int shelfNumber)
{
    // TODO - implement profiled move semantics
    std::cout << "elevator performing profiled move to " << shelfNumber << std::endl;
    
    switch(m_profileState)
    {
     case 0: 
        {
         //   m_ProfileStartPos = GetAngle();

            m_Timer.Stop();
            m_Timer.Reset();
            m_Timer.Start();

            m_profileState++;

            break;
        }
            

        case 1:
        {
            // auto setPoint = m_Profile.Calculate(m_Timer.Get(),    
            // frc::TrapezoidProfile<units::degrees>::State{units::degree_t{m_ProfileStartPos}, 0_deg_per_s},  
            // frc::TrapezoidProfile<units::degrees>::State{units::degree_t{angle}, 0_deg_per_s}
            // );

            // SetAngle(setPoint.position.to<double>());

            //if (m_Profile.IsFinished(m_Timer.Get())) {
            //
            //    m_profileState++;
            // }



            break;
        }

        case 2: 
        {

            m_Timer.Stop();

            m_profileState++;

            break;
        }

        
        default:
            break; 
    }
}

double Elevator::GetHeight()
{
    // TODO - read motors for height
    std::cout << "elevator height measured as 0.0 inches" << std::endl;
    return 0.0f;
}
//setHeight switched to ProfiledMoveToHeight
// void Elevator::SetHeight(double desired_height)
// {
//     // TODO - set motors to go to height
//     std::cout << "elevator setting height to " << desired_height << std::endl;
// }
void MoveHeightBy(double height_increase) 
{
    // TODO - make motors increase by a set amount
    std::cout << "elevator increasing height by" << height_increase << std::endl;
}