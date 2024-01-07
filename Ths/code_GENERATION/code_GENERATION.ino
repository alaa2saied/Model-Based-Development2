#include "App_code.h"
#define Downgraded_sen2 10
#define Downgraded_sen1 11
#define Failure_ 12
#define bSensor1Failure 3
#define bSensor2Failure  4
#define bConherencyFailure 2

void setup()
{
  App_code_initialize();
  pinMode(bSensor1Failure, INPUT);
  pinMode(bSensor2Failure, INPUT);
  pinMode(bConherencyFailure, INPUT);
  pinMode(Downgraded_sen2, OUTPUT);
  pinMode(Downgraded_sen1, OUTPUT);
  pinMode(Failure_, OUTPUT);
}

void loop()
{
  rtU.App_bConherencyFailure = digitalRead(bConherencyFailure);
  rtU.App_bSensor1Failure    = digitalRead(bSensor1Failure);
  rtU.App_bSensor2Failure    = digitalRead(bSensor2Failure);
  App_code_step();
  switch (rtY.App_sOperation)
  {
    case Downgraded_sen_2 :
      digitalWrite(Downgraded_sen2, HIGH);
      digitalWrite(Downgraded_sen1, LOW);
      break;
    case Downgraded_sen_1 :
      digitalWrite(Downgraded_sen1, HIGH);
      digitalWrite(Downgraded_sen2, LOW);
      break;
    case Failure :
      digitalWrite(Downgraded_sen1, HIGH);
      digitalWrite(Downgraded_sen2, HIGH);
      digitalWrite(Failure_, HIGH);
      break;
    default:
      digitalWrite(Downgraded_sen1, LOW);
      digitalWrite(Downgraded_sen2, LOW);
      digitalWrite(Failure_, LOW);
      break;
  }

}
