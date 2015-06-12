/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/modeling/model/Scade/System/OBU_PreIntegrations/TestBenchExample/MultiplexerCheck/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T13:56:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Consistency_Check_Track_BG_Subfunctions.h"

void Consistency_Check_Track_BG_reset_Subfunctions(
  outC_Consistency_Check_Track_BG_Subfunctions *outC)
{
  /* 1 */ Pack_Received_BG_reset_Subfunctions(&outC->_3_Context_1);
  /* 1 */ Decop_Received_BG_reset_Subfunctions(&outC->_2_Context_1);
  /* 1 */ Decop_Track_Msg_reset_Subfunctions(&outC->_1_Context_1);
  /* 1 */ CAST_Int_to_N_PIG_reset_TM_conversions(&outC->Context_1);
}

/* Subfunctions::Consistency_Check_Track_BG */
void Consistency_Check_Track_BG_Subfunctions(
  /* Subfunctions::Consistency_Check_Track_BG::BTM_Input */API_TrackSideInput_T_API_Msg_Pkg *BTM_Input,
  /* Subfunctions::Consistency_Check_Track_BG::last_Balise */ReceivedBG_CheckBGInputChannel_Pkg *last_Balise,
  /* Subfunctions::Consistency_Check_Track_BG::Expected_Balise_n_pig */kcg_int Expected_Balise_n_pig,
  outC_Consistency_Check_Track_BG_Subfunctions *outC)
{
  M_DUP noname;
  kcg_bool _1_noname;
  RadioMetadata_T_Common_Types_Pkg _2_noname;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg _3_noname;
  T_internal_Type_Obu_BasicTypes_Pkg _4_noname;
  OdometryLocations_T_Obu_BasicTypes_Pkg _5_noname;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg _6_noname;
  A_internal_Type_Obu_BasicTypes_Pkg _7_noname;
  odoMotionState_T_Obu_BasicTypes_Pkg _8_noname;
  odoMotionDirection_T_Obu_BasicTypes_Pkg _9_noname;
  LocWithInAcc_T_Obu_BasicTypes_Pkg _10_noname;
  CompressedPackets_T_Common_Types_Pkg _11_noname;
  
  outC->_L329 = Expected_Balise_n_pig;
  /* 1 */ CAST_Int_to_N_PIG_TM_conversions(outC->_L329, &outC->Context_1);
  outC->_L332 = outC->Context_1.n_pig;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L116, BTM_Input);
  /* 1 */ Decop_Track_Msg_Subfunctions(&outC->_L116, &outC->_1_Context_1);
  outC->_L184 = outC->_1_Context_1.BTM_Msg_valid;
  outC->_L185 = outC->_1_Context_1.MsgReceivedTime;
  outC->_L186 = outC->_1_Context_1.MsgSource;
  outC->_L187 = outC->_1_Context_1.TelegramPresent;
  outC->_L188 = outC->_1_Context_1.CheckResult;
  outC->_L189 = outC->_1_Context_1.badbalise;
  outC->_L190 = outC->_1_Context_1.q_updown;
  outC->_L191 = outC->_1_Context_1.m_dup;
  outC->_L192 = outC->_1_Context_1.q_link;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L200,
    &outC->_1_Context_1.Compressed_Packets);
  outC->_L201 = outC->_1_Context_1.m_Version;
  outC->_L202 = outC->_1_Context_1.q_media;
  outC->_L203 = outC->_1_Context_1.n_pig;
  outC->_L204 = outC->_1_Context_1.n_total;
  outC->_L205 = outC->_1_Context_1.m_mcount;
  outC->_L206 = outC->_1_Context_1.nid_c;
  outC->_L207 = outC->_1_Context_1.nid_bg;
  outC->_L208 = outC->_1_Context_1.odo_valid;
  outC->_L209 = outC->_1_Context_1.odo_time;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L210,
    &outC->_1_Context_1.odo_loc);
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
    &outC->_L211,
    &outC->_1_Context_1.odo_speed);
  outC->_L212 = outC->_1_Context_1.odo_acc;
  outC->_L213 = outC->_1_Context_1.odo_motion;
  outC->_L214 = outC->_1_Context_1.odo_dir;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L215,
    &outC->_1_Context_1.odo_locinacc);
  outC->_L216 = outC->_1_Context_1.radio_present;
  outC->_L217 = outC->_1_Context_1.radio_consistency;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L218,
    &outC->_1_Context_1.RadioHeader);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L219,
    &outC->_1_Context_1.RadioMetadata);
  outC->_L330 = outC->_L332 == outC->_L203;
  outC->Warning_unexspected_Balise = outC->_L330;
  kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&outC->_L328, last_Balise);
  /* 1 */ Decop_Received_BG_Subfunctions(&outC->_L328, &outC->_2_Context_1);
  outC->_L228 = outC->_2_Context_1.Output_valid;
  outC->_L229 = outC->_2_Context_1.Completenes;
  outC->_L230 = outC->_2_Context_1.Consistency;
  outC->_L231 = outC->_2_Context_1.TimeStamp;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L232,
    &outC->_2_Context_1.CompressedPackets);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L233,
    &outC->_2_Context_1.RadioHeader);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L234,
    &outC->_2_Context_1.RadioMetadata);
  outC->_L235 = outC->_2_Context_1.Msg_Source;
  outC->_L236 = outC->_2_Context_1.Message_valid;
  outC->_L237 = outC->_2_Context_1.q_dirtrain;
  outC->_L238 = outC->_2_Context_1.q_dirLRBG;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L239,
    &outC->_2_Context_1.locwithinacc);
  outC->_L240 = outC->_2_Context_1.q_link;
  outC->_L241 = outC->_2_Context_1.nid_bg;
  outC->_L242 = outC->_2_Context_1.nid_c;
  outC->_L243 = outC->_2_Context_1.m_mcount;
  outC->_L244 = outC->_2_Context_1.n_total;
  outC->_L245 = outC->_2_Context_1.q_media;
  outC->_L246 = outC->_2_Context_1.m_version;
  outC->_L247 = outC->_2_Context_1.q_updown;
  outC->_L248 = outC->_2_Context_1.BG_present;
  outC->_L249 = outC->_2_Context_1.assignedCoordinates;
  outC->_L250 = outC->_2_Context_1.q_nvlocacc;
  outC->_L251 = outC->_2_Context_1.odo_valid;
  outC->_L252 = outC->_2_Context_1.odo_time;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L253,
    &outC->_2_Context_1.odo_loc);
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
    &outC->_L254,
    &outC->_2_Context_1.odo_speed);
  outC->_L255 = outC->_2_Context_1.odo_acc;
  outC->_L256 = outC->_2_Context_1.odo_motion;
  outC->_L257 = outC->_2_Context_1.odo_dir;
  outC->_L331 = outC->_L330 & outC->_L229;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_11_noname, &outC->_L200);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_10_noname, &outC->_L215);
  _9_noname = outC->_L214;
  _8_noname = outC->_L213;
  _7_noname = outC->_L212;
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(&_6_noname, &outC->_L211);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_5_noname, &outC->_L210);
  _4_noname = outC->_L209;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->locinacc, &outC->_L239);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L326, &outC->locinacc);
  outC->q_dirlrbg = outC->_L238;
  outC->q_dirtrain = outC->_L237;
  outC->assignedcoordination = outC->_L249;
  outC->q_nvlocacc = outC->_L250;
  outC->_L317 = outC->q_nvlocacc;
  outC->_L316 = outC->assignedcoordination;
  outC->_L315 = outC->q_dirtrain;
  outC->_L314 = outC->q_dirlrbg;
  outC->m_version = outC->_L246;
  outC->m_mcount = outC->_L243;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&outC->RadioMeta, &outC->_L234);
  outC->q_media = outC->_L245;
  outC->q_link = outC->_L240;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->CompressedPackets,
    &outC->_L232);
  outC->nid_c = outC->_L242;
  outC->q_updown = outC->_L247;
  outC->BG_present = outC->_L248;
  outC->n_total = outC->_L244;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->RadioHeader,
    &outC->_L233);
  outC->nid_bg = outC->_L241;
  outC->_L297 = outC->q_link;
  outC->_L298 = outC->nid_bg;
  outC->_L299 = outC->nid_c;
  outC->_L300 = outC->m_mcount;
  outC->_L301 = outC->n_total;
  outC->_L296 = outC->q_media;
  outC->_L295 = outC->m_version;
  outC->_L294 = outC->q_updown;
  outC->_L293 = outC->BG_present;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L292,
    &outC->CompressedPackets);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L291,
    &outC->RadioHeader);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&outC->_L290, &outC->RadioMeta);
  outC->MsgSource = outC->_L235;
  outC->_L288 = outC->MsgSource;
  outC->_L163 = outC->_L187 | outC->_L216;
  outC->_L279 = outC->_L163 == outC->_L236;
  outC->Msg_valid = outC->_L279;
  outC->_L286 = outC->Msg_valid;
  outC->TimeStamp = outC->_L185;
  outC->_L285 = outC->TimeStamp;
  outC->_L222 = outC->_L188 & outC->_L189;
  outC->_L281 = outC->_L222 & outC->_L230;
  outC->_L282 = outC->_L185 > outC->_L231;
  outC->_L283 = outC->_L186 == outC->_L235;
  outC->_L280 = outC->_L192 == outC->_L240;
  outC->_L278 = outC->_L207 == outC->_L241;
  outC->_L276 = outC->_L206 == outC->_L242;
  outC->_L277 = outC->_L205 == outC->_L243;
  outC->_L265 = outC->_L204 == outC->_L244;
  outC->_L264 = outC->_L202 == outC->_L245;
  outC->_L263 = outC->_L201 == outC->_L246;
  outC->_L262 = outC->_L190 == outC->_L247;
  outC->_L261 = outC->_L184 == outC->_L248;
  outC->_L273 = outC->_L208 == outC->_L251;
  outC->_L284 = outC->_L281 & outC->_L282 & outC->_L283 & outC->_L279 &
    outC->_L280 & outC->_L278 & outC->_L276 & outC->_L277 & outC->_L265 &
    outC->_L264 & outC->_L263 & outC->_L262 & outC->_L261 & outC->_L273;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&_3_noname, &outC->_L218);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_2_noname, &outC->_L219);
  _1_noname = outC->_L217;
  noname = outC->_L191;
  /* 1 */
  Pack_Received_BG_Subfunctions(
    outC->_L228,
    outC->_L331,
    outC->_L284,
    outC->_L285,
    outC->_L286,
    outC->_L288,
    &outC->_L290,
    &outC->_L291,
    &outC->_L292,
    outC->_L293,
    outC->_L294,
    outC->_L295,
    outC->_L296,
    outC->_L301,
    outC->_L300,
    outC->_L299,
    outC->_L298,
    outC->_L297,
    &outC->_L326,
    outC->_L317,
    outC->_L316,
    outC->_L314,
    outC->_L315,
    outC->_L273,
    outC->_L252,
    &outC->_L253,
    &outC->_L254,
    outC->_L255,
    outC->_L256,
    outC->_L257,
    &outC->_3_Context_1);
  kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
    &outC->_L220,
    &outC->_3_Context_1.Received_BG);
  kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&outC->out_BG, &outC->_L220);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Consistency_Check_Track_BG_Subfunctions.c
** Generation date: 2015-06-12T13:56:05
*************************************************************$ */

