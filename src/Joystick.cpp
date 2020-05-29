#include "Joystick.h"

Joystick::Joystick(int SW2,int VRx2,int VRy2){
    this->SW = SW2;
    this->VRx = VRx2;
    this->VRy = VRy2;
}

int Joystick::GetX(){
    return analogRead(this->VRx);
}

int Joystick::GetY(){
    return analogRead(this->VRy);
}

int Joystick::GetBtn(){
    return digitalRead(this->SW);
}

bool Joystick::ChangeXPin(int NewXPin){
    if(this->VRx != NewXPin){
        this->VRx = NewXPin;
        return true;
    }else{
        return false;
    }
}

bool Joystick::ChangeYPin(int NewYPin){
    if(this->VRy != NewYPin){
        this->VRy = NewYPin;
        return true;
    }else{
        return false;
    }
}

bool Joystick::ChangeSwPin(int NewSwPin){
    if(this->SW != NewSwPin){
        this->SW = NewSwPin;
        return true;
    }else{
        return false;
    }
}