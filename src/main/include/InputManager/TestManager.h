#pragma once

#include "HAL/Test.h"
#include "RobotControlData.h"

class TestManager
{
public:
    TestManager();
    ~TestManager() = default;

    void HandleInput(RobotControlData &control_data);
    void Reset();

private:
    Test test;
};