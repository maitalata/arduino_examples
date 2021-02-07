#include <Stepper.h> //Load stepper library (already including the arduinosoftware)
int SPMU = 32;
Stepper myStepper(SPMU, 2,3,4,5);
void setup()
{
myStepper.setSpeed(400);
}
void loop() {
myStepper.step(2048);
delay(500);
myStepper.step(-2048);
delay(500);
}
