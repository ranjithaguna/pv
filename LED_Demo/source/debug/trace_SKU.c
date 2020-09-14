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
 *  DEBUG.c
 *      This is the DEBUG.c file, for debugging output message   
 ********************************************************************************** 
 *  SMSC version control information (Perforce):
 *
 *  FILE:     $File: //depot_pcs/FWEng/projects/Everglades/maincodeline/LED_Demo/source/debug/trace_SKU.c $
 *  REVISION: $Revision: #1 $
 *  DATETIME: $DateTime: 2019/09/25 06:21:47 $
 *  AUTHOR:   $Author: i20905 $
 *
 *  Revision history (latest first):
 *      #1 Initial Draft
 *		#2 Made disabling and enabling of interrupts proper
 ***********************************************************************************
 */

/** @defgroup DEBUG DEBUG
 *  @{
 */

/** @file DEBUG.c
* \brief Debugger source file
* \author KBCEC Team
* 
* This file implements the SMSC MCU Debug Port module i/f
******************************************************************************/
/* Imported Header File */
#include    "common.h"

/* local include */
#include    "trace.h"

/*
 **********************************************************************************
 *  debug_init: initialize mcu debug port
 *
 *  Entry Arguments:
 *      void, No argument is passed
 *
 *  Return Parameter:
 *      void, No Return parameter
 *
 *  Export API: Yes
 *
 *  Processing Detail:
 *      1. release pgio to debug port, and enable port
 *
 **********************************************************************************
 */
 //TODO modify onece GPIO interface is done
typedef volatile unsigned char      VUINT8;
typedef volatile unsigned short int VUINT16;
typedef volatile unsigned long int  VUINT32; 
#define ADDR_GPIO_GPIO170_PIN_CONTROL                            0x400811E0
#define MMCR_GPIO_GPIO170_PIN_CONTROL                            (*(VUINT32 *)(ADDR_GPIO_GPIO170_PIN_CONTROL))

#define ADDR_GPIO_GPIO171_PIN_CONTROL                            0x400811E4
#define MMCR_GPIO_GPIO171_PIN_CONTROL                            (*(VUINT32 *)(ADDR_GPIO_GPIO171_PIN_CONTROL))

void debug_init(void)
{
	BYTE cnt;

    /* Initialize MCU Debug Port */
    MMCR_GPIO_GPIO170_PIN_CONTROL = 0x1001;
    MMCR_GPIO_GPIO171_PIN_CONTROL = 0x1001;

    /* enable debug port */
    TFDP_INST->DEBUG_CONTROL = 0x01;
 
    for (cnt=0; cnt<255; cnt++);
    
    trace0(0, INIT, 0, "*********************************");
    trace0(0, INIT, 0, " Pegasus Debugger initialization ");
    trace0(0, INIT, 0, "*********************************");
} /* End of debug_init() */

/*
 **********************************************************************************
 *  trace_bit_bang_raw_8: output 1 byte to fifo board via bit bang
 *
 *  Entry Arguments:
 *      unsigned char value8: input byte
 *
 *  Return Parameter:
 *      void, No Return parameter
 *
 *  Export API: N0
 *
 *  Processing Detail:
 *      1. spit out one byte via mcu port or bit bang
 *
 **********************************************************************************
 */
void trace_bit_bang_raw_8(unsigned char value8)
{

    TFDP_INST->DEBUG_DATA = value8;
} /* End of trace_bit_bang_raw_8() */

/*
 **********************************************************************************
 *  trace_tx_word: output one word, 2 bytes
 *
 *  Entry Arguments:
 *      WORD:
 *
 *  Return Parameter:
 *      void, No Return parameter
 *
 *  Export API: Yes
 *
 *  Processing Detail:
 *      1. spit out one word via mcu port
 *
 **********************************************************************************
 */
void trace_tx_word(WORD wData)
{

	trace_bit_bang_raw_8((BYTE)wData);
	trace_bit_bang_raw_8((BYTE)(wData >> 8));
} /* End of trace_tx_word() */
/*
 **********************************************************************************
 *  trace_tx_dword: output one word, 4 bytes
 *
 *  Entry Arguments:
 *      DWORD:
 *
 *  Return Parameter:
 *      void, No Return parameter
 *
 *  Export API: Yes
 *
 *  Processing Detail:
 *      1. spit out one dword via mcu port
 *
 **********************************************************************************
 */
