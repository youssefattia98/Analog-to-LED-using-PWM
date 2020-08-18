/*
  Author: Youssef Attia
  Description: outputing the pot value on LED using PWM signal
*/
#define pot A0
//int value;
//float volt;
//float pwm;
void setup() {
  pinMode(pot, INPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  //value = analogRead(pot);
  //volt = (value * 5) / 1023.0;
  //pwm=volt*(255/5);
  //analogWrite(11, pwm);
  analogWrite(11, map(analogRead(pot), 0, 1023, 0, 255));
}
