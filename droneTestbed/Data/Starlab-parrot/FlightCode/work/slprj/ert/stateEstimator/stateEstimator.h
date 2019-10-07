/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: stateEstimator.h
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

#ifndef RTW_HEADER_stateEstimator_h_
#define RTW_HEADER_stateEstimator_h_
#include <math.h>
#include <string.h>
#ifndef stateEstimator_COMMON_INCLUDES_
# define stateEstimator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* stateEstimator_COMMON_INCLUDES_ */

#include "stateEstimator_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

/* Block states (default storage) for system '<S108>/MeasurementUpdate' */
#ifndef stateEstimator_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T MeasurementUpdate_MODE;    /* '<S108>/MeasurementUpdate' */
} DW_MeasurementUpdate_stateEstimator_T;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for system '<S113>/Enabled Subsystem' */
#ifndef stateEstimator_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T EnabledSubsystem_MODE;     /* '<S113>/Enabled Subsystem' */
} DW_EnabledSubsystem_stateEstimator_T;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

/* Block signals for model 'stateEstimator' */
#ifndef stateEstimator_MDLREF_HIDE_CHILD_

typedef struct {
  sensordata_t sensordata;             /* '<Root>/MATLAB Function1' */
  real32_T VectorConcatenate[9];       /* '<S15>/Vector Concatenate' */
  real32_T Reshape9to3x3columnmajor[9];
                                 /* '<S78>/Reshape (9) to [3x3] column-major' */
  real32_T MathFunction_b[9];          /* '<S70>/Math Function' */
  real32_T rtb_MathFunction_b_m[9];
  real_T ManualSwitchPZ[4];            /* '<S16>/ManualSwitchPZ' */
  real_T rtb_VectorConcatenate_c[3];
  real_T rtb_FIR_IMUaccel_k[3];
  real32_T inverseIMU_gain[6];
  real_T dv0[2];
  real32_T Conversion_p[4];            /* '<S130>/Conversion' */
  real32_T Conversion_n4[4];           /* '<S129>/Conversion' */
  real32_T Conversion_a[4];            /* '<S176>/Conversion' */
  real32_T Conversion_g[4];            /* '<S177>/Conversion' */
  real32_T ManualSwitchPZ_m[4];        /* '<S73>/ManualSwitchPZ' */
  real32_T ManualSwitchPZ_p[4];        /* '<S135>/ManualSwitchPZ' */
  real32_T Product[3];                 /* '<S70>/Product' */
  real32_T sincos_o1[3];               /* '<S18>/sincos' */
  real32_T FIR_IMUaccel[3];            /* '<S7>/FIR_IMUaccel' */
  real_T invertzaxisGain;              /* '<S5>/invertzaxisGain' */
  real_T Sum[3];                       /* '<S5>/Sum' */
  real_T Product2[2];                  /* '<S63>/Product2' */
  real_T Product3[2];                  /* '<S62>/Product3' */
  real_T Sum_c;                        /* '<S62>/Sum' */
  real32_T Merge[2];                   /* '<S4>/Merge' */
  real32_T opticalFlowToVelocity_gain[3];/* '<S69>/opticalFlowToVelocity_gain' */
  real32_T Product_p[2];               /* '<S71>/Product' */
  real32_T Product2_e[2];              /* '<S181>/Product2' */
  real32_T Product3_j[2];              /* '<S180>/Product3' */
  real32_T Product2_k[2];              /* '<S134>/Product2' */
  real32_T Product3_m[2];              /* '<S133>/Product3' */
  real32_T SimplyIntegrateVelocity[2]; /* '<S70>/SimplyIntegrateVelocity' */
  real32_T TSamp[2];                   /* '<S79>/TSamp' */
  real32_T Reshapey_o[2];              /* '<S73>/Reshapey' */
  real32_T MemoryX_m[2];               /* '<S73>/MemoryX' */
  real32_T Conversion_j[2];            /* '<S104>/Conversion' */
  real32_T Reshapeu_h[2];              /* '<S73>/Reshapeu' */
  real32_T Reshapey_a[2];              /* '<S135>/Reshapey' */
  real32_T Conversion_pu[2];           /* '<S151>/Conversion' */
  real32_T Reshapeu_i[2];              /* '<S135>/Reshapeu' */
  real32_T MemoryX_f[2];               /* '<S135>/MemoryX' */
  real32_T DataTypeConversion2;        /* '<S5>/Data Type Conversion2' */
  int32_T j;
  int32_T denIdx;
  int32_T cff;
  int32_T memOffset;
  boolean_T Compare;                   /* '<S19>/Compare' */
  boolean_T nicemeasurementornewupdateneeded;
                                 /* '<S17>/nicemeasurementor newupdateneeded' */
  boolean_T LogicalOperator3;          /* '<S72>/Logical Operator3' */
  boolean_T LogicalOperator3_o;        /* '<S136>/Logical Operator3' */
} B_stateEstimator_c_T;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'stateEstimator' */
#ifndef stateEstimator_MDLREF_HIDE_CHILD_

