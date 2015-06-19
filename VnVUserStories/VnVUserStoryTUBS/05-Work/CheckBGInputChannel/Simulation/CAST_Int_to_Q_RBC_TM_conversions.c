/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_RBC_TM_conversions.h"

void CAST_Int_to_Q_RBC_reset_TM_conversions(
  outC_CAST_Int_to_Q_RBC_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_Q_RBC */
void CAST_Int_to_Q_RBC_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_RBC::q_rbc_int */kcg_int q_rbc_int,
  outC_CAST_Int_to_Q_RBC_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_RBC::q_rbc */ Q_RBC q_rbc2;
  /* TM_conversions::CAST_Int_to_Q_RBC::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_Q_RBC::q_rbc */ Q_RBC q_rbc;
  /* TM_conversions::CAST_Int_to_Q_RBC::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_RBC::q_rbc */ Q_RBC q_rbc3;
  /* TM_conversions::CAST_Int_to_Q_RBC::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_RBC::q_rbc */ Q_RBC q_rbc5;
  /* TM_conversions::CAST_Int_to_Q_RBC::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L12 = q_rbc_int;
  outC->q_rbc_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_rbc_in == INT_Q_RBC_establish_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    error1 = outC->_L5_IfBlock1;
    outC->_L4_IfBlock1 = ENUM_Q_RBC_establish_TM_conversions;
    q_rbc2 = outC->_L4_IfBlock1;
    outC->q_rbc = q_rbc2;
    outC->error = error1;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_rbc_in ==
      INT_Q_RBC_terminate_TM_conversions;
    if (outC->else_clock_IfBlock1) {
      outC->_L51_IfBlock1 = kcg_false;
      error6 = outC->_L51_IfBlock1;
      outC->_L3_IfBlock1 = ENUM_Q_RBC_terminate_TM_conversions;
      q_rbc5 = outC->_L3_IfBlock1;
      error = error6;
      q_rbc = q_rbc5;
    }
    else {
      outC->_L2_IfBlock1 = kcg_true;
      error4 = outC->_L2_IfBlock1;
      outC->_L1_IfBlock1 = ENUM_Q_RBC_terminate_TM_conversions;
      q_rbc3 = outC->_L1_IfBlock1;
      error = error4;
      q_rbc = q_rbc3;
    }
    outC->q_rbc = q_rbc;
    outC->error = error;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_RBC_TM_conversions.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */
