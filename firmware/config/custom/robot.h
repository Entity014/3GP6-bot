#ifndef ROBOT_H
#define ROBOT_H

#define LED_PIN 13

#define SKID_STEER_ROBOT
#define RRR3DOF_ROBOT
#define USE_BNO055_IMU

#define KP_DRIVE 1.0
#define KI_DRIVE 0.1
#define KD_DRIVE 0

#define KP_JOINT1 0.2
#define KI_JOINT1 0.001
#define KD_JOINT1 0

#define KP_JOINT2 4.0
#define KI_JOINT2 0.02
#define KD_JOINT2 0

#define PWM_BITS 10         // PWM Resolution of the microcontroller
#define PWM_FREQUENCY 20000 // PWM Frequency
#define PWM_MAX ((1 << PWM_BITS) - 1)
#define PWM_MIN ((1 << PWM_BITS) - 1) * -1

#define USE_TB6612_DRIVER

#define RPM_RATIO 50.0 / 15.0
#define MOTOR_MAX_RPM 560          // motor's max RPM
#define MAX_RPM_RATIO 1.0          // max RPM allowed for each MAX_RPM_ALLOWED = MOTOR_MAX_RPM * MAX_RPM_RATIO
#define WHEEL_DIAMETER 0.06        // wheel's diameter in meters
#define LR_WHEELS_DISTANCE 0.17881 // distance between left and right wheels

#define JOINT1_LENGTH 0.164
#define JOINT2_LENGTH 0.1457
#define JOINT3_LENGTH 0.1115

#define JOINT1_SENSOR 21
#define JOINT2_SENSOR 22

#define MOTOR1_INV false
#define MOTOR2_INV true
#define MOTOR3_INV false
#define MOTOR4_INV true

#define MOTOR1_ENCODER_INV false
#define MOTOR2_ENCODER_INV true
#define MOTOR3_ENCODER_INV false
#define MOTOR4_ENCODER_INV true

#define COUNTS_PER_REV1 745 // wheel1 direction encoder's no of ticks per rev
#define COUNTS_PER_REV2 745 // wheel2 direction encoder's no of ticks per rev
#define COUNTS_PER_REV3 745 // wheel3 direction encoder's no of ticks per rev
#define COUNTS_PER_REV4 745 // wheel4 direction encoder's no of ticks per rev

#define MOTOR1_PWM 2
#define MOTOR1_IN_A 3
#define MOTOR1_IN_B 4
#define MOTOR1_ENCODER_A 41
#define MOTOR1_ENCODER_B 40

#define MOTOR2_PWM 5
#define MOTOR2_IN_A 6
#define MOTOR2_IN_B 7
#define MOTOR2_ENCODER_A 39
#define MOTOR2_ENCODER_B 38

#define MOTOR3_PWM 8
#define MOTOR3_IN_A 9
#define MOTOR3_IN_B 10
#define MOTOR3_ENCODER_A 37
#define MOTOR3_ENCODER_B 36

#define MOTOR4_PWM 14
#define MOTOR4_IN_A 15
#define MOTOR4_IN_B 16
#define MOTOR4_ENCODER_A 35
#define MOTOR4_ENCODER_B 34

#define TCAADDR 0x70
#define SERVOMIN 125
#define SERVOMAX 575
#define ESCMIN 190
#define ESCMAX 390
#define SERVO_FREQ 60

#endif