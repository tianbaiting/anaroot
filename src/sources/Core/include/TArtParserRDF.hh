/*
 * @file TArtParserRDF.h
 * @date  Created : 2008/10/17 18:25:58 JST<BR>
 *  Last Modified : 2008/10/30 21:50:07 JST
 *--------------------------------------------------------
 *    Comment : 
 *    
 *--------------------------------------------------------
 *    Copyright (C)2008 by Shinsuke OTA <ota@ribf.riken.jp>
 */
#ifndef TARTPARSERRDF_H
#define TARTPARSERRDF_H
#include "TArtParser.hh"

class TArtMapper;

class TArtParserRDF : public TArtParser {

public:

   TArtParserRDF();
   virtual ~TArtParserRDF();

   virtual void GetNextBlock(TArtDataSource *);
   virtual bool GetNextEvent(TArtRawEventObject *) ;
   virtual int CopyPrevEvent(char *);

 private:

   ClassDef(TArtParserRDF,1);
};
#endif // end of #ifdef TARTPARSERRDF_H
