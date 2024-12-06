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
    // TODO - define members
};

struct ElevatorOutput
{
    // TODO - define members
};

struct TestInput {
    double speed;
};

struct RobotControlData {
    SwerveInput swerveInput;
    ClawInput clawInput;
    ClawOutput clawOutput;
    ElevatorInput elevatorInput;
    ElevatorOutput elevatorOutput;
    TestInput testInput;
};

