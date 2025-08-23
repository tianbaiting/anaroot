/*
 * @file TArtDecoderFIT.cc
 * @author T. Yano
 * @date 2025/05/10
 */

#include "TArtDecoderFIT.hh"

TArtDecoderFIT::TArtDecoderFIT()
   : TArtDecoder(kID) {
}
TArtDecoderFIT::~TArtDecoderFIT()
{
}

TArtDecoder* TArtDecoderFIT::Instance()
{
   static TArtDecoderFIT instance;
   return &instance;
}

int TArtDecoderFIT::Decode(
    unsigned char* &buf,
    const unsigned int& size,
    TArtRawSegmentObject* rawseg)
{
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

   unsigned int *evtdata = (unsigned int*) buf;
   unsigned int evtsize = size/sizeof(unsigned int);
   int i0 = 0;
   int igeo, ich;
   int err, trg, edge, measure;
  
   if ((evtdata[0] & kMaskHeaderFlags) >> kShiftHeaderFlags == kHeaderFlags) {
     // Read geometry
     igeo = (evtdata[0] & kMaskGeometry) >> kShiftGeometry;
     i0 = 1;
   }
   
   for (unsigned int i=i0; i<evtsize; i++) {
     err = (evtdata[i] & kMaskError) >> kShiftError;
     if (err) continue;
     trg = (evtdata[i] & kMaskTrigger) >> kShiftTrigger;
     edge = (evtdata[i] & kMaskEdge) >> kShiftEdge;
     ich = (evtdata[i] & kMaskChannel) >> kShiftChannel;
     measure = (evtdata[i] & kMaskMeasure) >> kShiftMeasure;
     TArtRawDataObject *rdata = new TArtRawDataObject(igeo, ich, measure);
     rdata->SetEdge(edge == 1 ? 1 : 0);
     rawseg->PutData(rdata);
   }

   return 0;
}
