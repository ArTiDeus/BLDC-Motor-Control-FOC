/*
 * File: BLDC_controller_data.c
 *
 * Code generated for Simulink model 'BLDC_controller'.
 *
 * Model version                  : 1.1296
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Tue Oct 20 17:29:57 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "BLDC_controller.h"

/* Constant parameters (auto storage) */
const ConstP rtConstP = {
  /* Computed Parameter: r_sin_M1_Table
   * Referenced by: '<S52>/r_sin_M1'
   */
  { 8192, 8682, 9162, 9630, 10087, 10531, 10963, 11381, 11786, 12176, 12551,
    12911, 13255, 13583, 13894, 14189, 14466, 14726, 14968, 15191, 15396, 15582,
    15749, 15897, 16026, 16135, 16225, 16294, 16344, 16374, 16384, 16374, 16344,
    16294, 16225, 16135, 16026, 15897, 15749, 15582, 15396, 15191, 14968, 14726,
    14466, 14189, 13894, 13583, 13255, 12911, 12551, 12176, 11786, 11381, 10963,
    10531, 10087, 9630, 9162, 8682, 8192, 7692, 7182, 6664, 6138, 5604, 5063,
    4516, 3964, 3406, 2845, 2280, 1713, 1143, 572, 0, -572, -1143, -1713, -2280,
    -2845, -3406, -3964, -4516, -5063, -5604, -6138, -6664, -7182, -7692, -8192,
    -8682, -9162, -9630, -10087, -10531, -10963, -11381, -11786, -12176, -12551,
    -12911, -13255, -13583, -13894, -14189, -14466, -14726, -14968, -15191,
    -15396, -15582, -15749, -15897, -16026, -16135, -16225, -16294, -16344,
    -16374, -16384, -16374, -16344, -16294, -16225, -16135, -16026, -15897,
    -15749, -15582, -15396, -15191, -14968, -14726, -14466, -14189, -13894,
    -13583, -13255, -12911, -12551, -12176, -11786, -11381, -10963, -10531,
    -10087, -9630, -9162, -8682, -8192, -7692, -7182, -6664, -6138, -5604, -5063,
    -4516, -3964, -3406, -2845, -2280, -1713, -1143, -572, 0, 572, 1143, 1713,
    2280, 2845, 3406, 3964, 4516, 5063, 5604, 6138, 6664, 7182, 7692, 8192 },

  /* Computed Parameter: r_cos_M1_Table
   * Referenced by: '<S52>/r_cos_M1'
   */
  { 14189, 13894, 13583, 13255, 12911, 12551, 12176, 11786, 11381, 10963, 10531,
    10087, 9630, 9162, 8682, 8192, 7692, 7182, 6664, 6138, 5604, 5063, 4516,
    3964, 3406, 2845, 2280, 1713, 1143, 572, 0, -572, -1143, -1713, -2280, -2845,
    -3406, -3964, -4516, -5063, -5604, -6138, -6664, -7182, -7692, -8192, -8682,
    -9162, -9630, -10087, -10531, -10963, -11381, -11786, -12176, -12551, -12911,
    -13255, -13583, -13894, -14189, -14466, -14726, -14968, -15191, -15396,
    -15582, -15749, -15897, -16026, -16135, -16225, -16294, -16344, -16374,
    -16384, -16374, -16344, -16294, -16225, -16135, -16026, -15897, -15749,
    -15582, -15396, -15191, -14968, -14726, -14466, -14189, -13894, -13583,
    -13255, -12911, -12551, -12176, -11786, -11381, -10963, -10531, -10087,
    -9630, -9162, -8682, -8192, -7692, -7182, -6664, -6138, -5604, -5063, -4516,
    -3964, -3406, -2845, -2280, -1713, -1143, -572, 0, 572, 1143, 1713, 2280,
    2845, 3406, 3964, 4516, 5063, 5604, 6138, 6664, 7182, 7692, 8192, 8682, 9162,
    9630, 10087, 10531, 10963, 11381, 11786, 12176, 12551, 12911, 13255, 13583,
    13894, 14189, 14466, 14726, 14968, 15191, 15396, 15582, 15749, 15897, 16026,
    16135, 16225, 16294, 16344, 16374, 16384, 16374, 16344, 16294, 16225, 16135,
    16026, 15897, 15749, 15582, 15396, 15191, 14968, 14726, 14466, 14189 },

  /* Computed Parameter: r_sin3PhaA_M1_Table
   * Referenced by: '<S96>/r_sin3PhaA_M1'
   */
  { -13091, -13634, -14126, -14565, -14953, -15289, -15577, -15816, -16009,
    -16159, -16269, -16340, -16377, -16383, -16362, -16317, -16253, -16172,
    -16079, -15977, -15870, -15762, -15656, -15555, -15461, -15377, -15306,
    -15248, -15206, -15180, -15172, -15180, -15206, -15248, -15306, -15377,
    -15461, -15555, -15656, -15762, -15870, -15977, -16079, -16172, -16253,
    -16317, -16362, -16383, -16377, -16340, -16269, -16159, -16009, -15816,
    -15577, -15289, -14953, -14565, -14126, -13634, -13091, -12496, -11849,
    -11154, -10411, -9623, -8791, -7921, -7014, -6075, -5107, -4115, -3104,
    -2077, -1041, 0, 1041, 2077, 3104, 4115, 5107, 6075, 7014, 7921, 8791, 9623,
    10411, 11154, 11849, 12496, 13091, 13634, 14126, 14565, 14953, 15289, 15577,
    15816, 16009, 16159, 16269, 16340, 16377, 16383, 16362, 16317, 16253, 16172,
    16079, 15977, 15870, 15762, 15656, 15555, 15461, 15377, 15306, 15248, 15206,
    15180, 15172, 15180, 15206, 15248, 15306, 15377, 15461, 15555, 15656, 15762,
    15870, 15977, 16079, 16172, 16253, 16317, 16362, 16383, 16377, 16340, 16269,
    16159, 16009, 15816, 15577, 15289, 14953, 14565, 14126, 13634, 13091, 12496,
    11849, 11154, 10411, 9623, 8791, 7921, 7014, 6075, 5107, 4115, 3104, 2077,
    1041, 0, -1041, -2077, -3104, -4115, -5107, -6075, -7014, -7921, -8791,
    -9623, -10411, -11154, -11849, -12496, -13091 },

  /* Computed Parameter: r_sin3PhaB_M1_Table
   * Referenced by: '<S96>/r_sin3PhaB_M1'
   */
  { 15172, 15180, 15206, 15248, 15306, 15377, 15461, 15555, 15656, 15762, 15870,
    15977, 16079, 16172, 16253, 16317, 16362, 16383, 16377, 16340, 16269, 16159,
    16009, 15816, 15577, 15289, 14953, 14565, 14126, 13634, 13091, 12496, 11849,
    11154, 10411, 9623, 8791, 7921, 7014, 6075, 5107, 4115, 3104, 2077, 1041, 0,
    -1041, -2077, -3104, -4115, -5107, -6075, -7014, -7921, -8791, -9623, -10411,
    -11154, -11849, -12496, -13091, -13634, -14126, -14565, -14953, -15289,
    -15577, -15816, -16009, -16159, -16269, -16340, -16377, -16383, -16362,
    -16317, -16253, -16172, -16079, -15977, -15870, -15762, -15656, -15555,
    -15461, -15377, -15306, -15248, -15206, -15180, -15172, -15180, -15206,
    -15248, -15306, -15377, -15461, -15555, -15656, -15762, -15870, -15977,
    -16079, -16172, -16253, -16317, -16362, -16383, -16377, -16340, -16269,
    -16159, -16009, -15816, -15577, -15289, -14953, -14565, -14126, -13634,
    -13091, -12496, -11849, -11154, -10411, -9623, -8791, -7921, -7014, -6075,
    -5107, -4115, -3104, -2077, -1041, 0, 1041, 2077, 3104, 4115, 5107, 6075,
    7014, 7921, 8791, 9623, 10411, 11154, 11849, 12496, 13091, 13634, 14126,
    14565, 14953, 15289, 15577, 15816, 16009, 16159, 16269, 16340, 16377, 16383,
    16362, 16317, 16253, 16172, 16079, 15977, 15870, 15762, 15656, 15555, 15461,
    15377, 15306, 15248, 15206, 15180, 15172 },

  /* Computed Parameter: r_sin3PhaC_M1_Table
   * Referenced by: '<S96>/r_sin3PhaC_M1'
   */
  { -13091, -12496, -11849, -11154, -10411, -9623, -8791, -7921, -7014, -6075,
    -5107, -4115, -3104, -2077, -1041, 0, 1041, 2077, 3104, 4115, 5107, 6075,
    7014, 7921, 8791, 9623, 10411, 11154, 11849, 12496, 13091, 13634, 14126,
    14565, 14953, 15289, 15577, 15816, 16009, 16159, 16269, 16340, 16377, 16383,
    16362, 16317, 16253, 16172, 16079, 15977, 15870, 15762, 15656, 15555, 15461,
    15377, 15306, 15248, 15206, 15180, 15172, 15180, 15206, 15248, 15306, 15377,
    15461, 15555, 15656, 15762, 15870, 15977, 16079, 16172, 16253, 16317, 16362,
    16383, 16377, 16340, 16269, 16159, 16009, 15816, 15577, 15289, 14953, 14565,
    14126, 13634, 13091, 12496, 11849, 11154, 10411, 9623, 8791, 7921, 7014,
    6075, 5107, 4115, 3104, 2077, 1041, 0, -1041, -2077, -3104, -4115, -5107,
    -6075, -7014, -7921, -8791, -9623, -10411, -11154, -11849, -12496, -13091,
    -13634, -14126, -14565, -14953, -15289, -15577, -15816, -16009, -16159,
    -16269, -16340, -16377, -16383, -16362, -16317, -16253, -16172, -16079,
    -15977, -15870, -15762, -15656, -15555, -15461, -15377, -15306, -15248,
    -15206, -15180, -15172, -15180, -15206, -15248, -15306, -15377, -15461,
    -15555, -15656, -15762, -15870, -15977, -16079, -16172, -16253, -16317,
    -16362, -16383, -16377, -16340, -16269, -16159, -16009, -15816, -15577,
    -15289, -14953, -14565, -14126, -13634, -13091 },

  /* Computed Parameter: iq_maxSca_M1_Table
   * Referenced by: '<S80>/iq_maxSca_M1'
   */
  { 65535U, 65523U, 65484U, 65418U, 65326U, 65207U, 65062U, 64890U, 64691U,
    64465U, 64211U, 63930U, 63620U, 63281U, 62913U, 62516U, 62088U, 61630U,
    61140U, 60618U, 60062U, 59473U, 58848U, 58187U, 57489U, 56752U, 55974U,
    55155U, 54291U, 53381U, 52422U, 51413U, 50349U, 49227U, 48043U, 46792U,
    45470U, 44069U, 42581U, 40997U, 39307U, 37494U, 35541U, 33422U, 31105U,
    28540U, 25655U, 22323U, 18304U, 12974U },

  /* Computed Parameter: z_commutMap_M1_table
   * Referenced by: '<S94>/z_commutMap_M1'
   */
  { -1, 1, 0, -1, 0, 1, 0, -1, 1, 1, -1, 0, 1, 0, -1, 0, 1, -1 },

  /* Computed Parameter: vec_hallToPos_Value
   * Referenced by: '<S11>/vec_hallToPos'
   */
  { 0, 2, 0, 1, 4, 3, 5, 0 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
