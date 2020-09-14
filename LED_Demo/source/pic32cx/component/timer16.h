/**
 * \brief Component description for PIC32CX/0525SG12 TIMER16
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
#ifndef _PIC32CX_0525SG12_TIMER16_COMPONENT_H_
#define _PIC32CX_0525SG12_TIMER16_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_TIMER16 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n    The name of the timer instance indicates the size of the timer.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR TIMER16 */
/* ========================================================================== */

/* -------- TIMER16_COUNT : (TIMER16 Offset: 0x00) (R/W 32) This is the value of the Timer counter. This is updated by Hardware but may be set by Firmware. -------- */

typedef union
{
  uint32_t w;
} __TIMER16_COUNT_bits_t;
#define TIMER16_COUNT_RESETVALUE            (0x00U)                                       /**<  (TIMER16_COUNT) This is the value of the Timer counter. This is updated by Hardware but may be set by Firmware.  Reset Value */

#define TIMER16_COUNT_Msk                     (0x00000000UL)                                 /**< (TIMER16_COUNT) Register Mask  */

/* -------- TIMER16_PRE_LOAD : (TIMER16 Offset: 0x04) (R/W 32) This is the value of the Timer pre-load for the counter. This is used by H/W when the counter is to be restarted\n    automatically; this will become the new value of the counter upon restart. -------- */

typedef union
{
  uint32_t w;
} __TIMER16_PRE_LOAD_bits_t;
#define TIMER16_PRE_LOAD_RESETVALUE         (0x00U)                                       /**<  (TIMER16_PRE_LOAD) This is the value of the Timer pre-load for the counter. This is used by H/W when the counter is to be restarted\n    automatically; this will become the new value of the counter upon restart.  Reset Value */

#define TIMER16_PRE_LOAD_Msk                  (0x00000000UL)                                 /**< (TIMER16_PRE_LOAD) Register Mask  */

/* -------- TIMER16_STATUS : (TIMER16 Offset: 0x08) (R/W 32) This is the interrupt status that fires when the timer reaches its limit -------- */

typedef union
{
  struct
  {
    uint32_t EVENT_INTERRUPT:1;         /**< bit:      0  This is the interrupt status that fires when the timer reaches its limit. This is the interrupt status that fires when\n        the timer reaches its limit. This may be level or a self clearing signal cycle pulse, based on the AUTO_RESTART bit in the Timer\n        Control Register. If the timer is set to automatically restart, it will provide a pulse, otherwise a level is provided.(R/WC) */
    uint32_t :31;                       /**< bit:  1..31  Reserved                                      */
  };
  uint32_t w;
} __TIMER16_STATUS_bits_t;
#define TIMER16_STATUS_RESETVALUE           (0x00U)                                       /**<  (TIMER16_STATUS) This is the interrupt status that fires when the timer reaches its limit  Reset Value */

#define TIMER16_STATUS_EVENT_INTERRUPT_Pos    (0)                                            /**< (TIMER16_STATUS) This is the interrupt status that fires when the timer reaches its limit. This is the interrupt status that fires when\n        the timer reaches its limit. This may be level or a self clearing signal cycle pulse, based on the AUTO_RESTART bit in the Timer\n        Control Register. If the timer is set to automatically restart, it will provide a pulse, otherwise a level is provided.(R/WC) Position */
#define TIMER16_STATUS_EVENT_INTERRUPT_Msk    (0x1U << TIMER16_STATUS_EVENT_INTERRUPT_Pos)   /**< (TIMER16_STATUS) This is the interrupt status that fires when the timer reaches its limit. This is the interrupt status that fires when\n        the timer reaches its limit. This may be level or a self clearing signal cycle pulse, based on the AUTO_RESTART bit in the Timer\n        Control Register. If the timer is set to automatically restart, it will provide a pulse, otherwise a level is provided.(R/WC) Mask */
#define TIMER16_STATUS_Msk                    (0x00000001UL)                                 /**< (TIMER16_STATUS) Register Mask  */

/* -------- TIMER16_INT_EN : (TIMER16 Offset: 0x0c) (R/W 32) This is the interrupt enable for the status EVENT_INTERRUPT bit in the Timer Status Register -------- */

