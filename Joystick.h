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
        int GetX();
        int GetY();
        int GetBtn();
        bool ChangeXPin(int NewXPin);
        bool ChangeYPin(int NewYPin);
        bool ChangeSwPin(int NewSwPin);
#endif