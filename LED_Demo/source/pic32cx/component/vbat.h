/**
 * \brief Component description for PIC32CX/0525SG12 VBAT
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
#ifndef _PIC32CX_0525SG12_VBAT_COMPONENT_H_
#define _PIC32CX_0525SG12_VBAT_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_VBAT The VBAT Register Bank block is a block implemented for aggregating miscellaneous\n        battery-backed registers required the host and by the Embedded Controller (EC) Subsystem that are\n        not unique to a block implemented in the EC subsystem.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR VBAT */
/* ========================================================================== */

/* -------- VBAT_PFR_STS : (VBAT Offset: 0x00) (R/W 8) The Power-Fail and Reset Status Register collects and retains the VBAT RST and WDT event status when VCC1 is unpowered. -------- */

typedef union
{
  struct
  {
    uint8_t  :2;                        /**< bit:   0..1  Reserved                                      */
    uint8_t  SOFT:1;                    /**< bit:      2  This bit is set to '1b' if a was triggered by an assertion of the SOFT_SYS_RESET bit in the System Reset Register.\n      This bit is cleared to '0b' when written with a '1b'; writes of a '0b' have no effect. (R/WC) */
    uint8_t  TEST:1;                    /**< bit:      3  Test                                          */
    uint8_t  RESETI:1;                  /**< bit:      4  This bit is set to '1b' if a RESET_SYS was triggered by a low signal on the RESETI# input pin. This bit is\n      cleared to '0b' when written with a '1b'; writes of a '0b' have no effect. (R/WC) */
    uint8_t  WDT_EVT:1;                 /**< bit:      5  This bit is set to '1b' if a RESET_SYS was triggered by a Watchdog Timer event. This bit is cleared to '0b' when\n      written with a '1b'; writes of a '0b' have no effect. (R/WC) */
    uint8_t  SYSRESETREQ:1;             /**< bit:      6  This bit is set to '1b' if a RESET_SYS was triggered by an ARM SYSRESETREQ event. This bit is cleared to '0b' when\n      written with a '1b'; writes of a '0b' have no effect. (R/WC) */
    uint8_t  VBAT_RST:1;                /**< bit:      7  The VBAT RST bit is set to '1' by hardware when a RESET_VBAT is detected. This is the register default value.\n      To clear VBAT RST EC firmware must write a '1' to this bit; writing a '0' to VBAT RST has no affect.(R/WC) */
  };
  uint8_t  w;
} __VBAT_PFR_STS_bits_t;
#define VBAT_PFR_STS_RESETVALUE             (0x80U)                                       /**<  (VBAT_PFR_STS) The Power-Fail and Reset Status Register collects and retains the VBAT RST and WDT event status when VCC1 is unpowered.  Reset Value */

