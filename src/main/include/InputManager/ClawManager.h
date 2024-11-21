#pragma once

#include "HAL/Claw.h"
#include "RobotControlData.h"

class ClawManager
{
public:
    ClawManager();
    ~ClawManager() = default;

    void HandleInput(RobotControlData& control_data);
    void Reset();

private:
    Claw _claw;
};