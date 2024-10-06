#include <Arduino.h>
#include <micro_ros_platformio.h>
#include <stdio.h>

#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <sensor_msgs/msg/imu.h>
#include <nav_msgs/msg/odometry.h>
#include <geometry_msgs/msg/twist.h>

#include "config.h"
#include "motor.h"
#include "kinematics.h"
#include "pid.h"
#include "odometry.h"
#include "imu.h"
#define ENCODER_USE_INTERRUPTS
#define ENCODER_OPTIMIZE_INTERRUPTS
#include "encoder.h"
#include <AS5600.h>
#include <Adafruit_I2CDevice.h>
#include <Adafruit_PWMServoDriver.h>

#define RCCHECK(fn)              \
  {                              \
    rcl_ret_t temp_rc = fn;      \
    if ((temp_rc != RCL_RET_OK)) \
    {                            \
      rclErrorLoop();            \
    }                            \
  }
#define RCSOFTCHECK(fn)          \
  {                              \
    rcl_ret_t temp_rc = fn;      \
    if ((temp_rc != RCL_RET_OK)) \
    {                            \
    }                            \
  }
#define EXECUTE_EVERY_N_MS(MS, X)      \
  do                                   \
  {                                    \
    static volatile int64_t init = -1; \
    if (init == -1)                    \
    {                                  \
      init = uxr_millis();             \
    }                                  \
    if (uxr_millis() - init > MS)      \
    {                                  \
      X;                               \
      init = uxr_millis();             \
    }                                  \
  } while (0)

//------------------------------ < Define > -------------------------------------//

// rcl_publisher_t imu_publisher;
rcl_publisher_t odom_publisher;
rcl_publisher_t debug_pwm_publisher;
rcl_publisher_t debug_encoder_publisher;
rcl_publisher_t debug_heading_publisher;
rcl_publisher_t debug_joint_publisher;
rcl_subscription_t twist_subscriber;
rcl_subscription_t arm_subscriber;

// sensor_msgs__msg__Imu imu_msg;
nav_msgs__msg__Odometry odom_msg;
geometry_msgs__msg__Twist arm_msg;
geometry_msgs__msg__Twist twist_msg;
geometry_msgs__msg__Twist debug_pwm_msg;
geometry_msgs__msg__Twist debug_joint_msg;
geometry_msgs__msg__Twist debug_encoder_msg;
geometry_msgs__msg__Twist debug_heading_msg;

rclc_executor_t executor;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;
rcl_timer_t control_timer;
rcl_init_options_t init_options;

unsigned long long time_offset = 0;
unsigned long prev_cmd_time = 0;
unsigned long prev_odom_update = 0;

enum connection_states
{
  WAITING_AGENT,
  AGENT_AVAILABLE,
  AGENT_CONNECTED,
  AGENT_DISCONNECTED
} connection_state;

enum robot_states
{
  IDLE,
  RUNNING,
} robot_state;

Encoder motor1_encoder(MOTOR1_ENCODER_A, MOTOR1_ENCODER_B, COUNTS_PER_REV1, MOTOR1_ENCODER_INV);
Encoder motor2_encoder(MOTOR2_ENCODER_A, MOTOR2_ENCODER_B, COUNTS_PER_REV2, MOTOR2_ENCODER_INV);
Encoder motor3_encoder(MOTOR3_ENCODER_A, MOTOR3_ENCODER_B, COUNTS_PER_REV3, MOTOR3_ENCODER_INV);
Encoder motor4_encoder(MOTOR4_ENCODER_A, MOTOR4_ENCODER_B, COUNTS_PER_REV4, MOTOR4_ENCODER_INV);

Motor motor1_controller(PWM_FREQUENCY, PWM_BITS, MOTOR1_INV, MOTOR1_PWM, MOTOR1_IN_A, MOTOR1_IN_B);
Motor motor2_controller(PWM_FREQUENCY, PWM_BITS, MOTOR2_INV, MOTOR2_PWM, MOTOR2_IN_A, MOTOR2_IN_B);
Motor motor3_controller(PWM_FREQUENCY, PWM_BITS, MOTOR3_INV, MOTOR3_PWM, MOTOR3_IN_A, MOTOR3_IN_B);
Motor motor4_controller(PWM_FREQUENCY, PWM_BITS, MOTOR4_INV, MOTOR4_PWM, MOTOR4_IN_A, MOTOR4_IN_B);

