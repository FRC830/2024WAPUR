#pragma once

#include <frc/Timer.h>
#include <rev/CANSparkMax.h>
#include <frc/XboxController.h>
#include "RobotControlData.h"    

class Elevator
{
public:
    Elevator();
    ~Elevator() = default;

    // Functions that make using the elevator simple
    void ProfiledMoveToHeight(int direction);
    void HandleInput(RobotControlData& input);

    double GetHeight();
    int m_profileState = 0;
    int shelfCurrent = 0;

private:
    // Raw set height used by profiled move to set the height
    void SetHeight(double desired_height);
    rev::CANSparkMax m_elevatorMotor{5, rev::CANSparkMax::MotorType::kBrushless};
    frc::Timer m_Timer;
    
    bool m_ElevatorFlag;
    int m_ElevatorState;
    bool m_PrevElevatorFlag;
    bool m_SwitchModeFlag;
    bool m_prevSwitchMode;
    double r=0.0;
    double shelfHeight=15.0;
};