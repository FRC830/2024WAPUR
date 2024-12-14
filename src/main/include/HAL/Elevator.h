#pragma once

#include <frc/Timer.h>
#include <ctre/phoenix6/TalonFX.hpp>
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
    void MoveElevator(int direction);
    ctre::phoenix6::hardware::TalonFX m_elevatorMotor{18};
    frc::Timer m_Timer;
    int speedMult=0;
    bool m_ElevatorFlag;
    int m_ElevatorState;
    bool m_PrevElevatorFlag;
    bool m_SwitchModeFlag;
    bool m_prevSwitchMode;
    double r=0.0;
    double shelfHeight=15.0;
};