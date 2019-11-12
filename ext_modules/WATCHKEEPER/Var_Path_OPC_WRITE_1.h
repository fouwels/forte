/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: Var_Path_OPC_WRITE_1
 *** Description: Template for a Simple Function Block Type
 *** Version: 
 ***     1.0: 2019-11-08/thomasolsen - null - 
 *************************************************************************/

#ifndef _VAR_PATH_OPC_WRITE_1_H_
#define _VAR_PATH_OPC_WRITE_1_H_

#include <simplefb.h>
#include <forte_bool.h>
#include <forte_wstring.h>

class FORTE_Var_Path_OPC_WRITE_1: public CSimpleFB{
  DECLARE_FIRMWARE_FB(FORTE_Var_Path_OPC_WRITE_1)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_WSTRING &dns() {
    return *static_cast<CIEC_WSTRING*>(getDI(0));
  };

  CIEC_WSTRING &NodeId_1() {
    return *static_cast<CIEC_WSTRING*>(getDI(1));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &ENABLED() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_WSTRING &OUT() {
    return *static_cast<CIEC_WSTRING*>(getDO(1));
  };

  static const TEventID scm_nEventREQID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCNFID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 2, 2, 0);
  void alg_REQ(void);

public:
  FORTE_Var_Path_OPC_WRITE_1(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
              0, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_Var_Path_OPC_WRITE_1(){};

};

#endif //close the ifdef sequence from the beginning of the file
