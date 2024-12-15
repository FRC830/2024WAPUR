#include "ControllerInterface.h"

void ControllerInterface::UpdateRobotControlData(RobotControlData &controlData)
{
    UpdateSwerveInput(controlData);
    UpdateElevatorInput(controlData);
    UpdateClawInput(controlData);
};

void ControllerInterface::UpdateClawInput(RobotControlData &controlData){
    
    controlData.clawInput.closed = m_copilot.GetLeftTriggerAxis() > 0.05;
    controlData.clawInput.open = m_copilot.GetRightTriggerAxis() > 0.05;
}

void ControllerInterface::UpdateElevatorInput(RobotControlData &controlData)
{
    controlData.elevatorInput.up = m_copilot.GetXButton();
    controlData.elevatorInput.down = m_copilot.GetBButton();
};

void ControllerInterface::UpdateSwerveInput(RobotControlData &controlData)
{
    controlData.swerveInput.slowMode = m_pilot.GetLeftBumper();
  
    controlData.swerveInput.xTranslation = -m_pilot.GetLeftX();
    controlData.swerveInput.yTranslation = -m_pilot.GetLeftY();
    controlData.swerveInput.rotation = -m_pilot.GetRightX();

    if (controlData.swerveInput.slowMode)
    {
        controlData.swerveInput.xTranslation *= m_slowmodefactor;
        controlData.swerveInput.yTranslation *= m_slowmodefactor;
        controlData.swerveInput.rotation *= m_slowmodefactor;
    }
};