#define VBAT_PFR_STS_SOFT_Pos                 (2)                                            /**< (VBAT_PFR_STS) This bit is set to '1b' if a was triggered by an assertion of the SOFT_SYS_RESET bit in the System Reset Register.\n      This bit is cleared to '0b' when written with a '1b'; writes of a '0b' have no effect. (R/WC) Position */
#define VBAT_PFR_STS_SOFT_Msk                 (0x1U << VBAT_PFR_STS_SOFT_Pos)                /**< (VBAT_PFR_STS) This bit is set to '1b' if a was triggered by an assertion of the SOFT_SYS_RESET bit in the System Reset Register.\n      This bit is cleared to '0b' when written with a '1b'; writes of a '0b' have no effect. (R/WC) Mask */
#define VBAT_PFR_STS_TEST_Pos                 (3)                                            /**< (VBAT_PFR_STS) Test Position */
#define VBAT_PFR_STS_TEST_Msk                 (0x1U << VBAT_PFR_STS_TEST_Pos)                /**< (VBAT_PFR_STS) Test Mask */
#define VBAT_PFR_STS_RESETI_Pos               (4)                                            /**< (VBAT_PFR_STS) This bit is set to '1b' if a RESET_SYS was triggered by a low signal on the RESETI# input pin. This bit is\n      cleared to '0b' when written with a '1b'; writes of a '0b' have no effect. (R/WC) Position */
#define VBAT_PFR_STS_RESETI_Msk               (0x1U << VBAT_PFR_STS_RESETI_Pos)              /**< (VBAT_PFR_STS) This bit is set to '1b' if a RESET_SYS was triggered by a low signal on the RESETI# input pin. This bit is\n      cleared to '0b' when written with a '1b'; writes of a '0b' have no effect. (R/WC) Mask */
#define VBAT_PFR_STS_WDT_EVT_Pos              (5)                                            /**< (VBAT_PFR_STS) This bit is set to '1b' if a RESET_SYS was triggered by a Watchdog Timer event. This bit is cleared to '0b' when\n      written with a '1b'; writes of a '0b' have no effect. (R/WC) Position */
#define VBAT_PFR_STS_WDT_EVT_Msk              (0x1U << VBAT_PFR_STS_WDT_EVT_Pos)             /**< (VBAT_PFR_STS) This bit is set to '1b' if a RESET_SYS was triggered by a Watchdog Timer event. This bit is cleared to '0b' when\n      written with a '1b'; writes of a '0b' have no effect. (R/WC) Mask */
#define VBAT_PFR_STS_SYSRESETREQ_Pos          (6)                                            /**< (VBAT_PFR_STS) This bit is set to '1b' if a RESET_SYS was triggered by an ARM SYSRESETREQ event. This bit is cleared to '0b' when\n      written with a '1b'; writes of a '0b' have no effect. (R/WC) Position */
#define VBAT_PFR_STS_SYSRESETREQ_Msk          (0x1U << VBAT_PFR_STS_SYSRESETREQ_Pos)         /**< (VBAT_PFR_STS) This bit is set to '1b' if a RESET_SYS was triggered by an ARM SYSRESETREQ event. This bit is cleared to '0b' when\n      written with a '1b'; writes of a '0b' have no effect. (R/WC) Mask */
#define VBAT_PFR_STS_VBAT_RST_Pos             (7)                                            /**< (VBAT_PFR_STS) The VBAT RST bit is set to '1' by hardware when a RESET_VBAT is detected. This is the register default value.\n      To clear VBAT RST EC firmware must write a '1' to this bit; writing a '0' to VBAT RST has no affect.(R/WC) Position */
#define VBAT_PFR_STS_VBAT_RST_Msk             (0x1U << VBAT_PFR_STS_VBAT_RST_Pos)            /**< (VBAT_PFR_STS) The VBAT RST bit is set to '1' by hardware when a RESET_VBAT is detected. This is the register default value.\n      To clear VBAT RST EC firmware must write a '1' to this bit; writing a '0' to VBAT RST has no affect.(R/WC) Mask */
#define VBAT_PFR_STS_Msk                      (0x000000FCUL)                                 /**< (VBAT_PFR_STS) Register Mask  */

/* -------- VBAT_CLOCK_EN : (VBAT Offset: 0x08) (R/W 32) CLOCK ENABLE -------- */

typedef union
{
  struct
  {
    uint32_t C32K_SUPPRESS:1;           /**< bit:      0  1=32KHz clock domain is off while VTR is off (i.e., while on VBAT only). The 32KHz domain is always on\n      while VTR is on, so the PLL always has a reference.\n      0=32KHz clock domain is enabled while VTR is off (i.e., while on VBAT only). The clock source for the 32KHz domain is\n      determined by the other bits in this register */
    uint32_t EXT_32K:1;                 /**< bit:      1  This bit selects the source for the 32KHz clock domain.\n      1=The 32KHZ_IN VTR-powered pin is used as a source for the 32KHz clock domain. If an activity detector does not detect a\n      clock on the selected source, the always-on 32KHz internal clock source is automatically selected\n      0=The always-on32Khz clock source is used as the source for the 32KHz clock domain. */
    uint32_t C32KHZ_SOURCE:1;           /**< bit:      2  This field determines the source for the always-on 32KHz internal clock source. If set to '1b', this bit\n      will only take effect if an active clock has been detected on the crystal pins. Once the 32KHz source has been switched,\n      activity detection on the crystal no longer functions. Therefore, if the crystal oscillator uses a single-ended\n      input, once started that input must not stop while this bit is '1b'.\n      1=Crystal Oscillator. The selection between a singled-ended input or a resonant crystal is determined by XOSEL in this register\n      0=Silicon Oscillator. */
    uint32_t XOSEL:1;                   /**< bit:      3  This bit selects between a single-ended clock source for the crystal oscillator or an external parallel crystal.\n                1= the Crystal Oscillator is driven by a single-ended 32KHz clock source connected to the XTAL2 pin. \n                0= the Crystal Oscillator requires a 32KHz parallel resonant crystal connected between the XTAL1 and XTAL2 pins (default). */
    uint32_t :28;                       /**< bit:  4..31  Reserved                                      */
  };
  uint32_t w;
} __VBAT_CLOCK_EN_bits_t;
#define VBAT_CLOCK_EN_RESETVALUE            (0x00U)                                       /**<  (VBAT_CLOCK_EN) CLOCK ENABLE  Reset Value */

