/*
 * File: Cell_balancing.h
 *
 * Code generated for Simulink model 'Cell_balancing'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Mon Jan  1 09:48:23 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Cell_balancing_h_
#define RTW_HEADER_Cell_balancing_h_
#ifndef Cell_balancing_COMMON_INCLUDES_
#define Cell_balancing_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Cell_balancing_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

#ifndef DEFINED_TYPEDEF_FOR_BMS_mode_
#define DEFINED_TYPEDEF_FOR_BMS_mode_

typedef enum {
  off = 0,                             /* Default value */
  charging,
  discharging
} BMS_mode;

#endif

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T In1;                          /* '<S5>/In1' */
  void* m_bpDataSet;                   /* '<S1>/1-D Lookup Table' */
  void* m_inputDataSet;                /* '<S1>/1-D Lookup Table' */
  void* m_bpDataSet_p;                 /* '<S1>/1-D Lookup Table1' */
  void* m_inputDataSet_a;              /* '<S1>/1-D Lookup Table1' */
  void* m_bpDataSet_k;                 /* '<S1>/1-D Lookup Table2' */
  void* m_inputDataSet_e;              /* '<S1>/1-D Lookup Table2' */
} DW;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: single([0.11,0.28,0.72,1.13,1.61,2.16,2.84,3.11,3.77,4.1,4.53,5.12])
   * Referenced by: '<S1>/1-D Lookup Table'
   */
  real32_T uDLookupTable_tableData[12];

  /* Computed Parameter: uDLookupTable_bp01Data
   * Referenced by: '<S1>/1-D Lookup Table'
   */
  real32_T uDLookupTable_bp01Data[12];

  /* Expression: single([0.08,0.36,0.78,1.33,1.81,1.98,2.44,2.97,3.34,3.97,4.29,4.79,5.02])
   * Referenced by: '<S1>/1-D Lookup Table1'
   */
  real32_T uDLookupTable1_tableData[13];

  /* Computed Parameter: uDLookupTable1_bp01Data
   * Referenced by: '<S1>/1-D Lookup Table1'
   */
  real32_T uDLookupTable1_bp01Data[13];

  /* Expression: single([0.06,1.06,1.39,1.80,2.20,2.51,3.08,3.57,4.21,4.75])
   * Referenced by: '<S1>/1-D Lookup Table2'
   */
  real32_T uDLookupTable2_tableData[10];

  /* Computed Parameter: uDLookupTable2_bp01Data
   * Referenced by: '<S1>/1-D Lookup Table2'
   */
  real32_T uDLookupTable2_bp01Data[10];

  /* Computed Parameter: uDLookupTable_gridSize
   * Referenced by: '<S1>/1-D Lookup Table'
   */
  uint32_T uDLookupTable_gridSize;

  /* Computed Parameter: uDLookupTable1_gridSize
   * Referenced by: '<S1>/1-D Lookup Table1'
   */
  uint32_T uDLookupTable1_gridSize;

  /* Computed Parameter: uDLookupTable2_gridSize
   * Referenced by: '<S1>/1-D Lookup Table2'
   */
  uint32_T uDLookupTable2_gridSize;
} ConstP;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T ADC_INPUT1;                 /* '<Root>/ADC_INPUT1' */
  real32_T ADC_INPUT2;                 /* '<Root>/ADC_INPUT2' */
  real32_T ADC_INPUT3;                 /* '<Root>/ADC_INPUT3' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T LED1;                         /* '<Root>/LED1' */
  real_T LED2;                         /* '<Root>/LED2' */
  real_T LED3;                         /* '<Root>/LED3' */
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

/* Constant parameters (default storage) */
extern const ConstP rtConstP;

/* Model entry point functions */
extern void Cell_balancing_initialize(void);
extern void Cell_balancing_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

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
 * '<Root>' : 'Cell_balancing'
 * '<S1>'   : 'Cell_balancing/ADC_System'
 * '<S2>'   : 'Cell_balancing/Passive_system'
 * '<S3>'   : 'Cell_balancing/Passive_system/Enabled Subsystem'
 * '<S4>'   : 'Cell_balancing/Passive_system/Switch Case Action Subsystem'
 * '<S5>'   : 'Cell_balancing/Passive_system/Switch Case Action Subsystem1'
 * '<S6>'   : 'Cell_balancing/Passive_system/Switch Case Action Subsystem2'
 * '<S7>'   : 'Cell_balancing/Passive_system/Enabled Subsystem/Chart'
 */
#endif                                 /* RTW_HEADER_Cell_balancing_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
