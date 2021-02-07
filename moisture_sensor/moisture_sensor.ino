int measurement=0;
int beep=6; //”beep” stands for the pin 6, which gets connected with the piezo
void setup()
{
Serial.begin(9600);
pinMode (6,OUTPUT); //The pin 6 gets defined as an output
}
void loop()
{
measurement=analogRead(A0);
Serial.print("Moisture measurement:");
Serial.println(measurement);
delay(500);
if (measurement > 500) //Starting IF command: If the sensor value gets higher
//than “400”...
{
 digitalWrite(beep, LOW); //...the piezo should beep...
}
else //..if not...
{
digitalWrite(beep, HIGH); //...the piezo should be quiet
} }
