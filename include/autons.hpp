#pragma once

#include "EZ-Template/drive/drive.hpp"

extern Drive chassis;
extern pros::MotorGroup catapult;
extern pros::MotorGroup wings;
extern pros::Motor intake;
extern pros::ADIDigitalIn catapultLimitSwitch;
extern pros::ADIDigitalOut matchLoadArm;
extern bool wingsOut;

void drive_example();
void turn_example();
void drive_and_turn();
void wait_until_change_speed();
void swing_example();
void combining_movements();
void interfered_example();

void default_constants();

void launch();
void setWings();
void skills();