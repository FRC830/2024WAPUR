#include <cmath>
#include "subsystems/LauncherHAL.h"
#include <iostream>
#include <unistd.h>
#include "ratpack/CANSparkMaxDebugMacro.h"
LauncherHAL::LauncherHAL()
{    // TODO: Configure this component
}

void LauncherHAL::SetFlywheelSpeed(double speed)
{   
    // TODO: This handle any user input and take action on this component
}

void LauncherHAL::SetIndexerSpeed(double speed)
{
    // TODO: This handle any user input and take action on this component
}


void LauncherHAL::SetAngle(double y)
{
    
}

void LauncherHAL::ProfiledMoveToAngle(double angle)
{
   // TODO: This handle any user input and take action on this component
}



double LauncherHAL::GetFlywheelSpeed()
{
    return 0; // FIXME
}

void LauncherHAL::ResetProfiledMoveState()
{
    m_profileState = 0;
}