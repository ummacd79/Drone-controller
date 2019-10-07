/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControlSystem.h
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

#ifndef RTW_HEADER_flightControlSystem_h_
#define RTW_HEADER_flightControlSystem_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#include <float.h>
#ifndef flightControlSystem_COMMON_INCLUDES_
# define flightControlSystem_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "DAHostLib_Network.h"
#endif                                /* flightControlSystem_COMMON_INCLUDES_ */

#include "flightControlSystem_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#define stateEstimator_MDLREF_HIDE_CHILD_
#include "stateEstimator.h"
#define flightController_MDLREF_HIDE_CHILD_
#include "flightController.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
# define rtmGetErrorStatusPointer(rtm) ((const char_T **)(&((rtm)->errorStatus)))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

/* Block signals for system '<S1>/Logging' */
typedef struct {
  real32_T rt_vicon[12];
  real32_T rt_sensor[10];
  real32_T rt_cmd[9];
  real32_T rt_optical[8];
} B_Logging_flightControlSystem_T;

/* Block states (default storage) for system '<S1>/Logging' */
typedef struct {
  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<S3>/To Workspace2' */

  struct {
    void *LoggedData;
  } ToWorkspace7_PWORK;                /* '<S3>/To Workspace7' */

  struct {
    void *LoggedData;
  } ToWorkspace8_PWORK;                /* '<S3>/To Workspace8' */

  struct {
    void *LoggedData;
  } ToWorkspace6_PWORK;                /* '<S3>/To Workspace6' */

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK;                /* '<S3>/To Workspace3' */

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                /* '<S3>/To Workspace4' */

  struct {
    void *LoggedData;
  } ToWorkspace5_PWORK;                /* '<S3>/To Workspace5' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S3>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<S3>/To Workspace1' */

  struct {
    void *LoggedData;
  } ToWorkspace10_PWORK;               /* '<S3>/To Workspace10' */
} DW_Logging_flightControlSystem_T;

/* Block signals for system '<Root>/Flight Control System' */
typedef struct {
  statesBB BusConversion_InsertedFor_controller_at_inport_1_BusCreator;
  statesEstim_t estimator;             /* '<S1>/estimator' */
  real32_T UDPReceiveViconData_o1[12]; /* '<S6>/UDP Receive Vicon Data' */
  sensordata_t BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1;
  real32_T controller_o2[8];           /* '<S1>/controller' */
  CommandBus Switch;                   /* '<S7>/Switch' */
  real_T d0;
  real32_T rtb_x_m;
  real32_T rtb_y_c;
  real32_T rtb_z_k;
  real32_T rtb_x_c_c;
  real32_T rtb_y_n_b;
  real32_T rtb_z_p_p;
  real32_T rtb_altitude_c;
  real32_T rtb_pressure_f;
  real32_T rtb_vbat_V_g;
  real32_T rtb_dx_g;
  real32_T rtb_dy_m;
  real32_T rtb_Y_n;
  real32_T rtb_X_p;
  real32_T rtb_Z_l;
  real32_T rtb_yaw_j;
  real32_T rtb_pitch_d;
  real32_T rtb_roll_g;
  real32_T rtb_dz_l;
  real32_T rtb_p_d;
  real32_T rtb_q_d;
  real32_T rtb_r_l;
  real32_T rtb_Z_k_o;
  real32_T rtb_dz_k_b;
  real32_T Signal;                     /* '<S14>/fromWS_Signal 1' */
  real32_T Signal1;                    /* '<S14>/From Workspace' */
  real32_T Signal2;                    /* '<S14>/From Workspace1' */
  real32_T Signal3;                    /* '<S14>/From Workspace2' */
  real32_T Signal4;                    /* '<S14>/From Workspace3' */
  real32_T Signal5;                    /* '<S14>/From Workspace4' */
  int32_T samplesRead;
  int32_T crashFlag;
  uint32_T rtb_Output_n;
  uint32_T rtb_vbat_percentage_b;
  uint32_T rtb_FixPtSum1_l;
  uint16_T UDPReceiveViconData_o2_h;
  boolean_T takeoff_flag;              /* '<S4>/NOT' */
  B_Logging_flightControlSystem_T Logging;/* '<S1>/Logging' */
} B_FlightControlSystem_flightControlSystem_T;

