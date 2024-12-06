#include "InputManager/TestManager.h"

TestManager::TestManager()
{
    TestConfig config;
    config.speedMultiplier = 0.1;
    test.Configure(config);
}

void TestManager::HandleInput(RobotControlData &control_data)
{
    test.Operation(control_data.testInput.speed);
}