void trace_tx_dword(DWORD wData)
{
	trace_bit_bang_raw_8((BYTE)wData);
	trace_bit_bang_raw_8((BYTE)(wData >> 8));
    trace_bit_bang_raw_8((BYTE)(wData >> 16));
    trace_bit_bang_raw_8((BYTE)(wData >> 24));
    
} /* End of trace_tx_dword() */

/** Instruct the MetaWare C compiler to save on entry and
 *  restore on exit the ARC STATUS32 register. STATUS32
 *  contains the ARC Level 1 & 2 interrupt mask bits.
 */
/******************************************************************************/
/** Debug port transmits a package data w/o parameter out of port function.
 * This function transmits debug stamp 0xFD firstly, then message number secondly.
 * @param WORD wTpNum	the word value for message number
 * @return None
 ******************************************************************************/
void trace_debugger_0(WORD wTpNum)
{
    UINT32 was_masked;

    /* Disable interrupt and return interrupt enable flag */
    was_masked = DISABLE_INTERRUPTS();

	trace_bit_bang_raw_8(0xFD);
	trace_tx_word(wTpNum);

    if(!was_masked) ENABLE_INTERRUPTS();
}/* End of trace_debugger_0() */

/******************************************************************************/
/** Debug port transmits a package data w/ one parameter out of port function.
 * This function transmits debug stamp 0xFD firstly, then message number secondly,
 * 1st parameter value finally.
 * @param WORD wTpNum	the word value for message number
 * @param WORD wTpData1	the 1st paramter value
 * @return None
 ******************************************************************************/
void trace_debugger_1(WORD wTpNum, WORD wTpData1)
{
    UINT32 was_masked;

    /* Disable interrupt and return interrupt enable flag */
    was_masked = DISABLE_INTERRUPTS();

    trace_bit_bang_raw_8(0xFD);
	trace_tx_word(wTpNum);
	trace_tx_word(wTpData1);

    if(!was_masked) ENABLE_INTERRUPTS();
}/* End of trace_debugger_1() */

/******************************************************************************/
/** Debug port transmits a package data w/ two parameters out of port function.
 * This function transmits debug stamp 0xFD firstly, then message number secondly,
 * 1st & 2nd parameter values finally.
 * @param WORD wTpNum	the word value for message number
 * @param WORD wTpData1	the 1st paramter value
 * @param WORD wTpData2	the 2nd paramter value
 * @return None
 ******************************************************************************/
void trace_debugger_2(WORD wTpNum, WORD wTpData1, WORD wTpData2)
{ 
    UINT32 was_masked;

    /* Disable interrupt and return interrupt enable flag */
    was_masked = DISABLE_INTERRUPTS();

    trace_bit_bang_raw_8(0xFD);
	trace_tx_word(wTpNum);
	trace_tx_word(wTpData1);
	trace_tx_word(wTpData2);

    if(!was_masked) ENABLE_INTERRUPTS();
}/* End of trace_debugger_2() */


/******************************************************************************/
/** Debug port transmits a package data w/ three parameters out of port function.
 * This function transmits debug stamp 0xFD firstly, then message number secondly,
 * 1st, 2nd & 3rd parameter values finally.
 * @param WORD wTpNum	the word value for message number
 * @param WORD wTpData1	the 1st paramter value
 * @param WORD wTpData2	the 2nd paramter value
 * @param WORD wTpData3	the 3rd paramter value
 * @return None
 ******************************************************************************/
void trace_debugger_3(WORD wTpNum, WORD wTpData1, WORD wTpData2, WORD wTpData3)
{    
    UINT32 was_masked;

    /* Disable interrupt and return interrupt enable flag */
    was_masked = DISABLE_INTERRUPTS();
	
    trace_bit_bang_raw_8(0xFD);
	trace_tx_word(wTpNum);
	trace_tx_word(wTpData1);
	trace_tx_word(wTpData2);
	trace_tx_word(wTpData3);

    if(!was_masked) ENABLE_INTERRUPTS();
}/* End of trace_debugger_3() */

/******************************************************************************/
/** Debug port transmits a package data w/ four parameters out of port function.
 * This function transmits debug stamp 0xFD firstly, then message number secondly,
 * 1st, 2nd, 3rd & 4th parameter values finally.
 * @param WORD wTpNum	the word value for message number
 * @param WORD wTpData1	the 1st paramter value
 * @param WORD wTpData2	the 2nd paramter value
 * @param WORD wTpData3	the 3rd paramter value
 * @param WORD wTpData4	the 4th paramter value
 * @return None
 ******************************************************************************/
