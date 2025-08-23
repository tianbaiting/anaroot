/*
 * @file TArtDecoderVmeEasyroc.cc
 * geo:0 High gain ADC
 * geo:1 Low gain ADC
 * geo:2 Leading edge TDC
 * geo:3 Trailing edge TDC
 * geo:4 Scaler
 */
#include "TArtDecoderVmeEasyroc.hh"
#include "TArtDecoderFactory.hh"
#include "TArtCore.hh"
#include "segidlist.hh"
#include <stdio.h>
#include <byteswap.h>

TArtDecoderVmeEasyroc::TArtDecoderVmeEasyroc()
   : TArtDecoder(kID) {
}

TArtDecoderVmeEasyroc::~TArtDecoderVmeEasyroc()
{
}

TArtDecoder* TArtDecoderVmeEasyroc::Instance()
{
   static TArtDecoderVmeEasyroc instance;
   return &instance;
}



bool TArtDecoderVmeEasyroc::isAdcHg(unsigned int data)
{
    return (data & 0x00680000) == 0x00000000;
}

bool TArtDecoderVmeEasyroc::isAdcLg(unsigned int data)
{
    return (data & 0x00680000) == 0x00080000;
}

bool TArtDecoderVmeEasyroc::isTdcLeading(unsigned int data)
{
    return (data & 0x00601000) == 0x00201000;
}

bool TArtDecoderVmeEasyroc::isTdcTrailing(unsigned int data)
{
    return (data & 0x00601000) == 0x00200000;
}

bool TArtDecoderVmeEasyroc::isScaler(unsigned int data)
{
    return (data & 0x00600000) == 0x00400000;
}

unsigned int TArtDecoderVmeEasyroc::getBigEndian32(unsigned char* b)
{
  return ((b[0] << 24) & 0xff000000) |
    ((b[1] << 16) & 0x00ff0000) |
    ((b[2] <<  8) & 0x0000ff00) |
    ((b[3] <<  0) & 0x000000ff);
}

unsigned int TArtDecoderVmeEasyroc::mydecode(unsigned int data){
  unsigned int outdata = (data & 0x7f000000)>>3 | (data & 0x7f0000)>>2 | (data & 0x7f00)>>1 | (data & 0x7f);
  return outdata;
}


int TArtDecoderVmeEasyroc::Decode(unsigned char* &buf, 
				  const unsigned int& size,
				  TArtRawSegmentObject* rawseg)
{
  //  TArtCore::Info(__FILE__,"TArtDecoderVmeEasyroc::Decode %d",size);

  /*
  unsigned char newbuf[size];
  unsigned char *nbuf = newbuf;
  for(int i=0; i<size; i+=4){
    newbuf[i] = buf[i+3];
    newbuf[i+1] = buf[i+2];
    newbuf[i+2] = buf[i+1];
    newbuf[i+3] = buf[i];
  }
  */

  unsigned int *evtdata = (unsigned int*) buf;
  unsigned int evtsize = size/sizeof(unsigned int);
  unsigned int header = getBigEndian32(buf);
  header = mydecode(header);

  //  bool isHeader = ((header >> 27) & 0x01) == 0x01;
  bool isHeader = ((header >> 12) & 0x0ffff) == 0xffff; // for FSDBSD
  if(!isHeader) {
    TArtCore::Error(__FILE__,"Frame Error    %08X\n", header);
  }

  //  int numdat = evtdata[0] & 0xfff;
  int numdat = header & 0xfff;
  TArtCore::Debug(__FILE__,"header:%08X, num dat: %d", header, numdat);

  if(numdat + 1 != evtsize){
    TArtCore::Info(__FILE__,"data size is different from expected size from header:%x, num dat: %d, evtsize: %d", header, numdat, evtsize);
    //    return 0;
  }

  TArtRawDataObject *rdata = NULL;
  for (int i=1; i<evtsize; i++) {
    TArtCore::Debug(__FILE__,"%02d evtdata:%08X", i, evtdata[i]);
    if(isAdcHg(evtdata[i])) {
      int ch = (evtdata[i] >> 13) & 0x3f;
      bool otr = ((evtdata[i] >> 12) & 0x01) != 0;
      int value = evtdata[i] & 0x0fff;
      if(!otr) {
	rdata = new TArtRawDataObject(0,ch,value);
      }
      else{
	rdata = NULL;
      }
      TArtCore::Debug(__FILE__,"Ch: %d, ADC Hg:%d %x", ch, value, rdata);
    }else if(isAdcLg(evtdata[i])) {
      int ch = (evtdata[i] >> 13) & 0x3f;
      bool otr = ((evtdata[i] >> 12) & 0x01) != 0;
      int value = evtdata[i] & 0x0fff;
      if(!otr) {
	rdata = new TArtRawDataObject(1,ch,value);
      }
      else{
	rdata = NULL;
      }
      TArtCore::Debug(__FILE__,"Ch: %d, ADC Lg:%d %x", ch, value, rdata);
    }else if(isTdcLeading(evtdata[i])) {
      int ch = (evtdata[i] >> 13) & 0x3f;
      int value = evtdata[i] & 0x0fff;
      rdata = new TArtRawDataObject(2,ch,value);
      TArtCore::Debug(__FILE__,"Ch: %d, TDC Ld:%d %x", ch, value, rdata);
    }else if(isTdcTrailing(evtdata[i])) {
      int ch = (evtdata[i] >> 13) & 0x3f;
      int value = evtdata[i] & 0x0fff;
      rdata = new TArtRawDataObject(3,ch,value);
      TArtCore::Debug(__FILE__,"Ch: %d, TDC Td:%d %x", ch, value, rdata);
    }else if(isScaler(evtdata[i])) {
      int ch = (evtdata[i] >> 14) & 0x7f;
      int value = evtdata[i] & 0x3fff;
      rdata = new TArtRawDataObject(4,ch,value);
      TArtCore::Debug(__FILE__,"Ch: %d, Scaler %x", ch, value, rdata);
    }
    else{
      rdata = NULL;
      TArtCore::Info(__FILE__,"Unknown data %x",rdata);
    }

    if(rdata != NULL)
      rawseg->PutData(rdata);


  }

  TArtCore::Debug(__FILE__,"Num of data %d %d", evtsize-1, rawseg->GetNumData());

  return 0;
}
