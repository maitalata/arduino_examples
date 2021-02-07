#include <SPI.h> //Include SPI library

#include <MFRC522.h> //Include RFID library

#define SS_PIN 10 //SDA on Pin 10 (different on MEGA)

#define RST_PIN 9 //RST on Pin 9 (different on MEGA)

MFRC522 mfrc522(SS_PIN, RST_PIN); //Name RFID receiver

void setup() //Starting setup
{
  Serial.begin(9600); //Starting serial connection
  SPI.begin(); //set up SPI connection
  mfrc522.PCD_Init(); //Initialize RFID receiver
}

void loop() //Loop part starts here
{
  if (! mfrc522.PICC_IsNewCardPresent()) //If a card is near by...
  {
    return; //move on..
  }
  
  if (! mfrc522.PICC_ReadCardSerial()) //If a RFID tag has been chosen...
  {
    return; //move on...
  }
  
  Serial.print("The ID of the RFID-TAG is:"); // Show “The ID of the RFID-TAG is:"
  //on the serial monitor
  for (byte i = 0; i < mfrc522.uid.size; i++)
  {
    Serial.print(mfrc522.uid.uidByte[i], HEX); //Now the UID, which consists out of
    //four separate blocks is read out and sent to the Serial Monitor one by one.
    //The ending Hex means that the four blocks of the UID output as HEX number
    //( including letters ).
    Serial.print(" "); //The command " Serial.print ( " " ); " ensures that there is
    //a space between the read blocks.
  }
  
  Serial.println(); //This line creates a line break on the serial monitor
}
