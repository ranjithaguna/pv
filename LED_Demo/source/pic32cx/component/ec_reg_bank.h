/**
 * \brief Component description for PIC32CX/0525SG12 EC_REG_BANK
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
#ifndef _PIC32CX_0525SG12_EC_REG_BANK_COMPONENT_H_
#define _PIC32CX_0525SG12_EC_REG_BANK_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_EC_REG_BANK This block is designed to be accessed internally by the EC via the register interface.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR EC_REG_BANK */
/* ========================================================================== */

/* -------- EC_REG_BANK_AHB_ERROR_ADDRESS : (EC_REG_BANK Offset: 0x04) (R/W 32) AHB Error Address [0:0] AHB_ERR_ADDR, In priority order:\n     1. AHB address is registered when an AHB error occurs on the processor's AHB master port and the register value was\n     already 0. This way only the first address to generate an exception is captured.\n     2. The processor can clear this register by writing any 32-bit value to this register. -------- */

typedef union
{
  uint32_t w;
} __EC_REG_BANK_AHB_ERROR_ADDRESS_bits_t;
#define EC_REG_BANK_AHB_ERROR_ADDRESS_RESETVALUE (0x00U)                                       /**<  (EC_REG_BANK_AHB_ERROR_ADDRESS) AHB Error Address [0:0] AHB_ERR_ADDR, In priority order:\n     1. AHB address is registered when an AHB error occurs on the processor's AHB master port and the register value was\n     already 0. This way only the first address to generate an exception is captured.\n     2. The processor can clear this register by writing any 32-bit value to this register.  Reset Value */

#define EC_REG_BANK_AHB_ERROR_ADDRESS_Msk     (0x00000000UL)                                 /**< (EC_REG_BANK_AHB_ERROR_ADDRESS) Register Mask  */

/* -------- EC_REG_BANK_AHB_ERROR_CONTROL : (EC_REG_BANK Offset: 0x14) (R/W 8) AHB Error Control [0:0] AHB_ERROR_DISABLE, 0: EC memory exceptions are enabled. 1: EC memory exceptions are disabled. -------- */

typedef union
{
  uint8_t  w;
} __EC_REG_BANK_AHB_ERROR_CONTROL_bits_t;
#define EC_REG_BANK_AHB_ERROR_CONTROL_RESETVALUE (0x00U)                                       /**<  (EC_REG_BANK_AHB_ERROR_CONTROL) AHB Error Control [0:0] AHB_ERROR_DISABLE, 0: EC memory exceptions are enabled. 1: EC memory exceptions are disabled.  Reset Value */

#define EC_REG_BANK_AHB_ERROR_CONTROL_Msk     (0x00000000UL)                                 /**< (EC_REG_BANK_AHB_ERROR_CONTROL) Register Mask  */

/* -------- EC_REG_BANK_INTERRUPT_CONTROL : (EC_REG_BANK Offset: 0x18) (R/W 32) Interrupt Control [0:0] NVIC_EN (NVIC_EN) This bit enables Alternate NVIC IRQ's Vectors. The Alternate NVIC Vectors provides each interrupt event with a dedicated (direct) NVIC vector.\n            0 = Alternate NVIC vectors disabled, 1= Alternate NVIC vectors enabled -------- */

typedef union
{
  uint32_t w;
} __EC_REG_BANK_INTERRUPT_CONTROL_bits_t;
#define EC_REG_BANK_INTERRUPT_CONTROL_RESETVALUE (0x01U)                                       /**<  (EC_REG_BANK_INTERRUPT_CONTROL) Interrupt Control [0:0] NVIC_EN (NVIC_EN) This bit enables Alternate NVIC IRQ's Vectors. The Alternate NVIC Vectors provides each interrupt event with a dedicated (direct) NVIC vector.\n            0 = Alternate NVIC vectors disabled, 1= Alternate NVIC vectors enabled  Reset Value */

#define EC_REG_BANK_INTERRUPT_CONTROL_Msk     (0x00000000UL)                                 /**< (EC_REG_BANK_INTERRUPT_CONTROL) Register Mask  */

/* -------- EC_REG_BANK_ETM_TRACE_ENABLE : (EC_REG_BANK Offset: 0x1c) (R/W 32) ETM TRACE Enable [0:0] TRACE_EN (TRACE_EN) This bit enables the ARM TRACE debug port (ETM/ITM). The Trace Debug Interface pins are forced to the TRACE functions.            0 = ARM TRACE port disabled, 1= ARM TRACE port enabled -------- */

typedef union
{
  uint32_t w;
} __EC_REG_BANK_ETM_TRACE_ENABLE_bits_t;
#define EC_REG_BANK_ETM_TRACE_ENABLE_RESETVALUE (0x00U)                                       /**<  (EC_REG_BANK_ETM_TRACE_ENABLE) ETM TRACE Enable [0:0] TRACE_EN (TRACE_EN) This bit enables the ARM TRACE debug port (ETM/ITM). The Trace Debug Interface pins are forced to the TRACE functions.            0 = ARM TRACE port disabled, 1= ARM TRACE port enabled  Reset Value */

#define EC_REG_BANK_ETM_TRACE_ENABLE_Msk      (0x00000000UL)                                 /**< (EC_REG_BANK_ETM_TRACE_ENABLE) Register Mask  */

/* -------- EC_REG_BANK_DEBUG_Enable : (EC_REG_BANK Offset: 0x20) (R/W 32) Debug Enable Register -------- */

typedef union
{
  struct
  {
    uint32_t DEBUG_EN:1;                /**< bit:      0  DEBUG_EN (JTAG_EN) This bit enables the JTAG/SWD debug port.\n               0= JTAG/SWD port disabled. JTAG/SWD cannot be enabled (i.e., the TRST# pin is ignored and the JTAG signals remain in their non-JTAG state)\n               1= JTAG/SWD port enabled. A high on TRST# enables JTAG or SWD, as determined by SWD_EN. */
    uint32_t DEBUG_PIN_CFG:2;           /**< bit:   1..2  This field determines which pins are affected by the TRST# debug enable pin.\n      3=Reserved\n      2=The pins associated with the JTAG TCK and TMS switch to the debug interface when TRST# is de-asserted high. The pins\n      associated with TDI and TDO remain controlled by the associated GPIO. This setting should be used when the ARM Serial\n      Wire Debug (SWD) is required for debugging and the Serial Wire Viewer is not required\n      1=The pins associated with the JTAG TCK, TMS and TDO switch to the debug interface when TRST# is de-asserted high. The pin\n      associated with TDI remains controlled by the associated GPIO. This setting should be used when the ARM Serial Wire Debug\n      (SWD) and Serial Wire Viewer (SWV) are both required for debugging\n      0=All four pins associated with JTAG (TCK, TMS, TDI and TDO) switch to the debug interface when TRST# is de-asserted high.\n      This setting should be used when the JTAG TAP controller is required for debugging. */
    uint32_t DEBUG_PU_EN:1;             /**< bit:      3  If this bit is set to '1b' internal pull-up resistors are automatically enabled on the appropriate debugging port\n      wires whenever the debug port is enabled (the DEBUG_EN bit in this register is '1b' and the JTAG_RST# pin is high). The setting\n      of DEBUG_PIN_CFG determines which pins have pull-ups enabled when the debug port is enabled. */
    uint32_t BSP_EN:1;                  /**< bit:      4  This bit sets the boundary scan tap controller accessibility from JTAG port.\n         1= Boundary scan tap controller accessibile through JTAG Port.\n         0= Boundary scan tap controller not accessibile through JTAG Port.\n */
    uint32_t :27;                       /**< bit:  5..31  Reserved                                      */
  };
  uint32_t w;
} __EC_REG_BANK_DEBUG_Enable_bits_t;
#define EC_REG_BANK_DEBUG_Enable_RESETVALUE (0x00U)                                       /**<  (EC_REG_BANK_DEBUG_Enable) Debug Enable Register  Reset Value */

