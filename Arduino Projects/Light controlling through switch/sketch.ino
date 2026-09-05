#include <SoftwareSerial.h>

int SW = 2;
int LED = 3;

void setup(){
  pinMode(SW, INPUT);
  pinMode(LED, OUTPUT);
}

void loop(){
  if(digitalRead(2==HIGH)){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED, LOW);
  }
}