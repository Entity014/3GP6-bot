#include <Wire.h>
#include <Arduino.h>
#include <Adafruit_I2CDevice.h>
#include <Adafruit_PWMServoDriver.h>

#define SERVOMIN 125  // This is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX 575  // This is the 'maximum' pulse length count (out of 4096)
#define SERVO_FREQ 60 // Analog servos run at ~50 Hz updates

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

void TCA9548A(uint8_t bus)
{
  Wire.beginTransmission(0x70); // TCA9548A address is 0x70
  Wire.write(1 << bus);         // send byte to select bus
  Wire.endTransmission();
  // Serial.print(bus);
}

void setup()
{
  Wire.begin();
  Serial.begin(115200);

  TCA9548A(0);
  pwm.begin();
  pwm.setOscillatorFrequency(27000000);
  pwm.setPWMFreq(SERVO_FREQ); // Analog servos run at ~50 Hz updates
}

void loop()
{
  TCA9548A(0);
  pwm.setPWM(0, 0, map(180, 0, 180, SERVOMIN, SERVOMAX));
}