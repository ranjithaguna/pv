/**
 * \brief Component description for PIC32CX/0525SG12 RTOS
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
#ifndef _PIC32CX_0525SG12_RTOS_COMPONENT_H_
#define _PIC32CX_0525SG12_RTOS_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_RTOS The RTOS Timer is a low-power, 32-bit timer designed to operate on the 32kHz oscillator which is available during all\n    chip sleep states. This allows firmware the option to sleep the processor, enter heavy or deep chip sleep states, and\n    wake after a programmed amount of time. The timer may be used as a one-shot timer or a continuous timer. When the\n    timer transitions to 0 it is capable of generating a wake-capable interrupt to the embedded controller. This timer may be\n    halted during debug by hardware or via a software control bit.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR RTOS */
/* ========================================================================== */

/* -------- RTOS_TIMER_COUNT : (RTOS Offset: 0x00) (R/W 32) RTOS Timer Count Register. -------- */

typedef union
{
  struct
  {
    uint32_t COUNTER:32;                /**< bit:  0..31  This register contains the current value of the RTOS Timer counter. This register should be read as a DWORD. There is no latching mechanism \n        of the upper bytes implemented if the register is accessed as a byte or word. Reading the register with byte or word operations may give incorrect results. */
  };
  uint32_t w;
} __RTOS_TIMER_COUNT_bits_t;
#define RTOS_TIMER_COUNT_RESETVALUE         (0x00U)                                       /**<  (RTOS_TIMER_COUNT) RTOS Timer Count Register.  Reset Value */

#define RTOS_TIMER_COUNT_COUNTER_Pos          (0)                                            /**< (RTOS_TIMER_COUNT) This register contains the current value of the RTOS Timer counter. This register should be read as a DWORD. There is no latching mechanism \n        of the upper bytes implemented if the register is accessed as a byte or word. Reading the register with byte or word operations may give incorrect results. Position */
#define RTOS_TIMER_COUNT_COUNTER_Msk          (0xFFFFFFFFU << RTOS_TIMER_COUNT_COUNTER_Pos)  /**< (RTOS_TIMER_COUNT) This register contains the current value of the RTOS Timer counter. This register should be read as a DWORD. There is no latching mechanism \n        of the upper bytes implemented if the register is accessed as a byte or word. Reading the register with byte or word operations may give incorrect results. Mask */
#define RTOS_TIMER_COUNT_COUNTER(value)       (RTOS_TIMER_COUNT_COUNTER_Msk & ((value) << RTOS_TIMER_COUNT_COUNTER_Pos))
#define RTOS_TIMER_COUNT_Msk                  (0xFFFFFFFFUL)                                 /**< (RTOS_TIMER_COUNT) Register Mask  */

/* -------- RTOS_TIMER_PRELOAD : (RTOS Offset: 0x04) (R/W 32) RTOS Timer Preload Register -------- */

typedef union
{
  struct
  {
    uint32_t PRE_LOAD:32;               /**< bit:  0..31  The this register is loaded into the RTOS Timer counter either when the TIMER_START bit is written with a 1, or when the timer counter counts down to 0 and the AUTO_RELOAD bit is 1.\n      This register must be programmed with a new count value before the TIMER_START bit is set to 1. If this register is updated while the counter is operating, the new count value will only take effect if\n      the counter transitions form 1 to 0 while the AUTO_RELOAD bit is set. */
  };
  uint32_t w;
} __RTOS_TIMER_PRELOAD_bits_t;
#define RTOS_TIMER_PRELOAD_RESETVALUE       (0x00U)                                       /**<  (RTOS_TIMER_PRELOAD) RTOS Timer Preload Register  Reset Value */

