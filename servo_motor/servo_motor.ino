#include <Servo.h> //Include the servo library
Servo servoblue; //The servo gets the name “servoblue”
void setup()
{
servoblue.attach(8); //The signal line of the servo is on pin 8
}
void loop()
{
servoblue.write(0); //Position 1 with an angle of 0°
delay(1000); //Wait 3 seconds
servoblue.write(180); //Position 2 with an angle of 90°
delay(1000); //Wait 3 seconds

}