#define VBAT_CLOCK_EN_C32K_SUPPRESS_Pos       (0)                                            /**< (VBAT_CLOCK_EN) 1=32KHz clock domain is off while VTR is off (i.e., while on VBAT only). The 32KHz domain is always on\n      while VTR is on, so the PLL always has a reference.\n      0=32KHz clock domain is enabled while VTR is off (i.e., while on VBAT only). The clock source for the 32KHz domain is\n      determined by the other bits in this register Position */
#define VBAT_CLOCK_EN_C32K_SUPPRESS_Msk       (0x1U << VBAT_CLOCK_EN_C32K_SUPPRESS_Pos)      /**< (VBAT_CLOCK_EN) 1=32KHz clock domain is off while VTR is off (i.e., while on VBAT only). The 32KHz domain is always on\n      while VTR is on, so the PLL always has a reference.\n      0=32KHz clock domain is enabled while VTR is off (i.e., while on VBAT only). The clock source for the 32KHz domain is\n      determined by the other bits in this register Mask */
#define VBAT_CLOCK_EN_EXT_32K_Pos             (1)                                            /**< (VBAT_CLOCK_EN) This bit selects the source for the 32KHz clock domain.\n      1=The 32KHZ_IN VTR-powered pin is used as a source for the 32KHz clock domain. If an activity detector does not detect a\n      clock on the selected source, the always-on 32KHz internal clock source is automatically selected\n      0=The always-on32Khz clock source is used as the source for the 32KHz clock domain. Position */
#define VBAT_CLOCK_EN_EXT_32K_Msk             (0x1U << VBAT_CLOCK_EN_EXT_32K_Pos)            /**< (VBAT_CLOCK_EN) This bit selects the source for the 32KHz clock domain.\n      1=The 32KHZ_IN VTR-powered pin is used as a source for the 32KHz clock domain. If an activity detector does not detect a\n      clock on the selected source, the always-on 32KHz internal clock source is automatically selected\n      0=The always-on32Khz clock source is used as the source for the 32KHz clock domain. Mask */
#define VBAT_CLOCK_EN_C32KHZ_SOURCE_Pos       (2)                                            /**< (VBAT_CLOCK_EN) This field determines the source for the always-on 32KHz internal clock source. If set to '1b', this bit\n      will only take effect if an active clock has been detected on the crystal pins. Once the 32KHz source has been switched,\n      activity detection on the crystal no longer functions. Therefore, if the crystal oscillator uses a single-ended\n      input, once started that input must not stop while this bit is '1b'.\n      1=Crystal Oscillator. The selection between a singled-ended input or a resonant crystal is determined by XOSEL in this register\n      0=Silicon Oscillator. Position */
#define VBAT_CLOCK_EN_C32KHZ_SOURCE_Msk       (0x1U << VBAT_CLOCK_EN_C32KHZ_SOURCE_Pos)      /**< (VBAT_CLOCK_EN) This field determines the source for the always-on 32KHz internal clock source. If set to '1b', this bit\n      will only take effect if an active clock has been detected on the crystal pins. Once the 32KHz source has been switched,\n      activity detection on the crystal no longer functions. Therefore, if the crystal oscillator uses a single-ended\n      input, once started that input must not stop while this bit is '1b'.\n      1=Crystal Oscillator. The selection between a singled-ended input or a resonant crystal is determined by XOSEL in this register\n      0=Silicon Oscillator. Mask */
#define VBAT_CLOCK_EN_XOSEL_Pos               (3)                                            /**< (VBAT_CLOCK_EN) This bit selects between a single-ended clock source for the crystal oscillator or an external parallel crystal.\n                1= the Crystal Oscillator is driven by a single-ended 32KHz clock source connected to the XTAL2 pin. \n                0= the Crystal Oscillator requires a 32KHz parallel resonant crystal connected between the XTAL1 and XTAL2 pins (default). Position */
#define VBAT_CLOCK_EN_XOSEL_Msk               (0x1U << VBAT_CLOCK_EN_XOSEL_Pos)              /**< (VBAT_CLOCK_EN) This bit selects between a single-ended clock source for the crystal oscillator or an external parallel crystal.\n                1= the Crystal Oscillator is driven by a single-ended 32KHz clock source connected to the XTAL2 pin. \n                0= the Crystal Oscillator requires a 32KHz parallel resonant crystal connected between the XTAL1 and XTAL2 pins (default). Mask */
#define VBAT_CLOCK_EN_Msk                     (0x0000000FUL)                                 /**< (VBAT_CLOCK_EN) Register Mask  */