#define RTOS_TIMER_PRELOAD_PRE_LOAD_Pos       (0)                                            /**< (RTOS_TIMER_PRELOAD) The this register is loaded into the RTOS Timer counter either when the TIMER_START bit is written with a 1, or when the timer counter counts down to 0 and the AUTO_RELOAD bit is 1.\n      This register must be programmed with a new count value before the TIMER_START bit is set to 1. If this register is updated while the counter is operating, the new count value will only take effect if\n      the counter transitions form 1 to 0 while the AUTO_RELOAD bit is set. Position */
#define RTOS_TIMER_PRELOAD_PRE_LOAD_Msk       (0xFFFFFFFFU << RTOS_TIMER_PRELOAD_PRE_LOAD_Pos)  /**< (RTOS_TIMER_PRELOAD) The this register is loaded into the RTOS Timer counter either when the TIMER_START bit is written with a 1, or when the timer counter counts down to 0 and the AUTO_RELOAD bit is 1.\n      This register must be programmed with a new count value before the TIMER_START bit is set to 1. If this register is updated while the counter is operating, the new count value will only take effect if\n      the counter transitions form 1 to 0 while the AUTO_RELOAD bit is set. Mask */
#define RTOS_TIMER_PRELOAD_PRE_LOAD(value)    (RTOS_TIMER_PRELOAD_PRE_LOAD_Msk & ((value) << RTOS_TIMER_PRELOAD_PRE_LOAD_Pos))
#define RTOS_TIMER_PRELOAD_Msk                (0xFFFFFFFFUL)                                 /**< (RTOS_TIMER_PRELOAD) Register Mask  */

/* -------- RTOS_TIMER_CONTROL : (RTOS Offset: 0x08) (R/W 32) RTOS Timer Control Register -------- */

typedef union
{
  struct
  {
    uint32_t BLOCK_ENABLE:1;            /**< bit:      0  1=RTOS timer counter is enabled\n     0=RTOS timer disabled. All register bits are reset to their default state */
    uint32_t AUTO_RELOAD:1;             /**< bit:      1  1=The the RTOS Timer Preload Register is loaded into the timer counter and the counter is restarted when the counter transitions from 1 to 0\n     0=The timer counter halts when it transitions from 1 to 0 and will not restart. */
    uint32_t TIMER_START:1;             /**< bit:      2  Writing a 1 to this bit will load the timer counter with the RTOS Timer Preload Register and start counting. If the Preload Register is 0, counting will not start and this bit will be cleared to 0.\n     Writing a 0 to this bit will halt the counter and clear its contents to 0. The RTOS timer interrupt will not be generated. This bit is automatically cleared if the AUTO_RELOAD bit is 0 and the\n     timer counter transitions from 1 to 0. */
    uint32_t EXT_HARDWARE_HALT_EN:1;    /**< bit:      3  1=The timer counter is halted when the external HALT signal is asserted. Counting is always enabled if HALT is de-asserted.\n     0=The HALT signal does not affect the RTOS Timer */
    uint32_t FIRMWARE_TIMER_HALT:1;     /**< bit:      4  1=The timer counter is halted. If the counter was running, clearing this bit will restart the counter from the value at which it halted\n     0=The timer counter, if enabled, will continue to run */
    uint32_t :27;                       /**< bit:  5..31  Reserved                                      */
  };
  uint32_t w;
} __RTOS_TIMER_CONTROL_bits_t;
#define RTOS_TIMER_CONTROL_RESETVALUE       (0x00U)                                       /**<  (RTOS_TIMER_CONTROL) RTOS Timer Control Register  Reset Value */

