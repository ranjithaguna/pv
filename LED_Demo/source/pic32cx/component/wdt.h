/**
 * \brief Component description for PIC32CX/0525SG12 WDT
 *
 * Copyright (c) 2018 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/* file generated from device description version 2018-04-24T21:15:30Z */
#ifndef _PIC32CX_0525SG12_WDT_COMPONENT_H_
#define _PIC32CX_0525SG12_WDT_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_WDT The function of the Watchdog Timer is to provide a mechanism to detect\n        if the internal embedded controller has failed. When enabled, the Watchdog Timer (WDT) circuit\n        will generate a WDT Event if the user program fails to reload the WDT within a specified length\n        of time known as the WDT Interval.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR WDT */
/* ========================================================================== */

/* -------- WDT_LOAD : (WDT Offset: 0x00) (R/W 16) Writing this field reloads the Watch Dog Timer counter. -------- */

typedef union
{
  uint16_t w;
} __WDT_LOAD_bits_t;
#define WDT_LOAD_RESETVALUE                 (0x0FU)                                       /**<  (WDT_LOAD) Writing this field reloads the Watch Dog Timer counter.  Reset Value */

#define WDT_LOAD_Msk                          (0x00000000UL)                                 /**< (WDT_LOAD) Register Mask  */

/* -------- WDT_CONTROL : (WDT Offset: 0x04) (R/W 16) WDT Control Register -------- */

typedef union
{
  struct
  {
    uint16_t WDT_ENABLE:1;              /**< bit:      0  WDT Block enabled                             */
    uint16_t WDT_STATUS:1;              /**< bit:      1  WDT_STATUS is set by hardware if the last reset of the device was caused by an underflow of the WDT. This bit must\n      be cleared by the EC firmware writing a '1' to this bit. Writing a '0' to this bit has no effect. */
    uint16_t HIBERNATION_TIMER0_STALL:1;  /**< bit:      2  This bit enables the WDT Stall function if the Hibernation Timer 0 is active.\n      1=The WDT is stalled while the Hibernation Timer 0 is active\n      0=The WDT is not affected by Hibernation Timer 0. */
    uint16_t WEEK_TIMER_STALL:1;        /**< bit:      3  This bit enables the WDT Stall function if the Week Timer is active.\n      1=The WDT is stalled while the Week Timer is active\n      0=The WDT is not affected by the Week Timer. */
    uint16_t JTAG_STALL:1;              /**< bit:      4  This bit enables the WDT Stall function if JTAG or SWD debug functions are active\n      1=The WDT is stalled while either JTAG or SWD is active\n      0=The WDT is not affected by the JTAG debug interface. */
    uint16_t :4;                        /**< bit:   5..8  Reserved                                      */
    uint16_t WDT_RESET:1;               /**< bit:      9  If the WDT_RESET bit is set and the watch dog timer expires, the Watch dog module will         generate interrupt and clear the WDT_RESET to 0b. */
    uint16_t :6;                        /**< bit: 10..15  Reserved                                      */
  };
  uint16_t w;
} __WDT_CONTROL_bits_t;
#define WDT_CONTROL_RESETVALUE              (0x00U)                                       /**<  (WDT_CONTROL) WDT Control Register  Reset Value */

