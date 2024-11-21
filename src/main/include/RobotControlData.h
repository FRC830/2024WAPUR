#pragma once

struct SwerveInput{
    double xTranslation;
    double yTranslation;
    double rotation;
    bool slowMode;
};

struct RobotControlData {
    SwerveInput swerveInput;
};

