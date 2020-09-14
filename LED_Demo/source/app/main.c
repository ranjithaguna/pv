/*****************************************************************************
* © 2018 Microchip Technology Inc. and its subsidiaries.
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
*****************************************************************************/

/** @file main.c
 *Everglades main 
 */
/** @defgroup Everglades main 
 */
/* Hardware includes. */

#include "../common/common_lib.h"
#include "../gpio/gpio_app.h"
#include "../interrupt/interrupt_api.h"
#include "../interrupt/pcr_api.h"
#include "../include/build.h"
#include "../debug/trace.h"

const BUILD_INFO build_info =
{
    (MCHP_COPYRIGHT),
    (FIRMWAREID),
    (BUILDNUMBER),
    (BUILDLABEL)
};

void timer_delay_ms(uint32_t num_ms);
void timer_enable(void);
void debug_init(void);

uint8_t tick, run_initiator = 0;


uint8_t interrupt_flag_status=0;  // sets when interrupt is triggered
/*-----------------------------------------------------------*/

int main( void )
{    
    __asm__ volatile ("cpsid i" : : : "memory");                /* Disable interrupts. */
    //CPU_DISABLE_INTERRUPTS();
                                                                                    
    /* Initialize System */
    SystemCoreClockUpdate();
    timer_enable();
    gpio_init_task();
    debug_init();
    
    __asm__ volatile ("cpsie i" : : : "memory");                /* Enable interrupts. */
    //CPU_ENABLE_INTERRUPTS();
    /* Led0 - pin 156 will toggle for 1 second */
    while (1)
    {
        gpio_toggle();
        timer_delay_ms(1000);
    }
}


/** timer_delay - 
 * @param delay in timer count units
 * @notes Input Capture Compare free run counter is operating 
 * at (3 MHz +/- 2%) [2.94, 3.06] MHz, [0.340, 0.327] us.
 * Assume +2% to insure delays meet the minimum.
 * 1 us = 1/0.327 = 3.06 counts
 * num_us = num_us * 3 = num_us * (2+1) = (num_us << 1) + num_us
 */

void timer_delay(uint32_t counts_to_delay)
{
    uint32_t diff, curr_cnt, start_cnt;
    
    if (counts_to_delay) {
        start_cnt = (_CAPTURE_COMPARE_TIMER_REGS->FREE_RUNNING_TIMER).w;
        do {
            curr_cnt = (_CAPTURE_COMPARE_TIMER_REGS->FREE_RUNNING_TIMER).w;
            if (curr_cnt >= start_cnt) {
                diff = curr_cnt - start_cnt;
            } else {
                diff = curr_cnt + (0xfffffffful - start_cnt);
            }
        } while (diff < counts_to_delay);
    }
}
/*-----------------------------------------------------------*/

/* Input Capture Compare free run counter is operating at (3 MHz +/- 2%)
 * [2.94, 3.06] MHz, [0.340, 0.327] us
 * Assume +2% to insure delays meet the minimum.
 * 1 ms = 3060 (0x0BF4) counts
 * count = ms * 3060 = ms * (3072 - 12) = ms * (0xC00 - 0x0C)
 * = ms * (0x800 + 0x400 - (0x08 + 0x04))
 * = (ms * 0x800) + (ms * 0x400) - (ms * 0x08) - (ms * 0x04)
 * = (ms << 11) + (ms << 10) - (ms << 3) - (ms << 2)
 */
void timer_delay_ms(uint32_t num_ms)
{
    uint32_t counts = (num_ms << 11) + (num_ms << 10) - (num_ms << 3) - (num_ms << 2);
    
    timer_delay(counts);
}

/*
 * We use CCTM0 free run counter at divide by 16 (48/16 = 3 MHz, T ~= 333 ns)
 * Range is +/- 2% [2.94, 3.06] MHz, [0.340, 0.327] us
 * Max time = 2^32 * 0.327 us ~ 1404 seconds
 * FPGA has 24MHz master clock running all devices at 1/2 speed. For FPGA we will
 * program CCT to 6 MHz to get same absolute times.
 */
void timer_enable(void)
{
    uint16_t ctrl16;
    
    pcr_sleep_enable(PCR_C_C_TIMER,0);
    
    /* ASIC 48MHz divide by 16 -> 3 MHz */
    ctrl16 = CCT_CTRL_TCLK_DIV_16 + CCT_CTRL_FREE_RUN_EN + CCT_CTRL_ACTIVATE;
        
    _CAPTURE_COMPARE_TIMER_REGS->CAPTURE_COMPARE_TIMER_CONTROL.w = ctrl16 | CCT_CTRL_FREE_RUN_RESET;
            
    for (uint16_t i = 0u; i < 32ul; i++) {
        if (0 == (_CAPTURE_COMPARE_TIMER_REGS->CAPTURE_COMPARE_TIMER_CONTROL.w & (CCT_CTRL_FREE_RUN_RESET))) {
            break;
        }
    }
    _CAPTURE_COMPARE_TIMER_REGS->CAPTURE_COMPARE_TIMER_CONTROL.w = ctrl16;
}

/* end main.c */
/**   @}
 */
