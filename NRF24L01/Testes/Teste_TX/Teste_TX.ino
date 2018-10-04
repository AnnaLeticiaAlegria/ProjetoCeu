#include <SPI.h>
#include <RF24.h>

RF24 radio(7,8);
const byte address[6] = "00001";
int i = 0;

void setup() {
      // put your setup code here, to run once:
      Serial.begin(9600);

      radio.begin();

      radio.openWritingPipe(address);
      radio.setPALevel(RF24_PA_HIGH);
      radio.stopListening();
}

void loop() {
      // put your main code here, to run repeatedly:
      int message[1];
      
      message[0] = i;
      i = i+1;

      Serial.println("Transmitted");
      radio.write(&message,sizeof(message));
      delay(10);  
}
