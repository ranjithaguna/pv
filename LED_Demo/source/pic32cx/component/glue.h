/**
 * \brief Component description for PIC32CX/0025SD10 GLUE
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
#ifndef _PIC32CX_0025SD10_GLUE_COMPONENT_H_
#define _PIC32CX_0025SD10_GLUE_COMPONENT_H_

/** \addtogroup PIC32CX_0025SD10_GLUE These are the Glue Register
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR GLUE */
/* ========================================================================== */

/* -------- GLUE_PWR_GD : (GLUE Offset: 0x00) (R/W 32) This is the Power Good Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t PWRGD_DELAY:1;             /**< bit:      0  This field selects an optional delay for PWR_GOOD_3V.\n         1= Select PWR_GOOD_3V delay (default).\n         0= Select no delay for PWR_GOOD_3V.\n */
    uint32_t PWRGD_LOCK:1;              /**< bit:      1  This field sets the lock for bits[1:0] of this register.\n         1= Locked: Bits[1:0] of this register become read-only, and remain read-only until RESET_SYS reset event.\n         0= Unlocked: Bits[1:0] of this register remain R/W (default). */
    uint32_t :4;                        /**< bit:   2..5  Reserved                                      */
    uint32_t PCIRST_1_EN:1;             /**< bit:      6  This field decides whether Pin PCI_RST_1# is a buffered copy of LRESET_BI#.\n         1= Pin PCI_RST_1# is a buffered copy of LRESET_BI# (default).\n         0= Pin PCI_RST_1# is forced low.\n */
    uint32_t PCIRST_2_EN:1;             /**< bit:      7  This field decides whether Pin PCI_RST_2# is a buffered copy of LRESET_BI#.\n         1= Pin PCI_RST_2# is a buffered copy of LRESET_BI# (default).\n         0= Pin PCI_RST_2# is forced low.\n */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __GLUE_PWR_GD_bits_t;
#define GLUE_PWR_GD_RESETVALUE              (0xC1U)                                       /**<  (GLUE_PWR_GD) This is the Power Good Register.\n  Reset Value */

#define GLUE_PWR_GD_PWRGD_DELAY_Pos           (0)                                            /**< (GLUE_PWR_GD) This field selects an optional delay for PWR_GOOD_3V.\n         1= Select PWR_GOOD_3V delay (default).\n         0= Select no delay for PWR_GOOD_3V.\n Position */
#define GLUE_PWR_GD_PWRGD_DELAY_Msk           (0x1U << GLUE_PWR_GD_PWRGD_DELAY_Pos)          /**< (GLUE_PWR_GD) This field selects an optional delay for PWR_GOOD_3V.\n         1= Select PWR_GOOD_3V delay (default).\n         0= Select no delay for PWR_GOOD_3V.\n Mask */
#define GLUE_PWR_GD_PWRGD_LOCK_Pos            (1)                                            /**< (GLUE_PWR_GD) This field sets the lock for bits[1:0] of this register.\n         1= Locked: Bits[1:0] of this register become read-only, and remain read-only until RESET_SYS reset event.\n         0= Unlocked: Bits[1:0] of this register remain R/W (default). Position */
#define GLUE_PWR_GD_PWRGD_LOCK_Msk            (0x1U << GLUE_PWR_GD_PWRGD_LOCK_Pos)           /**< (GLUE_PWR_GD) This field sets the lock for bits[1:0] of this register.\n         1= Locked: Bits[1:0] of this register become read-only, and remain read-only until RESET_SYS reset event.\n         0= Unlocked: Bits[1:0] of this register remain R/W (default). Mask */
#define GLUE_PWR_GD_PCIRST_1_EN_Pos           (6)                                            /**< (GLUE_PWR_GD) This field decides whether Pin PCI_RST_1# is a buffered copy of LRESET_BI#.\n         1= Pin PCI_RST_1# is a buffered copy of LRESET_BI# (default).\n         0= Pin PCI_RST_1# is forced low.\n Position */
#define GLUE_PWR_GD_PCIRST_1_EN_Msk           (0x1U << GLUE_PWR_GD_PCIRST_1_EN_Pos)          /**< (GLUE_PWR_GD) This field decides whether Pin PCI_RST_1# is a buffered copy of LRESET_BI#.\n         1= Pin PCI_RST_1# is a buffered copy of LRESET_BI# (default).\n         0= Pin PCI_RST_1# is forced low.\n Mask */
#define GLUE_PWR_GD_PCIRST_2_EN_Pos           (7)                                            /**< (GLUE_PWR_GD) This field decides whether Pin PCI_RST_2# is a buffered copy of LRESET_BI#.\n         1= Pin PCI_RST_2# is a buffered copy of LRESET_BI# (default).\n         0= Pin PCI_RST_2# is forced low.\n Position */
#define GLUE_PWR_GD_PCIRST_2_EN_Msk           (0x1U << GLUE_PWR_GD_PCIRST_2_EN_Pos)          /**< (GLUE_PWR_GD) This field decides whether Pin PCI_RST_2# is a buffered copy of LRESET_BI#.\n         1= Pin PCI_RST_2# is a buffered copy of LRESET_BI# (default).\n         0= Pin PCI_RST_2# is forced low.\n Mask */
#define GLUE_PWR_GD_Msk                       (0x000000C3UL)                                 /**< (GLUE_PWR_GD) Register Mask  */

/* -------- GLUE_S0IX_ST_DETECT_EN : (GLUE Offset: 0x04) (R/W 32) This register allows the S0ix system state to be detected, for purposes of switching to an alternate pin for the PWRGD_STATE detection. While this register is in its default state, only     the PWRGD_PS pin is used as PWRGD_STATE.     Since the S0IX_DET_EN bit is reset to 0 by every chip-level PCI Reset event, it is intended for     BIOS software to re-write it to '1' before the first subsequent entry into the S0ix state, if     switching to use the alternate PWRGD_S0IX pin is needed during the S0ix state. -------- */

typedef union
{
  struct
  {
    uint32_t S0IX_DET_EN:1;             /**< bit:      0  S0ix State detection is enabled/disable.         1= S0ix State detection is enabled according to the settings in the S0ix State Detection Configuration            Register.\n         0= S0ix State detection is not enabled (default).\n */
    uint32_t :31;                       /**< bit:  1..31  Reserved                                      */
  };
  uint32_t w;
} __GLUE_S0IX_ST_DETECT_EN_bits_t;
#define GLUE_S0IX_ST_DETECT_EN_RESETVALUE   (0x00U)                                       /**<  (GLUE_S0IX_ST_DETECT_EN) This register allows the S0ix system state to be detected, for purposes of switching to an alternate pin for the PWRGD_STATE detection. While this register is in its default state, only     the PWRGD_PS pin is used as PWRGD_STATE.     Since the S0IX_DET_EN bit is reset to 0 by every chip-level PCI Reset event, it is intended for     BIOS software to re-write it to '1' before the first subsequent entry into the S0ix state, if     switching to use the alternate PWRGD_S0IX pin is needed during the S0ix state.  Reset Value */

#define GLUE_S0IX_ST_DETECT_EN_S0IX_DET_EN_Pos (0)                                            /**< (GLUE_S0IX_ST_DETECT_EN) S0ix State detection is enabled/disable.         1= S0ix State detection is enabled according to the settings in the S0ix State Detection Configuration            Register.\n         0= S0ix State detection is not enabled (default).\n Position */
#define GLUE_S0IX_ST_DETECT_EN_S0IX_DET_EN_Msk (0x1U << GLUE_S0IX_ST_DETECT_EN_S0IX_DET_EN_Pos)  /**< (GLUE_S0IX_ST_DETECT_EN) S0ix State detection is enabled/disable.         1= S0ix State detection is enabled according to the settings in the S0ix State Detection Configuration            Register.\n         0= S0ix State detection is not enabled (default).\n Mask */
#define GLUE_S0IX_ST_DETECT_EN_Msk            (0x00000001UL)                                 /**< (GLUE_S0IX_ST_DETECT_EN) Register Mask  */

/* -------- GLUE_POWER_RECOVERY_MODE : (GLUE Offset: 0x08) (R/W 32) This register displays the state of SLP_S3_IN# at the time that the Power Good indicator PWRGD_STATE last went low. -------- */