#define EC_REG_BANK_DEBUG_Enable_DEBUG_EN_Pos (0)                                            /**< (EC_REG_BANK_DEBUG_Enable) DEBUG_EN (JTAG_EN) This bit enables the JTAG/SWD debug port.\n               0= JTAG/SWD port disabled. JTAG/SWD cannot be enabled (i.e., the TRST# pin is ignored and the JTAG signals remain in their non-JTAG state)\n               1= JTAG/SWD port enabled. A high on TRST# enables JTAG or SWD, as determined by SWD_EN. Position */
#define EC_REG_BANK_DEBUG_Enable_DEBUG_EN_Msk (0x1U << EC_REG_BANK_DEBUG_Enable_DEBUG_EN_Pos)  /**< (EC_REG_BANK_DEBUG_Enable) DEBUG_EN (JTAG_EN) This bit enables the JTAG/SWD debug port.\n               0= JTAG/SWD port disabled. JTAG/SWD cannot be enabled (i.e., the TRST# pin is ignored and the JTAG signals remain in their non-JTAG state)\n               1= JTAG/SWD port enabled. A high on TRST# enables JTAG or SWD, as determined by SWD_EN. Mask */
#define EC_REG_BANK_DEBUG_Enable_DEBUG_PIN_CFG_Pos (1)                                            /**< (EC_REG_BANK_DEBUG_Enable) This field determines which pins are affected by the TRST# debug enable pin.\n      3=Reserved\n      2=The pins associated with the JTAG TCK and TMS switch to the debug interface when TRST# is de-asserted high. The pins\n      associated with TDI and TDO remain controlled by the associated GPIO. This setting should be used when the ARM Serial\n      Wire Debug (SWD) is required for debugging and the Serial Wire Viewer is not required\n      1=The pins associated with the JTAG TCK, TMS and TDO switch to the debug interface when TRST# is de-asserted high. The pin\n      associated with TDI remains controlled by the associated GPIO. This setting should be used when the ARM Serial Wire Debug\n      (SWD) and Serial Wire Viewer (SWV) are both required for debugging\n      0=All four pins associated with JTAG (TCK, TMS, TDI and TDO) switch to the debug interface when TRST# is de-asserted high.\n      This setting should be used when the JTAG TAP controller is required for debugging. Position */
#define EC_REG_BANK_DEBUG_Enable_DEBUG_PIN_CFG_Msk (0x3U << EC_REG_BANK_DEBUG_Enable_DEBUG_PIN_CFG_Pos)  /**< (EC_REG_BANK_DEBUG_Enable) This field determines which pins are affected by the TRST# debug enable pin.\n      3=Reserved\n      2=The pins associated with the JTAG TCK and TMS switch to the debug interface when TRST# is de-asserted high. The pins\n      associated with TDI and TDO remain controlled by the associated GPIO. This setting should be used when the ARM Serial\n      Wire Debug (SWD) is required for debugging and the Serial Wire Viewer is not required\n      1=The pins associated with the JTAG TCK, TMS and TDO switch to the debug interface when TRST# is de-asserted high. The pin\n      associated with TDI remains controlled by the associated GPIO. This setting should be used when the ARM Serial Wire Debug\n      (SWD) and Serial Wire Viewer (SWV) are both required for debugging\n      0=All four pins associated with JTAG (TCK, TMS, TDI and TDO) switch to the debug interface when TRST# is de-asserted high.\n      This setting should be used when the JTAG TAP controller is required for debugging. Mask */
#define EC_REG_BANK_DEBUG_Enable_DEBUG_PIN_CFG(value) (EC_REG_BANK_DEBUG_Enable_DEBUG_PIN_CFG_Msk & ((value) << EC_REG_BANK_DEBUG_Enable_DEBUG_PIN_CFG_Pos))
#define EC_REG_BANK_DEBUG_Enable_DEBUG_PU_EN_Pos (3)                                            /**< (EC_REG_BANK_DEBUG_Enable) If this bit is set to '1b' internal pull-up resistors are automatically enabled on the appropriate debugging port\n      wires whenever the debug port is enabled (the DEBUG_EN bit in this register is '1b' and the JTAG_RST# pin is high). The setting\n      of DEBUG_PIN_CFG determines which pins have pull-ups enabled when the debug port is enabled. Position */
#define EC_REG_BANK_DEBUG_Enable_DEBUG_PU_EN_Msk (0x1U << EC_REG_BANK_DEBUG_Enable_DEBUG_PU_EN_Pos)  /**< (EC_REG_BANK_DEBUG_Enable) If this bit is set to '1b' internal pull-up resistors are automatically enabled on the appropriate debugging port\n      wires whenever the debug port is enabled (the DEBUG_EN bit in this register is '1b' and the JTAG_RST# pin is high). The setting\n      of DEBUG_PIN_CFG determines which pins have pull-ups enabled when the debug port is enabled. Mask */
#define EC_REG_BANK_DEBUG_Enable_BSP_EN_Pos   (4)                                            /**< (EC_REG_BANK_DEBUG_Enable) This bit sets the boundary scan tap controller accessibility from JTAG port.\n         1= Boundary scan tap controller accessibile through JTAG Port.\n         0= Boundary scan tap controller not accessibile through JTAG Port.\n Position */
#define EC_REG_BANK_DEBUG_Enable_BSP_EN_Msk   (0x1U << EC_REG_BANK_DEBUG_Enable_BSP_EN_Pos)  /**< (EC_REG_BANK_DEBUG_Enable) This bit sets the boundary scan tap controller accessibility from JTAG port.\n         1= Boundary scan tap controller accessibile through JTAG Port.\n         0= Boundary scan tap controller not accessibile through JTAG Port.\n Mask */
#define EC_REG_BANK_DEBUG_Enable_Msk          (0x0000001FUL)                                 /**< (EC_REG_BANK_DEBUG_Enable) Register Mask  */

/* -------- EC_REG_BANK_LOCK : (EC_REG_BANK Offset: 0x24) (R/W 32) Lock Register -------- */

typedef union
{
  struct
  {
    uint32_t TEST:1;                    /**< bit:      0  Test                                          */
    uint32_t VBAT_RAM_LOCK:1;           /**< bit:      1  VBAT RAM LOCK bit.\n         0 = Not Locked.\n         1 = Locked.\n */
    uint32_t VBAT_REG_LOCK:1;           /**< bit:      2  VBAT REG LOCK.\n         0 = Not Locked.\n         1 = Locked.\n */
    uint32_t :29;                       /**< bit:  3..31  Reserved                                      */
  };
  uint32_t w;
} __EC_REG_BANK_LOCK_bits_t;
#define EC_REG_BANK_LOCK_RESETVALUE         (0x00U)                                       /**<  (EC_REG_BANK_LOCK) Lock Register  Reset Value */

#define EC_REG_BANK_LOCK_TEST_Pos             (0)                                            /**< (EC_REG_BANK_LOCK) Test Position */
#define EC_REG_BANK_LOCK_TEST_Msk             (0x1U << EC_REG_BANK_LOCK_TEST_Pos)            /**< (EC_REG_BANK_LOCK) Test Mask */
#define EC_REG_BANK_LOCK_VBAT_RAM_LOCK_Pos    (1)                                            /**< (EC_REG_BANK_LOCK) VBAT RAM LOCK bit.\n         0 = Not Locked.\n         1 = Locked.\n Position */
#define EC_REG_BANK_LOCK_VBAT_RAM_LOCK_Msk    (0x1U << EC_REG_BANK_LOCK_VBAT_RAM_LOCK_Pos)   /**< (EC_REG_BANK_LOCK) VBAT RAM LOCK bit.\n         0 = Not Locked.\n         1 = Locked.\n Mask */
#define EC_REG_BANK_LOCK_VBAT_REG_LOCK_Pos    (2)                                            /**< (EC_REG_BANK_LOCK) VBAT REG LOCK.\n         0 = Not Locked.\n         1 = Locked.\n Position */
#define EC_REG_BANK_LOCK_VBAT_REG_LOCK_Msk    (0x1U << EC_REG_BANK_LOCK_VBAT_REG_LOCK_Pos)   /**< (EC_REG_BANK_LOCK) VBAT REG LOCK.\n         0 = Not Locked.\n         1 = Locked.\n Mask */
#define EC_REG_BANK_LOCK_Msk                  (0x00000007UL)                                 /**< (EC_REG_BANK_LOCK) Register Mask  */

/* -------- EC_REG_BANK_WDT_EVENT_COUNT : (EC_REG_BANK Offset: 0x28) (R/W 32) WDT Event Count [3:0] WDT_COUNT (WDT_COUNT) These EC R/W bits are cleared to 0 on VCC1 POR, but not on a WDT.\n            Note: This field is written by Boot ROM firmware to indicate the number of times a WDT fired before loading a good EC code image. -------- */

typedef union
{
  uint32_t w;
} __EC_REG_BANK_WDT_EVENT_COUNT_bits_t;
#define EC_REG_BANK_WDT_EVENT_COUNT_RESETVALUE (0x00U)                                       /**<  (EC_REG_BANK_WDT_EVENT_COUNT) WDT Event Count [3:0] WDT_COUNT (WDT_COUNT) These EC R/W bits are cleared to 0 on VCC1 POR, but not on a WDT.\n            Note: This field is written by Boot ROM firmware to indicate the number of times a WDT fired before loading a good EC code image.  Reset Value */

#define EC_REG_BANK_WDT_EVENT_COUNT_Msk       (0x00000000UL)                                 /**< (EC_REG_BANK_WDT_EVENT_COUNT) Register Mask  */

/* -------- EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL : (EC_REG_BANK Offset: 0x2c) (R/W 32) AES HASH Byte Swap Control Register. -------- */

