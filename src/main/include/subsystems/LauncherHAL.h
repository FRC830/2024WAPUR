#pragma once

#include "SubSystemConfig.h"
#include <frc/Timer.h>
#include <frc/trajectory/TrapezoidProfile.h>
#include <units/length.h>
#include <units/velocity.h>
#include <units/angle.h>
#include <units/acceleration.h>
#include <frc/Timer.h>
#include <frc/trajectory/TrapezoidProfile.h>

class LauncherHAL
{
    public:    
        LauncherHAL();
        ~LauncherHAL() = default;
        void SetFlywheelSpeed(double speed);
        void SetIndexerSpeed(double speed);
        void ProfiledMoveToAngle(double angle);
        double GetAngle(); 
        double GetFlywheelSpeed();
        void ResetProfiledMoveState();

    private:
        double m_indexerSpeed;
        int m_profileState = 0;
        double m_currentAngle;
        void SetAngle(double angle);
};