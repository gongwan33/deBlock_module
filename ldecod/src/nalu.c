/**********************************************************************
 * Software Copyright Licensing Disclaimer
 *
 * This software module was originally developed by contributors to the
 * course of the development of ISO/IEC 14496-10 for reference purposes
 * and its performance may not have been optimized.  This software
 * module is an implementation of one or more tools as specified by
 * ISO/IEC 14496-10.  ISO/IEC gives users free license to this software
 * module or modifications thereof. Those intending to use this software
 * module in products are advised that its use may infringe existing
 * patents.  ISO/IEC have no liability for use of this software module
 * or modifications thereof.  The original contributors retain full
 * rights to modify and use the code for their own purposes, and to
 * assign or donate the code to third-parties.
 *
 * This copyright notice must be included in all copies or derivative
 * works.  Copyright (c) ISO/IEC 2004.
 **********************************************************************/

/*!
 ************************************************************************
 * \file  nalu.c
 *
 * \brief
 *    Decoder NALU support functions
 *
 * \author
 *    Main contributors (see contributors.h for copyright, address and affiliation details)
 *    - Stephan Wenger   <stewe@cs.tu-berlin.de>
 ************************************************************************
 */

#include <assert.h>

#include "global.h"
#include "nalu.h"




/*! 
 *************************************************************************************
 * \brief
 *    Converts a NALU to an RBSP
 *
 * \param 
 *    nalu: nalu structure to be filled
 *
 * \return
 *    length of the RBSP in bytes
 *************************************************************************************
 */

int NALUtoRBSP (NALU_t *nalu)
{
  assert (nalu != NULL);	//++ ȷ��nalu��Ϊ��

  nalu->len = EBSPtoRBSP (nalu->buf, nalu->len, 1) ; 

  return nalu->len ;
}

