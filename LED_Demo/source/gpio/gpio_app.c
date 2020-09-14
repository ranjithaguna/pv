/*****************************************************************************
* � 2015 Microchip Technology Inc. and its subsidiaries.
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
******************************************************************************

Version Control Information (Perforce)
******************************************************************************
$Revision: #1 $ 
$DateTime: 2019/09/25 06:21:47 $ 
$Author: i20905 $
Last Change:    None
******************************************************************************/
/** @file gpio_app.c
* \brief GPIO Application file
* \author pramans
* 
* This file implements the GPIO Application  
******************************************************************************/

/** @defgroup GPIO
 *  @{
 */


#include "../common/common_lib.h"
//#include "..\timer\timer_app.h"
#include "gpio_app.h"
#include "gpio_api.h"

static uint8_t count = 0;

/**
 * gpio_init_task - initializes the specified gpio pins. This task will run 
 * only once.
 * @param None
 * @return None.
 */
void gpio_init_task( void )
{
    //Pin 156 as Output
    gpio_init( PIN_0156, GPIO_MUX_GPIO, GPIO_NON_INVERTED, GPIO_OUTPUT, \
               GPIO_PUSH_PULL, GPIO_INTDET_LVL_LO, GPIO_PWR_VTR, GPIO_PUD_NONE );
}

/**
 * gpio_toggle - toggles the specified gpio pin.
 * @param None
 * @return None.
 */
void gpio_toggle( void )
{
    if (count)
    {
        gpio_output_set( PIN_0156, GPIO_ALT_OUT_DIS, 0u ); //fix everything
    }
    else
    {
        gpio_output_set( PIN_0156, GPIO_ALT_OUT_DIS, 1u );
    }
    count = ~count;
}

/* end gpio_app.c */
/**   @}
 */