typedef struct {
  real_T Delay2_DSTATE;                /* '<S5>/Delay2' */
  real_T MemoryX_DSTATE[2];            /* '<S16>/MemoryX' */
  real_T soonarFilter_IIR_states[3];   /* '<S17>/soonarFilter_IIR' */
  real_T soonarFilter_IIR_tmp;         /* '<S17>/soonarFilter_IIR' */
  real32_T IIR_IMUgyro_r_states[5];    /* '<S7>/IIR_IMUgyro_r' */
  real32_T FIR_IMUaccel_states[15];    /* '<S7>/FIR_IMUaccel' */
  real32_T MemoryX_DSTATE_d[2];        /* '<S73>/MemoryX' */
  real32_T IIRgyroz_states[10];        /* '<S72>/IIRgyroz' */
  real32_T UD_DSTATE[2];               /* '<S79>/UD' */
  real32_T Delay_DSTATE[2];            /* '<S69>/Delay' */
  real32_T pressureFilter_IIR_states[3];/* '<S17>/pressureFilter_IIR' */
  real32_T Delay1_DSTATE[2];           /* '<S3>/Delay1' */
  real32_T MemoryX_DSTATE_dl[2];       /* '<S135>/MemoryX' */
  real32_T Delay_DSTATE_l[2];          /* '<S70>/Delay' */
  real32_T SimplyIntegrateVelocity_DSTATE[2];/* '<S70>/SimplyIntegrateVelocity' */
  int32_T FIR_IMUaccel_circBuf;        /* '<S7>/FIR_IMUaccel' */
  real32_T Memory_PreviousInput[3];    /* '<S4>/Memory' */
  real32_T IIR_IMUgyro_r_tmp;          /* '<S7>/IIR_IMUgyro_r' */
  real32_T IIRgyroz_tmp[2];            /* '<S72>/IIRgyroz' */
  real32_T pressureFilter_IIR_tmp;     /* '<S17>/pressureFilter_IIR' */
  int8_T SimplyIntegrateVelocity_PrevResetState;/* '<S70>/SimplyIntegrateVelocity' */
  uint8_T icLoad;                      /* '<S73>/MemoryX' */
  uint8_T icLoad_p;                    /* '<S16>/MemoryX' */
  uint8_T icLoad_g;                    /* '<S135>/MemoryX' */
  boolean_T EnabledSubsystem_MODE;     /* '<S42>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S37>/MeasurementUpdate' */
  DW_EnabledSubsystem_stateEstimator_T EnabledSubsystem_m;/* '<S160>/Enabled Subsystem' */
  DW_MeasurementUpdate_stateEstimator_T MeasurementUpdate_b;/* '<S155>/MeasurementUpdate' */
  DW_EnabledSubsystem_stateEstimator_T EnabledSubsystem_f;/* '<S113>/Enabled Subsystem' */
  DW_MeasurementUpdate_stateEstimator_T MeasurementUpdate_e;/* '<S108>/MeasurementUpdate' */
} DW_stateEstimator_f_T;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S108>/MeasurementUpdate' */
struct P_MeasurementUpdate_stateEstimator_T_ {
  real32_T Lykyhatkk1_Y0;              /* Computed Parameter: Lykyhatkk1_Y0
                                        * Referenced by: '<S133>/L*(y[k]-yhat[k|k-1])'
                                        */
};

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S113>/Enabled Subsystem' */
struct P_EnabledSubsystem_stateEstimator_T_ {
  real32_T deltax_Y0;                  /* Computed Parameter: deltax_Y0
                                        * Referenced by: '<S134>/deltax'
                                        */
};

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