#define RTOS_TIMER_CONTROL_BLOCK_ENABLE_Pos   (0)                                            /**< (RTOS_TIMER_CONTROL) 1=RTOS timer counter is enabled\n     0=RTOS timer disabled. All register bits are reset to their default state Position */
#define RTOS_TIMER_CONTROL_BLOCK_ENABLE_Msk   (0x1U << RTOS_TIMER_CONTROL_BLOCK_ENABLE_Pos)  /**< (RTOS_TIMER_CONTROL) 1=RTOS timer counter is enabled\n     0=RTOS timer disabled. All register bits are reset to their default state Mask */
#define RTOS_TIMER_CONTROL_AUTO_RELOAD_Pos    (1)                                            /**< (RTOS_TIMER_CONTROL) 1=The the RTOS Timer Preload Register is loaded into the timer counter and the counter is restarted when the counter transitions from 1 to 0\n     0=The timer counter halts when it transitions from 1 to 0 and will not restart. Position */
#define RTOS_TIMER_CONTROL_AUTO_RELOAD_Msk    (0x1U << RTOS_TIMER_CONTROL_AUTO_RELOAD_Pos)   /**< (RTOS_TIMER_CONTROL) 1=The the RTOS Timer Preload Register is loaded into the timer counter and the counter is restarted when the counter transitions from 1 to 0\n     0=The timer counter halts when it transitions from 1 to 0 and will not restart. Mask */
#define RTOS_TIMER_CONTROL_TIMER_START_Pos    (2)                                            /**< (RTOS_TIMER_CONTROL) Writing a 1 to this bit will load the timer counter with the RTOS Timer Preload Register and start counting. If the Preload Register is 0, counting will not start and this bit will be cleared to 0.\n     Writing a 0 to this bit will halt the counter and clear its contents to 0. The RTOS timer interrupt will not be generated. This bit is automatically cleared if the AUTO_RELOAD bit is 0 and the\n     timer counter transitions from 1 to 0. Position */
#define RTOS_TIMER_CONTROL_TIMER_START_Msk    (0x1U << RTOS_TIMER_CONTROL_TIMER_START_Pos)   /**< (RTOS_TIMER_CONTROL) Writing a 1 to this bit will load the timer counter with the RTOS Timer Preload Register and start counting. If the Preload Register is 0, counting will not start and this bit will be cleared to 0.\n     Writing a 0 to this bit will halt the counter and clear its contents to 0. The RTOS timer interrupt will not be generated. This bit is automatically cleared if the AUTO_RELOAD bit is 0 and the\n     timer counter transitions from 1 to 0. Mask */
#define RTOS_TIMER_CONTROL_EXT_HARDWARE_HALT_EN_Pos (3)                                            /**< (RTOS_TIMER_CONTROL) 1=The timer counter is halted when the external HALT signal is asserted. Counting is always enabled if HALT is de-asserted.\n     0=The HALT signal does not affect the RTOS Timer Position */
#define RTOS_TIMER_CONTROL_EXT_HARDWARE_HALT_EN_Msk (0x1U << RTOS_TIMER_CONTROL_EXT_HARDWARE_HALT_EN_Pos)  /**< (RTOS_TIMER_CONTROL) 1=The timer counter is halted when the external HALT signal is asserted. Counting is always enabled if HALT is de-asserted.\n     0=The HALT signal does not affect the RTOS Timer Mask */
#define RTOS_TIMER_CONTROL_FIRMWARE_TIMER_HALT_Pos (4)                                            /**< (RTOS_TIMER_CONTROL) 1=The timer counter is halted. If the counter was running, clearing this bit will restart the counter from the value at which it halted\n     0=The timer counter, if enabled, will continue to run Position */
#define RTOS_TIMER_CONTROL_FIRMWARE_TIMER_HALT_Msk (0x1U << RTOS_TIMER_CONTROL_FIRMWARE_TIMER_HALT_Pos)  /**< (RTOS_TIMER_CONTROL) 1=The timer counter is halted. If the counter was running, clearing this bit will restart the counter from the value at which it halted\n     0=The timer counter, if enabled, will continue to run Mask */
#define RTOS_TIMER_CONTROL_Msk                (0x0000001FUL)                                 /**< (RTOS_TIMER_CONTROL) Register Mask  */

/* -------- RTOS_SOFT_INTERRUPT : (RTOS Offset: 0x0c) (/W 32) Soft Interrupt Register -------- */

