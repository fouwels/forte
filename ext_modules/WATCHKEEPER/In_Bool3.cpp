/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: In_Bool3
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-11-05/thomasolsen - null - 
 *************************************************************************/

#include "In_Bool3.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "In_Bool3_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_In_Bool3, g_nStringIdIn_Bool3)

const CStringDictionary::TStringId FORTE_In_Bool3::scm_anDataInputNames[] = {g_nStringIdName1, g_nStringIdName2, g_nStringIdName3};

const CStringDictionary::TStringId FORTE_In_Bool3::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_In_Bool3::scm_anDataOutputNames[] = {g_nStringIdIN1, g_nStringIdIN2, g_nStringIdIN3};

const CStringDictionary::TStringId FORTE_In_Bool3::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_In_Bool3::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_In_Bool3::scm_anEIWith[] = {0, 1, 2, 255};
const CStringDictionary::TStringId FORTE_In_Bool3::scm_anEventInputNames[] = {g_nStringIdINIT};

const TDataIOID FORTE_In_Bool3::scm_anEOWith[] = {0, 1, 2, 255};
const TForteInt16 FORTE_In_Bool3::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_In_Bool3::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_In_Bool3::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  3,  scm_anDataInputNames, scm_anDataInputTypeIds,
  3,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SCFB_FBInstanceData FORTE_In_Bool3::scm_astInternalFBs[] = {
  {g_nStringIdBOOL2BOOL, g_nStringIdBOOL2BOOL},
  {g_nStringIdBOOL2BOOL_1, g_nStringIdBOOL2BOOL},
  {g_nStringIdBOOL2BOOL_2, g_nStringIdBOOL2BOOL},
  {g_nStringIdSUBSCRIBE_3, g_nStringIdSUBSCRIBE_3},
  {g_nStringIdInput_Path_OPC, g_nStringIdInput_Path_OPC_SUB},
};

const SCFB_FBParameter FORTE_In_Bool3::scm_astParamters[] = {
  {3, g_nStringIdQI, "TRUE"},
  {4, g_nStringIddns, "opcserver"},
};

const SCFB_FBConnectionData FORTE_In_Bool3::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_2, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_3, g_nStringIdIND), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_3, g_nStringIdINIT), 3},
};

const SCFB_FBFannedOutConnectionData FORTE_In_Bool3::scm_astFannedOutEventConnections[] = {
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdREQ), 1},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_2, g_nStringIdREQ), 2},
};

const SCFB_FBConnectionData FORTE_In_Bool3::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIN1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIN2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_2, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIN3), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_3, g_nStringIdRD_1), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_3, g_nStringIdRD_2), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_3, g_nStringIdRD_3), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_2, g_nStringIdIN), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdName1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC, g_nStringIdNodeId_1), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdName2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC, g_nStringIdNodeId_2), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdName3), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC, g_nStringIdNodeId_3), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC, g_nStringIdOUT), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_3, g_nStringIdID), 3},
};

const SCFB_FBNData FORTE_In_Bool3::scm_stFBNData = {
  5, scm_astInternalFBs,
  6, scm_astEventConnections,
  2, scm_astFannedOutEventConnections,
  10, scm_astDataConnections,
  0, 0,
  2, scm_astParamters
};