PID motor1_pid(PWM_MIN, PWM_MAX, KP_DRIVE, KI_DRIVE, KD_DRIVE);
PID motor2_pid(PWM_MIN, PWM_MAX, KP_STEERING, KI_STEERING, KD_STEERING);
PID motor3_pid(PWM_MIN, PWM_MAX, KP_DRIVE, KI_DRIVE, KD_DRIVE);
PID motor4_pid(PWM_MIN, PWM_MAX, KP_STEERING, KI_STEERING, KD_STEERING);

PID joint2_pid(-90.0, 90.0, KP_JOINT2, KI_JOINT2, KD_JOINT2);

Kinematics kinematics(
    Kinematics::SWERVE2,
    MOTOR_MAX_RPM,
    MAX_RPM_RATIO,
    RPM_RATIO,
    WHEEL_DIAMETER,
    LR_WHEELS_DISTANCE);

Odometry odometry;
// IMU imu;

AS5600 joint_1;
AS5600 joint_2;
AS5600 joint_3;
Adafruit_PWMServoDriver servo_array = Adafruit_PWMServoDriver();

bool hall_array[2] = {false, false};
double joint_array[3] = {0.0, 0.0, 0.0};
double joint_command[6] = {90.0, 173.0, 90.0, 90.0, 90.0, 180.0};
Kinematics::heading offset_heading;
Kinematics::heading total_heading;

//------------------------------ < Fuction Prototype > ------------------------------//

void moveServo(int num, int degree);
void setHome();
void setHomeArm();
void flashLED(int n_times);
void rclErrorLoop();
void syncTime();
void moveArm();
void moveBase();
void readSensor();
void publishData();
bool createEntities();
bool destroyEntities();
void tcaSelect(uint8_t i);
struct timespec getTime();

//------------------------------ < Main > -------------------------------------//

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(HALL_SENSOR1, INPUT);
  pinMode(HALL_SENSOR2, INPUT);

  // bool imu_ok = imu.init();
  // if (!imu_ok)
  // {
  //     while (1)
  //     {
  //         flashLED(3);
  //     }
  // }

  Wire.begin();
  tcaSelect(0);
  servo_array.begin();
  servo_array.setOscillatorFrequency(27000000);
  servo_array.setPWMFreq(SERVO_FREQ);

  tcaSelect(1);
  joint_1.isConnected();
  tcaSelect(2);
  joint_2.isConnected();

  Serial.begin(115200);
  set_microros_serial_transports(Serial);
}

void loop()
{
  switch (connection_state)
  {
  case WAITING_AGENT:
    EXECUTE_EVERY_N_MS(500, connection_state = (RMW_RET_OK == rmw_uros_ping_agent(100, 1)) ? AGENT_AVAILABLE : WAITING_AGENT;);
    break;
  case AGENT_AVAILABLE:
    connection_state = (true == createEntities()) ? AGENT_CONNECTED : WAITING_AGENT;
    if (connection_state == WAITING_AGENT)
    {
      destroyEntities();
    }
    break;
  case AGENT_CONNECTED:
    EXECUTE_EVERY_N_MS(200, connection_state = (RMW_RET_OK == rmw_uros_ping_agent(100, 1)) ? AGENT_CONNECTED : AGENT_DISCONNECTED;);
    if (connection_state == AGENT_CONNECTED)
    {
      rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
    }
    break;
  case AGENT_DISCONNECTED:
    destroyEntities();
    connection_state = WAITING_AGENT;
    break;
  default:
    break;
  }
}

//------------------------------ < Fuction > -------------------------------------//

void controlCallback(rcl_timer_t *timer, int64_t last_call_time)
{
  RCLC_UNUSED(last_call_time);
  if (timer != NULL)
  {
    readSensor();
    moveBase();
    moveArm();
    publishData();
  }
}

