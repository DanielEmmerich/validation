/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _C_P042_compr_onboard_TM_conversions_H_
#define _C_P042_compr_onboard_TM_conversions_H_

#include "kcg_types.h"
#include "CAST_Int_to_Q_RBC_TM_conversions.h"
#include "CAST_Int_to_NID_C_TM_conversions.h"
#include "CAST_Int_to_NID_RBC_TM_conversions.h"
#include "CAST_Int_to_NID_RADIO_TM_conversions.h"
#include "CAST_Int_to_Q_SLEEPSESSION_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P42_SessionManagement_T_Packet_Types_Pkg /* TM_conversions::C_P042_compr_onboard::P131_onboard */ P131_onboard;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_Q_RBC_TM_conversions /* 1 */ _4_Context_1;
  outC_CAST_Int_to_NID_C_TM_conversions /* 1 */ _3_Context_1;
  outC_CAST_Int_to_NID_RBC_TM_conversions /* 1 */ _2_Context_1;
  outC_CAST_Int_to_NID_RADIO_TM_conversions /* 1 */ _1_Context_1;
  outC_CAST_Int_to_Q_SLEEPSESSION_TM_conversions /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ _6_else_clock_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ IfBlock1_clock_1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L1 */ _L1_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L5 */ _L5_1;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_PACKET::_L4 */ _L4_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::_L3 */ _L3_1;
  kcg_bool /* TM_conversions::CAST_Int_to_NID_PACKET::_L2 */ _L2_1;
  NID_PACKET /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet */ nid_packet_1;
  kcg_int /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet_int */ nid_packet_int_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */ _L5_18_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */ _L4_17_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */ _L4_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */ _L2_15_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */ _L1_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */ _L2_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ else_clock_1_IfBlock1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */ _L3_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */ _L5_1_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::error */ error_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_in */ q_dir_in_1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_DIR::_L13 */ _L13_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::_L12 */ _L12_1;
  Q_DIR /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ q_dir_1;
  kcg_int /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_int */ q_dir_int_1;
  NID_PACKET /* TM_conversions::C_P042_compr_onboard::_L12 */ _L12;
  Q_DIR /* TM_conversions::C_P042_compr_onboard::_L11 */ _L11;
  P42_SessionManagement_T_Packet_Types_Pkg /* TM_conversions::C_P042_compr_onboard::_L10 */ _L10;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions::C_P042_compr_onboard::_L9 */ _L9;
  Q_RBC /* TM_conversions::C_P042_compr_onboard::_L4 */ _L4;
  MetadataElement_T_Common_Types_Pkg /* TM_conversions::C_P042_compr_onboard::_L20 */ _L20;
  kcg_int /* TM_conversions::C_P042_compr_onboard::_L21 */ _L21;
  kcg_bool /* TM_conversions::C_P042_compr_onboard::_L22 */ _L22;
  kcg_int /* TM_conversions::C_P042_compr_onboard::_L23 */ _L23;
  kcg_int /* TM_conversions::C_P042_compr_onboard::_L24 */ _L24;
  kcg_int /* TM_conversions::C_P042_compr_onboard::_L25 */ _L25;
  kcg_int /* TM_conversions::C_P042_compr_onboard::_L26 */ _L26;
  NID_C /* TM_conversions::C_P042_compr_onboard::_L27 */ _L27;
  kcg_int /* TM_conversions::C_P042_compr_onboard::_L28 */ _L28;
  NID_RBC /* TM_conversions::C_P042_compr_onboard::_L29 */ _L29;
  kcg_int /* TM_conversions::C_P042_compr_onboard::_L30 */ _L30;
  NID_RADIO /* TM_conversions::C_P042_compr_onboard::_L31 */ _L31;
  kcg_int /* TM_conversions::C_P042_compr_onboard::_L32 */ _L32;
  Q_SLEEPSESSION /* TM_conversions::C_P042_compr_onboard::_L33 */ _L33;
} outC_C_P042_compr_onboard_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P042_compr_onboard */
extern void C_P042_compr_onboard_TM_conversions(
  /* TM_conversions::C_P042_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P042_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P042_compr_onboard_TM_conversions *outC);

extern void C_P042_compr_onboard_reset_TM_conversions(
  outC_C_P042_compr_onboard_TM_conversions *outC);

#endif /* _C_P042_compr_onboard_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P042_compr_onboard_TM_conversions.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
