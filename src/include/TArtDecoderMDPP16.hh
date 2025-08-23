#ifndef TARTDECODERMDPP16_H
#define TARTDECODERMDPP16_H
#include "TArtDecoder.hh"
class TArtDecoderMDPP16 : public TArtDecoder {
private:
   TArtDecoderMDPP16();

public:
   static const int kID = 19;
   static TArtDecoder* Instance();
   ~TArtDecoderMDPP16();
   int Decode(unsigned char* &buf, const unsigned int& size,
	      TArtRawSegmentObject *rawseg);
};
#endif // end of #ifdef TARTDECODERMDPP16_H