/* -------- VBAT_SYS_SHUTDOWN : (VBAT Offset: 0x0c) (R/W 32) System Shutdown Enable register.\n -------- */

typedef union
{
  struct
  {
    uint32_t SYS_SHDN_DIS:1;            /**< bit:      0  This bit controls the System Shutdown.\n         0 = Enable System Shutdown (SYS_SHDN#).\n         1 = Disable System Shutdown (SYS_SHDN#).\n */
    uint32_t :31;                       /**< bit:  1..31  Reserved                                      */
  };
  uint32_t w;
} __VBAT_SYS_SHUTDOWN_bits_t;
#define VBAT_SYS_SHUTDOWN_RESETVALUE        (0x00U)                                       /**<  (VBAT_SYS_SHUTDOWN) System Shutdown Enable register.\n  Reset Value */

#define VBAT_SYS_SHUTDOWN_SYS_SHDN_DIS_Pos    (0)                                            /**< (VBAT_SYS_SHUTDOWN) This bit controls the System Shutdown.\n         0 = Enable System Shutdown (SYS_SHDN#).\n         1 = Disable System Shutdown (SYS_SHDN#).\n Position */
#define VBAT_SYS_SHUTDOWN_SYS_SHDN_DIS_Msk    (0x1U << VBAT_SYS_SHUTDOWN_SYS_SHDN_DIS_Pos)   /**< (VBAT_SYS_SHUTDOWN) This bit controls the System Shutdown.\n         0 = Enable System Shutdown (SYS_SHDN#).\n         1 = Disable System Shutdown (SYS_SHDN#).\n Mask */
#define VBAT_SYS_SHUTDOWN_Msk                 (0x00000001UL)                                 /**< (VBAT_SYS_SHUTDOWN) Register Mask  */

/* -------- VBAT_MONOTONIC_COUNTER : (VBAT Offset: 0x20) (R/W 32) MONOTONIC COUNTER -------- */

typedef union
{
  struct
  {
    uint32_t MONOTONIC_COUNTER:32;      /**< bit:  0..31  Read-only register that increments by 1 every time it is read. It is reset to 0 on a VBAT Power On Reset. */
  };
  uint32_t w;
} __VBAT_MONOTONIC_COUNTER_bits_t;
#define VBAT_MONOTONIC_COUNTER_RESETVALUE   (0x00U)                                       /**<  (VBAT_MONOTONIC_COUNTER) MONOTONIC COUNTER  Reset Value */

#define VBAT_MONOTONIC_COUNTER_MONOTONIC_COUNTER_Pos (0)                                            /**< (VBAT_MONOTONIC_COUNTER) Read-only register that increments by 1 every time it is read. It is reset to 0 on a VBAT Power On Reset. Position */
#define VBAT_MONOTONIC_COUNTER_MONOTONIC_COUNTER_Msk (0xFFFFFFFFU << VBAT_MONOTONIC_COUNTER_MONOTONIC_COUNTER_Pos)  /**< (VBAT_MONOTONIC_COUNTER) Read-only register that increments by 1 every time it is read. It is reset to 0 on a VBAT Power On Reset. Mask */
#define VBAT_MONOTONIC_COUNTER_MONOTONIC_COUNTER(value) (VBAT_MONOTONIC_COUNTER_MONOTONIC_COUNTER_Msk & ((value) << VBAT_MONOTONIC_COUNTER_MONOTONIC_COUNTER_Pos))
#define VBAT_MONOTONIC_COUNTER_Msk            (0xFFFFFFFFUL)                                 /**< (VBAT_MONOTONIC_COUNTER) Register Mask  */

/* -------- VBAT_COUNTER_HIWORD : (VBAT Offset: 0x24) (R/W 32) COUNTER HIWORD -------- */

typedef union
{
  struct
  {
    uint32_t COUNTER_HIWORD:32;         /**< bit:  0..31  Thirty-two bit read/write register. If software sets this register to an incrementing value, based on an external\n      non-volatile store, this register may be combined with the Monotonic Counter Register to form a 64-bit monotonic counter. */
  };
  uint32_t w;
} __VBAT_COUNTER_HIWORD_bits_t;
#define VBAT_COUNTER_HIWORD_RESETVALUE      (0x00U)                                       /**<  (VBAT_COUNTER_HIWORD) COUNTER HIWORD  Reset Value */