typedef union
{
  struct
  {
    uint32_t INPUT_BYTE_SWAP_ENABLE:1;  /**< bit:      0  Used to enable byte swap on a DWORD during AHB read from AES / HASH block: 1=Enable; 0=Disable. */
    uint32_t OUTPUT_BYTE_SWAP_ENABLE:1;  /**< bit:      1  Used to enable byte swap on a DWORD during AHB write from AES / HASH block: 1=Enable; 0=Disable. */
    uint32_t INPUT_BLOCK_SWAP_ENABLE:3;  /**< bit:   2..4  Used to enable word swap on a DWORD during AHB read from AES / HASH block\n      4=Swap 32-bit doublewords in 128-byte blocks\n      3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,\n      0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,...\n      2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,...\n      1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,\n      0x0, 0xC, 0x8, ...\n      0=Disable. */
    uint32_t OUTPUT_BLOCK_SWAP_ENABLE:3;  /**< bit:   5..7  Used to enable word swap on a DWORD during AHB write from AES / HASH block\n      4=Swap 32-bit doublewords in 128-byte blocks\n      3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,\n      0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,...\n      2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,...\n      1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,\n      0x0, 0xC, 0x8, ...\n      0=Disable. */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_bits_t;
#define EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_RESETVALUE (0x00U)                                       /**<  (EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL) AES HASH Byte Swap Control Register.  Reset Value */

#define EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_INPUT_BYTE_SWAP_ENABLE_Pos (0)                                            /**< (EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL) Used to enable byte swap on a DWORD during AHB read from AES / HASH block: 1=Enable; 0=Disable. Position */
#define EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_INPUT_BYTE_SWAP_ENABLE_Msk (0x1U << EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_INPUT_BYTE_SWAP_ENABLE_Pos)  /**< (EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL) Used to enable byte swap on a DWORD during AHB read from AES / HASH block: 1=Enable; 0=Disable. Mask */
#define EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_OUTPUT_BYTE_SWAP_ENABLE_Pos (1)                                            /**< (EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL) Used to enable byte swap on a DWORD during AHB write from AES / HASH block: 1=Enable; 0=Disable. Position */
#define EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_OUTPUT_BYTE_SWAP_ENABLE_Msk (0x1U << EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_OUTPUT_BYTE_SWAP_ENABLE_Pos)  /**< (EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL) Used to enable byte swap on a DWORD during AHB write from AES / HASH block: 1=Enable; 0=Disable. Mask */
#define EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_INPUT_BLOCK_SWAP_ENABLE_Pos (2)                                            /**< (EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL) Used to enable word swap on a DWORD during AHB read from AES / HASH block\n      4=Swap 32-bit doublewords in 128-byte blocks\n      3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,\n      0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,...\n      2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,...\n      1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,\n      0x0, 0xC, 0x8, ...\n      0=Disable. Position */
#define EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_INPUT_BLOCK_SWAP_ENABLE_Msk (0x7U << EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_INPUT_BLOCK_SWAP_ENABLE_Pos)  /**< (EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL) Used to enable word swap on a DWORD during AHB read from AES / HASH block\n      4=Swap 32-bit doublewords in 128-byte blocks\n      3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,\n      0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,...\n      2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,...\n      1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,\n      0x0, 0xC, 0x8, ...\n      0=Disable. Mask */
#define EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_INPUT_BLOCK_SWAP_ENABLE(value) (EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_INPUT_BLOCK_SWAP_ENABLE_Msk & ((value) << EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_INPUT_BLOCK_SWAP_ENABLE_Pos))
#define EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_OUTPUT_BLOCK_SWAP_ENABLE_Pos (5)                                            /**< (EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL) Used to enable word swap on a DWORD during AHB write from AES / HASH block\n      4=Swap 32-bit doublewords in 128-byte blocks\n      3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,\n      0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,...\n      2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,...\n      1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,\n      0x0, 0xC, 0x8, ...\n      0=Disable. Position */
#define EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_OUTPUT_BLOCK_SWAP_ENABLE_Msk (0x7U << EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_OUTPUT_BLOCK_SWAP_ENABLE_Pos)  /**< (EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL) Used to enable word swap on a DWORD during AHB write from AES / HASH block\n      4=Swap 32-bit doublewords in 128-byte blocks\n      3=Swap doublewords in 64-byte blocks. Useful for SHA-256. Bus references issued in the order 0x3C, 0x38, 0x34, 0x30, 0x2C,\n      0x28, 0x24, 0x20, 0x1C, 0x18, 0x14, 0x10, 0xC, 0x8, 0x4, 0x0,...\n      2=Swap doublewords in 16-byte blocks. Useful for AES. Bus references issued in the order 0xC, 0x8, 0x4, 0x0, 0x1C, 0x18,...\n      1=Swap doublewords in 8-byte blocks. Useful for SHA-512, which works on 64-bit words. Bus references issued in the order 0x4,\n      0x0, 0xC, 0x8, ...\n      0=Disable. Mask */
#define EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_OUTPUT_BLOCK_SWAP_ENABLE(value) (EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_OUTPUT_BLOCK_SWAP_ENABLE_Msk & ((value) << EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_OUTPUT_BLOCK_SWAP_ENABLE_Pos))
#define EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_Msk (0x000000FFUL)                                 /**< (EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL) Register Mask  */

/* -------- EC_REG_BANK_PECI_DISABLE : (EC_REG_BANK Offset: 0x40) (R/W 32) PECI Disable -------- */

typedef union
{
  struct
  {
    uint32_t PECI_DISABLE:1;            /**< bit:      0  When this bit is asserted ('1'), it disables the PECI pads to reduce leakage. */
    uint32_t :31;                       /**< bit:  1..31  Reserved                                      */
  };
  uint32_t w;
} __EC_REG_BANK_PECI_DISABLE_bits_t;
#define EC_REG_BANK_PECI_DISABLE_RESETVALUE (0x00U)                                       /**<  (EC_REG_BANK_PECI_DISABLE) PECI Disable  Reset Value */

#define EC_REG_BANK_PECI_DISABLE_PECI_DISABLE_Pos (0)                                            /**< (EC_REG_BANK_PECI_DISABLE) When this bit is asserted ('1'), it disables the PECI pads to reduce leakage. Position */
#define EC_REG_BANK_PECI_DISABLE_PECI_DISABLE_Msk (0x1U << EC_REG_BANK_PECI_DISABLE_PECI_DISABLE_Pos)  /**< (EC_REG_BANK_PECI_DISABLE) When this bit is asserted ('1'), it disables the PECI pads to reduce leakage. Mask */
#define EC_REG_BANK_PECI_DISABLE_Msk          (0x00000001UL)                                 /**< (EC_REG_BANK_PECI_DISABLE) Register Mask  */

/* -------- EC_REG_BANK_STM_REG : (EC_REG_BANK Offset: 0x4c) (R/ 32) This register is a mirror of the Boot Control Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t QA_MODE:1;                 /**< bit:      0  This is the mirror of the QA_MODE (bit 0) of Boot Control Register.\n         This register bit tells BOOT ROM to enter the QA mode.\n */
    uint32_t VLD_MODE:1;                /**< bit:      1  This is the mirror of the Validation MODE (bit 1) of Boot Control Register.\n         This register bit tells BOOT ROM to enter the Validation mode.\n */
    uint32_t BS_STATUS:1;               /**< bit:      2  This register bit tells BOOT ROM about the Boundary Scan Status.\n */
    uint32_t INT_SPI_RECOV:1;           /**< bit:      3  This register bit tells BOOT ROM that SPI FLASH Recovery Mode is entered.\n */
    uint32_t :28;                       /**< bit:  4..31  Reserved                                      */
  };
  uint32_t w;
} __EC_REG_BANK_STM_REG_bits_t;
#define EC_REG_BANK_STM_REG_RESETVALUE      (0x00U)                                       /**<  (EC_REG_BANK_STM_REG) This register is a mirror of the Boot Control Register.\n  Reset Value */

#define EC_REG_BANK_STM_REG_QA_MODE_Pos       (0)                                            /**< (EC_REG_BANK_STM_REG) This is the mirror of the QA_MODE (bit 0) of Boot Control Register.\n         This register bit tells BOOT ROM to enter the QA mode.\n Position */
#define EC_REG_BANK_STM_REG_QA_MODE_Msk       (0x1U << EC_REG_BANK_STM_REG_QA_MODE_Pos)      /**< (EC_REG_BANK_STM_REG) This is the mirror of the QA_MODE (bit 0) of Boot Control Register.\n         This register bit tells BOOT ROM to enter the QA mode.\n Mask */
#define EC_REG_BANK_STM_REG_VLD_MODE_Pos      (1)                                            /**< (EC_REG_BANK_STM_REG) This is the mirror of the Validation MODE (bit 1) of Boot Control Register.\n         This register bit tells BOOT ROM to enter the Validation mode.\n Position */
#define EC_REG_BANK_STM_REG_VLD_MODE_Msk      (0x1U << EC_REG_BANK_STM_REG_VLD_MODE_Pos)     /**< (EC_REG_BANK_STM_REG) This is the mirror of the Validation MODE (bit 1) of Boot Control Register.\n         This register bit tells BOOT ROM to enter the Validation mode.\n Mask */
#define EC_REG_BANK_STM_REG_BS_STATUS_Pos     (2)                                            /**< (EC_REG_BANK_STM_REG) This register bit tells BOOT ROM about the Boundary Scan Status.\n Position */
#define EC_REG_BANK_STM_REG_BS_STATUS_Msk     (0x1U << EC_REG_BANK_STM_REG_BS_STATUS_Pos)    /**< (EC_REG_BANK_STM_REG) This register bit tells BOOT ROM about the Boundary Scan Status.\n Mask */
#define EC_REG_BANK_STM_REG_INT_SPI_RECOV_Pos (3)                                            /**< (EC_REG_BANK_STM_REG) This register bit tells BOOT ROM that SPI FLASH Recovery Mode is entered.\n Position */
#define EC_REG_BANK_STM_REG_INT_SPI_RECOV_Msk (0x1U << EC_REG_BANK_STM_REG_INT_SPI_RECOV_Pos)  /**< (EC_REG_BANK_STM_REG) This register bit tells BOOT ROM that SPI FLASH Recovery Mode is entered.\n Mask */
#define EC_REG_BANK_STM_REG_Msk               (0x0000000FUL)                                 /**< (EC_REG_BANK_STM_REG) Register Mask  */

/* -------- EC_REG_BANK_VCI_FWOVRD : (EC_REG_BANK Offset: 0x50) (R/W 32) This register contains the system shutdown bit programmable by Firmware.\n -------- */

typedef union
{
  struct
  {
    uint32_t VCI_FW_OVRD:1;             /**< bit:      0  This register contains the active low system shutdown bit programmable by Firmware.\n */
    uint32_t :31;                       /**< bit:  1..31  Reserved                                      */
  };
  uint32_t w;
} __EC_REG_BANK_VCI_FWOVRD_bits_t;
#define EC_REG_BANK_VCI_FWOVRD_RESETVALUE   (0x01U)                                       /**<  (EC_REG_BANK_VCI_FWOVRD) This register contains the system shutdown bit programmable by Firmware.\n  Reset Value */

#define EC_REG_BANK_VCI_FWOVRD_VCI_FW_OVRD_Pos (0)                                            /**< (EC_REG_BANK_VCI_FWOVRD) This register contains the active low system shutdown bit programmable by Firmware.\n Position */
#define EC_REG_BANK_VCI_FWOVRD_VCI_FW_OVRD_Msk (0x1U << EC_REG_BANK_VCI_FWOVRD_VCI_FW_OVRD_Pos)  /**< (EC_REG_BANK_VCI_FWOVRD) This register contains the active low system shutdown bit programmable by Firmware.\n Mask */
#define EC_REG_BANK_VCI_FWOVRD_Msk            (0x00000001UL)                                 /**< (EC_REG_BANK_VCI_FWOVRD) Register Mask  */

/* -------- EC_REG_BANK_VTR_RSTBR_STAT : (EC_REG_BANK Offset: 0x54) (R/W 8) This register contains the VTR Reset Status for BOOT ROM.\n -------- */

typedef union
{
  struct
  {
    uint8_t  RST_SYS_STAT:1;            /**< bit:      0  This bit contains the RESET_SYS Status for BOOT ROM usage.\n         1= RESET_SYS event occured.\n         0= RESET_SYS event did not occured.\n         This registe is R/W1C (read / write 1 to clear). */
    uint8_t  WDT_STAT:1;                /**< bit:      1  This bit contains the WDT Event Status for BOOT ROM usage.\n         1= WDT event occured.\n         0= WDT event did not occured.\n         This registe is R/W1C (read / write 1 to clear). */
    uint8_t  :6;                        /**< bit:   2..7  Reserved                                      */
  };
  uint8_t  w;
} __EC_REG_BANK_VTR_RSTBR_STAT_bits_t;
#define EC_REG_BANK_VTR_RSTBR_STAT_RESETVALUE (0x01U)                                       /**<  (EC_REG_BANK_VTR_RSTBR_STAT) This register contains the VTR Reset Status for BOOT ROM.\n  Reset Value */

#define EC_REG_BANK_VTR_RSTBR_STAT_RST_SYS_STAT_Pos (0)                                            /**< (EC_REG_BANK_VTR_RSTBR_STAT) This bit contains the RESET_SYS Status for BOOT ROM usage.\n         1= RESET_SYS event occured.\n         0= RESET_SYS event did not occured.\n         This registe is R/W1C (read / write 1 to clear). Position */
#define EC_REG_BANK_VTR_RSTBR_STAT_RST_SYS_STAT_Msk (0x1U << EC_REG_BANK_VTR_RSTBR_STAT_RST_SYS_STAT_Pos)  /**< (EC_REG_BANK_VTR_RSTBR_STAT) This bit contains the RESET_SYS Status for BOOT ROM usage.\n         1= RESET_SYS event occured.\n         0= RESET_SYS event did not occured.\n         This registe is R/W1C (read / write 1 to clear). Mask */
#define EC_REG_BANK_VTR_RSTBR_STAT_WDT_STAT_Pos (1)                                            /**< (EC_REG_BANK_VTR_RSTBR_STAT) This bit contains the WDT Event Status for BOOT ROM usage.\n         1= WDT event occured.\n         0= WDT event did not occured.\n         This registe is R/W1C (read / write 1 to clear). Position */
#define EC_REG_BANK_VTR_RSTBR_STAT_WDT_STAT_Msk (0x1U << EC_REG_BANK_VTR_RSTBR_STAT_WDT_STAT_Pos)  /**< (EC_REG_BANK_VTR_RSTBR_STAT) This bit contains the WDT Event Status for BOOT ROM usage.\n         1= WDT event occured.\n         0= WDT event did not occured.\n         This registe is R/W1C (read / write 1 to clear). Mask */
#define EC_REG_BANK_VTR_RSTBR_STAT_Msk        (0x00000003UL)                                 /**< (EC_REG_BANK_VTR_RSTBR_STAT) Register Mask  */

