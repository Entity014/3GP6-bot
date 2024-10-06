#ifndef ROBOT_H
#define ROBOT_H

#define LED_PIN 13

#define SWERVE_2_DRIVE_ROBOT
#define USE_BNO055_IMU

#define KP_DRIVE 0.2
#define KI_DRIVE 0.03
#define KD_DRIVE 0

#define KP_STEERING 0.4
#define KI_STEERING 0.005
#define KD_STEERING 0

#define KP_JOINT2 3
#define KI_JOINT2 0.05
#define KD_JOINT2 0.001

#define PWM_BITS 10         // PWM Resolution of the microcontroller
#define PWM_FREQUENCY 20000 // PWM Frequency
#define PWM_MAX ((1 << PWM_BITS) - 1)
#define PWM_MIN ((1 << PWM_BITS) - 1) * -1

#define USE_TB6612_DRIVER

#define RPM_RATIO 6
#define MOTOR_MAX_RPM 560        // motor's max RPM
#define MAX_RPM_RATIO 2.0        // max RPM allowed for each MAX_RPM_ALLOWED = MOTOR_MAX_RPM * MAX_RPM_RATIO
#define WHEEL_DIAMETER 0.06      // wheel's diameter in meters
#define LR_WHEELS_DISTANCE 0.068 // distance between left and right wheels

#define MOTOR1_INV false
#define MOTOR2_INV true
#define MOTOR3_INV true
#define MOTOR4_INV true

#define MOTOR1_ENCODER_INV false
#define MOTOR2_ENCODER_INV true
#define MOTOR3_ENCODER_INV true
#define MOTOR4_ENCODER_INV true

#define COUNTS_PER_REV1 400  // wheel1 direction encoder's no of ticks per rev
#define COUNTS_PER_REV2 1600 // wheel2 direction encoder's no of ticks per rev
#define COUNTS_PER_REV3 400  // wheel3 direction encoder's no of ticks per rev
#define COUNTS_PER_REV4 1600 // wheel4 direction encoder's no of ticks per rev

#define MOTOR1_PWM 2
#define MOTOR1_IN_A 3
#define MOTOR1_IN_B 4
#define MOTOR1_ENCODER_A 27
#define MOTOR1_ENCODER_B 28

#define MOTOR2_PWM 5
#define MOTOR2_IN_A 6
#define MOTOR2_IN_B 7
#define MOTOR2_ENCODER_A 29
#define MOTOR2_ENCODER_B 30

#define MOTOR3_PWM 8
#define MOTOR3_IN_A 9
#define MOTOR3_IN_B 10
#define MOTOR3_ENCODER_A 31
#define MOTOR3_ENCODER_B 32

#define MOTOR4_PWM 11
#define MOTOR4_IN_A 12
#define MOTOR4_IN_B 14
#define MOTOR4_ENCODER_A 33
#define MOTOR4_ENCODER_B 34

#define HALL_SENSOR1 26
#define HALL_SENSOR2 25

#define TCAADDR 0x70
#define SERVOMIN 125
#define SERVOMAX 575
#define SERVO_FREQ 60

#endif