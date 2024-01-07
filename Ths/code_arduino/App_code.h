/*
 * File: App_code.h
 *
 * Code generated for Simulink model 'App_code'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Fri Dec  8 23:29:47 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_App_code_h_
#define RTW_HEADER_App_code_h_
#ifndef App_code_COMMON_INCLUDES_
#define App_code_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* App_code_COMMON_INCLUDES_ */

#ifndef DEFINED_TYPEDEF_FOR_App_modes_
#define DEFINED_TYPEDEF_FOR_App_modes_

typedef enum {
  Normal = 0,                          /* Default value */
  Downgraded_sen_1,
  Downgraded_sen_2,
  Failure
} App_modes;

#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T App_bSensor1Failure;       /* '<Root>/App_bSensor1Failure' */
  boolean_T App_bSensor2Failure;       /* '<Root>/App_bSensor2Failure' */
  real_T App_bConherencyFailure;       /* '<Root>/App_bConherencyFailure' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  App_modes App_sOperation;            /* '<Root>/App_sOperation' */
} ExtY;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void App_code_initialize(void);
extern void App_code_step(void);
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
 * '<Root>' : 'App_code'
 * '<S1>'   : 'App_code/Type_of_failure'
 */
#endif                                 /* RTW_HEADER_App_code_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
