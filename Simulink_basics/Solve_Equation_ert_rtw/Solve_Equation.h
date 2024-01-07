/*
 * File: Solve_Equation.h
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

#ifndef RTW_HEADER_Solve_Equation_h_
#define RTW_HEADER_Solve_Equation_h_
#ifndef Solve_Equation_COMMON_INCLUDES_
#define Solve_Equation_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Solve_Equation_COMMON_INCLUDES_ */

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Outport;                      /* '<Root>/Outport' */
} ExtY;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void Solve_Equation_initialize(void);
extern void Solve_Equation_step(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Solve_Equation'
 * '<S1>'   : 'Solve_Equation/Subsystem'
 * '<S2>'   : 'Solve_Equation/Subsystem/f(w.p)'
 * '<S3>'   : 'Solve_Equation/Subsystem/f(x)'
 */
#endif                                 /* RTW_HEADER_Solve_Equation_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
