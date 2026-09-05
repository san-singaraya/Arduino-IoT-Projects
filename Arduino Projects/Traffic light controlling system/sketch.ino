#include <SoftwareSerial.h>

int RED = 6;
int YEL = 4;
int GRE = 3;

void setup(){
  pinMode(RED, OUTPUT);
  pinMode(YEL, OUTPUT);
  pinMode(GRE, OUTPUT);
}

void loop(){
  digitalWrite(RED, HIGH);
  digitalWrite(YEL, LOW);
  digitalWrite(GRE, LOW);
  delay(2000);

  digitalWrite(RED, LOW);
  digitalWrite(YEL, HIGH);
  digitalWrite(GRE, LOW);
  delay(2000);

  digitalWrite(RED, LOW);
  digitalWrite(YEL, LOW);
  digitalWrite(GRE, HIGH);
  delay(2000);
}