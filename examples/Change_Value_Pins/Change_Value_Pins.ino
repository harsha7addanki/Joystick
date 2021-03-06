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
    int x = myJoystick.GetX();
    int y = myJoystyck.GetY();
    Serial.print("x: ")
    Serial.println(x);
    Serial.print("y: ")
    Serial.println(y);
    Serial.print("button: ")
    Serial.println(btn);
    if(myJoystick.ChangeXPin(A2) == false){//ChangeXPin Method Returns False If Value Is Same As Before And Does Not Do Any Thing Else So This Does Not Work
        Serial.println("ALERT: Value must not be The Same As Before")
    }
    if(myJoystick.ChangeXPin(A1) == false){//ChangeYPin Method Returns False If Value Is Same As Before And Does Not Do Any Thing Else So This Does Not Work
        Serial.println("ALERT: Value must not be The Same As Before")
    }
    if(myJoystick.ChangeSwPin(2) == false){//ChangeXPin Method Returns False If Value Is Same As Before And Does Not Do Any Thing Else So This Does Not Work
        Serial.println("ALERT: Value must not be The Same As Before")
    }
}