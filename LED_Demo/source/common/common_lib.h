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
 *  common.h
 *      This is the header file including common headers from various modules
 **********************************************************************************
 *  $Revision: #1 $  $DateTime: 2019/09/25 06:21:47 $  $    $
 *  Description: added ict module
 **********************************************************************************
 *  #xx
 **********************************************************************************
 * $File: //depot_pcs/FWEng/projects/Everglades/maincodeline/LED_Demo/source/common/common_lib.h $
 */

/*********************************************************************************/
/** @defgroup common common
 *  @{
 */

/** @file common.h
* \brief header file including common headers from various modules
* \author App Firmware Team
* 
**********************************************************************************/
#ifndef _COMMON_LIB_H_
#define _COMMON_LIB_H_

// Include common headers from various modules
// !!! The include order is important !!!
//
#include "../pic32cx/pic32cx0525sg12144.h"
#include "platform.h"
#include "../system/system_Everglades_internal.h"

/* Cortex-M4 processor and core peripherals */
//#include "../CMSIS/core_cm4.h"
#include <core_cm4.h>

typedef enum {
    EventTypeTask = 0,
    EventTypeTimer
} EVENT_TYPE;

#define MCHP_COPYRIGHT "Copyright(c) 2018 - Microchip-SMSC "
typedef struct build_info_s {
    char copyr[36];
    uint32_t fwid;
    uint32_t fw_build;
    char fw_label[31];
} BUILD_INFO; // total length = 79

#endif /*_COMMON_LIB_H_*/
/**   @}
 */


