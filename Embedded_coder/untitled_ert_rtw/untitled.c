/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Fri Dec 29 22:31:55 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "untitled.h"
#include "rtwtypes.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void untitled_step(void)
{
  /* Outport: '<Root>/Led_state' incorporates:
   *  Constant: '<S2>/Vector'
   *  MultiPortSwitch: '<S2>/Output'
   *  UnitDelay: '<S3>/Output'
   */
  rtY.Led_state = rtConstP.Vector_Value[rtDW.Output_DSTATE];

  /* Switch: '<S5>/FixPt Switch' incorporates:
   *  Constant: '<S4>/FixPt Constant'
   *  Sum: '<S4>/FixPt Sum1'
   *  UnitDelay: '<S3>/Output'
   */
  if ((uint8_T)(rtDW.Output_DSTATE + 1U) > 1) {
    /* Update for UnitDelay: '<S3>/Output' incorporates:
     *  Constant: '<S5>/Constant'
     */
    rtDW.Output_DSTATE = 0U;
  } else {
    /* Update for UnitDelay: '<S3>/Output' */
    rtDW.Output_DSTATE++;
  }

  /* End of Switch: '<S5>/FixPt Switch' */
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