void trace_debugger_4(WORD wTpNum, WORD wTpData1, WORD wTpData2, WORD wTpData3, WORD wTpData4) 
{
    UINT32 was_masked;

    /* Disable interrupt and return interrupt enable flag */
    was_masked = DISABLE_INTERRUPTS();

    trace_bit_bang_raw_8(0xFD);
	trace_tx_word(wTpNum);
	trace_tx_word(wTpData1);
	trace_tx_word(wTpData2);
	trace_tx_word(wTpData3);
	trace_tx_word(wTpData4);

    if(!was_masked) ENABLE_INTERRUPTS();
}/* End of trace_debugger_4() */

/** 
 *  trace_debugger_11 - Transmit one 32-bit data item over TFDP 
 * 
 *  @param nbr trace number
 *  @param b unused 
 *  @param uint32_t p1 32-bit data to be transmitted
 * 
 */
void trace_debugger_11(WORD wTpNum, DWORD p1)
{    
    UINT32 was_masked;

    /* Disable interrupt and return interrupt enable flag */
    was_masked = DISABLE_INTERRUPTS();
    
    trace_bit_bang_raw_8(0xFD);
	trace_tx_word(wTpNum);
    trace_tx_dword(p1);

    if(!was_masked) ENABLE_INTERRUPTS();
}/* End of trace_debugger_11() */


/** 
 *  trace_debugger_12 - Transmit two 32-bit data items over TFDP 
 * 
 *  @param nbr trace number
 *  @param b unused 
 *  @param uint32_t p1 32-bit data1 to be transmitted
 *  @param uint32_t p2 32-bit data2 to be transmitted
 * 
 */
void trace_debugger_12(WORD wTpNum, DWORD p1, DWORD p2)
{
    UINT32 was_masked;

    /* Disable interrupt and return interrupt enable flag */
    was_masked = DISABLE_INTERRUPTS();

    trace_bit_bang_raw_8(0xFD);
	trace_tx_word(wTpNum);
    trace_tx_dword(p1);
    trace_tx_dword(p2);

    if(!was_masked) ENABLE_INTERRUPTS();
}/* End of trace_debugger_12() */

/** 
 *  trace_debugger_13 - Transmit three 32-bit data items over TFDP 
 * 
 *  @param nbr trace number
 *  @param b unused 
 *  @param uint32_t p1 32-bit data1 to be transmitted
 *  @param uint32_t p2 32-bit data2 to be transmitted
 *  @param uint32_t p3 32-bit data3 to be transmitted
 * 
 */
void trace_debugger_13(WORD wTpNum, DWORD p1, DWORD p2, DWORD p3 )
{
    UINT32 was_masked;

    /* Disable interrupt and return interrupt enable flag */
    was_masked = DISABLE_INTERRUPTS();

    trace_bit_bang_raw_8(0xFD);
	trace_tx_word(wTpNum);
    trace_tx_dword(p1);
    trace_tx_dword(p2);
    trace_tx_dword(p3);
    
    if(!was_masked) ENABLE_INTERRUPTS();
}/* End of trace_debugger_13() */

/** 
 *  trace_debugger_14 - Transmit four 32-bit data items over TFDP 
 * 
 *  @param nbr trace number
 *  @param b unused 
 *  @param uint32_t p1 32-bit data1 to be transmitted
 *  @param uint32_t p2 32-bit data2 to be transmitted
 *  @param uint32_t p3 32-bit data3 to be transmitted
 *  @param uint32_t p4 32-bit data4 to be transmitted
 */
void trace_debugger_14(WORD wTpNum, DWORD p1, DWORD p2, DWORD p3, DWORD p4 )
{
    UINT32 was_masked;

    /* Disable interrupt and return interrupt enable flag */
    was_masked = DISABLE_INTERRUPTS();

    trace_bit_bang_raw_8(0xFD);
	trace_tx_word(wTpNum);
    trace_tx_dword(p1);
    trace_tx_dword(p2);
    trace_tx_dword(p3);
    trace_tx_dword(p4);
    
    if(!was_masked) ENABLE_INTERRUPTS();
}/* End of trace_debugger_14() */

/**   @}
 */