typedef union
{
  struct
  {
    uint32_t SWI_0:1;                   /**< bit:      0  Software Interrupt. A write of a '1' to this bit will generate an SWI interrupt to the EC.\n     Writes of a '0' have no effect. Reads return '0'. */
    uint32_t SWI_1:1;                   /**< bit:      1  Software Interrupt. A write of a '1' to this bit will generate an SWI interrupt to the EC.\n     Writes of a '0' have no effect. Reads return '0'. */
    uint32_t SWI_2:1;                   /**< bit:      2  Software Interrupt. A write of a '1' to this bit will generate an SWI interrupt to the EC.\n     Writes of a '0' have no effect. Reads return '0'. */
    uint32_t SWI_3:1;                   /**< bit:      3  Software Interrupt. A write of a '1' to this bit will generate an SWI interrupt to the EC.\n     Writes of a '0' have no effect. Reads return '0'. */
    uint32_t :28;                       /**< bit:  4..31  Reserved                                      */
  };
  struct
  {
    uint32_t SWI_:4;                    /**< bit:   0..3  Software Interrupt. A write of a 'x' to this bit will generate an SWI interrupt to the EC.\n     Writes of a 'x' have no effect. Reads return 'x'. */
    uint32_t :28;                       /**< bit:  4..31  Reserved                                      */
  };
  uint32_t w;
} __RTOS_SOFT_INTERRUPT_bits_t;
#define RTOS_SOFT_INTERRUPT_RESETVALUE      (0x00U)                                       /**<  (RTOS_SOFT_INTERRUPT) Soft Interrupt Register  Reset Value */

#define RTOS_SOFT_INTERRUPT_SWI_0_Pos         (0)                                            /**< (RTOS_SOFT_INTERRUPT) Software Interrupt. A write of a '1' to this bit will generate an SWI interrupt to the EC.\n     Writes of a '0' have no effect. Reads return '0'. Position */
#define RTOS_SOFT_INTERRUPT_SWI_0_Msk         (0x1U << RTOS_SOFT_INTERRUPT_SWI_0_Pos)        /**< (RTOS_SOFT_INTERRUPT) Software Interrupt. A write of a '1' to this bit will generate an SWI interrupt to the EC.\n     Writes of a '0' have no effect. Reads return '0'. Mask */
#define RTOS_SOFT_INTERRUPT_SWI_1_Pos         (1)                                            /**< (RTOS_SOFT_INTERRUPT) Software Interrupt. A write of a '1' to this bit will generate an SWI interrupt to the EC.\n     Writes of a '0' have no effect. Reads return '0'. Position */
#define RTOS_SOFT_INTERRUPT_SWI_1_Msk         (0x1U << RTOS_SOFT_INTERRUPT_SWI_1_Pos)        /**< (RTOS_SOFT_INTERRUPT) Software Interrupt. A write of a '1' to this bit will generate an SWI interrupt to the EC.\n     Writes of a '0' have no effect. Reads return '0'. Mask */
#define RTOS_SOFT_INTERRUPT_SWI_2_Pos         (2)                                            /**< (RTOS_SOFT_INTERRUPT) Software Interrupt. A write of a '1' to this bit will generate an SWI interrupt to the EC.\n     Writes of a '0' have no effect. Reads return '0'. Position */
#define RTOS_SOFT_INTERRUPT_SWI_2_Msk         (0x1U << RTOS_SOFT_INTERRUPT_SWI_2_Pos)        /**< (RTOS_SOFT_INTERRUPT) Software Interrupt. A write of a '1' to this bit will generate an SWI interrupt to the EC.\n     Writes of a '0' have no effect. Reads return '0'. Mask */
#define RTOS_SOFT_INTERRUPT_SWI_3_Pos         (3)                                            /**< (RTOS_SOFT_INTERRUPT) Software Interrupt. A write of a '1' to this bit will generate an SWI interrupt to the EC.\n     Writes of a '0' have no effect. Reads return '0'. Position */
#define RTOS_SOFT_INTERRUPT_SWI_3_Msk         (0x1U << RTOS_SOFT_INTERRUPT_SWI_3_Pos)        /**< (RTOS_SOFT_INTERRUPT) Software Interrupt. A write of a '1' to this bit will generate an SWI interrupt to the EC.\n     Writes of a '0' have no effect. Reads return '0'. Mask */
#define RTOS_SOFT_INTERRUPT_Msk               (0x0000000FUL)                                 /**< (RTOS_SOFT_INTERRUPT) Register Mask  */
#define RTOS_SOFT_INTERRUPT_SWI__Pos          (0)                                            /**< (RTOS_SOFT_INTERRUPT Position) Software Interrupt. A write of a 'x' to this bit will generate an SWI interrupt to the EC.\n     Writes of a 'x' have no effect. Reads return 'x'. */
#define RTOS_SOFT_INTERRUPT_SWI__Msk          (0xFU << RTOS_SOFT_INTERRUPT_SWI__Pos)         /**< (RTOS_SOFT_INTERRUPT Mask) SWI_ */
#define RTOS_SOFT_INTERRUPT_SWI_(value)       (RTOS_SOFT_INTERRUPT_SWI__Msk & ((value) << RTOS_SOFT_INTERRUPT_SWI__Pos))

