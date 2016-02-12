#include "Arduino.h"
#include "Motors_Control.h"

Motors_Control::Motors_Control(int pin, int pin2, int pin3, int pin4)
{
    pinMode(pin, OUTPUT);
    pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
    pinMode(pin4, OUTPUT);
    _pin = pin;
    _pin2 = pin2;
    _pin3 = pin3;
    _pin4 = pin4;    
}
void Motors_Control::FORWARD(int speed)
{
    _speed = speed;
    analogWrite(_pin, 0);
    analogWrite(_pin2, _speed);
    analogWrite(_pin3, _speed);
    analogWrite(_pin4, 0);
}
void Motors_Control::BACKWARD(int speed)
{
    _speed = speed;
    analogWrite(_pin, _speed);
    analogWrite(_pin2, 0);
    analogWrite(_pin3, 0);
    analogWrite(_pin4, _speed);
}
void Motors_Control::STOP()
{
    analogWrite(_pin, 0);
    analogWrite(_pin2, 0);
    analogWrite(_pin3, 0);
    analogWrite(_pin4, 0);
}
void Motors_Control::LEFT(int speed)
{
    _speed = speed;
    analogWrite(_pin, 0);
    analogWrite(_pin2, _speed);
    analogWrite(_pin3, 0);
    analogWrite(_pin4, _speed);
}
void Motors_Control::RIGHT(int speed)
{
    _speed = speed;
    analogWrite(_pin, _speed);
    analogWrite(_pin2, 0);
    analogWrite(_pin3, _speed);
    analogWrite(_pin4, 0);
}
