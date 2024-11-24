#pragma once

struct SwerveInput{
    double xTranslation;
    double yTranslation;
    double rotation;
    bool slowMode;
};

struct ClawInput
{
        void  ManualMovePivot(double speed);
        double  GetAngle(); 
        void  ProfiledMoveToAngle(double angle);
        double  GetSpeed();
        double  SetPosition();
        void  PublishDebugInfo();
        void  ResetProfiledMoveState();

    // TODO - define members
};

struct ClawOutput
{
        double  GetAngle();
        double  GetSpeed();
        double  SetPosition();

    // TODO - define members
};

struct ElevatorInput
{
    bool up;
    bool down;
};

struct ElevatorOutput
{
    // TODO - define members
};

struct RobotControlData {
    SwerveInput swerveInput;
    ClawInput clawInput;
    ClawOutput clawOutput;
    ElevatorInput elevatorInput;
    ElevatorOutput elevatorOutput;
};

