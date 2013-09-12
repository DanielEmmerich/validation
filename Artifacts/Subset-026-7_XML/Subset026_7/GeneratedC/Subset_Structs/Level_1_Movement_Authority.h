#ifndef NESTINGMARK_oETCS_Packet_TrackToTrain_Level_1_Movement_Authority
#define NESTINGMARK_oETCS_Packet_TrackToTrain_Level_1_Movement_Authority
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / TrackToTrain_Level_1_Movement_Authority
- Description: UNISIG SUBSET-026-7, ISSUE : 3.3.0, 3.5 ERTMS/ETCS language) 
- Copyright (c) Siemens AG, 2013, All Rights Reserved
 	
- Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl )
- Gist URL: none
- Cryptography: No
- Author(s): SiemensRailAutomation

Disclaimer:

The use of this software is limited to NON-vital applications. 
It has NOT been developed for vital operation purposes and MUST NOT be used for applications 
which may cause harm to people, physical accidents or financial loss. 

THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  	
============================================================================= */
#include <stdint.h>

struct DATA_oETCS_TrackToTrain_Level_1_Movement_Authority {
  int vUsed_idx;                             // aktueller Fuellgrad von aPacket

  struct 
  {
          uint32_t v_TOccurence;            // Zeitpunkt des Empfangs
          uint64_t v_DOccurrence;           // Ort des Empfangs
          uint32_t vState;                  // Bearbeitungszust�nde  
  } info;

  struct 
 { 
// TransmissionMedia=Balise, Loop, RIU
// Transmission of a movement authority for level 1.
// Packet Number = 12

	uint32_t NID_PACKET;                      		// # 8	
	uint32_t Q_DIR;                                  			// # 2	
	uint32_t L_PACKET;                               			// # 13	
	uint32_t Q_SCALE;                                			// # 2	
	uint32_t V_MAIN;                                 			// # 7	
	uint32_t V_LOA;                                  			// # 7	
	uint32_t T_LOA;                                  			// # 10		// Can be set to 'no time-out'    
        struct {
            uint32_t used;                        //N_ITER+1              // # 5
            struct {
	// Set to zero if V_MAIN = 0 or if only one section in the MA
		uint32_t L_SECTION;                       		// # 15	
		uint32_t Q_SECTIONTIMER;                  		// # 1	
		uint32_t T_SECTIONTIMER;                  		// # 10	
		uint32_t D_SECTIONTIMERSTOPLOC;           		// # 15	        
        } a_data[33];
        } k;

	uint32_t L_ENDSECTION;                           			// # 15	
	uint32_t Q_SECTIONTIMER;                         			// # 1	
	uint32_t T_SECTIONTIMER;                         			// # 10	
	uint32_t D_SECTIONTIMERSTOPLOC;                  			// # 15	
	uint32_t Q_ENDTIMER;                             			// # 1	
	uint32_t T_ENDTIMER;                             			// # 10	
	uint32_t D_ENDTIMERSTARTLOC;                     			// # 15	
	uint32_t Q_DANGERPOINT;                          			// # 1	
	uint32_t D_DP;                                   			// # 15	
	uint32_t V_RELEASEDP;                            			// # 7	
	uint32_t Q_OVERLAP;                              			// # 1	
	uint32_t D_STARTOL;                              			// # 15	
	uint32_t T_OL;                                   			// # 10	
	uint32_t D_OL;                                   			// # 15	
	uint32_t V_RELEASEOL;                            			// # 7	
} 


   aPacket[2];       // Instanz der Sturkur mit dem content
};

// struct -> type
typedef struct DATA_oETCS_TrackToTrain_Level_1_Movement_Authority T_DATA_oETCS_TrackToTrain_Level_1_Movement_Authority;
// typ -> ptrtyp
typedef  T_DATA_oETCS_TrackToTrain_Level_1_Movement_Authority* TP_DATA_oETCS_TrackToTrain_Level_1_Movement_Authority;
// declaration of variable of ptrtyp
extern TP_DATA_oETCS_TrackToTrain_Level_1_Movement_Authority  oETCS_Packet_TrackToTrain_Level_1_Movement_Authority;
// instatiate this ptrtype variable like this: (get memory and fill memory)
// TP_DATA_oETCS_TrackToTrain_Level_1_Movement_Authority  oETCS_Packet_TrackToTrain_Level_1_Movement_Authority = new(T_DATA_oETCS_TrackToTrain_Level_1_Movement_Authority);
// and now fill in the content to start with ...
// Access variable like this: oETCS_Packet_TrackToTrain_Level_1_Movement_Authority->...
// maybe : memset(oETCS_Packet_TrackToTrain_Level_1_Movement_Authority, 0, sizeof(T_DATA_oETCS_Packet_TrackToTrain_Level_1_Movement_Authority));
// for complete 0 content.

#endif

