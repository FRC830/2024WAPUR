#pragma once

#include "HAL/Elevator.h"
#include "RobotControlData.h"

Elevator m_elevator = Elevator();

class ElevatorManager
{
public:
    ElevatorManager();
    ~ElevatorManager() = default;

    void HandleInput(RobotControlData& control_data);
    void Reset();

private:
    Elevator _elevator;
};