/* Block states (default storage) for system '<Root>/Flight Control System' */
typedef struct {
  real_T UDPReceiveViconData_NetworkLib[137];/* '<S6>/UDP Receive Vicon Data' */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } fromWS_Signal1_PWORK;              /* '<S14>/fromWS_Signal 1' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace_PWORK;               /* '<S14>/From Workspace' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace1_PWORK;              /* '<S14>/From Workspace1' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace2_PWORK;              /* '<S14>/From Workspace2' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace3_PWORK;              /* '<S14>/From Workspace3' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace4_PWORK;              /* '<S14>/From Workspace4' */

  uint32_T Output_DSTATE;              /* '<S13>/Output' */
  struct {
    int_T PrevIndex;
  } fromWS_Signal1_IWORK;              /* '<S14>/fromWS_Signal 1' */

  struct {
    int_T PrevIndex;
  } FromWorkspace_IWORK;               /* '<S14>/From Workspace' */

  struct {
    int_T PrevIndex;
  } FromWorkspace1_IWORK;              /* '<S14>/From Workspace1' */

  struct {
    int_T PrevIndex;
  } FromWorkspace2_IWORK;              /* '<S14>/From Workspace2' */

  struct {
    int_T PrevIndex;
  } FromWorkspace3_IWORK;              /* '<S14>/From Workspace3' */

  struct {
    int_T PrevIndex;
  } FromWorkspace4_IWORK;              /* '<S14>/From Workspace4' */

  DW_Logging_flightControlSystem_T Logging;/* '<S1>/Logging' */
} DW_FlightControlSystem_flightControlSystem_T;

/* Block signals (default storage) */
typedef struct {
  B_FlightControlSystem_flightControlSystem_T FlightControlSystem;/* '<Root>/Flight Control System' */
} B_flightControlSystem_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  DW_FlightControlSystem_flightControlSystem_T FlightControlSystem;/* '<Root>/Flight Control System' */
} DW_flightControlSystem_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T Actuators[4];               /* '<Root>/Actuators' */
  uint8_T Flag;                        /* '<Root>/Flag' */
  boolean_T takeoffCommand;            /* '<Root>/takeoffCommand' */
} ExtY_flightControlSystem_T;

/* Parameters for system: '<Root>/Flight Control System' */
struct P_FlightControlSystem_flightControlSystem_T_ {
  uint32_T WrapToZero_Threshold;       /* Mask Parameter: WrapToZero_Threshold
                                        * Referenced by: '<S19>/FixPt Switch'
                                        */
  real_T Constant_Value;              /* Expression: Estimator.pos.visDeltaXYMax
                                       * Referenced by: '<S2>/Constant'
                                       */
  int32_T UDPReceiveViconData_Port;
                                 /* Computed Parameter: UDPReceiveViconData_Port
                                  * Referenced by: '<S6>/UDP Receive Vicon Data'
                                  */
  real32_T Constant_Value_b;           /* Computed Parameter: Constant_Value_b
                                        * Referenced by: '<S4>/Constant'
                                        */
  real32_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S4>/Constant1'
                                        */
  real32_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S4>/Constant2'
                                        */
  real32_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S4>/Constant3'
                                        */
  real32_T Constant4_Value;            /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S4>/Constant4'
                                        */
  real32_T Constant5_Value;            /* Computed Parameter: Constant5_Value
                                        * Referenced by: '<S4>/Constant5'
                                        */
  real32_T Constant_Value_h;           /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S11>/Constant'
                                        */
  real32_T Constant_Value_o;           /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<S12>/Constant'
                                        */
  real32_T Constant3_Value_f[3];       /* Computed Parameter: Constant3_Value_f
                                        * Referenced by: '<S7>/Constant3'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S6>/Gain'
                                        */
  real32_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S6>/Gain1'
                                        */
  uint32_T Output_InitialCondition;
                                  /* Computed Parameter: Output_InitialCondition
                                   * Referenced by: '<S13>/Output'
                                   */
  uint32_T FixPtConstant_Value;       /* Computed Parameter: FixPtConstant_Value
                                       * Referenced by: '<S18>/FixPt Constant'
                                       */
  uint32_T Constant_Value_e;           /* Computed Parameter: Constant_Value_e
                                        * Referenced by: '<S19>/Constant'
                                        */
  boolean_T Constant1_Value_i;         /* Expression: true
                                        * Referenced by: '<S7>/Constant1'
                                        */
};