void twistCallback(const void *msgin)
{
  digitalWrite(LED_PIN, !digitalRead(LED_PIN));

  if (twist_msg.linear.x != 0 || twist_msg.linear.y != 0 || twist_msg.angular.z != 0)
  {
    robot_state = RUNNING;
    prev_cmd_time = millis();
  }
}

void armCallback(const void *msgin)
{
  joint_command[0] = arm_msg.linear.x;
  joint_command[1] = arm_msg.linear.y;
  joint_command[2] = arm_msg.linear.z;
  joint_command[3] = arm_msg.angular.x;
  joint_command[4] = arm_msg.angular.y;
  joint_command[5] = arm_msg.angular.z;
}

bool createEntities()
{
  allocator = rcl_get_default_allocator();

  init_options = rcl_get_zero_initialized_init_options();
  rcl_init_options_init(&init_options, allocator);
  rcl_init_options_set_domain_id(&init_options, 10);

  rclc_support_init_with_options(&support, 0, NULL, &init_options, &allocator);

  // create node
  RCCHECK(rclc_node_init_default(&node, "drive_teensy", "", &support));
  // create odometry publisher
  RCCHECK(rclc_publisher_init_default(
      &odom_publisher,
      &node,
      ROSIDL_GET_MSG_TYPE_SUPPORT(nav_msgs, msg, Odometry),
      "odom/unfiltered"));

  RCCHECK(rclc_publisher_init_default(
      &debug_pwm_publisher,
      &node,
      ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist),
      "debug/pwm"));
  RCCHECK(rclc_publisher_init_default(
      &debug_encoder_publisher,
      &node,
      ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist),
      "debug/encoder"));
  RCCHECK(rclc_publisher_init_default(
      &debug_heading_publisher,
      &node,
      ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist),
      "debug/heading"));
  RCCHECK(rclc_publisher_init_default(
      &debug_joint_publisher,
      &node,
      ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist),
      "debug/joint"));
  // create IMU publisher
  // RCCHECK(rclc_publisher_init_default(
  //     &imu_publisher,
  //     &node,
  //     ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Imu),
  //     "imu/data"));

  // create twist command subscriber
  RCCHECK(rclc_subscription_init_default(
      &twist_subscriber,
      &node,
      ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist),
      "cmd_vel"));

  RCCHECK(rclc_subscription_init_default(
      &arm_subscriber,
      &node,
      ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist),
      "arm"));

  // create timer for actuating the motors at 50 Hz (1000/20)
  const unsigned int control_timeout = 20;
  RCCHECK(rclc_timer_init_default(
      &control_timer,
      &support,
      RCL_MS_TO_NS(control_timeout),
      controlCallback));
  executor = rclc_executor_get_zero_initialized_executor();
  RCCHECK(rclc_executor_init(&executor, &support.context, 3, &allocator));
  RCCHECK(rclc_executor_add_subscription(
      &executor,
      &twist_subscriber,
      &twist_msg,
      &twistCallback,
      ON_NEW_DATA));
  RCCHECK(rclc_executor_add_subscription(
      &executor,
      &arm_subscriber,
      &arm_msg,
      &armCallback,
      ON_NEW_DATA));
  RCCHECK(rclc_executor_add_timer(&executor, &control_timer));

  // synchronize time with the agent
  syncTime();
  digitalWrite(LED_PIN, HIGH);

  return true;
}

bool destroyEntities()
{
  rmw_context_t *rmw_context = rcl_context_get_rmw_context(&support.context);
  (void)rmw_uros_set_context_entity_destroy_session_timeout(rmw_context, 0);

  tcaSelect(0);
  moveServo(0, 90);
  moveServo(1, 90);

  rcl_publisher_fini(&debug_pwm_publisher, &node);
  rcl_publisher_fini(&debug_encoder_publisher, &node);
  rcl_publisher_fini(&debug_heading_publisher, &node);
  rcl_publisher_fini(&debug_joint_publisher, &node);
  rcl_publisher_fini(&odom_publisher, &node);
  // rcl_publisher_fini(&imu_publisher, &node);
  rcl_subscription_fini(&twist_subscriber, &node);
  rcl_subscription_fini(&arm_subscriber, &node);
  rcl_node_fini(&node);
  rcl_timer_fini(&control_timer);
  rclc_executor_fini(&executor);
  rclc_support_fini(&support);

  digitalWrite(LED_PIN, HIGH);

  return true;
}

