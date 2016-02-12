#ifndef Motors_Control_h
#define Motors_Control_h
#include "Arduino.h"

class Motors_Control
{
public:
    Motors_Control(int pin, int pin2, int pin3, int pin4);
    void FORWARD(int speed);
    void BACKWARD(int speed);
    void LEFT(int speed);
    void RIGHT(int speed);
    void STOP();
private:
    int _pin;
    int _pin2;
    int _pin3;
    int _pin4;
    int _speed;
};
#endif
