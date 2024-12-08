#pragma once
#include "rev/CANSparkMax.h"

class Claw
{
public:

    Claw();
    ~Claw() = default;

    void Clasp();
    void Unclasp();

private:
    // TODO - get rid... only used for printing
    int _signal = 0;
    rev::CANSparkMax motor1{4, rev::CANSparkMax::MotorType::kBrushless};


    // TODO - define mechanism
};