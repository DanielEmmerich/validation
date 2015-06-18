/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/modeling/model/Scade/System/OBU_PreIntegrations/TestBenchExample/MultiplexerCheck/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T13:56:05
*************************************************************$ */
#ifndef _CAST_N_TOTAL_to_int_TM_conversions_H_
#define _CAST_N_TOTAL_to_int_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TM_conversions::CAST_N_TOTAL_to_int::n_total_int */ n_total_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else */ _6_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::else::else */ _4_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::else::else::else::else */ _2_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::else::else::else::else::else */ _1_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::else::else::else */ _3_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::else */ _5_else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::then::_L3 */ _L3_IfBlock1;
  kcg_int /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::then::_L2 */ _L2_IfBlock1;
  kcg_bool /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::else::then::_L3 */ _L38_IfBlock1;
  kcg_int /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::else::then::_L1 */ _L19_IfBlock1;
  kcg_bool /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::else::else::else::then::_L3 */ _L312_IfBlock1;
  kcg_int /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::else::else::else::then::_L1 */ _L113_IfBlock1;
  kcg_bool /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::else::else::else::else::else::then::_L3 */ _L315_IfBlock1;
  kcg_int /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::else::else::else::else::else::then::_L1 */ _L116_IfBlock1;
  kcg_bool /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::else::else::else::else::else::else */ else_clock_IfBlock1;
  kcg_int /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::else::else::else::else::else::else::else::_L1 */ _L119_IfBlock1;
  kcg_bool /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::else::else::else::else::else::else::else::_L4 */ _L4_IfBlock1;
  kcg_int /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::else::else::else::else::else::else::then::_L1 */ _L118_IfBlock1;
  kcg_bool /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::else::else::else::else::else::else::then::_L3 */ _L317_IfBlock1;
  kcg_int /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::else::else::else::else::then::_L2 */ _L214_IfBlock1;
  kcg_bool /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::else::else::else::else::then::_L5 */ _L5_IfBlock1;
  kcg_int /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::else::else::then::_L1 */ _L111_IfBlock1;
  kcg_bool /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::else::else::then::_L3 */ _L310_IfBlock1;
  kcg_int /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_N_TOTAL_to_int::IfBlock1::else::then::_L3 */ _L37_IfBlock1;
  N_TOTAL /* TM_conversions::CAST_N_TOTAL_to_int::n_total_in */ n_total_in;
  kcg_bool /* TM_conversions::CAST_N_TOTAL_to_int::error */ error;
  N_TOTAL /* TM_conversions::CAST_N_TOTAL_to_int::_L3 */ _L3;
  kcg_bool /* TM_conversions::CAST_N_TOTAL_to_int::_L4 */ _L4;
} outC_CAST_N_TOTAL_to_int_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_N_TOTAL_to_int */
extern void CAST_N_TOTAL_to_int_TM_conversions(
  /* TM_conversions::CAST_N_TOTAL_to_int::n_total */N_TOTAL n_total,
  outC_CAST_N_TOTAL_to_int_TM_conversions *outC);

extern void CAST_N_TOTAL_to_int_reset_TM_conversions(
  outC_CAST_N_TOTAL_to_int_TM_conversions *outC);

#endif /* _CAST_N_TOTAL_to_int_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_N_TOTAL_to_int_TM_conversions.h
** Generation date: 2015-06-12T13:56:05
*************************************************************$ */

