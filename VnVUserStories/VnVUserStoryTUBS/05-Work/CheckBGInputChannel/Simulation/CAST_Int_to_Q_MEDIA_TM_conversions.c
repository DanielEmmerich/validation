/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_MEDIA_TM_conversions.h"

void CAST_Int_to_Q_MEDIA_reset_TM_conversions(
  outC_CAST_Int_to_Q_MEDIA_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_Q_MEDIA */
void CAST_Int_to_Q_MEDIA_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_MEDIA::q_media_int */kcg_int q_media_int,
  outC_CAST_Int_to_Q_MEDIA_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_MEDIA::q_media */ Q_MEDIA _2_q_media;
  /* TM_conversions::CAST_Int_to_Q_MEDIA::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_Q_MEDIA::q_media */ Q_MEDIA q_media;
  /* TM_conversions::CAST_Int_to_Q_MEDIA::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_MEDIA::q_media */ Q_MEDIA _3_q_media;
  /* TM_conversions::CAST_Int_to_Q_MEDIA::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_MEDIA::q_media */ Q_MEDIA _5_q_media;
  /* TM_conversions::CAST_Int_to_Q_MEDIA::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L12 = q_media_int;
  outC->q_media_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_media_in == INT_Q_MEDIA_Balise_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    error1 = outC->_L5_IfBlock1;
    outC->_L4_IfBlock1 = ENUM_Q_MEDIA_Balise_TM_conversions;
    _2_q_media = outC->_L4_IfBlock1;
    outC->q_media = _2_q_media;
    outC->error = error1;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_media_in ==
      INT_Q_MEDIA_Loop_TM_conversions;
    if (outC->else_clock_IfBlock1) {
      outC->_L51_IfBlock1 = kcg_false;
      error6 = outC->_L51_IfBlock1;
      outC->_L3_IfBlock1 = ENUM_Q_MEDIA_Loop_TM_conversions;
      _5_q_media = outC->_L3_IfBlock1;
      error = error6;
      q_media = _5_q_media;
    }
    else {
      outC->_L2_IfBlock1 = kcg_true;
      error4 = outC->_L2_IfBlock1;
      outC->_L1_IfBlock1 = ENUM_Q_MEDIA_Balise_TM_conversions;
      _3_q_media = outC->_L1_IfBlock1;
      error = error4;
      q_media = _3_q_media;
    }
    outC->q_media = q_media;
    outC->error = error;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_MEDIA_TM_conversions.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

