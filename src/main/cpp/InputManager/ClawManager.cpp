#include "HAL/Claw.h"
#include "InputManager/ClawManager.h"


void ClawManager::HandleInput(RobotControlData& control_data) {
    if (control_data.clawInput.open){
        m_claw.Unclasp();
    } else if(control_data.clawInput.closed){
        m_claw.Clasp();
    }
    
}
void ClawManager::Reset(){
    // No sensor, no reset
}
    
ClawManager::ClawManager()
{

}
