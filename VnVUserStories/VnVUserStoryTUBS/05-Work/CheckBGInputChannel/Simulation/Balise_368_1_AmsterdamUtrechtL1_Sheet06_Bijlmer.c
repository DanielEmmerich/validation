/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer.h"

void Balise_368_1_reset_AmsterdamUtrechtL1_Sheet06_Bijlmer(
  outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer *outC)
{
  /* 1 */ No_Balise_Packets_reset_InfraLib(&outC->_1_Context_1);
  /* 1 */ Balise_Localisation_reset_InfraLib(&outC->Context_1);
}

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_368_1 */
void Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer(
  /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_368_1::B_data_in */B_data_internal_T_InfraLib *B_data_in,
  /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_368_1::Header */BaliseTelegramHeader_int_T_TM *Header,
  /* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_368_1::PIG_nom */kcg_int PIG_nom,
  outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer *outC)
{
  B_data_internal_T_InfraLib tmp;
  
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L23, Header);
  outC->_L20 = PIG_nom;
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L19, Header);
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L15, B_data_in);
  /* 1 */
  Balise_Localisation_InfraLib(
    &outC->_L15,
    &outC->_L19,
    outC->_L20,
    &outC->Context_1);
  outC->_L21 = outC->Context_1.PIG_0_out;
  outC->_L2 = outC->Context_1.TrainPass;
  outC->tmp = outC->_L2;
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L5, B_data_in);
  if (outC->tmp) {
    /* 1 */
    No_Balise_Packets_InfraLib(&outC->_L23, &outC->_L5, &outC->_1_Context_1);
    kcg_copy_B_data_internal_T_InfraLib(
      &tmp,
      &outC->_1_Context_1.Balise_data_out);
    kcg_copy_B_data_internal_T_InfraLib(&outC->_L4, &tmp);
  }
  else {
    kcg_copy_B_data_internal_T_InfraLib(&outC->_L4, &outC->_L5);
  }
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L17, &outC->_L4);
  if (kcg_true) {
    outC->_L17.pig_nom_0 = outC->_L21;
  }
  kcg_copy_B_data_internal_T_InfraLib(&outC->B_data_out, &outC->_L17);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

