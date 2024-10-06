#ifndef IMU_BNO055_H
#define IMU_BNO055_H

#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>
#include <sensor_msgs/msg/imu.h>

class BNO055IMU
{
protected:
    sensor_msgs__msg__Imu imu_msg_;
    const float g_to_accel_ = 9.81;
    const float mgauss_to_utesla_ = 0.1;
    const float utesla_to_tesla_ = 0.000001;

    float accel_cov_ = 0.00001;
    float gyro_cov_ = 0.00001;

    geometry_msgs__msg__Vector3 accel_;
    geometry_msgs__msg__Quaternion ori_;

    Adafruit_BNO055 bno055 = Adafruit_BNO055(55);

public:
    BNO055IMU()
    {
        imu_msg_.header.frame_id = micro_ros_string_utilities_set(imu_msg_.header.frame_id, "imu_link");
    }

    geometry_msgs__msg__Vector3 readAccelerometer()
    {
        imu::Vector<3> accel = bno055.getVector(Adafruit_BNO055::VECTOR_ACCELEROMETER);
        accel_.x = accel.x();
        accel_.y = accel.y();
        accel_.z = accel.z();

        return accel_;
    }

    geometry_msgs__msg__Quaternion readOrientation()
    {
        imu::Quaternion quat = bno055.getQuat();
        ori_.x = quat.x();
        ori_.y = quat.y();
        ori_.z = quat.z();
        ori_.w = quat.w();
    }

    bool startSensor()
    {
        Wire.begin();

        bool ret;
        ret = bno055.begin();
        bno055.setExtCrystalUse(true);

        if (!ret)
            return false;

        return true;
    }

    bool init()
    {
        bool sensor_ok = startSensor();

        return sensor_ok;
    }

    sensor_msgs__msg__Imu getData()
    {
        imu_msg_.orientation = readOrientation();

        imu_msg_.angular_velocity_covariance[0] = gyro_cov_;
        imu_msg_.angular_velocity_covariance[4] = gyro_cov_;
        imu_msg_.angular_velocity_covariance[8] = gyro_cov_;

        imu_msg_.linear_acceleration = readAccelerometer();
        imu_msg_.linear_acceleration_covariance[0] = accel_cov_;
        imu_msg_.linear_acceleration_covariance[4] = accel_cov_;
        imu_msg_.linear_acceleration_covariance[8] = accel_cov_;

        return imu_msg_;
    }
};

#endif