typedef union
{
  struct
  {
    uint32_t ENABLE:1;                  /**< bit:      0  This is the interrupt enable for the status EVENT_INTERRUPT bit in the Timer Status Register. */
    uint32_t :31;                       /**< bit:  1..31  Reserved                                      */
  };
  uint32_t w;
} __TIMER16_INT_EN_bits_t;
#define TIMER16_INT_EN_RESETVALUE           (0x00U)                                       /**<  (TIMER16_INT_EN) This is the interrupt enable for the status EVENT_INTERRUPT bit in the Timer Status Register  Reset Value */

#define TIMER16_INT_EN_ENABLE_Pos             (0)                                            /**< (TIMER16_INT_EN) This is the interrupt enable for the status EVENT_INTERRUPT bit in the Timer Status Register. Position */
#define TIMER16_INT_EN_ENABLE_Msk             (0x1U << TIMER16_INT_EN_ENABLE_Pos)            /**< (TIMER16_INT_EN) This is the interrupt enable for the status EVENT_INTERRUPT bit in the Timer Status Register. Mask */
#define TIMER16_INT_EN_Msk                    (0x00000001UL)                                 /**< (TIMER16_INT_EN) Register Mask  */

/* -------- TIMER16_CONTROL : (TIMER16 Offset: 0x10) (R/W 32) Timer Control Register -------- */

typedef union
{
  struct
  {
    uint32_t ENABLE:1;                  /**< bit:      0  This enables the block for operation. 1=This block will function normally;\n     0=This block will gate its clock and go into its lowest power state */
    uint32_t :1;                        /**< bit:      1  Reserved                                      */
    uint32_t COUNT_UP:1;                /**< bit:      2  This selects the counter direction. When the counter in incrementing the counter will saturate and trigger the event\n     when it reaches all F's. When the counter is decrementing the counter will saturate when it reaches 0h. 1=The counter will increment;\n     0=The counter will decrement */
    uint32_t AUTO_RESTART:1;            /**< bit:      3  This will select the action taken upon completing a count.\n     1=The counter will automatically restart the count, using the contents of the Timer Preload Register to load the Timer Count Register.\n     The interrupt will be set in edge mode\n     0=The counter will simply enter a done state and wait for further control inputs. The interrupt will be set in level mode. */
    uint32_t SOFT_RESET:1;              /**< bit:      4  This is a soft reset. This is self clearing 1 cycle after it is written. Firmware does not need\n     to wait before reconfiguring the Basic Timer following soft reset. */
    uint32_t START:1;                   /**< bit:      5  This bit triggers the timer counter. The counter will operate until it hits its terminating condition. This will\n     clear this bit. It should be noted that when operating in restart mode, there is no terminating condition for the counter, so\n     this bit will never clear. Clearing this bit will halt the timer counter. */
    uint32_t RELOAD:1;                  /**< bit:      6  This bit reloads the counter without interrupting it operation. This will not function if the timer has already\n     completed (when the START bit in this register is '0'). This is used to periodically prevent the timer from firing when an\n     event occurs. Usage while the timer is off may result in erroneous behaviour. */
    uint32_t HALT:1;                    /**< bit:      7  This is a halt bit. This will halt the timer as long as it is active. Once the halt is inactive, the timer will\n     start from where it left off. 1=Timer is halted. It stops counting. The clock divider will also be reset. 0=Timer runs normally. */
    uint32_t :8;                        /**< bit:  8..15  Reserved                                      */
    uint32_t PRE_SCALE:16;              /**< bit: 16..31  This is used to divide down the system clock through clock enables to lower the power consumption of the block and allow\n     slow timers. Updating this value during operation may result in erroneous clock enable pulses until the clock divider restarts.\n     The number of clocks per clock enable pulse is (Value + 1); a setting of 0 runs at the full clock speed, while a setting of 1\n     runs at half speed. */
  };
  uint32_t w;
} __TIMER16_CONTROL_bits_t;
#define TIMER16_CONTROL_RESETVALUE          (0x00U)                                       /**<  (TIMER16_CONTROL) Timer Control Register  Reset Value */

