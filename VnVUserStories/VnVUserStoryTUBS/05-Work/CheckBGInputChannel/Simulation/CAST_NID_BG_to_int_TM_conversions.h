/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _CAST_NID_BG_to_int_TM_conversions_H_
#define _CAST_NID_BG_to_int_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TM_conversions::CAST_NID_BG_to_int::nid_bg_int */ nid_bg_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_BG /* TM_conversions::CAST_NID_BG_to_int::_L1 */ _L1;
  kcg_bool /* TM_conversions::CAST_NID_BG_to_int::_L9 */ _L9;
  kcg_bool /* TM_conversions::CAST_NID_BG_to_int::_L8 */ _L8;
  kcg_int /* TM_conversions::CAST_NID_BG_to_int::_L10 */ _L10;
  kcg_int /* TM_conversions::CAST_NID_BG_to_int::_L11 */ _L11;
} outC_CAST_NID_BG_to_int_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_NID_BG_to_int */
extern void CAST_NID_BG_to_int_TM_conversions(
  /* TM_conversions::CAST_NID_BG_to_int::nid_bg */NID_BG nid_bg,
  outC_CAST_NID_BG_to_int_TM_conversions *outC);

extern void CAST_NID_BG_to_int_reset_TM_conversions(
  outC_CAST_NID_BG_to_int_TM_conversions *outC);

#endif /* _CAST_NID_BG_to_int_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_NID_BG_to_int_TM_conversions.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