/* -------- EC_REG_BANK_CRYPTO_SOFT_RESET : (EC_REG_BANK Offset: 0x5c) (R/W 32) System Shutdown Reset -------- */

typedef union
{
  struct
  {
    uint32_t RNG_SOFT_RESET:1;          /**< bit:      0  When this bit is asserted ('1'), the Random Number Generator block is reset. */
    uint32_t PUBLIC_KEY_SOFT_RESET:1;   /**< bit:      1  When this bit is asserted ('1'), the Public Key block is reset. */
    uint32_t AES_HASH_SOFT_RESET:1;     /**< bit:      2  When this bit is asserted ('1'), the AES and Hash blocks are reset. */
    uint32_t :29;                       /**< bit:  3..31  Reserved                                      */
  };
  uint32_t w;
} __EC_REG_BANK_CRYPTO_SOFT_RESET_bits_t;
#define EC_REG_BANK_CRYPTO_SOFT_RESET_RESETVALUE (0x00U)                                       /**<  (EC_REG_BANK_CRYPTO_SOFT_RESET) System Shutdown Reset  Reset Value */

#define EC_REG_BANK_CRYPTO_SOFT_RESET_RNG_SOFT_RESET_Pos (0)                                            /**< (EC_REG_BANK_CRYPTO_SOFT_RESET) When this bit is asserted ('1'), the Random Number Generator block is reset. Position */
#define EC_REG_BANK_CRYPTO_SOFT_RESET_RNG_SOFT_RESET_Msk (0x1U << EC_REG_BANK_CRYPTO_SOFT_RESET_RNG_SOFT_RESET_Pos)  /**< (EC_REG_BANK_CRYPTO_SOFT_RESET) When this bit is asserted ('1'), the Random Number Generator block is reset. Mask */
#define EC_REG_BANK_CRYPTO_SOFT_RESET_PUBLIC_KEY_SOFT_RESET_Pos (1)                                            /**< (EC_REG_BANK_CRYPTO_SOFT_RESET) When this bit is asserted ('1'), the Public Key block is reset. Position */
#define EC_REG_BANK_CRYPTO_SOFT_RESET_PUBLIC_KEY_SOFT_RESET_Msk (0x1U << EC_REG_BANK_CRYPTO_SOFT_RESET_PUBLIC_KEY_SOFT_RESET_Pos)  /**< (EC_REG_BANK_CRYPTO_SOFT_RESET) When this bit is asserted ('1'), the Public Key block is reset. Mask */
#define EC_REG_BANK_CRYPTO_SOFT_RESET_AES_HASH_SOFT_RESET_Pos (2)                                            /**< (EC_REG_BANK_CRYPTO_SOFT_RESET) When this bit is asserted ('1'), the AES and Hash blocks are reset. Position */
#define EC_REG_BANK_CRYPTO_SOFT_RESET_AES_HASH_SOFT_RESET_Msk (0x1U << EC_REG_BANK_CRYPTO_SOFT_RESET_AES_HASH_SOFT_RESET_Pos)  /**< (EC_REG_BANK_CRYPTO_SOFT_RESET) When this bit is asserted ('1'), the AES and Hash blocks are reset. Mask */
#define EC_REG_BANK_CRYPTO_SOFT_RESET_Msk     (0x00000007UL)                                 /**< (EC_REG_BANK_CRYPTO_SOFT_RESET) Register Mask  */

/* -------- EC_REG_BANK_GPIO_BANK_POWER : (EC_REG_BANK Offset: 0x64) (R/W 32) GPIO Bank Power Register -------- */

