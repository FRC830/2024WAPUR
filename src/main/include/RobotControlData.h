#pragma once

struct SwerveInput{
    double xTranslation;
    double yTranslation;
    double rotation;
    bool slowMode;
};

struct ClawInput
{
    // TODO - define members
};

struct ClawOutput
{
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