/* Parameters (default storage) */
struct P_stateEstimator_T_ {
  real_T outlierBelowFloor_const;     /* Mask Parameter: outlierBelowFloor_const
                                       * Referenced by: '<S19>/Constant'
                                       */
  real_T outlierJump_const;            /* Mask Parameter: outlierJump_const
                                        * Referenced by: '<S67>/Constant'
                                        */
  real_T currentEstimateVeryOffFromPressure_const;
                     /* Mask Parameter: currentEstimateVeryOffFromPressure_const
                      * Referenced by: '<S65>/Constant'
                      */
  real_T currentStateVeryOffsonarflt_const;
                            /* Mask Parameter: currentStateVeryOffsonarflt_const
                             * Referenced by: '<S66>/Constant'
                             */
  real32_T DiscreteDerivative_ICPrevScaledInput;
                         /* Mask Parameter: DiscreteDerivative_ICPrevScaledInput
                          * Referenced by: '<S79>/UD'
                          */
  real32_T Checkifvalidvisualpositionestimateavailable_const;
            /* Mask Parameter: Checkifvalidvisualpositionestimateavailable_const
             * Referenced by: '<S187>/Constant'
             */
  real32_T CompareToConstant_const;   /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S8>/Constant'
                                       */
  real32_T CompareToConstant1_const; /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S9>/Constant'
                                      */
  real32_T maxp_const;                 /* Mask Parameter: maxp_const
                                        * Referenced by: '<S82>/Constant'
                                        */
  real32_T maxq_const;                 /* Mask Parameter: maxq_const
                                        * Referenced by: '<S84>/Constant'
                                        */
  real32_T maxw1_const;                /* Mask Parameter: maxw1_const
                                        * Referenced by: '<S86>/Constant'
                                        */
  real32_T maxw2_const;                /* Mask Parameter: maxw2_const
                                        * Referenced by: '<S87>/Constant'
                                        */
  real32_T maxdw1_const;               /* Mask Parameter: maxdw1_const
                                        * Referenced by: '<S80>/Constant'
                                        */
  real32_T maxdw2_const;               /* Mask Parameter: maxdw2_const
                                        * Referenced by: '<S81>/Constant'
                                        */
  real32_T maxp2_const;                /* Mask Parameter: maxp2_const
                                        * Referenced by: '<S83>/Constant'
                                        */
  real32_T maxq2_const;                /* Mask Parameter: maxq2_const
                                        * Referenced by: '<S85>/Constant'
                                        */
  real32_T maxw3_const;                /* Mask Parameter: maxw3_const
                                        * Referenced by: '<S88>/Constant'
                                        */
  real32_T maxw4_const;                /* Mask Parameter: maxw4_const
                                        * Referenced by: '<S89>/Constant'
                                        */
  real32_T minHeightforOF_const;       /* Mask Parameter: minHeightforOF_const
                                        * Referenced by: '<S90>/Constant'
                                        */
  real32_T DeactivateAccelerationIfOFisnotusedduetolowaltitude_const;
    /* Mask Parameter: DeactivateAccelerationIfOFisnotusedduetolowaltitude_const
     * Referenced by: '<S74>/Constant'
     */
  real32_T donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con;
  /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con
   * Referenced by: '<S76>/Constant'
   */
  real32_T donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co;
  /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co
   * Referenced by: '<S77>/Constant'
   */
  real32_T checkifPosavailable_const;
                                    /* Mask Parameter: checkifPosavailable_const
                                     * Referenced by: '<S182>/Constant'
                                     */
  real32_T maxp3_const;                /* Mask Parameter: maxp3_const
                                        * Referenced by: '<S183>/Constant'
                                        */
  real32_T maxq3_const;                /* Mask Parameter: maxq3_const
                                        * Referenced by: '<S184>/Constant'
                                        */
  real32_T planarjumpsVISPOS_const;   /* Mask Parameter: planarjumpsVISPOS_const
                                       * Referenced by: '<S185>/Constant'
                                       */
  real_T Lykyhatkk1_Y0;                /* Expression: 0
                                        * Referenced by: '<S62>/L*(y[k]-yhat[k|k-1])'
                                        */
  real_T deltax_Y0;                    /* Expression: 0
                                        * Referenced by: '<S63>/deltax'
                                        */
  real_T KalmanGainM_Value[4];         /* Expression: pInitialization.M
                                        * Referenced by: '<S138>/KalmanGainM'
                                        */
  real_T KalmanGainM_Value_d[4];       /* Expression: pInitialization.M
                                        * Referenced by: '<S91>/KalmanGainM'
                                        */
  real_T A_Value[4];                   /* Expression: pInitialization.A
                                        * Referenced by: '<S16>/A'
                                        */
  real_T KalmanGainL_Value[4];         /* Expression: pInitialization.L
                                        * Referenced by: '<S91>/KalmanGainL'
                                        */
  real_T KalmanGainL_Value_h[4];       /* Expression: pInitialization.L
                                        * Referenced by: '<S138>/KalmanGainL'
                                        */
  real_T Delay2_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S5>/Delay2'
                                        */
  real_T X0_Value[2];                  /* Expression: pInitialization.X0
                                        * Referenced by: '<S16>/X0'
                                        */
  real_T SaturationSonar_LowerSat;     /* Expression: -inf
                                        * Referenced by: '<S17>/SaturationSonar'
                                        */
  real_T soonarFilter_IIR_NumCoef[4];/* Expression: Estimator.alt.filterSonarNum
                                      * Referenced by: '<S17>/soonarFilter_IIR'
                                      */
  real_T soonarFilter_IIR_DenCoef[4];/* Expression: Estimator.alt.filterSonarDen
                                      * Referenced by: '<S17>/soonarFilter_IIR'
                                      */
  real_T soonarFilter_IIR_InitialStates;/* Expression: 0
                                         * Referenced by: '<S17>/soonarFilter_IIR'
                                         */
  real_T KalmanGainM_Value_p[2];       /* Expression: pInitialization.M
                                        * Referenced by: '<S20>/KalmanGainM'
                                        */
  real_T C_Value[2];                   /* Expression: pInitialization.C
                                        * Referenced by: '<S16>/C'
                                        */
  real_T gravity_Value[3];             /* Expression: [0 0 -g]
                                        * Referenced by: '<S71>/gravity'
                                        */
  real_T gravity_Value_k[3];           /* Expression: [0 0 g]
                                        * Referenced by: '<S5>/gravity'
                                        */
  real_T gainaccinput_Gain;   /* Expression: Estimator.pos.accelerationInputGain
                               * Referenced by: '<S71>/gainaccinput'
                               */
  real_T D_Value;                      /* Expression: pInitialization.D
                                        * Referenced by: '<S16>/D'
                                        */
  real_T KalmanGainL_Value_e[2];       /* Expression: pInitialization.L
                                        * Referenced by: '<S20>/KalmanGainL'
                                        */
  real_T B_Value[2];                   /* Expression: pInitialization.B
                                        * Referenced by: '<S16>/B'
                                        */
  real_T CovarianceZ_Value[4];         /* Expression: pInitialization.Z
                                        * Referenced by: '<S20>/CovarianceZ'
                                        */
  real_T P0_Value[4];                  /* Expression: pInitialization.P0
                                        * Referenced by: '<S16>/P0'
                                        */
  real_T CovarianceZ_Value_b[4];       /* Expression: pInitialization.Z
                                        * Referenced by: '<S91>/CovarianceZ'
                                        */
  real_T CovarianceZ_Value_l[4];       /* Expression: pInitialization.Z
                                        * Referenced by: '<S138>/CovarianceZ'
                                        */
  real_T G_Value[2];                   /* Expression: pInitialization.G
                                        * Referenced by: '<S16>/G'
                                        */
  real_T ConstantP_Value;              /* Expression: 0
                                        * Referenced by: '<S20>/ConstantP'
                                        */
  real_T H_Value;                      /* Expression: pInitialization.H
                                        * Referenced by: '<S16>/H'
                                        */
  real_T N_Value;                      /* Expression: pInitialization.N
                                        * Referenced by: '<S16>/N'
                                        */
  real_T Q_Value;                      /* Expression: pInitialization.Q
                                        * Referenced by: '<S16>/Q'
                                        */
  real_T R_Value;                      /* Expression: pInitialization.R
                                        * Referenced by: '<S16>/R'
                                        */
  real_T ConstantP_Value_h;            /* Expression: 0
                                        * Referenced by: '<S91>/ConstantP'
                                        */
  real_T ConstantP_Value_g;            /* Expression: 0
                                        * Referenced by: '<S138>/ConstantP'
                                        */
  real32_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S10>/Gain1'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S10>/Gain'
                                        */
  real32_T Gain2_Gain;                 /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<S10>/Gain2'
                                        */
  real32_T Gain3_Gain;                 /* Computed Parameter: Gain3_Gain
                                        * Referenced by: '<S10>/Gain3'
                                        */
  real32_T Gain4_Gain;                 /* Computed Parameter: Gain4_Gain
                                        * Referenced by: '<S10>/Gain4'
                                        */
  real32_T Gain_Gain_i;                /* Computed Parameter: Gain_Gain_i
                                        * Referenced by: '<S11>/Gain'
                                        */
  real32_T Gain1_Gain_k;               /* Computed Parameter: Gain1_Gain_k
                                        * Referenced by: '<S11>/Gain1'
                                        */
  real32_T Constant_Value;             /* Expression: single(0)
                                        * Referenced by: '<S14>/Constant'
                                        */
  real32_T Memory_InitialCondition[3];
                        /* Expression: single(Estimator.complementaryFilterInit)
                         * Referenced by: '<S4>/Memory'
                         */
  real32_T Gain_Gain_c;                /* Computed Parameter: Gain_Gain_c
                                        * Referenced by: '<S14>/Gain'
                                        */
  real32_T Assumingthatcalibwasdonelevel_Bias[6];
                       /* Computed Parameter: Assumingthatcalibwasdonelevel_Bias
                        * Referenced by: '<S7>/Assuming that calib was done level!'
                        */
  real32_T inverseIMU_gain_Gain[6];  /* Computed Parameter: inverseIMU_gain_Gain
                                      * Referenced by: '<S7>/inverseIMU_gain'
                                      */
  real32_T IIR_IMUgyro_r_NumCoef[6];/* Computed Parameter: IIR_IMUgyro_r_NumCoef
                                     * Referenced by: '<S7>/IIR_IMUgyro_r'
                                     */
  real32_T IIR_IMUgyro_r_DenCoef[6];/* Computed Parameter: IIR_IMUgyro_r_DenCoef
                                     * Referenced by: '<S7>/IIR_IMUgyro_r'
                                     */
  real32_T IIR_IMUgyro_r_InitialStates;
                              /* Computed Parameter: IIR_IMUgyro_r_InitialStates
                               * Referenced by: '<S7>/IIR_IMUgyro_r'
                               */
  real32_T Gain_Gain_b;                /* Computed Parameter: Gain_Gain_b
                                        * Referenced by: '<S4>/Gain'
                                        */
  real32_T FIR_IMUaccel_InitialStates;
                               /* Computed Parameter: FIR_IMUaccel_InitialStates
                                * Referenced by: '<S7>/FIR_IMUaccel'
                                */
  real32_T FIR_IMUaccel_Coefficients[6];
                                /* Computed Parameter: FIR_IMUaccel_Coefficients
                                 * Referenced by: '<S7>/FIR_IMUaccel'
                                 */
  real32_T Constant_Value_n;           /* Computed Parameter: Constant_Value_n
                                        * Referenced by: '<S4>/Constant'
                                        */
  real32_T Merge_InitialOutput;       /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<S4>/Merge'
                                       */
  real32_T C_Value_p[4];               /* Computed Parameter: C_Value_p
                                        * Referenced by: '<S135>/C'
                                        */
  real32_T C_Value_f[4];               /* Computed Parameter: C_Value_f
                                        * Referenced by: '<S73>/C'
                                        */
  real32_T A_Value_c[4];               /* Computed Parameter: A_Value_c
                                        * Referenced by: '<S73>/A'
                                        */
  real32_T B_Value_p[4];               /* Computed Parameter: B_Value_p
                                        * Referenced by: '<S73>/B'
                                        */
  real32_T D_Value_f[4];               /* Computed Parameter: D_Value_f
                                        * Referenced by: '<S73>/D'
                                        */
  real32_T A_Value_b[4];               /* Computed Parameter: A_Value_b
                                        * Referenced by: '<S135>/A'
                                        */
  real32_T B_Value_pu[4];              /* Computed Parameter: B_Value_pu
                                        * Referenced by: '<S135>/B'
                                        */
  real32_T D_Value_b[4];               /* Computed Parameter: D_Value_b
                                        * Referenced by: '<S135>/D'
                                        */
  real32_T X0_Value_e[2];              /* Computed Parameter: X0_Value_e
                                        * Referenced by: '<S73>/X0'
                                        */
  real32_T IIRgyroz_NumCoef[6];        /* Computed Parameter: IIRgyroz_NumCoef
                                        * Referenced by: '<S72>/IIRgyroz'
                                        */
  real32_T IIRgyroz_DenCoef[6];        /* Computed Parameter: IIRgyroz_DenCoef
                                        * Referenced by: '<S72>/IIRgyroz'
                                        */
  real32_T IIRgyroz_InitialStates; /* Computed Parameter: IIRgyroz_InitialStates
                                    * Referenced by: '<S72>/IIRgyroz'
                                    */
  real32_T TSamp_WtEt;                 /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S79>/TSamp'
                                        */
  real32_T opticalFlowToVelocity_gain_Gain;
                          /* Computed Parameter: opticalFlowToVelocity_gain_Gain
                           * Referenced by: '<S69>/opticalFlowToVelocity_gain'
                           */
  real32_T Delay_InitialCondition; /* Computed Parameter: Delay_InitialCondition
                                    * Referenced by: '<S69>/Delay'
                                    */
  real32_T invertzaxisGain_Gain;     /* Computed Parameter: invertzaxisGain_Gain
                                      * Referenced by: '<S5>/invertzaxisGain'
                                      */
  real32_T prsToAltGain_Gain;          /* Computed Parameter: prsToAltGain_Gain
                                        * Referenced by: '<S5>/prsToAltGain'
                                        */
  real32_T pressureFilter_IIR_NumCoef[4];
                               /* Computed Parameter: pressureFilter_IIR_NumCoef
                                * Referenced by: '<S17>/pressureFilter_IIR'
                                */
  real32_T pressureFilter_IIR_DenCoef[4];
                               /* Computed Parameter: pressureFilter_IIR_DenCoef
                                * Referenced by: '<S17>/pressureFilter_IIR'
                                */
  real32_T pressureFilter_IIR_InitialStates;
                         /* Computed Parameter: pressureFilter_IIR_InitialStates
                          * Referenced by: '<S17>/pressureFilter_IIR'
                          */
  real32_T Delay1_InitialCondition;
                                  /* Computed Parameter: Delay1_InitialCondition
                                   * Referenced by: '<S3>/Delay1'
                                   */
  real32_T X0_Value_j[2];              /* Computed Parameter: X0_Value_j
                                        * Referenced by: '<S135>/X0'
                                        */
  real32_T Constant_Value_e;           /* Computed Parameter: Constant_Value_e
                                        * Referenced by: '<S136>/Constant'
                                        */
  real32_T Delay_InitialCondition_n;
                                 /* Computed Parameter: Delay_InitialCondition_n
                                  * Referenced by: '<S70>/Delay'
                                  */
  real32_T SimplyIntegrateVelocity_gainval;
                          /* Computed Parameter: SimplyIntegrateVelocity_gainval
                           * Referenced by: '<S70>/SimplyIntegrateVelocity'
                           */
  real32_T SimplyIntegrateVelocity_IC;
                               /* Computed Parameter: SimplyIntegrateVelocity_IC
                                * Referenced by: '<S70>/SimplyIntegrateVelocity'
                                */
  real32_T UseIPPosSwitch_Threshold;
                                 /* Computed Parameter: UseIPPosSwitch_Threshold
                                  * Referenced by: '<S70>/UseIPPosSwitch'
                                  */
  real32_T P0_Value_m[4];              /* Computed Parameter: P0_Value_m
                                        * Referenced by: '<S73>/P0'
                                        */
  real32_T G_Value_h[4];               /* Computed Parameter: G_Value_h
                                        * Referenced by: '<S73>/G'
                                        */
  real32_T H_Value_c[4];               /* Computed Parameter: H_Value_c
                                        * Referenced by: '<S73>/H'
                                        */
  real32_T N_Value_g[4];               /* Computed Parameter: N_Value_g
                                        * Referenced by: '<S73>/N'
                                        */
  real32_T Q_Value_f[4];               /* Computed Parameter: Q_Value_f
                                        * Referenced by: '<S73>/Q'
                                        */
  real32_T R_Value_k[4];               /* Computed Parameter: R_Value_k
                                        * Referenced by: '<S73>/R'
                                        */
  real32_T P0_Value_h[4];              /* Computed Parameter: P0_Value_h
                                        * Referenced by: '<S135>/P0'
                                        */
  real32_T G_Value_p[4];               /* Computed Parameter: G_Value_p
                                        * Referenced by: '<S135>/G'
                                        */
  real32_T H_Value_d[4];               /* Computed Parameter: H_Value_d
                                        * Referenced by: '<S135>/H'
                                        */
  real32_T N_Value_j[4];               /* Computed Parameter: N_Value_j
                                        * Referenced by: '<S135>/N'
                                        */
  real32_T Q_Value_n[4];               /* Computed Parameter: Q_Value_n
                                        * Referenced by: '<S135>/Q'
                                        */
  real32_T R_Value_kf[4];              /* Computed Parameter: R_Value_kf
                                        * Referenced by: '<S135>/R'
                                        */
  real32_T Constant_Value_m;           /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S38>/Constant'
                                        */
  real32_T Constant_Value_g;           /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S109>/Constant'
                                        */
  real32_T Constant_Value_f;           /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S156>/Constant'
                                        */
  uint32_T MemoryX_DelayLength;       /* Computed Parameter: MemoryX_DelayLength
                                       * Referenced by: '<S73>/MemoryX'
                                       */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S69>/Delay'
                                        */
  uint32_T Delay2_DelayLength;         /* Computed Parameter: Delay2_DelayLength
                                        * Referenced by: '<S5>/Delay2'
                                        */
  uint32_T MemoryX_DelayLength_e;   /* Computed Parameter: MemoryX_DelayLength_e
                                     * Referenced by: '<S16>/MemoryX'
                                     */
  uint32_T Delay1_DelayLength;         /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S3>/Delay1'
                                        */
  uint32_T MemoryX_DelayLength_ez; /* Computed Parameter: MemoryX_DelayLength_ez
                                    * Referenced by: '<S135>/MemoryX'
                                    */
  uint32_T Delay_DelayLength_e;       /* Computed Parameter: Delay_DelayLength_e
                                       * Referenced by: '<S70>/Delay'
                                       */
  boolean_T Constant_Value_a;          /* Computed Parameter: Constant_Value_a
                                        * Referenced by: '<S21>/Constant'
                                        */
  boolean_T Constant_Value_mn;         /* Computed Parameter: Constant_Value_mn
                                        * Referenced by: '<S92>/Constant'
                                        */
  boolean_T Reset_Value;               /* Expression: false()
                                        * Referenced by: '<S73>/Reset'
                                        */
  boolean_T Constant_Value_l;          /* Computed Parameter: Constant_Value_l
                                        * Referenced by: '<S139>/Constant'
                                        */
  boolean_T Reset_Value_a;             /* Expression: false()
                                        * Referenced by: '<S135>/Reset'
                                        */
  uint8_T ManualSwitchPZ_CurrentSetting;
                            /* Computed Parameter: ManualSwitchPZ_CurrentSetting
                             * Referenced by: '<S16>/ManualSwitchPZ'
                             */
  uint8_T ManualSwitchPZ_CurrentSetting_i;
                          /* Computed Parameter: ManualSwitchPZ_CurrentSetting_i
                           * Referenced by: '<S73>/ManualSwitchPZ'
                           */
  uint8_T ManualSwitchPZ_CurrentSetting_b;
                          /* Computed Parameter: ManualSwitchPZ_CurrentSetting_b
                           * Referenced by: '<S135>/ManualSwitchPZ'
                           */
  P_EnabledSubsystem_stateEstimator_T EnabledSubsystem_m;/* '<S160>/Enabled Subsystem' */
  P_MeasurementUpdate_stateEstimator_T MeasurementUpdate_b;/* '<S155>/MeasurementUpdate' */
  P_EnabledSubsystem_stateEstimator_T EnabledSubsystem_f;/* '<S113>/Enabled Subsystem' */
  P_MeasurementUpdate_stateEstimator_T MeasurementUpdate_e;/* '<S108>/MeasurementUpdate' */
};

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_stateEstimator_T {
  const char_T **errorStatus;
};

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_stateEstimator_T rtm;
} MdlrefDW_stateEstimator_T;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

