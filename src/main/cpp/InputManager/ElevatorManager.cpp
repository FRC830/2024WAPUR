#include "HAL/Elevator.h"
#include "InputManager/ElevatorManager.h"
#include <iostream>
#include <frc/Timer.h>


void HandleInput(RobotControlData& control_data) {
    //todo
};
void Reset(){
    m_elevator.ProfiledMoveToHeight(0);
};