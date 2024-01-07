/*
 * File: Cell_balancing_data.c
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

/* Constant parameters (default storage) */
const ConstP rtConstP = {
  /* Expression: single([0.11,0.28,0.72,1.13,1.61,2.16,2.84,3.11,3.77,4.1,4.53,5.12])
   * Referenced by: '<S1>/1-D Lookup Table'
   */
  { 0.11F, 0.28F, 0.72F, 1.13F, 1.61F, 2.16F, 2.84F, 3.11F, 3.77F, 4.1F, 4.53F,
    5.12F },

  /* Computed Parameter: uDLookupTable_bp01Data
   * Referenced by: '<S1>/1-D Lookup Table'
   */
  { 347.0F, 406.0F, 570.0F, 722.0F, 901.0F, 1101.0F, 1344.0F, 1434.0F, 1671.0F,
    1785.0F, 1937.0F, 2139.0F },

  /* Expression: single([0.08,0.36,0.78,1.33,1.81,1.98,2.44,2.97,3.34,3.97,4.29,4.79,5.02])
   * Referenced by: '<S1>/1-D Lookup Table1'
   */
  { 0.08F, 0.36F, 0.78F, 1.33F, 1.81F, 1.98F, 2.44F, 2.97F, 3.34F, 3.97F, 4.29F,
    4.79F, 5.02F },

  /* Computed Parameter: uDLookupTable1_bp01Data
   * Referenced by: '<S1>/1-D Lookup Table1'
   */
  { 364.0F, 468.0F, 633.0F, 845.0F, 1028.0F, 1094.0F, 1264.0F, 1457.0F, 1591.0F,
    1826.0F, 1943.0F, 2126.0F, 2215.0F },

  /* Expression: single([0.06,1.06,1.39,1.80,2.20,2.51,3.08,3.57,4.21,4.75])
   * Referenced by: '<S1>/1-D Lookup Table2'
   */
  { 0.06F, 1.06F, 1.39F, 1.8F, 2.2F, 2.51F, 3.08F, 3.57F, 4.21F, 4.75F },

  /* Computed Parameter: uDLookupTable2_bp01Data
   * Referenced by: '<S1>/1-D Lookup Table2'
   */
  { 286.0F, 662.0F, 795.0F, 948.0F, 1112.0F, 1228.0F, 1493.0F, 1705.0F, 1965.0F,
    2172.0F },

  /* Computed Parameter: uDLookupTable_gridSize
   * Referenced by: '<S1>/1-D Lookup Table'
   */
  12U,

  /* Computed Parameter: uDLookupTable1_gridSize
   * Referenced by: '<S1>/1-D Lookup Table1'
   */
  13U,

  /* Computed Parameter: uDLookupTable2_gridSize
   * Referenced by: '<S1>/1-D Lookup Table2'
   */
  10U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
