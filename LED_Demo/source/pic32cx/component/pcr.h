/**
 * \brief Component description for PIC32CX/0525SG12 PCR
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
#ifndef _PIC32CX_0525SG12_PCR_COMPONENT_H_
#define _PIC32CX_0525SG12_PCR_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_PCR The Power, Clocks, and Resets (PCR) Section identifies all the power supplies,\n        clock sources, and reset inputs to the chip and defines all the derived power, clock, and reset signals.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PCR */
/* ========================================================================== */

/* -------- PCR_SYS_SLP_CNTRL : (PCR Offset: 0x00) (R/W 32) System Sleep Control -------- */

typedef union
{
  struct
  {
    uint32_t SLEEP_MODE:1;              /**< bit:      0  Selects the System Sleep mode                 */
    uint32_t :1;                        /**< bit:      1  Reserved                                      */
    uint32_t TEST:1;                    /**< bit:      2  Test bit                                      */
    uint32_t SLEEP_ALL:1;               /**< bit:      3  Initiates the System Sleep mode               */
    uint32_t :28;                       /**< bit:  4..31  Reserved                                      */
  };
  uint32_t w;
} __PCR_SYS_SLP_CNTRL_bits_t;
#define PCR_SYS_SLP_CNTRL_RESETVALUE        (0x00U)                                       /**<  (PCR_SYS_SLP_CNTRL) System Sleep Control  Reset Value */

#define PCR_SYS_SLP_CNTRL_SLEEP_MODE_Pos      (0)                                            /**< (PCR_SYS_SLP_CNTRL) Selects the System Sleep mode Position */
#define PCR_SYS_SLP_CNTRL_SLEEP_MODE_Msk      (0x1U << PCR_SYS_SLP_CNTRL_SLEEP_MODE_Pos)     /**< (PCR_SYS_SLP_CNTRL) Selects the System Sleep mode Mask */
#define PCR_SYS_SLP_CNTRL_TEST_Pos            (2)                                            /**< (PCR_SYS_SLP_CNTRL) Test bit Position */
#define PCR_SYS_SLP_CNTRL_TEST_Msk            (0x1U << PCR_SYS_SLP_CNTRL_TEST_Pos)           /**< (PCR_SYS_SLP_CNTRL) Test bit Mask */
#define PCR_SYS_SLP_CNTRL_SLEEP_ALL_Pos       (3)                                            /**< (PCR_SYS_SLP_CNTRL) Initiates the System Sleep mode Position */
#define PCR_SYS_SLP_CNTRL_SLEEP_ALL_Msk       (0x1U << PCR_SYS_SLP_CNTRL_SLEEP_ALL_Pos)      /**< (PCR_SYS_SLP_CNTRL) Initiates the System Sleep mode Mask */
#define PCR_SYS_SLP_CNTRL_Msk                 (0x0000000DUL)                                 /**< (PCR_SYS_SLP_CNTRL) Register Mask  */

/* -------- PCR_PROC_CLK_CNTRL : (PCR Offset: 0x04) (R/W 32) Processor Clock Control Register [7:0] Processor Clock Divide Value (PROC_DIV)\n            1: divide 48 MHz Ring Oscillator by 1.\n            3: divide 48 MHz Ring Oscillator by 3.\n            4: divide 48 MHz Ring Oscillator by 4.\n            16: divide 48 MHz Ring Oscillator by 16.\n            48: divide 48 MHz Ring Oscillator by 48.\n            No other values are supported. -------- */

