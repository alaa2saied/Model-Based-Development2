/*
 * File: Solve_Equation.c
 *
 * Code generated for Simulink model 'Solve_Equation'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Fri Oct 27 13:17:10 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "Solve_Equation.h"

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void Solve_Equation_step(void)
{
  /* (no output/update code required) */
}

/* Model initialize function */
void Solve_Equation_initialize(void)
{
  /* ConstCode for Outport: '<Root>/Outport' */
  rtY.Outport = 18.3598556605308;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
