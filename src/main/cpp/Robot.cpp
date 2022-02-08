// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.
#include "Robot.h"
#include <frc/Joystick.h>
#include <ctre/Phoenix.h>

TalonSRX Intake = (2);
frc::Joystick control(0);

void Intake() {
  if (control.GetRawButtonPressed(5)) {
    Intake.Set(ControlMode::PercentOutput, -1.0);
  }
}

void Robot::RobotInit() {}
void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {}
void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {}
void Robot::TeleopPeriodic() {}

void Robot::DisabledInit() {}
void Robot::DisabledPeriodic() {}

void Robot::TestInit() {}
void Robot::TestPeriodic() {
  //Put function call in here. Create seperate function outside
  while(true) {
    intake();
  }
}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif
