#pragma once

#include <frc/Timer.h>
#include <frc/trajectory/TrapezoidProfile.h>
#include <units/length.h>
#include <units/velocity.h>
#include <units/angle.h>
#include <units/acceleration.h>
#include <frc/Timer.h>
#include <frc/trajectory/TrapezoidProfile.h>

class ClawHAL
{
private:
 double m_intakeSpeed = 0.0;

    public:
        ClawHAL();
        ~ClawHAL() = default;
        void  ManualMovePivot(double speed);
        double  GetAngle(); 
        void  ProfiledMoveToAngle(double angle);
        double  GetSpeed();
        void  SetPosition();
        void  PublishDebugInfo();
        void  ResetProfiledMoveState(); 
};

/*
class LauncherHAL
{
    public:    
        LauncherHAL();
        ~LauncherHAL() = default;
        void SetClawHALSpeed(double speed);
        double GetClawHALSpeed();
        void RunIntake(double speed);
        void ResetProfiledMoveState();


    private:
        double m_indexerSpeed;
        int m_profileState = 0;
};
*/