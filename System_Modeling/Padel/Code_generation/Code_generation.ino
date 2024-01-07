#include "App_mode.h"
void setup()
{
  App_mode_initialize();
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}
void loop()
{
  rtU.App_bConherencyFailure = digitalRead(2);
  rtU.App_bSensor1Failure = digitalRead(3);
  rtU.App_bSensor2Failure = digitalRead(4);
  App_mode_step();
  switch (rtY.App_sOperation)
  {
    case Downgraded_sen_1 :
      digitalWrite(11, HIGH);
      digitalWrite(10, LOW);
      break;
    case Downgraded_sen_2 :
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      break;
    case Failure :
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      break;
    default :
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      break;
  }
}
