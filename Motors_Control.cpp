#include "Arduino.h"
#include "Motors_Control.h"

Motors_Control::Motors_Control(int pin, int pin2, int pin3, int pin4)
{
    pinMode(pin, OUTPUT);
    pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
    pinMode(pin4, OUTPUT);
}
void Motors_Control::FORWARD(int speed)
{
    analogWrite(pin, 0);
    analogWrite(pin2, speed);
    analogWrite(pin3, speed);
    analogWrite(pin4, 0);
}
void Motors_Control::BACKWARD(int speed)
{
	
    analogWrite(pin, speed);
    analogWrite(pin2, 0);
    analogWrite(pin3, 0);
    analogWrite(pin4, speed);
}
void Motors_Control::STOP()
{
    analogWrite(pin, 0);
    analogWrite(pin2, 0);
    analogWrite(pin3, 0);
    analogWrite(pin4, 0);
}
void Motors_Control::LEFT(int speed)
{
    analogWrite(pin, 0);
    analogWrite(pin2, speed);
    analogWrite(pin3, 0);
    analogWrite(pin4, speed);
}
void Motors_Control::RIGHT(int speed)
{
    analogWrite(pin, speed);
    analogWrite(pin2, 0);
    analogWrite(pin3, speed);
    analogWrite(pin4, 0);
}
