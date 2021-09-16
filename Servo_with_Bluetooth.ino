//.................JEHANKANDY.................
//........Bluetooth Servo Connected Project...

#include <Servo.h>

Servo Jehan;
char val;
void setup() {
  pinMode(6,OUTPUT);
  Jehan.attach(4);
  Serial.begin(9600); 
}

void loop() {
  if(Serial.available()){
    val=Serial.read();
    Serial.println(val);
    }
  if(val=='1'){
    digitalWrite(6,HIGH);
    Jehan.write(90);
  }
  else{
    digitalWrite(6,LOW);
    Jehan.write(0);
  }
}

//...........coded by : Jehankandy.........................
//............thank you...................................