void readSensor()
{
  tcaSelect(1);
  joint_array[0] = round(joint_1.rawAngle() * AS5600_RAW_TO_DEGREES);
  debug_joint_msg.linear.x = joint_array[0];
  tcaSelect(2);
  joint_array[1] = round(joint_2.rawAngle() * AS5600_RAW_TO_DEGREES);
  debug_joint_msg.linear.y = joint_array[1];
}

void moveArm()
{
  tcaSelect(0);
  moveServo(0, joint_command[0]);
  // if ((joint_command[1] - joint_array[1] >= 1) || (joint_command[1] - joint_array[1] <= -1))
  // {
  //   moveServo(1, 90.0 + map(joint2_pid.compute(joint_command[1], joint_array[1]), -90, 90, 90, -90));
  // }
  // else
  // {
  //   moveServo(1, 90);
  // }
  moveServo(1, joint_command[1]);
  moveServo(2, joint_command[2]);
  moveServo(3, joint_command[3]);
  moveServo(4, joint_command[4]);
  moveServo(5, joint_command[5]);
}

void moveBase()
{
  if (((millis() - prev_cmd_time) >= 500))
  {
    hall_array[0] = false;
    hall_array[1] = false;
    robot_state = IDLE;
    digitalWrite(LED_PIN, HIGH);
  }

  Kinematics::rpm req_rpm = kinematics.getRPM(
      twist_msg.linear.x,
      twist_msg.linear.y,
      twist_msg.angular.z);

  Kinematics::heading req_heading = kinematics.getHeading(
      twist_msg.linear.x,
      twist_msg.linear.y,
      twist_msg.angular.z);

  float current_rpm1 = motor1_encoder.getRPM();
  float current_rpm2 = motor3_encoder.getRPM();
  Kinematics::heading current_heading;
  current_heading.motor1 = motor2_encoder.read();
  current_heading.motor2 = motor4_encoder.read();

  debug_heading_msg.linear.x = int(req_heading.motor1 * RAD_TO_DEG);
  debug_heading_msg.linear.y = int(req_heading.motor2 * RAD_TO_DEG);
  debug_heading_msg.linear.z = millis();
  debug_heading_msg.angular.x = current_heading.motor1;
  debug_heading_msg.angular.y = current_heading.motor2;
  debug_heading_msg.angular.z = prev_cmd_time;

  req_heading.motor1 = (req_heading.motor1 * RAD_TO_DEG) * (2100 / 90);
  req_heading.motor2 = (req_heading.motor2 * RAD_TO_DEG) * (2100 / 90);

  debug_encoder_msg.linear.x = req_rpm.motor1;
  debug_encoder_msg.linear.y = req_rpm.motor2;
  debug_encoder_msg.angular.x = current_rpm1;
  debug_encoder_msg.angular.y = current_rpm2;

  debug_pwm_msg.linear.x = motor1_pid.compute(req_rpm.motor1, current_rpm1);
  debug_pwm_msg.linear.y = motor3_pid.compute(req_rpm.motor2, current_rpm2);
  debug_pwm_msg.angular.x = motor2_pid.compute(req_heading.motor1, current_heading.motor1);
  debug_pwm_msg.angular.y = motor4_pid.compute(req_heading.motor2, current_heading.motor2);

  if (robot_state != IDLE)
  {
    motor1_controller.spin(motor1_pid.compute(req_rpm.motor1, current_rpm1));
    motor3_controller.spin(motor3_pid.compute(req_rpm.motor2, current_rpm2));
    if ((req_heading.motor1 - current_heading.motor1 > 3) || (req_heading.motor1 - current_heading.motor1 < -3))
    {
      motor2_controller.spin(motor2_pid.compute(req_heading.motor1, current_heading.motor1));
    }
    else
    {
      motor2_controller.spin(0);
    }

    if ((req_heading.motor2 - current_heading.motor2 > 3) || (req_heading.motor2 - current_heading.motor2 < -3))
    {
      motor4_controller.spin(motor2_pid.compute(req_heading.motor2, current_heading.motor2));
    }
    else
    {
      motor4_controller.spin(0);
    }
  }
  else
  {
    setHome();
  }
  // Kinematics::velocities current_vel = kinematics.getVelocities(
  //     current_heading,
  //     current_rpm1,
  //     current_rpm2);

  unsigned long now = millis();
  float vel_dt = (now - prev_odom_update) / 1000.0;
  prev_odom_update = now;
  // odometry.update(
  //     vel_dt,
  //     current_vel.linear_x,
  //     current_vel.linear_y,
  //     current_vel.angular_z);
}