/* Model block global parameters (default storage) */
extern struct_pAcs5k38eV6MpgiqrKAV4 rtP_Sensors;/* Variable: Sensors
                                                 * Referenced by:
                                                 *   '<S17>/SaturationSonar'
                                                 *   '<S64>/Constant'
                                                 */
extern void stateEstimator_Init(void);
extern void stateEstimator_Disable(void);
extern void stateEstimator_run(const boolean_T arg_controlModePosVSOrient_flagin,
  const sensordata_t *arg_sensordata_datin, const real32_T arg_usePosVIS_flagin,
  const real32_T arg_opticalFlow_datin[3], const real32_T arg_posVIS_datin[4],
  statesEstim_t *arg_states_estimout, const real32_T
  arg_sensorCalibration_datin[8], boolean_T *arg_takeoffCommand);

/* Model reference registration function */
extern void stateEstimator_o_initialize(const char_T **rt_errorStatus);

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

extern void stateEstimator_MeasurementUpdate_Init(real32_T rty_Lykyhatkk1[2],
  P_MeasurementUpdate_stateEstimator_T *localP);
extern void stateEstimator_MeasurementUpdate_Disable(real32_T rty_Lykyhatkk1[2],
  DW_MeasurementUpdate_stateEstimator_T *localDW,
  P_MeasurementUpdate_stateEstimator_T *localP);
