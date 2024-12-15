// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"
#include <fmt/core.h>
#include <frc/smartdashboard/SmartDashboard.h>

void Robot::RobotInit() {
  SwerveInit();
}

/**
 * This function is called every 20 ms, no matter the mode. Use
 * this for items like diagnostics that you want ran during disabled,
 * autonomous, teleoperated and test.
 *
 * <p> This runs after the mode specific periodic functions, but before
 * LiveWindow and SmartDashboard integrated updating.
 */
void Robot::RobotPeriodic() {

//   vision.Periodic();
//   auto a = vision.GetPolarCoordForTagX(11);
//   auto b = vision.GetPolarCoordForTagX(15);

//   auto temp = vision.GetRobotToSpeaker(a, b, 6.9);
//   frc::SmartDashboard::PutNumber("Weird r", temp.r);
//   frc::SmartDashboard::PutNumber("Weird Theta", temp.theta);

}

/**
 * This autonomous (along with the chooser code above) shows how to select
 * between different autonomous modes using the dashboard. The sendable chooser
 * code works with the Java SmartDashboard. If you prefer the LabVIEW Dashboard,
 * remove all of the chooser code and uncomment the GetString line to get the
 * auto name from the text box below the Gyro.
 *
 * You can add additional auto modes by adding additional comparisons to the
 * if-else structure below with additional strings. If using the SendableChooser
 * make sure to add them to the chooser code above as well.
 */
void Robot::AutonomousInit() {
  // m_autoSelected = m_chooser.GetSelected();
  // m_autoSelected = frc::SmartDashboard::GetString("Auto Selector", kAutoNameDefault);
  // fmt::print("Auto selected: {}\n", m_autoSelected);
  
  if (m_autoSelected == kAutoNameCustom) {
    // Custom Auto goes here
  } else {
    // Default Auto goes here
  }
}

void Robot::AutonomousPeriodic() {


  _swerve.Drive(0.5, 0.0, 0.0);
  
  
  if (m_autoSelected == kAutoNameCustom) {
    // Custom Auto goes here
  } else {
    // Default Auto goes here
  }
}

void Robot::TeleopInit() {

  
}

void Robot::TeleopPeriodic() {
  PrintSwerveInfo();

  controllerInterface.UpdateRobotControlData(_robot_control_data);
  _swerve.Drive(_robot_control_data.swerveInput.xTranslation, _robot_control_data.swerveInput.yTranslation, _robot_control_data.swerveInput.rotation);
  elevatorManager.HandleInput(_robot_control_data);
  clawManager.HandleInput(_robot_control_data);  
}

void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() {}

void Robot::TestInit() {
  _swerve.Drive(0.24, 0.0, 0.0);

}

void Robot::TestPeriodic() {
  controllerInterface.UpdateRobotControlData(_robot_control_data);
  _swerve.Drive(_robot_control_data.swerveInput.xTranslation, _robot_control_data.swerveInput.yTranslation, _robot_control_data.swerveInput.rotation);
  elevatorManager.HandleInput(_robot_control_data);
  clawManager.HandleInput(_robot_control_data);  
}

void Robot::SimulationInit() {}

void Robot::SimulationPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif
