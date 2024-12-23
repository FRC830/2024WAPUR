#pragma once
#include <frc/XboxController.h>
#include "RobotControlData.h"

class ControllerInterface
{
    public:
        ControllerInterface() = default;
        ~ControllerInterface() = default;
        void UpdateRobotControlData(RobotControlData &controlData);
        frc::XboxController m_pilot{0};
        frc::XboxController m_copilot{1};

    private:
        void UpdateSwerveInput(RobotControlData &controlData);
        void UpdateClawInput(RobotControlData &controlData);
        void UpdateElevatorInput(RobotControlData &controlData);        
 
        double m_slowmodefactor = 0.25;
};