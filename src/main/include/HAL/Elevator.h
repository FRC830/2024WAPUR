#pragma once

#include <frc/Timer.h>
#include <rev/CANSparkMax.h>
#include <frc/XboxController.h>

    

class Elevator
{
public:
    Elevator();
    ~Elevator() = default;

    // Functions that make using the elevator simple
    void ProfiledMoveToHeight(int shelf);
    void ShiftHeight(bool direction);

    double GetHeight();
    int m_profileState = 0;

private:
    // Raw set height used by profiled move to set the height
    void SetHeight(double desired_height);
    rev::CANSparkMax m_elevatorMotor{9, rev::CANSparkMax::MotorType::kBrushless};
    frc::Timer m_Timer;
    int shelfCurrent;

};