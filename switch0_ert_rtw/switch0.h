/*
 * File: switch0.h
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

#ifndef RTW_HEADER_switch0_h_
#define RTW_HEADER_switch0_h_
#ifndef switch0_COMMON_INCLUDES_
#define switch0_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* switch0_COMMON_INCLUDES_ */

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
  real_T condition;                    /* '<Root>/condition' */
  real_T In3;                          /* '<Root>/In3' */
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
extern void switch0_initialize(void);
extern void switch0_step(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('switch_control_Led/switch')    - opens subsystem switch_control_Led/switch
 * hilite_system('switch_control_Led/switch/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'switch_control_Led'
 * '<S1>'   : 'switch_control_Led/switch'
 */
#endif                                 /* RTW_HEADER_switch0_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
