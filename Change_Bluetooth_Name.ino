#include <SoftwareSerial.h>
#define key 9
SoftwareSerial BT(10, 11);//RX, TX

void setup() {
  pinMode(key, OUTPUT);

  digitalWrite(key, HIGH);
  Serial.begin(9600);
  Serial.println("Enter AT Command: ");
  BT.begin(38400); 
}

void loop() {
  if(BT.available()){
    Serial.write(BT.read());
  }

  if(Serial.available()){
    BT.write(Serial.read());
    
  }
}
