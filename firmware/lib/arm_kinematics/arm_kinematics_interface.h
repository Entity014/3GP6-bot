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

#ifndef ARM_KINEMATICS_INTERFACE_H
#define ARM_KINEMATICS_INTERFACE_H

#define RPM_TO_RPS 1 / 60

class Arm_Kinematics
{
public:
    struct length
    {
        float joint1_length;
        float joint2_length;
        float joint3_length;
    };

    struct angle
    {
        float joint1;
        float joint2;
        float joint3;
    };

    struct position
    {
        float pos_x;
        float pos_y;
        float angle;
    };

    Arm_Kinematics(float joint1_length, float joint2_length, float joint3_length);
    virtual position getPosition(angle req_angle);
    virtual angle getAngle(position req_pos);

protected:
    virtual angle calculateAngle(position req_pos);
    virtual position calculatePosition(angle req_angle);
    virtual bool Arm_Kinematics::isWithinWorkspace(float x, float y);
    length joint_length_;
};

#endif