#define VBAT_COUNTER_HIWORD_COUNTER_HIWORD_Pos (0)                                            /**< (VBAT_COUNTER_HIWORD) Thirty-two bit read/write register. If software sets this register to an incrementing value, based on an external\n      non-volatile store, this register may be combined with the Monotonic Counter Register to form a 64-bit monotonic counter. Position */
#define VBAT_COUNTER_HIWORD_COUNTER_HIWORD_Msk (0xFFFFFFFFU << VBAT_COUNTER_HIWORD_COUNTER_HIWORD_Pos)  /**< (VBAT_COUNTER_HIWORD) Thirty-two bit read/write register. If software sets this register to an incrementing value, based on an external\n      non-volatile store, this register may be combined with the Monotonic Counter Register to form a 64-bit monotonic counter. Mask */
#define VBAT_COUNTER_HIWORD_COUNTER_HIWORD(value) (VBAT_COUNTER_HIWORD_COUNTER_HIWORD_Msk & ((value) << VBAT_COUNTER_HIWORD_COUNTER_HIWORD_Pos))
#define VBAT_COUNTER_HIWORD_Msk               (0xFFFFFFFFUL)                                 /**< (VBAT_COUNTER_HIWORD) Register Mask  */

/* -------- VBAT_VWIRE_BACKUP : (VBAT Offset: 0x28) (R/W 32) VWIRE_BACKUP -------- */

