// Copyright (c) 2021 Juan Miguel Jimeno
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "Arduino.h"
#include "arm_kinematics_interface.h"

Arm_Kinematics::Arm_Kinematics(float joint1_length, float joint2_length, float joint3_length)
{
    joint_length_.joint1_length = joint1_length;
    joint_length_.joint2_length = joint2_length;
    joint_length_.joint3_length = joint3_length;
}

bool Arm_Kinematics::isWithinWorkspace(float x, float y)
{
    // max : 0.4212 , min : 0.0932
    float r = sqrt(pow(x, 2) + pow(y, 2));
    float R_min = abs(joint_length_.joint1_length - joint_length_.joint2_length - joint_length_.joint3_length);
    float R_max = joint_length_.joint1_length + joint_length_.joint2_length + joint_length_.joint3_length;

    return (r >= R_min) && (r <= R_max);
}

Arm_Kinematics::angle Arm_Kinematics::calculateAngle(Arm_Kinematics::position req_pos)
{
    Arm_Kinematics::angle cal_angle;
    float xw, yw;
    float theta1, theta2, theta3, alpha, beta, gamma;

    if (!isWithinWorkspace(req_pos.pos_x, req_pos.pos_y))
    {
        return;
    }

    xw = req_pos.pos_x - joint_length_.joint3_length * cos(req_pos.angle);
    yw = req_pos.pos_y - joint_length_.joint3_length * sin(req_pos.angle);

    alpha = atan2(yw, xw);
    beta = acos((pow(joint_length_.joint1_length, 2) + pow(joint_length_.joint2_length, 2) - pow(xw, 2) - pow(yw, 2)) / (2 * joint_length_.joint1_length * joint_length_.joint2_length));
    gamma = acos((pow(xw, 2) + pow(yw, 2) + pow(joint_length_.joint1_length, 2) - pow(joint_length_.joint2_length, 2)) / (2 * joint_length_.joint1_length * sqrt(pow(xw, 2) + pow(yw, 2))));

    theta1 = alpha - gamma;
    theta2 = PI - beta;
    theta3 = req_pos.angle - cal_angle.joint1 - cal_angle.joint2;
    cal_angle.joint1 = theta1 + (2 * gamma);
    cal_angle.joint2 = -theta2;
    cal_angle.joint3 = theta3 + (2 * theta2) - (2 * gamma);

    return cal_angle;
}

Arm_Kinematics::position Arm_Kinematics::calculatePosition(Arm_Kinematics::angle req_angle)
{
    Arm_Kinematics::position cal_pos;
    cal_pos.pos_x = joint_length_.joint1_length * cos(req_angle.joint1) + joint_length_.joint2_length * cos(req_angle.joint1 + req_angle.joint2) + joint_length_.joint3_length * cos(req_angle.joint1 + req_angle.joint2 + req_angle.joint3);
    cal_pos.pos_y = joint_length_.joint1_length * sin(req_angle.joint1) + joint_length_.joint2_length * sin(req_angle.joint1 + req_angle.joint2) + joint_length_.joint3_length * sin(req_angle.joint1 + req_angle.joint2 + req_angle.joint3);
    cal_pos.angle = (req_angle.joint1 + req_angle.joint2 + req_angle.joint3) * RAD_TO_DEG;
    return cal_pos;
}

Arm_Kinematics::angle Arm_Kinematics::getAngle(Arm_Kinematics::position req_pos)
{
    return calculateAngle(req_pos);
}

Arm_Kinematics::position Arm_Kinematics::getPosition(Arm_Kinematics::angle req_angle)
{
    return calculatePosition(req_angle);
}
