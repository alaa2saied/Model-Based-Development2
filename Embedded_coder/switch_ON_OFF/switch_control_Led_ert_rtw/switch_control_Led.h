/*
 * File: switch_control_Led.h
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

#ifndef RTW_HEADER_switch_control_Led_h_
#define RTW_HEADER_switch_control_Led_h_
#ifndef switch_control_Led_COMMON_INCLUDES_
#define switch_control_Led_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* switch_control_Led_COMMON_INCLUDES_ */

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T condition;                    /* '<Root>/condition' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T LED_ON_OFF;                   /* '<Root>/LED_ON_OFF' */
} ExtY;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void switch_control_Led_initialize(void);
extern void switch_control_Led_step(void);

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
 * '<Root>' : 'switch_control_Led'
 * '<S1>'   : 'switch_control_Led/switch'
 */
#endif                                 /* RTW_HEADER_switch_control_Led_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
