/*
 **********************************************************************************
* © 2013 Microchip Technology Inc. and its subsidiaries.
* You may use this software and any derivatives exclusively with
* Microchip products.
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".
* NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
* INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
* AND FITNESS FOR A PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP
* PRODUCTS, COMBINATION WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.
* TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL
* CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF
* FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
* MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE
* OF THESE TERMS.
 **********************************************************************************
 *  trace.H
 *      This is the debug message output definition header
 **********************************************************************************
 *  SMSC version control information (Perforce):
 *
 *  FILE:     $File: //depot_pcs/FWEng/projects/Everglades/maincodeline/LED_Demo/source/debug/trace.h $
 *  REVISION: $Revision: #1 $
 *  DATETIME: $DateTime: 2019/09/25 06:21:47 $
 *  AUTHOR:   $Author: i20905 $
 *
 *  Revision history (latest first):
 *      #xx
 ***********************************************************************************
 */

/** @defgroup DEBUG DEBUG
 *  @{
 */

/** @file trace.h
* \brief Debugger header file
* \author FW Team
* 
* This file contains all function declarations in DEBUG.c
******************************************************************************/
#ifndef TRACE_H
#define TRACE_H

/** Debug port initialization function. */
void debug_init(void);
/** Debug port transmits two bytes data out of port function. */
void trace_tx_word(WORD wData);
/** Debug port transmits four bytes data out of port function. */
void trace_tx_dword(DWORD wData);
/** Debug port transmits a package data w/o parameter out of port function. */
void trace_debugger_0(WORD wTpNum);
/** Debug port transmits a package data w/ one parameter out of port function. */
void trace_debugger_1(WORD wTpNum, WORD wTpData1);
/** Debug port transmits a package data w/ two parameters out of port function. */
void trace_debugger_2(WORD wTpNum, WORD wTpData1, WORD wTpData2);
/** Debug port transmits a package data w/ three parameters out of port function. */
void trace_debugger_3(WORD wTpNum, WORD wTpData1, WORD wTpData2, WORD wTpData3);
/** Debug port transmits a package data w/ four parameters out of port function. */
void trace_debugger_4(WORD wTpNum, WORD wTpData1, WORD wTpData2, WORD wTpData3, WORD wTpData4);
/** Debug port transmits a package data w/ five parameters out of port function. */
void trace_debugger_5(WORD wTpNum, WORD wTpData1, WORD wTpData2, WORD wTpData3, WORD wTpData4, WORD wTpData5);
/** Debug port transmits a package data w/ one parameters out of port function display as one DWORD. */
void trace_debugger_11(WORD wTpNum, DWORD wTpData1);
/** Debug port transmits a package data w/ two parameters out of port function display as two DWORD. */
void trace_debugger_12(WORD wTpNum, DWORD wTpData1, DWORD wTpData2);
/** Debug port transmits a package data w/ three parameters out of port function display as three DWORD. */
void trace_debugger_13(WORD wTpNum, DWORD wTpData1, DWORD wTpData2, DWORD wTpData3);
/** Debug port transmits a package data w/ four parameters out of port function display as four DWORD. */
void trace_debugger_14(WORD wTpNum, DWORD wTpData1, DWORD wTpData2, DWORD wTpData3, DWORD wTpData4);

/* for trace message output */
#define TRACE0(nbr, cat, lvl, str);                     {trace_debugger_0(nbr);}
#define TRACE1(nbr, cat, lvl, str, p1);                 {trace_debugger_1(nbr, p1);}
#define TRACE2(nbr, cat, lvl, str, p1, p2);             {trace_debugger_2(nbr, p1, p2);}
#define TRACE3(nbr, cat, lvl, str, p1, p2, p3);         {trace_debugger_3(nbr, p1, p2, p3);}
#define TRACE4(nbr, cat, lvl, str, p1, p2, p3, p4);     {trace_debugger_4(nbr, p1, p2, p3, p4);}
#define TRACE11(nbr, cat, lvl, str, p1);                {trace_debugger_11(nbr,p1);}
#define TRACE12(nbr, cat, lvl, str, p1, p2);            {trace_debugger_12(nbr,p1,p2);}
#define TRACE13(nbr, cat, lvl, str, p1, p2, p3);        {trace_debugger_13(nbr,p1,p2,p3);}
#define TRACE14(nbr, cat, lvl, str, p1, p2, p3, p4);    {trace_debugger_14(nbr,p1,p2,p3,p4);}
/* for without trace message output */ 
#define trace0(nbr, cat, lvl, str);
#define trace1(nbr, cat, lvl, str, p1);
#define trace2(nbr, cat, lvl, str, p1, p2);
#define trace3(nbr, cat, lvl, str, p1, p2, p3);
#define trace4(nbr, cat, lvl, str, p1, p2, p3, p4);
#define trace11(nbr, cat, lvl, str, p1);
#define trace12(nbr, cat, lvl, str, p1, p2);
#define trace13(nbr, cat, lvl, str, p1, p2, p3);
#define trace14(nbr, cat, lvl, str, p1, p2, p3, p4);


#endif /* #ifndef TRACE_H */

/**   @}
 */

