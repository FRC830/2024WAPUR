#include "subsystems/IntakeHAL.h"
#include "ratpack/CANSparkMaxDebugMacro.h"

IntakeHAL::IntakeHAL() {
    // TODO: Configure this component
}


void IntakeHAL::RunIntake(double speed) {
 // TODO: Set the motors connected to intake to a specific speed
}

void IntakeHAL::ProfiledMoveToAngle(double angle) {
    // TODO: Use the motors to set the intake to a specific angle
}

void IntakeHAL::ManualMovePivot(double speed) {

    // TODO: Set the intake to a specific angle based on user input

}

void IntakeHAL::ResetProfiledMoveState() {
    // TODO

}

void IntakeHAL::SetAngle(double angle) {
    // TODO

}

double IntakeHAL::GetAngle() {

     return 0; // FIXME

}

double IntakeHAL::GetSpeed() {

    return m_intakeSpeed;

}

void IntakeHAL::PublishDebugInfo()
{
}