typedef union
{
  struct
  {
    uint32_t TEST:1;                    /**< bit:      0  This bit must be programmed to 0h for proper operation of the device.\n */
    uint32_t VTR_LEVEL2:1;              /**< bit:      1  Voltage value on VTR2. This bit is set by Firmware after a VTR Power On Reset.\n         It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted.\n         Write access is determined by bit 7.\n      1=VTR2 is powered by 1.8V\n      0=VTR2 is powered by 3.3V. */
    uint32_t VTR_LEVEL3:1;              /**< bit:      2  Voltage value on VTR3. This bit is set by hardware after a VTR Power On Reset, but may be overridden by software.\n      It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted. Write access is determined by bit 7.\n      1=VTR3 is powered by 1.8V\n      0=VTR3 is powered by 3.3V. */
    uint32_t :4;                        /**< bit:   3..6  Reserved                                      */
    uint32_t GPIO_BANK_POWER_LOCK:1;    /**< bit:      7  GPIO Bank Power Lock. 0: VTR_LEVEL bits[2:0] and GPIO Bank Power Lock bit are R/W\n      1 = VTR_LEVEL bits[2:0] and GPIO Bank Power Lock bit are Read Only. */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  struct
  {
    uint32_t :1;                        /**< bit:      0  Reserved                                      */
    uint32_t VTR_LEVEL:2;               /**< bit:   1..2  Voltage value on VTR2. This bit is set by Firmware after a VTR Power On Reset.\n         It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted.\n         Write access is determined by bit 7.\n      x=VTR2 is powered by x.8V\n      x=VTR2 is powered by 3.3V. */
    uint32_t :29;                       /**< bit:  3..31  Reserved                                      */
  };
  uint32_t w;
} __EC_REG_BANK_GPIO_BANK_POWER_bits_t;
#define EC_REG_BANK_GPIO_BANK_POWER_RESETVALUE (0x00U)                                       /**<  (EC_REG_BANK_GPIO_BANK_POWER) GPIO Bank Power Register  Reset Value */

#define EC_REG_BANK_GPIO_BANK_POWER_TEST_Pos  (0)                                            /**< (EC_REG_BANK_GPIO_BANK_POWER) This bit must be programmed to 0h for proper operation of the device.\n Position */
#define EC_REG_BANK_GPIO_BANK_POWER_TEST_Msk  (0x1U << EC_REG_BANK_GPIO_BANK_POWER_TEST_Pos)  /**< (EC_REG_BANK_GPIO_BANK_POWER) This bit must be programmed to 0h for proper operation of the device.\n Mask */
#define EC_REG_BANK_GPIO_BANK_POWER_VTR_LEVEL2_Pos (1)                                            /**< (EC_REG_BANK_GPIO_BANK_POWER) Voltage value on VTR2. This bit is set by Firmware after a VTR Power On Reset.\n         It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted.\n         Write access is determined by bit 7.\n      1=VTR2 is powered by 1.8V\n      0=VTR2 is powered by 3.3V. Position */
#define EC_REG_BANK_GPIO_BANK_POWER_VTR_LEVEL2_Msk (0x1U << EC_REG_BANK_GPIO_BANK_POWER_VTR_LEVEL2_Pos)  /**< (EC_REG_BANK_GPIO_BANK_POWER) Voltage value on VTR2. This bit is set by Firmware after a VTR Power On Reset.\n         It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted.\n         Write access is determined by bit 7.\n      1=VTR2 is powered by 1.8V\n      0=VTR2 is powered by 3.3V. Mask */
#define EC_REG_BANK_GPIO_BANK_POWER_VTR_LEVEL3_Pos (2)                                            /**< (EC_REG_BANK_GPIO_BANK_POWER) Voltage value on VTR3. This bit is set by hardware after a VTR Power On Reset, but may be overridden by software.\n      It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted. Write access is determined by bit 7.\n      1=VTR3 is powered by 1.8V\n      0=VTR3 is powered by 3.3V. Position */
#define EC_REG_BANK_GPIO_BANK_POWER_VTR_LEVEL3_Msk (0x1U << EC_REG_BANK_GPIO_BANK_POWER_VTR_LEVEL3_Pos)  /**< (EC_REG_BANK_GPIO_BANK_POWER) Voltage value on VTR3. This bit is set by hardware after a VTR Power On Reset, but may be overridden by software.\n      It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted. Write access is determined by bit 7.\n      1=VTR3 is powered by 1.8V\n      0=VTR3 is powered by 3.3V. Mask */
#define EC_REG_BANK_GPIO_BANK_POWER_GPIO_BANK_POWER_LOCK_Pos (7)                                            /**< (EC_REG_BANK_GPIO_BANK_POWER) GPIO Bank Power Lock. 0: VTR_LEVEL bits[2:0] and GPIO Bank Power Lock bit are R/W\n      1 = VTR_LEVEL bits[2:0] and GPIO Bank Power Lock bit are Read Only. Position */
#define EC_REG_BANK_GPIO_BANK_POWER_GPIO_BANK_POWER_LOCK_Msk (0x1U << EC_REG_BANK_GPIO_BANK_POWER_GPIO_BANK_POWER_LOCK_Pos)  /**< (EC_REG_BANK_GPIO_BANK_POWER) GPIO Bank Power Lock. 0: VTR_LEVEL bits[2:0] and GPIO Bank Power Lock bit are R/W\n      1 = VTR_LEVEL bits[2:0] and GPIO Bank Power Lock bit are Read Only. Mask */
#define EC_REG_BANK_GPIO_BANK_POWER_Msk       (0x00000087UL)                                 /**< (EC_REG_BANK_GPIO_BANK_POWER) Register Mask  */
#define EC_REG_BANK_GPIO_BANK_POWER_VTR_LEVEL_Pos (1)                                            /**< (EC_REG_BANK_GPIO_BANK_POWER Position) Voltage value on VTR2. This bit is set by Firmware after a VTR Power On Reset.\n         It must be set by software if the VTR power rail is not active when RESET_SYS is de-asserted.\n         Write access is determined by bit 7.\n      x=VTR2 is powered by x.8V\n      x=VTR2 is powered by 3.3V. */
#define EC_REG_BANK_GPIO_BANK_POWER_VTR_LEVEL_Msk (0x3U << EC_REG_BANK_GPIO_BANK_POWER_VTR_LEVEL_Pos)  /**< (EC_REG_BANK_GPIO_BANK_POWER Mask) VTR_LEVEL */
#define EC_REG_BANK_GPIO_BANK_POWER_VTR_LEVEL(value) (EC_REG_BANK_GPIO_BANK_POWER_VTR_LEVEL_Msk & ((value) << EC_REG_BANK_GPIO_BANK_POWER_VTR_LEVEL_Pos))

/* -------- EC_REG_BANK_JTAG_MASTER_CFG : (EC_REG_BANK Offset: 0x70) (R/W 32) JTAG Master Configuration Register -------- */

typedef union
{
  struct
  {
    uint32_t JTM_CLK:3;                 /**< bit:   0..2  This field determines the JTAG Master clock rate, derived from the 48MHz master clock.\n      7=375KHz; 6=750KHz; 5=1.5Mhz; 4=3Mhz; 3=6Mhz; 2=12Mhz; 1=24MHz; 0=Reserved. */
    uint32_t MASTER_SLAVE:1;            /**< bit:      3  This bit controls the direction of the JTAG port. 1=The JTAG Port is configured as a Master\n      0=The JTAG Port is configures as a Slave. */
    uint32_t :28;                       /**< bit:  4..31  Reserved                                      */
  };
  uint32_t w;
} __EC_REG_BANK_JTAG_MASTER_CFG_bits_t;
#define EC_REG_BANK_JTAG_MASTER_CFG_RESETVALUE (0x03U)                                       /**<  (EC_REG_BANK_JTAG_MASTER_CFG) JTAG Master Configuration Register  Reset Value */

#define EC_REG_BANK_JTAG_MASTER_CFG_JTM_CLK_Pos (0)                                            /**< (EC_REG_BANK_JTAG_MASTER_CFG) This field determines the JTAG Master clock rate, derived from the 48MHz master clock.\n      7=375KHz; 6=750KHz; 5=1.5Mhz; 4=3Mhz; 3=6Mhz; 2=12Mhz; 1=24MHz; 0=Reserved. Position */
#define EC_REG_BANK_JTAG_MASTER_CFG_JTM_CLK_Msk (0x7U << EC_REG_BANK_JTAG_MASTER_CFG_JTM_CLK_Pos)  /**< (EC_REG_BANK_JTAG_MASTER_CFG) This field determines the JTAG Master clock rate, derived from the 48MHz master clock.\n      7=375KHz; 6=750KHz; 5=1.5Mhz; 4=3Mhz; 3=6Mhz; 2=12Mhz; 1=24MHz; 0=Reserved. Mask */
#define EC_REG_BANK_JTAG_MASTER_CFG_JTM_CLK(value) (EC_REG_BANK_JTAG_MASTER_CFG_JTM_CLK_Msk & ((value) << EC_REG_BANK_JTAG_MASTER_CFG_JTM_CLK_Pos))
#define EC_REG_BANK_JTAG_MASTER_CFG_MASTER_SLAVE_Pos (3)                                            /**< (EC_REG_BANK_JTAG_MASTER_CFG) This bit controls the direction of the JTAG port. 1=The JTAG Port is configured as a Master\n      0=The JTAG Port is configures as a Slave. Position */
#define EC_REG_BANK_JTAG_MASTER_CFG_MASTER_SLAVE_Msk (0x1U << EC_REG_BANK_JTAG_MASTER_CFG_MASTER_SLAVE_Pos)  /**< (EC_REG_BANK_JTAG_MASTER_CFG) This bit controls the direction of the JTAG port. 1=The JTAG Port is configured as a Master\n      0=The JTAG Port is configures as a Slave. Mask */
#define EC_REG_BANK_JTAG_MASTER_CFG_Msk       (0x0000000FUL)                                 /**< (EC_REG_BANK_JTAG_MASTER_CFG) Register Mask  */

/* -------- EC_REG_BANK_JTAG_MASTER_STS : (EC_REG_BANK Offset: 0x74) (R/ 32) JTAG Master Status Register -------- */

typedef union
{
  struct
  {
    uint32_t JTM_DONE:1;                /**< bit:      0  This bit is set to '1b' when the JTAG Master Command Register is written. It becomes '0b' when shifting has completed.\n      Software can poll this bit to determine when a command has completed and it is therefore safe to remove the data in the JTAG Master TDO\n      Register and load new data into the JTAG Master TMS Register and the JTAG Master TDI Register. */
    uint32_t :31;                       /**< bit:  1..31  Reserved                                      */
  };
  uint32_t w;
} __EC_REG_BANK_JTAG_MASTER_STS_bits_t;
#define EC_REG_BANK_JTAG_MASTER_STS_RESETVALUE (0x00U)                                       /**<  (EC_REG_BANK_JTAG_MASTER_STS) JTAG Master Status Register  Reset Value */

#define EC_REG_BANK_JTAG_MASTER_STS_JTM_DONE_Pos (0)                                            /**< (EC_REG_BANK_JTAG_MASTER_STS) This bit is set to '1b' when the JTAG Master Command Register is written. It becomes '0b' when shifting has completed.\n      Software can poll this bit to determine when a command has completed and it is therefore safe to remove the data in the JTAG Master TDO\n      Register and load new data into the JTAG Master TMS Register and the JTAG Master TDI Register. Position */
#define EC_REG_BANK_JTAG_MASTER_STS_JTM_DONE_Msk (0x1U << EC_REG_BANK_JTAG_MASTER_STS_JTM_DONE_Pos)  /**< (EC_REG_BANK_JTAG_MASTER_STS) This bit is set to '1b' when the JTAG Master Command Register is written. It becomes '0b' when shifting has completed.\n      Software can poll this bit to determine when a command has completed and it is therefore safe to remove the data in the JTAG Master TDO\n      Register and load new data into the JTAG Master TMS Register and the JTAG Master TDI Register. Mask */
#define EC_REG_BANK_JTAG_MASTER_STS_Msk       (0x00000001UL)                                 /**< (EC_REG_BANK_JTAG_MASTER_STS) Register Mask  */

/* -------- EC_REG_BANK_JTAG_MASTER_TDO : (EC_REG_BANK Offset: 0x78) (R/W 32) JTAG Master TDO Register -------- */

typedef union
{
  struct
  {
    uint32_t JTM_TDO:32;                /**< bit:  0..31  When the JTAG Master Command Register is written, from 1 to 32 bits are shifted into this register, starting with bit 0,\n      from the JTAG_TDO pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. */
  };
  uint32_t w;
} __EC_REG_BANK_JTAG_MASTER_TDO_bits_t;
#define EC_REG_BANK_JTAG_MASTER_TDO_RESETVALUE (0x00U)                                       /**<  (EC_REG_BANK_JTAG_MASTER_TDO) JTAG Master TDO Register  Reset Value */

#define EC_REG_BANK_JTAG_MASTER_TDO_JTM_TDO_Pos (0)                                            /**< (EC_REG_BANK_JTAG_MASTER_TDO) When the JTAG Master Command Register is written, from 1 to 32 bits are shifted into this register, starting with bit 0,\n      from the JTAG_TDO pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. Position */
#define EC_REG_BANK_JTAG_MASTER_TDO_JTM_TDO_Msk (0xFFFFFFFFU << EC_REG_BANK_JTAG_MASTER_TDO_JTM_TDO_Pos)  /**< (EC_REG_BANK_JTAG_MASTER_TDO) When the JTAG Master Command Register is written, from 1 to 32 bits are shifted into this register, starting with bit 0,\n      from the JTAG_TDO pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. Mask */
#define EC_REG_BANK_JTAG_MASTER_TDO_JTM_TDO(value) (EC_REG_BANK_JTAG_MASTER_TDO_JTM_TDO_Msk & ((value) << EC_REG_BANK_JTAG_MASTER_TDO_JTM_TDO_Pos))
#define EC_REG_BANK_JTAG_MASTER_TDO_Msk       (0xFFFFFFFFUL)                                 /**< (EC_REG_BANK_JTAG_MASTER_TDO) Register Mask  */

/* -------- EC_REG_BANK_JTAG_MASTER_TDI : (EC_REG_BANK Offset: 0x7c) (R/W 32) JTAG Master TDI Register -------- */

typedef union
{
  struct
  {
    uint32_t JTM_TDI:32;                /**< bit:  0..31  When the JTAG Master Command Register is written, from 1 to 32 bits are shifted out of this register, starting with bit 0,\n      onto the JTAG_TDI pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. */
  };
  uint32_t w;
} __EC_REG_BANK_JTAG_MASTER_TDI_bits_t;
#define EC_REG_BANK_JTAG_MASTER_TDI_RESETVALUE (0x00U)                                       /**<  (EC_REG_BANK_JTAG_MASTER_TDI) JTAG Master TDI Register  Reset Value */

#define EC_REG_BANK_JTAG_MASTER_TDI_JTM_TDI_Pos (0)                                            /**< (EC_REG_BANK_JTAG_MASTER_TDI) When the JTAG Master Command Register is written, from 1 to 32 bits are shifted out of this register, starting with bit 0,\n      onto the JTAG_TDI pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. Position */
#define EC_REG_BANK_JTAG_MASTER_TDI_JTM_TDI_Msk (0xFFFFFFFFU << EC_REG_BANK_JTAG_MASTER_TDI_JTM_TDI_Pos)  /**< (EC_REG_BANK_JTAG_MASTER_TDI) When the JTAG Master Command Register is written, from 1 to 32 bits are shifted out of this register, starting with bit 0,\n      onto the JTAG_TDI pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. Mask */
#define EC_REG_BANK_JTAG_MASTER_TDI_JTM_TDI(value) (EC_REG_BANK_JTAG_MASTER_TDI_JTM_TDI_Msk & ((value) << EC_REG_BANK_JTAG_MASTER_TDI_JTM_TDI_Pos))
#define EC_REG_BANK_JTAG_MASTER_TDI_Msk       (0xFFFFFFFFUL)                                 /**< (EC_REG_BANK_JTAG_MASTER_TDI) Register Mask  */

/* -------- EC_REG_BANK_JTAG_MASTER_TMS : (EC_REG_BANK Offset: 0x80) (R/W 32) JTAG Master TMS Register -------- */

typedef union
{
  struct
  {
    uint32_t JTM_TMS:32;                /**< bit:  0..31  When the JTAG Master Command Register is written, from 1 to 32 bits are shifted out of this register, starting with bit 0,\n      onto the JTAG_TMS pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. */
  };
  uint32_t w;
} __EC_REG_BANK_JTAG_MASTER_TMS_bits_t;
#define EC_REG_BANK_JTAG_MASTER_TMS_RESETVALUE (0x00U)                                       /**<  (EC_REG_BANK_JTAG_MASTER_TMS) JTAG Master TMS Register  Reset Value */

#define EC_REG_BANK_JTAG_MASTER_TMS_JTM_TMS_Pos (0)                                            /**< (EC_REG_BANK_JTAG_MASTER_TMS) When the JTAG Master Command Register is written, from 1 to 32 bits are shifted out of this register, starting with bit 0,\n      onto the JTAG_TMS pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. Position */
#define EC_REG_BANK_JTAG_MASTER_TMS_JTM_TMS_Msk (0xFFFFFFFFU << EC_REG_BANK_JTAG_MASTER_TMS_JTM_TMS_Pos)  /**< (EC_REG_BANK_JTAG_MASTER_TMS) When the JTAG Master Command Register is written, from 1 to 32 bits are shifted out of this register, starting with bit 0,\n      onto the JTAG_TMS pin. Shifting is at the rate determined by the JTM_CLK field in the JTAG Master Configuration Register. Mask */
#define EC_REG_BANK_JTAG_MASTER_TMS_JTM_TMS(value) (EC_REG_BANK_JTAG_MASTER_TMS_JTM_TMS_Msk & ((value) << EC_REG_BANK_JTAG_MASTER_TMS_JTM_TMS_Pos))
#define EC_REG_BANK_JTAG_MASTER_TMS_Msk       (0xFFFFFFFFUL)                                 /**< (EC_REG_BANK_JTAG_MASTER_TMS) Register Mask  */

/* -------- EC_REG_BANK_JTAG_MASTER_CMD : (EC_REG_BANK Offset: 0x84) (R/W 32) JTAG Master Command Register -------- */

typedef union
{
  struct
  {
    uint32_t JTM_COUNT:5;               /**< bit:   0..4  If the JTAG Port is configured as a Master, writing this register starts clocking and shifting on the JTAG port. The JTAG\n      Master port will shift JTM_COUNT+1 times, so writing a '0h' will shift 1 bit, and writing '31h' will shift 32 bits. The signal JTAG_CLK\n      will cycle JTM_COUNT+1 times. The contents of the JTAG Master TMS Register and the JTAG Master TDI Register will be shifted out on\n      the falling edge of JTAG_CLK and the.JTAG Master TDO Register will get shifted in on the rising edge of JTAG_CLK.\n      If the JTAG Port is configured as a Slave, writing this register has no effect. */
    uint32_t :27;                       /**< bit:  5..31  Reserved                                      */
  };
  uint32_t w;
} __EC_REG_BANK_JTAG_MASTER_CMD_bits_t;
#define EC_REG_BANK_JTAG_MASTER_CMD_RESETVALUE (0x00U)                                       /**<  (EC_REG_BANK_JTAG_MASTER_CMD) JTAG Master Command Register  Reset Value */

#define EC_REG_BANK_JTAG_MASTER_CMD_JTM_COUNT_Pos (0)                                            /**< (EC_REG_BANK_JTAG_MASTER_CMD) If the JTAG Port is configured as a Master, writing this register starts clocking and shifting on the JTAG port. The JTAG\n      Master port will shift JTM_COUNT+1 times, so writing a '0h' will shift 1 bit, and writing '31h' will shift 32 bits. The signal JTAG_CLK\n      will cycle JTM_COUNT+1 times. The contents of the JTAG Master TMS Register and the JTAG Master TDI Register will be shifted out on\n      the falling edge of JTAG_CLK and the.JTAG Master TDO Register will get shifted in on the rising edge of JTAG_CLK.\n      If the JTAG Port is configured as a Slave, writing this register has no effect. Position */
#define EC_REG_BANK_JTAG_MASTER_CMD_JTM_COUNT_Msk (0x1FU << EC_REG_BANK_JTAG_MASTER_CMD_JTM_COUNT_Pos)  /**< (EC_REG_BANK_JTAG_MASTER_CMD) If the JTAG Port is configured as a Master, writing this register starts clocking and shifting on the JTAG port. The JTAG\n      Master port will shift JTM_COUNT+1 times, so writing a '0h' will shift 1 bit, and writing '31h' will shift 32 bits. The signal JTAG_CLK\n      will cycle JTM_COUNT+1 times. The contents of the JTAG Master TMS Register and the JTAG Master TDI Register will be shifted out on\n      the falling edge of JTAG_CLK and the.JTAG Master TDO Register will get shifted in on the rising edge of JTAG_CLK.\n      If the JTAG Port is configured as a Slave, writing this register has no effect. Mask */
#define EC_REG_BANK_JTAG_MASTER_CMD_JTM_COUNT(value) (EC_REG_BANK_JTAG_MASTER_CMD_JTM_COUNT_Msk & ((value) << EC_REG_BANK_JTAG_MASTER_CMD_JTM_COUNT_Pos))
#define EC_REG_BANK_JTAG_MASTER_CMD_Msk       (0x0000001FUL)                                 /**< (EC_REG_BANK_JTAG_MASTER_CMD) Register Mask  */

/* -------- EC_REG_BANK_ANALOG_COMPCTRL : (EC_REG_BANK Offset: 0x94) (R/W 8) Comparator Enable -------- */

typedef union
{
  struct
  {
    uint8_t  COMP0ENABLE:1;             /**< bit:      0  Comparator 0 Enable         0: Disable Comparator for operation         1: Enable Comparator operation. */
    uint8_t  :1;                        /**< bit:      1  Reserved                                      */
    uint8_t  CONF0LCK:1;                /**< bit:      2  Comparator 0 Configuration Locked         0: Configuration Not Locked. Bits[2,0] are Read-Write         1: Configuration Locked. Bits[2,0] are Read-Only                  Note: If the CMP_STRAP0 Pin = 1 the Boot ROM writes this bit. Once it is written         this bit becomes a read-only bit. */
    uint8_t  :1;                        /**< bit:      3  Reserved                                      */
    uint8_t  COMP1ENABLE:1;             /**< bit:      4  Comparator 1 Enable         0: Disable Comparator for operation         1: Enable Comparator operation. */
    uint8_t  :3;                        /**< bit:   5..7  Reserved                                      */
  };
  uint8_t  w;
} __EC_REG_BANK_ANALOG_COMPCTRL_bits_t;
#define EC_REG_BANK_ANALOG_COMPCTRL_RESETVALUE (0x00U)                                       /**<  (EC_REG_BANK_ANALOG_COMPCTRL) Comparator Enable  Reset Value */

#define EC_REG_BANK_ANALOG_COMPCTRL_COMP0ENABLE_Pos (0)                                            /**< (EC_REG_BANK_ANALOG_COMPCTRL) Comparator 0 Enable         0: Disable Comparator for operation         1: Enable Comparator operation. Position */
#define EC_REG_BANK_ANALOG_COMPCTRL_COMP0ENABLE_Msk (0x1U << EC_REG_BANK_ANALOG_COMPCTRL_COMP0ENABLE_Pos)  /**< (EC_REG_BANK_ANALOG_COMPCTRL) Comparator 0 Enable         0: Disable Comparator for operation         1: Enable Comparator operation. Mask */
#define EC_REG_BANK_ANALOG_COMPCTRL_CONF0LCK_Pos (2)                                            /**< (EC_REG_BANK_ANALOG_COMPCTRL) Comparator 0 Configuration Locked         0: Configuration Not Locked. Bits[2,0] are Read-Write         1: Configuration Locked. Bits[2,0] are Read-Only                  Note: If the CMP_STRAP0 Pin = 1 the Boot ROM writes this bit. Once it is written         this bit becomes a read-only bit. Position */
#define EC_REG_BANK_ANALOG_COMPCTRL_CONF0LCK_Msk (0x1U << EC_REG_BANK_ANALOG_COMPCTRL_CONF0LCK_Pos)  /**< (EC_REG_BANK_ANALOG_COMPCTRL) Comparator 0 Configuration Locked         0: Configuration Not Locked. Bits[2,0] are Read-Write         1: Configuration Locked. Bits[2,0] are Read-Only                  Note: If the CMP_STRAP0 Pin = 1 the Boot ROM writes this bit. Once it is written         this bit becomes a read-only bit. Mask */
#define EC_REG_BANK_ANALOG_COMPCTRL_COMP1ENABLE_Pos (4)                                            /**< (EC_REG_BANK_ANALOG_COMPCTRL) Comparator 1 Enable         0: Disable Comparator for operation         1: Enable Comparator operation. Position */
#define EC_REG_BANK_ANALOG_COMPCTRL_COMP1ENABLE_Msk (0x1U << EC_REG_BANK_ANALOG_COMPCTRL_COMP1ENABLE_Pos)  /**< (EC_REG_BANK_ANALOG_COMPCTRL) Comparator 1 Enable         0: Disable Comparator for operation         1: Enable Comparator operation. Mask */
#define EC_REG_BANK_ANALOG_COMPCTRL_Msk       (0x00000015UL)                                 /**< (EC_REG_BANK_ANALOG_COMPCTRL) Register Mask  */

/* -------- EC_REG_BANK_ANLG_COM_SLEEPCTRL : (EC_REG_BANK Offset: 0x98) (R/W 8) Analog Comparator Sleep Control Register -------- */

typedef union
{
  struct
  {
    uint8_t  COMP0SLEEP_EN:1;           /**< bit:      0  Comparator 0 Deep Sleep Enable.\n         0 = Comparator Deep Sleep Disable.\n         1 = Comparator Deep Sleep Enable.\n         Note: If the CMP_STRAP0 Pin = 1 the Boot ROM writes this bit. Once it is written \n         this bit becomes a read-only bit.\n */
    uint8_t  COMP1SLEEP_EN:1;           /**< bit:      1  Comparator 1 Deep Sleep Enable.\n         0 = Comparator Deep Sleep Disable.\n         1 = Comparator Deep Sleep Enable.\n */
    uint8_t  :6;                        /**< bit:   2..7  Reserved                                      */
  };
  uint8_t  w;
} __EC_REG_BANK_ANLG_COM_SLEEPCTRL_bits_t;
#define EC_REG_BANK_ANLG_COM_SLEEPCTRL_RESETVALUE (0x00U)                                       /**<  (EC_REG_BANK_ANLG_COM_SLEEPCTRL) Analog Comparator Sleep Control Register  Reset Value */

#define EC_REG_BANK_ANLG_COM_SLEEPCTRL_COMP0SLEEP_EN_Pos (0)                                            /**< (EC_REG_BANK_ANLG_COM_SLEEPCTRL) Comparator 0 Deep Sleep Enable.\n         0 = Comparator Deep Sleep Disable.\n         1 = Comparator Deep Sleep Enable.\n         Note: If the CMP_STRAP0 Pin = 1 the Boot ROM writes this bit. Once it is written \n         this bit becomes a read-only bit.\n Position */
#define EC_REG_BANK_ANLG_COM_SLEEPCTRL_COMP0SLEEP_EN_Msk (0x1U << EC_REG_BANK_ANLG_COM_SLEEPCTRL_COMP0SLEEP_EN_Pos)  /**< (EC_REG_BANK_ANLG_COM_SLEEPCTRL) Comparator 0 Deep Sleep Enable.\n         0 = Comparator Deep Sleep Disable.\n         1 = Comparator Deep Sleep Enable.\n         Note: If the CMP_STRAP0 Pin = 1 the Boot ROM writes this bit. Once it is written \n         this bit becomes a read-only bit.\n Mask */
#define EC_REG_BANK_ANLG_COM_SLEEPCTRL_COMP1SLEEP_EN_Pos (1)                                            /**< (EC_REG_BANK_ANLG_COM_SLEEPCTRL) Comparator 1 Deep Sleep Enable.\n         0 = Comparator Deep Sleep Disable.\n         1 = Comparator Deep Sleep Enable.\n Position */
#define EC_REG_BANK_ANLG_COM_SLEEPCTRL_COMP1SLEEP_EN_Msk (0x1U << EC_REG_BANK_ANLG_COM_SLEEPCTRL_COMP1SLEEP_EN_Pos)  /**< (EC_REG_BANK_ANLG_COM_SLEEPCTRL) Comparator 1 Deep Sleep Enable.\n         0 = Comparator Deep Sleep Disable.\n         1 = Comparator Deep Sleep Enable.\n Mask */
#define EC_REG_BANK_ANLG_COM_SLEEPCTRL_Msk    (0x00000003UL)                                 /**< (EC_REG_BANK_ANLG_COM_SLEEPCTRL) Register Mask  */

/* -------- EC_REG_BANK_BROM_SCRATCH0 : (EC_REG_BANK Offset: 0x180) (R/W 32) BOOT ROM Scratch 0 Register -------- */

typedef union
{
  struct
  {
    uint32_t SCRATCH0:32;               /**< bit:  0..31  This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. */
  };
  uint32_t w;
} __EC_REG_BANK_BROM_SCRATCH0_bits_t;
#define EC_REG_BANK_BROM_SCRATCH0_RESETVALUE (0x00U)                                       /**<  (EC_REG_BANK_BROM_SCRATCH0) BOOT ROM Scratch 0 Register  Reset Value */

#define EC_REG_BANK_BROM_SCRATCH0_SCRATCH0_Pos (0)                                            /**< (EC_REG_BANK_BROM_SCRATCH0) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define EC_REG_BANK_BROM_SCRATCH0_SCRATCH0_Msk (0xFFFFFFFFU << EC_REG_BANK_BROM_SCRATCH0_SCRATCH0_Pos)  /**< (EC_REG_BANK_BROM_SCRATCH0) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define EC_REG_BANK_BROM_SCRATCH0_SCRATCH0(value) (EC_REG_BANK_BROM_SCRATCH0_SCRATCH0_Msk & ((value) << EC_REG_BANK_BROM_SCRATCH0_SCRATCH0_Pos))
#define EC_REG_BANK_BROM_SCRATCH0_Msk         (0xFFFFFFFFUL)                                 /**< (EC_REG_BANK_BROM_SCRATCH0) Register Mask  */

/* -------- EC_REG_BANK_BROM_SCRATCH1 : (EC_REG_BANK Offset: 0x184) (R/W 32) BOOT ROM Scratch 1 Register -------- */

typedef union
{
  struct
  {
    uint32_t SCRATCH0:32;               /**< bit:  0..31  This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. */
  };
  uint32_t w;
} __EC_REG_BANK_BROM_SCRATCH1_bits_t;
#define EC_REG_BANK_BROM_SCRATCH1_RESETVALUE (0x00U)                                       /**<  (EC_REG_BANK_BROM_SCRATCH1) BOOT ROM Scratch 1 Register  Reset Value */

#define EC_REG_BANK_BROM_SCRATCH1_SCRATCH0_Pos (0)                                            /**< (EC_REG_BANK_BROM_SCRATCH1) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define EC_REG_BANK_BROM_SCRATCH1_SCRATCH0_Msk (0xFFFFFFFFU << EC_REG_BANK_BROM_SCRATCH1_SCRATCH0_Pos)  /**< (EC_REG_BANK_BROM_SCRATCH1) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define EC_REG_BANK_BROM_SCRATCH1_SCRATCH0(value) (EC_REG_BANK_BROM_SCRATCH1_SCRATCH0_Msk & ((value) << EC_REG_BANK_BROM_SCRATCH1_SCRATCH0_Pos))
#define EC_REG_BANK_BROM_SCRATCH1_Msk         (0xFFFFFFFFUL)                                 /**< (EC_REG_BANK_BROM_SCRATCH1) Register Mask  */

/* -------- EC_REG_BANK_BROM_SCRATCH2 : (EC_REG_BANK Offset: 0x188) (R/W 32) BOOT ROM Scratch 2 Register -------- */

typedef union
{
  struct
  {
    uint32_t SCRATCH2:32;               /**< bit:  0..31  This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. */
  };
  uint32_t w;
} __EC_REG_BANK_BROM_SCRATCH2_bits_t;
#define EC_REG_BANK_BROM_SCRATCH2_RESETVALUE (0x00U)                                       /**<  (EC_REG_BANK_BROM_SCRATCH2) BOOT ROM Scratch 2 Register  Reset Value */

#define EC_REG_BANK_BROM_SCRATCH2_SCRATCH2_Pos (0)                                            /**< (EC_REG_BANK_BROM_SCRATCH2) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define EC_REG_BANK_BROM_SCRATCH2_SCRATCH2_Msk (0xFFFFFFFFU << EC_REG_BANK_BROM_SCRATCH2_SCRATCH2_Pos)  /**< (EC_REG_BANK_BROM_SCRATCH2) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define EC_REG_BANK_BROM_SCRATCH2_SCRATCH2(value) (EC_REG_BANK_BROM_SCRATCH2_SCRATCH2_Msk & ((value) << EC_REG_BANK_BROM_SCRATCH2_SCRATCH2_Pos))
#define EC_REG_BANK_BROM_SCRATCH2_Msk         (0xFFFFFFFFUL)                                 /**< (EC_REG_BANK_BROM_SCRATCH2) Register Mask  */

/* -------- EC_REG_BANK_iBROM_SCRATCH3 : (EC_REG_BANK Offset: 0x18c) (R/W 32) BOOT ROM Scratch 3 Register -------- */

typedef union
{
  struct
  {
    uint32_t SCRATCH3:32;               /**< bit:  0..31  This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. */
  };
  uint32_t w;
} __EC_REG_BANK_iBROM_SCRATCH3_bits_t;
#define EC_REG_BANK_iBROM_SCRATCH3_RESETVALUE (0x00U)                                       /**<  (EC_REG_BANK_iBROM_SCRATCH3) BOOT ROM Scratch 3 Register  Reset Value */

#define EC_REG_BANK_iBROM_SCRATCH3_SCRATCH3_Pos (0)                                            /**< (EC_REG_BANK_iBROM_SCRATCH3) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define EC_REG_BANK_iBROM_SCRATCH3_SCRATCH3_Msk (0xFFFFFFFFU << EC_REG_BANK_iBROM_SCRATCH3_SCRATCH3_Pos)  /**< (EC_REG_BANK_iBROM_SCRATCH3) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define EC_REG_BANK_iBROM_SCRATCH3_SCRATCH3(value) (EC_REG_BANK_iBROM_SCRATCH3_SCRATCH3_Msk & ((value) << EC_REG_BANK_iBROM_SCRATCH3_SCRATCH3_Pos))
#define EC_REG_BANK_iBROM_SCRATCH3_Msk        (0xFFFFFFFFUL)                                 /**< (EC_REG_BANK_iBROM_SCRATCH3) Register Mask  */

/** \brief EC_REG_BANK register offsets definitions */
#define EC_REG_BANK_AHB_ERROR_ADDRESS_OFFSET (0x04)         /**< (EC_REG_BANK_AHB_ERROR_ADDRESS) AHB Error Address [0:0] AHB_ERR_ADDR, In priority order:\n     1. AHB address is registered when an AHB error occurs on the processor's AHB master port and the register value was\n     already 0. This way only the first address to generate an exception is captured.\n     2. The processor can clear this register by writing any 32-bit value to this register. Offset */
#define EC_REG_BANK_AHB_ERROR_CONTROL_OFFSET (0x14)         /**< (EC_REG_BANK_AHB_ERROR_CONTROL) AHB Error Control [0:0] AHB_ERROR_DISABLE, 0: EC memory exceptions are enabled. 1: EC memory exceptions are disabled. Offset */
#define EC_REG_BANK_INTERRUPT_CONTROL_OFFSET (0x18)         /**< (EC_REG_BANK_INTERRUPT_CONTROL) Interrupt Control [0:0] NVIC_EN (NVIC_EN) This bit enables Alternate NVIC IRQ's Vectors. The Alternate NVIC Vectors provides each interrupt event with a dedicated (direct) NVIC vector.\n            0 = Alternate NVIC vectors disabled, 1= Alternate NVIC vectors enabled Offset */
#define EC_REG_BANK_ETM_TRACE_ENABLE_OFFSET (0x1C)         /**< (EC_REG_BANK_ETM_TRACE_ENABLE) ETM TRACE Enable [0:0] TRACE_EN (TRACE_EN) This bit enables the ARM TRACE debug port (ETM/ITM). The Trace Debug Interface pins are forced to the TRACE functions.            0 = ARM TRACE port disabled, 1= ARM TRACE port enabled Offset */
#define EC_REG_BANK_DEBUG_Enable_OFFSET (0x20)         /**< (EC_REG_BANK_DEBUG_Enable) Debug Enable Register Offset */
#define EC_REG_BANK_LOCK_OFFSET      (0x24)         /**< (EC_REG_BANK_LOCK) Lock Register Offset */
#define EC_REG_BANK_WDT_EVENT_COUNT_OFFSET (0x28)         /**< (EC_REG_BANK_WDT_EVENT_COUNT) WDT Event Count [3:0] WDT_COUNT (WDT_COUNT) These EC R/W bits are cleared to 0 on VCC1 POR, but not on a WDT.\n            Note: This field is written by Boot ROM firmware to indicate the number of times a WDT fired before loading a good EC code image. Offset */
#define EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_OFFSET (0x2C)         /**< (EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL) AES HASH Byte Swap Control Register. Offset */
#define EC_REG_BANK_PECI_DISABLE_OFFSET (0x40)         /**< (EC_REG_BANK_PECI_DISABLE) PECI Disable Offset */
#define EC_REG_BANK_STM_REG_OFFSET   (0x4C)         /**< (EC_REG_BANK_STM_REG) This register is a mirror of the Boot Control Register.\n Offset */
#define EC_REG_BANK_VCI_FWOVRD_OFFSET (0x50)         /**< (EC_REG_BANK_VCI_FWOVRD) This register contains the system shutdown bit programmable by Firmware.\n Offset */
#define EC_REG_BANK_VTR_RSTBR_STAT_OFFSET (0x54)         /**< (EC_REG_BANK_VTR_RSTBR_STAT) This register contains the VTR Reset Status for BOOT ROM.\n Offset */
#define EC_REG_BANK_CRYPTO_SOFT_RESET_OFFSET (0x5C)         /**< (EC_REG_BANK_CRYPTO_SOFT_RESET) System Shutdown Reset Offset */
#define EC_REG_BANK_GPIO_BANK_POWER_OFFSET (0x64)         /**< (EC_REG_BANK_GPIO_BANK_POWER) GPIO Bank Power Register Offset */
#define EC_REG_BANK_JTAG_MASTER_CFG_OFFSET (0x70)         /**< (EC_REG_BANK_JTAG_MASTER_CFG) JTAG Master Configuration Register Offset */
#define EC_REG_BANK_JTAG_MASTER_STS_OFFSET (0x74)         /**< (EC_REG_BANK_JTAG_MASTER_STS) JTAG Master Status Register Offset */
#define EC_REG_BANK_JTAG_MASTER_TDO_OFFSET (0x78)         /**< (EC_REG_BANK_JTAG_MASTER_TDO) JTAG Master TDO Register Offset */
#define EC_REG_BANK_JTAG_MASTER_TDI_OFFSET (0x7C)         /**< (EC_REG_BANK_JTAG_MASTER_TDI) JTAG Master TDI Register Offset */
#define EC_REG_BANK_JTAG_MASTER_TMS_OFFSET (0x80)         /**< (EC_REG_BANK_JTAG_MASTER_TMS) JTAG Master TMS Register Offset */
#define EC_REG_BANK_JTAG_MASTER_CMD_OFFSET (0x84)         /**< (EC_REG_BANK_JTAG_MASTER_CMD) JTAG Master Command Register Offset */
#define EC_REG_BANK_ANALOG_COMPCTRL_OFFSET (0x94)         /**< (EC_REG_BANK_ANALOG_COMPCTRL) Comparator Enable Offset */
#define EC_REG_BANK_ANLG_COM_SLEEPCTRL_OFFSET (0x98)         /**< (EC_REG_BANK_ANLG_COM_SLEEPCTRL) Analog Comparator Sleep Control Register Offset */
#define EC_REG_BANK_BROM_SCRATCH0_OFFSET (0x180)        /**< (EC_REG_BANK_BROM_SCRATCH0) BOOT ROM Scratch 0 Register Offset */
#define EC_REG_BANK_BROM_SCRATCH1_OFFSET (0x184)        /**< (EC_REG_BANK_BROM_SCRATCH1) BOOT ROM Scratch 1 Register Offset */
#define EC_REG_BANK_BROM_SCRATCH2_OFFSET (0x188)        /**< (EC_REG_BANK_BROM_SCRATCH2) BOOT ROM Scratch 2 Register Offset */
#define EC_REG_BANK_iBROM_SCRATCH3_OFFSET (0x18C)        /**< (EC_REG_BANK_iBROM_SCRATCH3) BOOT ROM Scratch 3 Register Offset */

/** \brief EC_REG_BANK register API structure */
typedef struct
{  /* This block is designed to be accessed internally by the EC via the register interface. */
  __IO  __EC_REG_BANK_AHB_ERROR_ADDRESS_bits_t AHB_ERROR_ADDRESS; /**< Offset: 0x04 (R/W  32) AHB Error Address [0:0] AHB_ERR_ADDR, In priority order:\n     1. AHB address is registered when an AHB error occurs on the processor's AHB master port and the register value was\n     already 0. This way only the first address to generate an exception is captured.\n     2. The processor can clear this register by writing any 32-bit value to this register. */
  __IO  __EC_REG_BANK_AHB_ERROR_CONTROL_bits_t AHB_ERROR_CONTROL; /**< Offset: 0x14 (R/W   8) AHB Error Control [0:0] AHB_ERROR_DISABLE, 0: EC memory exceptions are enabled. 1: EC memory exceptions are disabled. */
  __IO  __EC_REG_BANK_INTERRUPT_CONTROL_bits_t INTERRUPT_CONTROL; /**< Offset: 0x18 (R/W  32) Interrupt Control [0:0] NVIC_EN (NVIC_EN) This bit enables Alternate NVIC IRQ's Vectors. The Alternate NVIC Vectors provides each interrupt event with a dedicated (direct) NVIC vector.\n            0 = Alternate NVIC vectors disabled, 1= Alternate NVIC vectors enabled */
  __IO  __EC_REG_BANK_ETM_TRACE_ENABLE_bits_t ETM_TRACE_ENABLE; /**< Offset: 0x1C (R/W  32) ETM TRACE Enable [0:0] TRACE_EN (TRACE_EN) This bit enables the ARM TRACE debug port (ETM/ITM). The Trace Debug Interface pins are forced to the TRACE functions.            0 = ARM TRACE port disabled, 1= ARM TRACE port enabled */
  __IO  __EC_REG_BANK_DEBUG_Enable_bits_t DEBUG_Enable;  /**< Offset: 0x20 (R/W  32) Debug Enable Register */
  __IO  __EC_REG_BANK_LOCK_bits_t      LOCK;          /**< Offset: 0x24 (R/W  32) Lock Register */
  __IO  __EC_REG_BANK_WDT_EVENT_COUNT_bits_t WDT_EVENT_COUNT; /**< Offset: 0x28 (R/W  32) WDT Event Count [3:0] WDT_COUNT (WDT_COUNT) These EC R/W bits are cleared to 0 on VCC1 POR, but not on a WDT.\n            Note: This field is written by Boot ROM firmware to indicate the number of times a WDT fired before loading a good EC code image. */
  __IO  __EC_REG_BANK_AES_HASH_BYTE_SWAP_CONTROL_bits_t AES_HASH_BYTE_SWAP_CONTROL; /**< Offset: 0x2C (R/W  32) AES HASH Byte Swap Control Register. */
  __IO  __EC_REG_BANK_PECI_DISABLE_bits_t PECI_DISABLE;  /**< Offset: 0x40 (R/W  32) PECI Disable */
  __I   __EC_REG_BANK_STM_REG_bits_t   STM_REG;       /**< Offset: 0x4C (R/   32) This register is a mirror of the Boot Control Register.\n */
  __IO  __EC_REG_BANK_VCI_FWOVRD_bits_t VCI_FWOVRD;    /**< Offset: 0x50 (R/W  32) This register contains the system shutdown bit programmable by Firmware.\n */
  __IO  __EC_REG_BANK_VTR_RSTBR_STAT_bits_t VTR_RSTBR_STAT; /**< Offset: 0x54 (R/W   8) This register contains the VTR Reset Status for BOOT ROM.\n */
  __IO  __EC_REG_BANK_CRYPTO_SOFT_RESET_bits_t CRYPTO_SOFT_RESET; /**< Offset: 0x5C (R/W  32) System Shutdown Reset */
  __IO  __EC_REG_BANK_GPIO_BANK_POWER_bits_t GPIO_BANK_POWER; /**< Offset: 0x64 (R/W  32) GPIO Bank Power Register */
  __IO  __EC_REG_BANK_JTAG_MASTER_CFG_bits_t JTAG_MASTER_CFG; /**< Offset: 0x70 (R/W  32) JTAG Master Configuration Register */
  __I   __EC_REG_BANK_JTAG_MASTER_STS_bits_t JTAG_MASTER_STS; /**< Offset: 0x74 (R/   32) JTAG Master Status Register */
  __IO  __EC_REG_BANK_JTAG_MASTER_TDO_bits_t JTAG_MASTER_TDO; /**< Offset: 0x78 (R/W  32) JTAG Master TDO Register */
  __IO  __EC_REG_BANK_JTAG_MASTER_TDI_bits_t JTAG_MASTER_TDI; /**< Offset: 0x7C (R/W  32) JTAG Master TDI Register */
  __IO  __EC_REG_BANK_JTAG_MASTER_TMS_bits_t JTAG_MASTER_TMS; /**< Offset: 0x80 (R/W  32) JTAG Master TMS Register */
  __IO  __EC_REG_BANK_JTAG_MASTER_CMD_bits_t JTAG_MASTER_CMD; /**< Offset: 0x84 (R/W  32) JTAG Master Command Register */
  __IO  __EC_REG_BANK_ANALOG_COMPCTRL_bits_t ANALOG_COMPCTRL; /**< Offset: 0x94 (R/W   8) Comparator Enable */
  __IO  __EC_REG_BANK_ANLG_COM_SLEEPCTRL_bits_t ANLG_COM_SLEEPCTRL; /**< Offset: 0x98 (R/W   8) Analog Comparator Sleep Control Register */
  __IO  __EC_REG_BANK_BROM_SCRATCH0_bits_t BROM_SCRATCH0; /**< Offset: 0x180 (R/W  32) BOOT ROM Scratch 0 Register */
  __IO  __EC_REG_BANK_BROM_SCRATCH1_bits_t BROM_SCRATCH1; /**< Offset: 0x184 (R/W  32) BOOT ROM Scratch 1 Register */
  __IO  __EC_REG_BANK_BROM_SCRATCH2_bits_t BROM_SCRATCH2; /**< Offset: 0x188 (R/W  32) BOOT ROM Scratch 2 Register */
  __IO  __EC_REG_BANK_iBROM_SCRATCH3_bits_t iBROM_SCRATCH3; /**< Offset: 0x18C (R/W  32) BOOT ROM Scratch 3 Register */
} ecregbank_registers_t;
/** @}  end of This block is designed to be accessed internally by the EC via the register interface. */

#endif /* _PIC32CX_0525SG12_EC_REG_BANK_COMPONENT_H_ */
