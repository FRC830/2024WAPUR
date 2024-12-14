#pragma once
#include "rev/CANSparkMax.h"

class Claw
{
public:

    Claw();
    ~Claw() = default;

    void Clasp();
    void Unclasp();
    void Stop();

private:
    // TODO - get rid... only used for printing
    int _signal = 0;
    rev::CANSparkMax motor1{4, rev::CANSparkMax::MotorType::kBrushless};
    rev::CANSparkMax motor2{11, rev::CANSparkMax::MotorType::kBrushless};
    double clawSpeed=0.3;

    // TODO - define mechanism
};