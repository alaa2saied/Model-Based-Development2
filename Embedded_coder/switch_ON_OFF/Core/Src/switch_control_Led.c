/*
 * File: switch_control_Led.c
 *
 * Code generated for Simulink model 'switch_control_Led'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sat Dec 30 01:37:20 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "switch_control_Led.h"
#include "rtwtypes.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void switch_control_Led_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/switch' */
  /* Outport: '<Root>/LED_ON_OFF' incorporates:
   *  Inport: '<Root>/condition'
   *  Switch: '<S1>/Switch'
   */
  rtY.LED_ON_OFF = (rtU.condition > 0.0);

  /* End of Outputs for SubSystem: '<Root>/switch' */
}

/* Model initialize function */
void switch_control_Led_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