#define WDT_CONTROL_WDT_ENABLE_Pos            (0)                                            /**< (WDT_CONTROL) WDT Block enabled Position */
#define WDT_CONTROL_WDT_ENABLE_Msk            (0x1U << WDT_CONTROL_WDT_ENABLE_Pos)           /**< (WDT_CONTROL) WDT Block enabled Mask */
#define WDT_CONTROL_WDT_STATUS_Pos            (1)                                            /**< (WDT_CONTROL) WDT_STATUS is set by hardware if the last reset of the device was caused by an underflow of the WDT. This bit must\n      be cleared by the EC firmware writing a '1' to this bit. Writing a '0' to this bit has no effect. Position */
#define WDT_CONTROL_WDT_STATUS_Msk            (0x1U << WDT_CONTROL_WDT_STATUS_Pos)           /**< (WDT_CONTROL) WDT_STATUS is set by hardware if the last reset of the device was caused by an underflow of the WDT. This bit must\n      be cleared by the EC firmware writing a '1' to this bit. Writing a '0' to this bit has no effect. Mask */
#define WDT_CONTROL_HIBERNATION_TIMER0_STALL_Pos (2)                                            /**< (WDT_CONTROL) This bit enables the WDT Stall function if the Hibernation Timer 0 is active.\n      1=The WDT is stalled while the Hibernation Timer 0 is active\n      0=The WDT is not affected by Hibernation Timer 0. Position */
#define WDT_CONTROL_HIBERNATION_TIMER0_STALL_Msk (0x1U << WDT_CONTROL_HIBERNATION_TIMER0_STALL_Pos)  /**< (WDT_CONTROL) This bit enables the WDT Stall function if the Hibernation Timer 0 is active.\n      1=The WDT is stalled while the Hibernation Timer 0 is active\n      0=The WDT is not affected by Hibernation Timer 0. Mask */
#define WDT_CONTROL_WEEK_TIMER_STALL_Pos      (3)                                            /**< (WDT_CONTROL) This bit enables the WDT Stall function if the Week Timer is active.\n      1=The WDT is stalled while the Week Timer is active\n      0=The WDT is not affected by the Week Timer. Position */
#define WDT_CONTROL_WEEK_TIMER_STALL_Msk      (0x1U << WDT_CONTROL_WEEK_TIMER_STALL_Pos)     /**< (WDT_CONTROL) This bit enables the WDT Stall function if the Week Timer is active.\n      1=The WDT is stalled while the Week Timer is active\n      0=The WDT is not affected by the Week Timer. Mask */
#define WDT_CONTROL_JTAG_STALL_Pos            (4)                                            /**< (WDT_CONTROL) This bit enables the WDT Stall function if JTAG or SWD debug functions are active\n      1=The WDT is stalled while either JTAG or SWD is active\n      0=The WDT is not affected by the JTAG debug interface. Position */
#define WDT_CONTROL_JTAG_STALL_Msk            (0x1U << WDT_CONTROL_JTAG_STALL_Pos)           /**< (WDT_CONTROL) This bit enables the WDT Stall function if JTAG or SWD debug functions are active\n      1=The WDT is stalled while either JTAG or SWD is active\n      0=The WDT is not affected by the JTAG debug interface. Mask */
#define WDT_CONTROL_WDT_RESET_Pos             (9)                                            /**< (WDT_CONTROL) If the WDT_RESET bit is set and the watch dog timer expires, the Watch dog module will         generate interrupt and clear the WDT_RESET to 0b. Position */
#define WDT_CONTROL_WDT_RESET_Msk             (0x1U << WDT_CONTROL_WDT_RESET_Pos)            /**< (WDT_CONTROL) If the WDT_RESET bit is set and the watch dog timer expires, the Watch dog module will         generate interrupt and clear the WDT_RESET to 0b. Mask */
#define WDT_CONTROL_Msk                       (0x0000021FUL)                                 /**< (WDT_CONTROL) Register Mask  */

/* -------- WDT_KICK : (WDT Offset: 0x08) (/W 8) The WDT Kick Register is a strobe. Reads of this register return 0. Writes to this register cause the WDT to reload\n     the WDT Load Register value and start decrementing when the WDT_ENABLE bit in the WDT Control Register is set to '1'. When the WDT_ENABLE\n     bit in the WDT Control Register is cleared to '0', writes to the WDT Kick Register have no effect. -------- */

typedef union
{
  uint8_t  w;
} __WDT_KICK_bits_t;
#define WDT_KICK_RESETVALUE                 (0x00U)                                       /**<  (WDT_KICK) The WDT Kick Register is a strobe. Reads of this register return 0. Writes to this register cause the WDT to reload\n     the WDT Load Register value and start decrementing when the WDT_ENABLE bit in the WDT Control Register is set to '1'. When the WDT_ENABLE\n     bit in the WDT Control Register is cleared to '0', writes to the WDT Kick Register have no effect.  Reset Value */

#define WDT_KICK_Msk                          (0x00000000UL)                                 /**< (WDT_KICK) Register Mask  */

/* -------- WDT_COUNT : (WDT Offset: 0x0c) (R/ 16) This read-only register provides the current WDT count. -------- */

typedef union
{
  uint16_t w;
} __WDT_COUNT_bits_t;
#define WDT_COUNT_RESETVALUE                (0xFFFFU)                                     /**<  (WDT_COUNT) This read-only register provides the current WDT count.  Reset Value */

#define WDT_COUNT_Msk                         (0x00000000UL)                                 /**< (WDT_COUNT) Register Mask  */

/* -------- WDT_Status : (WDT Offset: 0x10) (R/ 8) This read-only register provides the current WDT count. -------- */

