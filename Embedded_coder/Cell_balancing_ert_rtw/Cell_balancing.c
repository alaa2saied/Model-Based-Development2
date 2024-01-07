/*
 * File: Cell_balancing.c
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

#include "Cell_balancing.h"
#include "akimaCoefficients_float.h"
#include "akimaDerivative_float.h"
#include "akimaEvaluation_float.h"
#include "akimaFiniteDiffs_float.h"
#include "akimaHermiteBasis_float.h"
#include "akimaStrides.h"
#include "akimaUtils_float.h"
#include "akimaWorkspace.h"
#include "mfl_interp_util.h"
#include <math.h>
#include "rtwtypes.h"
#include <stddef.h>

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void Cell_balancing_step(void)
{
  real32_T AkimaWorkspaceCoeffs_h[48];
  real32_T AkimaWorkspaceCoeffs[45];
  real32_T AkimaWorkspaceCoeffs_f[39];
  real32_T AkimaCoeffs_c[26];
  real32_T AkimaCoeffs[24];
  real32_T AkimaCoeffs_h[20];
  real32_T AkimaWorkspaceEval[6];
  real32_T AkimaWorkspaceEval_m[6];
  real32_T AkimaWorkspaceEval_n[6];
  const real32_T *bpDataSetVar;
  const real32_T *inputDataSetVar;
  real32_T rtb_Min;
  real32_T rtb_uDLookupTable;
  real32_T rtb_uDLookupTable1;
  real32_T rtb_uDLookupTable2;
  uint32_T AkimaWorkspaceCoeffsIndicesVa_0[13];
  uint32_T AkimaWorkspaceCoeffsIndicesVa_1[13];
  uint32_T AkimaWorkspaceCoeffsIndicesVar[13];
  uint32_T AkimaWorkspaceEvalIndicesVar[5];
  uint32_T AkimaWorkspaceEvalIndicesVar_0[5];
  uint32_T AkimaWorkspaceEvalIndicesVar_1[5];

  /* Lookup_n-D: '<S1>/1-D Lookup Table' incorporates:
   *  Inport: '<Root>/ADC_INPUT1'
   */
  bpDataSetVar = &rtConstP.uDLookupTable_bp01Data[0U];
  rtb_uDLookupTable2 = rtU.ADC_INPUT1;
  inputDataSetVar = &rtb_uDLookupTable2;
  akimaFixedGrid_precompute_float(1U, &rtConstP.uDLookupTable_gridSize,
    &bpDataSetVar, &rtConstP.uDLookupTable_tableData[0], &AkimaWorkspaceCoeffs[0],
    &AkimaWorkspaceCoeffsIndicesVar[0], &AkimaCoeffs[0]);
  akimaFixedGrid_interpolate_float(1U, &rtConstP.uDLookupTable_gridSize,
    &bpDataSetVar, 0U, 1U, &AkimaWorkspaceEval[0],
    &AkimaWorkspaceEvalIndicesVar[0], &AkimaCoeffs[0], 1U, &inputDataSetVar,
    NULL, &rtb_uDLookupTable);

  /* Lookup_n-D: '<S1>/1-D Lookup Table1' incorporates:
   *  Inport: '<Root>/ADC_INPUT2'
   */
  bpDataSetVar = &rtConstP.uDLookupTable1_bp01Data[0U];
  rtb_uDLookupTable2 = rtU.ADC_INPUT2;
  inputDataSetVar = &rtb_uDLookupTable2;
  akimaFixedGrid_precompute_float(1U, &rtConstP.uDLookupTable1_gridSize,
    &bpDataSetVar, &rtConstP.uDLookupTable1_tableData[0],
    &AkimaWorkspaceCoeffs_h[0], &AkimaWorkspaceCoeffsIndicesVa_0[0],
    &AkimaCoeffs_c[0]);
  akimaFixedGrid_interpolate_float(1U, &rtConstP.uDLookupTable1_gridSize,
    &bpDataSetVar, 0U, 1U, &AkimaWorkspaceEval_m[0],
    &AkimaWorkspaceEvalIndicesVar_0[0], &AkimaCoeffs_c[0], 1U, &inputDataSetVar,
    NULL, &rtb_uDLookupTable1);

  /* Lookup_n-D: '<S1>/1-D Lookup Table2' incorporates:
   *  Inport: '<Root>/ADC_INPUT3'
   */
  bpDataSetVar = &rtConstP.uDLookupTable2_bp01Data[0U];
  rtb_uDLookupTable2 = rtU.ADC_INPUT3;
  inputDataSetVar = &rtb_uDLookupTable2;
  akimaFixedGrid_precompute_float(1U, &rtConstP.uDLookupTable2_gridSize,
    &bpDataSetVar, &rtConstP.uDLookupTable2_tableData[0],
    &AkimaWorkspaceCoeffs_f[0], &AkimaWorkspaceCoeffsIndicesVa_1[0],
    &AkimaCoeffs_h[0]);
  akimaFixedGrid_interpolate_float(1U, &rtConstP.uDLookupTable2_gridSize,
    &bpDataSetVar, 0U, 1U, &AkimaWorkspaceEval_n[0],
    &AkimaWorkspaceEvalIndicesVar_1[0], &AkimaCoeffs_h[0], 1U, &inputDataSetVar,
    NULL, &rtb_uDLookupTable2);

  /* MinMax: '<S2>/Min' */
  rtb_Min = fminf(fminf(rtb_uDLookupTable, rtb_uDLookupTable1),
                  rtb_uDLookupTable2);

  /* Outputs for IfAction SubSystem: '<S2>/Switch Case Action Subsystem1' incorporates:
   *  ActionPort: '<S5>/Action Port'
   */
  /* SwitchCase: '<S2>/Switch Case' incorporates:
   *  Constant: '<S2>/Constant'
   *  SignalConversion generated from: '<S5>/In1'
   */
  rtDW.In1 = 1.0;

  /* End of Outputs for SubSystem: '<S2>/Switch Case Action Subsystem1' */

  /* Outputs for Enabled SubSystem: '<S2>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S3>/Enable'
   */
  /* Chart: '<S3>/Chart' */
  if (rtb_Min == rtb_uDLookupTable) {
    /* Outport: '<Root>/LED2' */
    rtY.LED2 = 1.0;

    /* Outport: '<Root>/LED3' */
    rtY.LED3 = 1.0;
  } else if ((rtb_Min == rtb_uDLookupTable) && (rtb_uDLookupTable + 0.1F ==
              rtb_uDLookupTable1)) {
    /* Outport: '<Root>/LED2' */
    rtY.LED2 = 0.0;
  } else if ((rtb_Min == rtb_uDLookupTable) && (rtb_uDLookupTable + 0.1F ==
              rtb_uDLookupTable2)) {
    /* Outport: '<Root>/LED3' */
    rtY.LED3 = 0.0;
  }

  if (rtb_Min == rtb_uDLookupTable1) {
    /* Outport: '<Root>/LED1' */
    rtY.LED1 = 1.0;

    /* Outport: '<Root>/LED3' */
    rtY.LED3 = 1.0;
  } else if ((rtb_Min == rtb_uDLookupTable1) && (rtb_uDLookupTable1 + 0.1F ==
              rtb_uDLookupTable2)) {
    /* Outport: '<Root>/LED3' */
    rtY.LED3 = 0.0;
  }

  if (rtb_Min == rtb_uDLookupTable2) {
    /* Outport: '<Root>/LED1' */
    rtY.LED1 = 1.0;

    /* Outport: '<Root>/LED2' */
    rtY.LED2 = 1.0;
  } else if ((rtb_Min == rtb_uDLookupTable2) && (rtb_uDLookupTable2 + 0.1F ==
              rtb_uDLookupTable)) {
    /* Outport: '<Root>/LED1' */
    rtY.LED1 = 0.0;
  } else if ((rtb_Min == rtb_uDLookupTable2) && (rtb_uDLookupTable2 + 0.1F ==
              rtb_uDLookupTable1)) {
    /* Outport: '<Root>/LED2' */
    rtY.LED2 = 0.0;
  }

  /* End of Chart: '<S3>/Chart' */
  /* End of Outputs for SubSystem: '<S2>/Enabled Subsystem' */
}

/* Model initialize function */
void Cell_balancing_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
