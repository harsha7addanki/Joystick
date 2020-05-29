#ifndef Joystick_h
#define Joystick_h
#include "Arduino.h"
class Joystick
{
    private:
        int SW;
        int VRx;
        int VRy;
    public:
        Joystick::Joystick(int SW2,int VRx2,int VRy2);
        int Joystick::GetX();
        int Joystick::GetY();
        int Joystick::GetBtn();
        bool Joystick::ChangeXPin(int NewXPin);
        bool Joystick::ChangeYPin(int NewYPin);
        bool Joystick::ChangeSwPin(int NewSwPin);
}
#endif