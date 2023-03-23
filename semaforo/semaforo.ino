int ledRed=11;
int ledGreen=9;
int ledYellow=10;
int timeRed=5000, timeGreen=3000, timeYellow=1000;
void setup() {
  pinMode(ledRed,OUTPUT);
  pinMode(ledYellow,OUTPUT);
  pinMode(ledGreen,OUTPUT);
}

void loop() {
  digitalWrite(ledRed,1);
  digitalWrite(ledYellow,0);
  digitalWrite(ledGreen,0);
  delay(timeRed);
  digitalWrite(ledRed,0);
  digitalWrite(ledYellow,1);
  digitalWrite(ledGreen,0);
  delay(timeYellow);
  digitalWrite(ledRed,0);
  digitalWrite(ledYellow,0);
  digitalWrite(ledGreen,1);
  delay(timeGreen);
}