#define TIMER16_CONTROL_ENABLE_Pos            (0)                                            /**< (TIMER16_CONTROL) This enables the block for operation. 1=This block will function normally;\n     0=This block will gate its clock and go into its lowest power state Position */
#define TIMER16_CONTROL_ENABLE_Msk            (0x1U << TIMER16_CONTROL_ENABLE_Pos)           /**< (TIMER16_CONTROL) This enables the block for operation. 1=This block will function normally;\n     0=This block will gate its clock and go into its lowest power state Mask */
#define TIMER16_CONTROL_COUNT_UP_Pos          (2)                                            /**< (TIMER16_CONTROL) This selects the counter direction. When the counter in incrementing the counter will saturate and trigger the event\n     when it reaches all F's. When the counter is decrementing the counter will saturate when it reaches 0h. 1=The counter will increment;\n     0=The counter will decrement Position */
#define TIMER16_CONTROL_COUNT_UP_Msk          (0x1U << TIMER16_CONTROL_COUNT_UP_Pos)         /**< (TIMER16_CONTROL) This selects the counter direction. When the counter in incrementing the counter will saturate and trigger the event\n     when it reaches all F's. When the counter is decrementing the counter will saturate when it reaches 0h. 1=The counter will increment;\n     0=The counter will decrement Mask */
#define TIMER16_CONTROL_AUTO_RESTART_Pos      (3)                                            /**< (TIMER16_CONTROL) This will select the action taken upon completing a count.\n     1=The counter will automatically restart the count, using the contents of the Timer Preload Register to load the Timer Count Register.\n     The interrupt will be set in edge mode\n     0=The counter will simply enter a done state and wait for further control inputs. The interrupt will be set in level mode. Position */
#define TIMER16_CONTROL_AUTO_RESTART_Msk      (0x1U << TIMER16_CONTROL_AUTO_RESTART_Pos)     /**< (TIMER16_CONTROL) This will select the action taken upon completing a count.\n     1=The counter will automatically restart the count, using the contents of the Timer Preload Register to load the Timer Count Register.\n     The interrupt will be set in edge mode\n     0=The counter will simply enter a done state and wait for further control inputs. The interrupt will be set in level mode. Mask */
#define TIMER16_CONTROL_SOFT_RESET_Pos        (4)                                            /**< (TIMER16_CONTROL) This is a soft reset. This is self clearing 1 cycle after it is written. Firmware does not need\n     to wait before reconfiguring the Basic Timer following soft reset. Position */
#define TIMER16_CONTROL_SOFT_RESET_Msk        (0x1U << TIMER16_CONTROL_SOFT_RESET_Pos)       /**< (TIMER16_CONTROL) This is a soft reset. This is self clearing 1 cycle after it is written. Firmware does not need\n     to wait before reconfiguring the Basic Timer following soft reset. Mask */
#define TIMER16_CONTROL_START_Pos             (5)                                            /**< (TIMER16_CONTROL) This bit triggers the timer counter. The counter will operate until it hits its terminating condition. This will\n     clear this bit. It should be noted that when operating in restart mode, there is no terminating condition for the counter, so\n     this bit will never clear. Clearing this bit will halt the timer counter. Position */
#define TIMER16_CONTROL_START_Msk             (0x1U << TIMER16_CONTROL_START_Pos)            /**< (TIMER16_CONTROL) This bit triggers the timer counter. The counter will operate until it hits its terminating condition. This will\n     clear this bit. It should be noted that when operating in restart mode, there is no terminating condition for the counter, so\n     this bit will never clear. Clearing this bit will halt the timer counter. Mask */
#define TIMER16_CONTROL_RELOAD_Pos            (6)                                            /**< (TIMER16_CONTROL) This bit reloads the counter without interrupting it operation. This will not function if the timer has already\n     completed (when the START bit in this register is '0'). This is used to periodically prevent the timer from firing when an\n     event occurs. Usage while the timer is off may result in erroneous behaviour. Position */
#define TIMER16_CONTROL_RELOAD_Msk            (0x1U << TIMER16_CONTROL_RELOAD_Pos)           /**< (TIMER16_CONTROL) This bit reloads the counter without interrupting it operation. This will not function if the timer has already\n     completed (when the START bit in this register is '0'). This is used to periodically prevent the timer from firing when an\n     event occurs. Usage while the timer is off may result in erroneous behaviour. Mask */
#define TIMER16_CONTROL_HALT_Pos              (7)                                            /**< (TIMER16_CONTROL) This is a halt bit. This will halt the timer as long as it is active. Once the halt is inactive, the timer will\n     start from where it left off. 1=Timer is halted. It stops counting. The clock divider will also be reset. 0=Timer runs normally. Position */
#define TIMER16_CONTROL_HALT_Msk              (0x1U << TIMER16_CONTROL_HALT_Pos)             /**< (TIMER16_CONTROL) This is a halt bit. This will halt the timer as long as it is active. Once the halt is inactive, the timer will\n     start from where it left off. 1=Timer is halted. It stops counting. The clock divider will also be reset. 0=Timer runs normally. Mask */
#define TIMER16_CONTROL_PRE_SCALE_Pos         (16)                                           /**< (TIMER16_CONTROL) This is used to divide down the system clock through clock enables to lower the power consumption of the block and allow\n     slow timers. Updating this value during operation may result in erroneous clock enable pulses until the clock divider restarts.\n     The number of clocks per clock enable pulse is (Value + 1); a setting of 0 runs at the full clock speed, while a setting of 1\n     runs at half speed. Position */
#define TIMER16_CONTROL_PRE_SCALE_Msk         (0xFFFFU << TIMER16_CONTROL_PRE_SCALE_Pos)     /**< (TIMER16_CONTROL) This is used to divide down the system clock through clock enables to lower the power consumption of the block and allow\n     slow timers. Updating this value during operation may result in erroneous clock enable pulses until the clock divider restarts.\n     The number of clocks per clock enable pulse is (Value + 1); a setting of 0 runs at the full clock speed, while a setting of 1\n     runs at half speed. Mask */
#define TIMER16_CONTROL_PRE_SCALE(value)      (TIMER16_CONTROL_PRE_SCALE_Msk & ((value) << TIMER16_CONTROL_PRE_SCALE_Pos))
#define TIMER16_CONTROL_Msk                   (0xFFFF00FDUL)                                 /**< (TIMER16_CONTROL) Register Mask  */

