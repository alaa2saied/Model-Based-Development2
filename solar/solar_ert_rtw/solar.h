/*
 * File: solar.h
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

#ifndef RTW_HEADER_solar_h_
#define RTW_HEADER_solar_h_
#ifndef solar_COMMON_INCLUDES_
#define solar_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* solar_COMMON_INCLUDES_ */

#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#define solar_M                        (rtM)

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay1_DSTATE;            /* '<Root>/Unit Delay1' */
  real_T UnitDelay_DSTATE;             /* '<Root>/Unit Delay' */
  uint8_T is_active_c3_solar;          /* '<Root>/Chart' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T LR1;                          /* '<Root>/LR1' */
  real_T LR2;                          /* '<Root>/LR2' */
  real_T LR3;                          /* '<Root>/LR3' */
  real_T LR4;                          /* '<Root>/LR4' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T servo_Right_Left;             /* '<Root>/servo_Right_Left' */
  real_T servo_Up_Down;                /* '<Root>/servo_Up_Down' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;
};

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void solar_initialize(void);
extern void solar_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

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
 * '<Root>' : 'solar'
 * '<S1>'   : 'solar/Chart'
 */
#endif                                 /* RTW_HEADER_solar_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
