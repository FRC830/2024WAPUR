#include "HAL/Elevator.h"
#include <iostream>
#include <frc/Timer.h>
#include <math.h>

Elevator::Elevator()
{
    m_profileState = 0;
    m_Timer = frc::Timer();
    // TODO - configure motors
    std::cout << "configured elevator motors" << std::endl;
}



double Elevator::GetHeight()
{
    // get data from motors
    std::cout << "elevator height measured as 0.0 inches" << std::endl;
    return 0.0f;
}

//setHeight switched to ProfiledMoveToHeight
// void Elevator::SetHeight(double desired_height)
// {
//     // TODO - set motors to go to height
//     std::cout << "elevator setting height to " << desired_height << std::endl;
// }
void Elevator::ProfiledMoveToHeight(int direction) 
{

    // initialize i based on direction
    if (direction==0) {
        i=0;
    } else if (direction==-1) {
        i *= -1;
    }
    // makes sure that i <= 35
    i=std::min  (abs(i),35)*(i/abs(i));
    // implements i variable through setting  motor speed
    m_elevatorMotor.Set(((double) i/35)*0.7);
    // increments i by 1
    i++; 
    // m_Timer.Start();
    // if (m_Timer.Get() < )

    // while (m_Timer.Get()<=3_s) {
    //     if (m_Timer.Get()<1_s){
    //     m_elevatorMotor.Set(m_Timer.Get()/1_s);
    //     } else if (m_Timer.Get()>2_s) {
    //         --speedMult;
    //     }
    //     m_elevatorMotor.Set(m_Timer.Get()/1_s);
    // }
    // m_elevatorMotor.Set(0);
    // m_Timer.Stop();
    // m_Timer.Reset();
    // speedMult=0;
    /*
    if(direction==1) {
        m_elevatorMotor.Set(0.05);
    } else if (direction==-1) {
        m_elevatorMotor.Set(-0.05);
    } else {
        m_elevatorMotor.Set(0);
    }
    */

    /*
    std::string height_increase;
    int shelfNumber = shelfCurrent + 1;
    // TODO - make motors go up or down 
    std::cout << "elevator performing profiled move to " << shelfNumber << std::endl;
    if (shelfCurrent < 3)
    {
        if (direction)
    {
        m_elevatorMotor.Set(0.5);
        ++shelfCurrent;
    } else if (direction){
        m_elevatorMotor.Set(-0.5);
        --shelfCurrent;
    }
    std::cout << "performed profiled move to " << shelfNumber << std::endl;
    std::cout << "elevator moving" << height_increase << std::endl;
    }
    */
}
void Elevator::MoveElevator(int direction) 
{
    if(direction==1) {
        m_elevatorMotor.Set(0.05);
    } else if (direction==-1) {
        m_elevatorMotor.Set(-0.05);
    } else {
        m_elevatorMotor.Set(0);
    }
}
    
void ShiftHeight(bool direction) 
{
    std::string height_increase;
    // TODO - make motors go up or down 
    if (direction==true){
        height_increase = "up";
        //Elevator::ProfiledMoveToHeight(shelfCurrent+1);
    }else{
        height_increase = "down";
        //Elevator::ProfiledMoveToHeight(shelfCurrent-1);
    }
    std::cout << "elevator moving" << height_increase << std::endl;
}