/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControlSystem_data.c
 *
 * Code generated for Simulink model 'flightControlSystem'.
 *
 * Model version                  : 1.555
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Fri Oct  4 12:40:34 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "flightControlSystem.h"
#include "flightControlSystem_private.h"

/* Model block global parameters (default storage) */
struct_pAcs5k38eV6MpgiqrKAV4 rtP_Sensors = {
  { 1.00596, 1.00383, 0.99454 },

  { 0.99861, 1.00644, 0.99997 },

  {
    { 0.0, 0.0, 0.0 },

    { 0.0, 0.0, 0.0 },
    190.0,
    0.707,

    { 1.00596, 0.0, 0.0, 0.0, 1.00383, 0.0, 0.0, 0.0, 0.99454 },

    { 0.09, -0.06, 0.33699999999999974 },

    { -50.0, -50.0, -50.0, 50.0, 50.0, 50.0 },
    190.0,
    0.707,

    { 0.99861, 0.0, 0.0, 0.0, 1.00644, 0.0, 0.0, 0.0, 0.99997 },

    { -0.0095, -0.0075, 0.0015 },

    { 0.0, 0.0, 0.0 },

    { -10.0, -10.0, -10.0, 10.0, 10.0, 10.0 },

    { 41.0, 41.0, 41.0, 41.0, 41.0, 41.0 },

    { 0.8, 0.8, 0.8, 0.025, 0.025, 0.025 },

    { 0.00021831529882618725, 0.00018641345254680647, 0.00037251068300213613,
      1.0651514622688397e-8, 1.3021327403798377e-8, 1.1929474437781302e-8 }
  },

  {
    1.0,
    41.0
  },
  -99.0,
  -9.0,

  {
    { -99.0, 0.0, 0.0, -9.0 },
    0.0,

    { 3.5, 70.0 }
  },
  1.0,
  1.225,
  12.01725,
  101270.95,

  { 0.99407531114557246, 0.99618461293246863, 1.0054899752649467,
    1.0013919347893572, 0.99360120821906917, 1.0000300009000269 },
  0.44,
  0.75,

  { 160.0, 120.0 }
} ;                                    /* Variable: Sensors
                                        * Referenced by: '<S1>/estimator'
                                        */

real_T rtP_TFinal = 20.0;              /* Variable: TFinal
                                        * Referenced by: '<S17>/Constant'
                                        */
real_T rtP_Ts = 0.005;                 /* Variable: Ts
                                        * Referenced by: '<S7>/Constant'
                                        */
real_T rtP_takeOffDuration = 1.0;      /* Variable: takeOffDuration
                                        * Referenced by: '<S16>/Constant'
                                        */
real32_T rtP_landingAltitude = -0.6F;  /* Variable: landingAltitude
                                        * Referenced by: '<S7>/Constant4'
                                        */

/* Block parameters (default storage) */
P_flightControlSystem_T flightControlSystem_P = {
  /* Start of '<Root>/Flight Control System' */
  {
    /* Mask Parameter: WrapToZero_Threshold
     * Referenced by: '<S19>/FixPt Switch'
     */
    4294967295U,

    /* Expression: Estimator.pos.visDeltaXYMax
     * Referenced by: '<S2>/Constant'
     */
    1.0,

    /* Computed Parameter: UDPReceiveViconData_Port
     * Referenced by: '<S6>/UDP Receive Vicon Data'
     */
    25000,

    /* Computed Parameter: Constant_Value_b
     * Referenced by: '<S4>/Constant'
     */
    0.0F,

    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S4>/Constant1'
     */
    0.0F,

    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S4>/Constant2'
     */
    0.0F,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S4>/Constant3'
     */
    0.0F,

    /* Computed Parameter: Constant4_Value
     * Referenced by: '<S4>/Constant4'
     */
    -0.5F,

    /* Computed Parameter: Constant5_Value
     * Referenced by: '<S4>/Constant5'
     */
    -1.0F,

    /* Computed Parameter: Constant_Value_h
     * Referenced by: '<S11>/Constant'
     */
    0.0F,

    /* Computed Parameter: Constant_Value_o
     * Referenced by: '<S12>/Constant'
     */
    0.0F,

    /* Computed Parameter: Constant3_Value_f
     * Referenced by: '<S7>/Constant3'
     */
    { 0.0F, 0.0F, 0.0F },

    /* Computed Parameter: Gain_Gain
     * Referenced by: '<S6>/Gain'
     */
    -1.0F,

    /* Computed Parameter: Gain1_Gain
     * Referenced by: '<S6>/Gain1'
     */
    -1.0F,

    /* Computed Parameter: Output_InitialCondition
     * Referenced by: '<S13>/Output'
     */
    0U,

    /* Computed Parameter: FixPtConstant_Value
     * Referenced by: '<S18>/FixPt Constant'
     */
    1U,

    /* Computed Parameter: Constant_Value_e
     * Referenced by: '<S19>/Constant'
     */
    0U,

    /* Expression: true
     * Referenced by: '<S7>/Constant1'
     */
    1
  }
  /* End of '<Root>/Flight Control System' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
