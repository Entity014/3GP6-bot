#ifndef KINEMATICS_H
#define KINEMATICS_H

#include "default_kinematics.h"

#ifdef DIFFERENTIAL_DRIVE_ROBOT
#define Kinematics DifferentialDrive
#endif

#ifdef SKID_STEER_ROBOT
#define Kinematics SkidSteer
#endif

#ifdef MECANUM_ROBOT
#define Kinematics Mecanum
#endif

#ifdef SWERVE_4_DRIVE_ROBOT
#define Kinematics Swerve4Drive
#endif

#ifdef SWERVE_2_DRIVE_ROBOT
#define Kinematics Swerve2Drive
#endif

#endif