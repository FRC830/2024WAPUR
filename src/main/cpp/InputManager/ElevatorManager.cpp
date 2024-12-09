#include "InputManager/ElevatorManager.h"
#include <iostream>
#include <frc/Timer.h>

ElevatorManager::ElevatorManager()
{

}

void ElevatorManager::HandleInput(RobotControlData& control_data) {
    if (control_data.elevatorInput.up) {
        m_elevator.ProfiledMoveToHeight(true);
    } else if(control_data.elevatorInput.down) {
        m_elevator.ProfiledMoveToHeight(false);
    }
};
void ElevatorManager::Reset(){
    m_elevator.ProfiledMoveToHeight(0);
};