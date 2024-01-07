/*
 * File: switch0.c
 *
 * Code generated for Simulink model 'switch0'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sat Dec 30 01:40:35 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "switch0.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void switch0_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/switch' */
  /* Switch: '<S1>/Switch' incorporates:
   *  Inport: '<Root>/condition'
   */
  if (rtU.condition > 0.0) {
    /* Outport: '<Root>/LED_ON_OFF' incorporates:
     *  Inport: '<Root>/In1'
     */
    rtY.LED_ON_OFF = rtU.In1;
  } else {
    /* Outport: '<Root>/LED_ON_OFF' incorporates:
     *  Inport: '<Root>/In3'
     */
    rtY.LED_ON_OFF = rtU.In3;
  }

  /* End of Switch: '<S1>/Switch' */
  /* End of Outputs for SubSystem: '<Root>/switch' */
}

/* Model initialize function */
void switch0_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