extern void stateEstimator_MeasurementUpdate(boolean_T rtu_Enable, const
  real32_T rtu_Lk[4], const real32_T rtu_yk[2], const real32_T rtu_Ck[4], const
  real32_T rtu_xhatkk1[2], const real32_T rtu_Dk[4], const real32_T rtu_uk[2],
  real32_T rty_Lykyhatkk1[2], DW_MeasurementUpdate_stateEstimator_T *localDW,
  P_MeasurementUpdate_stateEstimator_T *localP);
extern void stateEstimator_EnabledSubsystem_Init(real32_T rty_deltax[2],
  P_EnabledSubsystem_stateEstimator_T *localP);
extern void stateEstimator_EnabledSubsystem_Disable(real32_T rty_deltax[2],
  DW_EnabledSubsystem_stateEstimator_T *localDW,
  P_EnabledSubsystem_stateEstimator_T *localP);
extern void stateEstimator_EnabledSubsystem(boolean_T rtu_Enable, const real32_T
  rtu_Mk[4], const real32_T rtu_Ck[4], const real32_T rtu_yk[2], const real32_T
  rtu_xhatkk1[2], real32_T rty_deltax[2], DW_EnabledSubsystem_stateEstimator_T
  *localDW, P_EnabledSubsystem_stateEstimator_T *localP);

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

