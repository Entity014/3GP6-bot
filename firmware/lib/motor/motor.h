#ifndef MOTOR_H
#define MOTOR_H

#include "default_motor.h"

#ifdef USE_TB6612_DRIVER
#define Motor TB6612
#endif
#ifdef USE_BTS7960_DRIVER
#define Motor BTS7960
#endif

#endif