#pragma once

#include "SubSystemConfig.h"
#include <frc/trajectory/TrapezoidProfile.h>
#include <frc/Timer.h>
#include <networktables/NetworkTableInstance.h>
#include <networktables/NetworkTable.h>
#include <networktables/DoubleTopic.h>
#include <networktables/IntegerTopic.h>
#include <networktables/StringTopic.h>

class IntakeHAL
{
    public: 
        IntakeHAL(); 
        ~IntakeHAL() = default;
        void RunIntake(double speed);
        void ProfiledMoveToAngle(double angle);
        void ManualMovePivot(double speed);
        double GetAngle(); 
        double GetSpeed();
        void ResetProfiledMoveState();
        void PublishDebugInfo();
        

    private:        
        double m_intakeSpeed;
        void SetAngle(double angle);
};