/** \brief TIMER16 register offsets definitions */
#define TIMER16_COUNT_OFFSET         (0x00)         /**< (TIMER16_COUNT) This is the value of the Timer counter. This is updated by Hardware but may be set by Firmware. Offset */
#define TIMER16_PRE_LOAD_OFFSET      (0x04)         /**< (TIMER16_PRE_LOAD) This is the value of the Timer pre-load for the counter. This is used by H/W when the counter is to be restarted\n    automatically; this will become the new value of the counter upon restart. Offset */
#define TIMER16_STATUS_OFFSET        (0x08)         /**< (TIMER16_STATUS) This is the interrupt status that fires when the timer reaches its limit Offset */
#define TIMER16_INT_EN_OFFSET        (0x0C)         /**< (TIMER16_INT_EN) This is the interrupt enable for the status EVENT_INTERRUPT bit in the Timer Status Register Offset */
#define TIMER16_CONTROL_OFFSET       (0x10)         /**< (TIMER16_CONTROL) Timer Control Register Offset */

/** \brief TIMER16 register API structure */
typedef struct
{  /* This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n    The name of the timer instance indicates the size of the timer. */
  __IO  __TIMER16_COUNT_bits_t         COUNT;         /**< Offset: 0x00 (R/W  32) This is the value of the Timer counter. This is updated by Hardware but may be set by Firmware. */
  __IO  __TIMER16_PRE_LOAD_bits_t      PRE_LOAD;      /**< Offset: 0x04 (R/W  32) This is the value of the Timer pre-load for the counter. This is used by H/W when the counter is to be restarted\n    automatically; this will become the new value of the counter upon restart. */
  __IO  __TIMER16_STATUS_bits_t        STATUS;        /**< Offset: 0x08 (R/W  32) This is the interrupt status that fires when the timer reaches its limit */
  __IO  __TIMER16_INT_EN_bits_t        INT_EN;        /**< Offset: 0x0C (R/W  32) This is the interrupt enable for the status EVENT_INTERRUPT bit in the Timer Status Register */
  __IO  __TIMER16_CONTROL_bits_t       CONTROL;       /**< Offset: 0x10 (R/W  32) Timer Control Register */
} timer16_registers_t;
/** @}  end of This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n    The name of the timer instance indicates the size of the timer. */

#endif /* _PIC32CX_0525SG12_TIMER16_COMPONENT_H_ */