void publishData()
{
  odom_msg = odometry.getData();
  // imu_msg = imu.getData();

  struct timespec time_stamp = getTime();

  odom_msg.header.stamp.sec = time_stamp.tv_sec;
  odom_msg.header.stamp.nanosec = time_stamp.tv_nsec;

  // imu_msg.header.stamp.sec = time_stamp.tv_sec;
  // imu_msg.header.stamp.nanosec = time_stamp.tv_nsec;

  // RCSOFTCHECK(rcl_publish(&imu_publisher, &imu_msg, NULL));
  RCSOFTCHECK(rcl_publish(&odom_publisher, &odom_msg, NULL));
  RCSOFTCHECK(rcl_publish(&debug_pwm_publisher, &debug_pwm_msg, NULL));
  RCSOFTCHECK(rcl_publish(&debug_joint_publisher, &debug_joint_msg, NULL));
  RCSOFTCHECK(rcl_publish(&debug_encoder_publisher, &debug_encoder_msg, NULL));
  RCSOFTCHECK(rcl_publish(&debug_heading_publisher, &debug_heading_msg, NULL));
}

void syncTime()
{
  // get the current time from the agent
  unsigned long now = millis();
  RCCHECK(rmw_uros_sync_session(10));
  unsigned long long ros_time_ms = rmw_uros_epoch_millis();
  // now we can find the difference between ROS time and uC time
  time_offset = ros_time_ms - now;
}

struct timespec getTime()
{
  struct timespec tp = {0};
  // add time difference between uC time and ROS time to
  // synchronize time with ROS
  unsigned long long now = millis() + time_offset;
  tp.tv_sec = now / 1000;
  tp.tv_nsec = (now % 1000) * 1000000;

  return tp;
}

void rclErrorLoop()
{
  while (true)
  {
    flashLED(2);
  }
}

void tcaSelect(uint8_t i)
{
  if (i > 7)
    return;

  Wire.beginTransmission(TCAADDR);
  Wire.write(1 << i);
  Wire.endTransmission();
}

void flashLED(int n_times)
{
  for (int i = 0; i < n_times; i++)
  {
    digitalWrite(LED_PIN, HIGH);
    delay(150);
    digitalWrite(LED_PIN, LOW);
    delay(150);
  }
  delay(1000);
}

void setHome()
{
  motor1_controller.spin(0);
  motor3_controller.spin(0);
  if (digitalRead(HALL_SENSOR1))
  {
    motor2_controller.spin(512);
  }
  else
  {
    hall_array[0] = true;
    motor2_controller.spin(0);
    motor2_encoder.readAndReset();
  }
  if (digitalRead(HALL_SENSOR2))
  {
    motor4_controller.spin(512);
  }
  else
  {
    hall_array[1] = true;
    motor4_controller.spin(0);
    motor4_encoder.readAndReset();
  }
}

void moveServo(int num, int degree)
{
  servo_array.setPWM(num, 0, map(degree, 0, 180, SERVOMIN, SERVOMAX));
}