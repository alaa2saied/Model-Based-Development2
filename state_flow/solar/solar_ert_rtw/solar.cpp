/*
 * File: solar.c
 *
 * Code generated for Simulink model 'solar'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu Dec 21 02:12:43 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "solar.h"
#include "rtwtypes.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Forward declaration for local functions */
static void Servo_Angle(real_T angle);
static void Servo_Angle_up(real_T angle);

/* Function for Chart: '<Root>/Chart' */
static void Servo_Angle(real_T angle)
{
  /* Update for Outport: '<Root>/servo_Right_Left' */
  if ((rtY.servo_Right_Left > angle) && (rtY.servo_Right_Left != angle)) {
    rtY.servo_Right_Left--;
  } else if ((rtY.servo_Right_Left < angle) && (rtY.servo_Right_Left != angle))
  {
    rtY.servo_Right_Left++;
  }

  /* End of Update for Outport: '<Root>/servo_Right_Left' */
}

/* Function for Chart: '<Root>/Chart' */
static void Servo_Angle_up(real_T angle)
{
  /* Update for Outport: '<Root>/servo_Up_Down' */
  if ((rtY.servo_Up_Down > angle) && (rtY.servo_Up_Down != angle)) {
    rtY.servo_Up_Down--;
  } else if ((rtY.servo_Up_Down < angle) && (rtY.servo_Up_Down != angle)) {
    rtY.servo_Up_Down++;
  }

  /* End of Update for Outport: '<Root>/servo_Up_Down' */
}

/* Model step function */
void solar_step(void)
{
  real_T tmp;
  real_T tmp_0;
  boolean_T out;

  /* Outport: '<Root>/servo_Right_Left' incorporates:
   *  Chart: '<Root>/Chart'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtY.servo_Right_Left = rtDW.UnitDelay_DSTATE;

  /* Outport: '<Root>/servo_Up_Down' incorporates:
   *  Chart: '<Root>/Chart'
   *  UnitDelay: '<Root>/Unit Delay1'
   */
  rtY.servo_Up_Down = rtDW.UnitDelay1_DSTATE;

  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/LR1'
   *  Inport: '<Root>/LR2'
   *  Inport: '<Root>/LR3'
   *  Inport: '<Root>/LR4'
   */
  if (rtDW.is_active_c3_solar == 0U) {
    rtDW.is_active_c3_solar = 1U;
    Servo_Angle(0.0);
    Servo_Angle_up(90.0);
  } else {
    tmp = (rtU.LR1 + rtU.LR2) / 2.0;
    tmp_0 = (rtU.LR3 + rtU.LR4) / 2.0;
    if (tmp > tmp_0) {
      out = ((rtU.LR1 + rtU.LR4) / 2.0 > (rtU.LR2 + rtU.LR3) / 2.0);
    } else {
      out = false;
    }

    if (out) {
      Servo_Angle(-45.0);
      Servo_Angle_up(45.0);
    } else {
      if (tmp < tmp_0) {
        out = ((rtU.LR1 + rtU.LR4) / 2.0 == (rtU.LR2 + rtU.LR3) / 2.0);
      }

      if (out) {
        Servo_Angle(0.0);
        Servo_Angle_up(-90.0);
      } else {
        if (tmp > tmp_0) {
          out = ((rtU.LR1 + rtU.LR4) / 2.0 == (rtU.LR2 + rtU.LR3) / 2.0);
        }

        if (out) {
          Servo_Angle(0.0);
          Servo_Angle_up(90.0);
        } else {
          if (tmp < tmp_0) {
            out = ((rtU.LR1 + rtU.LR4) / 2.0 > (rtU.LR2 + rtU.LR3) / 2.0);
          }

          if (out) {
            Servo_Angle(-45.0);
            Servo_Angle_up(-45.0);
          } else {
            if (tmp < tmp_0) {
              out = ((rtU.LR1 + rtU.LR4) / 2.0 < (rtU.LR2 + rtU.LR3) / 2.0);
            }

            if (out) {
              Servo_Angle(45.0);
              Servo_Angle_up(-45.0);
            } else {
              if (tmp > tmp_0) {
                out = ((rtU.LR1 + rtU.LR4) / 2.0 < (rtU.LR2 + rtU.LR3) / 2.0);
              }

              if (out) {
                Servo_Angle(45.0);
                Servo_Angle_up(45.0);
              } else {
                if (tmp == tmp_0) {
                  out = ((rtU.LR1 + rtU.LR4) / 2.0 > (rtU.LR2 + rtU.LR3) / 2.0);
                }

                if (out) {
                  Servo_Angle(-90.0);
                  Servo_Angle_up(0.0);
                } else {
                  if (tmp == tmp_0) {
                    out = ((rtU.LR1 + rtU.LR4) / 2.0 < (rtU.LR2 + rtU.LR3) / 2.0);
                  }

                  if (out) {
                    Servo_Angle(90.0);
                    Servo_Angle_up(0.0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  /* Update for UnitDelay: '<Root>/Unit Delay1' incorporates:
   *  Outport: '<Root>/servo_Up_Down'
   */
  rtDW.UnitDelay1_DSTATE = rtY.servo_Up_Down;

  /* Update for UnitDelay: '<Root>/Unit Delay' incorporates:
   *  Outport: '<Root>/servo_Right_Left'
   */
  rtDW.UnitDelay_DSTATE = rtY.servo_Right_Left;
}

/* Model initialize function */
void solar_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
