/*
 * @file TArtDecoderRICHADCM.cc
 * @date  Created : ?
 *  Last Modified : 2025/05/15 (Y. HJKT)
 *--------------------------------------------------------
 *    Comment : 
 *    
 *--------------------------------------------------------
 *    Copyright (C) 2025 Baba ?
 */
#include "TArtDecoderRICHADCM.hh"
#include "TArtDecoderFactory.hh"
#include "TArtCore.hh"
#include <stdio.h>
TArtDecoderRICHADCM::TArtDecoderRICHADCM()
  : TArtDecoder(kID) {
  //TArtCore::Info(__FILE__,"  RICHADCM ***********\n");
}

TArtDecoderRICHADCM::~TArtDecoderRICHADCM()
{
}

int TArtDecoderRICHADCM::Endian(unsigned int x)
{
  //TArtCore::Info(__FILE__," endian 0x%08x\n", x);
  return ((x & 0x000000ff) << 24)
    |    ((x & 0x0000ff00) << 8)
    |    ((x & 0x00ff0000) >> 8)
    |    ((x & 0xff000000) >> 24);
}

TArtDecoder* TArtDecoderRICHADCM::Instance()
{
   static TArtDecoderRICHADCM instance;
   return &instance;
}

int TArtDecoderRICHADCM::Decode(unsigned char* &buf, const unsigned int& size,
			    TArtRawSegmentObject* rawseg)
{
  
   unsigned int *evtdata = (unsigned int*) buf;
   unsigned int evtsize = size/sizeof(unsigned int);
   int evtid, subevtid, subevtsize, trignr, apvsize, apvsize2;
   unsigned int ssevtid;
   int i, z, igeo;
   int adcVal, channel, apv, adcm, sector;

   //TArtCore::Info(__FILE__,"  **size=%d ****  \n", size);

   if(size < 64){
     TArtCore::Info(__FILE__,"  ** NO APV data size=%d ****  \n", size);
     return 0;
   }

   /*
   enum EvtIdx {
	EvtIdx_size,
	EvtIdx_decoding,
	EvtIdx_id,
	EvtIdx_seqNr,
	EvtIdx_date,
	EvtIdx_time,
	EvtIdx_runNr,
	EvtIdx_expId,
	EvtIdx_data
	};

	enum SubEvtIdx
	{
	SubEvtIdx_size,
	SubEvtIdx_decoding,
	SubEvtIdx_id,
	SubEvtIdx_trigNr,
	SubEvtIdx_data
	};

   d_dataWord = word;
   d_adcVal   = (word >>  0) & 0x3fff;
   d_channel  = (word >> 14) & 0x007f;
   d_apv      = (word >> 21) & 0x000f;
   d_adcm     = (word >> 25) & 0x0007;
   d_sector   = (word >> 28) & 0x0007;

   */

   /*
   if(size == 32){
     for(int x=0;x<size;x++){
       TArtCore::Info(__FILE__,"%02d 0x%08x", x, evtdata[x]);
     }
   }
   */

   // evtheader size = 8 x 32bit
   //re = evtdata[0];
   evtid = evtdata[2];

   // evtdata index = 8
   subevtid = Endian(evtdata[10]);
   subevtsize = Endian(evtdata[8]); // subevtsize in char
   trignr = Endian(evtdata[11]); // subevtsize in char


   // if start_acq / stop_acq header is included, data sequence might be shifted
   if(evtid == 0x00010002){
     TArtCore::Info(__FILE__,"EvtID = START_ACQ 0x%08x\n", evtid);
     return 0;
   }else if(evtid ==  0x000010003){
     TArtCore::Info(__FILE__,"EvtID = STOP_ACQ 0x%08x\n", evtid);
     return 0;
   }

   // actual apv data size (int unit)
   apvsize = (Endian(evtdata[12]) & 0xffff0000) >> 16;

   /*
   if(this->getevtn() >= 58626 && this->getevtn() < 58650){
     TArtCore::Info(__FILE__,"  subevtsz %d / apvsize %d\n",
		    subevtsize/4, apvsize);
   }
   */
   //TArtCore::Info(__FILE__,"  subevtsz %d / apvsize %d\n",
   //		  subevtsize/4, apvsize);
   //if(apvsize!=29){
   //TArtCore::Info(__FILE__,"  **evtid=%08x   apvsize=%3d ****  \n",
   //evtid, apvsize);
   //}

   if(apvsize > size-14){
     TArtCore::Info(__FILE__,"  ** invalid APV size %d (size=%d) ****  \n", apvsize, size);
     return 0;
   }


   int off=14;
   int dbflag = 0;
   int datanum = 0;
   int dataidx = 0;

   for (i=0; i<apvsize; i++) {
     z = Endian(evtdata[i+13]);

     if(datanum == 0){
       dataidx = 0;
       datanum = (z >> 16) & 0x0000ffff;
       //TArtCore::Info(__FILE__," **** 0x%08x datanum=%d / dataidx=%d", z, datanum, dataidx);
       continue;
     }
       

     adcVal   = (z >>  0) & 0x3fff;
     channel  = (z >> 14) & 0x007f;
     apv      = (z >> 21) & 0x000f;
     adcm     = (z >> 25) & 0x0007;
     sector   = (z >> 28) & 0x0007;
     dbflag   = (z >> 31) & 0x0001;


     //TArtCore::Info(__FILE__, "ch=%d / apv=%d / sec=%d / adc=%d\n",
     //channel, apv, sector, adcVal);
     //dbflag = 0;
     if(dbflag == 1){
       /* --- debug / status information --- */
       /* noop */
     }else{
       // geo, channel, value, edge
       // value   = adcVal
       // channel = channel
       // geo     = sector << 24 | adcm << 16 | apv
       igeo = (sector << 24) | (adcm << 16) | apv;


       //TArtCore::Info(__FILE__, "igeo=%x / ch=%d / adc=%d\n",
       //igeo, channel, adcVal);

       TArtRawDataObject *rdata = new TArtRawDataObject(igeo,channel,adcVal);
       rawseg->PutData(rdata);
     }

     dataidx ++ ;
     //TArtCore::Info(__FILE__," i=%d datanu=%md / dataidx=%d", i, datanum, dataidx);
     if(datanum == dataidx){
       datanum = 0;
       continue;
     }

     // do not use edge
     //rdata->SetEdge(edge == 1 ? 1 : 0);
   }

   //TArtCore::Info(__FILE__," i=%d / of=%d / next=%d", i, i+13, apvsize+14);
   
   // 100MHz clock / timestamp information
   igeo = 0x10000000;
   off = apvsize + 14;
   z = Endian(evtdata[off]);
   if((z & 0xffff0000) == 0x0aaa0000){
     adcVal = z & 0x0000ffff;
     channel = 0;
     TArtRawDataObject *rdata0 = new TArtRawDataObject(igeo,channel,adcVal);
     rawseg->PutData(rdata0);
     //TArtCore::Info(__FILE__,"  100MHz0 0x%08x 0x%08x\n", z, adcVal);

     adcVal = Endian(evtdata[off+1]);
     channel = 1;
     TArtRawDataObject *rdata1 = new TArtRawDataObject(igeo,channel,adcVal);
     rawseg->PutData(rdata1);
     //TArtCore::Info(__FILE__,"  100MHz1 0x%08x 0x%08x\n", z, adcVal);
   }

   z = Endian(evtdata[off+2]);
   if((z & 0xffff0000) == 0x1bbb0000){
     adcVal = z & 0x0000ffff;
     channel = 2;
     TArtRawDataObject *rdata2 = new TArtRawDataObject(igeo,channel,adcVal);
     rawseg->PutData(rdata2);
     //TArtCore::Info(__FILE__,"  ts0 0x%08x 0x%08x\n", z, adcVal);

     adcVal = Endian(evtdata[off+3]);
     channel = 3;
     TArtRawDataObject *rdata3 = new TArtRawDataObject(igeo,channel,adcVal);
     rawseg->PutData(rdata3);

     //TArtCore::Info(__FILE__,"  ts1 0x%08x 0x%08x\n", z, adcVal);
   }

   
   /**** Readout second FPGA borard for apv ****/
   apvsize2 = (Endian(evtdata[19+apvsize]) & 0xffff0000) >> 16;
   ssevtid =  (Endian(evtdata[19+apvsize]) & 0x0000ffff);

   //   printf("ssevtid2 : %x\n",ssevtid);
   
   dbflag = 0;
   datanum = 0;
   dataidx = 0;

   for (i=0; i<apvsize2; i++) {
     z = Endian(evtdata[i+20+apvsize]);
     
     if(datanum == 0){
       dataidx = 0;
       datanum = (z >> 16) & 0x0000ffff;
       //TArtCore::Info(__FILE__," **** 0x%08x datanum=%d / dataidx=%d", z, datanum, dataidx);
       continue;
     }
     
     
     adcVal   = (z >>  0) & 0x3fff;
     channel  = (z >> 14) & 0x007f;
     apv      = (z >> 21) & 0x000f;
     adcm     = (z >> 25) & 0x0007;
     sector   = (z >> 28) & 0x0007;
     dbflag   = (z >> 31) & 0x0001;
     

     //TArtCore::Info(__FILE__, "ch=%d / apv=%d / sec=%d / adc=%d\n",
     //channel, apv, sector, adcVal);
     //dbflag = 0;
     if(dbflag == 1){
         /* --- debug / status information --- */
         /* noop */
     }else{
       // geo, channel, value, edge
       // value   = adcVal
       // channel = channel
       // geo     = sector << 24 | adcm << 16 | apv
       igeo = (sector << 24) | (adcm << 16) | apv;
       
       
       //TArtCore::Info(__FILE__, "igeo=%x / ch=%d / adc=%d\n",
       //igeo, channel, adcVal);
       
       TArtRawDataObject *rdata = new TArtRawDataObject(igeo,channel,adcVal);
       rawseg->PutData(rdata);
     }
     
     dataidx ++ ;
     //TArtCore::Info(__FILE__," i=%d datanu=%md / dataidx=%d", i, datanum, dataidx);
     if(datanum == dataidx){
       datanum = 0;
       continue;
     }
     
     // do not use edge
     //rdata->SetEdge(edge == 1 ? 1 : 0);
   }

   //for(i=0;i<evtsize-off;i++){
   //TArtCore::Info(__FILE__," %2d 0x%08x\n", i, evtdata[i+off]);
   //}

   //this->incevtn();

   return 0;
}
