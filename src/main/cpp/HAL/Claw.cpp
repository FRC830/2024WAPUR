#include "HAL/Claw.h"
#include <iostream>

// Claw movements

Claw::Claw()
{
    // TODO - configure mechanism
    motor1.SetIdleMode(rev::CANSparkMax::IdleMode::kBrake);
    motor2.SetIdleMode(rev::CANSparkMax::IdleMode::kBrake);
    std::cout << "configured claw mechanism" << std::endl;
}


void ManualMovePivot(double speed)
{ 
    // Set specific usar input
}
double GetAngle()
{ 
    // Uses the claws usar input to take action
    return 0.0;
}


void ProfiledMoveToAngle(double angle)
{ 
    // Uses the claws usar input take action
}


double GetSpeed()
{

    return 0.0;  
    //m_intakeSpeed;
}


void SetPosition()
{ 
// Return to starting position
}


void PublishDebugInfo()
{ 
}


void ResetProfiledMoveState()
{ 
    //m_profileState = 0;
}

void Claw::Clasp()
{
// if (_signal != 1)
// {

//     _signal = 1;
// }
    std::cout << "claw is clasping" << std::endl;
    motor1.Set(clawSpeed);
    motor2.Set(-clawSpeed);
    // TODO - implement mechanism to clasp
    
}
void Claw::Stop()
{
    motor1.Set(0);
    motor2.Set(0);
}
/*int Claw::LauncherHAL()
{ 
    // Put together the compontent
}
*/


void SetClawSpeed(double speed)
{ 
    // Handle any usar input to take this action compontent
}

double GetClawSpeed()
{
    return 0;
}

void RunIntake(double speed)
{ 
    // Set motors to connect to certain speed
}

void Claw::Unclasp()
{
// if (_signal != 2)
// {
//     std::cout << "claw is unclasping" << std::endl;
//     _signal = 2;
// }
    std::cout << "claw is unclasping" << std::endl;
    motor1.Set(-clawSpeed);
    motor2.Set(clawSpeed);
    // TODO - implement mechanism to clasp
}