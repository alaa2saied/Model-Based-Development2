/*
 * File: App_mode.c
 *
 * Code generated for Simulink model 'App_mode'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Fri Dec  8 14:02:20 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "App_mode.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void App_mode_step(void)
{
  /* Switch: '<S1>/Switch2' incorporates:
   *  Inport: '<Root>/App_bConherencyFailure'
   */
  if (rtU.App_bConherencyFailure != 0.0) {
    /* Switch: '<S1>/Switch' incorporates:
     *  Inport: '<Root>/App_bSensor1Failure'
     *  Inport: '<Root>/App_bSensor2Failure'
     *  Logic: '<S1>/AND1'
     *  Logic: '<S1>/AND2'
     *  Logic: '<S1>/NOT'
     *  Logic: '<S1>/NOT1'
     *  Switch: '<S1>/Switch1'
     */
    if (rtU.App_bSensor1Failure && (!rtU.App_bSensor2Failure)) {
      /* Outport: '<Root>/App_sOperation' incorporates:
       *  Constant: '<S1>/Constant'
       */
      rtY.App_sOperation = Downgraded_sen_2;
    } else if ((!rtU.App_bSensor1Failure) && rtU.App_bSensor2Failure) {
      /* Switch: '<S1>/Switch1' incorporates:
       *  Constant: '<S1>/Constant1'
       *  Outport: '<Root>/App_sOperation'
       */
      rtY.App_sOperation = Downgraded_sen_1;
    } else {
      /* Outport: '<Root>/App_sOperation' incorporates:
       *  Constant: '<S1>/Constant3'
       *  Switch: '<S1>/Switch1'
       */
      rtY.App_sOperation = Failure;
    }

    /* End of Switch: '<S1>/Switch' */
  } else {
    /* Outport: '<Root>/App_sOperation' incorporates:
     *  Constant: '<S1>/Constant2'
     */
    rtY.App_sOperation = Normal;
  }

  /* End of Switch: '<S1>/Switch2' */
}

/* Model initialize function */
void App_mode_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
