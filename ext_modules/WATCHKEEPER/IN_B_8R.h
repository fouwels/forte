/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: IN_B_8R
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-11-12/thomasolsen - null - 
 *************************************************************************/

#ifndef _IN_B_8R_H_
#define _IN_B_8R_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_bool.h>
#include <forte_wstring.h>

class FORTE_IN_B_8R: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_IN_B_8R)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &EN() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_WSTRING &ID1() {
    return *static_cast<CIEC_WSTRING*>(getDI(1));
  };

  CIEC_WSTRING &ID2() {
    return *static_cast<CIEC_WSTRING*>(getDI(2));
  };

  CIEC_WSTRING &ID3() {
    return *static_cast<CIEC_WSTRING*>(getDI(3));
  };

  CIEC_WSTRING &ID4() {
    return *static_cast<CIEC_WSTRING*>(getDI(4));
  };

  CIEC_WSTRING &ID5() {
    return *static_cast<CIEC_WSTRING*>(getDI(5));
  };

  CIEC_WSTRING &ID6() {
    return *static_cast<CIEC_WSTRING*>(getDI(6));
  };

  CIEC_WSTRING &ID7() {
    return *static_cast<CIEC_WSTRING*>(getDI(7));
  };

  CIEC_WSTRING &ID8() {
    return *static_cast<CIEC_WSTRING*>(getDI(8));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &ST() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_BOOL &Q1() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  };

  CIEC_BOOL &Q2() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  };

  CIEC_BOOL &Q3() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  };

  CIEC_BOOL &Q4() {
    return *static_cast<CIEC_BOOL*>(getDO(4));
  };

  CIEC_BOOL &Q5() {
    return *static_cast<CIEC_BOOL*>(getDO(5));
  };

  CIEC_BOOL &Q6() {
    return *static_cast<CIEC_BOOL*>(getDO(6));
  };

  CIEC_BOOL &Q7() {
    return *static_cast<CIEC_BOOL*>(getDO(7));
  };

  CIEC_BOOL &Q8() {
    return *static_cast<CIEC_BOOL*>(getDO(8));
  };

  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventREQID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventCNFID = 1;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(2, 9, 9, 0);

  static const SCFB_FBInstanceData scm_astInternalFBs[];

  static const SCFB_FBParameter scm_astParamters[];

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_IN_B_8R){
  };

  virtual ~FORTE_IN_B_8R(){};

};

#endif //close the ifdef sequence from the beginning of the file

