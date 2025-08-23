/*
 * @file TArtDecoderRICHADCM.h
 * @date  Created : 2008/11/26 18:59:31 JST<BR>
 *  Last Modified : 2008/11/26 21:33:41 JST
 *--------------------------------------------------------
 *    Comment : 
 *    
 *--------------------------------------------------------
 *    Copyright (C)2008 by Shinsuke OTA <ota@ribf.riken.jp>
 */
#ifndef TARTDECODERRICHADCM_H
#define TARTDECODERRICHADCM_H
#include "TArtDecoder.hh"
class TArtDecoderRICHADCM  : public TArtDecoder {
private:
   TArtDecoderRICHADCM();
   TArtDecoderRICHADCM(const TArtDecoderRICHADCM&rhs) {;}
   //TArtDecoderRICHADCM& operator=(const TArtDecoderRICHADCM&rhs) {;}
public:
  static const int kID = 44;
  //int evtn;
  //static const int kID = 0;
   static TArtDecoder* Instance();
   ~TArtDecoderRICHADCM();
   int Decode(unsigned char* &buf, const unsigned int& size,
	      TArtRawSegmentObject *rawseg);
  int Endian(unsigned int x);
  //int getevtn(){return evtn;};
  //int incevtn(){evtn++;};

};
#endif // end of #ifdef TARTDECODERRICHADCM_H
