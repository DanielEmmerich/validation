/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_N_PIG_TM_conversions.h"

void CAST_Int_to_N_PIG_reset_TM_conversions(
  outC_CAST_Int_to_N_PIG_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_N_PIG */
void CAST_Int_to_N_PIG_TM_conversions(
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig_int */kcg_int n_pig_int,
  outC_CAST_Int_to_N_PIG_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */ N_PIG n_pig2;
  /* TM_conversions::CAST_Int_to_N_PIG::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */ N_PIG n_pig;
  /* TM_conversions::CAST_Int_to_N_PIG::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_N_PIG::error */ kcg_bool error10;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */ N_PIG n_pig9;
  /* TM_conversions::CAST_Int_to_N_PIG::error */ kcg_bool error8;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */ N_PIG n_pig7;
  /* TM_conversions::CAST_Int_to_N_PIG::error */ kcg_bool error18;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */ N_PIG n_pig17;
  /* TM_conversions::CAST_Int_to_N_PIG::error */ kcg_bool error16;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */ N_PIG n_pig15;
  /* TM_conversions::CAST_Int_to_N_PIG::error */ kcg_bool error26;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */ N_PIG n_pig25;
  /* TM_conversions::CAST_Int_to_N_PIG::error */ kcg_bool error24;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */ N_PIG n_pig23;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */ N_PIG n_pig27;
  /* TM_conversions::CAST_Int_to_N_PIG::error */ kcg_bool error28;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */ N_PIG n_pig29;
  /* TM_conversions::CAST_Int_to_N_PIG::error */ kcg_bool error30;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */ N_PIG n_pig19;
  /* TM_conversions::CAST_Int_to_N_PIG::error */ kcg_bool error20;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */ N_PIG n_pig21;
  /* TM_conversions::CAST_Int_to_N_PIG::error */ kcg_bool error22;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */ N_PIG n_pig11;
  /* TM_conversions::CAST_Int_to_N_PIG::error */ kcg_bool error12;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */ N_PIG n_pig13;
  /* TM_conversions::CAST_Int_to_N_PIG::error */ kcg_bool error14;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */ N_PIG n_pig3;
  /* TM_conversions::CAST_Int_to_N_PIG::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_N_PIG::n_pig */ N_PIG n_pig5;
  /* TM_conversions::CAST_Int_to_N_PIG::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L2 = n_pig_int;
  outC->n_pig_in = outC->_L2;
  outC->IfBlock1_clock = outC->n_pig_in == INT_N_PIG_1st_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L3_IfBlock1 = kcg_false;
    error1 = outC->_L3_IfBlock1;
    outC->error = error1;
  }
  else {
    outC->_6_else_clock_IfBlock1 = outC->n_pig_in ==
      INT_N_PIG_2nd_TM_conversions;
    if (outC->_6_else_clock_IfBlock1) {
      outC->_L37_IfBlock1 = kcg_false;
      error6 = outC->_L37_IfBlock1;
      error = error6;
    }
    else {
      outC->_5_else_clock_IfBlock1 = outC->n_pig_in ==
        INT_N_PIG_3rd_TM_conversions;
      if (outC->_5_else_clock_IfBlock1) {
        outC->_L4_IfBlock1 = kcg_false;
        error10 = outC->_L4_IfBlock1;
        error4 = error10;
      }
      else {
        outC->_4_else_clock_IfBlock1 = outC->n_pig_in ==
          INT_N_PIG_4th_TM_conversions;
        if (outC->_4_else_clock_IfBlock1) {
          outC->_L39_IfBlock1 = kcg_false;
          error14 = outC->_L39_IfBlock1;
          error8 = error14;
        }
        else {
          outC->_3_else_clock_IfBlock1 = outC->n_pig_in ==
            INT_N_PIG_5th_TM_conversions;
          if (outC->_3_else_clock_IfBlock1) {
            outC->_L311_IfBlock1 = kcg_false;
            error18 = outC->_L311_IfBlock1;
            error12 = error18;
          }
          else {
            outC->_2_else_clock_IfBlock1 = outC->n_pig_in ==
              INT_N_PIG_6th_TM_conversions;
            if (outC->_2_else_clock_IfBlock1) {
              outC->_L413_IfBlock1 = kcg_false;
              error22 = outC->_L413_IfBlock1;
              error16 = error22;
            }
            else {
              outC->_1_else_clock_IfBlock1 = outC->n_pig_in ==
                INT_N_PIG_7th_TM_conversions;
              if (outC->_1_else_clock_IfBlock1) {
                outC->_L315_IfBlock1 = kcg_false;
                error26 = outC->_L315_IfBlock1;
                error20 = error26;
              }
              else {
                outC->else_clock_IfBlock1 = outC->n_pig_in ==
                  INT_N_PIG_8th_TM_conversions;
                if (outC->else_clock_IfBlock1) {
                  outC->_L417_IfBlock1 = kcg_false;
                  error30 = outC->_L417_IfBlock1;
                  error24 = error30;
                }
                else {
                  outC->_L319_IfBlock1 = kcg_true;
                  error28 = outC->_L319_IfBlock1;
                  error24 = error28;
                }
                error20 = error24;
              }
              error16 = error20;
            }
            error12 = error16;
          }
          error8 = error12;
        }
        error4 = error8;
      }
      error = error4;
    }
    outC->error = error;
  }
  outC->_L4 = outC->error;
  noname = outC->_L4;
  if (outC->IfBlock1_clock) {
    outC->_L2_IfBlock1 = ENUM_N_PIG_1st_TM_conversions;
    n_pig2 = outC->_L2_IfBlock1;
    outC->n_pig = n_pig2;
  }
  else {
    if (outC->_6_else_clock_IfBlock1) {
      outC->_L1_IfBlock1 = ENUM_N_PIG_2nd_TM_conversions;
      n_pig5 = outC->_L1_IfBlock1;
      n_pig = n_pig5;
    }
    else {
      if (outC->_5_else_clock_IfBlock1) {
        outC->_L18_IfBlock1 = ENUM_N_PIG_3rd_TM_conversions;
        n_pig9 = outC->_L18_IfBlock1;
        n_pig3 = n_pig9;
      }
      else {
        if (outC->_4_else_clock_IfBlock1) {
          outC->_L110_IfBlock1 = ENUM_N_PIG_4th_TM_conversions;
          n_pig13 = outC->_L110_IfBlock1;
          n_pig7 = n_pig13;
        }
        else {
          if (outC->_3_else_clock_IfBlock1) {
            outC->_L112_IfBlock1 = ENUM_N_PIG_5th_TM_conversions;
            n_pig17 = outC->_L112_IfBlock1;
            n_pig11 = n_pig17;
          }
          else {
            if (outC->_2_else_clock_IfBlock1) {
              outC->_L214_IfBlock1 = ENUM_N_PIG_6th_TM_conversions;
              n_pig21 = outC->_L214_IfBlock1;
              n_pig15 = n_pig21;
            }
            else {
              if (outC->_1_else_clock_IfBlock1) {
                outC->_L116_IfBlock1 = ENUM_N_PIG_7th_TM_conversions;
                n_pig25 = outC->_L116_IfBlock1;
                n_pig19 = n_pig25;
              }
              else {
                if (outC->else_clock_IfBlock1) {
                  outC->_L118_IfBlock1 = ENUM_N_PIG_8th_TM_conversions;
                  n_pig29 = outC->_L118_IfBlock1;
                  n_pig23 = n_pig29;
                }
                else {
                  outC->_L220_IfBlock1 = ENUM_N_PIG_8th_TM_conversions;
                  n_pig27 = outC->_L220_IfBlock1;
                  n_pig23 = n_pig27;
                }
                n_pig19 = n_pig23;
              }
              n_pig15 = n_pig19;
            }
            n_pig11 = n_pig15;
          }
          n_pig7 = n_pig11;
        }
        n_pig3 = n_pig7;
      }
      n_pig = n_pig3;
    }
    outC->n_pig = n_pig;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_N_PIG_TM_conversions.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