typedef union
{
  struct
  {
    uint32_t PROCESSOR_CLOCK_DIVIDE:8;  /**< bit:   0..7  Selects the EC clock rate                     */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __PCR_PROC_CLK_CNTRL_bits_t;
#define PCR_PROC_CLK_CNTRL_RESETVALUE       (0x04U)                                       /**<  (PCR_PROC_CLK_CNTRL) Processor Clock Control Register [7:0] Processor Clock Divide Value (PROC_DIV)\n            1: divide 48 MHz Ring Oscillator by 1.\n            3: divide 48 MHz Ring Oscillator by 3.\n            4: divide 48 MHz Ring Oscillator by 4.\n            16: divide 48 MHz Ring Oscillator by 16.\n            48: divide 48 MHz Ring Oscillator by 48.\n            No other values are supported.  Reset Value */

#define PCR_PROC_CLK_CNTRL_PROCESSOR_CLOCK_DIVIDE_Pos (0)                                            /**< (PCR_PROC_CLK_CNTRL) Selects the EC clock rate Position */
#define PCR_PROC_CLK_CNTRL_PROCESSOR_CLOCK_DIVIDE_Msk (0xFFU << PCR_PROC_CLK_CNTRL_PROCESSOR_CLOCK_DIVIDE_Pos)  /**< (PCR_PROC_CLK_CNTRL) Selects the EC clock rate Mask */
#define PCR_PROC_CLK_CNTRL_PROCESSOR_CLOCK_DIVIDE(value) (PCR_PROC_CLK_CNTRL_PROCESSOR_CLOCK_DIVIDE_Msk & ((value) << PCR_PROC_CLK_CNTRL_PROCESSOR_CLOCK_DIVIDE_Pos))
#define PCR_PROC_CLK_CNTRL_Msk                (0x000000FFUL)                                 /**< (PCR_PROC_CLK_CNTRL) Register Mask  */

/* -------- PCR_SLOW_CLK_CNTRL : (PCR Offset: 0x08) (R/W 32) Configures the EC_CLK clock domain -------- */

typedef union
{
  struct
  {
    uint32_t SLOW_CLOCK_DIVIDE:10;      /**< bit:   0..9  SLOW_CLOCK_DIVIDE. n=Divide by n; 0=Clock off */
    uint32_t :22;                       /**< bit: 10..31  Reserved                                      */
  };
  uint32_t w;
} __PCR_SLOW_CLK_CNTRL_bits_t;
#define PCR_SLOW_CLK_CNTRL_RESETVALUE       (0x1E0U)                                      /**<  (PCR_SLOW_CLK_CNTRL) Configures the EC_CLK clock domain  Reset Value */

#define PCR_SLOW_CLK_CNTRL_SLOW_CLOCK_DIVIDE_Pos (0)                                            /**< (PCR_SLOW_CLK_CNTRL) SLOW_CLOCK_DIVIDE. n=Divide by n; 0=Clock off Position */
#define PCR_SLOW_CLK_CNTRL_SLOW_CLOCK_DIVIDE_Msk (0x3FFU << PCR_SLOW_CLK_CNTRL_SLOW_CLOCK_DIVIDE_Pos)  /**< (PCR_SLOW_CLK_CNTRL) SLOW_CLOCK_DIVIDE. n=Divide by n; 0=Clock off Mask */
#define PCR_SLOW_CLK_CNTRL_SLOW_CLOCK_DIVIDE(value) (PCR_SLOW_CLK_CNTRL_SLOW_CLOCK_DIVIDE_Msk & ((value) << PCR_SLOW_CLK_CNTRL_SLOW_CLOCK_DIVIDE_Pos))
#define PCR_SLOW_CLK_CNTRL_Msk                (0x000003FFUL)                                 /**< (PCR_SLOW_CLK_CNTRL) Register Mask  */

/* -------- PCR_OSC_ID : (PCR Offset: 0x0c) (R/W 32) Oscillator ID Register -------- */

typedef union
{
  struct
  {
    uint32_t TEST:8;                    /**< bit:   0..7  Test bits                                     */
    uint32_t PLL_LOCK:1;                /**< bit:      8  PLL Lock Status                               */
    uint32_t :23;                       /**< bit:  9..31  Reserved                                      */
  };
  uint32_t w;
} __PCR_OSC_ID_bits_t;
#define PCR_OSC_ID_RESETVALUE               (0x00U)                                       /**<  (PCR_OSC_ID) Oscillator ID Register  Reset Value */

#define PCR_OSC_ID_TEST_Pos                   (0)                                            /**< (PCR_OSC_ID) Test bits Position */
#define PCR_OSC_ID_TEST_Msk                   (0xFFU << PCR_OSC_ID_TEST_Pos)                 /**< (PCR_OSC_ID) Test bits Mask */
#define PCR_OSC_ID_TEST(value)                (PCR_OSC_ID_TEST_Msk & ((value) << PCR_OSC_ID_TEST_Pos))
#define PCR_OSC_ID_PLL_LOCK_Pos               (8)                                            /**< (PCR_OSC_ID) PLL Lock Status Position */
#define PCR_OSC_ID_PLL_LOCK_Msk               (0x1U << PCR_OSC_ID_PLL_LOCK_Pos)              /**< (PCR_OSC_ID) PLL Lock Status Mask */
#define PCR_OSC_ID_Msk                        (0x000001FFUL)                                 /**< (PCR_OSC_ID) Register Mask  */

/* -------- PCR_PWR_RST_STS : (PCR Offset: 0x10) (R/W 32) PCR Power Reset Status Register -------- */

typedef union
{
  struct
  {
    uint32_t :2;                        /**< bit:   0..1  Reserved                                      */
    uint32_t VCC_PWRGD_STATUS:1;        /**< bit:      2  Indicates the status of VCC_PWRGD. 0 = PWRGD not asserted. 1 = PWRGD asserte. */
    uint32_t RESET_HOST_STATUS:1;       /**< bit:      3  Indicates the status of RESET_VCC. 0 = reset active. 1 = reset not active. */
    uint32_t RESET_VTR_STATUS:1;        /**< bit:      4  Indicates the status of RESET_VTR. 0 = reset active. 1 = reset not active.(R/W1C) */
    uint32_t VBAT_RESET_STATUS:1;       /**< bit:      5  VBAT reset status 0 = No reset occurred while VTR was off or since the last time this bit was cleared. 1 = A reset occurred.(R/WC) */
    uint32_t RESET_SYS_STATUS:1;        /**< bit:      6  Indicates the status of RESET_SYS.(R/W1C)\n                0 = No reset occurred since the last time this bit was cleared.\n                1 = A reset occurred. */
    uint32_t JTAG_RESET_STATUS:1;       /**< bit:      7  Indicates status of JTAG_TRST# pin.\n                0 = No JTAG reset occurred since the last time this bit was cleared.\n                1 = A reset occurred because of a JTAG command. */
    uint32_t WDT_EVENT:1;               /**< bit:      8  Indicates that a WDT_EVENT happened. (R/W1C)\n                0 = Not active.\n                1 = A WDT_EVENT occured. */
    uint32_t :1;                        /**< bit:      9  Reserved                                      */
    uint32_t _32K_ACTIVE:1;             /**< bit:     10  32K_ACTIVE (32K_ACTIVE)                       */
    uint32_t PCICLK_ACTIVE:1;           /**< bit:     11  PCICLK_ACTIVE (PCICLK_ACTIVE)                 */
    uint32_t ESPI_CLK_ACTIVE:1;         /**< bit:     12  ESPI_CLK_ACTIVE                               */
    uint32_t :19;                       /**< bit: 13..31  Reserved                                      */
  };
  uint32_t w;
} __PCR_PWR_RST_STS_bits_t;
#define PCR_PWR_RST_STS_RESETVALUE          (0x00U)                                       /**<  (PCR_PWR_RST_STS) PCR Power Reset Status Register  Reset Value */

#define PCR_PWR_RST_STS_VCC_PWRGD_STATUS_Pos  (2)                                            /**< (PCR_PWR_RST_STS) Indicates the status of VCC_PWRGD. 0 = PWRGD not asserted. 1 = PWRGD asserte. Position */
#define PCR_PWR_RST_STS_VCC_PWRGD_STATUS_Msk  (0x1U << PCR_PWR_RST_STS_VCC_PWRGD_STATUS_Pos)  /**< (PCR_PWR_RST_STS) Indicates the status of VCC_PWRGD. 0 = PWRGD not asserted. 1 = PWRGD asserte. Mask */
#define PCR_PWR_RST_STS_RESET_HOST_STATUS_Pos (3)                                            /**< (PCR_PWR_RST_STS) Indicates the status of RESET_VCC. 0 = reset active. 1 = reset not active. Position */
#define PCR_PWR_RST_STS_RESET_HOST_STATUS_Msk (0x1U << PCR_PWR_RST_STS_RESET_HOST_STATUS_Pos)  /**< (PCR_PWR_RST_STS) Indicates the status of RESET_VCC. 0 = reset active. 1 = reset not active. Mask */
#define PCR_PWR_RST_STS_RESET_VTR_STATUS_Pos  (4)                                            /**< (PCR_PWR_RST_STS) Indicates the status of RESET_VTR. 0 = reset active. 1 = reset not active.(R/W1C) Position */
#define PCR_PWR_RST_STS_RESET_VTR_STATUS_Msk  (0x1U << PCR_PWR_RST_STS_RESET_VTR_STATUS_Pos)  /**< (PCR_PWR_RST_STS) Indicates the status of RESET_VTR. 0 = reset active. 1 = reset not active.(R/W1C) Mask */
#define PCR_PWR_RST_STS_VBAT_RESET_STATUS_Pos (5)                                            /**< (PCR_PWR_RST_STS) VBAT reset status 0 = No reset occurred while VTR was off or since the last time this bit was cleared. 1 = A reset occurred.(R/WC) Position */
#define PCR_PWR_RST_STS_VBAT_RESET_STATUS_Msk (0x1U << PCR_PWR_RST_STS_VBAT_RESET_STATUS_Pos)  /**< (PCR_PWR_RST_STS) VBAT reset status 0 = No reset occurred while VTR was off or since the last time this bit was cleared. 1 = A reset occurred.(R/WC) Mask */
#define PCR_PWR_RST_STS_RESET_SYS_STATUS_Pos  (6)                                            /**< (PCR_PWR_RST_STS) Indicates the status of RESET_SYS.(R/W1C)\n                0 = No reset occurred since the last time this bit was cleared.\n                1 = A reset occurred. Position */
#define PCR_PWR_RST_STS_RESET_SYS_STATUS_Msk  (0x1U << PCR_PWR_RST_STS_RESET_SYS_STATUS_Pos)  /**< (PCR_PWR_RST_STS) Indicates the status of RESET_SYS.(R/W1C)\n                0 = No reset occurred since the last time this bit was cleared.\n                1 = A reset occurred. Mask */
#define PCR_PWR_RST_STS_JTAG_RESET_STATUS_Pos (7)                                            /**< (PCR_PWR_RST_STS) Indicates status of JTAG_TRST# pin.\n                0 = No JTAG reset occurred since the last time this bit was cleared.\n                1 = A reset occurred because of a JTAG command. Position */
#define PCR_PWR_RST_STS_JTAG_RESET_STATUS_Msk (0x1U << PCR_PWR_RST_STS_JTAG_RESET_STATUS_Pos)  /**< (PCR_PWR_RST_STS) Indicates status of JTAG_TRST# pin.\n                0 = No JTAG reset occurred since the last time this bit was cleared.\n                1 = A reset occurred because of a JTAG command. Mask */
#define PCR_PWR_RST_STS_WDT_EVENT_Pos         (8)                                            /**< (PCR_PWR_RST_STS) Indicates that a WDT_EVENT happened. (R/W1C)\n                0 = Not active.\n                1 = A WDT_EVENT occured. Position */
#define PCR_PWR_RST_STS_WDT_EVENT_Msk         (0x1U << PCR_PWR_RST_STS_WDT_EVENT_Pos)        /**< (PCR_PWR_RST_STS) Indicates that a WDT_EVENT happened. (R/W1C)\n                0 = Not active.\n                1 = A WDT_EVENT occured. Mask */
#define PCR_PWR_RST_STS__32K_ACTIVE_Pos       (10)                                           /**< (PCR_PWR_RST_STS) 32K_ACTIVE (32K_ACTIVE) Position */
#define PCR_PWR_RST_STS__32K_ACTIVE_Msk       (0x1U << PCR_PWR_RST_STS__32K_ACTIVE_Pos)      /**< (PCR_PWR_RST_STS) 32K_ACTIVE (32K_ACTIVE) Mask */
#define PCR_PWR_RST_STS_PCICLK_ACTIVE_Pos     (11)                                           /**< (PCR_PWR_RST_STS) PCICLK_ACTIVE (PCICLK_ACTIVE) Position */
#define PCR_PWR_RST_STS_PCICLK_ACTIVE_Msk     (0x1U << PCR_PWR_RST_STS_PCICLK_ACTIVE_Pos)    /**< (PCR_PWR_RST_STS) PCICLK_ACTIVE (PCICLK_ACTIVE) Mask */
#define PCR_PWR_RST_STS_ESPI_CLK_ACTIVE_Pos   (12)                                           /**< (PCR_PWR_RST_STS) ESPI_CLK_ACTIVE Position */
#define PCR_PWR_RST_STS_ESPI_CLK_ACTIVE_Msk   (0x1U << PCR_PWR_RST_STS_ESPI_CLK_ACTIVE_Pos)  /**< (PCR_PWR_RST_STS) ESPI_CLK_ACTIVE Mask */
#define PCR_PWR_RST_STS_Msk                   (0x00001DFCUL)                                 /**< (PCR_PWR_RST_STS) Register Mask  */

/* -------- PCR_PWR_RST_CNTRL : (PCR Offset: 0x14) (R/W 32) Power Reset Control Register -------- */

typedef union
{
  struct
  {
    uint32_t PWR_INV:1;                 /**< bit:      0  Used by FW to control internal RESET_VCC signal function and external PWROK pin. This bit is read-only when VCC_PWRGD\n      is de-asserted low. */
    uint32_t :7;                        /**< bit:   1..7  Reserved                                      */
    uint32_t HOST_RESET_SELECT:1;       /**< bit:      8  Determines what generates the internal platform reset signal. 1=LRESET# pin; 0=eSPI PLTRST# VWire */
    uint32_t :23;                       /**< bit:  9..31  Reserved                                      */
  };
  uint32_t w;
} __PCR_PWR_RST_CNTRL_bits_t;
#define PCR_PWR_RST_CNTRL_RESETVALUE        (0x101U)                                      /**<  (PCR_PWR_RST_CNTRL) Power Reset Control Register  Reset Value */

#define PCR_PWR_RST_CNTRL_PWR_INV_Pos         (0)                                            /**< (PCR_PWR_RST_CNTRL) Used by FW to control internal RESET_VCC signal function and external PWROK pin. This bit is read-only when VCC_PWRGD\n      is de-asserted low. Position */
#define PCR_PWR_RST_CNTRL_PWR_INV_Msk         (0x1U << PCR_PWR_RST_CNTRL_PWR_INV_Pos)        /**< (PCR_PWR_RST_CNTRL) Used by FW to control internal RESET_VCC signal function and external PWROK pin. This bit is read-only when VCC_PWRGD\n      is de-asserted low. Mask */
#define PCR_PWR_RST_CNTRL_HOST_RESET_SELECT_Pos (8)                                            /**< (PCR_PWR_RST_CNTRL) Determines what generates the internal platform reset signal. 1=LRESET# pin; 0=eSPI PLTRST# VWire Position */
#define PCR_PWR_RST_CNTRL_HOST_RESET_SELECT_Msk (0x1U << PCR_PWR_RST_CNTRL_HOST_RESET_SELECT_Pos)  /**< (PCR_PWR_RST_CNTRL) Determines what generates the internal platform reset signal. 1=LRESET# pin; 0=eSPI PLTRST# VWire Mask */
#define PCR_PWR_RST_CNTRL_Msk                 (0x00000101UL)                                 /**< (PCR_PWR_RST_CNTRL) Register Mask  */

/* -------- PCR_SYS_RST : (PCR Offset: 0x18) (R/W 32) System Reset Register -------- */

typedef union
{
  struct
  {
    uint32_t :8;                        /**< bit:   0..7  Reserved                                      */
    uint32_t SOFT_SYS_RESET:1;          /**< bit:      8  A write of a 1 forces an assertion of the RESET_SYS reset signal, resetting the device. A write of 0 has no effect. */
    uint32_t :23;                       /**< bit:  9..31  Reserved                                      */
  };
  uint32_t w;
} __PCR_SYS_RST_bits_t;
#define PCR_SYS_RST_RESETVALUE              (0x00U)                                       /**<  (PCR_SYS_RST) System Reset Register  Reset Value */

#define PCR_SYS_RST_SOFT_SYS_RESET_Pos        (8)                                            /**< (PCR_SYS_RST) A write of a 1 forces an assertion of the RESET_SYS reset signal, resetting the device. A write of 0 has no effect. Position */
#define PCR_SYS_RST_SOFT_SYS_RESET_Msk        (0x1U << PCR_SYS_RST_SOFT_SYS_RESET_Pos)       /**< (PCR_SYS_RST) A write of a 1 forces an assertion of the RESET_SYS reset signal, resetting the device. A write of 0 has no effect. Mask */
#define PCR_SYS_RST_Msk                       (0x00000100UL)                                 /**< (PCR_SYS_RST) Register Mask  */

/* -------- PCR_SLP_EN_0 : (PCR Offset: 0x30) (R/W 32) Sleep Enable 0 Register -------- */

typedef union
{
  struct
  {
    uint32_t :1;                        /**< bit:      0  Reserved                                      */
    uint32_t OTP_SLP_EN:1;              /**< bit:      1  eFuse Enable                                  */
    uint32_t :30;                       /**< bit:  2..31  Reserved                                      */
  };
  uint32_t w;
} __PCR_SLP_EN_0_bits_t;
#define PCR_SLP_EN_0_RESETVALUE             (0x00U)                                       /**<  (PCR_SLP_EN_0) Sleep Enable 0 Register  Reset Value */

#define PCR_SLP_EN_0_OTP_SLP_EN_Pos           (1)                                            /**< (PCR_SLP_EN_0) eFuse Enable Position */
#define PCR_SLP_EN_0_OTP_SLP_EN_Msk           (0x1U << PCR_SLP_EN_0_OTP_SLP_EN_Pos)          /**< (PCR_SLP_EN_0) eFuse Enable Mask */
#define PCR_SLP_EN_0_Msk                      (0x00000002UL)                                 /**< (PCR_SLP_EN_0) Register Mask  */

/* -------- PCR_SLP_EN_1 : (PCR Offset: 0x34) (R/W 32) Sleep Enable 1 Register -------- */

typedef union
{
  struct
  {
    uint32_t INT_SLP_EN:1;              /**< bit:      0  Interrupt Sleep Enable                        */
    uint32_t PECI_SLP_EN:1;             /**< bit:      1  PECI Sleep Enable                             */
    uint32_t TACH0_SLP_EN:1;            /**< bit:      2  TACH0 Sleep Enable (TACH0_SLP_EN)             */
    uint32_t :1;                        /**< bit:      3  Reserved                                      */
    uint32_t PWM0_SLP_EN:1;             /**< bit:      4  PWM0 Sleep Enable (PWM0_SLP_EN)               */
    uint32_t PMC_SLP_EN:1;              /**< bit:      5  PMC Sleep Enable (PMC_SLP_EN)                 */
    uint32_t DMA_SLP_EN:1;              /**< bit:      6  DMA Sleep Enable (DMA_SLP_EN)                 */
    uint32_t TFDP_SLP_EN:1;             /**< bit:      7  TFDP Sleep Enable (TFDP_SLP_EN)               */
    uint32_t PROCESSOR_SLP_EN:1;        /**< bit:      8  PROCESSOR Sleep Enable (PROCESSOR_SLP_EN)     */
    uint32_t :1;                        /**< bit:      9  Reserved                                      */
    uint32_t SMB0_SLP_EN:1;             /**< bit:     10  SMB0 Sleep Enable (SMB0_SLP_EN)               */
    uint32_t TACH1_SLP_EN:1;            /**< bit:     11  TACH1 Sleep Enable (TACH1_SLP_EN)             */
    uint32_t TACH2_SLP_EN:1;            /**< bit:     12  TACH2 Sleep Enable (TACH2_SLP_EN)             */
    uint32_t TACH3_SLP_EN:1;            /**< bit:     13  TACH3 Sleep Enable (TACH3_SLP_EN)             */
    uint32_t :6;                        /**< bit: 14..19  Reserved                                      */
    uint32_t PWM1_SLP_EN:1;             /**< bit:     20  PWM1 Sleep Enable (PWM1_SLP_EN)               */
    uint32_t PWM2_SLP_EN:1;             /**< bit:     21  PWM2 Sleep Enable (PWM2_SLP_EN)               */
    uint32_t PWM3_SLP_EN:1;             /**< bit:     22  PWM3 Sleep Enable (PWM3_SLP_EN)               */
    uint32_t PWM4_SLP_EN:1;             /**< bit:     23  PWM4 Sleep Enable (PWM4_SLP_EN)               */
    uint32_t PWM5_SLP_EN:1;             /**< bit:     24  PWM3 Sleep Enable (PWM5_SLP_EN)               */
    uint32_t PWM6_SLP_EN:1;             /**< bit:     25  PWM3 Sleep Enable (PWM6_SLP_EN)               */
    uint32_t PWM7_SLP_EN:1;             /**< bit:     26  PWM3 Sleep Enable (PWM7_SLP_EN)               */
    uint32_t PWM8_SLP_EN:1;             /**< bit:     27  PWM3 Sleep Enable (PWM8_SLP_EN)               */
    uint32_t :1;                        /**< bit:     28  Reserved                                      */
    uint32_t EC_REG_BANK_SLP_EN:1;      /**< bit:     29  EC_REG_BANK Sleep Enable (EC_REG_BANK_SLP_EN) */
    uint32_t TIMER16_0_SLP_EN:1;        /**< bit:     30  TIMER16_0 Sleep Enable (TIMER16_0_SLP_EN)     */
    uint32_t TIMER16_1_SLP_EN:1;        /**< bit:     31  TIMER16_1 Sleep Enable (TIMER16_1_SLP_EN)     */
  };
  uint32_t w;
} __PCR_SLP_EN_1_bits_t;
#define PCR_SLP_EN_1_RESETVALUE             (0x00U)                                       /**<  (PCR_SLP_EN_1) Sleep Enable 1 Register  Reset Value */

#define PCR_SLP_EN_1_INT_SLP_EN_Pos           (0)                                            /**< (PCR_SLP_EN_1) Interrupt Sleep Enable Position */
#define PCR_SLP_EN_1_INT_SLP_EN_Msk           (0x1U << PCR_SLP_EN_1_INT_SLP_EN_Pos)          /**< (PCR_SLP_EN_1) Interrupt Sleep Enable Mask */
#define PCR_SLP_EN_1_PECI_SLP_EN_Pos          (1)                                            /**< (PCR_SLP_EN_1) PECI Sleep Enable Position */
#define PCR_SLP_EN_1_PECI_SLP_EN_Msk          (0x1U << PCR_SLP_EN_1_PECI_SLP_EN_Pos)         /**< (PCR_SLP_EN_1) PECI Sleep Enable Mask */
#define PCR_SLP_EN_1_TACH0_SLP_EN_Pos         (2)                                            /**< (PCR_SLP_EN_1) TACH0 Sleep Enable (TACH0_SLP_EN) Position */
#define PCR_SLP_EN_1_TACH0_SLP_EN_Msk         (0x1U << PCR_SLP_EN_1_TACH0_SLP_EN_Pos)        /**< (PCR_SLP_EN_1) TACH0 Sleep Enable (TACH0_SLP_EN) Mask */
#define PCR_SLP_EN_1_PWM0_SLP_EN_Pos          (4)                                            /**< (PCR_SLP_EN_1) PWM0 Sleep Enable (PWM0_SLP_EN) Position */
#define PCR_SLP_EN_1_PWM0_SLP_EN_Msk          (0x1U << PCR_SLP_EN_1_PWM0_SLP_EN_Pos)         /**< (PCR_SLP_EN_1) PWM0 Sleep Enable (PWM0_SLP_EN) Mask */
#define PCR_SLP_EN_1_PMC_SLP_EN_Pos           (5)                                            /**< (PCR_SLP_EN_1) PMC Sleep Enable (PMC_SLP_EN) Position */
#define PCR_SLP_EN_1_PMC_SLP_EN_Msk           (0x1U << PCR_SLP_EN_1_PMC_SLP_EN_Pos)          /**< (PCR_SLP_EN_1) PMC Sleep Enable (PMC_SLP_EN) Mask */
#define PCR_SLP_EN_1_DMA_SLP_EN_Pos           (6)                                            /**< (PCR_SLP_EN_1) DMA Sleep Enable (DMA_SLP_EN) Position */
#define PCR_SLP_EN_1_DMA_SLP_EN_Msk           (0x1U << PCR_SLP_EN_1_DMA_SLP_EN_Pos)          /**< (PCR_SLP_EN_1) DMA Sleep Enable (DMA_SLP_EN) Mask */
#define PCR_SLP_EN_1_TFDP_SLP_EN_Pos          (7)                                            /**< (PCR_SLP_EN_1) TFDP Sleep Enable (TFDP_SLP_EN) Position */
#define PCR_SLP_EN_1_TFDP_SLP_EN_Msk          (0x1U << PCR_SLP_EN_1_TFDP_SLP_EN_Pos)         /**< (PCR_SLP_EN_1) TFDP Sleep Enable (TFDP_SLP_EN) Mask */
#define PCR_SLP_EN_1_PROCESSOR_SLP_EN_Pos     (8)                                            /**< (PCR_SLP_EN_1) PROCESSOR Sleep Enable (PROCESSOR_SLP_EN) Position */
#define PCR_SLP_EN_1_PROCESSOR_SLP_EN_Msk     (0x1U << PCR_SLP_EN_1_PROCESSOR_SLP_EN_Pos)    /**< (PCR_SLP_EN_1) PROCESSOR Sleep Enable (PROCESSOR_SLP_EN) Mask */
#define PCR_SLP_EN_1_SMB0_SLP_EN_Pos          (10)                                           /**< (PCR_SLP_EN_1) SMB0 Sleep Enable (SMB0_SLP_EN) Position */
#define PCR_SLP_EN_1_SMB0_SLP_EN_Msk          (0x1U << PCR_SLP_EN_1_SMB0_SLP_EN_Pos)         /**< (PCR_SLP_EN_1) SMB0 Sleep Enable (SMB0_SLP_EN) Mask */
#define PCR_SLP_EN_1_TACH1_SLP_EN_Pos         (11)                                           /**< (PCR_SLP_EN_1) TACH1 Sleep Enable (TACH1_SLP_EN) Position */
#define PCR_SLP_EN_1_TACH1_SLP_EN_Msk         (0x1U << PCR_SLP_EN_1_TACH1_SLP_EN_Pos)        /**< (PCR_SLP_EN_1) TACH1 Sleep Enable (TACH1_SLP_EN) Mask */
#define PCR_SLP_EN_1_TACH2_SLP_EN_Pos         (12)                                           /**< (PCR_SLP_EN_1) TACH2 Sleep Enable (TACH2_SLP_EN) Position */
#define PCR_SLP_EN_1_TACH2_SLP_EN_Msk         (0x1U << PCR_SLP_EN_1_TACH2_SLP_EN_Pos)        /**< (PCR_SLP_EN_1) TACH2 Sleep Enable (TACH2_SLP_EN) Mask */
#define PCR_SLP_EN_1_TACH3_SLP_EN_Pos         (13)                                           /**< (PCR_SLP_EN_1) TACH3 Sleep Enable (TACH3_SLP_EN) Position */
#define PCR_SLP_EN_1_TACH3_SLP_EN_Msk         (0x1U << PCR_SLP_EN_1_TACH3_SLP_EN_Pos)        /**< (PCR_SLP_EN_1) TACH3 Sleep Enable (TACH3_SLP_EN) Mask */
#define PCR_SLP_EN_1_PWM1_SLP_EN_Pos          (20)                                           /**< (PCR_SLP_EN_1) PWM1 Sleep Enable (PWM1_SLP_EN) Position */
#define PCR_SLP_EN_1_PWM1_SLP_EN_Msk          (0x1U << PCR_SLP_EN_1_PWM1_SLP_EN_Pos)         /**< (PCR_SLP_EN_1) PWM1 Sleep Enable (PWM1_SLP_EN) Mask */
#define PCR_SLP_EN_1_PWM2_SLP_EN_Pos          (21)                                           /**< (PCR_SLP_EN_1) PWM2 Sleep Enable (PWM2_SLP_EN) Position */
#define PCR_SLP_EN_1_PWM2_SLP_EN_Msk          (0x1U << PCR_SLP_EN_1_PWM2_SLP_EN_Pos)         /**< (PCR_SLP_EN_1) PWM2 Sleep Enable (PWM2_SLP_EN) Mask */
#define PCR_SLP_EN_1_PWM3_SLP_EN_Pos          (22)                                           /**< (PCR_SLP_EN_1) PWM3 Sleep Enable (PWM3_SLP_EN) Position */
#define PCR_SLP_EN_1_PWM3_SLP_EN_Msk          (0x1U << PCR_SLP_EN_1_PWM3_SLP_EN_Pos)         /**< (PCR_SLP_EN_1) PWM3 Sleep Enable (PWM3_SLP_EN) Mask */
#define PCR_SLP_EN_1_PWM4_SLP_EN_Pos          (23)                                           /**< (PCR_SLP_EN_1) PWM4 Sleep Enable (PWM4_SLP_EN) Position */
#define PCR_SLP_EN_1_PWM4_SLP_EN_Msk          (0x1U << PCR_SLP_EN_1_PWM4_SLP_EN_Pos)         /**< (PCR_SLP_EN_1) PWM4 Sleep Enable (PWM4_SLP_EN) Mask */
#define PCR_SLP_EN_1_PWM5_SLP_EN_Pos          (24)                                           /**< (PCR_SLP_EN_1) PWM3 Sleep Enable (PWM5_SLP_EN) Position */
#define PCR_SLP_EN_1_PWM5_SLP_EN_Msk          (0x1U << PCR_SLP_EN_1_PWM5_SLP_EN_Pos)         /**< (PCR_SLP_EN_1) PWM3 Sleep Enable (PWM5_SLP_EN) Mask */
#define PCR_SLP_EN_1_PWM6_SLP_EN_Pos          (25)                                           /**< (PCR_SLP_EN_1) PWM3 Sleep Enable (PWM6_SLP_EN) Position */
#define PCR_SLP_EN_1_PWM6_SLP_EN_Msk          (0x1U << PCR_SLP_EN_1_PWM6_SLP_EN_Pos)         /**< (PCR_SLP_EN_1) PWM3 Sleep Enable (PWM6_SLP_EN) Mask */
#define PCR_SLP_EN_1_PWM7_SLP_EN_Pos          (26)                                           /**< (PCR_SLP_EN_1) PWM3 Sleep Enable (PWM7_SLP_EN) Position */
#define PCR_SLP_EN_1_PWM7_SLP_EN_Msk          (0x1U << PCR_SLP_EN_1_PWM7_SLP_EN_Pos)         /**< (PCR_SLP_EN_1) PWM3 Sleep Enable (PWM7_SLP_EN) Mask */
#define PCR_SLP_EN_1_PWM8_SLP_EN_Pos          (27)                                           /**< (PCR_SLP_EN_1) PWM3 Sleep Enable (PWM8_SLP_EN) Position */
#define PCR_SLP_EN_1_PWM8_SLP_EN_Msk          (0x1U << PCR_SLP_EN_1_PWM8_SLP_EN_Pos)         /**< (PCR_SLP_EN_1) PWM3 Sleep Enable (PWM8_SLP_EN) Mask */
#define PCR_SLP_EN_1_EC_REG_BANK_SLP_EN_Pos   (29)                                           /**< (PCR_SLP_EN_1) EC_REG_BANK Sleep Enable (EC_REG_BANK_SLP_EN) Position */
#define PCR_SLP_EN_1_EC_REG_BANK_SLP_EN_Msk   (0x1U << PCR_SLP_EN_1_EC_REG_BANK_SLP_EN_Pos)  /**< (PCR_SLP_EN_1) EC_REG_BANK Sleep Enable (EC_REG_BANK_SLP_EN) Mask */
#define PCR_SLP_EN_1_TIMER16_0_SLP_EN_Pos     (30)                                           /**< (PCR_SLP_EN_1) TIMER16_0 Sleep Enable (TIMER16_0_SLP_EN) Position */
#define PCR_SLP_EN_1_TIMER16_0_SLP_EN_Msk     (0x1U << PCR_SLP_EN_1_TIMER16_0_SLP_EN_Pos)    /**< (PCR_SLP_EN_1) TIMER16_0 Sleep Enable (TIMER16_0_SLP_EN) Mask */
#define PCR_SLP_EN_1_TIMER16_1_SLP_EN_Pos     (31)                                           /**< (PCR_SLP_EN_1) TIMER16_1 Sleep Enable (TIMER16_1_SLP_EN) Position */
#define PCR_SLP_EN_1_TIMER16_1_SLP_EN_Msk     (0x1U << PCR_SLP_EN_1_TIMER16_1_SLP_EN_Pos)    /**< (PCR_SLP_EN_1) TIMER16_1 Sleep Enable (TIMER16_1_SLP_EN) Mask */
#define PCR_SLP_EN_1_Msk                      (0xEFF03DF7UL)                                 /**< (PCR_SLP_EN_1) Register Mask  */

/* -------- PCR_SLP_EN_2 : (PCR Offset: 0x38) (R/W 32) Sleep Enable 2 Register -------- */

typedef union
{
  struct
  {
    uint32_t :1;                        /**< bit:      0  Reserved                                      */
    uint32_t UART_0_SLP_EN:1;           /**< bit:      1  UART 0 Sleep Enable                           */
    uint32_t UART_1_SLP_EN:1;           /**< bit:      2  UART 1 Sleep Enable                           */
    uint32_t :16;                       /**< bit:  3..18  Reserved                                      */
    uint32_t ESPI_SLP_EN:1;             /**< bit:     19  eSPI Sleep Enable                             */
    uint32_t :7;                        /**< bit: 20..26  Reserved                                      */
    uint32_t SAF_BRDG_SLP_EN:1;         /**< bit:     27  SAF BRIDGE Sleep Enable                       */
    uint32_t UART_2_SLP_EN:1;           /**< bit:     28  UART 2 Sleep Enable                           */
    uint32_t :3;                        /**< bit: 29..31  Reserved                                      */
  };
  uint32_t w;
} __PCR_SLP_EN_2_bits_t;
#define PCR_SLP_EN_2_RESETVALUE             (0x00U)                                       /**<  (PCR_SLP_EN_2) Sleep Enable 2 Register  Reset Value */

#define PCR_SLP_EN_2_UART_0_SLP_EN_Pos        (1)                                            /**< (PCR_SLP_EN_2) UART 0 Sleep Enable Position */
#define PCR_SLP_EN_2_UART_0_SLP_EN_Msk        (0x1U << PCR_SLP_EN_2_UART_0_SLP_EN_Pos)       /**< (PCR_SLP_EN_2) UART 0 Sleep Enable Mask */
#define PCR_SLP_EN_2_UART_1_SLP_EN_Pos        (2)                                            /**< (PCR_SLP_EN_2) UART 1 Sleep Enable Position */
#define PCR_SLP_EN_2_UART_1_SLP_EN_Msk        (0x1U << PCR_SLP_EN_2_UART_1_SLP_EN_Pos)       /**< (PCR_SLP_EN_2) UART 1 Sleep Enable Mask */
#define PCR_SLP_EN_2_ESPI_SLP_EN_Pos          (19)                                           /**< (PCR_SLP_EN_2) eSPI Sleep Enable Position */
#define PCR_SLP_EN_2_ESPI_SLP_EN_Msk          (0x1U << PCR_SLP_EN_2_ESPI_SLP_EN_Pos)         /**< (PCR_SLP_EN_2) eSPI Sleep Enable Mask */
#define PCR_SLP_EN_2_SAF_BRDG_SLP_EN_Pos      (27)                                           /**< (PCR_SLP_EN_2) SAF BRIDGE Sleep Enable Position */
#define PCR_SLP_EN_2_SAF_BRDG_SLP_EN_Msk      (0x1U << PCR_SLP_EN_2_SAF_BRDG_SLP_EN_Pos)     /**< (PCR_SLP_EN_2) SAF BRIDGE Sleep Enable Mask */
#define PCR_SLP_EN_2_UART_2_SLP_EN_Pos        (28)                                           /**< (PCR_SLP_EN_2) UART 2 Sleep Enable Position */
#define PCR_SLP_EN_2_UART_2_SLP_EN_Msk        (0x1U << PCR_SLP_EN_2_UART_2_SLP_EN_Pos)       /**< (PCR_SLP_EN_2) UART 2 Sleep Enable Mask */
#define PCR_SLP_EN_2_Msk                      (0x18080006UL)                                 /**< (PCR_SLP_EN_2) Register Mask  */

/* -------- PCR_SLP_EN_3 : (PCR Offset: 0x3c) (R/W 32) Sleep Enable 3 Register -------- */

typedef union
{
  struct
  {
    uint32_t :1;                        /**< bit:      0  Reserved                                      */
    uint32_t HDMI_CEC_SLP_EN:1;         /**< bit:      1  HDMI_CEC Sleep Enable (ADC_SLP_EN)            */
    uint32_t :1;                        /**< bit:      2  Reserved                                      */
    uint32_t ADC_SLP_EN:1;              /**< bit:      3  ADC Sleep Enable (ADC_SLP_EN)                 */
    uint32_t :1;                        /**< bit:      4  Reserved                                      */
    uint32_t PS2_0_SLP_EN:1;            /**< bit:      5  PS2_0 Sleep Enable (PS2_0_SLP_EN)             */
    uint32_t PS2_1_SLP_EN:1;            /**< bit:      6  PS2_1 Sleep Enable (PS2_1_SLP_EN)             */
    uint32_t :3;                        /**< bit:   7..9  Reserved                                      */
    uint32_t HTM_0_SLP_EN:1;            /**< bit:     10  Hibernation Timer 0 Sleep Enable (HTM_0_SLP_EN) */
    uint32_t :2;                        /**< bit: 11..12  Reserved                                      */
    uint32_t SMB1_SLP_EN:1;             /**< bit:     13  SMB1 Sleep Enable (SMB1_SLP_EN)               */
    uint32_t SMB2_SLP_EN:1;             /**< bit:     14  SMB2 Sleep Enable (SMB2_SLP_EN)               */
    uint32_t SMB3_SLP_EN:1;             /**< bit:     15  SMB3 Sleep Enable (SMB3_SLP_EN)               */
    uint32_t LED0_SLP_EN:1;             /**< bit:     16  LED0 Sleep Enable (LED0_SLP_EN)               */
    uint32_t LED1_SLP_EN:1;             /**< bit:     17  LED1 Sleep Enable (LED1_SLP_EN)               */
    uint32_t LED2_SLP_EN:1;             /**< bit:     18  LED2 Sleep Enable (LED2_SLP_EN)               */
    uint32_t :1;                        /**< bit:     19  Reserved                                      */
    uint32_t SMB4_SLP_EN:1;             /**< bit:     20  SMB4 Sleep Enable (SMB4_SLP_EN)               */
    uint32_t :2;                        /**< bit: 21..22  Reserved                                      */
    uint32_t TIMER32_0_SLP_EN:1;        /**< bit:     23  TIMER32_0 Sleep Enable (TIMER32_0_SLP_EN)     */
    uint32_t TIMER32_1_SLP_EN:1;        /**< bit:     24  TIMER32_1 Sleep Enable (TIMER32_1_SLP_EN)     */
    uint32_t :1;                        /**< bit:     25  Reserved                                      */
    uint32_t PKE_SLP_EN:1;              /**< bit:     26  PKE Sleep Enable                              */
    uint32_t RNG_SLP_EN:1;              /**< bit:     27  RNG Sleep Enable                              */
    uint32_t AES_HASH_SLP_EN:1;         /**< bit:     28  AES_HASH Sleep Enable                         */
    uint32_t HTM_1_SLP_EN:1;            /**< bit:     29  Hibernation TIMER 1 Sleep Enable (HTM_1_SLP_EN) */
    uint32_t CCTIMER_SLP_EN:1;          /**< bit:     30  Capture Compare Timer Sleep Enable (CCTIMER_SLP_EN) */
    uint32_t :1;                        /**< bit:     31  Reserved                                      */
  };
  uint32_t w;
} __PCR_SLP_EN_3_bits_t;
#define PCR_SLP_EN_3_RESETVALUE             (0x00U)                                       /**<  (PCR_SLP_EN_3) Sleep Enable 3 Register  Reset Value */

#define PCR_SLP_EN_3_HDMI_CEC_SLP_EN_Pos      (1)                                            /**< (PCR_SLP_EN_3) HDMI_CEC Sleep Enable (ADC_SLP_EN) Position */
#define PCR_SLP_EN_3_HDMI_CEC_SLP_EN_Msk      (0x1U << PCR_SLP_EN_3_HDMI_CEC_SLP_EN_Pos)     /**< (PCR_SLP_EN_3) HDMI_CEC Sleep Enable (ADC_SLP_EN) Mask */
#define PCR_SLP_EN_3_ADC_SLP_EN_Pos           (3)                                            /**< (PCR_SLP_EN_3) ADC Sleep Enable (ADC_SLP_EN) Position */
#define PCR_SLP_EN_3_ADC_SLP_EN_Msk           (0x1U << PCR_SLP_EN_3_ADC_SLP_EN_Pos)          /**< (PCR_SLP_EN_3) ADC Sleep Enable (ADC_SLP_EN) Mask */
#define PCR_SLP_EN_3_PS2_0_SLP_EN_Pos         (5)                                            /**< (PCR_SLP_EN_3) PS2_0 Sleep Enable (PS2_0_SLP_EN) Position */
#define PCR_SLP_EN_3_PS2_0_SLP_EN_Msk         (0x1U << PCR_SLP_EN_3_PS2_0_SLP_EN_Pos)        /**< (PCR_SLP_EN_3) PS2_0 Sleep Enable (PS2_0_SLP_EN) Mask */
#define PCR_SLP_EN_3_PS2_1_SLP_EN_Pos         (6)                                            /**< (PCR_SLP_EN_3) PS2_1 Sleep Enable (PS2_1_SLP_EN) Position */
#define PCR_SLP_EN_3_PS2_1_SLP_EN_Msk         (0x1U << PCR_SLP_EN_3_PS2_1_SLP_EN_Pos)        /**< (PCR_SLP_EN_3) PS2_1 Sleep Enable (PS2_1_SLP_EN) Mask */
#define PCR_SLP_EN_3_HTM_0_SLP_EN_Pos         (10)                                           /**< (PCR_SLP_EN_3) Hibernation Timer 0 Sleep Enable (HTM_0_SLP_EN) Position */
#define PCR_SLP_EN_3_HTM_0_SLP_EN_Msk         (0x1U << PCR_SLP_EN_3_HTM_0_SLP_EN_Pos)        /**< (PCR_SLP_EN_3) Hibernation Timer 0 Sleep Enable (HTM_0_SLP_EN) Mask */
#define PCR_SLP_EN_3_SMB1_SLP_EN_Pos          (13)                                           /**< (PCR_SLP_EN_3) SMB1 Sleep Enable (SMB1_SLP_EN) Position */
#define PCR_SLP_EN_3_SMB1_SLP_EN_Msk          (0x1U << PCR_SLP_EN_3_SMB1_SLP_EN_Pos)         /**< (PCR_SLP_EN_3) SMB1 Sleep Enable (SMB1_SLP_EN) Mask */
#define PCR_SLP_EN_3_SMB2_SLP_EN_Pos          (14)                                           /**< (PCR_SLP_EN_3) SMB2 Sleep Enable (SMB2_SLP_EN) Position */
#define PCR_SLP_EN_3_SMB2_SLP_EN_Msk          (0x1U << PCR_SLP_EN_3_SMB2_SLP_EN_Pos)         /**< (PCR_SLP_EN_3) SMB2 Sleep Enable (SMB2_SLP_EN) Mask */
#define PCR_SLP_EN_3_SMB3_SLP_EN_Pos          (15)                                           /**< (PCR_SLP_EN_3) SMB3 Sleep Enable (SMB3_SLP_EN) Position */
#define PCR_SLP_EN_3_SMB3_SLP_EN_Msk          (0x1U << PCR_SLP_EN_3_SMB3_SLP_EN_Pos)         /**< (PCR_SLP_EN_3) SMB3 Sleep Enable (SMB3_SLP_EN) Mask */
#define PCR_SLP_EN_3_LED0_SLP_EN_Pos          (16)                                           /**< (PCR_SLP_EN_3) LED0 Sleep Enable (LED0_SLP_EN) Position */
#define PCR_SLP_EN_3_LED0_SLP_EN_Msk          (0x1U << PCR_SLP_EN_3_LED0_SLP_EN_Pos)         /**< (PCR_SLP_EN_3) LED0 Sleep Enable (LED0_SLP_EN) Mask */
#define PCR_SLP_EN_3_LED1_SLP_EN_Pos          (17)                                           /**< (PCR_SLP_EN_3) LED1 Sleep Enable (LED1_SLP_EN) Position */
#define PCR_SLP_EN_3_LED1_SLP_EN_Msk          (0x1U << PCR_SLP_EN_3_LED1_SLP_EN_Pos)         /**< (PCR_SLP_EN_3) LED1 Sleep Enable (LED1_SLP_EN) Mask */
#define PCR_SLP_EN_3_LED2_SLP_EN_Pos          (18)                                           /**< (PCR_SLP_EN_3) LED2 Sleep Enable (LED2_SLP_EN) Position */
#define PCR_SLP_EN_3_LED2_SLP_EN_Msk          (0x1U << PCR_SLP_EN_3_LED2_SLP_EN_Pos)         /**< (PCR_SLP_EN_3) LED2 Sleep Enable (LED2_SLP_EN) Mask */
#define PCR_SLP_EN_3_SMB4_SLP_EN_Pos          (20)                                           /**< (PCR_SLP_EN_3) SMB4 Sleep Enable (SMB4_SLP_EN) Position */
#define PCR_SLP_EN_3_SMB4_SLP_EN_Msk          (0x1U << PCR_SLP_EN_3_SMB4_SLP_EN_Pos)         /**< (PCR_SLP_EN_3) SMB4 Sleep Enable (SMB4_SLP_EN) Mask */
#define PCR_SLP_EN_3_TIMER32_0_SLP_EN_Pos     (23)                                           /**< (PCR_SLP_EN_3) TIMER32_0 Sleep Enable (TIMER32_0_SLP_EN) Position */
#define PCR_SLP_EN_3_TIMER32_0_SLP_EN_Msk     (0x1U << PCR_SLP_EN_3_TIMER32_0_SLP_EN_Pos)    /**< (PCR_SLP_EN_3) TIMER32_0 Sleep Enable (TIMER32_0_SLP_EN) Mask */
#define PCR_SLP_EN_3_TIMER32_1_SLP_EN_Pos     (24)                                           /**< (PCR_SLP_EN_3) TIMER32_1 Sleep Enable (TIMER32_1_SLP_EN) Position */
#define PCR_SLP_EN_3_TIMER32_1_SLP_EN_Msk     (0x1U << PCR_SLP_EN_3_TIMER32_1_SLP_EN_Pos)    /**< (PCR_SLP_EN_3) TIMER32_1 Sleep Enable (TIMER32_1_SLP_EN) Mask */
#define PCR_SLP_EN_3_PKE_SLP_EN_Pos           (26)                                           /**< (PCR_SLP_EN_3) PKE Sleep Enable Position */
#define PCR_SLP_EN_3_PKE_SLP_EN_Msk           (0x1U << PCR_SLP_EN_3_PKE_SLP_EN_Pos)          /**< (PCR_SLP_EN_3) PKE Sleep Enable Mask */
#define PCR_SLP_EN_3_RNG_SLP_EN_Pos           (27)                                           /**< (PCR_SLP_EN_3) RNG Sleep Enable Position */
#define PCR_SLP_EN_3_RNG_SLP_EN_Msk           (0x1U << PCR_SLP_EN_3_RNG_SLP_EN_Pos)          /**< (PCR_SLP_EN_3) RNG Sleep Enable Mask */
#define PCR_SLP_EN_3_AES_HASH_SLP_EN_Pos      (28)                                           /**< (PCR_SLP_EN_3) AES_HASH Sleep Enable Position */
#define PCR_SLP_EN_3_AES_HASH_SLP_EN_Msk      (0x1U << PCR_SLP_EN_3_AES_HASH_SLP_EN_Pos)     /**< (PCR_SLP_EN_3) AES_HASH Sleep Enable Mask */
#define PCR_SLP_EN_3_HTM_1_SLP_EN_Pos         (29)                                           /**< (PCR_SLP_EN_3) Hibernation TIMER 1 Sleep Enable (HTM_1_SLP_EN) Position */
#define PCR_SLP_EN_3_HTM_1_SLP_EN_Msk         (0x1U << PCR_SLP_EN_3_HTM_1_SLP_EN_Pos)        /**< (PCR_SLP_EN_3) Hibernation TIMER 1 Sleep Enable (HTM_1_SLP_EN) Mask */
#define PCR_SLP_EN_3_CCTIMER_SLP_EN_Pos       (30)                                           /**< (PCR_SLP_EN_3) Capture Compare Timer Sleep Enable (CCTIMER_SLP_EN) Position */
#define PCR_SLP_EN_3_CCTIMER_SLP_EN_Msk       (0x1U << PCR_SLP_EN_3_CCTIMER_SLP_EN_Pos)      /**< (PCR_SLP_EN_3) Capture Compare Timer Sleep Enable (CCTIMER_SLP_EN) Mask */
#define PCR_SLP_EN_3_Msk                      (0x7D97E46AUL)                                 /**< (PCR_SLP_EN_3) Register Mask  */

/* -------- PCR_SLP_EN_4 : (PCR Offset: 0x40) (R/W 32) Sleep Enable 4 Register -------- */

typedef union
{
  struct
  {
    uint32_t :8;                        /**< bit:   0..7  Reserved                                      */
    uint32_t QMSPI_SLP_EN:1;            /**< bit:      8  Quad Master SPI Sleep Enable                  */
    uint32_t :1;                        /**< bit:      9  Reserved                                      */
    uint32_t I2C5_SLP_EN:1;             /**< bit:     10  I2C5 Sleep Enable (I2C5_SLP_EN)               */
    uint32_t I2C6_SLP_EN:1;             /**< bit:     11  I2C6 Sleep Enable (I2C6_SLP_EN)               */
    uint32_t I2C7_SLP_EN:1;             /**< bit:     12  I2C7 Sleep Enable (I2C7_SLP_EN)               */
    uint32_t :4;                        /**< bit: 13..16  Reserved                                      */
    uint32_t SGPIO0_SLP_EN:1;           /**< bit:     17  SGPIO0 Sleep Enable (SGPIO0_SLP_EN)           */
    uint32_t SGPIO1_SLP_EN:1;           /**< bit:     18  SGPIO1 Sleep Enable (SGPIO1_SLP_EN)           */
    uint32_t SGPIO2_SLP_EN:1;           /**< bit:     19  SGPIO2 Sleep Enable (SGPIO2_SLP_EN)           */
    uint32_t SGPIO3_SLP_EN:1;           /**< bit:     20  SGPIO3 Sleep Enable (SGPIO3_SLP_EN)           */
    uint32_t :11;                       /**< bit: 21..31  Reserved                                      */
  };
  uint32_t w;
} __PCR_SLP_EN_4_bits_t;
#define PCR_SLP_EN_4_RESETVALUE             (0x00U)                                       /**<  (PCR_SLP_EN_4) Sleep Enable 4 Register  Reset Value */

#define PCR_SLP_EN_4_QMSPI_SLP_EN_Pos         (8)                                            /**< (PCR_SLP_EN_4) Quad Master SPI Sleep Enable Position */
#define PCR_SLP_EN_4_QMSPI_SLP_EN_Msk         (0x1U << PCR_SLP_EN_4_QMSPI_SLP_EN_Pos)        /**< (PCR_SLP_EN_4) Quad Master SPI Sleep Enable Mask */
#define PCR_SLP_EN_4_I2C5_SLP_EN_Pos          (10)                                           /**< (PCR_SLP_EN_4) I2C5 Sleep Enable (I2C5_SLP_EN) Position */
#define PCR_SLP_EN_4_I2C5_SLP_EN_Msk          (0x1U << PCR_SLP_EN_4_I2C5_SLP_EN_Pos)         /**< (PCR_SLP_EN_4) I2C5 Sleep Enable (I2C5_SLP_EN) Mask */
#define PCR_SLP_EN_4_I2C6_SLP_EN_Pos          (11)                                           /**< (PCR_SLP_EN_4) I2C6 Sleep Enable (I2C6_SLP_EN) Position */
#define PCR_SLP_EN_4_I2C6_SLP_EN_Msk          (0x1U << PCR_SLP_EN_4_I2C6_SLP_EN_Pos)         /**< (PCR_SLP_EN_4) I2C6 Sleep Enable (I2C6_SLP_EN) Mask */
#define PCR_SLP_EN_4_I2C7_SLP_EN_Pos          (12)                                           /**< (PCR_SLP_EN_4) I2C7 Sleep Enable (I2C7_SLP_EN) Position */
#define PCR_SLP_EN_4_I2C7_SLP_EN_Msk          (0x1U << PCR_SLP_EN_4_I2C7_SLP_EN_Pos)         /**< (PCR_SLP_EN_4) I2C7 Sleep Enable (I2C7_SLP_EN) Mask */
#define PCR_SLP_EN_4_SGPIO0_SLP_EN_Pos        (17)                                           /**< (PCR_SLP_EN_4) SGPIO0 Sleep Enable (SGPIO0_SLP_EN) Position */
#define PCR_SLP_EN_4_SGPIO0_SLP_EN_Msk        (0x1U << PCR_SLP_EN_4_SGPIO0_SLP_EN_Pos)       /**< (PCR_SLP_EN_4) SGPIO0 Sleep Enable (SGPIO0_SLP_EN) Mask */
#define PCR_SLP_EN_4_SGPIO1_SLP_EN_Pos        (18)                                           /**< (PCR_SLP_EN_4) SGPIO1 Sleep Enable (SGPIO1_SLP_EN) Position */
#define PCR_SLP_EN_4_SGPIO1_SLP_EN_Msk        (0x1U << PCR_SLP_EN_4_SGPIO1_SLP_EN_Pos)       /**< (PCR_SLP_EN_4) SGPIO1 Sleep Enable (SGPIO1_SLP_EN) Mask */
#define PCR_SLP_EN_4_SGPIO2_SLP_EN_Pos        (19)                                           /**< (PCR_SLP_EN_4) SGPIO2 Sleep Enable (SGPIO2_SLP_EN) Position */
#define PCR_SLP_EN_4_SGPIO2_SLP_EN_Msk        (0x1U << PCR_SLP_EN_4_SGPIO2_SLP_EN_Pos)       /**< (PCR_SLP_EN_4) SGPIO2 Sleep Enable (SGPIO2_SLP_EN) Mask */
#define PCR_SLP_EN_4_SGPIO3_SLP_EN_Pos        (20)                                           /**< (PCR_SLP_EN_4) SGPIO3 Sleep Enable (SGPIO3_SLP_EN) Position */
#define PCR_SLP_EN_4_SGPIO3_SLP_EN_Msk        (0x1U << PCR_SLP_EN_4_SGPIO3_SLP_EN_Pos)       /**< (PCR_SLP_EN_4) SGPIO3 Sleep Enable (SGPIO3_SLP_EN) Mask */
#define PCR_SLP_EN_4_Msk                      (0x001E1D00UL)                                 /**< (PCR_SLP_EN_4) Register Mask  */

/* -------- PCR_CLK_REQ_0 : (PCR Offset: 0x50) (R/W 32) Clock Required 0 Register -------- */

typedef union
{
  struct
  {
    uint32_t JTAG_STAP_CLK_REQ:1;       /**< bit:      0  JTAG STAP Enable                              */
    uint32_t OTP_CLK_REQ:1;             /**< bit:      1  eFuse Enable                                  */
    uint32_t :30;                       /**< bit:  2..31  Reserved                                      */
  };
  uint32_t w;
} __PCR_CLK_REQ_0_bits_t;
#define PCR_CLK_REQ_0_RESETVALUE            (0x00U)                                       /**<  (PCR_CLK_REQ_0) Clock Required 0 Register  Reset Value */

#define PCR_CLK_REQ_0_JTAG_STAP_CLK_REQ_Pos   (0)                                            /**< (PCR_CLK_REQ_0) JTAG STAP Enable Position */
#define PCR_CLK_REQ_0_JTAG_STAP_CLK_REQ_Msk   (0x1U << PCR_CLK_REQ_0_JTAG_STAP_CLK_REQ_Pos)  /**< (PCR_CLK_REQ_0) JTAG STAP Enable Mask */
#define PCR_CLK_REQ_0_OTP_CLK_REQ_Pos         (1)                                            /**< (PCR_CLK_REQ_0) eFuse Enable Position */
#define PCR_CLK_REQ_0_OTP_CLK_REQ_Msk         (0x1U << PCR_CLK_REQ_0_OTP_CLK_REQ_Pos)        /**< (PCR_CLK_REQ_0) eFuse Enable Mask */
#define PCR_CLK_REQ_0_Msk                     (0x00000003UL)                                 /**< (PCR_CLK_REQ_0) Register Mask  */

/* -------- PCR_CLK_REQ_1 : (PCR Offset: 0x54) (R/W 32) Clock Required 1 Register -------- */

typedef union
{
  struct
  {
    uint32_t INT_CLK_REQ:1;             /**< bit:      0  Interrupt Clock Required                      */
    uint32_t PECI_CLK_REQ:1;            /**< bit:      1  PECI Clock Required                           */
    uint32_t TACH0_CLK_REQ:1;           /**< bit:      2  TACH0 Clock Required (TACH0_CLK_REQ)          */
    uint32_t :1;                        /**< bit:      3  Reserved                                      */
    uint32_t PWM0_CLK_REQ:1;            /**< bit:      4  PWM0 Clock Required (PWM0_CLK_REQ)            */
    uint32_t PMC_CLK_REQ:1;             /**< bit:      5  PMC Clock Required (PMC_CLK_REQ)              */
    uint32_t DMA_CLK_REQ:1;             /**< bit:      6  DMA Clock Required (DMA_CLK_REQ)              */
    uint32_t TFDP_CLK_REQ:1;            /**< bit:      7  TFDP Clock Required (TFDP_CLK_REQ)            */
    uint32_t PROCESSOR_CLK_REQ:1;       /**< bit:      8  PROCESSOR Clock Required (PROCESSOR_CLK_REQ)  */
    uint32_t WDT_CLK_REQ:1;             /**< bit:      9  WDT Clock Required (WDT_CLK_REQ)              */
    uint32_t SMB0_CLK_REQ:1;            /**< bit:     10  SMB0 Clock Required (SMB0_CLK_REQ)            */
    uint32_t TACH1_CLK_REQ:1;           /**< bit:     11  TACH1 Clock Required (TACH1_CLK_REQ)          */
    uint32_t TACH2_CLK_REQ:1;           /**< bit:     12  TACH2 Clock Required (TACH2_CLK_REQ)          */
    uint32_t TACH3_CLK_REQ:1;           /**< bit:     13  TACH3 Clock Required (TACH3_CLK_REQ)          */
    uint32_t :6;                        /**< bit: 14..19  Reserved                                      */
    uint32_t PWM1_CLK_REQ:1;            /**< bit:     20  PWM1 Clock Required (PWM1_CLK_REQ)            */
    uint32_t PWM2_CLK_REQ:1;            /**< bit:     21  PWM2 Clock Required (PWM2_CLK_REQ)            */
    uint32_t PWM3_CLK_REQ:1;            /**< bit:     22  PWM3 Clock Required (PWM3_CLK_REQ)            */
    uint32_t PWM4_CLK_REQ:1;            /**< bit:     23  PWM4 Clock Required (PWM4_CLK_REQ)            */
    uint32_t PWM5_CLK_REQ:1;            /**< bit:     24  PWM3 Clock Required (PWM5_CLK_REQ)            */
    uint32_t PWM6_CLK_REQ:1;            /**< bit:     25  PWM3 Clock Required (PWM6_CLK_REQ)            */
    uint32_t PWM7_CLK_REQ:1;            /**< bit:     26  PWM3 Clock Required (PWM7_CLK_REQ)            */
    uint32_t PWM8_CLK_REQ:1;            /**< bit:     27  PWM3 Clock Required (PWM8_CLK_REQ)            */
    uint32_t :1;                        /**< bit:     28  Reserved                                      */
    uint32_t EC_REG_BANK_CLK_REQ:1;     /**< bit:     29  EC_REG_BANK Clock Required (EC_REG_BANK_CLK_REQ) */
    uint32_t TIMER16_0_CLK_REQ:1;       /**< bit:     30  TIMER16_0 Clock Required (TIMER16_0_CLK_REQ)  */
    uint32_t TIMER16_1_CLK_REQ:1;       /**< bit:     31  TIMER16_1 Clock Required (TIMER16_1_CLK_REQ)  */
  };
  uint32_t w;
} __PCR_CLK_REQ_1_bits_t;
#define PCR_CLK_REQ_1_RESETVALUE            (0x00U)                                       /**<  (PCR_CLK_REQ_1) Clock Required 1 Register  Reset Value */

#define PCR_CLK_REQ_1_INT_CLK_REQ_Pos         (0)                                            /**< (PCR_CLK_REQ_1) Interrupt Clock Required Position */
#define PCR_CLK_REQ_1_INT_CLK_REQ_Msk         (0x1U << PCR_CLK_REQ_1_INT_CLK_REQ_Pos)        /**< (PCR_CLK_REQ_1) Interrupt Clock Required Mask */
#define PCR_CLK_REQ_1_PECI_CLK_REQ_Pos        (1)                                            /**< (PCR_CLK_REQ_1) PECI Clock Required Position */
#define PCR_CLK_REQ_1_PECI_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_1_PECI_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_1) PECI Clock Required Mask */
#define PCR_CLK_REQ_1_TACH0_CLK_REQ_Pos       (2)                                            /**< (PCR_CLK_REQ_1) TACH0 Clock Required (TACH0_CLK_REQ) Position */
#define PCR_CLK_REQ_1_TACH0_CLK_REQ_Msk       (0x1U << PCR_CLK_REQ_1_TACH0_CLK_REQ_Pos)      /**< (PCR_CLK_REQ_1) TACH0 Clock Required (TACH0_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_PWM0_CLK_REQ_Pos        (4)                                            /**< (PCR_CLK_REQ_1) PWM0 Clock Required (PWM0_CLK_REQ) Position */
#define PCR_CLK_REQ_1_PWM0_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_1_PWM0_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_1) PWM0 Clock Required (PWM0_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_PMC_CLK_REQ_Pos         (5)                                            /**< (PCR_CLK_REQ_1) PMC Clock Required (PMC_CLK_REQ) Position */
#define PCR_CLK_REQ_1_PMC_CLK_REQ_Msk         (0x1U << PCR_CLK_REQ_1_PMC_CLK_REQ_Pos)        /**< (PCR_CLK_REQ_1) PMC Clock Required (PMC_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_DMA_CLK_REQ_Pos         (6)                                            /**< (PCR_CLK_REQ_1) DMA Clock Required (DMA_CLK_REQ) Position */
#define PCR_CLK_REQ_1_DMA_CLK_REQ_Msk         (0x1U << PCR_CLK_REQ_1_DMA_CLK_REQ_Pos)        /**< (PCR_CLK_REQ_1) DMA Clock Required (DMA_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_TFDP_CLK_REQ_Pos        (7)                                            /**< (PCR_CLK_REQ_1) TFDP Clock Required (TFDP_CLK_REQ) Position */
#define PCR_CLK_REQ_1_TFDP_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_1_TFDP_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_1) TFDP Clock Required (TFDP_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_PROCESSOR_CLK_REQ_Pos   (8)                                            /**< (PCR_CLK_REQ_1) PROCESSOR Clock Required (PROCESSOR_CLK_REQ) Position */
#define PCR_CLK_REQ_1_PROCESSOR_CLK_REQ_Msk   (0x1U << PCR_CLK_REQ_1_PROCESSOR_CLK_REQ_Pos)  /**< (PCR_CLK_REQ_1) PROCESSOR Clock Required (PROCESSOR_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_WDT_CLK_REQ_Pos         (9)                                            /**< (PCR_CLK_REQ_1) WDT Clock Required (WDT_CLK_REQ) Position */
#define PCR_CLK_REQ_1_WDT_CLK_REQ_Msk         (0x1U << PCR_CLK_REQ_1_WDT_CLK_REQ_Pos)        /**< (PCR_CLK_REQ_1) WDT Clock Required (WDT_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_SMB0_CLK_REQ_Pos        (10)                                           /**< (PCR_CLK_REQ_1) SMB0 Clock Required (SMB0_CLK_REQ) Position */
#define PCR_CLK_REQ_1_SMB0_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_1_SMB0_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_1) SMB0 Clock Required (SMB0_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_TACH1_CLK_REQ_Pos       (11)                                           /**< (PCR_CLK_REQ_1) TACH1 Clock Required (TACH1_CLK_REQ) Position */
#define PCR_CLK_REQ_1_TACH1_CLK_REQ_Msk       (0x1U << PCR_CLK_REQ_1_TACH1_CLK_REQ_Pos)      /**< (PCR_CLK_REQ_1) TACH1 Clock Required (TACH1_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_TACH2_CLK_REQ_Pos       (12)                                           /**< (PCR_CLK_REQ_1) TACH2 Clock Required (TACH2_CLK_REQ) Position */
#define PCR_CLK_REQ_1_TACH2_CLK_REQ_Msk       (0x1U << PCR_CLK_REQ_1_TACH2_CLK_REQ_Pos)      /**< (PCR_CLK_REQ_1) TACH2 Clock Required (TACH2_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_TACH3_CLK_REQ_Pos       (13)                                           /**< (PCR_CLK_REQ_1) TACH3 Clock Required (TACH3_CLK_REQ) Position */
#define PCR_CLK_REQ_1_TACH3_CLK_REQ_Msk       (0x1U << PCR_CLK_REQ_1_TACH3_CLK_REQ_Pos)      /**< (PCR_CLK_REQ_1) TACH3 Clock Required (TACH3_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_PWM1_CLK_REQ_Pos        (20)                                           /**< (PCR_CLK_REQ_1) PWM1 Clock Required (PWM1_CLK_REQ) Position */
#define PCR_CLK_REQ_1_PWM1_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_1_PWM1_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_1) PWM1 Clock Required (PWM1_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_PWM2_CLK_REQ_Pos        (21)                                           /**< (PCR_CLK_REQ_1) PWM2 Clock Required (PWM2_CLK_REQ) Position */
#define PCR_CLK_REQ_1_PWM2_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_1_PWM2_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_1) PWM2 Clock Required (PWM2_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_PWM3_CLK_REQ_Pos        (22)                                           /**< (PCR_CLK_REQ_1) PWM3 Clock Required (PWM3_CLK_REQ) Position */
#define PCR_CLK_REQ_1_PWM3_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_1_PWM3_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_1) PWM3 Clock Required (PWM3_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_PWM4_CLK_REQ_Pos        (23)                                           /**< (PCR_CLK_REQ_1) PWM4 Clock Required (PWM4_CLK_REQ) Position */
#define PCR_CLK_REQ_1_PWM4_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_1_PWM4_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_1) PWM4 Clock Required (PWM4_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_PWM5_CLK_REQ_Pos        (24)                                           /**< (PCR_CLK_REQ_1) PWM3 Clock Required (PWM5_CLK_REQ) Position */
#define PCR_CLK_REQ_1_PWM5_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_1_PWM5_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_1) PWM3 Clock Required (PWM5_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_PWM6_CLK_REQ_Pos        (25)                                           /**< (PCR_CLK_REQ_1) PWM3 Clock Required (PWM6_CLK_REQ) Position */
#define PCR_CLK_REQ_1_PWM6_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_1_PWM6_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_1) PWM3 Clock Required (PWM6_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_PWM7_CLK_REQ_Pos        (26)                                           /**< (PCR_CLK_REQ_1) PWM3 Clock Required (PWM7_CLK_REQ) Position */
#define PCR_CLK_REQ_1_PWM7_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_1_PWM7_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_1) PWM3 Clock Required (PWM7_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_PWM8_CLK_REQ_Pos        (27)                                           /**< (PCR_CLK_REQ_1) PWM3 Clock Required (PWM8_CLK_REQ) Position */
#define PCR_CLK_REQ_1_PWM8_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_1_PWM8_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_1) PWM3 Clock Required (PWM8_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_EC_REG_BANK_CLK_REQ_Pos (29)                                           /**< (PCR_CLK_REQ_1) EC_REG_BANK Clock Required (EC_REG_BANK_CLK_REQ) Position */
#define PCR_CLK_REQ_1_EC_REG_BANK_CLK_REQ_Msk (0x1U << PCR_CLK_REQ_1_EC_REG_BANK_CLK_REQ_Pos)  /**< (PCR_CLK_REQ_1) EC_REG_BANK Clock Required (EC_REG_BANK_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_TIMER16_0_CLK_REQ_Pos   (30)                                           /**< (PCR_CLK_REQ_1) TIMER16_0 Clock Required (TIMER16_0_CLK_REQ) Position */
#define PCR_CLK_REQ_1_TIMER16_0_CLK_REQ_Msk   (0x1U << PCR_CLK_REQ_1_TIMER16_0_CLK_REQ_Pos)  /**< (PCR_CLK_REQ_1) TIMER16_0 Clock Required (TIMER16_0_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_TIMER16_1_CLK_REQ_Pos   (31)                                           /**< (PCR_CLK_REQ_1) TIMER16_1 Clock Required (TIMER16_1_CLK_REQ) Position */
#define PCR_CLK_REQ_1_TIMER16_1_CLK_REQ_Msk   (0x1U << PCR_CLK_REQ_1_TIMER16_1_CLK_REQ_Pos)  /**< (PCR_CLK_REQ_1) TIMER16_1 Clock Required (TIMER16_1_CLK_REQ) Mask */
#define PCR_CLK_REQ_1_Msk                     (0xEFF03FF7UL)                                 /**< (PCR_CLK_REQ_1) Register Mask  */

/* -------- PCR_CLK_REQ_2 : (PCR Offset: 0x58) (R/W 32) Clock Required 2 Register -------- */

typedef union
{
  struct
  {
    uint32_t IMAP_CLK_REQ:1;            /**< bit:      0  IMAP Clock Required (IMAP_CLK_REQ)            */
    uint32_t UART_0_CLK_REQ:1;          /**< bit:      1  UART 0 Clock Required                         */
    uint32_t UART_1_CLK_REQ:1;          /**< bit:      2  UART 1 Clock Required                         */
    uint32_t :9;                        /**< bit:  3..11  Reserved                                      */
    uint32_t GLBL_CFG_CLK_REQ:1;        /**< bit:     12  GLBL_CFG (GLBL_CFG_CLK_REQ)                   */
    uint32_t :3;                        /**< bit: 13..15  Reserved                                      */
    uint32_t KBCEM_CLK_REQ:1;           /**< bit:     16  8042EM Clock Required (8042EM_CLK_REQ)        */
    uint32_t :1;                        /**< bit:     17  Reserved                                      */
    uint32_t RTC_CLK_REQ:1;             /**< bit:     18  RTC Clock Required (RTC_CLK_REQ)              */
    uint32_t ESPI_CLK_REQ:1;            /**< bit:     19  eSPI Clock Required                           */
    uint32_t :7;                        /**< bit: 20..26  Reserved                                      */
    uint32_t SAF_BRDG_CLK_REQ:1;        /**< bit:     27  SAF BRIDGE Clock Required                     */
    uint32_t UART_2_CLK_REQ:1;          /**< bit:     28  UART 2 Clock Required                         */
    uint32_t :3;                        /**< bit: 29..31  Reserved                                      */
  };
  uint32_t w;
} __PCR_CLK_REQ_2_bits_t;
#define PCR_CLK_REQ_2_RESETVALUE            (0x00U)                                       /**<  (PCR_CLK_REQ_2) Clock Required 2 Register  Reset Value */

#define PCR_CLK_REQ_2_IMAP_CLK_REQ_Pos        (0)                                            /**< (PCR_CLK_REQ_2) IMAP Clock Required (IMAP_CLK_REQ) Position */
#define PCR_CLK_REQ_2_IMAP_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_2_IMAP_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_2) IMAP Clock Required (IMAP_CLK_REQ) Mask */
#define PCR_CLK_REQ_2_UART_0_CLK_REQ_Pos      (1)                                            /**< (PCR_CLK_REQ_2) UART 0 Clock Required Position */
#define PCR_CLK_REQ_2_UART_0_CLK_REQ_Msk      (0x1U << PCR_CLK_REQ_2_UART_0_CLK_REQ_Pos)     /**< (PCR_CLK_REQ_2) UART 0 Clock Required Mask */
#define PCR_CLK_REQ_2_UART_1_CLK_REQ_Pos      (2)                                            /**< (PCR_CLK_REQ_2) UART 1 Clock Required Position */
#define PCR_CLK_REQ_2_UART_1_CLK_REQ_Msk      (0x1U << PCR_CLK_REQ_2_UART_1_CLK_REQ_Pos)     /**< (PCR_CLK_REQ_2) UART 1 Clock Required Mask */
#define PCR_CLK_REQ_2_GLBL_CFG_CLK_REQ_Pos    (12)                                           /**< (PCR_CLK_REQ_2) GLBL_CFG (GLBL_CFG_CLK_REQ) Position */
#define PCR_CLK_REQ_2_GLBL_CFG_CLK_REQ_Msk    (0x1U << PCR_CLK_REQ_2_GLBL_CFG_CLK_REQ_Pos)   /**< (PCR_CLK_REQ_2) GLBL_CFG (GLBL_CFG_CLK_REQ) Mask */
#define PCR_CLK_REQ_2_KBCEM_CLK_REQ_Pos       (16)                                           /**< (PCR_CLK_REQ_2) 8042EM Clock Required (8042EM_CLK_REQ) Position */
#define PCR_CLK_REQ_2_KBCEM_CLK_REQ_Msk       (0x1U << PCR_CLK_REQ_2_KBCEM_CLK_REQ_Pos)      /**< (PCR_CLK_REQ_2) 8042EM Clock Required (8042EM_CLK_REQ) Mask */
#define PCR_CLK_REQ_2_RTC_CLK_REQ_Pos         (18)                                           /**< (PCR_CLK_REQ_2) RTC Clock Required (RTC_CLK_REQ) Position */
#define PCR_CLK_REQ_2_RTC_CLK_REQ_Msk         (0x1U << PCR_CLK_REQ_2_RTC_CLK_REQ_Pos)        /**< (PCR_CLK_REQ_2) RTC Clock Required (RTC_CLK_REQ) Mask */
#define PCR_CLK_REQ_2_ESPI_CLK_REQ_Pos        (19)                                           /**< (PCR_CLK_REQ_2) eSPI Clock Required Position */
#define PCR_CLK_REQ_2_ESPI_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_2_ESPI_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_2) eSPI Clock Required Mask */
#define PCR_CLK_REQ_2_SAF_BRDG_CLK_REQ_Pos    (27)                                           /**< (PCR_CLK_REQ_2) SAF BRIDGE Clock Required Position */
#define PCR_CLK_REQ_2_SAF_BRDG_CLK_REQ_Msk    (0x1U << PCR_CLK_REQ_2_SAF_BRDG_CLK_REQ_Pos)   /**< (PCR_CLK_REQ_2) SAF BRIDGE Clock Required Mask */
#define PCR_CLK_REQ_2_UART_2_CLK_REQ_Pos      (28)                                           /**< (PCR_CLK_REQ_2) UART 2 Clock Required Position */
#define PCR_CLK_REQ_2_UART_2_CLK_REQ_Msk      (0x1U << PCR_CLK_REQ_2_UART_2_CLK_REQ_Pos)     /**< (PCR_CLK_REQ_2) UART 2 Clock Required Mask */
#define PCR_CLK_REQ_2_Msk                     (0x180D1007UL)                                 /**< (PCR_CLK_REQ_2) Register Mask  */

/* -------- PCR_CLK_REQ_3 : (PCR Offset: 0x5c) (R/W 32) Clock Required 3 Register -------- */

typedef union
{
  struct
  {
    uint32_t :1;                        /**< bit:      0  Reserved                                      */
    uint32_t HDMI_CEC_CLK_REQ:1;        /**< bit:      1  HDMI_CEC Clock Required (ADC_CLK_REQ)         */
    uint32_t :1;                        /**< bit:      2  Reserved                                      */
    uint32_t ADC_CLK_REQ:1;             /**< bit:      3  ADC Clock Required (ADC_CLK_REQ)              */
    uint32_t :1;                        /**< bit:      4  Reserved                                      */
    uint32_t PS2_0_CLK_REQ:1;           /**< bit:      5  PS2_0 Clock Required (PS2_0_CLK_REQ)          */
    uint32_t PS2_1_CLK_REQ:1;           /**< bit:      6  PS2_1 Clock Required (PS2_1_CLK_REQ)          */
    uint32_t :3;                        /**< bit:   7..9  Reserved                                      */
    uint32_t HTM_0_CLK_REQ:1;           /**< bit:     10  Hibernation TIMER 0 Clock Required (HTM_0_CLK_REQ) */
    uint32_t KMS_CLK_REQ:1;             /**< bit:     11  KEYSCAN Clock Required (KMS_CLK_REQ)          */
    uint32_t :1;                        /**< bit:     12  Reserved                                      */
    uint32_t SMB1_CLK_REQ:1;            /**< bit:     13  SMB1 Clock Required (SMB1_CLK_REQ)            */
    uint32_t SMB2_CLK_REQ:1;            /**< bit:     14  SMB2 Clock Required (SMB2_CLK_REQ)            */
    uint32_t SMB3_CLK_REQ:1;            /**< bit:     15  SMB3 Clock Required (SMB3_CLK_REQ)            */
    uint32_t LED0_CLK_REQ:1;            /**< bit:     16  LED0 Clock Required (LED0_CLK_REQ)            */
    uint32_t LED1_CLK_REQ:1;            /**< bit:     17  LED1 Clock Required (LED1_CLK_REQ)            */
    uint32_t LED2_CLK_REQ:1;            /**< bit:     18  LED2 Clock Required (LED2_CLK_REQ)            */
    uint32_t :1;                        /**< bit:     19  Reserved                                      */
    uint32_t SMB_4_CLK_REQ:1;           /**< bit:     20  SMB 4 Clock Required (SMB_4_CLK_REQ)          */
    uint32_t :2;                        /**< bit: 21..22  Reserved                                      */
    uint32_t TIMER32_0_CLK_REQ:1;       /**< bit:     23  TIMER32_0 Clock Required (TIMER32_0_CLK_REQ)  */
    uint32_t TIMER32_1_CLK_REQ:1;       /**< bit:     24  TIMER32_1 Clock Required (TIMER32_1_CLK_REQ)  */
    uint32_t :1;                        /**< bit:     25  Reserved                                      */
    uint32_t PKE_CLK_REQ:1;             /**< bit:     26  PKE Clock Required                            */
    uint32_t RNG_CLK_REQ:1;             /**< bit:     27  RNG Clock Required                            */
    uint32_t AES_HASH_CLK_REQ:1;        /**< bit:     28  AES_HASH Clock Required                       */
    uint32_t HTM_1_CLK_REQ:1;           /**< bit:     29  Hibernation TIMER 1 Clock Required (HTM_1_CLK_REQ) */
    uint32_t CCTIMER_CLK_REQ:1;         /**< bit:     30  Capture Compare Timer Clock Required (CCTIMER_CLK_REQ) */
    uint32_t :1;                        /**< bit:     31  Reserved                                      */
  };
  uint32_t w;
} __PCR_CLK_REQ_3_bits_t;
#define PCR_CLK_REQ_3_RESETVALUE            (0x00U)                                       /**<  (PCR_CLK_REQ_3) Clock Required 3 Register  Reset Value */

#define PCR_CLK_REQ_3_HDMI_CEC_CLK_REQ_Pos    (1)                                            /**< (PCR_CLK_REQ_3) HDMI_CEC Clock Required (ADC_CLK_REQ) Position */
#define PCR_CLK_REQ_3_HDMI_CEC_CLK_REQ_Msk    (0x1U << PCR_CLK_REQ_3_HDMI_CEC_CLK_REQ_Pos)   /**< (PCR_CLK_REQ_3) HDMI_CEC Clock Required (ADC_CLK_REQ) Mask */
#define PCR_CLK_REQ_3_ADC_CLK_REQ_Pos         (3)                                            /**< (PCR_CLK_REQ_3) ADC Clock Required (ADC_CLK_REQ) Position */
#define PCR_CLK_REQ_3_ADC_CLK_REQ_Msk         (0x1U << PCR_CLK_REQ_3_ADC_CLK_REQ_Pos)        /**< (PCR_CLK_REQ_3) ADC Clock Required (ADC_CLK_REQ) Mask */
#define PCR_CLK_REQ_3_PS2_0_CLK_REQ_Pos       (5)                                            /**< (PCR_CLK_REQ_3) PS2_0 Clock Required (PS2_0_CLK_REQ) Position */
#define PCR_CLK_REQ_3_PS2_0_CLK_REQ_Msk       (0x1U << PCR_CLK_REQ_3_PS2_0_CLK_REQ_Pos)      /**< (PCR_CLK_REQ_3) PS2_0 Clock Required (PS2_0_CLK_REQ) Mask */
#define PCR_CLK_REQ_3_PS2_1_CLK_REQ_Pos       (6)                                            /**< (PCR_CLK_REQ_3) PS2_1 Clock Required (PS2_1_CLK_REQ) Position */
#define PCR_CLK_REQ_3_PS2_1_CLK_REQ_Msk       (0x1U << PCR_CLK_REQ_3_PS2_1_CLK_REQ_Pos)      /**< (PCR_CLK_REQ_3) PS2_1 Clock Required (PS2_1_CLK_REQ) Mask */
#define PCR_CLK_REQ_3_HTM_0_CLK_REQ_Pos       (10)                                           /**< (PCR_CLK_REQ_3) Hibernation TIMER 0 Clock Required (HTM_0_CLK_REQ) Position */
#define PCR_CLK_REQ_3_HTM_0_CLK_REQ_Msk       (0x1U << PCR_CLK_REQ_3_HTM_0_CLK_REQ_Pos)      /**< (PCR_CLK_REQ_3) Hibernation TIMER 0 Clock Required (HTM_0_CLK_REQ) Mask */
#define PCR_CLK_REQ_3_KMS_CLK_REQ_Pos         (11)                                           /**< (PCR_CLK_REQ_3) KEYSCAN Clock Required (KMS_CLK_REQ) Position */
#define PCR_CLK_REQ_3_KMS_CLK_REQ_Msk         (0x1U << PCR_CLK_REQ_3_KMS_CLK_REQ_Pos)        /**< (PCR_CLK_REQ_3) KEYSCAN Clock Required (KMS_CLK_REQ) Mask */
#define PCR_CLK_REQ_3_SMB1_CLK_REQ_Pos        (13)                                           /**< (PCR_CLK_REQ_3) SMB1 Clock Required (SMB1_CLK_REQ) Position */
#define PCR_CLK_REQ_3_SMB1_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_3_SMB1_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_3) SMB1 Clock Required (SMB1_CLK_REQ) Mask */
#define PCR_CLK_REQ_3_SMB2_CLK_REQ_Pos        (14)                                           /**< (PCR_CLK_REQ_3) SMB2 Clock Required (SMB2_CLK_REQ) Position */
#define PCR_CLK_REQ_3_SMB2_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_3_SMB2_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_3) SMB2 Clock Required (SMB2_CLK_REQ) Mask */
#define PCR_CLK_REQ_3_SMB3_CLK_REQ_Pos        (15)                                           /**< (PCR_CLK_REQ_3) SMB3 Clock Required (SMB3_CLK_REQ) Position */
#define PCR_CLK_REQ_3_SMB3_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_3_SMB3_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_3) SMB3 Clock Required (SMB3_CLK_REQ) Mask */
#define PCR_CLK_REQ_3_LED0_CLK_REQ_Pos        (16)                                           /**< (PCR_CLK_REQ_3) LED0 Clock Required (LED0_CLK_REQ) Position */
#define PCR_CLK_REQ_3_LED0_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_3_LED0_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_3) LED0 Clock Required (LED0_CLK_REQ) Mask */
#define PCR_CLK_REQ_3_LED1_CLK_REQ_Pos        (17)                                           /**< (PCR_CLK_REQ_3) LED1 Clock Required (LED1_CLK_REQ) Position */
#define PCR_CLK_REQ_3_LED1_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_3_LED1_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_3) LED1 Clock Required (LED1_CLK_REQ) Mask */
#define PCR_CLK_REQ_3_LED2_CLK_REQ_Pos        (18)                                           /**< (PCR_CLK_REQ_3) LED2 Clock Required (LED2_CLK_REQ) Position */
#define PCR_CLK_REQ_3_LED2_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_3_LED2_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_3) LED2 Clock Required (LED2_CLK_REQ) Mask */
#define PCR_CLK_REQ_3_SMB_4_CLK_REQ_Pos       (20)                                           /**< (PCR_CLK_REQ_3) SMB 4 Clock Required (SMB_4_CLK_REQ) Position */
#define PCR_CLK_REQ_3_SMB_4_CLK_REQ_Msk       (0x1U << PCR_CLK_REQ_3_SMB_4_CLK_REQ_Pos)      /**< (PCR_CLK_REQ_3) SMB 4 Clock Required (SMB_4_CLK_REQ) Mask */
#define PCR_CLK_REQ_3_TIMER32_0_CLK_REQ_Pos   (23)                                           /**< (PCR_CLK_REQ_3) TIMER32_0 Clock Required (TIMER32_0_CLK_REQ) Position */
#define PCR_CLK_REQ_3_TIMER32_0_CLK_REQ_Msk   (0x1U << PCR_CLK_REQ_3_TIMER32_0_CLK_REQ_Pos)  /**< (PCR_CLK_REQ_3) TIMER32_0 Clock Required (TIMER32_0_CLK_REQ) Mask */
#define PCR_CLK_REQ_3_TIMER32_1_CLK_REQ_Pos   (24)                                           /**< (PCR_CLK_REQ_3) TIMER32_1 Clock Required (TIMER32_1_CLK_REQ) Position */
#define PCR_CLK_REQ_3_TIMER32_1_CLK_REQ_Msk   (0x1U << PCR_CLK_REQ_3_TIMER32_1_CLK_REQ_Pos)  /**< (PCR_CLK_REQ_3) TIMER32_1 Clock Required (TIMER32_1_CLK_REQ) Mask */
#define PCR_CLK_REQ_3_PKE_CLK_REQ_Pos         (26)                                           /**< (PCR_CLK_REQ_3) PKE Clock Required Position */
#define PCR_CLK_REQ_3_PKE_CLK_REQ_Msk         (0x1U << PCR_CLK_REQ_3_PKE_CLK_REQ_Pos)        /**< (PCR_CLK_REQ_3) PKE Clock Required Mask */
#define PCR_CLK_REQ_3_RNG_CLK_REQ_Pos         (27)                                           /**< (PCR_CLK_REQ_3) RNG Clock Required Position */
#define PCR_CLK_REQ_3_RNG_CLK_REQ_Msk         (0x1U << PCR_CLK_REQ_3_RNG_CLK_REQ_Pos)        /**< (PCR_CLK_REQ_3) RNG Clock Required Mask */
#define PCR_CLK_REQ_3_AES_HASH_CLK_REQ_Pos    (28)                                           /**< (PCR_CLK_REQ_3) AES_HASH Clock Required Position */
#define PCR_CLK_REQ_3_AES_HASH_CLK_REQ_Msk    (0x1U << PCR_CLK_REQ_3_AES_HASH_CLK_REQ_Pos)   /**< (PCR_CLK_REQ_3) AES_HASH Clock Required Mask */
#define PCR_CLK_REQ_3_HTM_1_CLK_REQ_Pos       (29)                                           /**< (PCR_CLK_REQ_3) Hibernation TIMER 1 Clock Required (HTM_1_CLK_REQ) Position */
#define PCR_CLK_REQ_3_HTM_1_CLK_REQ_Msk       (0x1U << PCR_CLK_REQ_3_HTM_1_CLK_REQ_Pos)      /**< (PCR_CLK_REQ_3) Hibernation TIMER 1 Clock Required (HTM_1_CLK_REQ) Mask */
#define PCR_CLK_REQ_3_CCTIMER_CLK_REQ_Pos     (30)                                           /**< (PCR_CLK_REQ_3) Capture Compare Timer Clock Required (CCTIMER_CLK_REQ) Position */
#define PCR_CLK_REQ_3_CCTIMER_CLK_REQ_Msk     (0x1U << PCR_CLK_REQ_3_CCTIMER_CLK_REQ_Pos)    /**< (PCR_CLK_REQ_3) Capture Compare Timer Clock Required (CCTIMER_CLK_REQ) Mask */
#define PCR_CLK_REQ_3_Msk                     (0x7D97EC6AUL)                                 /**< (PCR_CLK_REQ_3) Register Mask  */

/* -------- PCR_CLK_REQ_4 : (PCR Offset: 0x60) (R/W 32) Clock Required 4 Register -------- */

typedef union
{
  struct
  {
    uint32_t :6;                        /**< bit:   0..5  Reserved                                      */
    uint32_t RTOS_CLK_REQ:1;            /**< bit:      6  RTOS Clock Required (RTOS_CLK_REQ)            */
    uint32_t :1;                        /**< bit:      7  Reserved                                      */
    uint32_t QMSPI_CLK_REQ:1;           /**< bit:      8  Quad Master SPI Clock Required                */
    uint32_t :1;                        /**< bit:      9  Reserved                                      */
    uint32_t I2C5_CLK_REQ:1;            /**< bit:     10  I2C5 Clock Required (I2C5_CLK_REQ)            */
    uint32_t I2C6_CLK_REQ:1;            /**< bit:     11  I2C6 Clock Required (I2C6_CLK_REQ)            */
    uint32_t I2C7_CLK_REQ:1;            /**< bit:     12  I2C7 Clock Required (I2C7_CLK_REQ)            */
    uint32_t :3;                        /**< bit: 13..15  Reserved                                      */
    uint32_t SPI_SLAVE_CLK_REQ:1;       /**< bit:     16  SPI SLAVE Clock Required (SPI_SLAVE_CLK_REQ)  */
    uint32_t SGPIO0_CLK_REQ:1;          /**< bit:     17  SGPIO0 Clock Required (SGPIO0_CLK_REQ)        */
    uint32_t SGPIO1_CLK_REQ:1;          /**< bit:     18  SGPIO1 Clock Required (SGPIO1_CLK_REQ)        */
    uint32_t SGPIO2_CLK_REQ:1;          /**< bit:     19  SGPIO2 Clock Required (SGPIO2_CLK_REQ)        */
    uint32_t SGPIO3_CLK_REQ:1;          /**< bit:     20  SGPIO3 Clock Required (SGPIO3_CLK_REQ)        */
    uint32_t :11;                       /**< bit: 21..31  Reserved                                      */
  };
  uint32_t w;
} __PCR_CLK_REQ_4_bits_t;
#define PCR_CLK_REQ_4_RESETVALUE            (0x00U)                                       /**<  (PCR_CLK_REQ_4) Clock Required 4 Register  Reset Value */

#define PCR_CLK_REQ_4_RTOS_CLK_REQ_Pos        (6)                                            /**< (PCR_CLK_REQ_4) RTOS Clock Required (RTOS_CLK_REQ) Position */
#define PCR_CLK_REQ_4_RTOS_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_4_RTOS_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_4) RTOS Clock Required (RTOS_CLK_REQ) Mask */
#define PCR_CLK_REQ_4_QMSPI_CLK_REQ_Pos       (8)                                            /**< (PCR_CLK_REQ_4) Quad Master SPI Clock Required Position */
#define PCR_CLK_REQ_4_QMSPI_CLK_REQ_Msk       (0x1U << PCR_CLK_REQ_4_QMSPI_CLK_REQ_Pos)      /**< (PCR_CLK_REQ_4) Quad Master SPI Clock Required Mask */
#define PCR_CLK_REQ_4_I2C5_CLK_REQ_Pos        (10)                                           /**< (PCR_CLK_REQ_4) I2C5 Clock Required (I2C5_CLK_REQ) Position */
#define PCR_CLK_REQ_4_I2C5_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_4_I2C5_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_4) I2C5 Clock Required (I2C5_CLK_REQ) Mask */
#define PCR_CLK_REQ_4_I2C6_CLK_REQ_Pos        (11)                                           /**< (PCR_CLK_REQ_4) I2C6 Clock Required (I2C6_CLK_REQ) Position */
#define PCR_CLK_REQ_4_I2C6_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_4_I2C6_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_4) I2C6 Clock Required (I2C6_CLK_REQ) Mask */
#define PCR_CLK_REQ_4_I2C7_CLK_REQ_Pos        (12)                                           /**< (PCR_CLK_REQ_4) I2C7 Clock Required (I2C7_CLK_REQ) Position */
#define PCR_CLK_REQ_4_I2C7_CLK_REQ_Msk        (0x1U << PCR_CLK_REQ_4_I2C7_CLK_REQ_Pos)       /**< (PCR_CLK_REQ_4) I2C7 Clock Required (I2C7_CLK_REQ) Mask */
#define PCR_CLK_REQ_4_SPI_SLAVE_CLK_REQ_Pos   (16)                                           /**< (PCR_CLK_REQ_4) SPI SLAVE Clock Required (SPI_SLAVE_CLK_REQ) Position */
#define PCR_CLK_REQ_4_SPI_SLAVE_CLK_REQ_Msk   (0x1U << PCR_CLK_REQ_4_SPI_SLAVE_CLK_REQ_Pos)  /**< (PCR_CLK_REQ_4) SPI SLAVE Clock Required (SPI_SLAVE_CLK_REQ) Mask */
#define PCR_CLK_REQ_4_SGPIO0_CLK_REQ_Pos      (17)                                           /**< (PCR_CLK_REQ_4) SGPIO0 Clock Required (SGPIO0_CLK_REQ) Position */
#define PCR_CLK_REQ_4_SGPIO0_CLK_REQ_Msk      (0x1U << PCR_CLK_REQ_4_SGPIO0_CLK_REQ_Pos)     /**< (PCR_CLK_REQ_4) SGPIO0 Clock Required (SGPIO0_CLK_REQ) Mask */
#define PCR_CLK_REQ_4_SGPIO1_CLK_REQ_Pos      (18)                                           /**< (PCR_CLK_REQ_4) SGPIO1 Clock Required (SGPIO1_CLK_REQ) Position */
#define PCR_CLK_REQ_4_SGPIO1_CLK_REQ_Msk      (0x1U << PCR_CLK_REQ_4_SGPIO1_CLK_REQ_Pos)     /**< (PCR_CLK_REQ_4) SGPIO1 Clock Required (SGPIO1_CLK_REQ) Mask */
#define PCR_CLK_REQ_4_SGPIO2_CLK_REQ_Pos      (19)                                           /**< (PCR_CLK_REQ_4) SGPIO2 Clock Required (SGPIO2_CLK_REQ) Position */
#define PCR_CLK_REQ_4_SGPIO2_CLK_REQ_Msk      (0x1U << PCR_CLK_REQ_4_SGPIO2_CLK_REQ_Pos)     /**< (PCR_CLK_REQ_4) SGPIO2 Clock Required (SGPIO2_CLK_REQ) Mask */
#define PCR_CLK_REQ_4_SGPIO3_CLK_REQ_Pos      (20)                                           /**< (PCR_CLK_REQ_4) SGPIO3 Clock Required (SGPIO3_CLK_REQ) Position */
#define PCR_CLK_REQ_4_SGPIO3_CLK_REQ_Msk      (0x1U << PCR_CLK_REQ_4_SGPIO3_CLK_REQ_Pos)     /**< (PCR_CLK_REQ_4) SGPIO3 Clock Required (SGPIO3_CLK_REQ) Mask */
#define PCR_CLK_REQ_4_Msk                     (0x001F1D40UL)                                 /**< (PCR_CLK_REQ_4) Register Mask  */

/* -------- PCR_RST_EN_0 : (PCR Offset: 0x70) (R/W 32) Reset Enable 0 Register -------- */

typedef union
{
  struct
  {
    uint32_t :1;                        /**< bit:      0  Reserved                                      */
    uint32_t OTP_RST_EN:1;              /**< bit:      1  eFuse Reset Enable                            */
    uint32_t :30;                       /**< bit:  2..31  Reserved                                      */
  };
  uint32_t w;
} __PCR_RST_EN_0_bits_t;
#define PCR_RST_EN_0_RESETVALUE             (0x00U)                                       /**<  (PCR_RST_EN_0) Reset Enable 0 Register  Reset Value */

#define PCR_RST_EN_0_OTP_RST_EN_Pos           (1)                                            /**< (PCR_RST_EN_0) eFuse Reset Enable Position */
#define PCR_RST_EN_0_OTP_RST_EN_Msk           (0x1U << PCR_RST_EN_0_OTP_RST_EN_Pos)          /**< (PCR_RST_EN_0) eFuse Reset Enable Mask */
#define PCR_RST_EN_0_Msk                      (0x00000002UL)                                 /**< (PCR_RST_EN_0) Register Mask  */

/* -------- PCR_RST_EN_1 : (PCR Offset: 0x74) (R/W 32) Reset Enable 1 Register -------- */

typedef union
{
  struct
  {
    uint32_t INT_RST_EN:1;              /**< bit:      0  Interrupt Reset Enable                        */
    uint32_t PECI_RST_EN:1;             /**< bit:      1  PECI Reset Enable                             */
    uint32_t TACH0_RST_EN:1;            /**< bit:      2  TACH0 Reset Enable (TACH0_RST_EN)             */
    uint32_t :1;                        /**< bit:      3  Reserved                                      */
    uint32_t PWM0_RST_EN:1;             /**< bit:      4  PWM0 Reset Enable (PWM0_RST_EN)               */
    uint32_t :1;                        /**< bit:      5  Reserved                                      */
    uint32_t DMA_RST_EN:1;              /**< bit:      6  DMA Reset Enable (DMA_RST_EN)                 */
    uint32_t TFDP_RST_EN:1;             /**< bit:      7  TFDP Reset Enable (TFDP_RST_EN)               */
    uint32_t :1;                        /**< bit:      8  Reserved                                      */
    uint32_t WDT_RST_EN:1;              /**< bit:      9  WDT Reset Enable (WDT_RST_EN)                 */
    uint32_t SMB0_RST_EN:1;             /**< bit:     10  SMB0 Reset Enable (SMB0_RST_EN)               */
    uint32_t TACH1_RST_EN:1;            /**< bit:     11  TACH1 Reset Enable (TACH1_RST_EN)             */
    uint32_t TACH2_RST_EN:1;            /**< bit:     12  TACH2 Reset Enable (TACH2_RST_EN)             */
    uint32_t TACH3_RST_EN:1;            /**< bit:     13  TACH3 Reset Enable (TACH3_RST_EN)             */
    uint32_t :6;                        /**< bit: 14..19  Reserved                                      */
    uint32_t PWM1_RST_EN:1;             /**< bit:     20  PWM1 Reset Enable (PWM1_RST_EN)               */
    uint32_t PWM2_RST_EN:1;             /**< bit:     21  PWM2 Reset Enable (PWM2_RST_EN)               */
    uint32_t PWM3_RST_EN:1;             /**< bit:     22  PWM3 Reset Enable (PWM3_RST_EN)               */
    uint32_t PWM4_RST_EN:1;             /**< bit:     23  PWM4 Reset Enable (PWM4_RST_EN)               */
    uint32_t PWM5_RST_EN:1;             /**< bit:     24  PWM3 Reset Enable (PWM5_RST_EN)               */
    uint32_t PWM6_RST_EN:1;             /**< bit:     25  PWM3 Reset Enable (PWM6_RST_EN)               */
    uint32_t PWM7_RST_EN:1;             /**< bit:     26  PWM3 Reset Enable (PWM7_RST_EN)               */
    uint32_t PWM8_RST_EN:1;             /**< bit:     27  PWM3 Reset Enable (PWM8_RST_EN)               */
    uint32_t :2;                        /**< bit: 28..29  Reserved                                      */
    uint32_t TIMER16_0_RST_EN:1;        /**< bit:     30  TIMER16_0 Reset Enable (TIMER16_0_RST_EN)     */
    uint32_t TIMER16_1_RST_EN:1;        /**< bit:     31  TIMER16_1 Reset Enable (TIMER16_1_RST_EN)     */
  };
  uint32_t w;
} __PCR_RST_EN_1_bits_t;
#define PCR_RST_EN_1_RESETVALUE             (0x00U)                                       /**<  (PCR_RST_EN_1) Reset Enable 1 Register  Reset Value */

#define PCR_RST_EN_1_INT_RST_EN_Pos           (0)                                            /**< (PCR_RST_EN_1) Interrupt Reset Enable Position */
#define PCR_RST_EN_1_INT_RST_EN_Msk           (0x1U << PCR_RST_EN_1_INT_RST_EN_Pos)          /**< (PCR_RST_EN_1) Interrupt Reset Enable Mask */
#define PCR_RST_EN_1_PECI_RST_EN_Pos          (1)                                            /**< (PCR_RST_EN_1) PECI Reset Enable Position */
#define PCR_RST_EN_1_PECI_RST_EN_Msk          (0x1U << PCR_RST_EN_1_PECI_RST_EN_Pos)         /**< (PCR_RST_EN_1) PECI Reset Enable Mask */
#define PCR_RST_EN_1_TACH0_RST_EN_Pos         (2)                                            /**< (PCR_RST_EN_1) TACH0 Reset Enable (TACH0_RST_EN) Position */
#define PCR_RST_EN_1_TACH0_RST_EN_Msk         (0x1U << PCR_RST_EN_1_TACH0_RST_EN_Pos)        /**< (PCR_RST_EN_1) TACH0 Reset Enable (TACH0_RST_EN) Mask */
#define PCR_RST_EN_1_PWM0_RST_EN_Pos          (4)                                            /**< (PCR_RST_EN_1) PWM0 Reset Enable (PWM0_RST_EN) Position */
#define PCR_RST_EN_1_PWM0_RST_EN_Msk          (0x1U << PCR_RST_EN_1_PWM0_RST_EN_Pos)         /**< (PCR_RST_EN_1) PWM0 Reset Enable (PWM0_RST_EN) Mask */
#define PCR_RST_EN_1_DMA_RST_EN_Pos           (6)                                            /**< (PCR_RST_EN_1) DMA Reset Enable (DMA_RST_EN) Position */
#define PCR_RST_EN_1_DMA_RST_EN_Msk           (0x1U << PCR_RST_EN_1_DMA_RST_EN_Pos)          /**< (PCR_RST_EN_1) DMA Reset Enable (DMA_RST_EN) Mask */
#define PCR_RST_EN_1_TFDP_RST_EN_Pos          (7)                                            /**< (PCR_RST_EN_1) TFDP Reset Enable (TFDP_RST_EN) Position */
#define PCR_RST_EN_1_TFDP_RST_EN_Msk          (0x1U << PCR_RST_EN_1_TFDP_RST_EN_Pos)         /**< (PCR_RST_EN_1) TFDP Reset Enable (TFDP_RST_EN) Mask */
#define PCR_RST_EN_1_WDT_RST_EN_Pos           (9)                                            /**< (PCR_RST_EN_1) WDT Reset Enable (WDT_RST_EN) Position */
#define PCR_RST_EN_1_WDT_RST_EN_Msk           (0x1U << PCR_RST_EN_1_WDT_RST_EN_Pos)          /**< (PCR_RST_EN_1) WDT Reset Enable (WDT_RST_EN) Mask */
#define PCR_RST_EN_1_SMB0_RST_EN_Pos          (10)                                           /**< (PCR_RST_EN_1) SMB0 Reset Enable (SMB0_RST_EN) Position */
#define PCR_RST_EN_1_SMB0_RST_EN_Msk          (0x1U << PCR_RST_EN_1_SMB0_RST_EN_Pos)         /**< (PCR_RST_EN_1) SMB0 Reset Enable (SMB0_RST_EN) Mask */
#define PCR_RST_EN_1_TACH1_RST_EN_Pos         (11)                                           /**< (PCR_RST_EN_1) TACH1 Reset Enable (TACH1_RST_EN) Position */
#define PCR_RST_EN_1_TACH1_RST_EN_Msk         (0x1U << PCR_RST_EN_1_TACH1_RST_EN_Pos)        /**< (PCR_RST_EN_1) TACH1 Reset Enable (TACH1_RST_EN) Mask */
#define PCR_RST_EN_1_TACH2_RST_EN_Pos         (12)                                           /**< (PCR_RST_EN_1) TACH2 Reset Enable (TACH2_RST_EN) Position */
#define PCR_RST_EN_1_TACH2_RST_EN_Msk         (0x1U << PCR_RST_EN_1_TACH2_RST_EN_Pos)        /**< (PCR_RST_EN_1) TACH2 Reset Enable (TACH2_RST_EN) Mask */
#define PCR_RST_EN_1_TACH3_RST_EN_Pos         (13)                                           /**< (PCR_RST_EN_1) TACH3 Reset Enable (TACH3_RST_EN) Position */
#define PCR_RST_EN_1_TACH3_RST_EN_Msk         (0x1U << PCR_RST_EN_1_TACH3_RST_EN_Pos)        /**< (PCR_RST_EN_1) TACH3 Reset Enable (TACH3_RST_EN) Mask */
#define PCR_RST_EN_1_PWM1_RST_EN_Pos          (20)                                           /**< (PCR_RST_EN_1) PWM1 Reset Enable (PWM1_RST_EN) Position */
#define PCR_RST_EN_1_PWM1_RST_EN_Msk          (0x1U << PCR_RST_EN_1_PWM1_RST_EN_Pos)         /**< (PCR_RST_EN_1) PWM1 Reset Enable (PWM1_RST_EN) Mask */
#define PCR_RST_EN_1_PWM2_RST_EN_Pos          (21)                                           /**< (PCR_RST_EN_1) PWM2 Reset Enable (PWM2_RST_EN) Position */
#define PCR_RST_EN_1_PWM2_RST_EN_Msk          (0x1U << PCR_RST_EN_1_PWM2_RST_EN_Pos)         /**< (PCR_RST_EN_1) PWM2 Reset Enable (PWM2_RST_EN) Mask */
#define PCR_RST_EN_1_PWM3_RST_EN_Pos          (22)                                           /**< (PCR_RST_EN_1) PWM3 Reset Enable (PWM3_RST_EN) Position */
#define PCR_RST_EN_1_PWM3_RST_EN_Msk          (0x1U << PCR_RST_EN_1_PWM3_RST_EN_Pos)         /**< (PCR_RST_EN_1) PWM3 Reset Enable (PWM3_RST_EN) Mask */
#define PCR_RST_EN_1_PWM4_RST_EN_Pos          (23)                                           /**< (PCR_RST_EN_1) PWM4 Reset Enable (PWM4_RST_EN) Position */
#define PCR_RST_EN_1_PWM4_RST_EN_Msk          (0x1U << PCR_RST_EN_1_PWM4_RST_EN_Pos)         /**< (PCR_RST_EN_1) PWM4 Reset Enable (PWM4_RST_EN) Mask */
#define PCR_RST_EN_1_PWM5_RST_EN_Pos          (24)                                           /**< (PCR_RST_EN_1) PWM3 Reset Enable (PWM5_RST_EN) Position */
#define PCR_RST_EN_1_PWM5_RST_EN_Msk          (0x1U << PCR_RST_EN_1_PWM5_RST_EN_Pos)         /**< (PCR_RST_EN_1) PWM3 Reset Enable (PWM5_RST_EN) Mask */
#define PCR_RST_EN_1_PWM6_RST_EN_Pos          (25)                                           /**< (PCR_RST_EN_1) PWM3 Reset Enable (PWM6_RST_EN) Position */
#define PCR_RST_EN_1_PWM6_RST_EN_Msk          (0x1U << PCR_RST_EN_1_PWM6_RST_EN_Pos)         /**< (PCR_RST_EN_1) PWM3 Reset Enable (PWM6_RST_EN) Mask */
#define PCR_RST_EN_1_PWM7_RST_EN_Pos          (26)                                           /**< (PCR_RST_EN_1) PWM3 Reset Enable (PWM7_RST_EN) Position */
#define PCR_RST_EN_1_PWM7_RST_EN_Msk          (0x1U << PCR_RST_EN_1_PWM7_RST_EN_Pos)         /**< (PCR_RST_EN_1) PWM3 Reset Enable (PWM7_RST_EN) Mask */
#define PCR_RST_EN_1_PWM8_RST_EN_Pos          (27)                                           /**< (PCR_RST_EN_1) PWM3 Reset Enable (PWM8_RST_EN) Position */
#define PCR_RST_EN_1_PWM8_RST_EN_Msk          (0x1U << PCR_RST_EN_1_PWM8_RST_EN_Pos)         /**< (PCR_RST_EN_1) PWM3 Reset Enable (PWM8_RST_EN) Mask */
#define PCR_RST_EN_1_TIMER16_0_RST_EN_Pos     (30)                                           /**< (PCR_RST_EN_1) TIMER16_0 Reset Enable (TIMER16_0_RST_EN) Position */
#define PCR_RST_EN_1_TIMER16_0_RST_EN_Msk     (0x1U << PCR_RST_EN_1_TIMER16_0_RST_EN_Pos)    /**< (PCR_RST_EN_1) TIMER16_0 Reset Enable (TIMER16_0_RST_EN) Mask */
#define PCR_RST_EN_1_TIMER16_1_RST_EN_Pos     (31)                                           /**< (PCR_RST_EN_1) TIMER16_1 Reset Enable (TIMER16_1_RST_EN) Position */
#define PCR_RST_EN_1_TIMER16_1_RST_EN_Msk     (0x1U << PCR_RST_EN_1_TIMER16_1_RST_EN_Pos)    /**< (PCR_RST_EN_1) TIMER16_1 Reset Enable (TIMER16_1_RST_EN) Mask */
#define PCR_RST_EN_1_Msk                      (0xCFF03ED7UL)                                 /**< (PCR_RST_EN_1) Register Mask  */

/* -------- PCR_RST_EN_2 : (PCR Offset: 0x78) (R/W 32) Reset Enable 2 Register -------- */

typedef union
{
  struct
  {
    uint32_t IMAP_RST_EN:1;             /**< bit:      0  IMAP Reset Enable (IMAP_RST_EN)               */
    uint32_t UART_0_RST_EN:1;           /**< bit:      1  UART 0 Reset Enable                           */
    uint32_t UART_1_RST_EN:1;           /**< bit:      2  UART 1 Reset Enable                           */
    uint32_t :10;                       /**< bit:  3..12  Reserved                                      */
    uint32_t ACPI_EC_0_RST_EN:1;        /**< bit:     13  ACPI EC 0 Reset Enable (ACPI_EC_0_RST_EN)     */
    uint32_t ACPI_EC_1_RST_EN:1;        /**< bit:     14  ACPI EC 1 Reset Enable (ACPI_EC_1_RST_EN)     */
    uint32_t ACPI_PM1_RST_EN:1;         /**< bit:     15  ACPI PM1 Reset Enable (ACPI_PM1_RST_EN)       */
    uint32_t KBCEM_RST_EN:1;            /**< bit:     16  8042EM Reset Enable (8042EM_RST_EN)           */
    uint32_t MBX_RST_EN:1;              /**< bit:     17  Mailbox Reset Enable (MBX_RST_EN)             */
    uint32_t RTC_RST_EN:1;              /**< bit:     18  RTC Reset Enable (RTC_RST_EN)                 */
    uint32_t :1;                        /**< bit:     19  Reserved                                      */
    uint32_t SCRATCH_32_RST_EN:1;       /**< bit:     20  SCRATCH 32 Reset Enable                       */
    uint32_t ACPI_EC_2_RST_EN:1;        /**< bit:     21  ACPI EC 2 Reset Enable (ACPI_EC_2_RST_EN)     */
    uint32_t ACPI_EC_3_RST_EN:1;        /**< bit:     22  ACPI EC 3 Reset Enable (ACPI_EC_3_RST_EN)     */
    uint32_t :2;                        /**< bit: 23..24  Reserved                                      */
    uint32_t PORT_80_0_RST_EN:1;        /**< bit:     25  Port 80 0 Reset Enable                        */
    uint32_t PORT_80_1_RST_EN:1;        /**< bit:     26  Port 80 1 Reset Enable                        */
    uint32_t :1;                        /**< bit:     27  Reserved                                      */
    uint32_t UART_2_RST_EN:1;           /**< bit:     28  UART 2 Reset Enable                           */
    uint32_t :3;                        /**< bit: 29..31  Reserved                                      */
  };
  uint32_t w;
} __PCR_RST_EN_2_bits_t;
#define PCR_RST_EN_2_RESETVALUE             (0x00U)                                       /**<  (PCR_RST_EN_2) Reset Enable 2 Register  Reset Value */

#define PCR_RST_EN_2_IMAP_RST_EN_Pos          (0)                                            /**< (PCR_RST_EN_2) IMAP Reset Enable (IMAP_RST_EN) Position */
#define PCR_RST_EN_2_IMAP_RST_EN_Msk          (0x1U << PCR_RST_EN_2_IMAP_RST_EN_Pos)         /**< (PCR_RST_EN_2) IMAP Reset Enable (IMAP_RST_EN) Mask */
#define PCR_RST_EN_2_UART_0_RST_EN_Pos        (1)                                            /**< (PCR_RST_EN_2) UART 0 Reset Enable Position */
#define PCR_RST_EN_2_UART_0_RST_EN_Msk        (0x1U << PCR_RST_EN_2_UART_0_RST_EN_Pos)       /**< (PCR_RST_EN_2) UART 0 Reset Enable Mask */
#define PCR_RST_EN_2_UART_1_RST_EN_Pos        (2)                                            /**< (PCR_RST_EN_2) UART 1 Reset Enable Position */
#define PCR_RST_EN_2_UART_1_RST_EN_Msk        (0x1U << PCR_RST_EN_2_UART_1_RST_EN_Pos)       /**< (PCR_RST_EN_2) UART 1 Reset Enable Mask */
#define PCR_RST_EN_2_ACPI_EC_0_RST_EN_Pos     (13)                                           /**< (PCR_RST_EN_2) ACPI EC 0 Reset Enable (ACPI_EC_0_RST_EN) Position */
#define PCR_RST_EN_2_ACPI_EC_0_RST_EN_Msk     (0x1U << PCR_RST_EN_2_ACPI_EC_0_RST_EN_Pos)    /**< (PCR_RST_EN_2) ACPI EC 0 Reset Enable (ACPI_EC_0_RST_EN) Mask */
#define PCR_RST_EN_2_ACPI_EC_1_RST_EN_Pos     (14)                                           /**< (PCR_RST_EN_2) ACPI EC 1 Reset Enable (ACPI_EC_1_RST_EN) Position */
#define PCR_RST_EN_2_ACPI_EC_1_RST_EN_Msk     (0x1U << PCR_RST_EN_2_ACPI_EC_1_RST_EN_Pos)    /**< (PCR_RST_EN_2) ACPI EC 1 Reset Enable (ACPI_EC_1_RST_EN) Mask */
#define PCR_RST_EN_2_ACPI_PM1_RST_EN_Pos      (15)                                           /**< (PCR_RST_EN_2) ACPI PM1 Reset Enable (ACPI_PM1_RST_EN) Position */
#define PCR_RST_EN_2_ACPI_PM1_RST_EN_Msk      (0x1U << PCR_RST_EN_2_ACPI_PM1_RST_EN_Pos)     /**< (PCR_RST_EN_2) ACPI PM1 Reset Enable (ACPI_PM1_RST_EN) Mask */
#define PCR_RST_EN_2_KBCEM_RST_EN_Pos         (16)                                           /**< (PCR_RST_EN_2) 8042EM Reset Enable (8042EM_RST_EN) Position */
#define PCR_RST_EN_2_KBCEM_RST_EN_Msk         (0x1U << PCR_RST_EN_2_KBCEM_RST_EN_Pos)        /**< (PCR_RST_EN_2) 8042EM Reset Enable (8042EM_RST_EN) Mask */
#define PCR_RST_EN_2_MBX_RST_EN_Pos           (17)                                           /**< (PCR_RST_EN_2) Mailbox Reset Enable (MBX_RST_EN) Position */
#define PCR_RST_EN_2_MBX_RST_EN_Msk           (0x1U << PCR_RST_EN_2_MBX_RST_EN_Pos)          /**< (PCR_RST_EN_2) Mailbox Reset Enable (MBX_RST_EN) Mask */
#define PCR_RST_EN_2_RTC_RST_EN_Pos           (18)                                           /**< (PCR_RST_EN_2) RTC Reset Enable (RTC_RST_EN) Position */
#define PCR_RST_EN_2_RTC_RST_EN_Msk           (0x1U << PCR_RST_EN_2_RTC_RST_EN_Pos)          /**< (PCR_RST_EN_2) RTC Reset Enable (RTC_RST_EN) Mask */
#define PCR_RST_EN_2_SCRATCH_32_RST_EN_Pos    (20)                                           /**< (PCR_RST_EN_2) SCRATCH 32 Reset Enable Position */
#define PCR_RST_EN_2_SCRATCH_32_RST_EN_Msk    (0x1U << PCR_RST_EN_2_SCRATCH_32_RST_EN_Pos)   /**< (PCR_RST_EN_2) SCRATCH 32 Reset Enable Mask */
#define PCR_RST_EN_2_ACPI_EC_2_RST_EN_Pos     (21)                                           /**< (PCR_RST_EN_2) ACPI EC 2 Reset Enable (ACPI_EC_2_RST_EN) Position */
#define PCR_RST_EN_2_ACPI_EC_2_RST_EN_Msk     (0x1U << PCR_RST_EN_2_ACPI_EC_2_RST_EN_Pos)    /**< (PCR_RST_EN_2) ACPI EC 2 Reset Enable (ACPI_EC_2_RST_EN) Mask */
#define PCR_RST_EN_2_ACPI_EC_3_RST_EN_Pos     (22)                                           /**< (PCR_RST_EN_2) ACPI EC 3 Reset Enable (ACPI_EC_3_RST_EN) Position */
#define PCR_RST_EN_2_ACPI_EC_3_RST_EN_Msk     (0x1U << PCR_RST_EN_2_ACPI_EC_3_RST_EN_Pos)    /**< (PCR_RST_EN_2) ACPI EC 3 Reset Enable (ACPI_EC_3_RST_EN) Mask */
#define PCR_RST_EN_2_PORT_80_0_RST_EN_Pos     (25)                                           /**< (PCR_RST_EN_2) Port 80 0 Reset Enable Position */
#define PCR_RST_EN_2_PORT_80_0_RST_EN_Msk     (0x1U << PCR_RST_EN_2_PORT_80_0_RST_EN_Pos)    /**< (PCR_RST_EN_2) Port 80 0 Reset Enable Mask */
#define PCR_RST_EN_2_PORT_80_1_RST_EN_Pos     (26)                                           /**< (PCR_RST_EN_2) Port 80 1 Reset Enable Position */
#define PCR_RST_EN_2_PORT_80_1_RST_EN_Msk     (0x1U << PCR_RST_EN_2_PORT_80_1_RST_EN_Pos)    /**< (PCR_RST_EN_2) Port 80 1 Reset Enable Mask */
#define PCR_RST_EN_2_UART_2_RST_EN_Pos        (28)                                           /**< (PCR_RST_EN_2) UART 2 Reset Enable Position */
#define PCR_RST_EN_2_UART_2_RST_EN_Msk        (0x1U << PCR_RST_EN_2_UART_2_RST_EN_Pos)       /**< (PCR_RST_EN_2) UART 2 Reset Enable Mask */
#define PCR_RST_EN_2_Msk                      (0x1677E007UL)                                 /**< (PCR_RST_EN_2) Register Mask  */

/* -------- PCR_RST_EN_3 : (PCR Offset: 0x7c) (R/W 32) Reset Enable 3 Register -------- */

typedef union
{
  struct
  {
    uint32_t :1;                        /**< bit:      0  Reserved                                      */
    uint32_t HDMI_CEC_RST_EN:1;         /**< bit:      1  HDMI_CEC Reset Enable (HDMI_CEC_RST_EN)       */
    uint32_t :1;                        /**< bit:      2  Reserved                                      */
    uint32_t ADC_RST_EN:1;              /**< bit:      3  ADC Reset Enable (ADC_RST_EN)                 */
    uint32_t :1;                        /**< bit:      4  Reserved                                      */
    uint32_t PS2_0_RST_EN:1;            /**< bit:      5  PS2_0 Reset Enable (PS2_0_RST_EN)             */
    uint32_t PS2_1_RST_EN:1;            /**< bit:      6  PS2_1 Reset Enable (PS2_1_RST_EN)             */
    uint32_t :3;                        /**< bit:   7..9  Reserved                                      */
    uint32_t HTM_0_RST_EN:1;            /**< bit:     10  Hibernation TIMER 0 Reset Enable (HTM_0_RST_EN) */
    uint32_t KMS_RST_EN:1;              /**< bit:     11  KEYSCAN Reset Enable (KMS_RST_EN)             */
    uint32_t :1;                        /**< bit:     12  Reserved                                      */
    uint32_t SMB1_RST_EN:1;             /**< bit:     13  SMB1 Reset Enable (SMB1_RST_EN)               */
    uint32_t SMB2_RST_EN:1;             /**< bit:     14  SMB2 Reset Enable (SMB2_RST_EN)               */
    uint32_t SMB3_RST_EN:1;             /**< bit:     15  SMB3 Reset Enable (SMB3_RST_EN)               */
    uint32_t LED0_RST_EN:1;             /**< bit:     16  LED0 Reset Enable (LED0_RST_EN)               */
    uint32_t LED1_RST_EN:1;             /**< bit:     17  LED1 Reset Enable (LED1_RST_EN)               */
    uint32_t LED2_RST_EN:1;             /**< bit:     18  LED2 Reset Enable (LED2_RST_EN)               */
    uint32_t :1;                        /**< bit:     19  Reserved                                      */
    uint32_t SMB_4_RST_EN:1;            /**< bit:     20  SMB 4 Reset Enable (SMB_4_RST_EN)             */
    uint32_t :2;                        /**< bit: 21..22  Reserved                                      */
    uint32_t TIMER32_0_RST_EN:1;        /**< bit:     23  TIMER32_0 Reset Enable (TIMER32_0_RST_EN)     */
    uint32_t TIMER32_1_RST_EN:1;        /**< bit:     24  TIMER32_1 Reset Enable (TIMER32_1_RST_EN)     */
    uint32_t :1;                        /**< bit:     25  Reserved                                      */
    uint32_t PKE_RST_EN:1;              /**< bit:     26  PKE Reset Enable                              */
    uint32_t RNG_RST_EN:1;              /**< bit:     27  RNG Reset Enable                              */
    uint32_t AES_HASH_RST_EN:1;         /**< bit:     28  AES_HASH Reset Enable                         */
    uint32_t HTM_1_RST_EN:1;            /**< bit:     29  Hibernation TIMER 1 Reset Enable (HTM_1_RST_EN) */
    uint32_t CCTIMER_RST_EN:1;          /**< bit:     30  Capture Compare Timer Reset Enable (CCTIMER_RST_EN) */
    uint32_t :1;                        /**< bit:     31  Reserved                                      */
  };
  uint32_t w;
} __PCR_RST_EN_3_bits_t;
#define PCR_RST_EN_3_RESETVALUE             (0x00U)                                       /**<  (PCR_RST_EN_3) Reset Enable 3 Register  Reset Value */

#define PCR_RST_EN_3_HDMI_CEC_RST_EN_Pos      (1)                                            /**< (PCR_RST_EN_3) HDMI_CEC Reset Enable (HDMI_CEC_RST_EN) Position */
#define PCR_RST_EN_3_HDMI_CEC_RST_EN_Msk      (0x1U << PCR_RST_EN_3_HDMI_CEC_RST_EN_Pos)     /**< (PCR_RST_EN_3) HDMI_CEC Reset Enable (HDMI_CEC_RST_EN) Mask */
#define PCR_RST_EN_3_ADC_RST_EN_Pos           (3)                                            /**< (PCR_RST_EN_3) ADC Reset Enable (ADC_RST_EN) Position */
#define PCR_RST_EN_3_ADC_RST_EN_Msk           (0x1U << PCR_RST_EN_3_ADC_RST_EN_Pos)          /**< (PCR_RST_EN_3) ADC Reset Enable (ADC_RST_EN) Mask */
#define PCR_RST_EN_3_PS2_0_RST_EN_Pos         (5)                                            /**< (PCR_RST_EN_3) PS2_0 Reset Enable (PS2_0_RST_EN) Position */
#define PCR_RST_EN_3_PS2_0_RST_EN_Msk         (0x1U << PCR_RST_EN_3_PS2_0_RST_EN_Pos)        /**< (PCR_RST_EN_3) PS2_0 Reset Enable (PS2_0_RST_EN) Mask */
#define PCR_RST_EN_3_PS2_1_RST_EN_Pos         (6)                                            /**< (PCR_RST_EN_3) PS2_1 Reset Enable (PS2_1_RST_EN) Position */
#define PCR_RST_EN_3_PS2_1_RST_EN_Msk         (0x1U << PCR_RST_EN_3_PS2_1_RST_EN_Pos)        /**< (PCR_RST_EN_3) PS2_1 Reset Enable (PS2_1_RST_EN) Mask */
#define PCR_RST_EN_3_HTM_0_RST_EN_Pos         (10)                                           /**< (PCR_RST_EN_3) Hibernation TIMER 0 Reset Enable (HTM_0_RST_EN) Position */
#define PCR_RST_EN_3_HTM_0_RST_EN_Msk         (0x1U << PCR_RST_EN_3_HTM_0_RST_EN_Pos)        /**< (PCR_RST_EN_3) Hibernation TIMER 0 Reset Enable (HTM_0_RST_EN) Mask */
#define PCR_RST_EN_3_KMS_RST_EN_Pos           (11)                                           /**< (PCR_RST_EN_3) KEYSCAN Reset Enable (KMS_RST_EN) Position */
#define PCR_RST_EN_3_KMS_RST_EN_Msk           (0x1U << PCR_RST_EN_3_KMS_RST_EN_Pos)          /**< (PCR_RST_EN_3) KEYSCAN Reset Enable (KMS_RST_EN) Mask */
#define PCR_RST_EN_3_SMB1_RST_EN_Pos          (13)                                           /**< (PCR_RST_EN_3) SMB1 Reset Enable (SMB1_RST_EN) Position */
#define PCR_RST_EN_3_SMB1_RST_EN_Msk          (0x1U << PCR_RST_EN_3_SMB1_RST_EN_Pos)         /**< (PCR_RST_EN_3) SMB1 Reset Enable (SMB1_RST_EN) Mask */
#define PCR_RST_EN_3_SMB2_RST_EN_Pos          (14)                                           /**< (PCR_RST_EN_3) SMB2 Reset Enable (SMB2_RST_EN) Position */
#define PCR_RST_EN_3_SMB2_RST_EN_Msk          (0x1U << PCR_RST_EN_3_SMB2_RST_EN_Pos)         /**< (PCR_RST_EN_3) SMB2 Reset Enable (SMB2_RST_EN) Mask */
#define PCR_RST_EN_3_SMB3_RST_EN_Pos          (15)                                           /**< (PCR_RST_EN_3) SMB3 Reset Enable (SMB3_RST_EN) Position */
#define PCR_RST_EN_3_SMB3_RST_EN_Msk          (0x1U << PCR_RST_EN_3_SMB3_RST_EN_Pos)         /**< (PCR_RST_EN_3) SMB3 Reset Enable (SMB3_RST_EN) Mask */
#define PCR_RST_EN_3_LED0_RST_EN_Pos          (16)                                           /**< (PCR_RST_EN_3) LED0 Reset Enable (LED0_RST_EN) Position */
#define PCR_RST_EN_3_LED0_RST_EN_Msk          (0x1U << PCR_RST_EN_3_LED0_RST_EN_Pos)         /**< (PCR_RST_EN_3) LED0 Reset Enable (LED0_RST_EN) Mask */
#define PCR_RST_EN_3_LED1_RST_EN_Pos          (17)                                           /**< (PCR_RST_EN_3) LED1 Reset Enable (LED1_RST_EN) Position */
#define PCR_RST_EN_3_LED1_RST_EN_Msk          (0x1U << PCR_RST_EN_3_LED1_RST_EN_Pos)         /**< (PCR_RST_EN_3) LED1 Reset Enable (LED1_RST_EN) Mask */
#define PCR_RST_EN_3_LED2_RST_EN_Pos          (18)                                           /**< (PCR_RST_EN_3) LED2 Reset Enable (LED2_RST_EN) Position */
#define PCR_RST_EN_3_LED2_RST_EN_Msk          (0x1U << PCR_RST_EN_3_LED2_RST_EN_Pos)         /**< (PCR_RST_EN_3) LED2 Reset Enable (LED2_RST_EN) Mask */
#define PCR_RST_EN_3_SMB_4_RST_EN_Pos         (20)                                           /**< (PCR_RST_EN_3) SMB 4 Reset Enable (SMB_4_RST_EN) Position */
#define PCR_RST_EN_3_SMB_4_RST_EN_Msk         (0x1U << PCR_RST_EN_3_SMB_4_RST_EN_Pos)        /**< (PCR_RST_EN_3) SMB 4 Reset Enable (SMB_4_RST_EN) Mask */
#define PCR_RST_EN_3_TIMER32_0_RST_EN_Pos     (23)                                           /**< (PCR_RST_EN_3) TIMER32_0 Reset Enable (TIMER32_0_RST_EN) Position */
#define PCR_RST_EN_3_TIMER32_0_RST_EN_Msk     (0x1U << PCR_RST_EN_3_TIMER32_0_RST_EN_Pos)    /**< (PCR_RST_EN_3) TIMER32_0 Reset Enable (TIMER32_0_RST_EN) Mask */
#define PCR_RST_EN_3_TIMER32_1_RST_EN_Pos     (24)                                           /**< (PCR_RST_EN_3) TIMER32_1 Reset Enable (TIMER32_1_RST_EN) Position */
#define PCR_RST_EN_3_TIMER32_1_RST_EN_Msk     (0x1U << PCR_RST_EN_3_TIMER32_1_RST_EN_Pos)    /**< (PCR_RST_EN_3) TIMER32_1 Reset Enable (TIMER32_1_RST_EN) Mask */
#define PCR_RST_EN_3_PKE_RST_EN_Pos           (26)                                           /**< (PCR_RST_EN_3) PKE Reset Enable Position */
#define PCR_RST_EN_3_PKE_RST_EN_Msk           (0x1U << PCR_RST_EN_3_PKE_RST_EN_Pos)          /**< (PCR_RST_EN_3) PKE Reset Enable Mask */
#define PCR_RST_EN_3_RNG_RST_EN_Pos           (27)                                           /**< (PCR_RST_EN_3) RNG Reset Enable Position */
#define PCR_RST_EN_3_RNG_RST_EN_Msk           (0x1U << PCR_RST_EN_3_RNG_RST_EN_Pos)          /**< (PCR_RST_EN_3) RNG Reset Enable Mask */
#define PCR_RST_EN_3_AES_HASH_RST_EN_Pos      (28)                                           /**< (PCR_RST_EN_3) AES_HASH Reset Enable Position */
#define PCR_RST_EN_3_AES_HASH_RST_EN_Msk      (0x1U << PCR_RST_EN_3_AES_HASH_RST_EN_Pos)     /**< (PCR_RST_EN_3) AES_HASH Reset Enable Mask */
#define PCR_RST_EN_3_HTM_1_RST_EN_Pos         (29)                                           /**< (PCR_RST_EN_3) Hibernation TIMER 1 Reset Enable (HTM_1_RST_EN) Position */
#define PCR_RST_EN_3_HTM_1_RST_EN_Msk         (0x1U << PCR_RST_EN_3_HTM_1_RST_EN_Pos)        /**< (PCR_RST_EN_3) Hibernation TIMER 1 Reset Enable (HTM_1_RST_EN) Mask */
#define PCR_RST_EN_3_CCTIMER_RST_EN_Pos       (30)                                           /**< (PCR_RST_EN_3) Capture Compare Timer Reset Enable (CCTIMER_RST_EN) Position */
#define PCR_RST_EN_3_CCTIMER_RST_EN_Msk       (0x1U << PCR_RST_EN_3_CCTIMER_RST_EN_Pos)      /**< (PCR_RST_EN_3) Capture Compare Timer Reset Enable (CCTIMER_RST_EN) Mask */
#define PCR_RST_EN_3_Msk                      (0x7D97EC6AUL)                                 /**< (PCR_RST_EN_3) Register Mask  */

/* -------- PCR_RST_EN_4 : (PCR Offset: 0x80) (R/W 32) Reset Enable 4 Register -------- */

typedef union
{
  struct
  {
    uint32_t :6;                        /**< bit:   0..5  Reserved                                      */
    uint32_t RTOS_RST_EN:1;             /**< bit:      6  RTOS Reset Enable (RTOS_RST_EN)               */
    uint32_t :1;                        /**< bit:      7  Reserved                                      */
    uint32_t QMSPI_RST_EN:1;            /**< bit:      8  Quad Master SPI Reset Enable                  */
    uint32_t :1;                        /**< bit:      9  Reserved                                      */
    uint32_t I2C5_RST_EN:1;             /**< bit:     10  I2C5 Reset Enable (I2C5_RST_EN)               */
    uint32_t I2C6_RST_EN:1;             /**< bit:     11  I2C6 Reset Enable (I2C6_RST_EN)               */
    uint32_t I2C7_RST_EN:1;             /**< bit:     12  I2C7 Reset Enable (I2C7_RST_EN)               */
    uint32_t :3;                        /**< bit: 13..15  Reserved                                      */
    uint32_t SPI_SLAVE_RST_EN:1;        /**< bit:     16  SPI SLAVE Reset Enable (SPI_SLAVE_RST_EN)     */
    uint32_t SGPIO0_RST_EN:1;           /**< bit:     17  SGPIO0 Reset Enable (SGPIO0_RST_EN)           */
    uint32_t SGPIO1_RST_EN:1;           /**< bit:     18  SGPIO1 Reset Enable (SGPIO1_RST_EN)           */
    uint32_t SGPIO2_RST_EN:1;           /**< bit:     19  SGPIO2 Reset Enable (SGPIO2_RST_EN)           */
    uint32_t SGPIO3_RST_EN:1;           /**< bit:     20  SGPIO3 Reset Enable (SGPIO3_RST_EN)           */
    uint32_t :11;                       /**< bit: 21..31  Reserved                                      */
  };
  uint32_t w;
} __PCR_RST_EN_4_bits_t;
#define PCR_RST_EN_4_RESETVALUE             (0x00U)                                       /**<  (PCR_RST_EN_4) Reset Enable 4 Register  Reset Value */

#define PCR_RST_EN_4_RTOS_RST_EN_Pos          (6)                                            /**< (PCR_RST_EN_4) RTOS Reset Enable (RTOS_RST_EN) Position */
#define PCR_RST_EN_4_RTOS_RST_EN_Msk          (0x1U << PCR_RST_EN_4_RTOS_RST_EN_Pos)         /**< (PCR_RST_EN_4) RTOS Reset Enable (RTOS_RST_EN) Mask */
#define PCR_RST_EN_4_QMSPI_RST_EN_Pos         (8)                                            /**< (PCR_RST_EN_4) Quad Master SPI Reset Enable Position */
#define PCR_RST_EN_4_QMSPI_RST_EN_Msk         (0x1U << PCR_RST_EN_4_QMSPI_RST_EN_Pos)        /**< (PCR_RST_EN_4) Quad Master SPI Reset Enable Mask */
#define PCR_RST_EN_4_I2C5_RST_EN_Pos          (10)                                           /**< (PCR_RST_EN_4) I2C5 Reset Enable (I2C5_RST_EN) Position */
#define PCR_RST_EN_4_I2C5_RST_EN_Msk          (0x1U << PCR_RST_EN_4_I2C5_RST_EN_Pos)         /**< (PCR_RST_EN_4) I2C5 Reset Enable (I2C5_RST_EN) Mask */
#define PCR_RST_EN_4_I2C6_RST_EN_Pos          (11)                                           /**< (PCR_RST_EN_4) I2C6 Reset Enable (I2C6_RST_EN) Position */
#define PCR_RST_EN_4_I2C6_RST_EN_Msk          (0x1U << PCR_RST_EN_4_I2C6_RST_EN_Pos)         /**< (PCR_RST_EN_4) I2C6 Reset Enable (I2C6_RST_EN) Mask */
#define PCR_RST_EN_4_I2C7_RST_EN_Pos          (12)                                           /**< (PCR_RST_EN_4) I2C7 Reset Enable (I2C7_RST_EN) Position */
#define PCR_RST_EN_4_I2C7_RST_EN_Msk          (0x1U << PCR_RST_EN_4_I2C7_RST_EN_Pos)         /**< (PCR_RST_EN_4) I2C7 Reset Enable (I2C7_RST_EN) Mask */
#define PCR_RST_EN_4_SPI_SLAVE_RST_EN_Pos     (16)                                           /**< (PCR_RST_EN_4) SPI SLAVE Reset Enable (SPI_SLAVE_RST_EN) Position */
#define PCR_RST_EN_4_SPI_SLAVE_RST_EN_Msk     (0x1U << PCR_RST_EN_4_SPI_SLAVE_RST_EN_Pos)    /**< (PCR_RST_EN_4) SPI SLAVE Reset Enable (SPI_SLAVE_RST_EN) Mask */
#define PCR_RST_EN_4_SGPIO0_RST_EN_Pos        (17)                                           /**< (PCR_RST_EN_4) SGPIO0 Reset Enable (SGPIO0_RST_EN) Position */
#define PCR_RST_EN_4_SGPIO0_RST_EN_Msk        (0x1U << PCR_RST_EN_4_SGPIO0_RST_EN_Pos)       /**< (PCR_RST_EN_4) SGPIO0 Reset Enable (SGPIO0_RST_EN) Mask */
#define PCR_RST_EN_4_SGPIO1_RST_EN_Pos        (18)                                           /**< (PCR_RST_EN_4) SGPIO1 Reset Enable (SGPIO1_RST_EN) Position */
#define PCR_RST_EN_4_SGPIO1_RST_EN_Msk        (0x1U << PCR_RST_EN_4_SGPIO1_RST_EN_Pos)       /**< (PCR_RST_EN_4) SGPIO1 Reset Enable (SGPIO1_RST_EN) Mask */
#define PCR_RST_EN_4_SGPIO2_RST_EN_Pos        (19)                                           /**< (PCR_RST_EN_4) SGPIO2 Reset Enable (SGPIO2_RST_EN) Position */
#define PCR_RST_EN_4_SGPIO2_RST_EN_Msk        (0x1U << PCR_RST_EN_4_SGPIO2_RST_EN_Pos)       /**< (PCR_RST_EN_4) SGPIO2 Reset Enable (SGPIO2_RST_EN) Mask */
#define PCR_RST_EN_4_SGPIO3_RST_EN_Pos        (20)                                           /**< (PCR_RST_EN_4) SGPIO3 Reset Enable (SGPIO3_RST_EN) Position */
#define PCR_RST_EN_4_SGPIO3_RST_EN_Msk        (0x1U << PCR_RST_EN_4_SGPIO3_RST_EN_Pos)       /**< (PCR_RST_EN_4) SGPIO3 Reset Enable (SGPIO3_RST_EN) Mask */
#define PCR_RST_EN_4_Msk                      (0x001F1D40UL)                                 /**< (PCR_RST_EN_4) Register Mask  */

/* -------- PCR_LOCK_REG : (PCR Offset: 0x84) (R/W 32) LOCK Register -------- */

typedef union
{
  struct
  {
    uint32_t PCR_RST_EN_LOCK:32;        /**< bit:  0..31  PCR Reset Enable Lock Register.               */
  };
  uint32_t w;
} __PCR_LOCK_REG_bits_t;
#define PCR_LOCK_REG_RESETVALUE             (0xA6382D4DU)                                 /**<  (PCR_LOCK_REG) LOCK Register  Reset Value */

#define PCR_LOCK_REG_PCR_RST_EN_LOCK_Pos      (0)                                            /**< (PCR_LOCK_REG) PCR Reset Enable Lock Register. Position */
#define PCR_LOCK_REG_PCR_RST_EN_LOCK_Msk      (0xFFFFFFFFU << PCR_LOCK_REG_PCR_RST_EN_LOCK_Pos)  /**< (PCR_LOCK_REG) PCR Reset Enable Lock Register. Mask */
#define PCR_LOCK_REG_PCR_RST_EN_LOCK(value)   (PCR_LOCK_REG_PCR_RST_EN_LOCK_Msk & ((value) << PCR_LOCK_REG_PCR_RST_EN_LOCK_Pos))
#define PCR_LOCK_REG_Msk                      (0xFFFFFFFFUL)                                 /**< (PCR_LOCK_REG) Register Mask  */

/** \brief PCR register offsets definitions */
#define PCR_SYS_SLP_CNTRL_OFFSET     (0x00)         /**< (PCR_SYS_SLP_CNTRL) System Sleep Control Offset */
#define PCR_PROC_CLK_CNTRL_OFFSET    (0x04)         /**< (PCR_PROC_CLK_CNTRL) Processor Clock Control Register [7:0] Processor Clock Divide Value (PROC_DIV)\n            1: divide 48 MHz Ring Oscillator by 1.\n            3: divide 48 MHz Ring Oscillator by 3.\n            4: divide 48 MHz Ring Oscillator by 4.\n            16: divide 48 MHz Ring Oscillator by 16.\n            48: divide 48 MHz Ring Oscillator by 48.\n            No other values are supported. Offset */
#define PCR_SLOW_CLK_CNTRL_OFFSET    (0x08)         /**< (PCR_SLOW_CLK_CNTRL) Configures the EC_CLK clock domain Offset */
#define PCR_OSC_ID_OFFSET            (0x0C)         /**< (PCR_OSC_ID) Oscillator ID Register Offset */
#define PCR_PWR_RST_STS_OFFSET       (0x10)         /**< (PCR_PWR_RST_STS) PCR Power Reset Status Register Offset */
#define PCR_PWR_RST_CNTRL_OFFSET     (0x14)         /**< (PCR_PWR_RST_CNTRL) Power Reset Control Register Offset */
#define PCR_SYS_RST_OFFSET           (0x18)         /**< (PCR_SYS_RST) System Reset Register Offset */
#define PCR_SLP_EN_0_OFFSET          (0x30)         /**< (PCR_SLP_EN_0) Sleep Enable 0 Register Offset */
#define PCR_SLP_EN_1_OFFSET          (0x34)         /**< (PCR_SLP_EN_1) Sleep Enable 1 Register Offset */
#define PCR_SLP_EN_2_OFFSET          (0x38)         /**< (PCR_SLP_EN_2) Sleep Enable 2 Register Offset */
#define PCR_SLP_EN_3_OFFSET          (0x3C)         /**< (PCR_SLP_EN_3) Sleep Enable 3 Register Offset */
#define PCR_SLP_EN_4_OFFSET          (0x40)         /**< (PCR_SLP_EN_4) Sleep Enable 4 Register Offset */
#define PCR_CLK_REQ_0_OFFSET         (0x50)         /**< (PCR_CLK_REQ_0) Clock Required 0 Register Offset */
#define PCR_CLK_REQ_1_OFFSET         (0x54)         /**< (PCR_CLK_REQ_1) Clock Required 1 Register Offset */
#define PCR_CLK_REQ_2_OFFSET         (0x58)         /**< (PCR_CLK_REQ_2) Clock Required 2 Register Offset */
#define PCR_CLK_REQ_3_OFFSET         (0x5C)         /**< (PCR_CLK_REQ_3) Clock Required 3 Register Offset */
#define PCR_CLK_REQ_4_OFFSET         (0x60)         /**< (PCR_CLK_REQ_4) Clock Required 4 Register Offset */
#define PCR_RST_EN_0_OFFSET          (0x70)         /**< (PCR_RST_EN_0) Reset Enable 0 Register Offset */
#define PCR_RST_EN_1_OFFSET          (0x74)         /**< (PCR_RST_EN_1) Reset Enable 1 Register Offset */
#define PCR_RST_EN_2_OFFSET          (0x78)         /**< (PCR_RST_EN_2) Reset Enable 2 Register Offset */
#define PCR_RST_EN_3_OFFSET          (0x7C)         /**< (PCR_RST_EN_3) Reset Enable 3 Register Offset */
#define PCR_RST_EN_4_OFFSET          (0x80)         /**< (PCR_RST_EN_4) Reset Enable 4 Register Offset */
#define PCR_LOCK_REG_OFFSET          (0x84)         /**< (PCR_LOCK_REG) LOCK Register Offset */

/** \brief PCR register API structure */
typedef struct
{  /* The Power, Clocks, and Resets (PCR) Section identifies all the power supplies,\n        clock sources, and reset inputs to the chip and defines all the derived power, clock, and reset signals. */
  __IO  __PCR_SYS_SLP_CNTRL_bits_t     SYS_SLP_CNTRL; /**< Offset: 0x00 (R/W  32) System Sleep Control */
  __IO  __PCR_PROC_CLK_CNTRL_bits_t    PROC_CLK_CNTRL; /**< Offset: 0x04 (R/W  32) Processor Clock Control Register [7:0] Processor Clock Divide Value (PROC_DIV)\n            1: divide 48 MHz Ring Oscillator by 1.\n            3: divide 48 MHz Ring Oscillator by 3.\n            4: divide 48 MHz Ring Oscillator by 4.\n            16: divide 48 MHz Ring Oscillator by 16.\n            48: divide 48 MHz Ring Oscillator by 48.\n            No other values are supported. */
  __IO  __PCR_SLOW_CLK_CNTRL_bits_t    SLOW_CLK_CNTRL; /**< Offset: 0x08 (R/W  32) Configures the EC_CLK clock domain */
  __IO  __PCR_OSC_ID_bits_t            OSC_ID;        /**< Offset: 0x0C (R/W  32) Oscillator ID Register */
  __IO  __PCR_PWR_RST_STS_bits_t       PCR_PWR_RST_STS; /**< Offset: 0x10 (R/W  32) PCR Power Reset Status Register */
  __IO  __PCR_PWR_RST_CNTRL_bits_t     PWR_RST_CNTRL; /**< Offset: 0x14 (R/W  32) Power Reset Control Register */
  __IO  __PCR_SYS_RST_bits_t           SYS_RST;       /**< Offset: 0x18 (R/W  32) System Reset Register */
  __IO  __PCR_SLP_EN_0_bits_t          SLP_EN_0;      /**< Offset: 0x30 (R/W  32) Sleep Enable 0 Register */
  __IO  __PCR_SLP_EN_1_bits_t          SLP_EN_1;      /**< Offset: 0x34 (R/W  32) Sleep Enable 1 Register */
  __IO  __PCR_SLP_EN_2_bits_t          SLP_EN_2;      /**< Offset: 0x38 (R/W  32) Sleep Enable 2 Register */
  __IO  __PCR_SLP_EN_3_bits_t          SLP_EN_3;      /**< Offset: 0x3C (R/W  32) Sleep Enable 3 Register */
  __IO  __PCR_SLP_EN_4_bits_t          SLP_EN_4;      /**< Offset: 0x40 (R/W  32) Sleep Enable 4 Register */
  __IO  __PCR_CLK_REQ_0_bits_t         CLK_REQ_0;     /**< Offset: 0x50 (R/W  32) Clock Required 0 Register */
  __IO  __PCR_CLK_REQ_1_bits_t         CLK_REQ_1;     /**< Offset: 0x54 (R/W  32) Clock Required 1 Register */
  __IO  __PCR_CLK_REQ_2_bits_t         CLK_REQ_2;     /**< Offset: 0x58 (R/W  32) Clock Required 2 Register */
  __IO  __PCR_CLK_REQ_3_bits_t         CLK_REQ_3;     /**< Offset: 0x5C (R/W  32) Clock Required 3 Register */
  __IO  __PCR_CLK_REQ_4_bits_t         CLK_REQ_4;     /**< Offset: 0x60 (R/W  32) Clock Required 4 Register */
  __IO  __PCR_RST_EN_0_bits_t          RST_EN_0;      /**< Offset: 0x70 (R/W  32) Reset Enable 0 Register */
  __IO  __PCR_RST_EN_1_bits_t          RST_EN_1;      /**< Offset: 0x74 (R/W  32) Reset Enable 1 Register */
  __IO  __PCR_RST_EN_2_bits_t          RST_EN_2;      /**< Offset: 0x78 (R/W  32) Reset Enable 2 Register */
  __IO  __PCR_RST_EN_3_bits_t          RST_EN_3;      /**< Offset: 0x7C (R/W  32) Reset Enable 3 Register */
  __IO  __PCR_RST_EN_4_bits_t          RST_EN_4;      /**< Offset: 0x80 (R/W  32) Reset Enable 4 Register */
  __IO  __PCR_LOCK_REG_bits_t          LOCK_REG;      /**< Offset: 0x84 (R/W  32) LOCK Register */
} pcr_registers_t;
/** @}  end of The Power, Clocks, and Resets (PCR) Section identifies all the power supplies,\n        clock sources, and reset inputs to the chip and defines all the derived power, clock, and reset signals. */

#endif /* _PIC32CX_0525SG12_PCR_COMPONENT_H_ */
