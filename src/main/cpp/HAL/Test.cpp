#include "HAL/Test.h"

void Test::Configure(TestConfig config)
{
    motor.SetIdleMode(rev::CANSparkMax::IdleMode::kBrake);
    speedMultiplier = config.speedMultiplier;
}

void Test::Operation(double inputSpeed)
{
    motor.Set(inputSpeed * speedMultiplier);
}