/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: stateEstimator.c
 *
 * Code generated for Simulink model 'stateEstimator'.
 *
 * Model version                  : 1.78
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Thu Oct  3 18:35:58 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "stateEstimator.h"
#include "stateEstimator_private.h"
#include "rt_powf_snf.h"

P_stateEstimator_T stateEstimator_P_g = {
  /* Mask Parameter: outlierBelowFloor_const
   * Referenced by: '<S19>/Constant'
   */
  0.0,

  /* Mask Parameter: outlierJump_const
   * Referenced by: '<S67>/Constant'
   */
  0.3,

  /* Mask Parameter: currentEstimateVeryOffFromPressure_const
   * Referenced by: '<S65>/Constant'
   */
  0.8,

  /* Mask Parameter: currentStateVeryOffsonarflt_const
   * Referenced by: '<S66>/Constant'
   */
  0.4,

  /* Mask Parameter: DiscreteDerivative_ICPrevScaledInput
   * Referenced by: '<S79>/UD'
   */
  0.0F,

  /* Mask Parameter: Checkifvalidvisualpositionestimateavailable_const
   * Referenced by: '<S187>/Constant'
   */
  -99.0F,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S8>/Constant'
   */
  9.79038F,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S9>/Constant'
   */
  9.82962F,

  /* Mask Parameter: maxp_const
   * Referenced by: '<S82>/Constant'
   */
  0.6F,

  /* Mask Parameter: maxq_const
   * Referenced by: '<S84>/Constant'
   */
  0.6F,

  /* Mask Parameter: maxw1_const
   * Referenced by: '<S86>/Constant'
   */
  7.0F,

  /* Mask Parameter: maxw2_const
   * Referenced by: '<S87>/Constant'
   */
  7.0F,

  /* Mask Parameter: maxdw1_const
   * Referenced by: '<S80>/Constant'
   */
  80.0F,

  /* Mask Parameter: maxdw2_const
   * Referenced by: '<S81>/Constant'
   */
  80.0F,

  /* Mask Parameter: maxp2_const
   * Referenced by: '<S83>/Constant'
   */
  0.5F,

  /* Mask Parameter: maxq2_const
   * Referenced by: '<S85>/Constant'
   */
  0.5F,

  /* Mask Parameter: maxw3_const
   * Referenced by: '<S88>/Constant'
   */
  5.0F,

  /* Mask Parameter: maxw4_const
   * Referenced by: '<S89>/Constant'
   */
  5.0F,

  /* Mask Parameter: minHeightforOF_const
   * Referenced by: '<S90>/Constant'
   */
  -0.4F,

  /* Mask Parameter: DeactivateAccelerationIfOFisnotusedduetolowaltitude_const
   * Referenced by: '<S74>/Constant'
   */
  -0.4F,

  /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con
   * Referenced by: '<S76>/Constant'
   */
  0.0F,

  /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co
   * Referenced by: '<S77>/Constant'
   */
  0.0F,

  /* Mask Parameter: checkifPosavailable_const
   * Referenced by: '<S182>/Constant'
   */
  -99.0F,

  /* Mask Parameter: maxp3_const
   * Referenced by: '<S183>/Constant'
   */
  0.18F,

  /* Mask Parameter: maxq3_const
   * Referenced by: '<S184>/Constant'
   */
  0.18F,

  /* Mask Parameter: planarjumpsVISPOS_const
   * Referenced by: '<S185>/Constant'
   */
  1.0F,

  /* Expression: 0
   * Referenced by: '<S62>/L*(y[k]-yhat[k|k-1])'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S63>/deltax'
   */
  0.0,

  /* Expression: pInitialization.M
   * Referenced by: '<S138>/KalmanGainM'
   */
  { 0.0057568600814403284, 0.0, 0.0, 0.0057568600814410639 },

  /* Expression: pInitialization.M
   * Referenced by: '<S91>/KalmanGainM'
   */
  { 0.12546560898608969, 0.0, 0.0, 0.12546560898608969 },

  /* Expression: pInitialization.A
   * Referenced by: '<S16>/A'
   */
  { 1.0, 0.0, 0.005, 1.0 },

  /* Expression: pInitialization.L
   * Referenced by: '<S91>/KalmanGainL'
   */
  { 0.12546560898608983, -0.0, 0.0, 0.12546560898608983 },

  /* Expression: pInitialization.L
   * Referenced by: '<S138>/KalmanGainL'
   */
  { 0.0057568600814403292, -0.0, 0.0, 0.0057568600814410622 },

  /* Expression: 0
   * Referenced by: '<S5>/Delay2'
   */
  0.0,

  /* Expression: pInitialization.X0
   * Referenced by: '<S16>/X0'
   */
  { -0.046, 0.0 },

  /* Expression: -inf
   * Referenced by: '<S17>/SaturationSonar'
   */
  0.0,

  /* Expression: Estimator.alt.filterSonarNum
   * Referenced by: '<S17>/soonarFilter_IIR'
   */
  { 3.7568380197861018E-6, 1.1270514059358305E-5, 1.1270514059358305E-5,
    3.7568380197861018E-6 },

  /* Expression: Estimator.alt.filterSonarDen
   * Referenced by: '<S17>/soonarFilter_IIR'
   */
  { 1.0, -2.9371707284498907, 2.8762997234793319, -0.939098940325283 },

  /* Expression: 0
   * Referenced by: '<S17>/soonarFilter_IIR'
   */
  0.0,

  /* Expression: pInitialization.M
   * Referenced by: '<S20>/KalmanGainM'
   */
  { 0.026241420641871824, 0.069776736071494413 },

  /* Expression: pInitialization.C
   * Referenced by: '<S16>/C'
   */
  { 1.0, 0.0 },

  /* Expression: [0 0 -g]
   * Referenced by: '<S71>/gravity'
   */
  { 0.0, 0.0, -9.81 },

  /* Expression: [0 0 g]
   * Referenced by: '<S5>/gravity'
   */
  { 0.0, 0.0, 9.81 },

  /* Expression: Estimator.pos.accelerationInputGain
   * Referenced by: '<S71>/gainaccinput'
   */
  0.2,

  /* Expression: pInitialization.D
   * Referenced by: '<S16>/D'
   */
  0.0,

  /* Expression: pInitialization.L
   * Referenced by: '<S20>/KalmanGainL'
   */
  { 0.02659030432222927, 0.069776736071495565 },

  /* Expression: pInitialization.B
   * Referenced by: '<S16>/B'
   */
  { 0.0, 0.005 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S20>/CovarianceZ'
   */
  { 0.0026241420641871824, 0.0069776736071494412, 0.0069776736071494412,
    0.03760769293505626 },

  /* Expression: pInitialization.P0
   * Referenced by: '<S16>/P0'
   */
  { 0.0026948589925820591, 0.0071657120718247331, 0.0071657120718247331,
    0.038107692935056295 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S91>/CovarianceZ'
   */
  { 0.62732804493044858, 0.0, 0.0, 0.62732804493044858 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S138>/CovarianceZ'
   */
  { 0.0017270580244320988, 0.0, 0.0, 0.0017270580244323193 },

  /* Expression: pInitialization.G
   * Referenced by: '<S16>/G'
   */
  { 0.0, 1.0 },

  /* Expression: 0
   * Referenced by: '<S20>/ConstantP'
   */
  0.0,

  /* Expression: pInitialization.H
   * Referenced by: '<S16>/H'
   */
  0.0,

  /* Expression: pInitialization.N
   * Referenced by: '<S16>/N'
   */
  0.0,

  /* Expression: pInitialization.Q
   * Referenced by: '<S16>/Q'
   */
  0.0005,

  /* Expression: pInitialization.R
   * Referenced by: '<S16>/R'
   */
  0.1,

  /* Expression: 0
   * Referenced by: '<S91>/ConstantP'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S138>/ConstantP'
   */
  0.0,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S10>/Gain1'
   */
  0.001F,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S10>/Gain'
   */
  0.999F,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<S10>/Gain2'
   */
  0.101936802F,

  /* Computed Parameter: Gain3_Gain
   * Referenced by: '<S10>/Gain3'
   */
  0.001F,

  /* Computed Parameter: Gain4_Gain
   * Referenced by: '<S10>/Gain4'
   */
  0.999F,

  /* Computed Parameter: Gain_Gain_i
   * Referenced by: '<S11>/Gain'
   */
  0.8F,

  /* Computed Parameter: Gain1_Gain_k
   * Referenced by: '<S11>/Gain1'
   */
  0.2F,

  /* Expression: single(0)
   * Referenced by: '<S14>/Constant'
   */
  0.0F,

  /* Expression: single(Estimator.complementaryFilterInit)
   * Referenced by: '<S4>/Memory'
   */
  { 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: Gain_Gain_c
   * Referenced by: '<S14>/Gain'
   */
  -1.0F,

  /* Computed Parameter: Assumingthatcalibwasdonelevel_Bias
   * Referenced by: '<S7>/Assuming that calib was done level!'
   */
  { 0.0F, 0.0F, 9.81F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: inverseIMU_gain_Gain
   * Referenced by: '<S7>/inverseIMU_gain'
   */
  { 0.994075298F, 0.996184587F, 1.00549F, 1.00139189F, 0.993601203F, 1.00003F },

  /* Computed Parameter: IIR_IMUgyro_r_NumCoef
   * Referenced by: '<S7>/IIR_IMUgyro_r'
   */
  { 0.282124132F, 1.27253926F, 2.42084408F, 2.42084408F, 1.27253926F,
    0.282124132F },

  /* Computed Parameter: IIR_IMUgyro_r_DenCoef
   * Referenced by: '<S7>/IIR_IMUgyro_r'
   */
  { 1.0F, 2.22871494F, 2.52446198F, 1.57725322F, 0.54102242F, 0.0795623958F },

  /* Computed Parameter: IIR_IMUgyro_r_InitialStates
   * Referenced by: '<S7>/IIR_IMUgyro_r'
   */
  0.0F,

  /* Computed Parameter: Gain_Gain_b
   * Referenced by: '<S4>/Gain'
   */
  0.005F,

  /* Computed Parameter: FIR_IMUaccel_InitialStates
   * Referenced by: '<S7>/FIR_IMUaccel'
   */
  0.0F,

  /* Computed Parameter: FIR_IMUaccel_Coefficients
   * Referenced by: '<S7>/FIR_IMUaccel'
   */
  { 0.0264077242F, 0.140531361F, 0.33306092F, 0.33306092F, 0.140531361F,
    0.0264077242F },

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S4>/Constant'
   */
  2.0F,

  /* Computed Parameter: Merge_InitialOutput
   * Referenced by: '<S4>/Merge'
   */
  0.0F,

  /* Computed Parameter: C_Value_p
   * Referenced by: '<S135>/C'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: C_Value_f
   * Referenced by: '<S73>/C'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: A_Value_c
   * Referenced by: '<S73>/A'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: B_Value_p
   * Referenced by: '<S73>/B'
   */
  { 0.005F, 0.0F, 0.0F, 0.005F },

  /* Computed Parameter: D_Value_f
   * Referenced by: '<S73>/D'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: A_Value_b
   * Referenced by: '<S135>/A'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: B_Value_pu
   * Referenced by: '<S135>/B'
   */
  { 0.005F, 0.0F, 0.0F, 0.005F },

  /* Computed Parameter: D_Value_b
   * Referenced by: '<S135>/D'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: X0_Value_e
   * Referenced by: '<S73>/X0'
   */
  { 0.0F, 0.0F },

  /* Computed Parameter: IIRgyroz_NumCoef
   * Referenced by: '<S72>/IIRgyroz'
   */
  { 0.282124132F, 1.27253926F, 2.42084408F, 2.42084408F, 1.27253926F,
    0.282124132F },

  /* Computed Parameter: IIRgyroz_DenCoef
   * Referenced by: '<S72>/IIRgyroz'
   */
  { 1.0F, 2.22871494F, 2.52446198F, 1.57725322F, 0.54102242F, 0.0795623958F },

  /* Computed Parameter: IIRgyroz_InitialStates
   * Referenced by: '<S72>/IIRgyroz'
   */
  0.0F,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S79>/TSamp'
   */
  200.0F,

  /* Computed Parameter: opticalFlowToVelocity_gain_Gain
   * Referenced by: '<S69>/opticalFlowToVelocity_gain'
   */
  1.0F,

  /* Computed Parameter: Delay_InitialCondition
   * Referenced by: '<S69>/Delay'
   */
  0.0F,

  /* Computed Parameter: invertzaxisGain_Gain
   * Referenced by: '<S5>/invertzaxisGain'
   */
  -1.0F,

  /* Computed Parameter: prsToAltGain_Gain
   * Referenced by: '<S5>/prsToAltGain'
   */
  0.0832137167F,

  /* Computed Parameter: pressureFilter_IIR_NumCoef
   * Referenced by: '<S17>/pressureFilter_IIR'
   */
  { 3.75683794E-6F, 1.12705138E-5F, 1.12705138E-5F, 3.75683794E-6F },

  /* Computed Parameter: pressureFilter_IIR_DenCoef
   * Referenced by: '<S17>/pressureFilter_IIR'
   */
  { 1.0F, -2.93717074F, 2.87629962F, -0.939098954F },

  /* Computed Parameter: pressureFilter_IIR_InitialStates
   * Referenced by: '<S17>/pressureFilter_IIR'
   */
  0.0F,

  /* Computed Parameter: Delay1_InitialCondition
   * Referenced by: '<S3>/Delay1'
   */
  0.0F,

  /* Computed Parameter: X0_Value_j
   * Referenced by: '<S135>/X0'
   */
  { 0.1F, 0.0F },

  /* Computed Parameter: Constant_Value_e
   * Referenced by: '<S136>/Constant'
   */
  2.0F,

  /* Computed Parameter: Delay_InitialCondition_n
   * Referenced by: '<S70>/Delay'
   */
  0.0F,

  /* Computed Parameter: SimplyIntegrateVelocity_gainval
   * Referenced by: '<S70>/SimplyIntegrateVelocity'
   */
  0.005F,

  /* Computed Parameter: SimplyIntegrateVelocity_IC
   * Referenced by: '<S70>/SimplyIntegrateVelocity'
   */
  0.0F,

  /* Computed Parameter: UseIPPosSwitch_Threshold
   * Referenced by: '<S70>/UseIPPosSwitch'
   */
  0.0F,

  /* Computed Parameter: P0_Value_m
   * Referenced by: '<S73>/P0'
   */
  { 0.717328072F, 0.0F, 0.0F, 0.717328072F },

  /* Computed Parameter: G_Value_h
   * Referenced by: '<S73>/G'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: H_Value_c
   * Referenced by: '<S73>/H'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: N_Value_g
   * Referenced by: '<S73>/N'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: Q_Value_f
   * Referenced by: '<S73>/Q'
   */
  { 0.09F, 0.0F, 0.0F, 0.09F },

  /* Computed Parameter: R_Value_k
   * Referenced by: '<S73>/R'
   */
  { 5.0F, 0.0F, 0.0F, 5.0F },

  /* Computed Parameter: P0_Value_h
   * Referenced by: '<S135>/P0'
   */
  { 0.00173705805F, 0.0F, 0.0F, 0.00173705805F },

  /* Computed Parameter: G_Value_p
   * Referenced by: '<S135>/G'
   */
  { 0.1F, 0.0F, 0.0F, 0.1F },

  /* Computed Parameter: H_Value_d
   * Referenced by: '<S135>/H'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: N_Value_j
   * Referenced by: '<S135>/N'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: Q_Value_n
   * Referenced by: '<S135>/Q'
   */
  { 0.001F, 0.0F, 0.0F, 0.001F },

  /* Computed Parameter: R_Value_kf
   * Referenced by: '<S135>/R'
   */
  { 0.3F, 0.0F, 0.0F, 0.3F },

  /* Computed Parameter: Constant_Value_m
   * Referenced by: '<S38>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_g
   * Referenced by: '<S109>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_f
   * Referenced by: '<S156>/Constant'
   */
  0.0F,

  /* Computed Parameter: MemoryX_DelayLength
   * Referenced by: '<S73>/MemoryX'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength
   * Referenced by: '<S69>/Delay'
   */
  1U,

  /* Computed Parameter: Delay2_DelayLength
   * Referenced by: '<S5>/Delay2'
   */
  1U,

  /* Computed Parameter: MemoryX_DelayLength_e
   * Referenced by: '<S16>/MemoryX'
   */
  1U,

  /* Computed Parameter: Delay1_DelayLength
   * Referenced by: '<S3>/Delay1'
   */
  1U,

  /* Computed Parameter: MemoryX_DelayLength_ez
   * Referenced by: '<S135>/MemoryX'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength_e
   * Referenced by: '<S70>/Delay'
   */
  1U,

  /* Computed Parameter: Constant_Value_a
   * Referenced by: '<S21>/Constant'
   */
  0,

  /* Computed Parameter: Constant_Value_mn
   * Referenced by: '<S92>/Constant'
   */
  0,

  /* Expression: false()
   * Referenced by: '<S73>/Reset'
   */
  0,

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S139>/Constant'
   */
  0,

  /* Expression: false()
   * Referenced by: '<S135>/Reset'
   */
  0,

  /* Computed Parameter: ManualSwitchPZ_CurrentSetting
   * Referenced by: '<S16>/ManualSwitchPZ'
   */
  1U,

  /* Computed Parameter: ManualSwitchPZ_CurrentSetting_i
   * Referenced by: '<S73>/ManualSwitchPZ'
   */
  1U,

  /* Computed Parameter: ManualSwitchPZ_CurrentSetting_b
   * Referenced by: '<S135>/ManualSwitchPZ'
   */
  1U,

  /* Start of '<S160>/Enabled Subsystem' */
  {
    /* Computed Parameter: deltax_Y0
     * Referenced by: '<S181>/deltax'
     */
    0.0F
  }
  ,

  /* End of '<S160>/Enabled Subsystem' */

  /* Start of '<S155>/MeasurementUpdate' */
  {
    /* Computed Parameter: Lykyhatkk1_Y0
     * Referenced by: '<S180>/L*(y[k]-yhat[k|k-1])'
     */
    0.0F
  }
  ,

  /* End of '<S155>/MeasurementUpdate' */

  /* Start of '<S113>/Enabled Subsystem' */
  {
    /* Computed Parameter: deltax_Y0
     * Referenced by: '<S134>/deltax'
     */
    0.0F
  }
  ,

  /* End of '<S113>/Enabled Subsystem' */

  /* Start of '<S108>/MeasurementUpdate' */
  {
    /* Computed Parameter: Lykyhatkk1_Y0
     * Referenced by: '<S133>/L*(y[k]-yhat[k|k-1])'
     */
    0.0F
  }
  /* End of '<S108>/MeasurementUpdate' */
};

MdlrefDW_stateEstimator_T stateEstimator_MdlrefDW;

/* Block signals (default storage) */
B_stateEstimator_c_T stateEstimator_B;

/* Block states (default storage) */
DW_stateEstimator_f_T stateEstimator_DW;

/*
 * System initialize for enable system:
 *    '<S108>/MeasurementUpdate'
 *    '<S155>/MeasurementUpdate'
 */
void stateEstimator_MeasurementUpdate_Init(real32_T rty_Lykyhatkk1[2],
  P_MeasurementUpdate_stateEstimator_T *localP)
{
  /* SystemInitialize for Outport: '<S133>/L*(y[k]-yhat[k|k-1])' */
  rty_Lykyhatkk1[0] = localP->Lykyhatkk1_Y0;
  rty_Lykyhatkk1[1] = localP->Lykyhatkk1_Y0;
}

/*
 * Disable for enable system:
 *    '<S108>/MeasurementUpdate'
 *    '<S155>/MeasurementUpdate'
 */
void stateEstimator_MeasurementUpdate_Disable(real32_T rty_Lykyhatkk1[2],
  DW_MeasurementUpdate_stateEstimator_T *localDW,
  P_MeasurementUpdate_stateEstimator_T *localP)
{
  /* Outputs for Enabled SubSystem: '<S108>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S133>/Enable'
   */
  /* Disable for Outport: '<S133>/L*(y[k]-yhat[k|k-1])' */
  rty_Lykyhatkk1[0] = localP->Lykyhatkk1_Y0;
  rty_Lykyhatkk1[1] = localP->Lykyhatkk1_Y0;

  /* End of Outputs for SubSystem: '<S108>/MeasurementUpdate' */
  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S108>/MeasurementUpdate'
 *    '<S155>/MeasurementUpdate'
 */
void stateEstimator_MeasurementUpdate(boolean_T rtu_Enable, const real32_T
  rtu_Lk[4], const real32_T rtu_yk[2], const real32_T rtu_Ck[4], const real32_T
  rtu_xhatkk1[2], const real32_T rtu_Dk[4], const real32_T rtu_uk[2], real32_T
  rty_Lykyhatkk1[2], DW_MeasurementUpdate_stateEstimator_T *localDW,
  P_MeasurementUpdate_stateEstimator_T *localP)
{
  real32_T rtu_yk_idx_0;
  real32_T rtu_yk_idx_1;

  /* Outputs for Enabled SubSystem: '<S108>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S133>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->MeasurementUpdate_MODE) {
      localDW->MeasurementUpdate_MODE = true;
    }

    /* Sum: '<S133>/Sum' incorporates:
     *  Product: '<S133>/C[k]*xhat[k|k-1]'
     *  Product: '<S133>/D[k]*u[k]'
     *  Sum: '<S133>/Add1'
     */
    rtu_yk_idx_0 = rtu_yk[0] - ((rtu_Ck[0] * rtu_xhatkk1[0] + rtu_Ck[2] *
      rtu_xhatkk1[1]) + (rtu_Dk[0] * rtu_uk[0] + rtu_Dk[2] * rtu_uk[1]));
    rtu_yk_idx_1 = rtu_yk[1] - ((rtu_Ck[1] * rtu_xhatkk1[0] + rtu_Ck[3] *
      rtu_xhatkk1[1]) + (rtu_Dk[1] * rtu_uk[0] + rtu_Dk[3] * rtu_uk[1]));

    /* Product: '<S133>/Product3' */
    rty_Lykyhatkk1[0] = 0.0F;
    rty_Lykyhatkk1[0] += rtu_Lk[0] * rtu_yk_idx_0;
    rty_Lykyhatkk1[0] += rtu_Lk[2] * rtu_yk_idx_1;
    rty_Lykyhatkk1[1] = 0.0F;
    rty_Lykyhatkk1[1] += rtu_Lk[1] * rtu_yk_idx_0;
    rty_Lykyhatkk1[1] += rtu_Lk[3] * rtu_yk_idx_1;
  } else {
    if (localDW->MeasurementUpdate_MODE) {
      stateEstimator_MeasurementUpdate_Disable(rty_Lykyhatkk1, localDW, localP);
    }
  }

  /* End of Outputs for SubSystem: '<S108>/MeasurementUpdate' */
}

/*
 * System initialize for enable system:
 *    '<S113>/Enabled Subsystem'
 *    '<S160>/Enabled Subsystem'
 */
void stateEstimator_EnabledSubsystem_Init(real32_T rty_deltax[2],
  P_EnabledSubsystem_stateEstimator_T *localP)
{
  /* SystemInitialize for Outport: '<S134>/deltax' */
  rty_deltax[0] = localP->deltax_Y0;
  rty_deltax[1] = localP->deltax_Y0;
}

/*
 * Disable for enable system:
 *    '<S113>/Enabled Subsystem'
 *    '<S160>/Enabled Subsystem'
 */
void stateEstimator_EnabledSubsystem_Disable(real32_T rty_deltax[2],
  DW_EnabledSubsystem_stateEstimator_T *localDW,
  P_EnabledSubsystem_stateEstimator_T *localP)
{
  /* Outputs for Enabled SubSystem: '<S113>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S134>/Enable'
   */
  /* Disable for Outport: '<S134>/deltax' */
  rty_deltax[0] = localP->deltax_Y0;
  rty_deltax[1] = localP->deltax_Y0;

  /* End of Outputs for SubSystem: '<S113>/Enabled Subsystem' */
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S113>/Enabled Subsystem'
 *    '<S160>/Enabled Subsystem'
 */
void stateEstimator_EnabledSubsystem(boolean_T rtu_Enable, const real32_T
  rtu_Mk[4], const real32_T rtu_Ck[4], const real32_T rtu_yk[2], const real32_T
  rtu_xhatkk1[2], real32_T rty_deltax[2], DW_EnabledSubsystem_stateEstimator_T
  *localDW, P_EnabledSubsystem_stateEstimator_T *localP)
{
  real32_T rtu_yk_idx_0;
  real32_T rtu_yk_idx_1;

  /* Outputs for Enabled SubSystem: '<S113>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S134>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->EnabledSubsystem_MODE) {
      localDW->EnabledSubsystem_MODE = true;
    }

    /* Sum: '<S134>/Add1' incorporates:
     *  Product: '<S134>/Product'
     */
    rtu_yk_idx_0 = rtu_yk[0] - (rtu_Ck[0] * rtu_xhatkk1[0] + rtu_Ck[2] *
      rtu_xhatkk1[1]);
    rtu_yk_idx_1 = rtu_yk[1] - (rtu_Ck[1] * rtu_xhatkk1[0] + rtu_Ck[3] *
      rtu_xhatkk1[1]);

    /* Product: '<S134>/Product2' */
    rty_deltax[0] = 0.0F;
    rty_deltax[0] += rtu_Mk[0] * rtu_yk_idx_0;
    rty_deltax[0] += rtu_Mk[2] * rtu_yk_idx_1;
    rty_deltax[1] = 0.0F;
    rty_deltax[1] += rtu_Mk[1] * rtu_yk_idx_0;
    rty_deltax[1] += rtu_Mk[3] * rtu_yk_idx_1;
  } else {
    if (localDW->EnabledSubsystem_MODE) {
      stateEstimator_EnabledSubsystem_Disable(rty_deltax, localDW, localP);
    }
  }

  /* End of Outputs for SubSystem: '<S113>/Enabled Subsystem' */
}

/* System initialize for referenced model: 'stateEstimator' */
void stateEstimator_Init(void)
{
  int32_T i;

  /* InitializeConditions for Memory: '<S4>/Memory' */
  stateEstimator_DW.Memory_PreviousInput[0] =
    stateEstimator_P_g.Memory_InitialCondition[0];
  stateEstimator_DW.Memory_PreviousInput[1] =
    stateEstimator_P_g.Memory_InitialCondition[1];
  stateEstimator_DW.Memory_PreviousInput[2] =
    stateEstimator_P_g.Memory_InitialCondition[2];

  /* InitializeConditions for DiscreteFilter: '<S7>/IIR_IMUgyro_r' */
  for (i = 0; i < 5; i++) {
    stateEstimator_DW.IIR_IMUgyro_r_states[i] =
      stateEstimator_P_g.IIR_IMUgyro_r_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S7>/IIR_IMUgyro_r' */

  /* InitializeConditions for DiscreteFir: '<S7>/FIR_IMUaccel' */
  stateEstimator_DW.FIR_IMUaccel_circBuf = 0;
  for (i = 0; i < 15; i++) {
    stateEstimator_DW.FIR_IMUaccel_states[i] =
      stateEstimator_P_g.FIR_IMUaccel_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFir: '<S7>/FIR_IMUaccel' */

  /* InitializeConditions for Delay: '<S73>/MemoryX' */
  stateEstimator_DW.icLoad = 1U;

  /* InitializeConditions for DiscreteFilter: '<S72>/IIRgyroz' */
  for (i = 0; i < 10; i++) {
    stateEstimator_DW.IIRgyroz_states[i] =
      stateEstimator_P_g.IIRgyroz_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S72>/IIRgyroz' */

  /* InitializeConditions for UnitDelay: '<S79>/UD'
   *
   * Block description for '<S79>/UD':
   *
   *  Store in Global RAM
   */
  stateEstimator_DW.UD_DSTATE[0] =
    stateEstimator_P_g.DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for Delay: '<S69>/Delay' */
  stateEstimator_DW.Delay_DSTATE[0] = stateEstimator_P_g.Delay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S79>/UD'
   *
   * Block description for '<S79>/UD':
   *
   *  Store in Global RAM
   */
  stateEstimator_DW.UD_DSTATE[1] =
    stateEstimator_P_g.DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for Delay: '<S69>/Delay' */
  stateEstimator_DW.Delay_DSTATE[1] = stateEstimator_P_g.Delay_InitialCondition;

  /* InitializeConditions for Reshape: '<S16>/Reshapexhat' incorporates:
   *  Delay: '<S5>/Delay2'
   */
  stateEstimator_DW.Delay2_DSTATE = stateEstimator_P_g.Delay2_InitialCondition;

  /* InitializeConditions for Delay: '<S16>/MemoryX' */
  stateEstimator_DW.icLoad_p = 1U;

  /* InitializeConditions for DiscreteFilter: '<S17>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[0] =
    stateEstimator_P_g.pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S17>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[0] =
    stateEstimator_P_g.soonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S17>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[1] =
    stateEstimator_P_g.pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S17>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[1] =
    stateEstimator_P_g.soonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S17>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[2] =
    stateEstimator_P_g.pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S17>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[2] =
    stateEstimator_P_g.soonarFilter_IIR_InitialStates;

  /* InitializeConditions for Delay: '<S135>/MemoryX' */
  stateEstimator_DW.icLoad_g = 1U;

  /* InitializeConditions for DiscreteIntegrator: '<S70>/SimplyIntegrateVelocity' */
  stateEstimator_DW.SimplyIntegrateVelocity_PrevResetState = 2;

  /* InitializeConditions for Delay: '<S3>/Delay1' */
  stateEstimator_DW.Delay1_DSTATE[0] =
    stateEstimator_P_g.Delay1_InitialCondition;

  /* InitializeConditions for Delay: '<S70>/Delay' */
  stateEstimator_DW.Delay_DSTATE_l[0] =
    stateEstimator_P_g.Delay_InitialCondition_n;

  /* InitializeConditions for DiscreteIntegrator: '<S70>/SimplyIntegrateVelocity' */
  stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[0] =
    stateEstimator_P_g.SimplyIntegrateVelocity_IC;

  /* SystemInitialize for Merge: '<S4>/Merge' */
  stateEstimator_B.Merge[0] = stateEstimator_P_g.Merge_InitialOutput;

  /* SystemInitialize for Enabled SubSystem: '<S42>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S63>/deltax' */
  stateEstimator_B.Product2[0] = stateEstimator_P_g.deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S42>/Enabled Subsystem' */

  /* InitializeConditions for Delay: '<S3>/Delay1' */
  stateEstimator_DW.Delay1_DSTATE[1] =
    stateEstimator_P_g.Delay1_InitialCondition;

  /* InitializeConditions for Delay: '<S70>/Delay' */
  stateEstimator_DW.Delay_DSTATE_l[1] =
    stateEstimator_P_g.Delay_InitialCondition_n;

  /* InitializeConditions for DiscreteIntegrator: '<S70>/SimplyIntegrateVelocity' */
  stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[1] =
    stateEstimator_P_g.SimplyIntegrateVelocity_IC;

  /* SystemInitialize for Merge: '<S4>/Merge' */
  stateEstimator_B.Merge[1] = stateEstimator_P_g.Merge_InitialOutput;

  /* SystemInitialize for Enabled SubSystem: '<S42>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S63>/deltax' */
  stateEstimator_B.Product2[1] = stateEstimator_P_g.deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S42>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S113>/Enabled Subsystem' */
  stateEstimator_EnabledSubsystem_Init(stateEstimator_B.Product2_k,
    &stateEstimator_P_g.EnabledSubsystem_f);

  /* End of SystemInitialize for SubSystem: '<S113>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S108>/MeasurementUpdate' */
  stateEstimator_MeasurementUpdate_Init(stateEstimator_B.Product3_m,
    &stateEstimator_P_g.MeasurementUpdate_e);

  /* End of SystemInitialize for SubSystem: '<S108>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S155>/MeasurementUpdate' */
  stateEstimator_MeasurementUpdate_Init(stateEstimator_B.Product3_j,
    &stateEstimator_P_g.MeasurementUpdate_b);

  /* End of SystemInitialize for SubSystem: '<S155>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S160>/Enabled Subsystem' */
  stateEstimator_EnabledSubsystem_Init(stateEstimator_B.Product2_e,
    &stateEstimator_P_g.EnabledSubsystem_m);

  /* End of SystemInitialize for SubSystem: '<S160>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S37>/MeasurementUpdate' */
  /* SystemInitialize for Outport: '<S62>/L*(y[k]-yhat[k|k-1])' */
  stateEstimator_B.Product3[0] = stateEstimator_P_g.Lykyhatkk1_Y0;
  stateEstimator_B.Product3[1] = stateEstimator_P_g.Lykyhatkk1_Y0;

  /* End of SystemInitialize for SubSystem: '<S37>/MeasurementUpdate' */
}

/* Disable for referenced model: 'stateEstimator' */
void stateEstimator_Disable(void)
{
  /* Disable for Enabled SubSystem: '<S42>/Enabled Subsystem' */
  if (stateEstimator_DW.EnabledSubsystem_MODE) {
    /* Disable for Outport: '<S63>/deltax' */
    stateEstimator_B.Product2[0] = stateEstimator_P_g.deltax_Y0;
    stateEstimator_B.Product2[1] = stateEstimator_P_g.deltax_Y0;
    stateEstimator_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Disable for SubSystem: '<S42>/Enabled Subsystem' */

  /* Disable for Enabled SubSystem: '<S113>/Enabled Subsystem' */
  if (stateEstimator_DW.EnabledSubsystem_f.EnabledSubsystem_MODE) {
    stateEstimator_EnabledSubsystem_Disable(stateEstimator_B.Product2_k,
      &stateEstimator_DW.EnabledSubsystem_f,
      &stateEstimator_P_g.EnabledSubsystem_f);
  }

  /* End of Disable for SubSystem: '<S113>/Enabled Subsystem' */

  /* Disable for Enabled SubSystem: '<S108>/MeasurementUpdate' */
  if (stateEstimator_DW.MeasurementUpdate_e.MeasurementUpdate_MODE) {
    stateEstimator_MeasurementUpdate_Disable(stateEstimator_B.Product3_m,
      &stateEstimator_DW.MeasurementUpdate_e,
      &stateEstimator_P_g.MeasurementUpdate_e);
  }

  /* End of Disable for SubSystem: '<S108>/MeasurementUpdate' */

  /* Disable for Enabled SubSystem: '<S155>/MeasurementUpdate' */
  if (stateEstimator_DW.MeasurementUpdate_b.MeasurementUpdate_MODE) {
    stateEstimator_MeasurementUpdate_Disable(stateEstimator_B.Product3_j,
      &stateEstimator_DW.MeasurementUpdate_b,
      &stateEstimator_P_g.MeasurementUpdate_b);
  }

  /* End of Disable for SubSystem: '<S155>/MeasurementUpdate' */

  /* Disable for Enabled SubSystem: '<S160>/Enabled Subsystem' */
  if (stateEstimator_DW.EnabledSubsystem_m.EnabledSubsystem_MODE) {
    stateEstimator_EnabledSubsystem_Disable(stateEstimator_B.Product2_e,
      &stateEstimator_DW.EnabledSubsystem_m,
      &stateEstimator_P_g.EnabledSubsystem_m);
  }

  /* End of Disable for SubSystem: '<S160>/Enabled Subsystem' */

  /* Disable for Enabled SubSystem: '<S37>/MeasurementUpdate' */
  if (stateEstimator_DW.MeasurementUpdate_MODE) {
    /* Disable for Outport: '<S62>/L*(y[k]-yhat[k|k-1])' */
    stateEstimator_B.Product3[0] = stateEstimator_P_g.Lykyhatkk1_Y0;
    stateEstimator_B.Product3[1] = stateEstimator_P_g.Lykyhatkk1_Y0;
    stateEstimator_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Disable for SubSystem: '<S37>/MeasurementUpdate' */
}

/* Output and update for referenced model: 'stateEstimator' */
void stateEstimator_run(const boolean_T arg_controlModePosVSOrient_flagin, const
  sensordata_t *arg_sensordata_datin, const real32_T arg_usePosVIS_flagin, const
  real32_T arg_opticalFlow_datin[3], const real32_T arg_posVIS_datin[4],
  statesEstim_t *arg_states_estimout, const real32_T
  arg_sensorCalibration_datin[8], boolean_T *arg_takeoffCommand)
{
  /* local block i/o variables */
  boolean_T rtb_DataTypeConversionEnable_i;
  boolean_T rtb_DataTypeConversionEnable_h;
  boolean_T rtb_Reshapeyhat;
  boolean_T rtb_Reshapeyhat_a;
  boolean_T rtb_DataTypeConversionReset_a;
  boolean_T rtb_Reshapeyhat_l;
  boolean_T rtb_DataTypeConversionReset_i;
  boolean_T rtb_LogicalOperator_cg;
  boolean_T rtb_Compare_i;
  real32_T rtb_sincos_o2_idx_0;
  real32_T rtb_sincos_o2_idx_1;
  real32_T rtb_sincos_o2_idx_2;
  real32_T rtb_DataTypeConversion1_idx_1;
  real32_T rtb_DataTypeConversion1_idx_0;
  real32_T y;
  real32_T rtb_VectorConcatenate_tmp;
  real32_T rtb_VectorConcatenate_tmp_0;
  real32_T rtb_sincos_o2_idx_2_tmp;

  /* SignalConversion: '<S15>/ConcatBufferAtVector ConcatenateIn1' incorporates:
   *  Constant: '<S14>/Constant'
   */
  stateEstimator_B.VectorConcatenate[0] = stateEstimator_P_g.Constant_Value;

  /* SignalConversion: '<S15>/ConcatBufferAtVector ConcatenateIn2' incorporates:
   *  Constant: '<S14>/Constant'
   */
  stateEstimator_B.VectorConcatenate[1] = stateEstimator_P_g.Constant_Value;

  /* SignalConversion: '<S14>/TmpSignal ConversionAtTrigonometric FunctionInport1' incorporates:
   *  Memory: '<S4>/Memory'
   */
  rtb_sincos_o2_idx_0 = stateEstimator_DW.Memory_PreviousInput[2];
  rtb_sincos_o2_idx_1 = stateEstimator_DW.Memory_PreviousInput[1];
  rtb_sincos_o2_idx_2 = stateEstimator_DW.Memory_PreviousInput[0];

  /* Trigonometry: '<S14>/Trigonometric Function' incorporates:
   *  Memory: '<S4>/Memory'
   *  SignalConversion: '<S14>/TmpSignal ConversionAtTrigonometric FunctionInport1'
   */
  stateEstimator_DW.Memory_PreviousInput[0] = (real32_T)sin
    (stateEstimator_DW.Memory_PreviousInput[2]);
  rtb_DataTypeConversion1_idx_0 = (real32_T)cos
    (stateEstimator_DW.Memory_PreviousInput[2]);
  stateEstimator_DW.Memory_PreviousInput[1] = (real32_T)sin
    (stateEstimator_DW.Memory_PreviousInput[1]);
  rtb_DataTypeConversion1_idx_1 = (real32_T)cos(rtb_sincos_o2_idx_1);
  stateEstimator_DW.Memory_PreviousInput[2] = (real32_T)sin(rtb_sincos_o2_idx_2);

  /* SignalConversion: '<S15>/ConcatBufferAtVector ConcatenateIn3' */
  stateEstimator_B.VectorConcatenate[2] = rtb_DataTypeConversion1_idx_1;

  /* SignalConversion: '<S15>/ConcatBufferAtVector ConcatenateIn4' */
  stateEstimator_B.VectorConcatenate[3] =
    stateEstimator_DW.Memory_PreviousInput[0];

  /* Product: '<S14>/Product1' */
  stateEstimator_B.VectorConcatenate[4] = rtb_DataTypeConversion1_idx_0 *
    rtb_DataTypeConversion1_idx_1;

  /* Product: '<S14>/Product3' */
  stateEstimator_B.VectorConcatenate[5] =
    stateEstimator_DW.Memory_PreviousInput[0] *
    stateEstimator_DW.Memory_PreviousInput[1];

  /* SignalConversion: '<S15>/ConcatBufferAtVector ConcatenateIn7' */
  stateEstimator_B.VectorConcatenate[6] = rtb_DataTypeConversion1_idx_0;

  /* Product: '<S14>/Product2' incorporates:
   *  Gain: '<S14>/Gain'
   */
  stateEstimator_B.VectorConcatenate[7] = stateEstimator_P_g.Gain_Gain_c *
    stateEstimator_DW.Memory_PreviousInput[0] * rtb_DataTypeConversion1_idx_1;

  /* Product: '<S14>/Product4' */
  stateEstimator_B.VectorConcatenate[8] = rtb_DataTypeConversion1_idx_0 *
    stateEstimator_DW.Memory_PreviousInput[1];

  /* Product: '<S14>/Divide' incorporates:
   *  Reshape: '<S15>/Reshape (9) to [3x3] column-major'
   */
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 9; stateEstimator_B.j++) {
    stateEstimator_B.VectorConcatenate[stateEstimator_B.j] /=
      rtb_DataTypeConversion1_idx_1;
  }

  /* End of Product: '<S14>/Divide' */

  /* Gain: '<S7>/inverseIMU_gain' incorporates:
   *  Bias: '<S7>/Assuming that calib was done level!'
   *  DataTypeConversion: '<S7>/Data Type Conversion'
   *  Sum: '<S7>/Sum1'
   */
  stateEstimator_B.inverseIMU_gain[0] = (arg_sensordata_datin->ddx -
    (arg_sensorCalibration_datin[0] +
     stateEstimator_P_g.Assumingthatcalibwasdonelevel_Bias[0])) *
    stateEstimator_P_g.inverseIMU_gain_Gain[0];
  stateEstimator_B.inverseIMU_gain[1] = (arg_sensordata_datin->ddy -
    (arg_sensorCalibration_datin[1] +
     stateEstimator_P_g.Assumingthatcalibwasdonelevel_Bias[1])) *
    stateEstimator_P_g.inverseIMU_gain_Gain[1];
  stateEstimator_B.inverseIMU_gain[2] = (arg_sensordata_datin->ddz -
    (arg_sensorCalibration_datin[2] +
     stateEstimator_P_g.Assumingthatcalibwasdonelevel_Bias[2])) *
    stateEstimator_P_g.inverseIMU_gain_Gain[2];
  stateEstimator_B.inverseIMU_gain[3] = (arg_sensordata_datin->p -
    (arg_sensorCalibration_datin[3] +
     stateEstimator_P_g.Assumingthatcalibwasdonelevel_Bias[3])) *
    stateEstimator_P_g.inverseIMU_gain_Gain[3];
  stateEstimator_B.inverseIMU_gain[4] = (arg_sensordata_datin->q -
    (arg_sensorCalibration_datin[4] +
     stateEstimator_P_g.Assumingthatcalibwasdonelevel_Bias[4])) *
    stateEstimator_P_g.inverseIMU_gain_Gain[4];
  stateEstimator_B.inverseIMU_gain[5] = (arg_sensordata_datin->r -
    (arg_sensorCalibration_datin[5] +
     stateEstimator_P_g.Assumingthatcalibwasdonelevel_Bias[5])) *
    stateEstimator_P_g.inverseIMU_gain_Gain[5];

  /* DiscreteFilter: '<S7>/IIR_IMUgyro_r' */
  stateEstimator_DW.IIR_IMUgyro_r_tmp = 0.0F;
  rtb_DataTypeConversion1_idx_1 = stateEstimator_B.inverseIMU_gain[5];
  stateEstimator_B.denIdx = 1;
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 5; stateEstimator_B.j++) {
    rtb_DataTypeConversion1_idx_1 -=
      stateEstimator_P_g.IIR_IMUgyro_r_DenCoef[stateEstimator_B.denIdx] *
      stateEstimator_DW.IIR_IMUgyro_r_states[stateEstimator_B.j];
    stateEstimator_B.denIdx++;
  }

  stateEstimator_DW.IIR_IMUgyro_r_tmp = rtb_DataTypeConversion1_idx_1 /
    stateEstimator_P_g.IIR_IMUgyro_r_DenCoef[0];
  rtb_DataTypeConversion1_idx_0 = stateEstimator_P_g.IIR_IMUgyro_r_NumCoef[0] *
    stateEstimator_DW.IIR_IMUgyro_r_tmp;
  stateEstimator_B.denIdx = 1;
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 5; stateEstimator_B.j++) {
    rtb_DataTypeConversion1_idx_0 +=
      stateEstimator_P_g.IIR_IMUgyro_r_NumCoef[stateEstimator_B.denIdx] *
      stateEstimator_DW.IIR_IMUgyro_r_states[stateEstimator_B.j];
    stateEstimator_B.denIdx++;
  }

  /* Product: '<S4>/Product' incorporates:
   *  DiscreteFilter: '<S7>/IIR_IMUgyro_r'
   *  SignalConversion: '<S4>/TmpSignal ConversionAtProductInport2'
   */
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 3; stateEstimator_B.j++) {
    stateEstimator_B.sincos_o1[stateEstimator_B.j] =
      stateEstimator_B.VectorConcatenate[stateEstimator_B.j + 6] *
      rtb_DataTypeConversion1_idx_0 +
      (stateEstimator_B.VectorConcatenate[stateEstimator_B.j + 3] *
       stateEstimator_B.inverseIMU_gain[4] +
       stateEstimator_B.VectorConcatenate[stateEstimator_B.j] *
       stateEstimator_B.inverseIMU_gain[3]);
  }

  /* End of Product: '<S4>/Product' */

  /* Sum: '<S4>/Sum' incorporates:
   *  Gain: '<S4>/Gain'
   */
  rtb_DataTypeConversion1_idx_1 = stateEstimator_P_g.Gain_Gain_b *
    stateEstimator_B.sincos_o1[0] + rtb_sincos_o2_idx_2;

  /* DiscreteFir: '<S7>/FIR_IMUaccel' */
  rtb_sincos_o2_idx_2 = stateEstimator_B.inverseIMU_gain[0] *
    stateEstimator_P_g.FIR_IMUaccel_Coefficients[0];
  stateEstimator_B.cff = 1;
  stateEstimator_B.j = stateEstimator_DW.FIR_IMUaccel_circBuf;
  while (stateEstimator_B.j < 5) {
    rtb_sincos_o2_idx_2 +=
      stateEstimator_DW.FIR_IMUaccel_states[stateEstimator_B.j] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[stateEstimator_B.cff];
    stateEstimator_B.cff++;
    stateEstimator_B.j++;
  }

  stateEstimator_B.j = 0;
  while (stateEstimator_B.j < stateEstimator_DW.FIR_IMUaccel_circBuf) {
    rtb_sincos_o2_idx_2 +=
      stateEstimator_DW.FIR_IMUaccel_states[stateEstimator_B.j] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[stateEstimator_B.cff];
    stateEstimator_B.cff++;
    stateEstimator_B.j++;
  }

  stateEstimator_B.FIR_IMUaccel[0] = rtb_sincos_o2_idx_2;

  /* Math: '<S4>/Math Function' incorporates:
   *  Constant: '<S4>/Constant'
   *  DiscreteFir: '<S7>/FIR_IMUaccel'
   */
  stateEstimator_B.DataTypeConversion2 = (real32_T)floor
    (stateEstimator_P_g.Constant_Value_n);
  if ((rtb_sincos_o2_idx_2 < 0.0F) && (stateEstimator_P_g.Constant_Value_n >
       stateEstimator_B.DataTypeConversion2)) {
    stateEstimator_B.sincos_o1[0] = -rt_powf_snf(-rtb_sincos_o2_idx_2,
      stateEstimator_P_g.Constant_Value_n);
  } else {
    stateEstimator_B.sincos_o1[0] = rt_powf_snf(rtb_sincos_o2_idx_2,
      stateEstimator_P_g.Constant_Value_n);
  }

  /* DiscreteFir: '<S7>/FIR_IMUaccel' */
  rtb_sincos_o2_idx_2 = stateEstimator_B.inverseIMU_gain[1] *
    stateEstimator_P_g.FIR_IMUaccel_Coefficients[0];
  stateEstimator_B.cff = 1;
  stateEstimator_B.j = stateEstimator_DW.FIR_IMUaccel_circBuf;
  while (stateEstimator_B.j < 5) {
    rtb_sincos_o2_idx_2 += stateEstimator_DW.FIR_IMUaccel_states[5 +
      stateEstimator_B.j] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[stateEstimator_B.cff];
    stateEstimator_B.cff++;
    stateEstimator_B.j++;
  }

  stateEstimator_B.j = 0;
  while (stateEstimator_B.j < stateEstimator_DW.FIR_IMUaccel_circBuf) {
    rtb_sincos_o2_idx_2 += stateEstimator_DW.FIR_IMUaccel_states[5 +
      stateEstimator_B.j] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[stateEstimator_B.cff];
    stateEstimator_B.cff++;
    stateEstimator_B.j++;
  }

  stateEstimator_B.FIR_IMUaccel[1] = rtb_sincos_o2_idx_2;

  /* Math: '<S4>/Math Function' incorporates:
   *  Constant: '<S4>/Constant'
   *  DiscreteFir: '<S7>/FIR_IMUaccel'
   */
  if ((rtb_sincos_o2_idx_2 < 0.0F) && (stateEstimator_P_g.Constant_Value_n >
       stateEstimator_B.DataTypeConversion2)) {
    y = -rt_powf_snf(-rtb_sincos_o2_idx_2, stateEstimator_P_g.Constant_Value_n);
  } else {
    y = rt_powf_snf(rtb_sincos_o2_idx_2, stateEstimator_P_g.Constant_Value_n);
  }

  /* DiscreteFir: '<S7>/FIR_IMUaccel' */
  rtb_sincos_o2_idx_2 = stateEstimator_B.inverseIMU_gain[2] *
    stateEstimator_P_g.FIR_IMUaccel_Coefficients[0];
  stateEstimator_B.cff = 1;
  stateEstimator_B.j = stateEstimator_DW.FIR_IMUaccel_circBuf;
  while (stateEstimator_B.j < 5) {
    rtb_sincos_o2_idx_2 += stateEstimator_DW.FIR_IMUaccel_states[10 +
      stateEstimator_B.j] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[stateEstimator_B.cff];
    stateEstimator_B.cff++;
    stateEstimator_B.j++;
  }

  stateEstimator_B.j = 0;
  while (stateEstimator_B.j < stateEstimator_DW.FIR_IMUaccel_circBuf) {
    rtb_sincos_o2_idx_2 += stateEstimator_DW.FIR_IMUaccel_states[10 +
      stateEstimator_B.j] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[stateEstimator_B.cff];
    stateEstimator_B.cff++;
    stateEstimator_B.j++;
  }

  stateEstimator_B.FIR_IMUaccel[2] = rtb_sincos_o2_idx_2;

  /* Math: '<S4>/Math Function' incorporates:
   *  Constant: '<S4>/Constant'
   *  DiscreteFir: '<S7>/FIR_IMUaccel'
   */
  if ((rtb_sincos_o2_idx_2 < 0.0F) && (stateEstimator_P_g.Constant_Value_n >
       stateEstimator_B.DataTypeConversion2)) {
    stateEstimator_B.DataTypeConversion2 = -rt_powf_snf(-rtb_sincos_o2_idx_2,
      stateEstimator_P_g.Constant_Value_n);
  } else {
    stateEstimator_B.DataTypeConversion2 = rt_powf_snf(rtb_sincos_o2_idx_2,
      stateEstimator_P_g.Constant_Value_n);
  }

  /* Sqrt: '<S4>/Sqrt' incorporates:
   *  Math: '<S4>/Math Function'
   *  Sum: '<S4>/Sum of Elements'
   */
  stateEstimator_B.DataTypeConversion2 = (real32_T)sqrt
    ((stateEstimator_B.sincos_o1[0] + y) + stateEstimator_B.DataTypeConversion2);

  /* If: '<S4>/If' incorporates:
   *  Constant: '<S8>/Constant'
   *  Constant: '<S9>/Constant'
   *  Gain: '<S4>/Gain'
   *  Inport: '<S12>/prin'
   *  Logic: '<S4>/Logical Operator'
   *  RelationalOperator: '<S8>/Compare'
   *  RelationalOperator: '<S9>/Compare'
   *  Sum: '<S4>/Sum'
   */
  if ((stateEstimator_B.DataTypeConversion2 >
       stateEstimator_P_g.CompareToConstant_const) &&
      (stateEstimator_B.DataTypeConversion2 <
       stateEstimator_P_g.CompareToConstant1_const)) {
    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* Sum: '<S10>/Sum' incorporates:
     *  DiscreteFir: '<S7>/FIR_IMUaccel'
     *  Gain: '<S10>/Gain'
     *  Gain: '<S10>/Gain1'
     *  Gain: '<S4>/Gain'
     *  Product: '<S10>/Divide'
     *  Sum: '<S4>/Sum'
     *  Trigonometry: '<S10>/Trigonometric Function'
     */
    stateEstimator_B.Merge[1] = (stateEstimator_P_g.Gain_Gain_b *
      stateEstimator_B.sincos_o1[2] + rtb_sincos_o2_idx_0) *
      stateEstimator_P_g.Gain_Gain + (real32_T)atan
      (stateEstimator_B.FIR_IMUaccel[1] / rtb_sincos_o2_idx_2) *
      stateEstimator_P_g.Gain1_Gain;

    /* Gain: '<S10>/Gain2' */
    rtb_sincos_o2_idx_0 = stateEstimator_P_g.Gain2_Gain *
      stateEstimator_B.FIR_IMUaccel[0];

    /* Trigonometry: '<S10>/Trigonometric Function1' */
    if (rtb_sincos_o2_idx_0 > 1.0F) {
      rtb_sincos_o2_idx_0 = 1.0F;
    } else {
      if (rtb_sincos_o2_idx_0 < -1.0F) {
        rtb_sincos_o2_idx_0 = -1.0F;
      }
    }

    /* Sum: '<S10>/Sum1' incorporates:
     *  Gain: '<S10>/Gain3'
     *  Gain: '<S10>/Gain4'
     *  Gain: '<S4>/Gain'
     *  Sum: '<S4>/Sum'
     *  Trigonometry: '<S10>/Trigonometric Function1'
     */
    stateEstimator_B.Merge[0] = (stateEstimator_P_g.Gain_Gain_b *
      stateEstimator_B.sincos_o1[1] + rtb_sincos_o2_idx_1) *
      stateEstimator_P_g.Gain4_Gain + stateEstimator_P_g.Gain3_Gain * (real32_T)
      asin(rtb_sincos_o2_idx_0);

    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    stateEstimator_B.Merge[0] = stateEstimator_P_g.Gain_Gain_b *
      stateEstimator_B.sincos_o1[1] + rtb_sincos_o2_idx_1;
    stateEstimator_B.Merge[1] = stateEstimator_P_g.Gain_Gain_b *
      stateEstimator_B.sincos_o1[2] + rtb_sincos_o2_idx_0;

    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem2' */
  }

  /* End of If: '<S4>/If' */

  /* If: '<S4>/If1' incorporates:
   *  Constant: '<S187>/Constant'
   *  Logic: '<S7>/Logical Operator'
   *  RelationalOperator: '<S187>/Compare'
   */
  if ((arg_posVIS_datin[0] !=
       stateEstimator_P_g.Checkifvalidvisualpositionestimateavailable_const) &&
      (arg_usePosVIS_flagin != 0.0F)) {
    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    /* DataTypeConversion: '<S4>/Data Type Conversion3' incorporates:
     *  Gain: '<S11>/Gain'
     *  Gain: '<S11>/Gain1'
     *  Sum: '<S11>/Sum'
     */
    stateEstimator_DW.Memory_PreviousInput[0] = stateEstimator_P_g.Gain_Gain_i *
      rtb_DataTypeConversion1_idx_1 + stateEstimator_P_g.Gain1_Gain_k *
      arg_posVIS_datin[3];

    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S13>/Action Port'
     */
    /* DataTypeConversion: '<S4>/Data Type Conversion3' incorporates:
     *  Inport: '<S13>/yawin'
     */
    stateEstimator_DW.Memory_PreviousInput[0] = rtb_DataTypeConversion1_idx_1;

    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem3' */
  }

  /* End of If: '<S4>/If1' */

  /* DataTypeConversion: '<S4>/Data Type Conversion3' */
  stateEstimator_DW.Memory_PreviousInput[1] = stateEstimator_B.Merge[0];
  stateEstimator_DW.Memory_PreviousInput[2] = stateEstimator_B.Merge[1];

  /* Trigonometry: '<S18>/sincos' incorporates:
   *  Trigonometry: '<S137>/sincos'
   *  Trigonometry: '<S75>/sincos'
   */
  rtb_sincos_o2_idx_1 = (real32_T)sin(stateEstimator_DW.Memory_PreviousInput[0]);
  rtb_sincos_o2_idx_0 = (real32_T)cos(stateEstimator_DW.Memory_PreviousInput[0]);
  rtb_DataTypeConversion1_idx_1 = (real32_T)sin
    (stateEstimator_DW.Memory_PreviousInput[1]);
  stateEstimator_B.DataTypeConversion2 = (real32_T)cos
    (stateEstimator_DW.Memory_PreviousInput[1]);
  y = (real32_T)sin(stateEstimator_DW.Memory_PreviousInput[2]);
  rtb_sincos_o2_idx_2_tmp = (real32_T)cos
    (stateEstimator_DW.Memory_PreviousInput[2]);

  /* Fcn: '<S18>/Fcn11' incorporates:
   *  Trigonometry: '<S18>/sincos'
   */
  stateEstimator_B.VectorConcatenate[0] = stateEstimator_B.DataTypeConversion2 *
    rtb_sincos_o2_idx_0;

  /* Fcn: '<S18>/Fcn21' incorporates:
   *  Fcn: '<S18>/Fcn22'
   *  Trigonometry: '<S18>/sincos'
   */
  rtb_VectorConcatenate_tmp = y * rtb_DataTypeConversion1_idx_1;
  stateEstimator_B.VectorConcatenate[1] = rtb_VectorConcatenate_tmp *
    rtb_sincos_o2_idx_0 - rtb_sincos_o2_idx_2_tmp * rtb_sincos_o2_idx_1;

  /* Fcn: '<S18>/Fcn31' incorporates:
   *  Fcn: '<S18>/Fcn32'
   *  Trigonometry: '<S18>/sincos'
   */
  rtb_VectorConcatenate_tmp_0 = rtb_sincos_o2_idx_2_tmp *
    rtb_DataTypeConversion1_idx_1;
  stateEstimator_B.VectorConcatenate[2] = rtb_VectorConcatenate_tmp_0 *
    rtb_sincos_o2_idx_0 + y * rtb_sincos_o2_idx_1;

  /* Fcn: '<S18>/Fcn12' incorporates:
   *  Trigonometry: '<S18>/sincos'
   */
  stateEstimator_B.VectorConcatenate[3] = stateEstimator_B.DataTypeConversion2 *
    rtb_sincos_o2_idx_1;

  /* Fcn: '<S18>/Fcn22' incorporates:
   *  Trigonometry: '<S18>/sincos'
   */
  stateEstimator_B.VectorConcatenate[4] = rtb_VectorConcatenate_tmp *
    rtb_sincos_o2_idx_1 + rtb_sincos_o2_idx_2_tmp * rtb_sincos_o2_idx_0;

  /* Fcn: '<S18>/Fcn32' incorporates:
   *  Trigonometry: '<S18>/sincos'
   */
  stateEstimator_B.VectorConcatenate[5] = rtb_VectorConcatenate_tmp_0 *
    rtb_sincos_o2_idx_1 - y * rtb_sincos_o2_idx_0;

  /* Fcn: '<S18>/Fcn13' incorporates:
   *  Trigonometry: '<S18>/sincos'
   */
  stateEstimator_B.VectorConcatenate[6] = -rtb_DataTypeConversion1_idx_1;

  /* Fcn: '<S18>/Fcn23' incorporates:
   *  Trigonometry: '<S18>/sincos'
   */
  stateEstimator_B.VectorConcatenate[7] = y *
    stateEstimator_B.DataTypeConversion2;

  /* Fcn: '<S18>/Fcn33' incorporates:
   *  Trigonometry: '<S18>/sincos'
   */
  stateEstimator_B.VectorConcatenate[8] = rtb_sincos_o2_idx_2_tmp *
    stateEstimator_B.DataTypeConversion2;

  /* Fcn: '<S75>/Fcn11' */
  stateEstimator_B.Reshape9to3x3columnmajor[0] =
    stateEstimator_B.DataTypeConversion2 * rtb_sincos_o2_idx_0;

  /* Fcn: '<S75>/Fcn21' incorporates:
   *  Fcn: '<S75>/Fcn22'
   */
  rtb_VectorConcatenate_tmp = y * rtb_DataTypeConversion1_idx_1;
  stateEstimator_B.Reshape9to3x3columnmajor[1] = rtb_VectorConcatenate_tmp *
    rtb_sincos_o2_idx_0 - rtb_sincos_o2_idx_2_tmp * rtb_sincos_o2_idx_1;

  /* Fcn: '<S75>/Fcn31' incorporates:
   *  Fcn: '<S75>/Fcn32'
   */
  rtb_VectorConcatenate_tmp_0 = rtb_sincos_o2_idx_2_tmp *
    rtb_DataTypeConversion1_idx_1;
  stateEstimator_B.Reshape9to3x3columnmajor[2] = rtb_VectorConcatenate_tmp_0 *
    rtb_sincos_o2_idx_0 + y * rtb_sincos_o2_idx_1;

  /* Fcn: '<S75>/Fcn12' */
  stateEstimator_B.Reshape9to3x3columnmajor[3] =
    stateEstimator_B.DataTypeConversion2 * rtb_sincos_o2_idx_1;

  /* Fcn: '<S75>/Fcn22' */
  stateEstimator_B.Reshape9to3x3columnmajor[4] = rtb_VectorConcatenate_tmp *
    rtb_sincos_o2_idx_1 + rtb_sincos_o2_idx_2_tmp * rtb_sincos_o2_idx_0;

  /* Fcn: '<S75>/Fcn32' */
  stateEstimator_B.Reshape9to3x3columnmajor[5] = rtb_VectorConcatenate_tmp_0 *
    rtb_sincos_o2_idx_1 - y * rtb_sincos_o2_idx_0;

  /* Fcn: '<S75>/Fcn13' */
  stateEstimator_B.Reshape9to3x3columnmajor[6] = -rtb_DataTypeConversion1_idx_1;

  /* Fcn: '<S75>/Fcn23' */
  stateEstimator_B.Reshape9to3x3columnmajor[7] = y *
    stateEstimator_B.DataTypeConversion2;

  /* Fcn: '<S75>/Fcn33' */
  stateEstimator_B.Reshape9to3x3columnmajor[8] = rtb_sincos_o2_idx_2_tmp *
    stateEstimator_B.DataTypeConversion2;

  /* Fcn: '<S137>/Fcn11' */
  stateEstimator_B.MathFunction_b[0] = stateEstimator_B.DataTypeConversion2 *
    rtb_sincos_o2_idx_0;

  /* Fcn: '<S137>/Fcn21' incorporates:
   *  Fcn: '<S137>/Fcn22'
   */
  rtb_VectorConcatenate_tmp = y * rtb_DataTypeConversion1_idx_1;
  stateEstimator_B.MathFunction_b[1] = rtb_VectorConcatenate_tmp *
    rtb_sincos_o2_idx_0 - rtb_sincos_o2_idx_2_tmp * rtb_sincos_o2_idx_1;

  /* Fcn: '<S137>/Fcn31' incorporates:
   *  Fcn: '<S137>/Fcn32'
   */
  rtb_VectorConcatenate_tmp_0 = rtb_sincos_o2_idx_2_tmp *
    rtb_DataTypeConversion1_idx_1;
  stateEstimator_B.MathFunction_b[2] = rtb_VectorConcatenate_tmp_0 *
    rtb_sincos_o2_idx_0 + y * rtb_sincos_o2_idx_1;

  /* Fcn: '<S137>/Fcn12' */
  stateEstimator_B.MathFunction_b[3] = stateEstimator_B.DataTypeConversion2 *
    rtb_sincos_o2_idx_1;

  /* Fcn: '<S137>/Fcn22' */
  stateEstimator_B.MathFunction_b[4] = rtb_VectorConcatenate_tmp *
    rtb_sincos_o2_idx_1 + rtb_sincos_o2_idx_2_tmp * rtb_sincos_o2_idx_0;

  /* Fcn: '<S137>/Fcn32' */
  stateEstimator_B.MathFunction_b[5] = rtb_VectorConcatenate_tmp_0 *
    rtb_sincos_o2_idx_1 - y * rtb_sincos_o2_idx_0;

  /* Fcn: '<S137>/Fcn13' */
  stateEstimator_B.MathFunction_b[6] = -rtb_DataTypeConversion1_idx_1;

  /* Fcn: '<S137>/Fcn23' */
  stateEstimator_B.MathFunction_b[7] = y * stateEstimator_B.DataTypeConversion2;

  /* Fcn: '<S137>/Fcn33' */
  stateEstimator_B.MathFunction_b[8] = rtb_sincos_o2_idx_2_tmp *
    stateEstimator_B.DataTypeConversion2;

  /* Math: '<S70>/Math Function' */
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 3; stateEstimator_B.j++) {
    stateEstimator_B.rtb_MathFunction_b_m[3 * stateEstimator_B.j] =
      stateEstimator_B.MathFunction_b[stateEstimator_B.j];
    stateEstimator_B.rtb_MathFunction_b_m[1 + 3 * stateEstimator_B.j] =
      stateEstimator_B.MathFunction_b[stateEstimator_B.j + 3];
    stateEstimator_B.rtb_MathFunction_b_m[2 + 3 * stateEstimator_B.j] =
      stateEstimator_B.MathFunction_b[stateEstimator_B.j + 6];
  }

  for (stateEstimator_B.j = 0; stateEstimator_B.j < 9; stateEstimator_B.j++) {
    stateEstimator_B.MathFunction_b[stateEstimator_B.j] =
      stateEstimator_B.rtb_MathFunction_b_m[stateEstimator_B.j];
  }

  /* End of Math: '<S70>/Math Function' */

  /* DataTypeConversion: '<S177>/Conversion' incorporates:
   *  Constant: '<S138>/KalmanGainM'
   */
  stateEstimator_B.Conversion_g[0] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value[0];
  stateEstimator_B.Conversion_g[1] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value[1];
  stateEstimator_B.Conversion_g[2] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value[2];
  stateEstimator_B.Conversion_g[3] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value[3];

  /* DataTypeConversion: '<S130>/Conversion' incorporates:
   *  Constant: '<S91>/KalmanGainM'
   */
  stateEstimator_B.Conversion_p[0] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value_d[0];
  stateEstimator_B.Conversion_p[1] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value_d[1];
  stateEstimator_B.Conversion_p[2] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value_d[2];
  stateEstimator_B.Conversion_p[3] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value_d[3];

  /* DataTypeConversion: '<S129>/Conversion' incorporates:
   *  Constant: '<S91>/KalmanGainL'
   */
  stateEstimator_B.Conversion_n4[0] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value[0];
  stateEstimator_B.Conversion_n4[1] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value[1];
  stateEstimator_B.Conversion_n4[2] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value[2];
  stateEstimator_B.Conversion_n4[3] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value[3];

  /* DataTypeConversion: '<S176>/Conversion' incorporates:
   *  Constant: '<S138>/KalmanGainL'
   */
  stateEstimator_B.Conversion_a[0] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value_h[0];
  stateEstimator_B.Conversion_a[1] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value_h[1];
  stateEstimator_B.Conversion_a[2] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value_h[2];
  stateEstimator_B.Conversion_a[3] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value_h[3];

  /* Delay: '<S73>/MemoryX' incorporates:
   *  Constant: '<S73>/X0'
   *  Reshape: '<S73>/ReshapeX0'
   */
  if (stateEstimator_DW.icLoad != 0) {
    stateEstimator_DW.MemoryX_DSTATE_d[0] = stateEstimator_P_g.X0_Value_e[0];
    stateEstimator_DW.MemoryX_DSTATE_d[1] = stateEstimator_P_g.X0_Value_e[1];
  }

  stateEstimator_B.MemoryX_m[0] = stateEstimator_DW.MemoryX_DSTATE_d[0];
  stateEstimator_B.MemoryX_m[1] = stateEstimator_DW.MemoryX_DSTATE_d[1];

  /* End of Delay: '<S73>/MemoryX' */
  for (stateEstimator_B.cff = 0; stateEstimator_B.cff < 2; stateEstimator_B.cff
       ++) {
    /* DiscreteFilter: '<S72>/IIRgyroz' */
    stateEstimator_B.memOffset = stateEstimator_B.cff * 5;
    rtb_DataTypeConversion1_idx_1 =
      stateEstimator_B.inverseIMU_gain[stateEstimator_B.cff + 3];
    stateEstimator_B.denIdx = 1;
    for (stateEstimator_B.j = 0; stateEstimator_B.j < 5; stateEstimator_B.j++) {
      rtb_DataTypeConversion1_idx_1 -=
        stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset +
        stateEstimator_B.j] *
        stateEstimator_P_g.IIRgyroz_DenCoef[stateEstimator_B.denIdx];
      stateEstimator_B.denIdx++;
    }

    stateEstimator_DW.IIRgyroz_tmp[stateEstimator_B.cff] =
      rtb_DataTypeConversion1_idx_1 / stateEstimator_P_g.IIRgyroz_DenCoef[0];
    rtb_sincos_o2_idx_1 = stateEstimator_P_g.IIRgyroz_NumCoef[0] *
      stateEstimator_DW.IIRgyroz_tmp[stateEstimator_B.cff];
    stateEstimator_B.denIdx = 1;
    for (stateEstimator_B.j = 0; stateEstimator_B.j < 5; stateEstimator_B.j++) {
      rtb_sincos_o2_idx_1 +=
        stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset +
        stateEstimator_B.j] *
        stateEstimator_P_g.IIRgyroz_NumCoef[stateEstimator_B.denIdx];
      stateEstimator_B.denIdx++;
    }

    /* SampleTimeMath: '<S79>/TSamp' incorporates:
     *  DiscreteFilter: '<S72>/IIRgyroz'
     *
     * About '<S79>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    rtb_sincos_o2_idx_1 *= stateEstimator_P_g.TSamp_WtEt;

    /* Sum: '<S79>/Diff' incorporates:
     *  UnitDelay: '<S79>/UD'
     *
     * Block description for '<S79>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S79>/UD':
     *
     *  Store in Global RAM
     */
    stateEstimator_DW.UD_DSTATE[stateEstimator_B.cff] = rtb_sincos_o2_idx_1 -
      stateEstimator_DW.UD_DSTATE[stateEstimator_B.cff];

    /* SampleTimeMath: '<S79>/TSamp'
     *
     * About '<S79>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    stateEstimator_B.TSamp[stateEstimator_B.cff] = rtb_sincos_o2_idx_1;
  }

  /* Gain: '<S69>/opticalFlowToVelocity_gain' */
  stateEstimator_B.opticalFlowToVelocity_gain[0] =
    stateEstimator_P_g.opticalFlowToVelocity_gain_Gain * arg_opticalFlow_datin[0];
  stateEstimator_B.opticalFlowToVelocity_gain[1] =
    stateEstimator_P_g.opticalFlowToVelocity_gain_Gain * arg_opticalFlow_datin[1];
  stateEstimator_B.opticalFlowToVelocity_gain[2] =
    stateEstimator_P_g.opticalFlowToVelocity_gain_Gain * arg_opticalFlow_datin[2];

  /* RelationalOperator: '<S19>/Compare' incorporates:
   *  Constant: '<S19>/Constant'
   *  Delay: '<S5>/Delay2'
   */
  stateEstimator_B.Compare = (stateEstimator_DW.Delay2_DSTATE >
    stateEstimator_P_g.outlierBelowFloor_const);

  /* Delay: '<S16>/MemoryX' incorporates:
   *  Constant: '<S16>/X0'
   *  DataTypeConversion: '<S16>/DataTypeConversionReset'
   *  Reshape: '<S16>/ReshapeX0'
   */
  if (stateEstimator_B.Compare) {
    stateEstimator_DW.icLoad_p = 1U;
  }

  if (stateEstimator_DW.icLoad_p != 0) {
    stateEstimator_DW.MemoryX_DSTATE[0] = stateEstimator_P_g.X0_Value[0];
    stateEstimator_DW.MemoryX_DSTATE[1] = stateEstimator_P_g.X0_Value[1];
  }

  /* Gain: '<S5>/invertzaxisGain' */
  stateEstimator_B.invertzaxisGain = (real_T)
    stateEstimator_P_g.invertzaxisGain_Gain *
    arg_sensordata_datin->altitude_sonar;

  /* DiscreteFilter: '<S17>/pressureFilter_IIR' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion'
   *  Gain: '<S5>/prsToAltGain'
   *  Sum: '<S7>/Sum2'
   */
  stateEstimator_DW.pressureFilter_IIR_tmp = ((((arg_sensordata_datin->prs -
    arg_sensorCalibration_datin[6]) * stateEstimator_P_g.prsToAltGain_Gain -
    stateEstimator_P_g.pressureFilter_IIR_DenCoef[1] *
    stateEstimator_DW.pressureFilter_IIR_states[0]) -
    stateEstimator_P_g.pressureFilter_IIR_DenCoef[2] *
    stateEstimator_DW.pressureFilter_IIR_states[1]) -
    stateEstimator_P_g.pressureFilter_IIR_DenCoef[3] *
    stateEstimator_DW.pressureFilter_IIR_states[2]) /
    stateEstimator_P_g.pressureFilter_IIR_DenCoef[0];

  /* DiscreteFilter: '<S17>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_tmp = (((stateEstimator_B.invertzaxisGain -
    stateEstimator_P_g.soonarFilter_IIR_DenCoef[1] *
    stateEstimator_DW.soonarFilter_IIR_states[0]) -
    stateEstimator_P_g.soonarFilter_IIR_DenCoef[2] *
    stateEstimator_DW.soonarFilter_IIR_states[1]) -
    stateEstimator_P_g.soonarFilter_IIR_DenCoef[3] *
    stateEstimator_DW.soonarFilter_IIR_states[2]) /
    stateEstimator_P_g.soonarFilter_IIR_DenCoef[0];

  /* Saturate: '<S17>/SaturationSonar' */
  if (stateEstimator_B.invertzaxisGain > -rtP_Sensors.altSensorMin) {
    stateEstimator_B.Sum_c = -rtP_Sensors.altSensorMin;
  } else if (stateEstimator_B.invertzaxisGain <
             stateEstimator_P_g.SaturationSonar_LowerSat) {
    stateEstimator_B.Sum_c = stateEstimator_P_g.SaturationSonar_LowerSat;
  } else {
    stateEstimator_B.Sum_c = stateEstimator_B.invertzaxisGain;
  }

  /* End of Saturate: '<S17>/SaturationSonar' */

  /* Logic: '<S17>/nicemeasurementor newupdateneeded' incorporates:
   *  Abs: '<S17>/Absestdiff'
   *  Abs: '<S17>/Absestdiff1'
   *  Abs: '<S17>/Absestdiff2'
   *  Constant: '<S64>/Constant'
   *  Constant: '<S65>/Constant'
   *  Constant: '<S66>/Constant'
   *  Constant: '<S67>/Constant'
   *  Delay: '<S5>/Delay2'
   *  DiscreteFilter: '<S17>/pressureFilter_IIR'
   *  DiscreteFilter: '<S17>/soonarFilter_IIR'
   *  Logic: '<S17>/findingoutliers'
   *  Logic: '<S17>/newupdateneeded'
   *  RelationalOperator: '<S64>/Compare'
   *  RelationalOperator: '<S65>/Compare'
   *  RelationalOperator: '<S66>/Compare'
   *  RelationalOperator: '<S67>/Compare'
   *  Sum: '<S17>/Add'
   *  Sum: '<S17>/Add1'
   *  Sum: '<S17>/Add2'
   */
  stateEstimator_B.nicemeasurementornewupdateneeded = (((fabs
    (stateEstimator_DW.Delay2_DSTATE - stateEstimator_B.Sum_c) <=
    stateEstimator_P_g.outlierJump_const) && (stateEstimator_B.invertzaxisGain <
    -rtP_Sensors.altSensorMin)) || ((fabs
    ((((stateEstimator_P_g.pressureFilter_IIR_NumCoef[0] *
        stateEstimator_DW.pressureFilter_IIR_tmp +
        stateEstimator_P_g.pressureFilter_IIR_NumCoef[1] *
        stateEstimator_DW.pressureFilter_IIR_states[0]) +
       stateEstimator_P_g.pressureFilter_IIR_NumCoef[2] *
       stateEstimator_DW.pressureFilter_IIR_states[1]) +
      stateEstimator_P_g.pressureFilter_IIR_NumCoef[3] *
      stateEstimator_DW.pressureFilter_IIR_states[2]) -
     stateEstimator_DW.Delay2_DSTATE) >=
    stateEstimator_P_g.currentEstimateVeryOffFromPressure_const) && (fabs
    ((((stateEstimator_P_g.soonarFilter_IIR_NumCoef[0] *
        stateEstimator_DW.soonarFilter_IIR_tmp +
        stateEstimator_P_g.soonarFilter_IIR_NumCoef[1] *
        stateEstimator_DW.soonarFilter_IIR_states[0]) +
       stateEstimator_P_g.soonarFilter_IIR_NumCoef[2] *
       stateEstimator_DW.soonarFilter_IIR_states[1]) +
      stateEstimator_P_g.soonarFilter_IIR_NumCoef[3] *
      stateEstimator_DW.soonarFilter_IIR_states[2]) -
     stateEstimator_DW.Delay2_DSTATE) >=
    stateEstimator_P_g.currentStateVeryOffsonarflt_const)));

  /* Outputs for Enabled SubSystem: '<S42>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S63>/Enable'
   */
  /* DataTypeConversion: '<S16>/DataTypeConversionEnable' */
  if (stateEstimator_B.nicemeasurementornewupdateneeded) {
    if (!stateEstimator_DW.EnabledSubsystem_MODE) {
      stateEstimator_DW.EnabledSubsystem_MODE = true;
    }

    /* Sum: '<S63>/Add1' incorporates:
     *  Constant: '<S16>/C'
     *  Delay: '<S16>/MemoryX'
     *  Product: '<S63>/Product'
     *  Reshape: '<S16>/Reshapey'
     */
    stateEstimator_B.Sum_c = stateEstimator_B.invertzaxisGain -
      (stateEstimator_P_g.C_Value[0] * stateEstimator_DW.MemoryX_DSTATE[0] +
       stateEstimator_P_g.C_Value[1] * stateEstimator_DW.MemoryX_DSTATE[1]);

    /* Product: '<S63>/Product2' incorporates:
     *  Constant: '<S20>/KalmanGainM'
     *  DataTypeConversion: '<S59>/Conversion'
     */
    stateEstimator_B.Product2[0] = stateEstimator_P_g.KalmanGainM_Value_p[0] *
      stateEstimator_B.Sum_c;
    stateEstimator_B.Product2[1] = stateEstimator_P_g.KalmanGainM_Value_p[1] *
      stateEstimator_B.Sum_c;
  } else {
    if (stateEstimator_DW.EnabledSubsystem_MODE) {
      /* Disable for Outport: '<S63>/deltax' */
      stateEstimator_B.Product2[0] = stateEstimator_P_g.deltax_Y0;
      stateEstimator_B.Product2[1] = stateEstimator_P_g.deltax_Y0;
      stateEstimator_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S42>/Enabled Subsystem' */

  /* Reshape: '<S16>/Reshapexhat' incorporates:
   *  Delay: '<S16>/MemoryX'
   *  Sum: '<S42>/Add'
   */
  stateEstimator_DW.Delay2_DSTATE = stateEstimator_B.Product2[0] +
    stateEstimator_DW.MemoryX_DSTATE[0];

  /* Sum: '<S42>/Add' incorporates:
   *  Delay: '<S16>/MemoryX'
   */
  stateEstimator_B.Sum_c = stateEstimator_B.Product2[1] +
    stateEstimator_DW.MemoryX_DSTATE[1];

  /* Abs: '<S72>/Abs' incorporates:
   *  Abs: '<S72>/Abs4'
   */
  rtb_DataTypeConversion1_idx_1 = (real32_T)fabs
    (stateEstimator_B.inverseIMU_gain[3]);

  /* Abs: '<S72>/Abs1' incorporates:
   *  Abs: '<S72>/Abs5'
   */
  stateEstimator_B.DataTypeConversion2 = (real32_T)fabs
    (stateEstimator_B.inverseIMU_gain[4]);

  /* Abs: '<S72>/Abs2' incorporates:
   *  Abs: '<S136>/Abs'
   */
  rtb_sincos_o2_idx_1 = (real32_T)fabs(stateEstimator_DW.Memory_PreviousInput[1]);

  /* Abs: '<S72>/Abs3' incorporates:
   *  Abs: '<S136>/Abs1'
   */
  rtb_sincos_o2_idx_0 = (real32_T)fabs(stateEstimator_DW.Memory_PreviousInput[2]);

  /* Logic: '<S72>/Logical Operator3' incorporates:
   *  Abs: '<S72>/Abs'
   *  Abs: '<S72>/Abs1'
   *  Abs: '<S72>/Abs2'
   *  Abs: '<S72>/Abs3'
   *  Abs: '<S72>/Abs6'
   *  Abs: '<S72>/Abs7'
   *  Abs: '<S72>/Abs8'
   *  Abs: '<S72>/Abs9'
   *  Constant: '<S80>/Constant'
   *  Constant: '<S81>/Constant'
   *  Constant: '<S82>/Constant'
   *  Constant: '<S83>/Constant'
   *  Constant: '<S84>/Constant'
   *  Constant: '<S85>/Constant'
   *  Constant: '<S86>/Constant'
   *  Constant: '<S87>/Constant'
   *  Constant: '<S88>/Constant'
   *  Constant: '<S89>/Constant'
   *  Constant: '<S90>/Constant'
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   *  Delay: '<S69>/Delay'
   *  Logic: '<S72>/Logical Operator'
   *  Logic: '<S72>/Logical Operator1'
   *  Logic: '<S72>/Logical Operator2'
   *  RelationalOperator: '<S80>/Compare'
   *  RelationalOperator: '<S81>/Compare'
   *  RelationalOperator: '<S82>/Compare'
   *  RelationalOperator: '<S83>/Compare'
   *  RelationalOperator: '<S84>/Compare'
   *  RelationalOperator: '<S85>/Compare'
   *  RelationalOperator: '<S86>/Compare'
   *  RelationalOperator: '<S87>/Compare'
   *  RelationalOperator: '<S88>/Compare'
   *  RelationalOperator: '<S89>/Compare'
   *  RelationalOperator: '<S90>/Compare'
   *  Reshape: '<S16>/Reshapexhat'
   *  Sum: '<S72>/Add'
   */
  stateEstimator_B.LogicalOperator3 = ((((rtb_sincos_o2_idx_1 <=
    stateEstimator_P_g.maxp_const) && (rtb_sincos_o2_idx_0 <=
    stateEstimator_P_g.maxq_const) && (rtb_DataTypeConversion1_idx_1 <=
    stateEstimator_P_g.maxw1_const) && (stateEstimator_B.DataTypeConversion2 <=
    stateEstimator_P_g.maxw2_const) && ((real32_T)fabs
    (stateEstimator_DW.UD_DSTATE[0]) <= stateEstimator_P_g.maxdw1_const) &&
    ((real32_T)fabs(stateEstimator_DW.UD_DSTATE[1]) <=
     stateEstimator_P_g.maxdw2_const)) || ((rtb_DataTypeConversion1_idx_1 <=
    stateEstimator_P_g.maxp2_const) && (stateEstimator_B.DataTypeConversion2 <=
    stateEstimator_P_g.maxq2_const))) && ((real32_T)fabs
    (stateEstimator_B.opticalFlowToVelocity_gain[0] -
     stateEstimator_DW.Delay_DSTATE[0]) <= stateEstimator_P_g.maxw3_const) &&
    ((real32_T)fabs(stateEstimator_B.opticalFlowToVelocity_gain[1] -
                    stateEstimator_DW.Delay_DSTATE[1]) <=
     stateEstimator_P_g.maxw4_const) && ((real32_T)
    stateEstimator_DW.Delay2_DSTATE <= stateEstimator_P_g.minHeightforOF_const));

  /* DataTypeConversion: '<S73>/DataTypeConversionEnable' */
  rtb_DataTypeConversionEnable_i = stateEstimator_B.LogicalOperator3;

  /* Reshape: '<S73>/Reshapey' */
  stateEstimator_B.Reshapey_o[0] = stateEstimator_B.opticalFlowToVelocity_gain[0];
  stateEstimator_B.Reshapey_o[1] = stateEstimator_B.opticalFlowToVelocity_gain[1];

  /* Outputs for Enabled SubSystem: '<S113>/Enabled Subsystem' */
  /* Constant: '<S73>/C' */
  stateEstimator_EnabledSubsystem(rtb_DataTypeConversionEnable_i,
    stateEstimator_B.Conversion_p, stateEstimator_P_g.C_Value_f,
    stateEstimator_B.Reshapey_o, stateEstimator_B.MemoryX_m,
    stateEstimator_B.Product2_k, &stateEstimator_DW.EnabledSubsystem_f,
    &stateEstimator_P_g.EnabledSubsystem_f);

  /* End of Outputs for SubSystem: '<S113>/Enabled Subsystem' */

  /* Reshape: '<S73>/Reshapexhat' incorporates:
   *  Delay: '<S69>/Delay'
   *  Sum: '<S113>/Add'
   */
  stateEstimator_DW.Delay_DSTATE[0] = stateEstimator_B.Product2_k[0] +
    stateEstimator_B.MemoryX_m[0];
  stateEstimator_DW.Delay_DSTATE[1] = stateEstimator_B.Product2_k[1] +
    stateEstimator_B.MemoryX_m[1];

  /* Product: '<S5>/Product1' incorporates:
   *  DataTypeConversion: '<S5>/Data Type Conversion1'
   *  Delay: '<S3>/Delay1'
   *  Reshape: '<S16>/Reshapexhat'
   *  SignalConversion: '<S5>/TmpSignal ConversionAtProduct1Inport2'
   */
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 3; stateEstimator_B.j++) {
    stateEstimator_B.rtb_VectorConcatenate_c[stateEstimator_B.j] =
      stateEstimator_B.VectorConcatenate[stateEstimator_B.j + 6] *
      stateEstimator_B.Sum_c + ((real_T)
      stateEstimator_B.VectorConcatenate[stateEstimator_B.j + 3] *
      stateEstimator_DW.Delay1_DSTATE[1] + (real_T)
      stateEstimator_B.VectorConcatenate[stateEstimator_B.j] *
      stateEstimator_DW.Delay1_DSTATE[0]);
  }

  /* End of Product: '<S5>/Product1' */

  /* RelationalOperator: '<S74>/Compare' incorporates:
   *  Constant: '<S74>/Constant'
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   *  Reshape: '<S16>/Reshapexhat'
   */
  rtb_Compare_i = ((real32_T)stateEstimator_DW.Delay2_DSTATE <=
                   stateEstimator_P_g.DeactivateAccelerationIfOFisnotusedduetolowaltitude_const);

  /* Logic: '<S71>/Logical Operator' incorporates:
   *  Constant: '<S76>/Constant'
   *  Constant: '<S77>/Constant'
   *  RelationalOperator: '<S76>/Compare'
   *  RelationalOperator: '<S77>/Compare'
   */
  rtb_LogicalOperator_cg = ((stateEstimator_B.opticalFlowToVelocity_gain[0] !=
    stateEstimator_P_g.donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con)
    || (stateEstimator_B.opticalFlowToVelocity_gain[1] !=
        stateEstimator_P_g.donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co));
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 3; stateEstimator_B.j++) {
    /* Product: '<S70>/Product' incorporates:
     *  DataTypeConversion: '<S5>/Data Type Conversion2'
     *  Delay: '<S69>/Delay'
     *  SignalConversion: '<S70>/TmpSignal ConversionAtProductInport2'
     */
    stateEstimator_B.Product[stateEstimator_B.j] = 0.0F;
    stateEstimator_B.Product[stateEstimator_B.j] +=
      stateEstimator_B.MathFunction_b[stateEstimator_B.j] *
      stateEstimator_DW.Delay_DSTATE[0];
    stateEstimator_B.Product[stateEstimator_B.j] +=
      stateEstimator_B.MathFunction_b[stateEstimator_B.j + 3] *
      stateEstimator_DW.Delay_DSTATE[1];
    stateEstimator_B.Product[stateEstimator_B.j] +=
      stateEstimator_B.MathFunction_b[stateEstimator_B.j + 6] * (real32_T)
      stateEstimator_B.rtb_VectorConcatenate_c[2];

    /* Sum: '<S5>/Sum' incorporates:
     *  Constant: '<S5>/gravity'
     *  DiscreteFir: '<S7>/FIR_IMUaccel'
     *  Math: '<S5>/Math Function'
     *  Product: '<S5>/Product'
     */
    stateEstimator_B.Sum[stateEstimator_B.j] =
      ((stateEstimator_B.VectorConcatenate[3 * stateEstimator_B.j + 1] *
        stateEstimator_B.FIR_IMUaccel[1] + stateEstimator_B.VectorConcatenate[3 *
        stateEstimator_B.j] * stateEstimator_B.FIR_IMUaccel[0]) +
       stateEstimator_B.VectorConcatenate[3 * stateEstimator_B.j + 2] *
       rtb_sincos_o2_idx_2) +
      stateEstimator_P_g.gravity_Value_k[stateEstimator_B.j];

    /* Sum: '<S71>/Add' incorporates:
     *  Constant: '<S71>/gravity'
     *  Product: '<S71>/Product1'
     */
    stateEstimator_B.rtb_FIR_IMUaccel_k[stateEstimator_B.j] =
      stateEstimator_B.FIR_IMUaccel[stateEstimator_B.j] -
      ((stateEstimator_B.Reshape9to3x3columnmajor[stateEstimator_B.j + 3] *
        stateEstimator_P_g.gravity_Value[1] +
        stateEstimator_B.Reshape9to3x3columnmajor[stateEstimator_B.j] *
        stateEstimator_P_g.gravity_Value[0]) +
       stateEstimator_B.Reshape9to3x3columnmajor[stateEstimator_B.j + 6] *
       stateEstimator_P_g.gravity_Value[2]);
  }

  /* Product: '<S71>/Product' incorporates:
   *  Gain: '<S71>/gainaccinput'
   */
  stateEstimator_B.Product_p[0] = (real32_T)
    (stateEstimator_P_g.gainaccinput_Gain * stateEstimator_B.rtb_FIR_IMUaccel_k
     [0]) * (real32_T)rtb_LogicalOperator_cg * (real32_T)rtb_Compare_i;
  stateEstimator_B.Product_p[1] = (real32_T)
    (stateEstimator_P_g.gainaccinput_Gain * stateEstimator_B.rtb_FIR_IMUaccel_k
     [1]) * (real32_T)rtb_LogicalOperator_cg * (real32_T)rtb_Compare_i;

  /* Reshape: '<S73>/Reshapeu' */
  stateEstimator_B.Reshapeu_h[0] = stateEstimator_B.Product_p[0];
  stateEstimator_B.Reshapeu_h[1] = stateEstimator_B.Product_p[1];

  /* DataTypeConversion: '<S104>/Conversion' */
  stateEstimator_B.Conversion_j[0] = stateEstimator_B.MemoryX_m[0];
  stateEstimator_B.Conversion_j[1] = stateEstimator_B.MemoryX_m[1];

  /* Outputs for Enabled SubSystem: '<S108>/MeasurementUpdate' */
  /* Constant: '<S73>/C' incorporates:
   *  Constant: '<S73>/D'
   */
  stateEstimator_MeasurementUpdate(rtb_DataTypeConversionEnable_i,
    stateEstimator_B.Conversion_n4, stateEstimator_B.Reshapey_o,
    stateEstimator_P_g.C_Value_f, stateEstimator_B.Conversion_j,
    stateEstimator_P_g.D_Value_f, stateEstimator_B.Reshapeu_h,
    stateEstimator_B.Product3_m, &stateEstimator_DW.MeasurementUpdate_e,
    &stateEstimator_P_g.MeasurementUpdate_e);

  /* End of Outputs for SubSystem: '<S108>/MeasurementUpdate' */

  /* Reshape: '<S135>/Reshapeu' */
  stateEstimator_B.Reshapeu_i[0] = stateEstimator_B.Product[0];
  stateEstimator_B.Reshapeu_i[1] = stateEstimator_B.Product[1];

  /* Delay: '<S135>/MemoryX' incorporates:
   *  Constant: '<S135>/X0'
   *  Reshape: '<S135>/ReshapeX0'
   */
  if (stateEstimator_DW.icLoad_g != 0) {
    stateEstimator_DW.MemoryX_DSTATE_dl[0] = stateEstimator_P_g.X0_Value_j[0];
    stateEstimator_DW.MemoryX_DSTATE_dl[1] = stateEstimator_P_g.X0_Value_j[1];
  }

  stateEstimator_B.MemoryX_f[0] = stateEstimator_DW.MemoryX_DSTATE_dl[0];
  stateEstimator_B.MemoryX_f[1] = stateEstimator_DW.MemoryX_DSTATE_dl[1];

  /* End of Delay: '<S135>/MemoryX' */

  /* DataTypeConversion: '<S151>/Conversion' */
  stateEstimator_B.Conversion_pu[0] = stateEstimator_B.MemoryX_f[0];
  stateEstimator_B.Conversion_pu[1] = stateEstimator_B.MemoryX_f[1];

  /* Sum: '<S136>/Add1' incorporates:
   *  Delay: '<S70>/Delay'
   */
  stateEstimator_DW.Delay_DSTATE_l[0] = arg_posVIS_datin[0] -
    stateEstimator_DW.Delay_DSTATE_l[0];

  /* Math: '<S136>/Math Function' incorporates:
   *  Constant: '<S136>/Constant'
   *  Delay: '<S70>/Delay'
   */
  stateEstimator_B.DataTypeConversion2 = (real32_T)floor
    (stateEstimator_P_g.Constant_Value_e);
  if ((stateEstimator_DW.Delay_DSTATE_l[0] < 0.0F) &&
      (stateEstimator_P_g.Constant_Value_e >
       stateEstimator_B.DataTypeConversion2)) {
    stateEstimator_DW.Delay_DSTATE_l[0] = -rt_powf_snf
      (-stateEstimator_DW.Delay_DSTATE_l[0], stateEstimator_P_g.Constant_Value_e);
  } else {
    stateEstimator_DW.Delay_DSTATE_l[0] = rt_powf_snf
      (stateEstimator_DW.Delay_DSTATE_l[0], stateEstimator_P_g.Constant_Value_e);
  }

  /* Sum: '<S136>/Add1' incorporates:
   *  Delay: '<S70>/Delay'
   */
  stateEstimator_DW.Delay_DSTATE_l[1] = arg_posVIS_datin[1] -
    stateEstimator_DW.Delay_DSTATE_l[1];

  /* Math: '<S136>/Math Function' incorporates:
   *  Constant: '<S136>/Constant'
   *  Delay: '<S70>/Delay'
   */
  if ((stateEstimator_DW.Delay_DSTATE_l[1] < 0.0F) &&
      (stateEstimator_P_g.Constant_Value_e >
       stateEstimator_B.DataTypeConversion2)) {
    stateEstimator_DW.Delay_DSTATE_l[1] = -rt_powf_snf
      (-stateEstimator_DW.Delay_DSTATE_l[1], stateEstimator_P_g.Constant_Value_e);
  } else {
    stateEstimator_DW.Delay_DSTATE_l[1] = rt_powf_snf
      (stateEstimator_DW.Delay_DSTATE_l[1], stateEstimator_P_g.Constant_Value_e);
  }

  /* Logic: '<S136>/Logical Operator3' incorporates:
   *  Constant: '<S182>/Constant'
   *  Constant: '<S183>/Constant'
   *  Constant: '<S184>/Constant'
   *  Constant: '<S185>/Constant'
   *  Delay: '<S70>/Delay'
   *  RelationalOperator: '<S182>/Compare'
   *  RelationalOperator: '<S183>/Compare'
   *  RelationalOperator: '<S184>/Compare'
   *  RelationalOperator: '<S185>/Compare'
   *  Sqrt: '<S136>/Sqrt'
   *  Sum: '<S136>/Sum of Elements'
   */
  stateEstimator_B.LogicalOperator3_o = ((arg_posVIS_datin[0] !=
    stateEstimator_P_g.checkifPosavailable_const) && (rtb_sincos_o2_idx_1 <=
    stateEstimator_P_g.maxp3_const) && (rtb_sincos_o2_idx_0 <=
    stateEstimator_P_g.maxq3_const) && ((real32_T)sqrt
    (stateEstimator_DW.Delay_DSTATE_l[0] + stateEstimator_DW.Delay_DSTATE_l[1]) <
    stateEstimator_P_g.planarjumpsVISPOS_const));

  /* DataTypeConversion: '<S135>/DataTypeConversionEnable' */
  rtb_DataTypeConversionEnable_h = stateEstimator_B.LogicalOperator3_o;

  /* Reshape: '<S135>/Reshapey' */
  stateEstimator_B.Reshapey_a[0] = arg_posVIS_datin[0];
  stateEstimator_B.Reshapey_a[1] = arg_posVIS_datin[1];

  /* Outputs for Enabled SubSystem: '<S155>/MeasurementUpdate' */
  /* Constant: '<S135>/C' incorporates:
   *  Constant: '<S135>/D'
   */
  stateEstimator_MeasurementUpdate(rtb_DataTypeConversionEnable_h,
    stateEstimator_B.Conversion_a, stateEstimator_B.Reshapey_a,
    stateEstimator_P_g.C_Value_p, stateEstimator_B.Conversion_pu,
    stateEstimator_P_g.D_Value_b, stateEstimator_B.Reshapeu_i,
    stateEstimator_B.Product3_j, &stateEstimator_DW.MeasurementUpdate_b,
    &stateEstimator_P_g.MeasurementUpdate_b);

  /* End of Outputs for SubSystem: '<S155>/MeasurementUpdate' */

  /* Outputs for Enabled SubSystem: '<S160>/Enabled Subsystem' */
  stateEstimator_EnabledSubsystem(rtb_DataTypeConversionEnable_h,
    stateEstimator_B.Conversion_g, stateEstimator_P_g.C_Value_p,
    stateEstimator_B.Reshapey_a, stateEstimator_B.MemoryX_f,
    stateEstimator_B.Product2_e, &stateEstimator_DW.EnabledSubsystem_m,
    &stateEstimator_P_g.EnabledSubsystem_m);

  /* End of Outputs for SubSystem: '<S160>/Enabled Subsystem' */

  /* Reshape: '<S135>/Reshapexhat' incorporates:
   *  Delay: '<S70>/Delay'
   *  Sum: '<S160>/Add'
   */
  stateEstimator_DW.Delay_DSTATE_l[0] = stateEstimator_B.Product2_e[0] +
    stateEstimator_B.MemoryX_f[0];
  stateEstimator_DW.Delay_DSTATE_l[1] = stateEstimator_B.Product2_e[1] +
    stateEstimator_B.MemoryX_f[1];

  /* DiscreteIntegrator: '<S70>/SimplyIntegrateVelocity' */
  if (arg_controlModePosVSOrient_flagin &&
      (stateEstimator_DW.SimplyIntegrateVelocity_PrevResetState <= 0)) {
    stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[0] =
      stateEstimator_P_g.SimplyIntegrateVelocity_IC;
    stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[1] =
      stateEstimator_P_g.SimplyIntegrateVelocity_IC;
  }

  /* Switch: '<S70>/UseIPPosSwitch' incorporates:
   *  Delay: '<S70>/Delay'
   *  DiscreteIntegrator: '<S70>/SimplyIntegrateVelocity'
   */
  if (arg_usePosVIS_flagin > stateEstimator_P_g.UseIPPosSwitch_Threshold) {
    stateEstimator_B.SimplyIntegrateVelocity[0] =
      stateEstimator_DW.Delay_DSTATE_l[0];
    stateEstimator_B.SimplyIntegrateVelocity[1] =
      stateEstimator_DW.Delay_DSTATE_l[1];
  } else {
    stateEstimator_B.SimplyIntegrateVelocity[0] =
      stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[0];
    stateEstimator_B.SimplyIntegrateVelocity[1] =
      stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[1];
  }

  /* End of Switch: '<S70>/UseIPPosSwitch' */

  /* Outputs for Enabled SubSystem: '<S37>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S62>/Enable'
   */
  /* DataTypeConversion: '<S16>/DataTypeConversionEnable' */
  if (stateEstimator_B.nicemeasurementornewupdateneeded) {
    if (!stateEstimator_DW.MeasurementUpdate_MODE) {
      stateEstimator_DW.MeasurementUpdate_MODE = true;
    }

    /* Sum: '<S62>/Sum' incorporates:
     *  Constant: '<S16>/C'
     *  Constant: '<S16>/D'
     *  Delay: '<S16>/MemoryX'
     *  Product: '<S62>/C[k]*xhat[k|k-1]'
     *  Product: '<S62>/D[k]*u[k]'
     *  Reshape: '<S16>/Reshapeu'
     *  Reshape: '<S16>/Reshapey'
     *  Sum: '<S62>/Add1'
     */
    stateEstimator_B.Sum_c = stateEstimator_B.invertzaxisGain -
      ((stateEstimator_P_g.C_Value[0] * stateEstimator_DW.MemoryX_DSTATE[0] +
        stateEstimator_P_g.C_Value[1] * stateEstimator_DW.MemoryX_DSTATE[1]) +
       stateEstimator_P_g.D_Value * stateEstimator_B.Sum[2]);

    /* Product: '<S62>/Product3' incorporates:
     *  Constant: '<S20>/KalmanGainL'
     *  DataTypeConversion: '<S58>/Conversion'
     */
    stateEstimator_B.Product3[0] = stateEstimator_P_g.KalmanGainL_Value_e[0] *
      stateEstimator_B.Sum_c;
    stateEstimator_B.Product3[1] = stateEstimator_P_g.KalmanGainL_Value_e[1] *
      stateEstimator_B.Sum_c;
  } else {
    if (stateEstimator_DW.MeasurementUpdate_MODE) {
      /* Disable for Outport: '<S62>/L*(y[k]-yhat[k|k-1])' */
      stateEstimator_B.Product3[0] = stateEstimator_P_g.Lykyhatkk1_Y0;
      stateEstimator_B.Product3[1] = stateEstimator_P_g.Lykyhatkk1_Y0;
      stateEstimator_DW.MeasurementUpdate_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S37>/MeasurementUpdate' */

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  BusCreator: '<Root>/BusConversion_InsertedFor_MATLAB Function_at_inport_0'
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   *  DataTypeConversion: '<S5>/Data Type Conversion2'
   *  Delay: '<S69>/Delay'
   *  DiscreteFilter: '<S7>/IIR_IMUgyro_r'
   *  Reshape: '<S16>/Reshapexhat'
   *  SignalConversion: '<S4>/TmpSignal ConversionAtProductInport2'
   */
  arg_states_estimout->X = stateEstimator_B.SimplyIntegrateVelocity[0];
  arg_states_estimout->Y = stateEstimator_B.SimplyIntegrateVelocity[1];
  arg_states_estimout->Z = (real32_T)stateEstimator_DW.Delay2_DSTATE;
  arg_states_estimout->yaw = stateEstimator_DW.Memory_PreviousInput[0];
  arg_states_estimout->pitch = stateEstimator_DW.Memory_PreviousInput[1];
  arg_states_estimout->roll = stateEstimator_DW.Memory_PreviousInput[2];
  arg_states_estimout->dx = stateEstimator_DW.Delay_DSTATE[0];
  arg_states_estimout->dy = stateEstimator_DW.Delay_DSTATE[1];
  arg_states_estimout->dz = (real32_T)stateEstimator_B.rtb_VectorConcatenate_c[2];
  arg_states_estimout->p = stateEstimator_B.inverseIMU_gain[3];
  arg_states_estimout->q = stateEstimator_B.inverseIMU_gain[4];
  arg_states_estimout->r = rtb_DataTypeConversion1_idx_0;

  /* MATLAB Function: '<Root>/MATLAB Function1' */
  stateEstimator_B.sensordata = *arg_sensordata_datin;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function1'
   */
  if (!*arg_takeoffCommand) {
    arg_states_estimout->X = 0.0F;
    arg_states_estimout->Y = 0.0F;
    arg_states_estimout->Z = 0.0F;
    arg_states_estimout->yaw = 0.0F;
    arg_states_estimout->pitch = 0.0F;
    arg_states_estimout->roll = 0.0F;
    arg_states_estimout->dx = 0.0F;
    arg_states_estimout->dy = 0.0F;
    arg_states_estimout->dz = 0.0F;
    arg_states_estimout->p = 0.0F;
    arg_states_estimout->q = 0.0F;
    arg_states_estimout->r = 0.0F;
    stateEstimator_B.sensordata.ddx = 0.0F;
    stateEstimator_B.sensordata.ddy = 0.0F;
    stateEstimator_B.sensordata.ddz = 0.0F;
    stateEstimator_B.sensordata.p = 0.0F;
    stateEstimator_B.sensordata.q = 0.0F;
    stateEstimator_B.sensordata.r = 0.0F;
    stateEstimator_B.sensordata.altitude_sonar = 0.0F;
  }

  /* ManualSwitch: '<S16>/ManualSwitchPZ' incorporates:
   *  Constant: '<S16>/P0'
   *  Constant: '<S20>/CovarianceZ'
   *  DataTypeConversion: '<S61>/Conversion'
   */
  if (stateEstimator_P_g.ManualSwitchPZ_CurrentSetting == 1) {
    stateEstimator_B.ManualSwitchPZ[0] = stateEstimator_P_g.CovarianceZ_Value[0];
    stateEstimator_B.ManualSwitchPZ[1] = stateEstimator_P_g.CovarianceZ_Value[1];
    stateEstimator_B.ManualSwitchPZ[2] = stateEstimator_P_g.CovarianceZ_Value[2];
    stateEstimator_B.ManualSwitchPZ[3] = stateEstimator_P_g.CovarianceZ_Value[3];
  } else {
    stateEstimator_B.ManualSwitchPZ[0] = stateEstimator_P_g.P0_Value[0];
    stateEstimator_B.ManualSwitchPZ[1] = stateEstimator_P_g.P0_Value[1];
    stateEstimator_B.ManualSwitchPZ[2] = stateEstimator_P_g.P0_Value[2];
    stateEstimator_B.ManualSwitchPZ[3] = stateEstimator_P_g.P0_Value[3];
  }

  /* End of ManualSwitch: '<S16>/ManualSwitchPZ' */

  /* ManualSwitch: '<S73>/ManualSwitchPZ' incorporates:
   *  Constant: '<S73>/P0'
   *  Constant: '<S91>/CovarianceZ'
   *  DataTypeConversion: '<S132>/Conversion'
   */
  if (stateEstimator_P_g.ManualSwitchPZ_CurrentSetting_i == 1) {
    stateEstimator_B.ManualSwitchPZ_m[0] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_b[0];
    stateEstimator_B.ManualSwitchPZ_m[1] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_b[1];
    stateEstimator_B.ManualSwitchPZ_m[2] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_b[2];
    stateEstimator_B.ManualSwitchPZ_m[3] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_b[3];
  } else {
    stateEstimator_B.ManualSwitchPZ_m[0] = stateEstimator_P_g.P0_Value_m[0];
    stateEstimator_B.ManualSwitchPZ_m[1] = stateEstimator_P_g.P0_Value_m[1];
    stateEstimator_B.ManualSwitchPZ_m[2] = stateEstimator_P_g.P0_Value_m[2];
    stateEstimator_B.ManualSwitchPZ_m[3] = stateEstimator_P_g.P0_Value_m[3];
  }

  /* End of ManualSwitch: '<S73>/ManualSwitchPZ' */

  /* ManualSwitch: '<S135>/ManualSwitchPZ' incorporates:
   *  Constant: '<S135>/P0'
   *  Constant: '<S138>/CovarianceZ'
   *  DataTypeConversion: '<S179>/Conversion'
   */
  if (stateEstimator_P_g.ManualSwitchPZ_CurrentSetting_b == 1) {
    stateEstimator_B.ManualSwitchPZ_p[0] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_l[0];
    stateEstimator_B.ManualSwitchPZ_p[1] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_l[1];
    stateEstimator_B.ManualSwitchPZ_p[2] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_l[2];
    stateEstimator_B.ManualSwitchPZ_p[3] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_l[3];
  } else {
    stateEstimator_B.ManualSwitchPZ_p[0] = stateEstimator_P_g.P0_Value_h[0];
    stateEstimator_B.ManualSwitchPZ_p[1] = stateEstimator_P_g.P0_Value_h[1];
    stateEstimator_B.ManualSwitchPZ_p[2] = stateEstimator_P_g.P0_Value_h[2];
    stateEstimator_B.ManualSwitchPZ_p[3] = stateEstimator_P_g.P0_Value_h[3];
  }

  /* End of ManualSwitch: '<S135>/ManualSwitchPZ' */

  /* Reshape: '<S16>/Reshapeyhat' incorporates:
   *  Constant: '<S21>/Constant'
   */
  rtb_Reshapeyhat = stateEstimator_P_g.Constant_Value_a;

  /* Reshape: '<S73>/Reshapeyhat' incorporates:
   *  Constant: '<S92>/Constant'
   */
  rtb_Reshapeyhat_a = stateEstimator_P_g.Constant_Value_mn;

  /* DataTypeConversion: '<S73>/DataTypeConversionReset' incorporates:
   *  Constant: '<S73>/Reset'
   */
  rtb_DataTypeConversionReset_a = stateEstimator_P_g.Reset_Value;

  /* Reshape: '<S135>/Reshapeyhat' incorporates:
   *  Constant: '<S139>/Constant'
   */
  rtb_Reshapeyhat_l = stateEstimator_P_g.Constant_Value_l;

  /* DataTypeConversion: '<S135>/DataTypeConversionReset' incorporates:
   *  Constant: '<S135>/Reset'
   */
  rtb_DataTypeConversionReset_i = stateEstimator_P_g.Reset_Value_a;

  /* Update for DiscreteFilter: '<S7>/IIR_IMUgyro_r' */
  stateEstimator_DW.IIR_IMUgyro_r_states[4] =
    stateEstimator_DW.IIR_IMUgyro_r_states[3];
  stateEstimator_DW.IIR_IMUgyro_r_states[3] =
    stateEstimator_DW.IIR_IMUgyro_r_states[2];
  stateEstimator_DW.IIR_IMUgyro_r_states[2] =
    stateEstimator_DW.IIR_IMUgyro_r_states[1];
  stateEstimator_DW.IIR_IMUgyro_r_states[1] =
    stateEstimator_DW.IIR_IMUgyro_r_states[0];
  stateEstimator_DW.IIR_IMUgyro_r_states[0] =
    stateEstimator_DW.IIR_IMUgyro_r_tmp;

  /* Update for DiscreteFir: '<S7>/FIR_IMUaccel' */
  /* Update circular buffer index */
  stateEstimator_DW.FIR_IMUaccel_circBuf--;
  if (stateEstimator_DW.FIR_IMUaccel_circBuf < 0) {
    stateEstimator_DW.FIR_IMUaccel_circBuf = 4;
  }

  /* Update circular buffer */
  stateEstimator_DW.FIR_IMUaccel_states[stateEstimator_DW.FIR_IMUaccel_circBuf] =
    stateEstimator_B.inverseIMU_gain[0];
  stateEstimator_DW.FIR_IMUaccel_states[stateEstimator_DW.FIR_IMUaccel_circBuf +
    5] = stateEstimator_B.inverseIMU_gain[1];
  stateEstimator_DW.FIR_IMUaccel_states[stateEstimator_DW.FIR_IMUaccel_circBuf +
    10] = stateEstimator_B.inverseIMU_gain[2];

  /* End of Update for DiscreteFir: '<S7>/FIR_IMUaccel' */

  /* Update for Delay: '<S73>/MemoryX' incorporates:
   *  Constant: '<S73>/A'
   *  Constant: '<S73>/B'
   *  Product: '<S108>/A[k]*xhat[k|k-1]'
   *  Product: '<S108>/B[k]*u[k]'
   *  Sum: '<S108>/Add'
   */
  stateEstimator_DW.icLoad = 0U;
  stateEstimator_DW.MemoryX_DSTATE_d[0] = ((stateEstimator_P_g.B_Value_p[0] *
    stateEstimator_B.Reshapeu_h[0] + stateEstimator_P_g.B_Value_p[2] *
    stateEstimator_B.Reshapeu_h[1]) + (stateEstimator_P_g.A_Value_c[0] *
    stateEstimator_B.Conversion_j[0] + stateEstimator_P_g.A_Value_c[2] *
    stateEstimator_B.Conversion_j[1])) + stateEstimator_B.Product3_m[0];
  stateEstimator_DW.MemoryX_DSTATE_d[1] = ((stateEstimator_P_g.B_Value_p[1] *
    stateEstimator_B.Reshapeu_h[0] + stateEstimator_P_g.B_Value_p[3] *
    stateEstimator_B.Reshapeu_h[1]) + (stateEstimator_P_g.A_Value_c[1] *
    stateEstimator_B.Conversion_j[0] + stateEstimator_P_g.A_Value_c[3] *
    stateEstimator_B.Conversion_j[1])) + stateEstimator_B.Product3_m[1];

  /* Update for Delay: '<S16>/MemoryX' */
  stateEstimator_DW.icLoad_p = 0U;
  for (stateEstimator_B.cff = 0; stateEstimator_B.cff < 2; stateEstimator_B.cff
       ++) {
    /* Update for DiscreteFilter: '<S72>/IIRgyroz' */
    stateEstimator_B.memOffset = stateEstimator_B.cff * 5;
    stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset + 4] =
      stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset + 3];
    stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset + 3] =
      stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset + 2];
    stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset + 2] =
      stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset + 1];
    stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset + 1] =
      stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset];
    stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset] =
      stateEstimator_DW.IIRgyroz_tmp[stateEstimator_B.cff];

    /* Update for UnitDelay: '<S79>/UD'
     *
     * Block description for '<S79>/UD':
     *
     *  Store in Global RAM
     */
    stateEstimator_DW.UD_DSTATE[stateEstimator_B.cff] =
      stateEstimator_B.TSamp[stateEstimator_B.cff];

    /* Product: '<S37>/A[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S16>/A'
     *  Delay: '<S16>/MemoryX'
     */
    stateEstimator_B.dv0[stateEstimator_B.cff] =
      stateEstimator_P_g.A_Value[stateEstimator_B.cff + 2] *
      stateEstimator_DW.MemoryX_DSTATE[1] +
      stateEstimator_P_g.A_Value[stateEstimator_B.cff] *
      stateEstimator_DW.MemoryX_DSTATE[0];
  }

  /* Update for Delay: '<S16>/MemoryX' incorporates:
   *  Constant: '<S16>/B'
   *  Product: '<S37>/B[k]*u[k]'
   *  Reshape: '<S16>/Reshapeu'
   *  Sum: '<S37>/Add'
   */
  stateEstimator_DW.MemoryX_DSTATE[0] = (stateEstimator_P_g.B_Value[0] *
    stateEstimator_B.Sum[2] + stateEstimator_B.dv0[0]) +
    stateEstimator_B.Product3[0];

  /* Update for DiscreteFilter: '<S17>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[2] =
    stateEstimator_DW.pressureFilter_IIR_states[1];

  /* Update for Delay: '<S16>/MemoryX' incorporates:
   *  Constant: '<S16>/B'
   *  Product: '<S37>/B[k]*u[k]'
   *  Reshape: '<S16>/Reshapeu'
   *  Sum: '<S37>/Add'
   */
  stateEstimator_DW.MemoryX_DSTATE[1] = (stateEstimator_P_g.B_Value[1] *
    stateEstimator_B.Sum[2] + stateEstimator_B.dv0[1]) +
    stateEstimator_B.Product3[1];

  /* Update for DiscreteFilter: '<S17>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[1] =
    stateEstimator_DW.pressureFilter_IIR_states[0];
  stateEstimator_DW.pressureFilter_IIR_states[0] =
    stateEstimator_DW.pressureFilter_IIR_tmp;

  /* Update for DiscreteFilter: '<S17>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[2] =
    stateEstimator_DW.soonarFilter_IIR_states[1];

  /* Update for Delay: '<S3>/Delay1' incorporates:
   *  Delay: '<S69>/Delay'
   */
  stateEstimator_DW.Delay1_DSTATE[0] = stateEstimator_DW.Delay_DSTATE[0];

  /* Update for DiscreteFilter: '<S17>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[1] =
    stateEstimator_DW.soonarFilter_IIR_states[0];

  /* Update for Delay: '<S3>/Delay1' incorporates:
   *  Delay: '<S69>/Delay'
   */
  stateEstimator_DW.Delay1_DSTATE[1] = stateEstimator_DW.Delay_DSTATE[1];

  /* Update for DiscreteFilter: '<S17>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[0] =
    stateEstimator_DW.soonarFilter_IIR_tmp;

  /* Update for Delay: '<S135>/MemoryX' incorporates:
   *  Constant: '<S135>/A'
   *  Constant: '<S135>/B'
   *  Product: '<S155>/A[k]*xhat[k|k-1]'
   *  Product: '<S155>/B[k]*u[k]'
   *  Sum: '<S155>/Add'
   */
  stateEstimator_DW.icLoad_g = 0U;
  stateEstimator_DW.MemoryX_DSTATE_dl[0] = ((stateEstimator_P_g.B_Value_pu[0] *
    stateEstimator_B.Reshapeu_i[0] + stateEstimator_P_g.B_Value_pu[2] *
    stateEstimator_B.Reshapeu_i[1]) + (stateEstimator_P_g.A_Value_b[0] *
    stateEstimator_B.Conversion_pu[0] + stateEstimator_P_g.A_Value_b[2] *
    stateEstimator_B.Conversion_pu[1])) + stateEstimator_B.Product3_j[0];
  stateEstimator_DW.MemoryX_DSTATE_dl[1] = ((stateEstimator_P_g.B_Value_pu[1] *
    stateEstimator_B.Reshapeu_i[0] + stateEstimator_P_g.B_Value_pu[3] *
    stateEstimator_B.Reshapeu_i[1]) + (stateEstimator_P_g.A_Value_b[1] *
    stateEstimator_B.Conversion_pu[0] + stateEstimator_P_g.A_Value_b[3] *
    stateEstimator_B.Conversion_pu[1])) + stateEstimator_B.Product3_j[1];

  /* Update for DiscreteIntegrator: '<S70>/SimplyIntegrateVelocity' */
  stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[0] +=
    stateEstimator_P_g.SimplyIntegrateVelocity_gainval *
    stateEstimator_B.Product[0];
  stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[1] +=
    stateEstimator_P_g.SimplyIntegrateVelocity_gainval *
    stateEstimator_B.Product[1];
  stateEstimator_DW.SimplyIntegrateVelocity_PrevResetState = (int8_T)
    arg_controlModePosVSOrient_flagin;
}

/* Model initialize function */
void stateEstimator_o_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_stateEstimator_T *const stateEstimator_M =
    &(stateEstimator_MdlrefDW.rtm);

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  stateEstimator_P_g.SaturationSonar_LowerSat = rtMinusInf;

  /* initialize error status */
  rtmSetErrorStatusPointer(stateEstimator_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) &stateEstimator_B), 0,
                sizeof(B_stateEstimator_c_T));

  /* states (dwork) */
  (void) memset((void *)&stateEstimator_DW, 0,
                sizeof(DW_stateEstimator_f_T));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
