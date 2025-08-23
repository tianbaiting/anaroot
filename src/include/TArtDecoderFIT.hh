/*
 * @file TArtDecoderFIT.hh
 * @author T. Yano
 * @date 2025/05/10
 */

#ifndef TARTDECODERFIT_H
#define TARTDECODERFIT_H
#include "TArtDecoder.hh"

class TArtDecoderFIT  : public TArtDecoder {
private:
   TArtDecoderFIT();

public:
   static const int kID = 47;
   static TArtDecoder* Instance();
   virtual ~TArtDecoderFIT();
   virtual int Decode(
       unsigned char* &buf,
       const unsigned int& size,
       TArtRawSegmentObject *rawseg);

  /*
   * FIT
   *
   * Module ID = 47
   *
   * |31|30|29|28|27|26|25|24|23|22|21|20|19|18|17|16|15|14|13|12|11|10|09|08|07|06|05|04|03|02|01|00|
   * | 0| 1| 1| 0|                trigger number                 |              geometry             |
   * |Er| 0| 0|Tr|        channel        |                               data                        |
   * |                                             ...                                               |
   * |Er| 0| 0|Tr|        channel        |                               data                        |
   *
   * channel
   * -   0 -  63 : leading edge
   * - 128 - 191 : trailing edge
   * -        64 : trigger
   * -  68 -  70 : timestamp
   */
   static const unsigned int kHeaderFlags = 0b0110;
   static const unsigned int kMaskHeaderFlags = 0xf0000000;
   static const unsigned int kMaskGeometry    = 0x00000fff;
   static const unsigned int kMaskError       = 0x80000000;
   static const unsigned int kMaskTrigger     = 0x10000000;
   static const unsigned int kMaskEdge        = 0x08000000;
   static const unsigned int kMaskChannel     = 0x07f00000;
   static const unsigned int kMaskMeasure     = 0x000fffff;
   static const int kShiftHeaderFlags = 28;
   static const int kShiftGeometry    =  0;
   static const int kShiftError       = 31;
   static const int kShiftTrigger     = 28;
   static const int kShiftEdge        = 27;
   static const int kShiftChannel     = 20;
   static const int kShiftMeasure     =  0;

};
#endif // end of #ifdef TARTDECODERFIT_H