extern MdlrefDW_stateEstimator_T stateEstimator_MdlrefDW;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_stateEstimator_c_T stateEstimator_B;

/* Block states (default storage) */
extern DW_stateEstimator_f_T stateEstimator_DW;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

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
 * '<Root>' : 'stateEstimator'
 * '<S1>'   : 'stateEstimator/MATLAB Function'
 * '<S2>'   : 'stateEstimator/MATLAB Function1'
 * '<S3>'   : 'stateEstimator/State Estimator'
 * '<S4>'   : 'stateEstimator/State Estimator/Complementary Filter'
 * '<S5>'   : 'stateEstimator/State Estimator/EstimatorAltitude'
 * '<S6>'   : 'stateEstimator/State Estimator/EstimatorXYPosition'
 * '<S7>'   : 'stateEstimator/State Estimator/SensorPreprocessing'
 * '<S8>'   : 'stateEstimator/State Estimator/Complementary Filter/Compare To Constant'
 * '<S9>'   : 'stateEstimator/State Estimator/Complementary Filter/Compare To Constant1'
 * '<S10>'  : 'stateEstimator/State Estimator/Complementary Filter/If Action Subsystem'
 * '<S11>'  : 'stateEstimator/State Estimator/Complementary Filter/If Action Subsystem1'
 * '<S12>'  : 'stateEstimator/State Estimator/Complementary Filter/If Action Subsystem2'
 * '<S13>'  : 'stateEstimator/State Estimator/Complementary Filter/If Action Subsystem3'
 * '<S14>'  : 'stateEstimator/State Estimator/Complementary Filter/Wbe'
 * '<S15>'  : 'stateEstimator/State Estimator/Complementary Filter/Wbe/Create 3x3 Matrix'
 * '<S16>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude'
 * '<S17>'  : 'stateEstimator/State Estimator/EstimatorAltitude/OutlierHandling'
 * '<S18>'  : 'stateEstimator/State Estimator/EstimatorAltitude/Rotation Angles to Direction Cosine Matrix'
 * '<S19>'  : 'stateEstimator/State Estimator/EstimatorAltitude/outlierBelowFloor'
 * '<S20>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL'
 * '<S21>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculateYhat'
 * '<S22>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionA'
 * '<S23>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionB'
 * '<S24>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionC'
 * '<S25>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionD'
 * '<S26>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionG'
 * '<S27>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionH'
 * '<S28>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionN'
 * '<S29>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionP'
 * '<S30>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionP0'
 * '<S31>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionQ'
 * '<S32>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionR'
 * '<S33>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionX'
 * '<S34>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionX0'
 * '<S35>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionu'
 * '<S36>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/MemoryP'
 * '<S37>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/Observer'
 * '<S38>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/ReducedQRN'
 * '<S39>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/ScalarExpansionP0'
 * '<S40>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/ScalarExpansionQ'
 * '<S41>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/ScalarExpansionR'
 * '<S42>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/UseCurrentEstimator'
 * '<S43>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkA'
 * '<S44>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkB'
 * '<S45>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkC'
 * '<S46>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkD'
 * '<S47>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkEnable'
 * '<S48>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkG'
 * '<S49>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkH'
 * '<S50>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkN'
 * '<S51>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkP0'
 * '<S52>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkQ'
 * '<S53>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkR'
 * '<S54>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkReset'
 * '<S55>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkX0'
 * '<S56>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checku'
 * '<S57>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checky'
 * '<S58>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL/DataTypeConversionL'
 * '<S59>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL/DataTypeConversionM'
 * '<S60>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL/DataTypeConversionP'
 * '<S61>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL/DataTypeConversionZ'
 * '<S62>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/Observer/MeasurementUpdate'
 * '<S63>'  : 'stateEstimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/UseCurrentEstimator/Enabled Subsystem'
 * '<S64>'  : 'stateEstimator/State Estimator/EstimatorAltitude/OutlierHandling/check for min altitude'
 * '<S65>'  : 'stateEstimator/State Estimator/EstimatorAltitude/OutlierHandling/currentEstimateVeryOffFromPressure'
 * '<S66>'  : 'stateEstimator/State Estimator/EstimatorAltitude/OutlierHandling/currentStateVeryOffsonarflt'
 * '<S67>'  : 'stateEstimator/State Estimator/EstimatorAltitude/OutlierHandling/outlierJump'
 * '<S68>'  : 'stateEstimator/State Estimator/EstimatorAltitude/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S69>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity'
 * '<S70>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition'
 * '<S71>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling'
 * '<S72>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling'
 * '<S73>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy'
 * '<S74>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling/Deactivate Acceleration If OF is not used due to low altitude'
 * '<S75>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling/Rotation Angles to Direction Cosine Matrix'
 * '<S76>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling/do not use acc if optical flow never available (Note OF@60Hz but ZOH to 200!)'
 * '<S77>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling/do not use acc if optical flow never available (Note OF@60Hz but ZOH to 200!)1'
 * '<S78>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S79>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/DiscreteDerivative'
 * '<S80>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxdw1'
 * '<S81>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxdw2'
 * '<S82>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxp'
 * '<S83>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxp2'
 * '<S84>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxq'
 * '<S85>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxq2'
 * '<S86>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxw1'
 * '<S87>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxw2'
 * '<S88>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxw3'
 * '<S89>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxw4'
 * '<S90>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/minHeightforOF'
 * '<S91>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL'
 * '<S92>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculateYhat'
 * '<S93>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionA'
 * '<S94>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionB'
 * '<S95>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionC'
 * '<S96>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionD'
 * '<S97>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionG'
 * '<S98>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionH'
 * '<S99>'  : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionN'
 * '<S100>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionP'
 * '<S101>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionP0'
 * '<S102>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionQ'
 * '<S103>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionR'
 * '<S104>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionX'
 * '<S105>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionX0'
 * '<S106>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionu'
 * '<S107>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/MemoryP'
 * '<S108>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/Observer'
 * '<S109>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/ReducedQRN'
 * '<S110>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/ScalarExpansionP0'
 * '<S111>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/ScalarExpansionQ'
 * '<S112>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/ScalarExpansionR'
 * '<S113>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/UseCurrentEstimator'
 * '<S114>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkA'
 * '<S115>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkB'
 * '<S116>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkC'
 * '<S117>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkD'
 * '<S118>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkEnable'
 * '<S119>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkG'
 * '<S120>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkH'
 * '<S121>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkN'
 * '<S122>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkP0'
 * '<S123>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkQ'
 * '<S124>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkR'
 * '<S125>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkReset'
 * '<S126>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkX0'
 * '<S127>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checku'
 * '<S128>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checky'
 * '<S129>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL/DataTypeConversionL'
 * '<S130>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL/DataTypeConversionM'
 * '<S131>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL/DataTypeConversionP'
 * '<S132>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL/DataTypeConversionZ'
 * '<S133>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/Observer/MeasurementUpdate'
 * '<S134>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/UseCurrentEstimator/Enabled Subsystem'
 * '<S135>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy'
 * '<S136>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/OutlierHandling'
 * '<S137>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/Rotation Angles to Direction Cosine Matrix'
 * '<S138>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CalculatePL'
 * '<S139>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CalculateYhat'
 * '<S140>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionA'
 * '<S141>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionB'
 * '<S142>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionC'
 * '<S143>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionD'
 * '<S144>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionG'
 * '<S145>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionH'
 * '<S146>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionN'
 * '<S147>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionP'
 * '<S148>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionP0'
 * '<S149>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionQ'
 * '<S150>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionR'
 * '<S151>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionX'
 * '<S152>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionX0'
 * '<S153>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionu'
 * '<S154>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/MemoryP'
 * '<S155>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/Observer'
 * '<S156>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/ReducedQRN'
 * '<S157>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/ScalarExpansionP0'
 * '<S158>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/ScalarExpansionQ'
 * '<S159>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/ScalarExpansionR'
 * '<S160>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/UseCurrentEstimator'
 * '<S161>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkA'
 * '<S162>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkB'
 * '<S163>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkC'
 * '<S164>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkD'
 * '<S165>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkEnable'
 * '<S166>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkG'
 * '<S167>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkH'
 * '<S168>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkN'
 * '<S169>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkP0'
 * '<S170>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkQ'
 * '<S171>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkR'
 * '<S172>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkReset'
 * '<S173>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkX0'
 * '<S174>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checku'
 * '<S175>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checky'
 * '<S176>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CalculatePL/DataTypeConversionL'
 * '<S177>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CalculatePL/DataTypeConversionM'
 * '<S178>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CalculatePL/DataTypeConversionP'
 * '<S179>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CalculatePL/DataTypeConversionZ'
 * '<S180>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/Observer/MeasurementUpdate'
 * '<S181>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/UseCurrentEstimator/Enabled Subsystem'
 * '<S182>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/OutlierHandling/checkifPosavailable'
 * '<S183>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/OutlierHandling/maxp3'
 * '<S184>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/OutlierHandling/maxq3'
 * '<S185>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/OutlierHandling/planarjumpsVISPOS'
 * '<S186>' : 'stateEstimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S187>' : 'stateEstimator/State Estimator/SensorPreprocessing/Check if valid visual position estimate available'
 */
#endif                                 /* RTW_HEADER_stateEstimator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
