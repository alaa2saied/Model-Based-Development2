#include "solar.h"
#define LDR1             A0
#define LDR2             A1
#define LDR3             A2
#define LDR4             A3
#define servo_horizontal 5
#define servo_vertical   6
void setup() {
  solar_initialize();
  pinMode(LDR1,INPUT);
  pinMode(LDR2,INPUT);
  pinMode(LDR3,INPUT);
  pinMode(LDR4,INPUT);
  pinMode(servo_horizontal,OUTPUT);
  pinMode(servo_vertical,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  rtU.LR1=analogRead(LDR1);
  rtU.LR2=analogRead(LDR2);
  rtU.LR3=analogRead(LDR3);
  rtU.LR4=analogRead(LDR4);
  solar_step();

  analogWrite(servo_horizontal,rtY.servo_Right_Left);
  analogWrite(servo_vertical,rtY.servo_Up_Down);
  int s = analogRead(LDR4);
  Serial.println(s);
  delay(100);
}
