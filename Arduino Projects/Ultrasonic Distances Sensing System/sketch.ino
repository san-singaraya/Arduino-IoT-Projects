const int trigPin = 9;
const int echoPin = 10;

void setup(){
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop(){
  // make sure the trigger starts LOW
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send a 10-microsecond pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  //Measure echo time in microseconds
  long duration = pulseIn(echoPin, HIGH);

  //Calculate distance in cm
  float distance = duration * 0.0343 / 2;

  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.print(" cm");

  delay(500);
}