/** \brief RTOS register offsets definitions */
#define RTOS_TIMER_COUNT_OFFSET      (0x00)         /**< (RTOS_TIMER_COUNT) RTOS Timer Count Register. Offset */
#define RTOS_TIMER_PRELOAD_OFFSET    (0x04)         /**< (RTOS_TIMER_PRELOAD) RTOS Timer Preload Register Offset */
#define RTOS_TIMER_CONTROL_OFFSET    (0x08)         /**< (RTOS_TIMER_CONTROL) RTOS Timer Control Register Offset */
#define RTOS_SOFT_INTERRUPT_OFFSET   (0x0C)         /**< (RTOS_SOFT_INTERRUPT) Soft Interrupt Register Offset */

/** \brief RTOS register API structure */
typedef struct
{  /* The RTOS Timer is a low-power, 32-bit timer designed to operate on the 32kHz oscillator which is available during all\n    chip sleep states. This allows firmware the option to sleep the processor, enter heavy or deep chip sleep states, and\n    wake after a programmed amount of time. The timer may be used as a one-shot timer or a continuous timer. When the\n    timer transitions to 0 it is capable of generating a wake-capable interrupt to the embedded controller. This timer may be\n    halted during debug by hardware or via a software control bit. */
  __IO  __RTOS_TIMER_COUNT_bits_t      RTOS_TIMER_COUNT; /**< Offset: 0x00 (R/W  32) RTOS Timer Count Register. */
  __IO  __RTOS_TIMER_PRELOAD_bits_t    RTOS_TIMER_PRELOAD; /**< Offset: 0x04 (R/W  32) RTOS Timer Preload Register */
  __IO  __RTOS_TIMER_CONTROL_bits_t    RTOS_TIMER_CONTROL; /**< Offset: 0x08 (R/W  32) RTOS Timer Control Register */
  __O   __RTOS_SOFT_INTERRUPT_bits_t   SOFT_INTERRUPT; /**< Offset: 0x0C ( /W  32) Soft Interrupt Register */
} rtos_registers_t;
/** @}  end of The RTOS Timer is a low-power, 32-bit timer designed to operate on the 32kHz oscillator which is available during all\n    chip sleep states. This allows firmware the option to sleep the processor, enter heavy or deep chip sleep states, and\n    wake after a programmed amount of time. The timer may be used as a one-shot timer or a continuous timer. When the\n    timer transitions to 0 it is capable of generating a wake-capable interrupt to the embedded controller. This timer may be\n    halted during debug by hardware or via a software control bit. */

#endif /* _PIC32CX_0525SG12_RTOS_COMPONENT_H_ */