/* Parameters (default storage) */
struct P_flightControlSystem_T_ {
  P_FlightControlSystem_flightControlSystem_T FlightControlSystem;/* '<Root>/Flight Control System' */
};

/* Real-time Model Data Structure */
struct tag_RTM_flightControlSystem_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_flightControlSystem_T flightControlSystem_P;

/* Block signals (default storage) */
extern B_flightControlSystem_T flightControlSystem_B;

/* Block states (default storage) */
extern DW_flightControlSystem_T flightControlSystem_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_flightControlSystem_T flightControlSystem_Y;

/* Model block global parameters (default storage) */
extern struct_pAcs5k38eV6MpgiqrKAV4 rtP_Sensors;/* Variable: Sensors
                                                 * Referenced by: '<S1>/estimator'
                                                 */
extern real_T rtP_TFinal;              /* Variable: TFinal
                                        * Referenced by: '<S17>/Constant'
                                        */
extern real_T rtP_Ts;                  /* Variable: Ts
                                        * Referenced by: '<S7>/Constant'
                                        */
extern real_T rtP_takeOffDuration;     /* Variable: takeOffDuration
                                        * Referenced by: '<S16>/Constant'
                                        */
extern real32_T rtP_landingAltitude;   /* Variable: landingAltitude
                                        * Referenced by: '<S7>/Constant4'
                                        */

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern CommandBus cmd_inport;          /* '<Root>/AC cmd' */
extern SensorsBus sensor_inport;       /* '<Root>/Sensors' */
extern real32_T motors_outport[4];     /* '<S1>/controller' */
extern uint8_T flag_outport;           /* '<S2>/MATLAB Function1' */

/* Model entry point functions */
extern void flightControlSystem_initialize(void);
extern void flightControlSystem_step(void);
extern void flightControlSystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_flightControlSystem_T *const flightControlSystem_M;

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
 * '<Root>' : 'flightControlSystem'
 * '<S1>'   : 'flightControlSystem/Flight Control System'
 * '<S2>'   : 'flightControlSystem/Flight Control System/Crash Predictor Flags'
 * '<S3>'   : 'flightControlSystem/Flight Control System/Logging'
 * '<S4>'   : 'flightControlSystem/Flight Control System/Position//Attitude Reference Input'
 * '<S5>'   : 'flightControlSystem/Flight Control System/States'
 * '<S6>'   : 'flightControlSystem/Flight Control System/Subsystem'
 * '<S7>'   : 'flightControlSystem/Flight Control System/landing logic'
 * '<S8>'   : 'flightControlSystem/Flight Control System/sensordata_group'
 * '<S9>'   : 'flightControlSystem/Flight Control System/Crash Predictor Flags/MATLAB Function1'
 * '<S10>'  : 'flightControlSystem/Flight Control System/Position//Attitude Reference Input/ '
 * '<S11>'  : 'flightControlSystem/Flight Control System/Position//Attitude Reference Input/Compare To Zero'
 * '<S12>'  : 'flightControlSystem/Flight Control System/Position//Attitude Reference Input/Compare To Zero1'
 * '<S13>'  : 'flightControlSystem/Flight Control System/Position//Attitude Reference Input/Live Time  Ticks'
 * '<S14>'  : 'flightControlSystem/Flight Control System/Position//Attitude Reference Input/Position//Attitude Reference'
 * '<S15>'  : 'flightControlSystem/Flight Control System/Position//Attitude Reference Input/ /time based'
 * '<S16>'  : 'flightControlSystem/Flight Control System/Position//Attitude Reference Input/ /time based/Compare To Constant'
 * '<S17>'  : 'flightControlSystem/Flight Control System/Position//Attitude Reference Input/ /time based/Compare To Constant1'
 * '<S18>'  : 'flightControlSystem/Flight Control System/Position//Attitude Reference Input/Live Time  Ticks/Increment Real World'
 * '<S19>'  : 'flightControlSystem/Flight Control System/Position//Attitude Reference Input/Live Time  Ticks/Wrap To Zero'
 * '<S20>'  : 'flightControlSystem/Flight Control System/landing logic/MATLAB Function1'
 */
#endif                                 /* RTW_HEADER_flightControlSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
