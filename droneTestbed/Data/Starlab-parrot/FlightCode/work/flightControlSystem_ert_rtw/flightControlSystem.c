/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControlSystem.c
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

/* Exported block signals */
CommandBus cmd_inport;                 /* '<Root>/AC cmd' */
SensorsBus sensor_inport;              /* '<Root>/Sensors' */
real32_T motors_outport[4];            /* '<S1>/controller' */
uint8_T flag_outport;                  /* '<S2>/MATLAB Function1' */

/* Block signals (default storage) */
B_flightControlSystem_T flightControlSystem_B;

/* Block states (default storage) */
DW_flightControlSystem_T flightControlSystem_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_flightControlSystem_T flightControlSystem_Y;

/* Real-time model */
RT_MODEL_flightControlSystem_T flightControlSystem_M_;
RT_MODEL_flightControlSystem_T *const flightControlSystem_M =
  &flightControlSystem_M_;

/* SetupRuntimeResources for atomic system: '<S1>/Logging' */
void flightControlSystem_Logging_SetupRTR(RT_MODEL_flightControlSystem_T * const
  flightControlSystem_M, DW_Logging_flightControlSystem_T *localDW)
{
  /* SetupRuntimeResources for ToWorkspace: '<S3>/To Workspace2' */
  {
    static int_T rt_ToWksWidths[] = { 12 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 12 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "rt_estim" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace2";
    localDW->ToWorkspace2_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "estim",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace2_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S3>/To Workspace7' */
  {
    static int_T rt_ToWksWidths[] = { 12 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 12 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "rt_states" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace7";
    localDW->ToWorkspace7_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "states",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace7_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S3>/To Workspace8' */
  {
    static int_T rt_ToWksWidths[] = { 12 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 12 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "rt_vicon" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace8";
    localDW->ToWorkspace8_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "vicon",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace8_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S3>/To Workspace6' */
  {
    static int_T rt_ToWksWidths[] = { 10 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 10 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "rt_sensor" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace6";
    localDW->ToWorkspace6_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "sensor",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace6_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S3>/To Workspace3' */
  {
    static int_T rt_ToWksWidths[] = { 9 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 9 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "rt_cmd" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace3";
    localDW->ToWorkspace3_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "cmd",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace3_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S3>/To Workspace4' */
  {
    static int_T rt_ToWksWidths[] = { 8 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 8 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "rt_optical" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace4";
    localDW->ToWorkspace4_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "optical",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace4_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S3>/To Workspace5' */
  {
    static int_T rt_ToWksWidths[] = { 8 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 8 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "rt_calib" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace5";
    localDW->ToWorkspace5_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "calib",
      1,
      0,
      100,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace5_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S3>/To Workspace' */
  {
    static int_T rt_ToWksWidths[] = { 4 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 4 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "rt_motor" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace";
    localDW->ToWorkspace_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "motor",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S3>/To Workspace1' */
  {
    static int_T rt_ToWksWidths[] = { 8 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 8 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "rt_posref" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace1";
    localDW->ToWorkspace1_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "posref",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace1_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S3>/To Workspace10' */
  {
    static int_T rt_ToWksWidths[] = { 1 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 1 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_UINT8 };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "crashFlag" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace10";
    localDW->ToWorkspace10_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "crashFlag",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace10_PWORK.LoggedData == (NULL))
      return;
  }
}

/* Output and update for atomic system: '<S1>/Logging' */
void flightControlSystem_Logging(RT_MODEL_flightControlSystem_T * const
  flightControlSystem_M, uint8_T rtu_crashFlag, const real32_T rtu_motorCmds[4],
  const real32_T rtu_posRef[8], const statesEstim_t *rtu_states_estim_Inport_4,
  const CommandBus *rtu_ReferenceValueServerBus_Inport_5, real32_T
  rtu_sensorDataIn_Inport_6, uint32_T rtu_sensorDataIn_Inport_6_d, real32_T
  rtu_sensorDataIn_Inport_6_e, real32_T rtu_sensorDataIn_Inport_6_c, real32_T
  rtu_sensorDataIn_Inport_6_cg, real32_T rtu_sensorDataIn_Inport_6_i, real32_T
  rtu_sensorDataIn_Inport_6_h, real32_T rtu_sensorDataIn_Inport_6_b, real32_T
  rtu_sensorDataIn_Inport_6_dz, real32_T rtu_sensorDataIn_Inport_6_n, const
  SensorsBus *rtu_sensorBus_Inport_7, const real32_T rtu_vicon[2], real32_T
  rtu_vicon_n, const real32_T rtu_vicon_ne[2], real32_T rtu_vicon_f, const
  real32_T rtu_vicon_k[6], real32_T rtu_states, real32_T rtu_states_h, real32_T
  rtu_states_g, real32_T rtu_states_l, real32_T rtu_states_f, real32_T
  rtu_states_n, real32_T rtu_states_gi, real32_T rtu_states_lh, real32_T
  rtu_states_o, real32_T rtu_states_j, real32_T rtu_states_e, real32_T
  rtu_states_h4, B_Logging_flightControlSystem_T *localB,
  DW_Logging_flightControlSystem_T *localDW)
{
  /* local block i/o variables */
  real32_T rtb_SigConversion_InsertedFor_sensorBus_BusSelector_BusSelect_i[8];
  real32_T rtb_DataTypeConversion7;
  real32_T rtb_DataTypeConversion11;
  int32_T i;

  /* SignalConversion: '<S3>/states_estim_BusSelector' */
  rtb_DataTypeConversion7 = rtu_states_estim_Inport_4->q;
  rtb_DataTypeConversion11 = rtu_states_estim_Inport_4->r;

  /* SignalConversion: '<S3>/TmpSignal ConversionAtTo Workspace2Inport1' incorporates:
   *  SignalConversion: '<S3>/states_estim_BusSelector'
   */
  localB->rt_vicon[0] = rtu_states_estim_Inport_4->X;
  localB->rt_vicon[1] = rtu_states_estim_Inport_4->Y;
  localB->rt_vicon[2] = rtu_states_estim_Inport_4->Z;
  localB->rt_vicon[3] = rtu_states_estim_Inport_4->yaw;
  localB->rt_vicon[4] = rtu_states_estim_Inport_4->pitch;
  localB->rt_vicon[5] = rtu_states_estim_Inport_4->roll;
  localB->rt_vicon[6] = rtu_states_estim_Inport_4->dx;
  localB->rt_vicon[7] = rtu_states_estim_Inport_4->dy;
  localB->rt_vicon[8] = rtu_states_estim_Inport_4->dz;
  localB->rt_vicon[9] = rtu_states_estim_Inport_4->p;
  localB->rt_vicon[10] = rtb_DataTypeConversion7;
  localB->rt_vicon[11] = rtb_DataTypeConversion11;

  /* ToWorkspace: '<S3>/To Workspace2' */
  {
    double locTime = ((flightControlSystem_M->Timing.clockTick1) * 0.005);
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace2_PWORK.LoggedData,
                          &locTime, &localB->rt_vicon[0]);
  }

  /* SignalConversion: '<S3>/TmpSignal ConversionAtTo Workspace7Inport1' */
  localB->rt_vicon[0] = rtu_states;
  localB->rt_vicon[1] = rtu_states_h;
  localB->rt_vicon[2] = rtu_states_g;
  localB->rt_vicon[3] = rtu_states_l;
  localB->rt_vicon[4] = rtu_states_f;
  localB->rt_vicon[5] = rtu_states_n;
  localB->rt_vicon[6] = rtu_states_gi;
  localB->rt_vicon[7] = rtu_states_lh;
  localB->rt_vicon[8] = rtu_states_o;
  localB->rt_vicon[9] = rtu_states_j;
  localB->rt_vicon[10] = rtu_states_e;
  localB->rt_vicon[11] = rtu_states_h4;

  /* ToWorkspace: '<S3>/To Workspace7' */
  {
    double locTime = ((flightControlSystem_M->Timing.clockTick1) * 0.005);
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace7_PWORK.LoggedData,
                          &locTime, &localB->rt_vicon[0]);
  }

  /* SignalConversion: '<S3>/TmpSignal ConversionAtTo Workspace8Inport1' */
  localB->rt_vicon[0] = rtu_vicon[0];
  localB->rt_vicon[1] = rtu_vicon[1];
  localB->rt_vicon[2] = rtu_vicon_n;
  localB->rt_vicon[3] = rtu_vicon_ne[0];
  localB->rt_vicon[4] = rtu_vicon_ne[1];
  localB->rt_vicon[5] = rtu_vicon_f;
  for (i = 0; i < 6; i++) {
    localB->rt_vicon[i + 6] = rtu_vicon_k[i];
  }

  /* End of SignalConversion: '<S3>/TmpSignal ConversionAtTo Workspace8Inport1' */

  /* ToWorkspace: '<S3>/To Workspace8' */
  {
    double locTime = ((flightControlSystem_M->Timing.clockTick1) * 0.005);
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace8_PWORK.LoggedData,
                          &locTime, &localB->rt_vicon[0]);
  }

  /* DataTypeConversion: '<S3>/Data Type Conversion1' */
  rtb_DataTypeConversion11 = rtu_sensorDataIn_Inport_6;

  /* DataTypeConversion: '<S3>/Data Type Conversion2' */
  rtb_DataTypeConversion7 = (real32_T)rtu_sensorDataIn_Inport_6_d;

  /* SignalConversion: '<S3>/TmpSignal ConversionAtTo Workspace6Inport1' */
  localB->rt_sensor[0] = rtu_sensorDataIn_Inport_6_e;
  localB->rt_sensor[1] = rtu_sensorDataIn_Inport_6_c;
  localB->rt_sensor[2] = rtu_sensorDataIn_Inport_6_cg;
  localB->rt_sensor[3] = rtu_sensorDataIn_Inport_6_i;
  localB->rt_sensor[4] = rtu_sensorDataIn_Inport_6_h;
  localB->rt_sensor[5] = rtu_sensorDataIn_Inport_6_b;
  localB->rt_sensor[6] = rtu_sensorDataIn_Inport_6_dz;
  localB->rt_sensor[7] = rtu_sensorDataIn_Inport_6_n;
  localB->rt_sensor[8] = rtb_DataTypeConversion11;
  localB->rt_sensor[9] = rtb_DataTypeConversion7;

  /* ToWorkspace: '<S3>/To Workspace6' */
  {
    double locTime = ((flightControlSystem_M->Timing.clockTick1) * 0.005);
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace6_PWORK.LoggedData,
                          &locTime, &localB->rt_sensor[0]);
  }

  /* DataTypeConversion: '<S3>/Data Type Conversion3' */
  rtb_DataTypeConversion11 =
    rtu_ReferenceValueServerBus_Inport_5->controlModePosVSOrient;

  /* DataTypeConversion: '<S3>/Data Type Conversion7' */
  rtb_DataTypeConversion7 = rtu_ReferenceValueServerBus_Inport_5->takeoff_flag;

  /* SignalConversion: '<S3>/TmpSignal ConversionAtTo Workspace3Inport1' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion9'
   *  SignalConversion: '<S3>/ReferenceValueServerBus_BusSelector'
   */
  localB->rt_cmd[0] = rtb_DataTypeConversion11;
  localB->rt_cmd[1] = rtu_ReferenceValueServerBus_Inport_5->pos_ref[0];
  localB->rt_cmd[2] = rtu_ReferenceValueServerBus_Inport_5->pos_ref[1];
  localB->rt_cmd[3] = rtu_ReferenceValueServerBus_Inport_5->pos_ref[2];
  localB->rt_cmd[4] = rtb_DataTypeConversion7;
  localB->rt_cmd[5] = rtu_ReferenceValueServerBus_Inport_5->orient_ref[0];
  localB->rt_cmd[6] = rtu_ReferenceValueServerBus_Inport_5->orient_ref[1];
  localB->rt_cmd[7] = rtu_ReferenceValueServerBus_Inport_5->orient_ref[2];
  localB->rt_cmd[8] = (real32_T)
    rtu_ReferenceValueServerBus_Inport_5->live_time_ticks;

  /* ToWorkspace: '<S3>/To Workspace3' */
  {
    double locTime = ((flightControlSystem_M->Timing.clockTick1) * 0.005);
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace3_PWORK.LoggedData,
                          &locTime, &localB->rt_cmd[0]);
  }

  /* DataTypeConversion: '<S3>/Data Type Conversion11' */
  rtb_DataTypeConversion11 =
    rtu_sensorBus_Inport_7->VisionSensors.usePosVIS_flag;

  /* SignalConversion: '<S3>/TmpSignal ConversionAtTo Workspace4Inport1' incorporates:
   *  SignalConversion: '<S3>/sensorBus_BusSelector'
   */
  localB->rt_optical[0] = rtb_DataTypeConversion11;
  localB->rt_optical[1] = rtu_sensorBus_Inport_7->
    VisionSensors.opticalFlow_data[0];
  localB->rt_optical[2] = rtu_sensorBus_Inport_7->
    VisionSensors.opticalFlow_data[1];
  localB->rt_optical[3] = rtu_sensorBus_Inport_7->
    VisionSensors.opticalFlow_data[2];
  localB->rt_optical[4] = rtu_sensorBus_Inport_7->VisionSensors.posVIS_data[0];
  localB->rt_optical[5] = rtu_sensorBus_Inport_7->VisionSensors.posVIS_data[1];
  localB->rt_optical[6] = rtu_sensorBus_Inport_7->VisionSensors.posVIS_data[2];
  localB->rt_optical[7] = rtu_sensorBus_Inport_7->VisionSensors.posVIS_data[3];

  /* ToWorkspace: '<S3>/To Workspace4' */
  {
    double locTime = ((flightControlSystem_M->Timing.clockTick1) * 0.005);
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace4_PWORK.LoggedData,
                          &locTime, &localB->rt_optical[0]);
  }

  /* SignalConversion: '<S3>/sensorBus_BusSelector' */
  for (i = 0; i < 8; i++) {
    rtb_SigConversion_InsertedFor_sensorBus_BusSelector_BusSelect_i[i] =
      rtu_sensorBus_Inport_7->SensorCalibration[i];
  }

  /* ToWorkspace: '<S3>/To Workspace5' */
  {
    double locTime = ((flightControlSystem_M->Timing.clockTick1) * 0.005);
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace5_PWORK.LoggedData,
                          &locTime,
                          &rtb_SigConversion_InsertedFor_sensorBus_BusSelector_BusSelect_i
                          [0]);
  }

  /* ToWorkspace: '<S3>/To Workspace' */
  {
    double locTime = ((flightControlSystem_M->Timing.clockTick1) * 0.005);
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace_PWORK.LoggedData,
                          &locTime, &rtu_motorCmds[0]);
  }

  /* ToWorkspace: '<S3>/To Workspace1' */
  {
    double locTime = ((flightControlSystem_M->Timing.clockTick1) * 0.005);
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace1_PWORK.LoggedData,
                          &locTime, &rtu_posRef[0]);
  }

  /* ToWorkspace: '<S3>/To Workspace10' */
  {
    double locTime = ((flightControlSystem_M->Timing.clockTick1) * 0.005);
    ;
    rt_UpdateStructLogVar((StructLogVar *)
                          localDW->ToWorkspace10_PWORK.LoggedData, &locTime,
                          &rtu_crashFlag);
  }
}

/* SetupRuntimeResources for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem_SetupRTR
  (RT_MODEL_flightControlSystem_T * const flightControlSystem_M,
   DW_FlightControlSystem_flightControlSystem_T *localDW)
{
  /* SetupRuntimeResources for Atomic SubSystem: '<S1>/Logging' */
  flightControlSystem_Logging_SetupRTR(flightControlSystem_M, &localDW->Logging);

  /* End of SetupRuntimeResources for SubSystem: '<S1>/Logging' */
}

/* System initialize for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem_Init
  (DW_FlightControlSystem_flightControlSystem_T *localDW,
   P_FlightControlSystem_flightControlSystem_T *localP)
{
  /* InitializeConditions for UnitDelay: '<S13>/Output' */
  localDW->Output_DSTATE = localP->Output_InitialCondition;

  /* SystemInitialize for ModelReference: '<S1>/estimator' */
  stateEstimator_Init();

  /* SystemInitialize for ModelReference: '<S1>/controller' */
  flightController_Init();
}

/* Start for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem_Start
  (RT_MODEL_flightControlSystem_T * const flightControlSystem_M,
   DW_FlightControlSystem_flightControlSystem_T *localDW,
   P_FlightControlSystem_flightControlSystem_T *localP)
{
  char_T *sErr;

  /* Start for S-Function (sdspFromNetwork): '<S6>/UDP Receive Vicon Data' */
  sErr = GetErrorBuffer(&localDW->UDPReceiveViconData_NetworkLib[0U]);
  CreateUDPInterface(&localDW->UDPReceiveViconData_NetworkLib[0U]);
  if (*sErr == 0) {
    LibCreate_Network(&localDW->UDPReceiveViconData_NetworkLib[0U], 0, "0.0.0.0",
                      localP->UDPReceiveViconData_Port, "0.0.0.0", -1, 8192, 4,
                      0);
  }

  if (*sErr == 0) {
    LibStart(&localDW->UDPReceiveViconData_NetworkLib[0U]);
  }

  if (*sErr != 0) {
    DestroyUDPInterface(&localDW->UDPReceiveViconData_NetworkLib[0U]);
    if (*sErr != 0) {
      rtmSetErrorStatus(flightControlSystem_M, sErr);
      rtmSetStopRequested(flightControlSystem_M, 1);
    }
  }

  /* End of Start for S-Function (sdspFromNetwork): '<S6>/UDP Receive Vicon Data' */

  /* Start for FromWorkspace: '<S14>/fromWS_Signal 1' */
  {
    static real_T pTimeValues0[] = { 1.0037641154328734, 1.7565872020075282,
      3.0112923462986196, 4.0150564617314934, 5.520702634880803,
      7.0263488080301126, 7.7791718946047679, 8.5319949811794231,
      9.5357590966122956, 10.288582183186952, 11.041405269761606,
      11.79422835633626, 12.547051442910917, 13.299874529485571,
      13.550815558343789, 14.303638644918443, 14.805520702634881,
      15.307402760351318, 15.809284818067754, 16.060225846925974,
      16.56210790464241, 16.813048933500628, 17.063989962358846,
      17.314930991217064, 17.8168130489335, 18.067754077791719,
      18.318695106649937, 18.820577164366373, 19.322459222082809,
      19.824341279799246, 20.075282308657467, 20.577164366373903,
      20.828105395232122, 21.07904642409034, 21.329987452948558,
      21.831869510664994, 22.082810539523212, 22.33375156838143,
      22.584692597239648, 23.086574654956085, 23.337515683814303,
      23.839397741530739, 24.090338770388957, 24.592220828105397,
      24.843161856963615, 25.345043914680051, 26.097867001254706,
      26.85069008782936, 27.603513174404014, 27.854454203262232,
      28.858218318695105, 29.611041405269763, 30.363864491844417,
      31.116687578419072, 31.869510664993726, 32.371392722710162,
      32.622333751568384, 33.12421580928482, 33.375156838143035,
      34.127979924717692, 34.378920953575907, 34.629861982434129,
      34.880803011292343, 35.38268506900878, 35.884567126725223,
      36.135508155583437, 36.637390213299874, 37.390213299874532,
      38.393977415307404, 38.89585947302384, 39.648682559598491,
      40.401505646173149, 40.903387703889585, 41.656210790464243,
      42.158092848180679, 42.659974905897116, 43.412797992471766,
      44.165621079046424, 44.918444165621082, 46.173149309912169,
      46.925972396486827, 48.431618569636136, 49.435382685069008,
      50.6900878293601, 51.442910915934753, 52.446675031367626,
      53.199498117942284, 54.203262233375156, 55.45796737766625,
      56.2107904642409, 57.214554579673774, 58.469259723964868,
      59.47302383939774, 60.978670012547049, 62.233375156838143,
      63.739021329987452, 64.993726474278546, 65.997490589711418,
      67.754077791718942, 69.008782936010036, 70.012547051442908,
      71.267252195734, 72.5219573400251, 73.525721455457969, 74.529485570890841,
      76.286072772898365, 77.289836888331237, 78.544542032622331,
      79.5483061480552, 80.8030112923463, 81.80677540777917, 82.810539523212043,
      84.065244667503137, 85.06900878293601, 86.072772898368882,
      87.5784190715182, 89.335006273525721, 90.589711417816815,
      91.844416562107909, 92.848180677540782, 93.851944792973654,
      94.855708908406527, 96.110414052697621, 97.3651191969887,
      98.870765370138017, 100.37641154328733, 101.3801756587202,
      102.88582183186951, 104.89335006273525, 106.14805520702635,
      107.40276035131744, 108.65746549560853, 109.66122961104141,
      111.16687578419072, 112.4215809284818, 114.17816813048934,
      115.18193224592221, 116.43663739021331, 117.69134253450439,
      118.69510664993726, 120.70263488080302, 122.45922208281054,
      123.46298619824341, 124.71769134253451, 125.72145545796738,
      126.97616060225847, 128.48180677540779, 129.73651191969887,
      130.74027603513176, 132.24592220828106, 133.75156838143036,
      135.00627352572147, 136.01003764115433, 137.26474278544541,
      138.51944792973651, 139.52321204516937, 140.77791718946048,
      142.28356336260978, 144.04015056461731, 145.29485570890841,
      146.80050188205772, 148.55708908406524, 150.31367628607276,
      151.06649937264743, 152.07026348808031, 152.82308657465495,
      154.32873274780425, 155.33249686323714, 156.0853199498118,
      157.08908406524466, 158.09284818067755, 159.09661229611041,
      160.35131744040152, 161.35508155583437, 162.60978670012548,
      163.36260978670012, 164.366373902133, 164.86825595984945,
      165.62107904642409, 166.37390213299875, 166.87578419071519,
      167.37766624843161, 167.87954830614805, 168.3814303638645,
      168.88331242158094, 169.63613550815558, 170.13801756587202,
      170.63989962358846, 171.14178168130491, 171.64366373902132,
      172.14554579673776, 172.89836888331243, 173.14930991217065,
      173.90213299874529, 174.65495608531995, 174.90589711417817,
      175.65872020075281, 175.90966122961103, 176.16060225846925,
      176.6624843161857, 177.41530740276036, 177.91718946047678,
      178.168130489335, 178.67001254705144, 179.17189460476789,
      179.42283563362611, 179.67377666248433, 180.17565872020074,
      180.67754077791719, 180.92848180677541, 181.68130489335007,
      181.93224592220827, 182.68506900878293, 183.18695106649938,
      183.93977415307404, 184.69259723964868, 185.19447929736512,
      185.69636135508156, 186.19824341279798, 187.20200752823087,
      187.95483061480553, 188.45671267252195, 189.71141781681305,
      191.21706398996236, 191.96988707653702, 192.22082810539524,
      192.72271016311166, 193.2245922208281, 193.97741530740277,
      194.228356336261, 194.7302383939774, 195.23212045169385,
      195.98494353826851, 196.48682559598495, 196.73776662484318,
      197.23964868255959, 197.74153074027603, 198.24341279799248,
      198.4943538268507, 199.24717691342533, 200.0 } ;

    static real32_T pDataValues0[] = { 0.00826446246F, 0.00991735514F,
      0.0165289249F, 0.0198347103F, 0.0247933883F, 0.0297520664F, 0.0347107425F,
      0.0363636352F, 0.0413223132F, 0.0446281F, 0.0462809913F, 0.052892562F,
      0.0545454547F, 0.05785124F, 0.0644628108F, 0.0694214851F, 0.0760330558F,
      0.0826446265F, 0.0892562F, 0.094214879F, 0.0991735533F, 0.104132235F,
      0.109090909F, 0.114049584F, 0.119008265F, 0.12396694F, 0.128925622F,
      0.133884296F, 0.140495867F, 0.145454541F, 0.15041323F, 0.158677682F,
      0.165289253F, 0.170247927F, 0.178512394F, 0.185123965F, 0.191735536F, 0.2F,
      0.204958677F, 0.209917352F, 0.214876026F, 0.219834715F, 0.224793389F,
      0.229752064F, 0.236363634F, 0.241322309F, 0.247933879F, 0.25454545F,
      0.259504139F, 0.264462799F, 0.272727281F, 0.282644629F, 0.287603319F,
      0.290909082F, 0.292561978F, 0.297520667F, 0.302479327F, 0.307438016F,
      0.312396705F, 0.317355365F, 0.322314054F, 0.327272713F, 0.332231402F,
      0.337190092F, 0.342148751F, 0.34710744F, 0.353719F, 0.358677685F,
      0.366942137F, 0.371900827F, 0.376859516F, 0.383471072F, 0.388429761F,
      0.391735524F, 0.396694213F, 0.401652902F, 0.406611562F, 0.409917355F,
      0.413223147F, 0.418181807F, 0.419834703F, 0.423140496F, 0.423140496F,
      0.424793392F, 0.426446289F, 0.426446289F, 0.429752052F, 0.429752052F,
      0.429752052F, 0.431404948F, 0.433057845F, 0.433057845F, 0.433057845F,
      0.436363637F, 0.438016534F, 0.438016534F, 0.438016534F, 0.43966943F,
      0.43966943F, 0.43966943F, 0.43966943F, 0.43966943F, 0.43966943F,
      0.43966943F, 0.43966943F, 0.43966943F, 0.43966943F, 0.43966943F,
      0.43966943F, 0.43966943F, 0.43966943F, 0.43966943F, 0.43966943F,
      0.43966943F, 0.441322327F, 0.442975193F, 0.44462809F, 0.44462809F,
      0.44462809F, 0.44462809F, 0.44462809F, 0.44462809F, 0.44462809F,
      0.44462809F, 0.44462809F, 0.44462809F, 0.44462809F, 0.44462809F,
      0.44462809F, 0.44462809F, 0.44462809F, 0.44462809F, 0.44462809F,
      0.44462809F, 0.447933882F, 0.447933882F, 0.447933882F, 0.447933882F,
      0.447933882F, 0.447933882F, 0.447933882F, 0.447933882F, 0.447933882F,
      0.447933882F, 0.447933882F, 0.447933882F, 0.447933882F, 0.447933882F,
      0.447933882F, 0.447933882F, 0.447933882F, 0.447933882F, 0.447933882F,
      0.447933882F, 0.447933882F, 0.447933882F, 0.447933882F, 0.447933882F,
      0.447933882F, 0.447933882F, 0.447933882F, 0.446281F, 0.446281F,
      0.44462809F, 0.44462809F, 0.441322327F, 0.43966943F, 0.438016534F,
      0.438016534F, 0.434710741F, 0.433057845F, 0.429752052F, 0.426446289F,
      0.424793392F, 0.4214876F, 0.418181807F, 0.413223147F, 0.408264458F,
      0.403305799F, 0.4F, 0.39338842F, 0.388429761F, 0.383471072F, 0.378512383F,
      0.371900827F, 0.366942137F, 0.360330582F, 0.355371892F, 0.350413233F,
      0.345454544F, 0.340495855F, 0.335537195F, 0.330578506F, 0.325619847F,
      0.317355365F, 0.312396705F, 0.304132223F, 0.299173564F, 0.294214875F,
      0.287603319F, 0.279338837F, 0.269421488F, 0.256198347F, 0.249586776F,
      0.242975205F, 0.238016531F, 0.224793389F, 0.218181819F, 0.206611574F,
      0.198347107F, 0.191735536F, 0.178512394F, 0.168595046F, 0.161983475F,
      0.155371904F, 0.147107437F, 0.13884297F, 0.133884296F, 0.127272725F,
      0.119008265F, 0.112396695F, 0.105785124F, 0.0958677679F, 0.0842975229F,
      0.0793388411F, 0.0743801668F, 0.0694214851F, 0.0628099144F, 0.05785124F,
      0.052892562F, 0.0429752059F, 0.0363636352F, 0.0314049572F, 0.026446281F,
      0.021487603F, 0.0165289249F, 0.00991735514F, 0.00495867757F, 0.0F,
      -0.00330578513F, -0.00991735514F } ;

    localDW->fromWS_Signal1_PWORK.TimePtr = (void *) pTimeValues0;
    localDW->fromWS_Signal1_PWORK.DataPtr = (void *) pDataValues0;
    localDW->fromWS_Signal1_IWORK.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S14>/From Workspace' */
  {
    static real_T pTimeValues0[] = { 0.0, 10.0 } ;

    static real32_T pDataValues0[] = { 0.0F, 0.0F } ;

    localDW->FromWorkspace_PWORK.TimePtr = (void *) pTimeValues0;
    localDW->FromWorkspace_PWORK.DataPtr = (void *) pDataValues0;
    localDW->FromWorkspace_IWORK.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S14>/From Workspace1' */
  {
    static real_T pTimeValues0[] = { 0.0, 10.0 } ;

    static real32_T pDataValues0[] = { 0.0F, 0.0F } ;

    localDW->FromWorkspace1_PWORK.TimePtr = (void *) pTimeValues0;
    localDW->FromWorkspace1_PWORK.DataPtr = (void *) pDataValues0;
    localDW->FromWorkspace1_IWORK.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S14>/From Workspace2' */
  {
    static real_T pTimeValues0[] = { 0.0, 10.0 } ;

    static real32_T pDataValues0[] = { 0.0F, 0.0F } ;

    localDW->FromWorkspace2_PWORK.TimePtr = (void *) pTimeValues0;
    localDW->FromWorkspace2_PWORK.DataPtr = (void *) pDataValues0;
    localDW->FromWorkspace2_IWORK.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S14>/From Workspace3' */
  {
    static real_T pTimeValues0[] = { 0.0, 10.0 } ;

    static real32_T pDataValues0[] = { 0.0F, 0.0F } ;

    localDW->FromWorkspace3_PWORK.TimePtr = (void *) pTimeValues0;
    localDW->FromWorkspace3_PWORK.DataPtr = (void *) pDataValues0;
    localDW->FromWorkspace3_IWORK.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S14>/From Workspace4' */
  {
    static real_T pTimeValues0[] = { 0.0, 10.0 } ;

    static real32_T pDataValues0[] = { 0.0F, 0.0F } ;

    localDW->FromWorkspace4_PWORK.TimePtr = (void *) pTimeValues0;
    localDW->FromWorkspace4_PWORK.DataPtr = (void *) pDataValues0;
    localDW->FromWorkspace4_IWORK.PrevIndex = 0;
  }
}

/* Outputs for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem(RT_MODEL_flightControlSystem_T *
  const flightControlSystem_M, const SensorsBus *rtu_Sensors, real32_T
  rty_motorCmds[4], uint8_T *rty_crashFlag, boolean_T *rty_takeoffCommand,
  B_FlightControlSystem_flightControlSystem_T *localB,
  DW_FlightControlSystem_flightControlSystem_T *localDW,
  P_FlightControlSystem_flightControlSystem_T *localP)
{
  char_T *sErr;

  /* Clock: '<S15>/Clock' incorporates:
   *  Clock: '<S15>/Clock1'
   */
  localB->d0 = flightControlSystem_M->Timing.t[0];

  /* Logic: '<S15>/NOT' incorporates:
   *  Clock: '<S15>/Clock'
   *  Constant: '<S16>/Constant'
   *  RelationalOperator: '<S16>/Compare'
   */
  *rty_takeoffCommand = !(localB->d0 < rtP_takeOffDuration);

  /* Logic: '<S4>/NOT' */
  localB->takeoff_flag = !*rty_takeoffCommand;

  /* UnitDelay: '<S13>/Output' */
  localB->rtb_Output_n = localDW->Output_DSTATE;

  /* MATLAB Function: '<S7>/MATLAB Function1' incorporates:
   *  BusCreator: '<S4>/Bus Creator'
   *  BusCreator: '<S7>/Bus Creator'
   *  Constant: '<S11>/Constant'
   *  Constant: '<S12>/Constant'
   *  Constant: '<S17>/Constant'
   *  Constant: '<S4>/Constant'
   *  Constant: '<S4>/Constant1'
   *  Constant: '<S4>/Constant2'
   *  Constant: '<S4>/Constant3'
   *  Constant: '<S4>/Constant4'
   *  Constant: '<S4>/Constant5'
   *  Constant: '<S7>/Constant1'
   *  Constant: '<S7>/Constant3'
   *  Constant: '<S7>/Constant4'
   *  Logic: '<S15>/NOT1'
   *  Logic: '<S4>/Logical Operator'
   *  RelationalOperator: '<S11>/Compare'
   *  RelationalOperator: '<S12>/Compare'
   *  RelationalOperator: '<S17>/Compare'
   *  Switch: '<S7>/Switch'
   */
  if (!(localB->d0 < rtP_TFinal - rtP_TFinal / 5.0)) {
    localB->Switch.controlModePosVSOrient = localP->Constant1_Value_i;
    localB->Switch.pos_ref[0] = localP->Constant3_Value;
    localB->Switch.pos_ref[1] = localP->Constant4_Value;
    localB->Switch.pos_ref[2] = rtP_landingAltitude;
    localB->Switch.takeoff_flag = localB->takeoff_flag;
    localB->Switch.orient_ref[0] = localP->Constant3_Value_f[0];
    localB->Switch.orient_ref[1] = localP->Constant3_Value_f[1];
    localB->Switch.orient_ref[2] = localP->Constant3_Value_f[2];
    localB->Switch.live_time_ticks = localB->rtb_Output_n;
  } else {
    localB->Switch.controlModePosVSOrient = ((localP->Constant2_Value ==
      localP->Constant_Value_h) && (localP->Constant1_Value ==
      localP->Constant_Value_o));
    localB->Switch.pos_ref[0] = localP->Constant3_Value;
    localB->Switch.pos_ref[1] = localP->Constant4_Value;
    localB->Switch.pos_ref[2] = localP->Constant5_Value;
    localB->Switch.takeoff_flag = localB->takeoff_flag;
    localB->Switch.orient_ref[0] = localP->Constant_Value_b;
    localB->Switch.orient_ref[1] = localP->Constant1_Value;
    localB->Switch.orient_ref[2] = localP->Constant2_Value;
    localB->Switch.live_time_ticks = localB->rtb_Output_n;
  }

  /* End of MATLAB Function: '<S7>/MATLAB Function1' */

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector3_at_outport_0' */
  localB->rtb_x_m = rtu_Sensors->HALSensors.HAL_acc_SI.x;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector3_at_outport_1' */
  localB->rtb_y_c = rtu_Sensors->HALSensors.HAL_acc_SI.y;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector3_at_outport_2' */
  localB->rtb_z_k = rtu_Sensors->HALSensors.HAL_acc_SI.z;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector4_at_outport_0' */
  localB->rtb_x_c_c = rtu_Sensors->HALSensors.HAL_gyro_SI.x;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector4_at_outport_1' */
  localB->rtb_y_n_b = rtu_Sensors->HALSensors.HAL_gyro_SI.y;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector4_at_outport_2' */
  localB->rtb_z_p_p = rtu_Sensors->HALSensors.HAL_gyro_SI.z;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector5_at_outport_0' */
  localB->rtb_altitude_c = rtu_Sensors->HALSensors.HAL_ultrasound_SI.altitude;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector6_at_outport_0' */
  localB->rtb_pressure_f = rtu_Sensors->HALSensors.HAL_pressure_SI.pressure;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector1_at_outport_0' */
  localB->rtb_vbat_V_g = rtu_Sensors->HALSensors.HAL_vbat_SI.vbat_V;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector1_at_outport_1' */
  localB->rtb_vbat_percentage_b =
    rtu_Sensors->HALSensors.HAL_vbat_SI.vbat_percentage;

  /* BusCreator: '<S1>/BusConversion_InsertedFor_estimator_at_inport_1' */
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.ddx =
    localB->rtb_x_m;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.ddy =
    localB->rtb_y_c;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.ddz =
    localB->rtb_z_k;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.p =
    localB->rtb_x_c_c;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.q =
    localB->rtb_y_n_b;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.r =
    localB->rtb_z_p_p;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.altitude_sonar
    = localB->rtb_altitude_c;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.prs =
    localB->rtb_pressure_f;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.vbat_V =
    localB->rtb_vbat_V_g;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.vbat_percentage
    = localB->rtb_vbat_percentage_b;

  /* ModelReference: '<S1>/estimator' */
  stateEstimator_run(localB->Switch.controlModePosVSOrient,
                     &localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1,
                     rtu_Sensors->VisionSensors.usePosVIS_flag,
                     &rtu_Sensors->VisionSensors.opticalFlow_data[0],
                     &rtu_Sensors->VisionSensors.posVIS_data[0],
                     &localB->estimator, &rtu_Sensors->SensorCalibration[0],
                     rty_takeoffCommand);

  /* DataTypeConversion: '<S5>/Data Type Conversion6' */
  localB->rtb_dx_g = localB->estimator.dx;

  /* DataTypeConversion: '<S5>/Data Type Conversion7' */
  localB->rtb_dy_m = localB->estimator.dy;

  /* DataTypeConversion: '<S5>/Data Type Conversion1' */
  localB->rtb_Y_n = localB->estimator.Y;

  /* DataTypeConversion: '<S5>/Data Type Conversion' */
  localB->rtb_X_p = localB->estimator.X;

  /* DataTypeConversion: '<S5>/Data Type Conversion2' */
  localB->rtb_Z_l = localB->estimator.Z;

  /* DataTypeConversion: '<S5>/Data Type Conversion3' */
  localB->rtb_yaw_j = localB->estimator.yaw;

  /* DataTypeConversion: '<S5>/Data Type Conversion4' */
  localB->rtb_pitch_d = localB->estimator.pitch;

  /* DataTypeConversion: '<S5>/Data Type Conversion5' */
  localB->rtb_roll_g = localB->estimator.roll;

  /* DataTypeConversion: '<S5>/Data Type Conversion8' */
  localB->rtb_dz_l = localB->estimator.dz;

  /* DataTypeConversion: '<S5>/Data Type Conversion9' */
  localB->rtb_p_d = localB->estimator.p;

  /* DataTypeConversion: '<S5>/Data Type Conversion10' */
  localB->rtb_q_d = localB->estimator.q;

  /* DataTypeConversion: '<S5>/Data Type Conversion11' */
  localB->rtb_r_l = localB->estimator.r;

  /* BusCreator: '<S1>/BusConversion_InsertedFor_controller_at_inport_1' */
  localB->BusConversion_InsertedFor_controller_at_inport_1_BusCreator.X =
    localB->rtb_X_p;
  localB->BusConversion_InsertedFor_controller_at_inport_1_BusCreator.Y =
    localB->rtb_Y_n;
  localB->BusConversion_InsertedFor_controller_at_inport_1_BusCreator.Z =
    localB->rtb_Z_l;
  localB->BusConversion_InsertedFor_controller_at_inport_1_BusCreator.yaw =
    localB->rtb_yaw_j;
  localB->BusConversion_InsertedFor_controller_at_inport_1_BusCreator.pitch =
    localB->rtb_pitch_d;
  localB->BusConversion_InsertedFor_controller_at_inport_1_BusCreator.roll =
    localB->rtb_roll_g;
  localB->BusConversion_InsertedFor_controller_at_inport_1_BusCreator.dx =
    localB->rtb_dx_g;
  localB->BusConversion_InsertedFor_controller_at_inport_1_BusCreator.dy =
    localB->rtb_dy_m;
  localB->BusConversion_InsertedFor_controller_at_inport_1_BusCreator.dz =
    localB->rtb_dz_l;
  localB->BusConversion_InsertedFor_controller_at_inport_1_BusCreator.p =
    localB->rtb_p_d;
  localB->BusConversion_InsertedFor_controller_at_inport_1_BusCreator.q =
    localB->rtb_q_d;
  localB->BusConversion_InsertedFor_controller_at_inport_1_BusCreator.r =
    localB->rtb_r_l;

  /* ModelReference: '<S1>/controller' */
  flightController_run(&localB->Switch, &rty_motorCmds[0],
                       &localB->controller_o2[0],
                       &localB->BusConversion_InsertedFor_controller_at_inport_1_BusCreator,
                       rty_takeoffCommand);

  /* S-Function (sdspFromNetwork): '<S6>/UDP Receive Vicon Data' */
  sErr = GetErrorBuffer(&localDW->UDPReceiveViconData_NetworkLib[0U]);
  localB->samplesRead = 12;
  LibOutputs_Network(&localDW->UDPReceiveViconData_NetworkLib[0U],
                     &localB->UDPReceiveViconData_o1[0U], &localB->samplesRead);
  if (*sErr != 0) {
    rtmSetErrorStatus(flightControlSystem_M, sErr);
    rtmSetStopRequested(flightControlSystem_M, 1);
  }

  localB->UDPReceiveViconData_o2_h = (uint16_T)localB->samplesRead;

  /* End of S-Function (sdspFromNetwork): '<S6>/UDP Receive Vicon Data' */

  /* MATLAB Function: '<S2>/MATLAB Function1' incorporates:
   *  Constant: '<S2>/Constant'
   */
  if (!*rty_takeoffCommand) {
    localB->crashFlag = 0;
  } else if (((real32_T)fabs(localB->rtb_dx_g) > 10.0F) || ((real32_T)fabs
              (localB->rtb_Y_n) > 10.0F)) {
    localB->crashFlag = 1;
  } else {
    if ((fabs(localP->Constant_Value) > 0.01) && ((real32_T)fabs
         (rtu_Sensors->VisionSensors.opticalFlow_data[0] * (real32_T)
          localP->Constant_Value - localB->rtb_dx_g) > 6.0F)) {
      localB->takeoff_flag = true;
    } else {
      localB->takeoff_flag = (((real32_T)fabs
        (rtu_Sensors->VisionSensors.opticalFlow_data[1] * (real32_T)
         localP->Constant_Value - localB->rtb_dy_m) > 6.0F) && ((real32_T)fabs
        (rtu_Sensors->VisionSensors.opticalFlow_data[1]) > 0.01));
    }

    if (localB->takeoff_flag) {
      localB->crashFlag = 99;
    } else {
      localB->crashFlag = 0;
    }
  }

  *rty_crashFlag = (uint8_T)localB->crashFlag;

  /* End of MATLAB Function: '<S2>/MATLAB Function1' */

  /* Gain: '<S6>/Gain' */
  localB->rtb_Z_k_o = localP->Gain_Gain * localB->UDPReceiveViconData_o1[2];

  /* Gain: '<S6>/Gain1' */
  localB->rtb_dz_k_b = localP->Gain1_Gain * localB->UDPReceiveViconData_o1[5];

  /* Outputs for Atomic SubSystem: '<S1>/Logging' */
  flightControlSystem_Logging(flightControlSystem_M, *rty_crashFlag,
    rty_motorCmds, localB->controller_o2, &localB->estimator, &localB->Switch,
    localB->rtb_vbat_V_g, localB->rtb_vbat_percentage_b, localB->rtb_x_m,
    localB->rtb_y_c, localB->rtb_z_k, localB->rtb_x_c_c, localB->rtb_y_n_b,
    localB->rtb_z_p_p, localB->rtb_altitude_c, localB->rtb_pressure_f,
    rtu_Sensors, &localB->UDPReceiveViconData_o1[0], localB->rtb_Z_k_o,
    &localB->UDPReceiveViconData_o1[3], localB->rtb_dz_k_b,
    &localB->UDPReceiveViconData_o1[6], localB->rtb_X_p, localB->rtb_Y_n,
    localB->rtb_Z_l, localB->rtb_yaw_j, localB->rtb_pitch_d, localB->rtb_roll_g,
    localB->rtb_dx_g, localB->rtb_dy_m, localB->rtb_dz_l, localB->rtb_p_d,
    localB->rtb_q_d, localB->rtb_r_l, &localB->Logging, &localDW->Logging);

  /* End of Outputs for SubSystem: '<S1>/Logging' */

  /* Sum: '<S18>/FixPt Sum1' incorporates:
   *  Constant: '<S18>/FixPt Constant'
   */
  localB->rtb_FixPtSum1_l = localB->rtb_Output_n + localP->FixPtConstant_Value;

  /* Switch: '<S19>/FixPt Switch' incorporates:
   *  Constant: '<S19>/Constant'
   *  UnitDelay: '<S13>/Output'
   */
  if (localB->rtb_FixPtSum1_l > localP->WrapToZero_Threshold) {
    localDW->Output_DSTATE = localP->Constant_Value_e;
  } else {
    localDW->Output_DSTATE = localB->rtb_FixPtSum1_l;
  }

  /* End of Switch: '<S19>/FixPt Switch' */

  /* FromWorkspace: '<S14>/fromWS_Signal 1' */
  {
    real32_T *pDataValues = (real32_T *) localDW->fromWS_Signal1_PWORK.DataPtr;
    real_T *pTimeValues = (real_T *) localDW->fromWS_Signal1_PWORK.TimePtr;
    int_T currTimeIndex = localDW->fromWS_Signal1_IWORK.PrevIndex;
    real_T t = ((flightControlSystem_M->Timing.clockTick1) * 0.005);
    if (t > pTimeValues[240]) {
      localB->Signal = 0.0F;
    } else {
      /* Get index */
      if (t <= pTimeValues[0]) {
        currTimeIndex = 0;
      } else if (t >= pTimeValues[240]) {
        currTimeIndex = 239;
      } else {
        if (t < pTimeValues[currTimeIndex]) {
          while (t < pTimeValues[currTimeIndex]) {
            currTimeIndex--;
          }
        } else {
          while (t >= pTimeValues[currTimeIndex + 1]) {
            currTimeIndex++;
          }
        }
      }

      localDW->fromWS_Signal1_IWORK.PrevIndex = currTimeIndex;

      /* Post output */
      {
        real_T t1 = pTimeValues[currTimeIndex];
        real_T t2 = pTimeValues[currTimeIndex + 1];
        if (t1 == t2) {
          if (t < t1) {
            localB->Signal = pDataValues[currTimeIndex];
          } else {
            localB->Signal = pDataValues[currTimeIndex + 1];
          }
        } else {
          real_T f1 = (t2 - t) / (t2 - t1);
          real_T f2 = 1.0 - f1;
          real32_T d1;
          real32_T d2;
          int_T TimeIndex= currTimeIndex;
          d1 = pDataValues[TimeIndex];
          d2 = pDataValues[TimeIndex + 1];
          localB->Signal = (real32_T) rtInterpolate(d1, d2, f1, f2);
          pDataValues += 241;
        }
      }
    }
  }

  /* FromWorkspace: '<S14>/From Workspace' */
  {
    real_T t = flightControlSystem_M->Timing.t[0];
    real_T *pTimeValues = (real_T *) localDW->FromWorkspace_PWORK.TimePtr;
    real32_T *pDataValues = (real32_T *) localDW->FromWorkspace_PWORK.DataPtr;
    if (t < pTimeValues[0]) {
      localB->Signal1 = 0.0F;
    } else if (t == pTimeValues[1]) {
      localB->Signal1 = pDataValues[1];
    } else if (t > pTimeValues[1]) {
      localB->Signal1 = 0.0F;
    } else {
      int_T currTimeIndex = localDW->FromWorkspace_IWORK.PrevIndex;
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }

      localB->Signal1 = pDataValues[currTimeIndex];
      localDW->FromWorkspace_IWORK.PrevIndex = currTimeIndex;
    }
  }

  /* FromWorkspace: '<S14>/From Workspace1' */
  {
    real_T t = flightControlSystem_M->Timing.t[0];
    real_T *pTimeValues = (real_T *) localDW->FromWorkspace1_PWORK.TimePtr;
    real32_T *pDataValues = (real32_T *) localDW->FromWorkspace1_PWORK.DataPtr;
    if (t < pTimeValues[0]) {
      localB->Signal2 = 0.0F;
    } else if (t == pTimeValues[1]) {
      localB->Signal2 = pDataValues[1];
    } else if (t > pTimeValues[1]) {
      localB->Signal2 = 0.0F;
    } else {
      int_T currTimeIndex = localDW->FromWorkspace1_IWORK.PrevIndex;
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }

      localB->Signal2 = pDataValues[currTimeIndex];
      localDW->FromWorkspace1_IWORK.PrevIndex = currTimeIndex;
    }
  }

  /* FromWorkspace: '<S14>/From Workspace2' */
  {
    real_T t = flightControlSystem_M->Timing.t[0];
    real_T *pTimeValues = (real_T *) localDW->FromWorkspace2_PWORK.TimePtr;
    real32_T *pDataValues = (real32_T *) localDW->FromWorkspace2_PWORK.DataPtr;
    if (t < pTimeValues[0]) {
      localB->Signal3 = 0.0F;
    } else if (t == pTimeValues[1]) {
      localB->Signal3 = pDataValues[1];
    } else if (t > pTimeValues[1]) {
      localB->Signal3 = 0.0F;
    } else {
      int_T currTimeIndex = localDW->FromWorkspace2_IWORK.PrevIndex;
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }

      localB->Signal3 = pDataValues[currTimeIndex];
      localDW->FromWorkspace2_IWORK.PrevIndex = currTimeIndex;
    }
  }

  /* FromWorkspace: '<S14>/From Workspace3' */
  {
    real_T t = flightControlSystem_M->Timing.t[0];
    real_T *pTimeValues = (real_T *) localDW->FromWorkspace3_PWORK.TimePtr;
    real32_T *pDataValues = (real32_T *) localDW->FromWorkspace3_PWORK.DataPtr;
    if (t < pTimeValues[0]) {
      localB->Signal4 = 0.0F;
    } else if (t == pTimeValues[1]) {
      localB->Signal4 = pDataValues[1];
    } else if (t > pTimeValues[1]) {
      localB->Signal4 = 0.0F;
    } else {
      int_T currTimeIndex = localDW->FromWorkspace3_IWORK.PrevIndex;
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }

      localB->Signal4 = pDataValues[currTimeIndex];
      localDW->FromWorkspace3_IWORK.PrevIndex = currTimeIndex;
    }
  }

  /* FromWorkspace: '<S14>/From Workspace4' */
  {
    real_T t = flightControlSystem_M->Timing.t[0];
    real_T *pTimeValues = (real_T *) localDW->FromWorkspace4_PWORK.TimePtr;
    real32_T *pDataValues = (real32_T *) localDW->FromWorkspace4_PWORK.DataPtr;
    if (t < pTimeValues[0]) {
      localB->Signal5 = 0.0F;
    } else if (t == pTimeValues[1]) {
      localB->Signal5 = pDataValues[1];
    } else if (t > pTimeValues[1]) {
      localB->Signal5 = 0.0F;
    } else {
      int_T currTimeIndex = localDW->FromWorkspace4_IWORK.PrevIndex;
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }

      localB->Signal5 = pDataValues[currTimeIndex];
      localDW->FromWorkspace4_IWORK.PrevIndex = currTimeIndex;
    }
  }
}

/* Termination for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem_Term(RT_MODEL_flightControlSystem_T
  * const flightControlSystem_M, DW_FlightControlSystem_flightControlSystem_T
  *localDW)
{
  char_T *sErr;

  /* Terminate for S-Function (sdspFromNetwork): '<S6>/UDP Receive Vicon Data' */
  sErr = GetErrorBuffer(&localDW->UDPReceiveViconData_NetworkLib[0U]);
  LibTerminate(&localDW->UDPReceiveViconData_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(flightControlSystem_M, sErr);
    rtmSetStopRequested(flightControlSystem_M, 1);
  }

  LibDestroy(&localDW->UDPReceiveViconData_NetworkLib[0U], 0);
  DestroyUDPInterface(&localDW->UDPReceiveViconData_NetworkLib[0U]);

  /* End of Terminate for S-Function (sdspFromNetwork): '<S6>/UDP Receive Vicon Data' */
}

/* Model step function */
void flightControlSystem_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Flight Control System' */

  /* Inport: '<Root>/Sensors' incorporates:
   *  Outport: '<Root>/takeoffCommand'
   */
  flightControlSystem_FlightControlSystem(flightControlSystem_M, &sensor_inport,
    motors_outport, &flag_outport, &flightControlSystem_Y.takeoffCommand,
    &flightControlSystem_B.FlightControlSystem,
    &flightControlSystem_DW.FlightControlSystem,
    &flightControlSystem_P.FlightControlSystem);

  /* End of Outputs for SubSystem: '<Root>/Flight Control System' */

  /* Outport: '<Root>/Actuators' */
  flightControlSystem_Y.Actuators[0] = motors_outport[0];
  flightControlSystem_Y.Actuators[1] = motors_outport[1];
  flightControlSystem_Y.Actuators[2] = motors_outport[2];
  flightControlSystem_Y.Actuators[3] = motors_outport[3];

  /* Outport: '<Root>/Flag' */
  flightControlSystem_Y.Flag = flag_outport;

  /* Matfile logging */
  rt_UpdateTXYLogVars(flightControlSystem_M->rtwLogInfo,
                      (flightControlSystem_M->Timing.t));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(flightControlSystem_M)!=-1) &&
        !((rtmGetTFinal(flightControlSystem_M)-flightControlSystem_M->Timing.t[0])
          > flightControlSystem_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(flightControlSystem_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  flightControlSystem_M->Timing.t[0] =
    (++flightControlSystem_M->Timing.clockTick0) *
    flightControlSystem_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.005s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.005, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    flightControlSystem_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void flightControlSystem_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)flightControlSystem_M, 0,
                sizeof(RT_MODEL_flightControlSystem_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&flightControlSystem_M->solverInfo,
                          &flightControlSystem_M->Timing.simTimeStep);
    rtsiSetTPtr(&flightControlSystem_M->solverInfo, &rtmGetTPtr
                (flightControlSystem_M));
    rtsiSetStepSizePtr(&flightControlSystem_M->solverInfo,
                       &flightControlSystem_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&flightControlSystem_M->solverInfo,
                          (&rtmGetErrorStatus(flightControlSystem_M)));
    rtsiSetRTModelPtr(&flightControlSystem_M->solverInfo, flightControlSystem_M);
  }

  rtsiSetSimTimeStep(&flightControlSystem_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&flightControlSystem_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(flightControlSystem_M, &flightControlSystem_M->Timing.tArray[0]);
  rtmSetTFinal(flightControlSystem_M, 20.0);
  flightControlSystem_M->Timing.stepSize0 = 0.005;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    flightControlSystem_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(flightControlSystem_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(flightControlSystem_M->rtwLogInfo, (NULL));
    rtliSetLogT(flightControlSystem_M->rtwLogInfo, "tout");
    rtliSetLogX(flightControlSystem_M->rtwLogInfo, "");
    rtliSetLogXFinal(flightControlSystem_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(flightControlSystem_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(flightControlSystem_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(flightControlSystem_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(flightControlSystem_M->rtwLogInfo, 1);

    /*
     * Set pointers to the data and signal info for each output
     */
    {
      static void * rt_LoggedOutputSignalPtrs[] = {
        &flightControlSystem_Y.Actuators[0],
        &flightControlSystem_Y.Flag,
        &flightControlSystem_Y.takeoffCommand
      };

      rtliSetLogYSignalPtrs(flightControlSystem_M->rtwLogInfo,
                            ((LogSignalPtrsType)rt_LoggedOutputSignalPtrs));
    }

    {
      static int_T rt_LoggedOutputWidths[] = {
        4,
        1,
        1
      };

      static int_T rt_LoggedOutputNumDimensions[] = {
        1,
        1,
        1
      };

      static int_T rt_LoggedOutputDimensions[] = {
        4,
        1,
        1
      };

      static boolean_T rt_LoggedOutputIsVarDims[] = {
        0,
        0,
        0
      };

      static void* rt_LoggedCurrentSignalDimensions[] = {
        (NULL),
        (NULL),
        (NULL)
      };

      static int_T rt_LoggedCurrentSignalDimensionsSize[] = {
        4,
        4,
        4
      };

      static BuiltInDTypeId rt_LoggedOutputDataTypeIds[] = {
        SS_SINGLE,
        SS_UINT8,
        SS_BOOLEAN
      };

      static int_T rt_LoggedOutputComplexSignals[] = {
        0,
        0,
        0
      };

      static RTWPreprocessingFcnPtr rt_LoggingPreprocessingFcnPtrs[] = {
        (NULL),
        (NULL),
        (NULL)
      };

      static const char_T *rt_LoggedOutputLabels[] = {
        "motors",
        "flag",
        "" };

      static const char_T *rt_LoggedOutputBlockNames[] = {
        "flightControlSystem/Actuators",
        "flightControlSystem/Flag",
        "flightControlSystem/takeoffCommand" };

      static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert[] = {
        { 0, SS_SINGLE, SS_SINGLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_UINT8, SS_UINT8, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_BOOLEAN, SS_BOOLEAN, 0, 0, 0, 1.0, 0, 0.0 }
      };

      static RTWLogSignalInfo rt_LoggedOutputSignalInfo[] = {
        {
          3,
          rt_LoggedOutputWidths,
          rt_LoggedOutputNumDimensions,
          rt_LoggedOutputDimensions,
          rt_LoggedOutputIsVarDims,
          rt_LoggedCurrentSignalDimensions,
          rt_LoggedCurrentSignalDimensionsSize,
          rt_LoggedOutputDataTypeIds,
          rt_LoggedOutputComplexSignals,
          (NULL),
          rt_LoggingPreprocessingFcnPtrs,

          { rt_LoggedOutputLabels },
          (NULL),
          (NULL),
          (NULL),

          { rt_LoggedOutputBlockNames },

          { (NULL) },
          (NULL),
          rt_RTWLogDataTypeConvert
        }
      };

      rtliSetLogYSignalInfo(flightControlSystem_M->rtwLogInfo,
                            rt_LoggedOutputSignalInfo);

      /* set currSigDims field */
      rt_LoggedCurrentSignalDimensions[0] = &rt_LoggedOutputWidths[0];
      rt_LoggedCurrentSignalDimensions[1] = &rt_LoggedOutputWidths[1];
      rt_LoggedCurrentSignalDimensions[2] = &rt_LoggedOutputWidths[2];
    }

    rtliSetLogY(flightControlSystem_M->rtwLogInfo, "yout");
  }

  /* block I/O */
  (void) memset(((void *) &flightControlSystem_B), 0,
                sizeof(B_flightControlSystem_T));

  /* exported global signals */
  motors_outport[0] = 0.0F;
  motors_outport[1] = 0.0F;
  motors_outport[2] = 0.0F;
  motors_outport[3] = 0.0F;
  flag_outport = 0U;

  /* states (dwork) */
  (void) memset((void *)&flightControlSystem_DW, 0,
                sizeof(DW_flightControlSystem_T));

  /* external inputs */
  (void)memset(&cmd_inport, 0, sizeof(CommandBus));
  (void)memset(&sensor_inport, 0, sizeof(SensorsBus));

  /* external outputs */
  (void) memset((void *)&flightControlSystem_Y, 0,
                sizeof(ExtY_flightControlSystem_T));

  /* Model Initialize function for ModelReference Block: '<S1>/controller' */
  flightController_g_initialize(rtmGetErrorStatusPointer(flightControlSystem_M));

  /* Model Initialize function for ModelReference Block: '<S1>/estimator' */
  stateEstimator_o_initialize(rtmGetErrorStatusPointer(flightControlSystem_M));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(flightControlSystem_M->rtwLogInfo, 0.0,
    rtmGetTFinal(flightControlSystem_M), flightControlSystem_M->Timing.stepSize0,
    (&rtmGetErrorStatus(flightControlSystem_M)));

  /* SetupRuntimeResources for Atomic SubSystem: '<Root>/Flight Control System' */
  flightControlSystem_FlightControlSystem_SetupRTR(flightControlSystem_M,
    &flightControlSystem_DW.FlightControlSystem);

  /* End of SetupRuntimeResources for SubSystem: '<Root>/Flight Control System' */

  /* Start for Atomic SubSystem: '<Root>/Flight Control System' */
  flightControlSystem_FlightControlSystem_Start(flightControlSystem_M,
    &flightControlSystem_DW.FlightControlSystem,
    &flightControlSystem_P.FlightControlSystem);

  /* End of Start for SubSystem: '<Root>/Flight Control System' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Flight Control System' */

  /* SystemInitialize for Inport: '<Root>/Sensors' incorporates:
   *  Outport: '<Root>/takeoffCommand'
   */
  flightControlSystem_FlightControlSystem_Init
    (&flightControlSystem_DW.FlightControlSystem,
     &flightControlSystem_P.FlightControlSystem);

  /* End of SystemInitialize for SubSystem: '<Root>/Flight Control System' */
}

/* Model terminate function */
void flightControlSystem_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Flight Control System' */
  flightControlSystem_FlightControlSystem_Term(flightControlSystem_M,
    &flightControlSystem_DW.FlightControlSystem);

  /* End of Terminate for SubSystem: '<Root>/Flight Control System' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