typedef union
{
  struct
  {
    uint8_t  WDT_EVENT_IRQ:1;           /**< bit:      0  WDT_EVENT_IRQ : This bit indicates the status of interrupt from Watch dog module. */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __WDT_Status_bits_t;
#define WDT_Status_RESETVALUE               (0x00U)                                       /**<  (WDT_Status) This read-only register provides the current WDT count.  Reset Value */

#define WDT_Status_WDT_EVENT_IRQ_Pos          (0)                                            /**< (WDT_Status) WDT_EVENT_IRQ : This bit indicates the status of interrupt from Watch dog module. Position */
#define WDT_Status_WDT_EVENT_IRQ_Msk          (0x1U << WDT_Status_WDT_EVENT_IRQ_Pos)         /**< (WDT_Status) WDT_EVENT_IRQ : This bit indicates the status of interrupt from Watch dog module. Mask */
#define WDT_Status_Msk                        (0x00000001UL)                                 /**< (WDT_Status) Register Mask  */

/* -------- WDT_INT_ENABLE : (WDT Offset: 0x14) (R/W 8) Watch Dog Interrupt Enable Register.\n -------- */

typedef union
{
  struct
  {
    uint8_t  WDT_INTEN:1;               /**< bit:      0  WDT_Int_Enable: This is the interrupt enables bit for WDT_INT interrupt.\n                   1= WDT_INT Interrupt Enable                   0= WDT_INT Interrupt Disabled */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __WDT_INT_ENABLE_bits_t;
#define WDT_INT_ENABLE_RESETVALUE           (0x00U)                                       /**<  (WDT_INT_ENABLE) Watch Dog Interrupt Enable Register.\n  Reset Value */

#define WDT_INT_ENABLE_WDT_INTEN_Pos          (0)                                            /**< (WDT_INT_ENABLE) WDT_Int_Enable: This is the interrupt enables bit for WDT_INT interrupt.\n                   1= WDT_INT Interrupt Enable                   0= WDT_INT Interrupt Disabled Position */
#define WDT_INT_ENABLE_WDT_INTEN_Msk          (0x1U << WDT_INT_ENABLE_WDT_INTEN_Pos)         /**< (WDT_INT_ENABLE) WDT_Int_Enable: This is the interrupt enables bit for WDT_INT interrupt.\n                   1= WDT_INT Interrupt Enable                   0= WDT_INT Interrupt Disabled Mask */
#define WDT_INT_ENABLE_Msk                    (0x00000001UL)                                 /**< (WDT_INT_ENABLE) Register Mask  */

/** \brief WDT register offsets definitions */
#define WDT_LOAD_OFFSET              (0x00)         /**< (WDT_LOAD) Writing this field reloads the Watch Dog Timer counter. Offset */
#define WDT_CONTROL_OFFSET           (0x04)         /**< (WDT_CONTROL) WDT Control Register Offset */
#define WDT_KICK_OFFSET              (0x08)         /**< (WDT_KICK) The WDT Kick Register is a strobe. Reads of this register return 0. Writes to this register cause the WDT to reload\n     the WDT Load Register value and start decrementing when the WDT_ENABLE bit in the WDT Control Register is set to '1'. When the WDT_ENABLE\n     bit in the WDT Control Register is cleared to '0', writes to the WDT Kick Register have no effect. Offset */
#define WDT_COUNT_OFFSET             (0x0C)         /**< (WDT_COUNT) This read-only register provides the current WDT count. Offset */
#define WDT_Status_OFFSET            (0x10)         /**< (WDT_Status) This read-only register provides the current WDT count. Offset */
#define WDT_INT_ENABLE_OFFSET        (0x14)         /**< (WDT_INT_ENABLE) Watch Dog Interrupt Enable Register.\n Offset */

/** \brief WDT register API structure */
typedef struct
{  /* The function of the Watchdog Timer is to provide a mechanism to detect\n        if the internal embedded controller has failed. When enabled, the Watchdog Timer (WDT) circuit\n        will generate a WDT Event if the user program fails to reload the WDT within a specified length\n        of time known as the WDT Interval. */
  __IO  __WDT_LOAD_bits_t              WDT_LOAD;      /**< Offset: 0x00 (R/W  16) Writing this field reloads the Watch Dog Timer counter. */
  __IO  __WDT_CONTROL_bits_t           WDT_CONTROL;   /**< Offset: 0x04 (R/W  16) WDT Control Register */
  __O   __WDT_KICK_bits_t              KICK;          /**< Offset: 0x08 ( /W   8) The WDT Kick Register is a strobe. Reads of this register return 0. Writes to this register cause the WDT to reload\n     the WDT Load Register value and start decrementing when the WDT_ENABLE bit in the WDT Control Register is set to '1'. When the WDT_ENABLE\n     bit in the WDT Control Register is cleared to '0', writes to the WDT Kick Register have no effect. */
  __I   __WDT_COUNT_bits_t             WDT_COUNT;     /**< Offset: 0x0C (R/   16) This read-only register provides the current WDT count. */
  __I   __WDT_Status_bits_t            WDT_Status;    /**< Offset: 0x10 (R/    8) This read-only register provides the current WDT count. */
  __IO  __WDT_INT_ENABLE_bits_t        WDT_INT_ENABLE; /**< Offset: 0x14 (R/W   8) Watch Dog Interrupt Enable Register.\n */
} wdt_registers_t;
/** @}  end of The function of the Watchdog Timer is to provide a mechanism to detect\n        if the internal embedded controller has failed. When enabled, the Watchdog Timer (WDT) circuit\n        will generate a WDT Event if the user program fails to reload the WDT within a specified length\n        of time known as the WDT Interval. */

#endif /* _PIC32CX_0525SG12_WDT_COMPONENT_H_ */
