/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter_H_
#define _Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::outAcceptMessage */ outAcceptMessage;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::outStoreInTransitionBuffer */ outStoreInTransitionBuffer;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::_L2 */ _L2;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::_L6 */ _L6;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::_L7 */ _L7;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::_L8 */ _L8;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::_L10 */ _L10;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::_L11 */ _L11;
} outC_Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition */
extern void Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::inLevelTransitionInMessage */kcg_bool inLevelTransitionInMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::inPendingL1Transtion */kcg_bool inPendingL1Transtion,
  /* InformationFilter_Pkg::FirstFilter::Exception11RejectIfPendingTransition::inPendingL2L3Transition */kcg_bool inPendingL2L3Transition,
  outC_Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter *outC);

extern void Exception11RejectIfPendin_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter *outC);

#endif /* _Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception11RejectIfPendin_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