typedef union
{
  struct
  {
    uint32_t :7;                        /**< bit:   0..6  Reserved                                      */
    uint32_t PWR_STATE:1;               /**< bit:      7  This bit is copied Read-Only from another register.\n         1= SLP_S3_IN# was high, and the shutdown was therefore abnormal.\n         0= SLP_S3_IN# was low, and the shutdown was normal. (default).\n */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __GLUE_POWER_RECOVERY_MODE_bits_t;
#define GLUE_POWER_RECOVERY_MODE_RESETVALUE (0x00U)                                       /**<  (GLUE_POWER_RECOVERY_MODE) This register displays the state of SLP_S3_IN# at the time that the Power Good indicator PWRGD_STATE last went low.  Reset Value */

#define GLUE_POWER_RECOVERY_MODE_PWR_STATE_Pos (7)                                            /**< (GLUE_POWER_RECOVERY_MODE) This bit is copied Read-Only from another register.\n         1= SLP_S3_IN# was high, and the shutdown was therefore abnormal.\n         0= SLP_S3_IN# was low, and the shutdown was normal. (default).\n Position */
#define GLUE_POWER_RECOVERY_MODE_PWR_STATE_Msk (0x1U << GLUE_POWER_RECOVERY_MODE_PWR_STATE_Pos)  /**< (GLUE_POWER_RECOVERY_MODE) This bit is copied Read-Only from another register.\n         1= SLP_S3_IN# was high, and the shutdown was therefore abnormal.\n         0= SLP_S3_IN# was low, and the shutdown was normal. (default).\n Mask */
#define GLUE_POWER_RECOVERY_MODE_Msk          (0x00000080UL)                                 /**< (GLUE_POWER_RECOVERY_MODE) Register Mask  */

/* -------- GLUE_LED_REG : (GLUE Offset: 0x0c) (R/W 32) This is the LED register.\n -------- */

typedef union
{
  struct
  {
    uint32_t BLINK:2;                   /**< bit:   0..1  LED Blink Pattern. These bits are not always R/W to software,and may be controlled by         hardware depending on the system power state.\n         0x3= The LED selected by the COLOR bit remains steady on.\n         0x2= Reserved.\n         0x1= The LED selected by the COLOR bit blinks at 1Hz.\n         0x0= LEDs are both off. (default).\n */
    uint32_t COLOR:1;                   /**< bit:      2  This bit is not always R/W to software, and may be controlled by hardware depending         on the system power stat.\n         1= Green.\n         0= Yellow (default).\n */
    uint32_t CODE_FETCH:1;              /**< bit:      3  Allows Green LED to signal that BIOS is running. Requires also setting the COLOR bit to '1'.         This bit is forced to '0' on any PCI Reset event.\n         1= BIOS has written '1' to this bit to indicate that it is running.\n         0= BIOS has not yet written this bit; not yet running. (default).\n */
    uint32_t :28;                       /**< bit:  4..31  Reserved                                      */
  };
  uint32_t w;
} __GLUE_LED_REG_bits_t;
#define GLUE_LED_REG_RESETVALUE             (0x00U)                                       /**<  (GLUE_LED_REG) This is the LED register.\n  Reset Value */

#define GLUE_LED_REG_BLINK_Pos                (0)                                            /**< (GLUE_LED_REG) LED Blink Pattern. These bits are not always R/W to software,and may be controlled by         hardware depending on the system power state.\n         0x3= The LED selected by the COLOR bit remains steady on.\n         0x2= Reserved.\n         0x1= The LED selected by the COLOR bit blinks at 1Hz.\n         0x0= LEDs are both off. (default).\n Position */
#define GLUE_LED_REG_BLINK_Msk                (0x3U << GLUE_LED_REG_BLINK_Pos)               /**< (GLUE_LED_REG) LED Blink Pattern. These bits are not always R/W to software,and may be controlled by         hardware depending on the system power state.\n         0x3= The LED selected by the COLOR bit remains steady on.\n         0x2= Reserved.\n         0x1= The LED selected by the COLOR bit blinks at 1Hz.\n         0x0= LEDs are both off. (default).\n Mask */
#define GLUE_LED_REG_BLINK(value)             (GLUE_LED_REG_BLINK_Msk & ((value) << GLUE_LED_REG_BLINK_Pos))
#define GLUE_LED_REG_COLOR_Pos                (2)                                            /**< (GLUE_LED_REG) This bit is not always R/W to software, and may be controlled by hardware depending         on the system power stat.\n         1= Green.\n         0= Yellow (default).\n Position */
#define GLUE_LED_REG_COLOR_Msk                (0x1U << GLUE_LED_REG_COLOR_Pos)               /**< (GLUE_LED_REG) This bit is not always R/W to software, and may be controlled by hardware depending         on the system power stat.\n         1= Green.\n         0= Yellow (default).\n Mask */
#define GLUE_LED_REG_CODE_FETCH_Pos           (3)                                            /**< (GLUE_LED_REG) Allows Green LED to signal that BIOS is running. Requires also setting the COLOR bit to '1'.         This bit is forced to '0' on any PCI Reset event.\n         1= BIOS has written '1' to this bit to indicate that it is running.\n         0= BIOS has not yet written this bit; not yet running. (default).\n Position */
#define GLUE_LED_REG_CODE_FETCH_Msk           (0x1U << GLUE_LED_REG_CODE_FETCH_Pos)          /**< (GLUE_LED_REG) Allows Green LED to signal that BIOS is running. Requires also setting the COLOR bit to '1'.         This bit is forced to '0' on any PCI Reset event.\n         1= BIOS has written '1' to this bit to indicate that it is running.\n         0= BIOS has not yet written this bit; not yet running. (default).\n Mask */
#define GLUE_LED_REG_Msk                      (0x0000000FUL)                                 /**< (GLUE_LED_REG) Register Mask  */

/* -------- GLUE_INTRUDER_REG : (GLUE Offset: 0x10) (R/W 32) This register provides an image of the Intruder status for the Host CPU. It also allows the CPU     to clear this status directly. This status is also provided to Firmware using the PWRBTN# and Signal     Monitor Register Set, where it can trigger Firmware interrupts. Firmware can use these notifications     to generate SMI, SCI or Wake events to the Host CPU Chipset as appropriate.\n -------- */

typedef union
{
  struct
  {
    uint32_t INTRUSION:1;               /**< bit:      0  This bit displays a copy of the bit INTRUSION in the Power-Fail and Reset Status Register.         Writing '1' to this bit position, by either Host CPU or Firmware action, clears it both in that         register and here. This is a R/WC bit.\n */
    uint32_t INTRD_STS:1;               /**< bit:      1  This is a continuous copy of the bit INTRD_STS in the Intruder Control Register.\n */
    uint32_t :30;                       /**< bit:  2..31  Reserved                                      */
  };
  uint32_t w;
} __GLUE_INTRUDER_REG_bits_t;
#define GLUE_INTRUDER_REG_RESETVALUE        (0x00U)                                       /**<  (GLUE_INTRUDER_REG) This register provides an image of the Intruder status for the Host CPU. It also allows the CPU     to clear this status directly. This status is also provided to Firmware using the PWRBTN# and Signal     Monitor Register Set, where it can trigger Firmware interrupts. Firmware can use these notifications     to generate SMI, SCI or Wake events to the Host CPU Chipset as appropriate.\n  Reset Value */

#define GLUE_INTRUDER_REG_INTRUSION_Pos       (0)                                            /**< (GLUE_INTRUDER_REG) This bit displays a copy of the bit INTRUSION in the Power-Fail and Reset Status Register.         Writing '1' to this bit position, by either Host CPU or Firmware action, clears it both in that         register and here. This is a R/WC bit.\n Position */
#define GLUE_INTRUDER_REG_INTRUSION_Msk       (0x1U << GLUE_INTRUDER_REG_INTRUSION_Pos)      /**< (GLUE_INTRUDER_REG) This bit displays a copy of the bit INTRUSION in the Power-Fail and Reset Status Register.         Writing '1' to this bit position, by either Host CPU or Firmware action, clears it both in that         register and here. This is a R/WC bit.\n Mask */
#define GLUE_INTRUDER_REG_INTRD_STS_Pos       (1)                                            /**< (GLUE_INTRUDER_REG) This is a continuous copy of the bit INTRD_STS in the Intruder Control Register.\n Position */
#define GLUE_INTRUDER_REG_INTRD_STS_Msk       (0x1U << GLUE_INTRUDER_REG_INTRD_STS_Pos)      /**< (GLUE_INTRUDER_REG) This is a continuous copy of the bit INTRD_STS in the Intruder Control Register.\n Mask */
#define GLUE_INTRUDER_REG_Msk                 (0x00000003UL)                                 /**< (GLUE_INTRUDER_REG) Register Mask  */

/* -------- GLUE_LRESET_CONFIG : (GLUE Offset: 0x100) (R/W 32) This register defines whether the LRESET_BI# input term comes from a physical pin or from the chip-level     PCI Reset input. This configuration must be completed before the first application of Main power (S0 power state). -------- */

typedef union
{
  struct
  {
    uint32_t LRESET_SOURCE:1;           /**< bit:      0  This bit define the source of LRESET_BI#.\n         1= LRESET_BI# comes from the physical pin input PCI_RESET#.\n         0= LRESET_BI# comes from the Chip-Level PCI_RST# (default).\n */
    uint32_t :6;                        /**< bit:   1..6  Reserved                                      */
    uint32_t LRESET_CONFIGURED:1;       /**< bit:      7  This bit define whether LRESET_SOURCE bit, along with chip-level pin settings are configured or not.\n         1= LRESET_BI# source is configured, and the LRESET_SOURCE bit, along with chip-level pin settings,         defines where it comes from.\n         0= LRESET_BI# source is not fully configured and forced '0' internally (default).\n */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __GLUE_LRESET_CONFIG_bits_t;
#define GLUE_LRESET_CONFIG_RESETVALUE       (0x00U)                                       /**<  (GLUE_LRESET_CONFIG) This register defines whether the LRESET_BI# input term comes from a physical pin or from the chip-level     PCI Reset input. This configuration must be completed before the first application of Main power (S0 power state).  Reset Value */

#define GLUE_LRESET_CONFIG_LRESET_SOURCE_Pos  (0)                                            /**< (GLUE_LRESET_CONFIG) This bit define the source of LRESET_BI#.\n         1= LRESET_BI# comes from the physical pin input PCI_RESET#.\n         0= LRESET_BI# comes from the Chip-Level PCI_RST# (default).\n Position */
#define GLUE_LRESET_CONFIG_LRESET_SOURCE_Msk  (0x1U << GLUE_LRESET_CONFIG_LRESET_SOURCE_Pos)  /**< (GLUE_LRESET_CONFIG) This bit define the source of LRESET_BI#.\n         1= LRESET_BI# comes from the physical pin input PCI_RESET#.\n         0= LRESET_BI# comes from the Chip-Level PCI_RST# (default).\n Mask */
#define GLUE_LRESET_CONFIG_LRESET_CONFIGURED_Pos (7)                                            /**< (GLUE_LRESET_CONFIG) This bit define whether LRESET_SOURCE bit, along with chip-level pin settings are configured or not.\n         1= LRESET_BI# source is configured, and the LRESET_SOURCE bit, along with chip-level pin settings,         defines where it comes from.\n         0= LRESET_BI# source is not fully configured and forced '0' internally (default).\n Position */
#define GLUE_LRESET_CONFIG_LRESET_CONFIGURED_Msk (0x1U << GLUE_LRESET_CONFIG_LRESET_CONFIGURED_Pos)  /**< (GLUE_LRESET_CONFIG) This bit define whether LRESET_SOURCE bit, along with chip-level pin settings are configured or not.\n         1= LRESET_BI# source is configured, and the LRESET_SOURCE bit, along with chip-level pin settings,         defines where it comes from.\n         0= LRESET_BI# source is not fully configured and forced '0' internally (default).\n Mask */
#define GLUE_LRESET_CONFIG_Msk                (0x00000081UL)                                 /**< (GLUE_LRESET_CONFIG) Register Mask  */

/* -------- GLUE_PWR_TURNON_SRC : (GLUE Offset: 0x104) (R/W 32) This register defines whether the SLP_S3_IN# input term comes from a physical pin input or from     the eSPI Virtual Wire SLP_S3#. -------- */

typedef union
{
  struct
  {
    uint32_t TURN_ON_S3_SRC:1;          /**< bit:      0  This field decides whether SLP_S3_IN# comes from the Virtual Wire SLP_S3# or physical SLP_S3# input.\n         1= SLP_S3_IN# comes from the Virtual Wire SLP_S3# (eSPI only).\n         0= SLP_S3_IN# comes from the physical SLP_S3# input (default).\n */
    uint32_t TURN_ON_FW_OFF_EN:1;       /**< bit:      1  This field decides whether Firmware can use the FW_PS_OFF bit to control PS_ON#.\n         1= Firmware can use the FW_PS_OFF bit to control PS_ON#.\n         0= FW_PS_OFF bit has no effect, as constant zero (default).\n */
    uint32_t :5;                        /**< bit:   2..6  Reserved                                      */
    uint32_t TURN_ON_CONFIGURED:1;      /**< bit:      7  This field define whether PS_ON# control sources are fully configured in bits [1:0] of this register.\n         and from chip-level pin function settings.\n         1= PS_ON# control sources are fully configured, from bits [1:0] and from chip-level pin function settings.\n         0= PS_ON# control source is not fully configured and PS_ON# is held in its '1' state (default).\n */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __GLUE_PWR_TURNON_SRC_bits_t;
#define GLUE_PWR_TURNON_SRC_RESETVALUE      (0x00U)                                       /**<  (GLUE_PWR_TURNON_SRC) This register defines whether the SLP_S3_IN# input term comes from a physical pin input or from     the eSPI Virtual Wire SLP_S3#.  Reset Value */

#define GLUE_PWR_TURNON_SRC_TURN_ON_S3_SRC_Pos (0)                                            /**< (GLUE_PWR_TURNON_SRC) This field decides whether SLP_S3_IN# comes from the Virtual Wire SLP_S3# or physical SLP_S3# input.\n         1= SLP_S3_IN# comes from the Virtual Wire SLP_S3# (eSPI only).\n         0= SLP_S3_IN# comes from the physical SLP_S3# input (default).\n Position */
#define GLUE_PWR_TURNON_SRC_TURN_ON_S3_SRC_Msk (0x1U << GLUE_PWR_TURNON_SRC_TURN_ON_S3_SRC_Pos)  /**< (GLUE_PWR_TURNON_SRC) This field decides whether SLP_S3_IN# comes from the Virtual Wire SLP_S3# or physical SLP_S3# input.\n         1= SLP_S3_IN# comes from the Virtual Wire SLP_S3# (eSPI only).\n         0= SLP_S3_IN# comes from the physical SLP_S3# input (default).\n Mask */
#define GLUE_PWR_TURNON_SRC_TURN_ON_FW_OFF_EN_Pos (1)                                            /**< (GLUE_PWR_TURNON_SRC) This field decides whether Firmware can use the FW_PS_OFF bit to control PS_ON#.\n         1= Firmware can use the FW_PS_OFF bit to control PS_ON#.\n         0= FW_PS_OFF bit has no effect, as constant zero (default).\n Position */
#define GLUE_PWR_TURNON_SRC_TURN_ON_FW_OFF_EN_Msk (0x1U << GLUE_PWR_TURNON_SRC_TURN_ON_FW_OFF_EN_Pos)  /**< (GLUE_PWR_TURNON_SRC) This field decides whether Firmware can use the FW_PS_OFF bit to control PS_ON#.\n         1= Firmware can use the FW_PS_OFF bit to control PS_ON#.\n         0= FW_PS_OFF bit has no effect, as constant zero (default).\n Mask */
#define GLUE_PWR_TURNON_SRC_TURN_ON_CONFIGURED_Pos (7)                                            /**< (GLUE_PWR_TURNON_SRC) This field define whether PS_ON# control sources are fully configured in bits [1:0] of this register.\n         and from chip-level pin function settings.\n         1= PS_ON# control sources are fully configured, from bits [1:0] and from chip-level pin function settings.\n         0= PS_ON# control source is not fully configured and PS_ON# is held in its '1' state (default).\n Position */
#define GLUE_PWR_TURNON_SRC_TURN_ON_CONFIGURED_Msk (0x1U << GLUE_PWR_TURNON_SRC_TURN_ON_CONFIGURED_Pos)  /**< (GLUE_PWR_TURNON_SRC) This field define whether PS_ON# control sources are fully configured in bits [1:0] of this register.\n         and from chip-level pin function settings.\n         1= PS_ON# control sources are fully configured, from bits [1:0] and from chip-level pin function settings.\n         0= PS_ON# control source is not fully configured and PS_ON# is held in its '1' state (default).\n Mask */
#define GLUE_PWR_TURNON_SRC_Msk               (0x00000083UL)                                 /**< (GLUE_PWR_TURNON_SRC) Register Mask  */

/* -------- GLUE_PWR_FW_OFF : (GLUE Offset: 0x108) (R/W 32) This register may be used by firmware to turn off the PS_ON# pin state, when it would otherwise be on.\n -------- */

typedef union
{
  struct
  {
    uint32_t FW_PS_OFF:1;               /**< bit:      0  1= PS_ON# is forced to the Off (OD high) state. Requires that the TURN_ON_FW_OFF_EN configuration bit is also set to '1'.\n         0= PS_ON# is allowed to follow its SLP_S3_IN# input (default). */
    uint32_t :31;                       /**< bit:  1..31  Reserved                                      */
  };
  uint32_t w;
} __GLUE_PWR_FW_OFF_bits_t;
#define GLUE_PWR_FW_OFF_RESETVALUE          (0x00U)                                       /**<  (GLUE_PWR_FW_OFF) This register may be used by firmware to turn off the PS_ON# pin state, when it would otherwise be on.\n  Reset Value */

#define GLUE_PWR_FW_OFF_FW_PS_OFF_Pos         (0)                                            /**< (GLUE_PWR_FW_OFF) 1= PS_ON# is forced to the Off (OD high) state. Requires that the TURN_ON_FW_OFF_EN configuration bit is also set to '1'.\n         0= PS_ON# is allowed to follow its SLP_S3_IN# input (default). Position */
#define GLUE_PWR_FW_OFF_FW_PS_OFF_Msk         (0x1U << GLUE_PWR_FW_OFF_FW_PS_OFF_Pos)        /**< (GLUE_PWR_FW_OFF) 1= PS_ON# is forced to the Off (OD high) state. Requires that the TURN_ON_FW_OFF_EN configuration bit is also set to '1'.\n         0= PS_ON# is allowed to follow its SLP_S3_IN# input (default). Mask */
#define GLUE_PWR_FW_OFF_Msk                   (0x00000001UL)                                 /**< (GLUE_PWR_FW_OFF) Register Mask  */

/* -------- GLUE_PWRGD_STATE_SRC_CFG : (GLUE Offset: 0x10c) (R/W 32) For the low-power S0 state S0ix only, this register defines whether the PWRGD_STATE input term comes \n     from the physical pin PWRGD_PS, or from the PWRGD_S0IX pin, or from a combination of both. PWRGD_STATE \n     comes only from the PWRGD_PS signal in all modes other than S0ix, and this register has no effect. -------- */

typedef union
{
  struct
  {
    uint32_t PWRGD_STATE_SOURCE:2;      /**< bit:   0..1  11= PWRGD_STATE is the logical expression (PWRGD_PS) And (PWRGD_S0IX).\n         10= Reserved.\n          01= PWRGD_STATE comes from the pin input PWRGD_S0IX.\n         00= PWRGD_STATE comes from the pin input PWRGD_PS (default).\n */
    uint32_t :30;                       /**< bit:  2..31  Reserved                                      */
  };
  uint32_t w;
} __GLUE_PWRGD_STATE_SRC_CFG_bits_t;
#define GLUE_PWRGD_STATE_SRC_CFG_RESETVALUE (0x00U)                                       /**<  (GLUE_PWRGD_STATE_SRC_CFG) For the low-power S0 state S0ix only, this register defines whether the PWRGD_STATE input term comes \n     from the physical pin PWRGD_PS, or from the PWRGD_S0IX pin, or from a combination of both. PWRGD_STATE \n     comes only from the PWRGD_PS signal in all modes other than S0ix, and this register has no effect.  Reset Value */

#define GLUE_PWRGD_STATE_SRC_CFG_PWRGD_STATE_SOURCE_Pos (0)                                            /**< (GLUE_PWRGD_STATE_SRC_CFG) 11= PWRGD_STATE is the logical expression (PWRGD_PS) And (PWRGD_S0IX).\n         10= Reserved.\n          01= PWRGD_STATE comes from the pin input PWRGD_S0IX.\n         00= PWRGD_STATE comes from the pin input PWRGD_PS (default).\n Position */
#define GLUE_PWRGD_STATE_SRC_CFG_PWRGD_STATE_SOURCE_Msk (0x3U << GLUE_PWRGD_STATE_SRC_CFG_PWRGD_STATE_SOURCE_Pos)  /**< (GLUE_PWRGD_STATE_SRC_CFG) 11= PWRGD_STATE is the logical expression (PWRGD_PS) And (PWRGD_S0IX).\n         10= Reserved.\n          01= PWRGD_STATE comes from the pin input PWRGD_S0IX.\n         00= PWRGD_STATE comes from the pin input PWRGD_PS (default).\n Mask */
#define GLUE_PWRGD_STATE_SRC_CFG_PWRGD_STATE_SOURCE(value) (GLUE_PWRGD_STATE_SRC_CFG_PWRGD_STATE_SOURCE_Msk & ((value) << GLUE_PWRGD_STATE_SRC_CFG_PWRGD_STATE_SOURCE_Pos))
#define GLUE_PWRGD_STATE_SRC_CFG_Msk          (0x00000003UL)                                 /**< (GLUE_PWRGD_STATE_SRC_CFG) Register Mask  */

/* -------- GLUE_S0IX_ST_DETECT_CONFIG : (GLUE Offset: 0x110) (R/W 32) This register defines how the S0ix system state is detected. If all conditions are met, as defined by     the S0IX_DET_SOURCE field, and the S0IX_DET_EN bit in the S0ix State Detection Enable Register is also set     to '1', then the S0ix term is defined as '1'; else it is defined as '0'. -------- */

typedef union
{
  struct
  {
    uint32_t S0IX_DET_SOURCE:2;         /**< bit:   0..1  S0ix State is detect.\n         11=S0ix State is detected as the C10 function AND the SLP_S0 function both active, as selected by their\n            respective polarity and source.         10=S0ix State is detected as the C10 function active.\n         01=S0ix State is detected as the SLP_S0 function active.\n         00=S0ix State is not supported, and is presented as a constant '0' (default).\n */
    uint32_t SLP_S0_INV:1;              /**< bit:      2  1= SLP_S0# pin input is from an inverted, high-active, source.\n         0= SLP_S0# pin input is from a low-active source (default).\n */
    uint32_t C10_INV:1;                 /**< bit:      3  1= C10 is from an inverted, low-active, source.\n         0= C10 is from a high-active source (default).\n */
    uint32_t C10_SOURCE:1;              /**< bit:      4  1= C10 comes from the Virtual Wire HOST_C10 (eSPI only).\n         0= C10 comes from the physical pin input CPU_C10 (default).\n */
    uint32_t :27;                       /**< bit:  5..31  Reserved                                      */
  };
  uint32_t w;
} __GLUE_S0IX_ST_DETECT_CONFIG_bits_t;
#define GLUE_S0IX_ST_DETECT_CONFIG_RESETVALUE (0x00U)                                       /**<  (GLUE_S0IX_ST_DETECT_CONFIG) This register defines how the S0ix system state is detected. If all conditions are met, as defined by     the S0IX_DET_SOURCE field, and the S0IX_DET_EN bit in the S0ix State Detection Enable Register is also set     to '1', then the S0ix term is defined as '1'; else it is defined as '0'.  Reset Value */

#define GLUE_S0IX_ST_DETECT_CONFIG_S0IX_DET_SOURCE_Pos (0)                                            /**< (GLUE_S0IX_ST_DETECT_CONFIG) S0ix State is detect.\n         11=S0ix State is detected as the C10 function AND the SLP_S0 function both active, as selected by their\n            respective polarity and source.         10=S0ix State is detected as the C10 function active.\n         01=S0ix State is detected as the SLP_S0 function active.\n         00=S0ix State is not supported, and is presented as a constant '0' (default).\n Position */
#define GLUE_S0IX_ST_DETECT_CONFIG_S0IX_DET_SOURCE_Msk (0x3U << GLUE_S0IX_ST_DETECT_CONFIG_S0IX_DET_SOURCE_Pos)  /**< (GLUE_S0IX_ST_DETECT_CONFIG) S0ix State is detect.\n         11=S0ix State is detected as the C10 function AND the SLP_S0 function both active, as selected by their\n            respective polarity and source.         10=S0ix State is detected as the C10 function active.\n         01=S0ix State is detected as the SLP_S0 function active.\n         00=S0ix State is not supported, and is presented as a constant '0' (default).\n Mask */
#define GLUE_S0IX_ST_DETECT_CONFIG_S0IX_DET_SOURCE(value) (GLUE_S0IX_ST_DETECT_CONFIG_S0IX_DET_SOURCE_Msk & ((value) << GLUE_S0IX_ST_DETECT_CONFIG_S0IX_DET_SOURCE_Pos))
#define GLUE_S0IX_ST_DETECT_CONFIG_SLP_S0_INV_Pos (2)                                            /**< (GLUE_S0IX_ST_DETECT_CONFIG) 1= SLP_S0# pin input is from an inverted, high-active, source.\n         0= SLP_S0# pin input is from a low-active source (default).\n Position */
#define GLUE_S0IX_ST_DETECT_CONFIG_SLP_S0_INV_Msk (0x1U << GLUE_S0IX_ST_DETECT_CONFIG_SLP_S0_INV_Pos)  /**< (GLUE_S0IX_ST_DETECT_CONFIG) 1= SLP_S0# pin input is from an inverted, high-active, source.\n         0= SLP_S0# pin input is from a low-active source (default).\n Mask */
#define GLUE_S0IX_ST_DETECT_CONFIG_C10_INV_Pos (3)                                            /**< (GLUE_S0IX_ST_DETECT_CONFIG) 1= C10 is from an inverted, low-active, source.\n         0= C10 is from a high-active source (default).\n Position */
#define GLUE_S0IX_ST_DETECT_CONFIG_C10_INV_Msk (0x1U << GLUE_S0IX_ST_DETECT_CONFIG_C10_INV_Pos)  /**< (GLUE_S0IX_ST_DETECT_CONFIG) 1= C10 is from an inverted, low-active, source.\n         0= C10 is from a high-active source (default).\n Mask */
#define GLUE_S0IX_ST_DETECT_CONFIG_C10_SOURCE_Pos (4)                                            /**< (GLUE_S0IX_ST_DETECT_CONFIG) 1= C10 comes from the Virtual Wire HOST_C10 (eSPI only).\n         0= C10 comes from the physical pin input CPU_C10 (default).\n Position */
#define GLUE_S0IX_ST_DETECT_CONFIG_C10_SOURCE_Msk (0x1U << GLUE_S0IX_ST_DETECT_CONFIG_C10_SOURCE_Pos)  /**< (GLUE_S0IX_ST_DETECT_CONFIG) 1= C10 comes from the Virtual Wire HOST_C10 (eSPI only).\n         0= C10 comes from the physical pin input CPU_C10 (default).\n Mask */
#define GLUE_S0IX_ST_DETECT_CONFIG_Msk        (0x0000001FUL)                                 /**< (GLUE_S0IX_ST_DETECT_CONFIG) Register Mask  */

/* -------- GLUE_RESUME_RST : (GLUE Offset: 0x114) (R/W 32) This register provides gating bits for RSMRST# and DPWROK, forcing them both low from a RESET_SYS\n     event (VTR POR) until firmware is ready for them to rise.\n -------- */

typedef union
{
  struct
  {
    uint32_t FW_RESUME_RST:1;           /**< bit:      0  Resume RSMRST# Signal.\n         1= RSMRST# signal is allowed to rise, if hardware conditions are also met.\n         0= RSMRST# signal is forced to 0 regardless of any other hardware conditions (default).\n */
    uint32_t FW_DPWROK:1;               /**< bit:      1  Resume DPWORK Signal.\n         1= DPWROK signal is allowed to rise, if hardware conditions are also met.\n         0= DPWROK signal is forced to 0 regardless of any other hardware conditions (default).\n */
    uint32_t :30;                       /**< bit:  2..31  Reserved                                      */
  };
  uint32_t w;
} __GLUE_RESUME_RST_bits_t;
#define GLUE_RESUME_RST_RESETVALUE          (0x00U)                                       /**<  (GLUE_RESUME_RST) This register provides gating bits for RSMRST# and DPWROK, forcing them both low from a RESET_SYS\n     event (VTR POR) until firmware is ready for them to rise.\n  Reset Value */

#define GLUE_RESUME_RST_FW_RESUME_RST_Pos     (0)                                            /**< (GLUE_RESUME_RST) Resume RSMRST# Signal.\n         1= RSMRST# signal is allowed to rise, if hardware conditions are also met.\n         0= RSMRST# signal is forced to 0 regardless of any other hardware conditions (default).\n Position */
#define GLUE_RESUME_RST_FW_RESUME_RST_Msk     (0x1U << GLUE_RESUME_RST_FW_RESUME_RST_Pos)    /**< (GLUE_RESUME_RST) Resume RSMRST# Signal.\n         1= RSMRST# signal is allowed to rise, if hardware conditions are also met.\n         0= RSMRST# signal is forced to 0 regardless of any other hardware conditions (default).\n Mask */
#define GLUE_RESUME_RST_FW_DPWROK_Pos         (1)                                            /**< (GLUE_RESUME_RST) Resume DPWORK Signal.\n         1= DPWROK signal is allowed to rise, if hardware conditions are also met.\n         0= DPWROK signal is forced to 0 regardless of any other hardware conditions (default).\n Position */
#define GLUE_RESUME_RST_FW_DPWROK_Msk         (0x1U << GLUE_RESUME_RST_FW_DPWROK_Pos)        /**< (GLUE_RESUME_RST) Resume DPWORK Signal.\n         1= DPWROK signal is allowed to rise, if hardware conditions are also met.\n         0= DPWROK signal is forced to 0 regardless of any other hardware conditions (default).\n Mask */
#define GLUE_RESUME_RST_Msk                   (0x00000003UL)                                 /**< (GLUE_RESUME_RST) Register Mask  */

/* -------- GLUE_SLP_SUS_L_SRC_CONFIG : (GLUE Offset: 0x118) (R/W 32) This selection defines the SLP_SUS_L# term used in the section above. It is used for both the     SLP_SUS_FET logic and for the RSMRST# logic.\n     This register must be set up before allowing the DPWROK pin to rise. The default state of this     register applies S5 power on unconditionally when rising from a full system G3 state, effective     from the rising edge of DPWROK, and independently of the SLP_SUS# input pin.\n -------- */

typedef union
{
  struct
  {
    uint32_t SLP_SUS_L_SOURCE:2;        /**< bit:   0..1  SLP_SUS_L source selection.\n         0x3= Reserved.\n         0x2= SLP_SUS_L# term is the logical expression (SLP_SUS# pin) And (~FW_SLP_SUS_STATE).\n         0x1= SLP_SUS_L# comes from the pin input SLP_SUS#.\n         0x0= SLP_SUS_L# comes from the inversion of bit FW_SLP_SUS_STATE. (default).\n */
    uint32_t :30;                       /**< bit:  2..31  Reserved                                      */
  };
  uint32_t w;
} __GLUE_SLP_SUS_L_SRC_CONFIG_bits_t;
#define GLUE_SLP_SUS_L_SRC_CONFIG_RESETVALUE (0x00U)                                       /**<  (GLUE_SLP_SUS_L_SRC_CONFIG) This selection defines the SLP_SUS_L# term used in the section above. It is used for both the     SLP_SUS_FET logic and for the RSMRST# logic.\n     This register must be set up before allowing the DPWROK pin to rise. The default state of this     register applies S5 power on unconditionally when rising from a full system G3 state, effective     from the rising edge of DPWROK, and independently of the SLP_SUS# input pin.\n  Reset Value */

#define GLUE_SLP_SUS_L_SRC_CONFIG_SLP_SUS_L_SOURCE_Pos (0)                                            /**< (GLUE_SLP_SUS_L_SRC_CONFIG) SLP_SUS_L source selection.\n         0x3= Reserved.\n         0x2= SLP_SUS_L# term is the logical expression (SLP_SUS# pin) And (~FW_SLP_SUS_STATE).\n         0x1= SLP_SUS_L# comes from the pin input SLP_SUS#.\n         0x0= SLP_SUS_L# comes from the inversion of bit FW_SLP_SUS_STATE. (default).\n Position */
#define GLUE_SLP_SUS_L_SRC_CONFIG_SLP_SUS_L_SOURCE_Msk (0x3U << GLUE_SLP_SUS_L_SRC_CONFIG_SLP_SUS_L_SOURCE_Pos)  /**< (GLUE_SLP_SUS_L_SRC_CONFIG) SLP_SUS_L source selection.\n         0x3= Reserved.\n         0x2= SLP_SUS_L# term is the logical expression (SLP_SUS# pin) And (~FW_SLP_SUS_STATE).\n         0x1= SLP_SUS_L# comes from the pin input SLP_SUS#.\n         0x0= SLP_SUS_L# comes from the inversion of bit FW_SLP_SUS_STATE. (default).\n Mask */
#define GLUE_SLP_SUS_L_SRC_CONFIG_SLP_SUS_L_SOURCE(value) (GLUE_SLP_SUS_L_SRC_CONFIG_SLP_SUS_L_SOURCE_Msk & ((value) << GLUE_SLP_SUS_L_SRC_CONFIG_SLP_SUS_L_SOURCE_Pos))
#define GLUE_SLP_SUS_L_SRC_CONFIG_Msk         (0x00000003UL)                                 /**< (GLUE_SLP_SUS_L_SRC_CONFIG) Register Mask  */

/* -------- GLUE_SLP_SUS_L_FWSRC : (GLUE Offset: 0x11c) (R/W 32) This register provides the Firmware input term for the SLP_SUS_L# expression selected by     the SLP_SUS_L_SOURCE field. Note that this bit is inverted from the sense of the SLP_SUS#     input pin; it is active high to indicate the Sleep state.\n -------- */

typedef union
{
  struct
  {
    uint32_t FW_SLP_SUS_STATE:1;        /**< bit:      0  This register must be set up before     allowing the DPWROK pin to rise. The default state of this register applies S5 power on     unconditionally when rising from a full system G3 state, effective from the rising edge of DPWROK.\n     This bit has no effect unless the SLP_SUS_L_SOURCE field selects it for input.\n     1= Holds SLP_SUS_L# low, if the SLP_SUS_L_SOURCE field selects it.\n     0= Allows SLP_SUS_L# to rise, as defined by the expression selected by the SLP_SUS_L_SOURCE field (default).\n */
    uint32_t :31;                       /**< bit:  1..31  Reserved                                      */
  };
  uint32_t w;
} __GLUE_SLP_SUS_L_FWSRC_bits_t;
#define GLUE_SLP_SUS_L_FWSRC_RESETVALUE     (0x00U)                                       /**<  (GLUE_SLP_SUS_L_FWSRC) This register provides the Firmware input term for the SLP_SUS_L# expression selected by     the SLP_SUS_L_SOURCE field. Note that this bit is inverted from the sense of the SLP_SUS#     input pin; it is active high to indicate the Sleep state.\n  Reset Value */

#define GLUE_SLP_SUS_L_FWSRC_FW_SLP_SUS_STATE_Pos (0)                                            /**< (GLUE_SLP_SUS_L_FWSRC) This register must be set up before     allowing the DPWROK pin to rise. The default state of this register applies S5 power on     unconditionally when rising from a full system G3 state, effective from the rising edge of DPWROK.\n     This bit has no effect unless the SLP_SUS_L_SOURCE field selects it for input.\n     1= Holds SLP_SUS_L# low, if the SLP_SUS_L_SOURCE field selects it.\n     0= Allows SLP_SUS_L# to rise, as defined by the expression selected by the SLP_SUS_L_SOURCE field (default).\n Position */
#define GLUE_SLP_SUS_L_FWSRC_FW_SLP_SUS_STATE_Msk (0x1U << GLUE_SLP_SUS_L_FWSRC_FW_SLP_SUS_STATE_Pos)  /**< (GLUE_SLP_SUS_L_FWSRC) This register must be set up before     allowing the DPWROK pin to rise. The default state of this register applies S5 power on     unconditionally when rising from a full system G3 state, effective from the rising edge of DPWROK.\n     This bit has no effect unless the SLP_SUS_L_SOURCE field selects it for input.\n     1= Holds SLP_SUS_L# low, if the SLP_SUS_L_SOURCE field selects it.\n     0= Allows SLP_SUS_L# to rise, as defined by the expression selected by the SLP_SUS_L_SOURCE field (default).\n Mask */
#define GLUE_SLP_SUS_L_FWSRC_Msk              (0x00000001UL)                                 /**< (GLUE_SLP_SUS_L_FWSRC) Register Mask  */

/* -------- GLUE_PCIAUX_CTRL_SRC_CONFIG : (GLUE Offset: 0x120) (R/W 32) This register defines whether the SLP_S4# input term (Table 15.11) comes from the physical pin     function SLP_S4#, or from a Virtual Wire. When coming from an eSPI Virtual Wire, it will designate     an alternate SLP_Sx# source as the SLP_S4# term, simulating an alternate external pin connection.\n     PCIAUX_GATE comes only from an external signal, and this register has no effect on that input.\n -------- */

typedef union
{
  struct
  {
    uint32_t PCIAUX_SLEEP_SOURCE:1;     /**< bit:      0  This bit define the source of SLP_S4# term.\n         1= SLP_S4# term comes from the eSPI Virtual Wire designated in the PCIAUX_VWIRE_SOURCE field.         This selection is Reserved unless eSPI is used as the Host interface.\n         0= SLP_S4# term comes from the pin input SLP_S4# (default).\n */
    uint32_t PCIAUX_VWIRE_SOURCE:2;     /**< bit:   1..2  This bit define the source of SLP_S4# term. This field has no effect unless the         PCIAUX_SLEEP_SOURCE bit is set to 1.\n         0x3= Reserved.\n          0x2= SLP_S4# term comes from the Virtual Wire SLP_S3#.\n          0x1= SLP_S4# term comes from the Virtual Wire SLP_S5#.\n         0x0= SLP_S4# term comes from the Virtual Wire SLP_S4# (default).\n */
    uint32_t :4;                        /**< bit:   3..6  Reserved                                      */
    uint32_t PCIAUX_CONFIGURED:1;       /**< bit:      7  This bit define whether SLP_S4# term source is fully configured or not.\n         1= SLP_S4# term source is fully configured.\n         0= SLP_S4# term source is not yet configured, and is forced to be a constant 0 (default).\n */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __GLUE_PCIAUX_CTRL_SRC_CONFIG_bits_t;
#define GLUE_PCIAUX_CTRL_SRC_CONFIG_RESETVALUE (0x00U)                                       /**<  (GLUE_PCIAUX_CTRL_SRC_CONFIG) This register defines whether the SLP_S4# input term (Table 15.11) comes from the physical pin     function SLP_S4#, or from a Virtual Wire. When coming from an eSPI Virtual Wire, it will designate     an alternate SLP_Sx# source as the SLP_S4# term, simulating an alternate external pin connection.\n     PCIAUX_GATE comes only from an external signal, and this register has no effect on that input.\n  Reset Value */

#define GLUE_PCIAUX_CTRL_SRC_CONFIG_PCIAUX_SLEEP_SOURCE_Pos (0)                                            /**< (GLUE_PCIAUX_CTRL_SRC_CONFIG) This bit define the source of SLP_S4# term.\n         1= SLP_S4# term comes from the eSPI Virtual Wire designated in the PCIAUX_VWIRE_SOURCE field.         This selection is Reserved unless eSPI is used as the Host interface.\n         0= SLP_S4# term comes from the pin input SLP_S4# (default).\n Position */
#define GLUE_PCIAUX_CTRL_SRC_CONFIG_PCIAUX_SLEEP_SOURCE_Msk (0x1U << GLUE_PCIAUX_CTRL_SRC_CONFIG_PCIAUX_SLEEP_SOURCE_Pos)  /**< (GLUE_PCIAUX_CTRL_SRC_CONFIG) This bit define the source of SLP_S4# term.\n         1= SLP_S4# term comes from the eSPI Virtual Wire designated in the PCIAUX_VWIRE_SOURCE field.         This selection is Reserved unless eSPI is used as the Host interface.\n         0= SLP_S4# term comes from the pin input SLP_S4# (default).\n Mask */
#define GLUE_PCIAUX_CTRL_SRC_CONFIG_PCIAUX_VWIRE_SOURCE_Pos (1)                                            /**< (GLUE_PCIAUX_CTRL_SRC_CONFIG) This bit define the source of SLP_S4# term. This field has no effect unless the         PCIAUX_SLEEP_SOURCE bit is set to 1.\n         0x3= Reserved.\n          0x2= SLP_S4# term comes from the Virtual Wire SLP_S3#.\n          0x1= SLP_S4# term comes from the Virtual Wire SLP_S5#.\n         0x0= SLP_S4# term comes from the Virtual Wire SLP_S4# (default).\n Position */
#define GLUE_PCIAUX_CTRL_SRC_CONFIG_PCIAUX_VWIRE_SOURCE_Msk (0x3U << GLUE_PCIAUX_CTRL_SRC_CONFIG_PCIAUX_VWIRE_SOURCE_Pos)  /**< (GLUE_PCIAUX_CTRL_SRC_CONFIG) This bit define the source of SLP_S4# term. This field has no effect unless the         PCIAUX_SLEEP_SOURCE bit is set to 1.\n         0x3= Reserved.\n          0x2= SLP_S4# term comes from the Virtual Wire SLP_S3#.\n          0x1= SLP_S4# term comes from the Virtual Wire SLP_S5#.\n         0x0= SLP_S4# term comes from the Virtual Wire SLP_S4# (default).\n Mask */
#define GLUE_PCIAUX_CTRL_SRC_CONFIG_PCIAUX_VWIRE_SOURCE(value) (GLUE_PCIAUX_CTRL_SRC_CONFIG_PCIAUX_VWIRE_SOURCE_Msk & ((value) << GLUE_PCIAUX_CTRL_SRC_CONFIG_PCIAUX_VWIRE_SOURCE_Pos))
#define GLUE_PCIAUX_CTRL_SRC_CONFIG_PCIAUX_CONFIGURED_Pos (7)                                            /**< (GLUE_PCIAUX_CTRL_SRC_CONFIG) This bit define whether SLP_S4# term source is fully configured or not.\n         1= SLP_S4# term source is fully configured.\n         0= SLP_S4# term source is not yet configured, and is forced to be a constant 0 (default).\n Position */
#define GLUE_PCIAUX_CTRL_SRC_CONFIG_PCIAUX_CONFIGURED_Msk (0x1U << GLUE_PCIAUX_CTRL_SRC_CONFIG_PCIAUX_CONFIGURED_Pos)  /**< (GLUE_PCIAUX_CTRL_SRC_CONFIG) This bit define whether SLP_S4# term source is fully configured or not.\n         1= SLP_S4# term source is fully configured.\n         0= SLP_S4# term source is not yet configured, and is forced to be a constant 0 (default).\n Mask */
#define GLUE_PCIAUX_CTRL_SRC_CONFIG_Msk       (0x00000087UL)                                 /**< (GLUE_PCIAUX_CTRL_SRC_CONFIG) Register Mask  */

/* -------- GLUE_BFCUT_SRC_CONFIG : (GLUE Offset: 0x124) (R/W 32) This register defines whether the SLP_S3_BF# and SLP_S4_BF# input terms come from the     physical pin functions SLP_S3# and SLP_S4#, or from Virtual Wires. When coming from an eSPI     Virtual Wire, it can be used to designate alternate SLP_Sx# sources for these terms,     simulating alternate external pin connections.\n -------- */

typedef union
{
  struct
  {
    uint32_t BFCUT_SLP_S3_SRC:1;        /**< bit:      0  This bit define the source of SLP_S3_BF#.\n         1= SLP_S3_BF# term comes from the eSPI Virtual Wire designated in the BFCUT_SLP_S3_VWIRE_SOURCE         field. This selection is Reserved unless eSPI is used as the Host interface.\n         0= SLP_S3_BF# term comes from the pin input SLP_S3# (default).\n */
    uint32_t BFCUT_SLP_S3_VWIRE_SRC:2;  /**< bit:   1..2  This bit define the source of SLP_S3_BF#. This field has no effect unless the         BFCUT_SLP_S3_SOURCE bit is set to 1.\n         0x3= Reserved.\n          0x2= SLP_S3_BF# term comes from the Virtual Wire SLP_S5#.\n          0x1= SLP_S3_BF# term comes from the Virtual Wire SLP_S4#.\n         0x0= SLP_S3_BF# term comes from the Virtual Wire SLP_S3# (default).\n */
    uint32_t BFCUT_SLP_S4_SRC:1;        /**< bit:      3  This bit define whether SLP_S4_BF# term comes from.\n         1= SLP_S4_BF# term comes from the eSPI Virtual Wire designated in the BFCUT_SLP_S4_VWIRE_SOURCE            field. This selection is Reserved unless eSPI is used as the Host interface.\n         0= SLP_S4_BF# term comes from the pin input SLP_S4# (default).\n */
    uint32_t BFCUT_SLP_S4_VWIRE_SRC:2;  /**< bit:   4..5  This bit define the source of SLP_S4_BF#. This field has no effect unless the         BFCUT_SLP_S4_SOURCE bit is set to 1.\n         0x3= Reserved.\n          0x2= SLP_S4_BF# term comes from the Virtual Wire SLP_S3#.\n          0x1= SLP_S4_BF# term comes from the Virtual Wire SLP_S4#.\n         0x0= SLP_S4_BF# term comes from the Virtual Wire SLP_S5# (default).\n */
    uint32_t :1;                        /**< bit:      6  Reserved                                      */
    uint32_t BFCUT_CONFIGURED:1;        /**< bit:      7  This bit define whether SLP_S4_BF# and SLP_S3_BF# term sources are fully configured or not.\n         1= SLP_S4_BF# and SLP_S3_BF# term sources fully configured.\n         0= SLP_S4_BF# and SLP_S3_BF# term sources not yet configured, and are both forced to be a constant            0 (default).\n */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __GLUE_BFCUT_SRC_CONFIG_bits_t;
#define GLUE_BFCUT_SRC_CONFIG_RESETVALUE    (0x00U)                                       /**<  (GLUE_BFCUT_SRC_CONFIG) This register defines whether the SLP_S3_BF# and SLP_S4_BF# input terms come from the     physical pin functions SLP_S3# and SLP_S4#, or from Virtual Wires. When coming from an eSPI     Virtual Wire, it can be used to designate alternate SLP_Sx# sources for these terms,     simulating alternate external pin connections.\n  Reset Value */

#define GLUE_BFCUT_SRC_CONFIG_BFCUT_SLP_S3_SRC_Pos (0)                                            /**< (GLUE_BFCUT_SRC_CONFIG) This bit define the source of SLP_S3_BF#.\n         1= SLP_S3_BF# term comes from the eSPI Virtual Wire designated in the BFCUT_SLP_S3_VWIRE_SOURCE         field. This selection is Reserved unless eSPI is used as the Host interface.\n         0= SLP_S3_BF# term comes from the pin input SLP_S3# (default).\n Position */
#define GLUE_BFCUT_SRC_CONFIG_BFCUT_SLP_S3_SRC_Msk (0x1U << GLUE_BFCUT_SRC_CONFIG_BFCUT_SLP_S3_SRC_Pos)  /**< (GLUE_BFCUT_SRC_CONFIG) This bit define the source of SLP_S3_BF#.\n         1= SLP_S3_BF# term comes from the eSPI Virtual Wire designated in the BFCUT_SLP_S3_VWIRE_SOURCE         field. This selection is Reserved unless eSPI is used as the Host interface.\n         0= SLP_S3_BF# term comes from the pin input SLP_S3# (default).\n Mask */
#define GLUE_BFCUT_SRC_CONFIG_BFCUT_SLP_S3_VWIRE_SRC_Pos (1)                                            /**< (GLUE_BFCUT_SRC_CONFIG) This bit define the source of SLP_S3_BF#. This field has no effect unless the         BFCUT_SLP_S3_SOURCE bit is set to 1.\n         0x3= Reserved.\n          0x2= SLP_S3_BF# term comes from the Virtual Wire SLP_S5#.\n          0x1= SLP_S3_BF# term comes from the Virtual Wire SLP_S4#.\n         0x0= SLP_S3_BF# term comes from the Virtual Wire SLP_S3# (default).\n Position */
#define GLUE_BFCUT_SRC_CONFIG_BFCUT_SLP_S3_VWIRE_SRC_Msk (0x3U << GLUE_BFCUT_SRC_CONFIG_BFCUT_SLP_S3_VWIRE_SRC_Pos)  /**< (GLUE_BFCUT_SRC_CONFIG) This bit define the source of SLP_S3_BF#. This field has no effect unless the         BFCUT_SLP_S3_SOURCE bit is set to 1.\n         0x3= Reserved.\n          0x2= SLP_S3_BF# term comes from the Virtual Wire SLP_S5#.\n          0x1= SLP_S3_BF# term comes from the Virtual Wire SLP_S4#.\n         0x0= SLP_S3_BF# term comes from the Virtual Wire SLP_S3# (default).\n Mask */
#define GLUE_BFCUT_SRC_CONFIG_BFCUT_SLP_S3_VWIRE_SRC(value) (GLUE_BFCUT_SRC_CONFIG_BFCUT_SLP_S3_VWIRE_SRC_Msk & ((value) << GLUE_BFCUT_SRC_CONFIG_BFCUT_SLP_S3_VWIRE_SRC_Pos))
#define GLUE_BFCUT_SRC_CONFIG_BFCUT_SLP_S4_SRC_Pos (3)                                            /**< (GLUE_BFCUT_SRC_CONFIG) This bit define whether SLP_S4_BF# term comes from.\n         1= SLP_S4_BF# term comes from the eSPI Virtual Wire designated in the BFCUT_SLP_S4_VWIRE_SOURCE            field. This selection is Reserved unless eSPI is used as the Host interface.\n         0= SLP_S4_BF# term comes from the pin input SLP_S4# (default).\n Position */
#define GLUE_BFCUT_SRC_CONFIG_BFCUT_SLP_S4_SRC_Msk (0x1U << GLUE_BFCUT_SRC_CONFIG_BFCUT_SLP_S4_SRC_Pos)  /**< (GLUE_BFCUT_SRC_CONFIG) This bit define whether SLP_S4_BF# term comes from.\n         1= SLP_S4_BF# term comes from the eSPI Virtual Wire designated in the BFCUT_SLP_S4_VWIRE_SOURCE            field. This selection is Reserved unless eSPI is used as the Host interface.\n         0= SLP_S4_BF# term comes from the pin input SLP_S4# (default).\n Mask */
#define GLUE_BFCUT_SRC_CONFIG_BFCUT_SLP_S4_VWIRE_SRC_Pos (4)                                            /**< (GLUE_BFCUT_SRC_CONFIG) This bit define the source of SLP_S4_BF#. This field has no effect unless the         BFCUT_SLP_S4_SOURCE bit is set to 1.\n         0x3= Reserved.\n          0x2= SLP_S4_BF# term comes from the Virtual Wire SLP_S3#.\n          0x1= SLP_S4_BF# term comes from the Virtual Wire SLP_S4#.\n         0x0= SLP_S4_BF# term comes from the Virtual Wire SLP_S5# (default).\n Position */
#define GLUE_BFCUT_SRC_CONFIG_BFCUT_SLP_S4_VWIRE_SRC_Msk (0x3U << GLUE_BFCUT_SRC_CONFIG_BFCUT_SLP_S4_VWIRE_SRC_Pos)  /**< (GLUE_BFCUT_SRC_CONFIG) This bit define the source of SLP_S4_BF#. This field has no effect unless the         BFCUT_SLP_S4_SOURCE bit is set to 1.\n         0x3= Reserved.\n          0x2= SLP_S4_BF# term comes from the Virtual Wire SLP_S3#.\n          0x1= SLP_S4_BF# term comes from the Virtual Wire SLP_S4#.\n         0x0= SLP_S4_BF# term comes from the Virtual Wire SLP_S5# (default).\n Mask */
#define GLUE_BFCUT_SRC_CONFIG_BFCUT_SLP_S4_VWIRE_SRC(value) (GLUE_BFCUT_SRC_CONFIG_BFCUT_SLP_S4_VWIRE_SRC_Msk & ((value) << GLUE_BFCUT_SRC_CONFIG_BFCUT_SLP_S4_VWIRE_SRC_Pos))
#define GLUE_BFCUT_SRC_CONFIG_BFCUT_CONFIGURED_Pos (7)                                            /**< (GLUE_BFCUT_SRC_CONFIG) This bit define whether SLP_S4_BF# and SLP_S3_BF# term sources are fully configured or not.\n         1= SLP_S4_BF# and SLP_S3_BF# term sources fully configured.\n         0= SLP_S4_BF# and SLP_S3_BF# term sources not yet configured, and are both forced to be a constant            0 (default).\n Position */
#define GLUE_BFCUT_SRC_CONFIG_BFCUT_CONFIGURED_Msk (0x1U << GLUE_BFCUT_SRC_CONFIG_BFCUT_CONFIGURED_Pos)  /**< (GLUE_BFCUT_SRC_CONFIG) This bit define whether SLP_S4_BF# and SLP_S3_BF# term sources are fully configured or not.\n         1= SLP_S4_BF# and SLP_S3_BF# term sources fully configured.\n         0= SLP_S4_BF# and SLP_S3_BF# term sources not yet configured, and are both forced to be a constant            0 (default).\n Mask */
#define GLUE_BFCUT_SRC_CONFIG_Msk             (0x000000BFUL)                                 /**< (GLUE_BFCUT_SRC_CONFIG) Register Mask  */

/* -------- GLUE_SIGMON_INT_STATE : (GLUE Offset: 0x128) (R/W 32) This register provides Signal State of Glue logic for the Firmware.\n -------- */

typedef union
{
  struct
  {
    uint32_t PWRBTN:1;                  /**< bit:      0  This bit reflects the Power button input.\n   */
    uint32_t PS_ON_INTERNAL:1;          /**< bit:      1  This bit reflects the Internal Power Supply turn ON circuitry state and not actual pin status.\n */
    uint32_t SLP_S3N:1;                 /**< bit:      2  This bit reflects the SLP_S3# physical pin status.\n */
    uint32_t SLP_S4N:1;                 /**< bit:      3  This bit reflects the SLP_S4# physical pin status.\n */
    uint32_t SLP_S5N:1;                 /**< bit:      4  This bit reflects the SLP_S5# physical pin status.\n */
    uint32_t PWRGD_STATE:1;             /**< bit:      5  This bit reflects the state of Internal Power Good status.\n */
    uint32_t S0IX_STATE:1;              /**< bit:      6  This bit reflects the internally derived S0IX signal status.\n */
    uint32_t :1;                        /**< bit:      7  Reserved                                      */
    uint32_t V3_S5_MON:1;               /**< bit:      8  This bit reflects the V3_S5 physical pin status.\n */
    uint32_t SLP_SUSN:1;                /**< bit:      9  This bit reflects the SLP_SUS# physical pin status.\n */
    uint32_t :1;                        /**< bit:     10  Reserved                                      */
    uint32_t RSMRST_IN_N:1;             /**< bit:     11  This bit reflects the RSMRST# physical pin status.\n */
    uint32_t :4;                        /**< bit: 12..15  Reserved                                      */
    uint32_t DPWROK:1;                  /**< bit:     16  This bit reflects the DPWROK physical pin status.\n */
    uint32_t V5_ALW_MON_RESET:1;        /**< bit:     17  This bit reflects the V5ALW_MON physical pin status.\n */
    uint32_t :6;                        /**< bit: 18..23  Reserved                                      */
    uint32_t INTRUDER:1;                /**< bit:     24  This bit reflects the INTRUDER# physical pin status.\n */
    uint32_t CODE_FETCH:1;              /**< bit:     25  This bit is the mirror of the bit 3 of the LED Register.\n */
    uint32_t :6;                        /**< bit: 26..31  Reserved                                      */
  };
  uint32_t w;
} __GLUE_SIGMON_INT_STATE_bits_t;
#define GLUE_SIGMON_INT_STATE_RESETVALUE    (0x00U)                                       /**<  (GLUE_SIGMON_INT_STATE) This register provides Signal State of Glue logic for the Firmware.\n  Reset Value */

#define GLUE_SIGMON_INT_STATE_PWRBTN_Pos      (0)                                            /**< (GLUE_SIGMON_INT_STATE) This bit reflects the Power button input.\n Position */
#define GLUE_SIGMON_INT_STATE_PWRBTN_Msk      (0x1U << GLUE_SIGMON_INT_STATE_PWRBTN_Pos)     /**< (GLUE_SIGMON_INT_STATE) This bit reflects the Power button input.\n Mask */
#define GLUE_SIGMON_INT_STATE_PS_ON_INTERNAL_Pos (1)                                            /**< (GLUE_SIGMON_INT_STATE) This bit reflects the Internal Power Supply turn ON circuitry state and not actual pin status.\n Position */
#define GLUE_SIGMON_INT_STATE_PS_ON_INTERNAL_Msk (0x1U << GLUE_SIGMON_INT_STATE_PS_ON_INTERNAL_Pos)  /**< (GLUE_SIGMON_INT_STATE) This bit reflects the Internal Power Supply turn ON circuitry state and not actual pin status.\n Mask */
#define GLUE_SIGMON_INT_STATE_SLP_S3N_Pos     (2)                                            /**< (GLUE_SIGMON_INT_STATE) This bit reflects the SLP_S3# physical pin status.\n Position */
#define GLUE_SIGMON_INT_STATE_SLP_S3N_Msk     (0x1U << GLUE_SIGMON_INT_STATE_SLP_S3N_Pos)    /**< (GLUE_SIGMON_INT_STATE) This bit reflects the SLP_S3# physical pin status.\n Mask */
#define GLUE_SIGMON_INT_STATE_SLP_S4N_Pos     (3)                                            /**< (GLUE_SIGMON_INT_STATE) This bit reflects the SLP_S4# physical pin status.\n Position */
#define GLUE_SIGMON_INT_STATE_SLP_S4N_Msk     (0x1U << GLUE_SIGMON_INT_STATE_SLP_S4N_Pos)    /**< (GLUE_SIGMON_INT_STATE) This bit reflects the SLP_S4# physical pin status.\n Mask */
#define GLUE_SIGMON_INT_STATE_SLP_S5N_Pos     (4)                                            /**< (GLUE_SIGMON_INT_STATE) This bit reflects the SLP_S5# physical pin status.\n Position */
#define GLUE_SIGMON_INT_STATE_SLP_S5N_Msk     (0x1U << GLUE_SIGMON_INT_STATE_SLP_S5N_Pos)    /**< (GLUE_SIGMON_INT_STATE) This bit reflects the SLP_S5# physical pin status.\n Mask */
#define GLUE_SIGMON_INT_STATE_PWRGD_STATE_Pos (5)                                            /**< (GLUE_SIGMON_INT_STATE) This bit reflects the state of Internal Power Good status.\n Position */
#define GLUE_SIGMON_INT_STATE_PWRGD_STATE_Msk (0x1U << GLUE_SIGMON_INT_STATE_PWRGD_STATE_Pos)  /**< (GLUE_SIGMON_INT_STATE) This bit reflects the state of Internal Power Good status.\n Mask */
#define GLUE_SIGMON_INT_STATE_S0IX_STATE_Pos  (6)                                            /**< (GLUE_SIGMON_INT_STATE) This bit reflects the internally derived S0IX signal status.\n Position */
#define GLUE_SIGMON_INT_STATE_S0IX_STATE_Msk  (0x1U << GLUE_SIGMON_INT_STATE_S0IX_STATE_Pos)  /**< (GLUE_SIGMON_INT_STATE) This bit reflects the internally derived S0IX signal status.\n Mask */
#define GLUE_SIGMON_INT_STATE_V3_S5_MON_Pos   (8)                                            /**< (GLUE_SIGMON_INT_STATE) This bit reflects the V3_S5 physical pin status.\n Position */
#define GLUE_SIGMON_INT_STATE_V3_S5_MON_Msk   (0x1U << GLUE_SIGMON_INT_STATE_V3_S5_MON_Pos)  /**< (GLUE_SIGMON_INT_STATE) This bit reflects the V3_S5 physical pin status.\n Mask */
#define GLUE_SIGMON_INT_STATE_SLP_SUSN_Pos    (9)                                            /**< (GLUE_SIGMON_INT_STATE) This bit reflects the SLP_SUS# physical pin status.\n Position */
#define GLUE_SIGMON_INT_STATE_SLP_SUSN_Msk    (0x1U << GLUE_SIGMON_INT_STATE_SLP_SUSN_Pos)   /**< (GLUE_SIGMON_INT_STATE) This bit reflects the SLP_SUS# physical pin status.\n Mask */
#define GLUE_SIGMON_INT_STATE_RSMRST_IN_N_Pos (11)                                           /**< (GLUE_SIGMON_INT_STATE) This bit reflects the RSMRST# physical pin status.\n Position */
#define GLUE_SIGMON_INT_STATE_RSMRST_IN_N_Msk (0x1U << GLUE_SIGMON_INT_STATE_RSMRST_IN_N_Pos)  /**< (GLUE_SIGMON_INT_STATE) This bit reflects the RSMRST# physical pin status.\n Mask */
#define GLUE_SIGMON_INT_STATE_DPWROK_Pos      (16)                                           /**< (GLUE_SIGMON_INT_STATE) This bit reflects the DPWROK physical pin status.\n Position */
#define GLUE_SIGMON_INT_STATE_DPWROK_Msk      (0x1U << GLUE_SIGMON_INT_STATE_DPWROK_Pos)     /**< (GLUE_SIGMON_INT_STATE) This bit reflects the DPWROK physical pin status.\n Mask */
#define GLUE_SIGMON_INT_STATE_V5_ALW_MON_RESET_Pos (17)                                           /**< (GLUE_SIGMON_INT_STATE) This bit reflects the V5ALW_MON physical pin status.\n Position */
#define GLUE_SIGMON_INT_STATE_V5_ALW_MON_RESET_Msk (0x1U << GLUE_SIGMON_INT_STATE_V5_ALW_MON_RESET_Pos)  /**< (GLUE_SIGMON_INT_STATE) This bit reflects the V5ALW_MON physical pin status.\n Mask */
#define GLUE_SIGMON_INT_STATE_INTRUDER_Pos    (24)                                           /**< (GLUE_SIGMON_INT_STATE) This bit reflects the INTRUDER# physical pin status.\n Position */
#define GLUE_SIGMON_INT_STATE_INTRUDER_Msk    (0x1U << GLUE_SIGMON_INT_STATE_INTRUDER_Pos)   /**< (GLUE_SIGMON_INT_STATE) This bit reflects the INTRUDER# physical pin status.\n Mask */
#define GLUE_SIGMON_INT_STATE_CODE_FETCH_Pos  (25)                                           /**< (GLUE_SIGMON_INT_STATE) This bit is the mirror of the bit 3 of the LED Register.\n Position */
#define GLUE_SIGMON_INT_STATE_CODE_FETCH_Msk  (0x1U << GLUE_SIGMON_INT_STATE_CODE_FETCH_Pos)  /**< (GLUE_SIGMON_INT_STATE) This bit is the mirror of the bit 3 of the LED Register.\n Mask */
#define GLUE_SIGMON_INT_STATE_Msk             (0x03030B7FUL)                                 /**< (GLUE_SIGMON_INT_STATE) Register Mask  */

/* -------- GLUE_SIGMON_INT_PNDNG : (GLUE Offset: 0x12c) (R/W 32) This register provides edge detection for bits in the Signal Monitoring State Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t INT_PWRBTN:1;              /**< bit:      0  Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n */
    uint32_t INT_PS_ON_INTERNAL:1;      /**< bit:      1  Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n */
    uint32_t INT_SLP_S3N:1;             /**< bit:      2  Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n */
    uint32_t INT_SLP_S4N:1;             /**< bit:      3  Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n */
    uint32_t INT_SLP_S5N:1;             /**< bit:      4  Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n */
    uint32_t INT_PWRGD_STATE:1;         /**< bit:      5  Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n */
    uint32_t INT_S0IX_STATE:1;          /**< bit:      6  Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n */
    uint32_t :1;                        /**< bit:      7  Reserved                                      */
    uint32_t INT_V3_S5_MON:1;           /**< bit:      8  Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n */
    uint32_t INT_SLP_SUSN:1;            /**< bit:      9  Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n */
    uint32_t :1;                        /**< bit:     10  Reserved                                      */
    uint32_t INT_RSMRST_IN_N:1;         /**< bit:     11  Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n */
    uint32_t :4;                        /**< bit: 12..15  Reserved                                      */
    uint32_t INT_DPWROK:1;              /**< bit:     16  Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n */
    uint32_t INT_V5_ALW_MON_RESET:1;    /**< bit:     17  Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n */
    uint32_t :6;                        /**< bit: 18..23  Reserved                                      */
    uint32_t INT_INTRUDER:1;            /**< bit:     24  This bit reports changes in the INTRUDER# pin, under VBAT, as an image of the INTRUSION bit         of the Power-Fail and Reset Status Register. This interrupt must be acknowledged there, and not         here: writing to this bit has no effect.\n */
    uint32_t INT_CODE_FETCH:1;          /**< bit:     25  Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n */
    uint32_t :6;                        /**< bit: 26..31  Reserved                                      */
  };
  uint32_t w;
} __GLUE_SIGMON_INT_PNDNG_bits_t;
#define GLUE_SIGMON_INT_PNDNG_RESETVALUE    (0x00U)                                       /**<  (GLUE_SIGMON_INT_PNDNG) This register provides edge detection for bits in the Signal Monitoring State Register.\n  Reset Value */

#define GLUE_SIGMON_INT_PNDNG_INT_PWRBTN_Pos  (0)                                            /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Position */
#define GLUE_SIGMON_INT_PNDNG_INT_PWRBTN_Msk  (0x1U << GLUE_SIGMON_INT_PNDNG_INT_PWRBTN_Pos)  /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Mask */
#define GLUE_SIGMON_INT_PNDNG_INT_PS_ON_INTERNAL_Pos (1)                                            /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Position */
#define GLUE_SIGMON_INT_PNDNG_INT_PS_ON_INTERNAL_Msk (0x1U << GLUE_SIGMON_INT_PNDNG_INT_PS_ON_INTERNAL_Pos)  /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Mask */
#define GLUE_SIGMON_INT_PNDNG_INT_SLP_S3N_Pos (2)                                            /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Position */
#define GLUE_SIGMON_INT_PNDNG_INT_SLP_S3N_Msk (0x1U << GLUE_SIGMON_INT_PNDNG_INT_SLP_S3N_Pos)  /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Mask */
#define GLUE_SIGMON_INT_PNDNG_INT_SLP_S4N_Pos (3)                                            /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Position */
#define GLUE_SIGMON_INT_PNDNG_INT_SLP_S4N_Msk (0x1U << GLUE_SIGMON_INT_PNDNG_INT_SLP_S4N_Pos)  /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Mask */
#define GLUE_SIGMON_INT_PNDNG_INT_SLP_S5N_Pos (4)                                            /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Position */
#define GLUE_SIGMON_INT_PNDNG_INT_SLP_S5N_Msk (0x1U << GLUE_SIGMON_INT_PNDNG_INT_SLP_S5N_Pos)  /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Mask */
#define GLUE_SIGMON_INT_PNDNG_INT_PWRGD_STATE_Pos (5)                                            /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Position */
#define GLUE_SIGMON_INT_PNDNG_INT_PWRGD_STATE_Msk (0x1U << GLUE_SIGMON_INT_PNDNG_INT_PWRGD_STATE_Pos)  /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Mask */
#define GLUE_SIGMON_INT_PNDNG_INT_S0IX_STATE_Pos (6)                                            /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Position */
#define GLUE_SIGMON_INT_PNDNG_INT_S0IX_STATE_Msk (0x1U << GLUE_SIGMON_INT_PNDNG_INT_S0IX_STATE_Pos)  /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Mask */
#define GLUE_SIGMON_INT_PNDNG_INT_V3_S5_MON_Pos (8)                                            /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Position */
#define GLUE_SIGMON_INT_PNDNG_INT_V3_S5_MON_Msk (0x1U << GLUE_SIGMON_INT_PNDNG_INT_V3_S5_MON_Pos)  /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Mask */
#define GLUE_SIGMON_INT_PNDNG_INT_SLP_SUSN_Pos (9)                                            /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Position */
#define GLUE_SIGMON_INT_PNDNG_INT_SLP_SUSN_Msk (0x1U << GLUE_SIGMON_INT_PNDNG_INT_SLP_SUSN_Pos)  /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Mask */
#define GLUE_SIGMON_INT_PNDNG_INT_RSMRST_IN_N_Pos (11)                                           /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Position */
#define GLUE_SIGMON_INT_PNDNG_INT_RSMRST_IN_N_Msk (0x1U << GLUE_SIGMON_INT_PNDNG_INT_RSMRST_IN_N_Pos)  /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Mask */
#define GLUE_SIGMON_INT_PNDNG_INT_DPWROK_Pos  (16)                                           /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Position */
#define GLUE_SIGMON_INT_PNDNG_INT_DPWROK_Msk  (0x1U << GLUE_SIGMON_INT_PNDNG_INT_DPWROK_Pos)  /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Mask */
#define GLUE_SIGMON_INT_PNDNG_INT_V5_ALW_MON_RESET_Pos (17)                                           /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Position */
#define GLUE_SIGMON_INT_PNDNG_INT_V5_ALW_MON_RESET_Msk (0x1U << GLUE_SIGMON_INT_PNDNG_INT_V5_ALW_MON_RESET_Pos)  /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Mask */
#define GLUE_SIGMON_INT_PNDNG_INT_INTRUDER_Pos (24)                                           /**< (GLUE_SIGMON_INT_PNDNG) This bit reports changes in the INTRUDER# pin, under VBAT, as an image of the INTRUSION bit         of the Power-Fail and Reset Status Register. This interrupt must be acknowledged there, and not         here: writing to this bit has no effect.\n Position */
#define GLUE_SIGMON_INT_PNDNG_INT_INTRUDER_Msk (0x1U << GLUE_SIGMON_INT_PNDNG_INT_INTRUDER_Pos)  /**< (GLUE_SIGMON_INT_PNDNG) This bit reports changes in the INTRUDER# pin, under VBAT, as an image of the INTRUSION bit         of the Power-Fail and Reset Status Register. This interrupt must be acknowledged there, and not         here: writing to this bit has no effect.\n Mask */
#define GLUE_SIGMON_INT_PNDNG_INT_CODE_FETCH_Pos (25)                                           /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Position */
#define GLUE_SIGMON_INT_PNDNG_INT_CODE_FETCH_Msk (0x1U << GLUE_SIGMON_INT_PNDNG_INT_CODE_FETCH_Pos)  /**< (GLUE_SIGMON_INT_PNDNG) Set to '1' on each edge of the corresponding Signal Monitor State bit.This is a R/WC bit.\n Mask */
#define GLUE_SIGMON_INT_PNDNG_Msk             (0x03030B7FUL)                                 /**< (GLUE_SIGMON_INT_PNDNG) Register Mask  */

/* -------- GLUE_SIGMON_INT_EN : (GLUE Offset: 0x130) (R/W 32) This register provides Interrupt Enables for corresponding bits in the Interrupt Pending Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t INT_EN_PWRBTN:1;           /**< bit:      0  Enables interrupts from the corresponding Interrupt Pending bit.\n */
    uint32_t INT_EN_PS_ON_INTERNAL:1;   /**< bit:      1  Enables interrupts from the corresponding Interrupt Pending bit.\n */
    uint32_t INT_EN_SLP_S3N:1;          /**< bit:      2  Enables interrupts from the corresponding Interrupt Pending bit.\n */
    uint32_t INT_EN_SLP_S4N:1;          /**< bit:      3  Enables interrupts from the corresponding Interrupt Pending bit.\n */
    uint32_t INT_EN_SLP_S5N:1;          /**< bit:      4  Enables interrupts from the corresponding Interrupt Pending bit.\n */
    uint32_t INT_EN_PWRGD_STATE:1;      /**< bit:      5  Enables interrupts from the corresponding Interrupt Pending bit.\n */
    uint32_t INT_EN_S0IX_STATE:1;       /**< bit:      6  Enables interrupts from the corresponding Interrupt Pending bit.\n */
    uint32_t :1;                        /**< bit:      7  Reserved                                      */
    uint32_t INT_EN_V3_S5_MON:1;        /**< bit:      8  Enables interrupts from the corresponding Interrupt Pending bit.\n */
    uint32_t INT_EN_SLP_SUSN:1;         /**< bit:      9  Enables interrupts from the corresponding Interrupt Pending bit.\n */
    uint32_t :1;                        /**< bit:     10  Reserved                                      */
    uint32_t INT_EN_RSMRST_IN_N:1;      /**< bit:     11  Enables interrupts from the corresponding Interrupt Pending bit.\n */
    uint32_t :4;                        /**< bit: 12..15  Reserved                                      */
    uint32_t INT_EN_DPWROK:1;           /**< bit:     16  Enables interrupts from the corresponding Interrupt Pending bit.\n */
    uint32_t INT_EN_V5_ALW_MON_RESET:1;  /**< bit:     17  Enables interrupts from the corresponding Interrupt Pending bit.\n */
    uint32_t :6;                        /**< bit: 18..23  Reserved                                      */
    uint32_t INT_EN_INTRUDER:1;         /**< bit:     24  Enables interrupts from the corresponding Interrupt Pending bit. Note that this bit is         cleared on RESET_SYS, unlike the corresponding bit position in the other registers.\n */
    uint32_t INT_EN_CODE_FETCH:1;       /**< bit:     25  Enables interrupts from the corresponding Interrupt Pending bit.\n */
    uint32_t :6;                        /**< bit: 26..31  Reserved                                      */
  };
  uint32_t w;
} __GLUE_SIGMON_INT_EN_bits_t;
#define GLUE_SIGMON_INT_EN_RESETVALUE       (0x00U)                                       /**<  (GLUE_SIGMON_INT_EN) This register provides Interrupt Enables for corresponding bits in the Interrupt Pending Register.\n  Reset Value */

#define GLUE_SIGMON_INT_EN_INT_EN_PWRBTN_Pos  (0)                                            /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Position */
#define GLUE_SIGMON_INT_EN_INT_EN_PWRBTN_Msk  (0x1U << GLUE_SIGMON_INT_EN_INT_EN_PWRBTN_Pos)  /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Mask */
#define GLUE_SIGMON_INT_EN_INT_EN_PS_ON_INTERNAL_Pos (1)                                            /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Position */
#define GLUE_SIGMON_INT_EN_INT_EN_PS_ON_INTERNAL_Msk (0x1U << GLUE_SIGMON_INT_EN_INT_EN_PS_ON_INTERNAL_Pos)  /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Mask */
#define GLUE_SIGMON_INT_EN_INT_EN_SLP_S3N_Pos (2)                                            /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Position */
#define GLUE_SIGMON_INT_EN_INT_EN_SLP_S3N_Msk (0x1U << GLUE_SIGMON_INT_EN_INT_EN_SLP_S3N_Pos)  /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Mask */
#define GLUE_SIGMON_INT_EN_INT_EN_SLP_S4N_Pos (3)                                            /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Position */
#define GLUE_SIGMON_INT_EN_INT_EN_SLP_S4N_Msk (0x1U << GLUE_SIGMON_INT_EN_INT_EN_SLP_S4N_Pos)  /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Mask */
#define GLUE_SIGMON_INT_EN_INT_EN_SLP_S5N_Pos (4)                                            /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Position */
#define GLUE_SIGMON_INT_EN_INT_EN_SLP_S5N_Msk (0x1U << GLUE_SIGMON_INT_EN_INT_EN_SLP_S5N_Pos)  /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Mask */
#define GLUE_SIGMON_INT_EN_INT_EN_PWRGD_STATE_Pos (5)                                            /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Position */
#define GLUE_SIGMON_INT_EN_INT_EN_PWRGD_STATE_Msk (0x1U << GLUE_SIGMON_INT_EN_INT_EN_PWRGD_STATE_Pos)  /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Mask */
#define GLUE_SIGMON_INT_EN_INT_EN_S0IX_STATE_Pos (6)                                            /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Position */
#define GLUE_SIGMON_INT_EN_INT_EN_S0IX_STATE_Msk (0x1U << GLUE_SIGMON_INT_EN_INT_EN_S0IX_STATE_Pos)  /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Mask */
#define GLUE_SIGMON_INT_EN_INT_EN_V3_S5_MON_Pos (8)                                            /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Position */
#define GLUE_SIGMON_INT_EN_INT_EN_V3_S5_MON_Msk (0x1U << GLUE_SIGMON_INT_EN_INT_EN_V3_S5_MON_Pos)  /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Mask */
#define GLUE_SIGMON_INT_EN_INT_EN_SLP_SUSN_Pos (9)                                            /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Position */
#define GLUE_SIGMON_INT_EN_INT_EN_SLP_SUSN_Msk (0x1U << GLUE_SIGMON_INT_EN_INT_EN_SLP_SUSN_Pos)  /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Mask */
#define GLUE_SIGMON_INT_EN_INT_EN_RSMRST_IN_N_Pos (11)                                           /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Position */
#define GLUE_SIGMON_INT_EN_INT_EN_RSMRST_IN_N_Msk (0x1U << GLUE_SIGMON_INT_EN_INT_EN_RSMRST_IN_N_Pos)  /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Mask */
#define GLUE_SIGMON_INT_EN_INT_EN_DPWROK_Pos  (16)                                           /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Position */
#define GLUE_SIGMON_INT_EN_INT_EN_DPWROK_Msk  (0x1U << GLUE_SIGMON_INT_EN_INT_EN_DPWROK_Pos)  /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Mask */
#define GLUE_SIGMON_INT_EN_INT_EN_V5_ALW_MON_RESET_Pos (17)                                           /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Position */
#define GLUE_SIGMON_INT_EN_INT_EN_V5_ALW_MON_RESET_Msk (0x1U << GLUE_SIGMON_INT_EN_INT_EN_V5_ALW_MON_RESET_Pos)  /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Mask */
#define GLUE_SIGMON_INT_EN_INT_EN_INTRUDER_Pos (24)                                           /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit. Note that this bit is         cleared on RESET_SYS, unlike the corresponding bit position in the other registers.\n Position */
#define GLUE_SIGMON_INT_EN_INT_EN_INTRUDER_Msk (0x1U << GLUE_SIGMON_INT_EN_INT_EN_INTRUDER_Pos)  /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit. Note that this bit is         cleared on RESET_SYS, unlike the corresponding bit position in the other registers.\n Mask */
#define GLUE_SIGMON_INT_EN_INT_EN_CODE_FETCH_Pos (25)                                           /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Position */
#define GLUE_SIGMON_INT_EN_INT_EN_CODE_FETCH_Msk (0x1U << GLUE_SIGMON_INT_EN_INT_EN_CODE_FETCH_Pos)  /**< (GLUE_SIGMON_INT_EN) Enables interrupts from the corresponding Interrupt Pending bit.\n Mask */
#define GLUE_SIGMON_INT_EN_Msk                (0x03030B7FUL)                                 /**< (GLUE_SIGMON_INT_EN) Register Mask  */

/* -------- GLUE_LED_CNFG_REG : (GLUE Offset: 0x134) (R/W 32) This register defines whether the SLP_S3_L# and SLP_S5_L# input terms (Table 15.16) come from the     physical pin functions SLP_S3# and SLP_S5#, or from Virtual Wires. When coming from an eSPI Virtual Wire,     it may designate alternate SLP_Sx# sources for these terms, simulating alternate external pin connections.\n -------- */

typedef union
{
  struct
  {
    uint32_t LED_SLP_S3_SOURCE:1;       /**< bit:      0  This bit decides the source of LED_SLP_S3_L# term.\n         1= SLP_S3_L# term comes from the eSPI Virtual Wire designated in the LED_SLP_S3_VWIRE_SOURCE field.            This selection is Reserved unless eSPI is used as the Host interface.\n         0= SLP_S3_L# term comes from the pin input SLP_S3# (default).\n */
    uint32_t LED_SLP_S3_VWIRE_SOURCE:2;  /**< bit:   1..2  This bit decides the source of SLP_S3_L# term. This field has no effect unless the LED_SLP_S3_SOURCE         bit is set to 1.\n         0x3= Reserved.\n         0x2= SLP_S3_L# term comes from the Virtual Wire SLP_S5#.\n         0x1= SLP_S3_L# term comes from the Virtual Wire SLP_S4#.\n         0x0= SLP_S3_L# term comes from the Virtual Wire SLP_S3# (default).\n */
    uint32_t LED_SLP_S5_SOURCE:1;       /**< bit:      3  This bit decides the source of LED_SLP_S5_L# term.\n         1= SLP_S5_L# term comes from the eSPI Virtual Wire designated in the LED_SLP_S5_VWIRE_SOURCE field.         This selection is Reserved unless eSPI is used as the Host interface.\n         0= SLP_S5_L# term comes from the pin input SLP_S5# (default).\n */
    uint32_t LED_SLP_S5_VWIRE_SOURCE:2;  /**< bit:   4..5  This bit decides the source of SLP_S5_L# term. This field has no effect unless the LED_SLP_S5_SOURCE         bit is set to 1.\n         0x3= Reserved.\n         0x2= SLP_S5_L# term comes from the Virtual Wire SLP_S3#.\n         0x1= SLP_S5_L# term comes from the Virtual Wire SLP_S4#.\n         0x0= SLP_S5_L# term comes from the Virtual Wire SLP_S5# (default).\n */
    uint32_t :1;                        /**< bit:      6  Reserved                                      */
    uint32_t LED_CONFIGURED:1;          /**< bit:      7  This bit define whether SLP_S5_L# and SLP_S3_L# term sources are fully configured or not.\n         1= SLP_S5_L# and SLP_S3_L# term sources fully configured.\n         0= SLP_S5_L# and SLP_S3_L# term sources not yet configured and are both forced to be a constant 0 (default).\n */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __GLUE_LED_CNFG_REG_bits_t;
#define GLUE_LED_CNFG_REG_RESETVALUE        (0x00U)                                       /**<  (GLUE_LED_CNFG_REG) This register defines whether the SLP_S3_L# and SLP_S5_L# input terms (Table 15.16) come from the     physical pin functions SLP_S3# and SLP_S5#, or from Virtual Wires. When coming from an eSPI Virtual Wire,     it may designate alternate SLP_Sx# sources for these terms, simulating alternate external pin connections.\n  Reset Value */

#define GLUE_LED_CNFG_REG_LED_SLP_S3_SOURCE_Pos (0)                                            /**< (GLUE_LED_CNFG_REG) This bit decides the source of LED_SLP_S3_L# term.\n         1= SLP_S3_L# term comes from the eSPI Virtual Wire designated in the LED_SLP_S3_VWIRE_SOURCE field.            This selection is Reserved unless eSPI is used as the Host interface.\n         0= SLP_S3_L# term comes from the pin input SLP_S3# (default).\n Position */
#define GLUE_LED_CNFG_REG_LED_SLP_S3_SOURCE_Msk (0x1U << GLUE_LED_CNFG_REG_LED_SLP_S3_SOURCE_Pos)  /**< (GLUE_LED_CNFG_REG) This bit decides the source of LED_SLP_S3_L# term.\n         1= SLP_S3_L# term comes from the eSPI Virtual Wire designated in the LED_SLP_S3_VWIRE_SOURCE field.            This selection is Reserved unless eSPI is used as the Host interface.\n         0= SLP_S3_L# term comes from the pin input SLP_S3# (default).\n Mask */
#define GLUE_LED_CNFG_REG_LED_SLP_S3_VWIRE_SOURCE_Pos (1)                                            /**< (GLUE_LED_CNFG_REG) This bit decides the source of SLP_S3_L# term. This field has no effect unless the LED_SLP_S3_SOURCE         bit is set to 1.\n         0x3= Reserved.\n         0x2= SLP_S3_L# term comes from the Virtual Wire SLP_S5#.\n         0x1= SLP_S3_L# term comes from the Virtual Wire SLP_S4#.\n         0x0= SLP_S3_L# term comes from the Virtual Wire SLP_S3# (default).\n Position */
#define GLUE_LED_CNFG_REG_LED_SLP_S3_VWIRE_SOURCE_Msk (0x3U << GLUE_LED_CNFG_REG_LED_SLP_S3_VWIRE_SOURCE_Pos)  /**< (GLUE_LED_CNFG_REG) This bit decides the source of SLP_S3_L# term. This field has no effect unless the LED_SLP_S3_SOURCE         bit is set to 1.\n         0x3= Reserved.\n         0x2= SLP_S3_L# term comes from the Virtual Wire SLP_S5#.\n         0x1= SLP_S3_L# term comes from the Virtual Wire SLP_S4#.\n         0x0= SLP_S3_L# term comes from the Virtual Wire SLP_S3# (default).\n Mask */
#define GLUE_LED_CNFG_REG_LED_SLP_S3_VWIRE_SOURCE(value) (GLUE_LED_CNFG_REG_LED_SLP_S3_VWIRE_SOURCE_Msk & ((value) << GLUE_LED_CNFG_REG_LED_SLP_S3_VWIRE_SOURCE_Pos))
#define GLUE_LED_CNFG_REG_LED_SLP_S5_SOURCE_Pos (3)                                            /**< (GLUE_LED_CNFG_REG) This bit decides the source of LED_SLP_S5_L# term.\n         1= SLP_S5_L# term comes from the eSPI Virtual Wire designated in the LED_SLP_S5_VWIRE_SOURCE field.         This selection is Reserved unless eSPI is used as the Host interface.\n         0= SLP_S5_L# term comes from the pin input SLP_S5# (default).\n Position */
#define GLUE_LED_CNFG_REG_LED_SLP_S5_SOURCE_Msk (0x1U << GLUE_LED_CNFG_REG_LED_SLP_S5_SOURCE_Pos)  /**< (GLUE_LED_CNFG_REG) This bit decides the source of LED_SLP_S5_L# term.\n         1= SLP_S5_L# term comes from the eSPI Virtual Wire designated in the LED_SLP_S5_VWIRE_SOURCE field.         This selection is Reserved unless eSPI is used as the Host interface.\n         0= SLP_S5_L# term comes from the pin input SLP_S5# (default).\n Mask */
#define GLUE_LED_CNFG_REG_LED_SLP_S5_VWIRE_SOURCE_Pos (4)                                            /**< (GLUE_LED_CNFG_REG) This bit decides the source of SLP_S5_L# term. This field has no effect unless the LED_SLP_S5_SOURCE         bit is set to 1.\n         0x3= Reserved.\n         0x2= SLP_S5_L# term comes from the Virtual Wire SLP_S3#.\n         0x1= SLP_S5_L# term comes from the Virtual Wire SLP_S4#.\n         0x0= SLP_S5_L# term comes from the Virtual Wire SLP_S5# (default).\n Position */
#define GLUE_LED_CNFG_REG_LED_SLP_S5_VWIRE_SOURCE_Msk (0x3U << GLUE_LED_CNFG_REG_LED_SLP_S5_VWIRE_SOURCE_Pos)  /**< (GLUE_LED_CNFG_REG) This bit decides the source of SLP_S5_L# term. This field has no effect unless the LED_SLP_S5_SOURCE         bit is set to 1.\n         0x3= Reserved.\n         0x2= SLP_S5_L# term comes from the Virtual Wire SLP_S3#.\n         0x1= SLP_S5_L# term comes from the Virtual Wire SLP_S4#.\n         0x0= SLP_S5_L# term comes from the Virtual Wire SLP_S5# (default).\n Mask */
#define GLUE_LED_CNFG_REG_LED_SLP_S5_VWIRE_SOURCE(value) (GLUE_LED_CNFG_REG_LED_SLP_S5_VWIRE_SOURCE_Msk & ((value) << GLUE_LED_CNFG_REG_LED_SLP_S5_VWIRE_SOURCE_Pos))
#define GLUE_LED_CNFG_REG_LED_CONFIGURED_Pos  (7)                                            /**< (GLUE_LED_CNFG_REG) This bit define whether SLP_S5_L# and SLP_S3_L# term sources are fully configured or not.\n         1= SLP_S5_L# and SLP_S3_L# term sources fully configured.\n         0= SLP_S5_L# and SLP_S3_L# term sources not yet configured and are both forced to be a constant 0 (default).\n Position */
#define GLUE_LED_CNFG_REG_LED_CONFIGURED_Msk  (0x1U << GLUE_LED_CNFG_REG_LED_CONFIGURED_Pos)  /**< (GLUE_LED_CNFG_REG) This bit define whether SLP_S5_L# and SLP_S3_L# term sources are fully configured or not.\n         1= SLP_S5_L# and SLP_S3_L# term sources fully configured.\n         0= SLP_S5_L# and SLP_S3_L# term sources not yet configured and are both forced to be a constant 0 (default).\n Mask */
#define GLUE_LED_CNFG_REG_Msk                 (0x000000BFUL)                                 /**< (GLUE_LED_CNFG_REG) Register Mask  */

/* -------- GLUE_INTRUDER_CTRL_REG : (GLUE Offset: 0x138) (R/W 32) This register contains the Intruder features detection and control bits. -------- */

typedef union
{
  struct
  {
    uint32_t INTRUDER_IN_EN:1;          /**< bit:      0  0= Disable the input to this function from the INTRUDER# pin.\n         1= Enable the INTRUDER# input pin for this function. Should only be enabled when the pin is driven by a VBAT driver.\n */
    uint32_t INTRUSION:1;               /**< bit:      1  When the INTRUDER# input goes high-to-low or low-to-high, this bit will be set. This bit is also set on VBAT POR.         Firmware must write a '1' to clear this bit. Writes of '0' to this bit are ignored. Host CPU software can also clear this bit by writing         '1' to the Host-visible INTRUSION bit of the Intruder Register. Clearing this bit by either method causes it to appear '0' in all images;         here, and in the Intruder Register, and also in the Signal Monitor Interrupt Pending Register */
    uint32_t INTRD_STS:1;               /**< bit:      2  This bit indicates the current status of INTRUDER# pin.\n         0= INTRUDER# pin is 0.\n         1= INTRUDER# pin is 1.\n */
    uint32_t PWRGD_STAT:1;              /**< bit:      3  This bit captures the state of SLP_S3_IN# at the time that the Power Good indicator PWRGD_STATE goes low.\n         0= SLP_S3_IN# was low, and the shutdown was normal. (default).\n         1= SLP_S3_IN# was high, and the shutdown was therefore abnormal.\n */
    uint32_t :28;                       /**< bit:  4..31  Reserved                                      */
  };
  uint32_t w;
} __GLUE_INTRUDER_CTRL_REG_bits_t;
#define GLUE_INTRUDER_CTRL_REG_RESETVALUE   (0x02U)                                       /**<  (GLUE_INTRUDER_CTRL_REG) This register contains the Intruder features detection and control bits.  Reset Value */

#define GLUE_INTRUDER_CTRL_REG_INTRUDER_IN_EN_Pos (0)                                            /**< (GLUE_INTRUDER_CTRL_REG) 0= Disable the input to this function from the INTRUDER# pin.\n         1= Enable the INTRUDER# input pin for this function. Should only be enabled when the pin is driven by a VBAT driver.\n Position */
#define GLUE_INTRUDER_CTRL_REG_INTRUDER_IN_EN_Msk (0x1U << GLUE_INTRUDER_CTRL_REG_INTRUDER_IN_EN_Pos)  /**< (GLUE_INTRUDER_CTRL_REG) 0= Disable the input to this function from the INTRUDER# pin.\n         1= Enable the INTRUDER# input pin for this function. Should only be enabled when the pin is driven by a VBAT driver.\n Mask */
#define GLUE_INTRUDER_CTRL_REG_INTRUSION_Pos  (1)                                            /**< (GLUE_INTRUDER_CTRL_REG) When the INTRUDER# input goes high-to-low or low-to-high, this bit will be set. This bit is also set on VBAT POR.         Firmware must write a '1' to clear this bit. Writes of '0' to this bit are ignored. Host CPU software can also clear this bit by writing         '1' to the Host-visible INTRUSION bit of the Intruder Register. Clearing this bit by either method causes it to appear '0' in all images;         here, and in the Intruder Register, and also in the Signal Monitor Interrupt Pending Register Position */
#define GLUE_INTRUDER_CTRL_REG_INTRUSION_Msk  (0x1U << GLUE_INTRUDER_CTRL_REG_INTRUSION_Pos)  /**< (GLUE_INTRUDER_CTRL_REG) When the INTRUDER# input goes high-to-low or low-to-high, this bit will be set. This bit is also set on VBAT POR.         Firmware must write a '1' to clear this bit. Writes of '0' to this bit are ignored. Host CPU software can also clear this bit by writing         '1' to the Host-visible INTRUSION bit of the Intruder Register. Clearing this bit by either method causes it to appear '0' in all images;         here, and in the Intruder Register, and also in the Signal Monitor Interrupt Pending Register Mask */
#define GLUE_INTRUDER_CTRL_REG_INTRD_STS_Pos  (2)                                            /**< (GLUE_INTRUDER_CTRL_REG) This bit indicates the current status of INTRUDER# pin.\n         0= INTRUDER# pin is 0.\n         1= INTRUDER# pin is 1.\n Position */
#define GLUE_INTRUDER_CTRL_REG_INTRD_STS_Msk  (0x1U << GLUE_INTRUDER_CTRL_REG_INTRD_STS_Pos)  /**< (GLUE_INTRUDER_CTRL_REG) This bit indicates the current status of INTRUDER# pin.\n         0= INTRUDER# pin is 0.\n         1= INTRUDER# pin is 1.\n Mask */
#define GLUE_INTRUDER_CTRL_REG_PWRGD_STAT_Pos (3)                                            /**< (GLUE_INTRUDER_CTRL_REG) This bit captures the state of SLP_S3_IN# at the time that the Power Good indicator PWRGD_STATE goes low.\n         0= SLP_S3_IN# was low, and the shutdown was normal. (default).\n         1= SLP_S3_IN# was high, and the shutdown was therefore abnormal.\n Position */
#define GLUE_INTRUDER_CTRL_REG_PWRGD_STAT_Msk (0x1U << GLUE_INTRUDER_CTRL_REG_PWRGD_STAT_Pos)  /**< (GLUE_INTRUDER_CTRL_REG) This bit captures the state of SLP_S3_IN# at the time that the Power Good indicator PWRGD_STATE goes low.\n         0= SLP_S3_IN# was low, and the shutdown was normal. (default).\n         1= SLP_S3_IN# was high, and the shutdown was therefore abnormal.\n Mask */
#define GLUE_INTRUDER_CTRL_REG_Msk            (0x0000000FUL)                                 /**< (GLUE_INTRUDER_CTRL_REG) Register Mask  */

/** \brief GLUE register offsets definitions */
#define GLUE_PWR_GD_OFFSET           (0x00)         /**< (GLUE_PWR_GD) This is the Power Good Register.\n Offset */
#define GLUE_S0IX_ST_DETECT_EN_OFFSET (0x04)         /**< (GLUE_S0IX_ST_DETECT_EN) This register allows the S0ix system state to be detected, for purposes of switching to an alternate pin for the PWRGD_STATE detection. While this register is in its default state, only     the PWRGD_PS pin is used as PWRGD_STATE.     Since the S0IX_DET_EN bit is reset to 0 by every chip-level PCI Reset event, it is intended for     BIOS software to re-write it to '1' before the first subsequent entry into the S0ix state, if     switching to use the alternate PWRGD_S0IX pin is needed during the S0ix state. Offset */
#define GLUE_POWER_RECOVERY_MODE_OFFSET (0x08)         /**< (GLUE_POWER_RECOVERY_MODE) This register displays the state of SLP_S3_IN# at the time that the Power Good indicator PWRGD_STATE last went low. Offset */
#define GLUE_LED_REG_OFFSET          (0x0C)         /**< (GLUE_LED_REG) This is the LED register.\n Offset */
#define GLUE_INTRUDER_REG_OFFSET     (0x10)         /**< (GLUE_INTRUDER_REG) This register provides an image of the Intruder status for the Host CPU. It also allows the CPU     to clear this status directly. This status is also provided to Firmware using the PWRBTN# and Signal     Monitor Register Set, where it can trigger Firmware interrupts. Firmware can use these notifications     to generate SMI, SCI or Wake events to the Host CPU Chipset as appropriate.\n Offset */
#define GLUE_LRESET_CONFIG_OFFSET    (0x100)        /**< (GLUE_LRESET_CONFIG) This register defines whether the LRESET_BI# input term comes from a physical pin or from the chip-level     PCI Reset input. This configuration must be completed before the first application of Main power (S0 power state). Offset */
#define GLUE_PWR_TURNON_SRC_OFFSET   (0x104)        /**< (GLUE_PWR_TURNON_SRC) This register defines whether the SLP_S3_IN# input term comes from a physical pin input or from     the eSPI Virtual Wire SLP_S3#. Offset */
#define GLUE_PWR_FW_OFF_OFFSET       (0x108)        /**< (GLUE_PWR_FW_OFF) This register may be used by firmware to turn off the PS_ON# pin state, when it would otherwise be on.\n Offset */
#define GLUE_PWRGD_STATE_SRC_CFG_OFFSET (0x10C)        /**< (GLUE_PWRGD_STATE_SRC_CFG) For the low-power S0 state S0ix only, this register defines whether the PWRGD_STATE input term comes \n     from the physical pin PWRGD_PS, or from the PWRGD_S0IX pin, or from a combination of both. PWRGD_STATE \n     comes only from the PWRGD_PS signal in all modes other than S0ix, and this register has no effect. Offset */
#define GLUE_S0IX_ST_DETECT_CONFIG_OFFSET (0x110)        /**< (GLUE_S0IX_ST_DETECT_CONFIG) This register defines how the S0ix system state is detected. If all conditions are met, as defined by     the S0IX_DET_SOURCE field, and the S0IX_DET_EN bit in the S0ix State Detection Enable Register is also set     to '1', then the S0ix term is defined as '1'; else it is defined as '0'. Offset */
#define GLUE_RESUME_RST_OFFSET       (0x114)        /**< (GLUE_RESUME_RST) This register provides gating bits for RSMRST# and DPWROK, forcing them both low from a RESET_SYS\n     event (VTR POR) until firmware is ready for them to rise.\n Offset */
#define GLUE_SLP_SUS_L_SRC_CONFIG_OFFSET (0x118)        /**< (GLUE_SLP_SUS_L_SRC_CONFIG) This selection defines the SLP_SUS_L# term used in the section above. It is used for both the     SLP_SUS_FET logic and for the RSMRST# logic.\n     This register must be set up before allowing the DPWROK pin to rise. The default state of this     register applies S5 power on unconditionally when rising from a full system G3 state, effective     from the rising edge of DPWROK, and independently of the SLP_SUS# input pin.\n Offset */
#define GLUE_SLP_SUS_L_FWSRC_OFFSET  (0x11C)        /**< (GLUE_SLP_SUS_L_FWSRC) This register provides the Firmware input term for the SLP_SUS_L# expression selected by     the SLP_SUS_L_SOURCE field. Note that this bit is inverted from the sense of the SLP_SUS#     input pin; it is active high to indicate the Sleep state.\n Offset */
#define GLUE_PCIAUX_CTRL_SRC_CONFIG_OFFSET (0x120)        /**< (GLUE_PCIAUX_CTRL_SRC_CONFIG) This register defines whether the SLP_S4# input term (Table 15.11) comes from the physical pin     function SLP_S4#, or from a Virtual Wire. When coming from an eSPI Virtual Wire, it will designate     an alternate SLP_Sx# source as the SLP_S4# term, simulating an alternate external pin connection.\n     PCIAUX_GATE comes only from an external signal, and this register has no effect on that input.\n Offset */
#define GLUE_BFCUT_SRC_CONFIG_OFFSET (0x124)        /**< (GLUE_BFCUT_SRC_CONFIG) This register defines whether the SLP_S3_BF# and SLP_S4_BF# input terms come from the     physical pin functions SLP_S3# and SLP_S4#, or from Virtual Wires. When coming from an eSPI     Virtual Wire, it can be used to designate alternate SLP_Sx# sources for these terms,     simulating alternate external pin connections.\n Offset */
#define GLUE_SIGMON_INT_STATE_OFFSET (0x128)        /**< (GLUE_SIGMON_INT_STATE) This register provides Signal State of Glue logic for the Firmware.\n Offset */
#define GLUE_SIGMON_INT_PNDNG_OFFSET (0x12C)        /**< (GLUE_SIGMON_INT_PNDNG) This register provides edge detection for bits in the Signal Monitoring State Register.\n Offset */
#define GLUE_SIGMON_INT_EN_OFFSET    (0x130)        /**< (GLUE_SIGMON_INT_EN) This register provides Interrupt Enables for corresponding bits in the Interrupt Pending Register.\n Offset */
#define GLUE_LED_CNFG_REG_OFFSET     (0x134)        /**< (GLUE_LED_CNFG_REG) This register defines whether the SLP_S3_L# and SLP_S5_L# input terms (Table 15.16) come from the     physical pin functions SLP_S3# and SLP_S5#, or from Virtual Wires. When coming from an eSPI Virtual Wire,     it may designate alternate SLP_Sx# sources for these terms, simulating alternate external pin connections.\n Offset */
#define GLUE_INTRUDER_CTRL_REG_OFFSET (0x138)        /**< (GLUE_INTRUDER_CTRL_REG) This register contains the Intruder features detection and control bits. Offset */

/** \brief GLUE register API structure */
typedef struct
{  /* These are the Glue Register */
  __IO  __GLUE_PWR_GD_bits_t           PWR_GD;        /**< Offset: 0x00 (R/W  32) This is the Power Good Register.\n */
  __IO  __GLUE_S0IX_ST_DETECT_EN_bits_t S0IX_ST_DETECT_EN; /**< Offset: 0x04 (R/W  32) This register allows the S0ix system state to be detected, for purposes of switching to an alternate pin for the PWRGD_STATE detection. While this register is in its default state, only     the PWRGD_PS pin is used as PWRGD_STATE.     Since the S0IX_DET_EN bit is reset to 0 by every chip-level PCI Reset event, it is intended for     BIOS software to re-write it to '1' before the first subsequent entry into the S0ix state, if     switching to use the alternate PWRGD_S0IX pin is needed during the S0ix state. */
  __IO  __GLUE_POWER_RECOVERY_MODE_bits_t POWER_RECOVERY_MODE; /**< Offset: 0x08 (R/W  32) This register displays the state of SLP_S3_IN# at the time that the Power Good indicator PWRGD_STATE last went low. */
  __IO  __GLUE_LED_REG_bits_t          LED_REG;       /**< Offset: 0x0C (R/W  32) This is the LED register.\n */
  __IO  __GLUE_INTRUDER_REG_bits_t     INTRUDER_REG;  /**< Offset: 0x10 (R/W  32) This register provides an image of the Intruder status for the Host CPU. It also allows the CPU     to clear this status directly. This status is also provided to Firmware using the PWRBTN# and Signal     Monitor Register Set, where it can trigger Firmware interrupts. Firmware can use these notifications     to generate SMI, SCI or Wake events to the Host CPU Chipset as appropriate.\n */
  __IO  __GLUE_LRESET_CONFIG_bits_t    LRESET_CONFIG; /**< Offset: 0x100 (R/W  32) This register defines whether the LRESET_BI# input term comes from a physical pin or from the chip-level     PCI Reset input. This configuration must be completed before the first application of Main power (S0 power state). */
  __IO  __GLUE_PWR_TURNON_SRC_bits_t   PWR_TURNON_SRC; /**< Offset: 0x104 (R/W  32) This register defines whether the SLP_S3_IN# input term comes from a physical pin input or from     the eSPI Virtual Wire SLP_S3#. */
  __IO  __GLUE_PWR_FW_OFF_bits_t       PWR_FW_OFF;    /**< Offset: 0x108 (R/W  32) This register may be used by firmware to turn off the PS_ON# pin state, when it would otherwise be on.\n */
  __IO  __GLUE_PWRGD_STATE_SRC_CFG_bits_t PWRGD_STATE_SRC_CFG; /**< Offset: 0x10C (R/W  32) For the low-power S0 state S0ix only, this register defines whether the PWRGD_STATE input term comes \n     from the physical pin PWRGD_PS, or from the PWRGD_S0IX pin, or from a combination of both. PWRGD_STATE \n     comes only from the PWRGD_PS signal in all modes other than S0ix, and this register has no effect. */
  __IO  __GLUE_S0IX_ST_DETECT_CONFIG_bits_t S0IX_ST_DETECT_CONFIG; /**< Offset: 0x110 (R/W  32) This register defines how the S0ix system state is detected. If all conditions are met, as defined by     the S0IX_DET_SOURCE field, and the S0IX_DET_EN bit in the S0ix State Detection Enable Register is also set     to '1', then the S0ix term is defined as '1'; else it is defined as '0'. */
  __IO  __GLUE_RESUME_RST_bits_t       RESUME_RST;    /**< Offset: 0x114 (R/W  32) This register provides gating bits for RSMRST# and DPWROK, forcing them both low from a RESET_SYS\n     event (VTR POR) until firmware is ready for them to rise.\n */
  __IO  __GLUE_SLP_SUS_L_SRC_CONFIG_bits_t SLP_SUS_L_SRC_CONFIG; /**< Offset: 0x118 (R/W  32) This selection defines the SLP_SUS_L# term used in the section above. It is used for both the     SLP_SUS_FET logic and for the RSMRST# logic.\n     This register must be set up before allowing the DPWROK pin to rise. The default state of this     register applies S5 power on unconditionally when rising from a full system G3 state, effective     from the rising edge of DPWROK, and independently of the SLP_SUS# input pin.\n */
  __IO  __GLUE_SLP_SUS_L_FWSRC_bits_t  SLP_SUS_L_FWSRC; /**< Offset: 0x11C (R/W  32) This register provides the Firmware input term for the SLP_SUS_L# expression selected by     the SLP_SUS_L_SOURCE field. Note that this bit is inverted from the sense of the SLP_SUS#     input pin; it is active high to indicate the Sleep state.\n */
  __IO  __GLUE_PCIAUX_CTRL_SRC_CONFIG_bits_t PCIAUX_CTRL_SRC_CONFIG; /**< Offset: 0x120 (R/W  32) This register defines whether the SLP_S4# input term (Table 15.11) comes from the physical pin     function SLP_S4#, or from a Virtual Wire. When coming from an eSPI Virtual Wire, it will designate     an alternate SLP_Sx# source as the SLP_S4# term, simulating an alternate external pin connection.\n     PCIAUX_GATE comes only from an external signal, and this register has no effect on that input.\n */
  __IO  __GLUE_BFCUT_SRC_CONFIG_bits_t BFCUT_SRC_CONFIG; /**< Offset: 0x124 (R/W  32) This register defines whether the SLP_S3_BF# and SLP_S4_BF# input terms come from the     physical pin functions SLP_S3# and SLP_S4#, or from Virtual Wires. When coming from an eSPI     Virtual Wire, it can be used to designate alternate SLP_Sx# sources for these terms,     simulating alternate external pin connections.\n */
  __IO  __GLUE_SIGMON_INT_STATE_bits_t SIGMON_INT_STATE; /**< Offset: 0x128 (R/W  32) This register provides Signal State of Glue logic for the Firmware.\n */
  __IO  __GLUE_SIGMON_INT_PNDNG_bits_t SIGMON_INT_PNDNG; /**< Offset: 0x12C (R/W  32) This register provides edge detection for bits in the Signal Monitoring State Register.\n */
  __IO  __GLUE_SIGMON_INT_EN_bits_t    SIGMON_INT_EN; /**< Offset: 0x130 (R/W  32) This register provides Interrupt Enables for corresponding bits in the Interrupt Pending Register.\n */
  __IO  __GLUE_LED_CNFG_REG_bits_t     LED_CNFG_REG;  /**< Offset: 0x134 (R/W  32) This register defines whether the SLP_S3_L# and SLP_S5_L# input terms (Table 15.16) come from the     physical pin functions SLP_S3# and SLP_S5#, or from Virtual Wires. When coming from an eSPI Virtual Wire,     it may designate alternate SLP_Sx# sources for these terms, simulating alternate external pin connections.\n */
  __IO  __GLUE_INTRUDER_CTRL_REG_bits_t INTRUDER_CTRL_REG; /**< Offset: 0x138 (R/W  32) This register contains the Intruder features detection and control bits. */
} glue_registers_t;
/** @}  end of These are the Glue Register */

#endif /* _PIC32CX_0025SD10_GLUE_COMPONENT_H_ */
