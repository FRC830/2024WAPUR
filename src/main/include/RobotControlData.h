#pragma once
#include "subsystems/subsystemsManagers/IntakeManager.h"
#include "subsystems/subsystemsManagers/LauncherManager.h"

struct SwerveInput{
    double xTranslation;
    double yTranslation;
    double rotation;
    bool slowMode;
    bool resetGyroZeroHeading;
};

struct RobotControlData {
    IntakeInput intakeInput;
    IntakeOutput intakeOutput;
    LauncherInput launcherInput;
    LauncherOutput launcherOutput;
    SwerveInput swerveInput;
};

