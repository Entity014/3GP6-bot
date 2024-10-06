#ifndef AS5600_ANALOG_H
#define AS5600_ANALOG_H

#include <Arduino.h>
#include <AS5600.h>

class AS5600_Encoder
{
private:
    int invert_;
    int analog_pin_;
    int32_t position_ = 0;
    int16_t lastPosition_ = 0;

public:
    AS5600_Encoder(int analog_pin, int invert) : analog_pin_(analog_pin), invert_(invert)
    {
        pinMode(analog_pin_, INPUT);
        analogReadResolution(12);
    }

    int16_t getRaw()
    {
        return (invert_) ? map(analogRead(analog_pin_), 0, (1 << 12), (1 << 12), 0) : analogRead(analog_pin_);
    };

    float getData()
    {
        return getRaw() * AS5600_RAW_TO_DEGREES;
    };

    int32_t getCumulativePosition()
    {
        int16_t value = getRaw();

        if ((lastPosition_ > 2048) && (value < (lastPosition_ - 2048)))
        {
            position_ = position_ + 4096 - lastPosition_ + value;
        }
        else if ((value > 2048) && (lastPosition_ < (value - 2048)))
        {
            position_ = position_ - 4096 - lastPosition_ + value;
        }
        else
            position_ = position_ - lastPosition_ + value;
        lastPosition_ = value;

        return position_ * AS5600_RAW_TO_DEGREES;
    }
};

#endif