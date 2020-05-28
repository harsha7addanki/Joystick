#include <Joystick.h>

const int JOYSTICK_BUTTON_PIN 2
const int JOYSTICK_X A2 
const int JOYSTICK_Y A1 
Joystick myJoystick(JOYSTICK_BUTTON_PIN,JOYSTICK_X,JOYSTICK_Y);

void setup(void){
    Serial.begin(9600);
}

void loop(void){
    int btn = myJoystick.GetBtn();
    int x = myJoystick.GetX();//Get The Left To Right Value
    int y = myJoystyck.GetY();//Get The Up And Down Value
    Serial.print("x: ")
    Serial.println(x);
    Serial.print("y: ")
    Serial.println(y);
    Serial.print("button: ")
    Serial.println(btn);
}