typedef union
{
  struct
  {
    uint32_t M2S_2H_BACKUP:4;           /**< bit:   0..3  The Boot ROM firmware will copy this field into the SRC3 to SRC0 bits of the Master-to-Slave Virtual Wire Register\n      that corresponds to Virtual Wire Index 2h on a RESET_SYS. If software always saves the state of the Index 2h SRC bits on the falling\n      edge of the SUSWARN# virtual wire, the state of the four SRC bits will be synchronized to the state of the four bits in the core logic. */
    uint32_t M2S_42H_BACKUP:4;          /**< bit:   4..7  The Boot ROM firmware will copy this field into the SRC3 to SRC0 bits of the Master-to-Slave Virtual Wire Register\n      that corresponds to Virtual Wire Index 42h on a RESET_SYS. If software always saves the state of the Index 2h SRC bits on the falling\n      edge of the SUSWARN# virtual wire, the state of the four SRC bits will be synchronized to the state of the four bits in the core logic. */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __VBAT_VWIRE_BACKUP_bits_t;
#define VBAT_VWIRE_BACKUP_RESETVALUE        (0x00U)                                       /**<  (VBAT_VWIRE_BACKUP) VWIRE_BACKUP  Reset Value */

#define VBAT_VWIRE_BACKUP_M2S_2H_BACKUP_Pos   (0)                                            /**< (VBAT_VWIRE_BACKUP) The Boot ROM firmware will copy this field into the SRC3 to SRC0 bits of the Master-to-Slave Virtual Wire Register\n      that corresponds to Virtual Wire Index 2h on a RESET_SYS. If software always saves the state of the Index 2h SRC bits on the falling\n      edge of the SUSWARN# virtual wire, the state of the four SRC bits will be synchronized to the state of the four bits in the core logic. Position */
#define VBAT_VWIRE_BACKUP_M2S_2H_BACKUP_Msk   (0xFU << VBAT_VWIRE_BACKUP_M2S_2H_BACKUP_Pos)  /**< (VBAT_VWIRE_BACKUP) The Boot ROM firmware will copy this field into the SRC3 to SRC0 bits of the Master-to-Slave Virtual Wire Register\n      that corresponds to Virtual Wire Index 2h on a RESET_SYS. If software always saves the state of the Index 2h SRC bits on the falling\n      edge of the SUSWARN# virtual wire, the state of the four SRC bits will be synchronized to the state of the four bits in the core logic. Mask */
#define VBAT_VWIRE_BACKUP_M2S_2H_BACKUP(value) (VBAT_VWIRE_BACKUP_M2S_2H_BACKUP_Msk & ((value) << VBAT_VWIRE_BACKUP_M2S_2H_BACKUP_Pos))
#define VBAT_VWIRE_BACKUP_M2S_42H_BACKUP_Pos  (4)                                            /**< (VBAT_VWIRE_BACKUP) The Boot ROM firmware will copy this field into the SRC3 to SRC0 bits of the Master-to-Slave Virtual Wire Register\n      that corresponds to Virtual Wire Index 42h on a RESET_SYS. If software always saves the state of the Index 2h SRC bits on the falling\n      edge of the SUSWARN# virtual wire, the state of the four SRC bits will be synchronized to the state of the four bits in the core logic. Position */
#define VBAT_VWIRE_BACKUP_M2S_42H_BACKUP_Msk  (0xFU << VBAT_VWIRE_BACKUP_M2S_42H_BACKUP_Pos)  /**< (VBAT_VWIRE_BACKUP) The Boot ROM firmware will copy this field into the SRC3 to SRC0 bits of the Master-to-Slave Virtual Wire Register\n      that corresponds to Virtual Wire Index 42h on a RESET_SYS. If software always saves the state of the Index 2h SRC bits on the falling\n      edge of the SUSWARN# virtual wire, the state of the four SRC bits will be synchronized to the state of the four bits in the core logic. Mask */
#define VBAT_VWIRE_BACKUP_M2S_42H_BACKUP(value) (VBAT_VWIRE_BACKUP_M2S_42H_BACKUP_Msk & ((value) << VBAT_VWIRE_BACKUP_M2S_42H_BACKUP_Pos))
#define VBAT_VWIRE_BACKUP_Msk                 (0x000000FFUL)                                 /**< (VBAT_VWIRE_BACKUP) Register Mask  */

/** \brief VBAT register offsets definitions */
#define VBAT_PFR_STS_OFFSET          (0x00)         /**< (VBAT_PFR_STS) The Power-Fail and Reset Status Register collects and retains the VBAT RST and WDT event status when VCC1 is unpowered. Offset */
#define VBAT_CLOCK_EN_OFFSET         (0x08)         /**< (VBAT_CLOCK_EN) CLOCK ENABLE Offset */
#define VBAT_SYS_SHUTDOWN_OFFSET     (0x0C)         /**< (VBAT_SYS_SHUTDOWN) System Shutdown Enable register.\n Offset */
#define VBAT_MONOTONIC_COUNTER_OFFSET (0x20)         /**< (VBAT_MONOTONIC_COUNTER) MONOTONIC COUNTER Offset */
#define VBAT_COUNTER_HIWORD_OFFSET   (0x24)         /**< (VBAT_COUNTER_HIWORD) COUNTER HIWORD Offset */
#define VBAT_VWIRE_BACKUP_OFFSET     (0x28)         /**< (VBAT_VWIRE_BACKUP) VWIRE_BACKUP Offset */

/** \brief VBAT register API structure */
typedef struct
{  /* The VBAT Register Bank block is a block implemented for aggregating miscellaneous\n        battery-backed registers required the host and by the Embedded Controller (EC) Subsystem that are\n        not unique to a block implemented in the EC subsystem. */
  __IO  __VBAT_PFR_STS_bits_t          PFR_STS;       /**< Offset: 0x00 (R/W   8) The Power-Fail and Reset Status Register collects and retains the VBAT RST and WDT event status when VCC1 is unpowered. */
  __IO  __VBAT_CLOCK_EN_bits_t         CLOCK_EN;      /**< Offset: 0x08 (R/W  32) CLOCK ENABLE */
  __IO  __VBAT_SYS_SHUTDOWN_bits_t     SYS_SHUTDOWN;  /**< Offset: 0x0C (R/W  32) System Shutdown Enable register.\n */
  __IO  __VBAT_MONOTONIC_COUNTER_bits_t MONOTONIC_COUNTER; /**< Offset: 0x20 (R/W  32) MONOTONIC COUNTER */
  __IO  __VBAT_COUNTER_HIWORD_bits_t   COUNTER_HIWORD; /**< Offset: 0x24 (R/W  32) COUNTER HIWORD */
  __IO  __VBAT_VWIRE_BACKUP_bits_t     VWIRE_BACKUP;  /**< Offset: 0x28 (R/W  32) VWIRE_BACKUP */
} vbat_registers_t;
/** @}  end of The VBAT Register Bank block is a block implemented for aggregating miscellaneous\n        battery-backed registers required the host and by the Embedded Controller (EC) Subsystem that are\n        not unique to a block implemented in the EC subsystem. */

#endif /* _PIC32CX_0525SG12_VBAT_COMPONENT_H_ */
