#pragma once

#include "HAL/Elevator.h"
#include "RobotControlData.h"


class ElevatorManager
{
public:
    ElevatorManager();
    ~ElevatorManager() = default;

    void HandleInput(RobotControlData& control_data);
    void Reset();

private:
    Elevator m_elevator;
};