#ifndef ARM_DEFAULT_KINEMATIC_H
#define ARM_DEFAULT_KINEMATIC_H

#include "arm_kinematics_interface.h"

class RRR3DOF : public Arm_Kinematics
{
public:
    RRR3DOF(float joint1_length, float joint2_length, float joint3_length)
        : Arm_Kinematics(joint1_length, joint2_length, joint3_length) {};
};

#endif