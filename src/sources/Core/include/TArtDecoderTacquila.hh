/*
 * @file TArtDecoderTacquila.h
 */
#ifndef TARTDECODERTACQUILA_H
#define TARTDECODERTACQUILA_H
#include "TArtDecoder.hh"
class TArtDecoderTacquila  : public TArtDecoder {

private:
   TArtDecoderTacquila();

public:
   static const int kID = 54;
   static TArtDecoder* Instance();
   ~TArtDecoderTacquila();
   int Decode(unsigned char* &buf, const unsigned int& size,
	      TArtRawSegmentObject *rawseg);


};
#endif // end of #ifdef TARTDECODERTacquila_H
