void setup() //The setup begins here
{ //A program part begins here
pinMode(13, OUTPUT); //Pin 13 is supposed to be an ouput.
} //A program part is ending here.
void loop() //The main part of the program begins here
{ //program part begins here
digitalWrite(13, HIGH); //Turn on the voltage on pin 13 (LED on)
delay(1000); //Wait for 1000 milliseconds (one second)
digitalWrite(13, LOW); //Turn off the voltage on pin 13 (LED off)
delay(1000); //Wait for 1000 milliseconds (one second)
} //Program ends here
