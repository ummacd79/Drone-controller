/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControlSystem_private.h
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

#ifndef RTW_HEADER_flightControlSystem_private_h_
#define RTW_HEADER_flightControlSystem_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "flightControlSystem.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

/* Used by FromWorkspace Block: '<S14>/fromWS_Signal 1' */
#ifndef rtInterpolate
# define rtInterpolate(v1,v2,f1,f2)    (((v1)==(v2))?((double)(v1)): (((f1)*((double)(v1)))+((f2)*((double)(v2)))))
#endif

#ifndef rtRound
# define rtRound(v)                    ( ((v) >= 0) ? floor((v) + 0.5) : ceil((v) - 0.5) )
#endif

extern void flightControlSystem_Logging_SetupRTR(RT_MODEL_flightControlSystem_T *
  const flightControlSystem_M, DW_Logging_flightControlSystem_T *localDW);
extern void flightControlSystem_Logging(RT_MODEL_flightControlSystem_T * const
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
  DW_Logging_flightControlSystem_T *localDW);
extern void flightControlSystem_FlightControlSystem_SetupRTR
  (RT_MODEL_flightControlSystem_T * const flightControlSystem_M,
   DW_FlightControlSystem_flightControlSystem_T *localDW);
extern void flightControlSystem_FlightControlSystem_Init
  (DW_FlightControlSystem_flightControlSystem_T *localDW,
   P_FlightControlSystem_flightControlSystem_T *localP);
extern void flightControlSystem_FlightControlSystem_Start
  (RT_MODEL_flightControlSystem_T * const flightControlSystem_M,
   DW_FlightControlSystem_flightControlSystem_T *localDW,
   P_FlightControlSystem_flightControlSystem_T *localP);
extern void flightControlSystem_FlightControlSystem
  (RT_MODEL_flightControlSystem_T * const flightControlSystem_M, const
   SensorsBus *rtu_Sensors, real32_T rty_motorCmds[4], uint8_T *rty_crashFlag,
   boolean_T *rty_takeoffCommand, B_FlightControlSystem_flightControlSystem_T
   *localB, DW_FlightControlSystem_flightControlSystem_T *localDW,
   P_FlightControlSystem_flightControlSystem_T *localP);
extern void flightControlSystem_FlightControlSystem_Term
  (RT_MODEL_flightControlSystem_T * const flightControlSystem_M,
   DW_FlightControlSystem_flightControlSystem_T *localDW);

#endif                           /* RTW_HEADER_flightControlSystem_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
