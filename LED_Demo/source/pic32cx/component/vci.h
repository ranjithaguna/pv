/**
 * \brief Component description for PIC32CX/0525SG12 VCI
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
#ifndef _PIC32CX_0525SG12_VCI_COMPONENT_H_
#define _PIC32CX_0525SG12_VCI_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_VCI The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR VCI */
/* ========================================================================== */

/* -------- VCI_REG : (VCI Offset: 0x00) (R/W 32) VCI Register -------- */

typedef union
{
  struct
  {
    uint32_t VCI_IN:4;                  /**< bit:   0..3  These bits provide the latched state of the associated VCI_IN# pin, if latching is enabled or the current state of the pin\n     if latching is not enabled. In both cases, the value is determined after the action of the VCI Polarity Register.\n     Note: The VCI_IN[6:0]# bits default to the state of their respective input pins. */
    uint32_t :3;                        /**< bit:   4..6  Reserved                                      */
    uint32_t VCI_OUT_GPIO_SEL:1;        /**< bit:      7  This bit selects the power source for GPIO outputs.\n    1= GPIO will be powered by VBAT power well (VCI_OUT functionality).\n    0= GPIO will be powered by VTR power well.\n */
    uint32_t VCI_OVRD_IN:1;             /**< bit:      8  This bit provides the current status of the VCI_OVRD_IN pin.\n     Note: The VCI_OVRD_IN bit defaults to the state of the respective input pin. */
    uint32_t VCI_OUT:1;                 /**< bit:      9  This bit provides the current status of the VCI_OUT pin. */
    uint32_t VCI_FW_CNTRL:1;            /**< bit:     10  This bit can allow EC firmware to control the state of the VCI_OUT pin. For example, when VTR_PWRGD is asserted and the\n     FW_EXT bit is 1, clearing the VCI_FW_CNTRL bit de-asserts the active high VCI_OUT pin. BIOS must set this bit to 1 prior to setting\n     the FW_EXT bit to 1 on power up, in order to avoid glitches on the VCI_OUT pin. */
    uint32_t FW_EXT:1;                  /**< bit:     11  This bit controls selecting between the external VBAT-Powered Control Interface inputs, or the VCI_FW_CNTRL bit output to control the VCI_OUT pin.\n     1=VCI_OUT is determined by the VCI_FW_CNTRL field, when VTR is active\n     0=VCI_OUT is determined by the external inputs.\n     Note: This bit used to be called GPO/nEXT. The name was changed to distinguish it from the BGPOs, which are elsewhere, and to remove a / in a bit name. */
    uint32_t FILTERS_BYPASS:1;          /**< bit:     12  The Filters Bypass bit is used to enable and disable the input filters on the VCI_IN# pins.\n     1=Filters disabled; 0=Filters enabled (default). */
    uint32_t :3;                        /**< bit: 13..15  Reserved                                      */
    uint32_t WEEK_ALRM:1;               /**< bit:     16  If enabled by WEEK_ALRM_LE, this bit is set to 1 if the Week Alarm signal is asserted. It is reset by writes to WEEK_ALRM_LS. */
    uint32_t RTC_ALRM:1;                /**< bit:     17  If enabled by RTC_ALRM_LE, this bit is set to 1 if the RTC Alarm signal is asserted. It is reset by writes to RTC_ALRM_LS. */
    uint32_t VCI_IN3_SYSPWR_PRES_SEL:1;  /**< bit:     18  This is the System power present select bit.\n    1= VCI_IN3 is used as System power present.\n    0= VCI_IN3 is used as VCI_IN3.\n */
    uint32_t :13;                       /**< bit: 19..31  Reserved                                      */
  };
  uint32_t w;
} __VCI_REG_bits_t;
#define VCI_REG_RESETVALUE                  (0x80U)                                       /**<  (VCI_REG) VCI Register  Reset Value */

#define VCI_REG_VCI_IN_Pos                    (0)                                            /**< (VCI_REG) These bits provide the latched state of the associated VCI_IN# pin, if latching is enabled or the current state of the pin\n     if latching is not enabled. In both cases, the value is determined after the action of the VCI Polarity Register.\n     Note: The VCI_IN[6:0]# bits default to the state of their respective input pins. Position */
#define VCI_REG_VCI_IN_Msk                    (0xFU << VCI_REG_VCI_IN_Pos)                   /**< (VCI_REG) These bits provide the latched state of the associated VCI_IN# pin, if latching is enabled or the current state of the pin\n     if latching is not enabled. In both cases, the value is determined after the action of the VCI Polarity Register.\n     Note: The VCI_IN[6:0]# bits default to the state of their respective input pins. Mask */
#define VCI_REG_VCI_IN(value)                 (VCI_REG_VCI_IN_Msk & ((value) << VCI_REG_VCI_IN_Pos))
#define VCI_REG_VCI_OUT_GPIO_SEL_Pos          (7)                                            /**< (VCI_REG) This bit selects the power source for GPIO outputs.\n    1= GPIO will be powered by VBAT power well (VCI_OUT functionality).\n    0= GPIO will be powered by VTR power well.\n Position */
#define VCI_REG_VCI_OUT_GPIO_SEL_Msk          (0x1U << VCI_REG_VCI_OUT_GPIO_SEL_Pos)         /**< (VCI_REG) This bit selects the power source for GPIO outputs.\n    1= GPIO will be powered by VBAT power well (VCI_OUT functionality).\n    0= GPIO will be powered by VTR power well.\n Mask */
#define VCI_REG_VCI_OVRD_IN_Pos               (8)                                            /**< (VCI_REG) This bit provides the current status of the VCI_OVRD_IN pin.\n     Note: The VCI_OVRD_IN bit defaults to the state of the respective input pin. Position */
#define VCI_REG_VCI_OVRD_IN_Msk               (0x1U << VCI_REG_VCI_OVRD_IN_Pos)              /**< (VCI_REG) This bit provides the current status of the VCI_OVRD_IN pin.\n     Note: The VCI_OVRD_IN bit defaults to the state of the respective input pin. Mask */
#define VCI_REG_VCI_OUT_Pos                   (9)                                            /**< (VCI_REG) This bit provides the current status of the VCI_OUT pin. Position */
#define VCI_REG_VCI_OUT_Msk                   (0x1U << VCI_REG_VCI_OUT_Pos)                  /**< (VCI_REG) This bit provides the current status of the VCI_OUT pin. Mask */
#define VCI_REG_VCI_FW_CNTRL_Pos              (10)                                           /**< (VCI_REG) This bit can allow EC firmware to control the state of the VCI_OUT pin. For example, when VTR_PWRGD is asserted and the\n     FW_EXT bit is 1, clearing the VCI_FW_CNTRL bit de-asserts the active high VCI_OUT pin. BIOS must set this bit to 1 prior to setting\n     the FW_EXT bit to 1 on power up, in order to avoid glitches on the VCI_OUT pin. Position */
#define VCI_REG_VCI_FW_CNTRL_Msk              (0x1U << VCI_REG_VCI_FW_CNTRL_Pos)             /**< (VCI_REG) This bit can allow EC firmware to control the state of the VCI_OUT pin. For example, when VTR_PWRGD is asserted and the\n     FW_EXT bit is 1, clearing the VCI_FW_CNTRL bit de-asserts the active high VCI_OUT pin. BIOS must set this bit to 1 prior to setting\n     the FW_EXT bit to 1 on power up, in order to avoid glitches on the VCI_OUT pin. Mask */
#define VCI_REG_FW_EXT_Pos                    (11)                                           /**< (VCI_REG) This bit controls selecting between the external VBAT-Powered Control Interface inputs, or the VCI_FW_CNTRL bit output to control the VCI_OUT pin.\n     1=VCI_OUT is determined by the VCI_FW_CNTRL field, when VTR is active\n     0=VCI_OUT is determined by the external inputs.\n     Note: This bit used to be called GPO/nEXT. The name was changed to distinguish it from the BGPOs, which are elsewhere, and to remove a / in a bit name. Position */
#define VCI_REG_FW_EXT_Msk                    (0x1U << VCI_REG_FW_EXT_Pos)                   /**< (VCI_REG) This bit controls selecting between the external VBAT-Powered Control Interface inputs, or the VCI_FW_CNTRL bit output to control the VCI_OUT pin.\n     1=VCI_OUT is determined by the VCI_FW_CNTRL field, when VTR is active\n     0=VCI_OUT is determined by the external inputs.\n     Note: This bit used to be called GPO/nEXT. The name was changed to distinguish it from the BGPOs, which are elsewhere, and to remove a / in a bit name. Mask */
#define VCI_REG_FILTERS_BYPASS_Pos            (12)                                           /**< (VCI_REG) The Filters Bypass bit is used to enable and disable the input filters on the VCI_IN# pins.\n     1=Filters disabled; 0=Filters enabled (default). Position */
#define VCI_REG_FILTERS_BYPASS_Msk            (0x1U << VCI_REG_FILTERS_BYPASS_Pos)           /**< (VCI_REG) The Filters Bypass bit is used to enable and disable the input filters on the VCI_IN# pins.\n     1=Filters disabled; 0=Filters enabled (default). Mask */
#define VCI_REG_WEEK_ALRM_Pos                 (16)                                           /**< (VCI_REG) If enabled by WEEK_ALRM_LE, this bit is set to 1 if the Week Alarm signal is asserted. It is reset by writes to WEEK_ALRM_LS. Position */
#define VCI_REG_WEEK_ALRM_Msk                 (0x1U << VCI_REG_WEEK_ALRM_Pos)                /**< (VCI_REG) If enabled by WEEK_ALRM_LE, this bit is set to 1 if the Week Alarm signal is asserted. It is reset by writes to WEEK_ALRM_LS. Mask */
#define VCI_REG_RTC_ALRM_Pos                  (17)                                           /**< (VCI_REG) If enabled by RTC_ALRM_LE, this bit is set to 1 if the RTC Alarm signal is asserted. It is reset by writes to RTC_ALRM_LS. Position */
#define VCI_REG_RTC_ALRM_Msk                  (0x1U << VCI_REG_RTC_ALRM_Pos)                 /**< (VCI_REG) If enabled by RTC_ALRM_LE, this bit is set to 1 if the RTC Alarm signal is asserted. It is reset by writes to RTC_ALRM_LS. Mask */
#define VCI_REG_VCI_IN3_SYSPWR_PRES_SEL_Pos   (18)                                           /**< (VCI_REG) This is the System power present select bit.\n    1= VCI_IN3 is used as System power present.\n    0= VCI_IN3 is used as VCI_IN3.\n Position */
#define VCI_REG_VCI_IN3_SYSPWR_PRES_SEL_Msk   (0x1U << VCI_REG_VCI_IN3_SYSPWR_PRES_SEL_Pos)  /**< (VCI_REG) This is the System power present select bit.\n    1= VCI_IN3 is used as System power present.\n    0= VCI_IN3 is used as VCI_IN3.\n Mask */
#define VCI_REG_Msk                           (0x00071F8FUL)                                 /**< (VCI_REG) Register Mask  */

/* -------- VCI_LATCH_ENABLE : (VCI Offset: 0x04) (R/W 32) Latch Enable Register -------- */

typedef union
{
  struct
  {
    uint32_t LE:4;                      /**< bit:   0..3  Latching Enables. Latching occurs after the Polarity configuration, so a VCI_INi# pin is asserted when it is '0' if VCI_IN_POL is '0', and asserted when it is '1' if VCI_IN_POL is '1'.\n     For each bit in the field:\n     1=Enabled. Assertions of the VCI_INi# pin are held until the latch is reset by writing the corresponding LS bit\n     0=Not Enabled. The VCI_INi# signal is not latched but passed directly to the VCI_OUT logic */
    uint32_t :12;                       /**< bit:  4..15  Reserved                                      */
    uint32_t WEEK_ALRM_LE:1;            /**< bit:     16  Latch enable for the Week Alarm Power-Up signal.\n     1=Enabled. Assertions of the Week Alarm are held until the latch is reset by writing the corresponding LS bit\n     0=Not Enabled. The Week Alarm signal is not latched but passed directly to the VCI_OUT logic */
    uint32_t RTC_ALRM_LE:1;             /**< bit:     17  Latch enable for the RTC Power-Up signal.\n     1=Enabled. Assertions of the RTC Alarm are held until the latch is reset by writing the corresponding LS bit\n     0=Not Enabled. The RTC Alarm signal is not latched but passed directly to the VCI_OUT logic */
    uint32_t :14;                       /**< bit: 18..31  Reserved                                      */
  };
  uint32_t w;
} __VCI_LATCH_ENABLE_bits_t;
#define VCI_LATCH_ENABLE_RESETVALUE         (0x00U)                                       /**<  (VCI_LATCH_ENABLE) Latch Enable Register  Reset Value */

#define VCI_LATCH_ENABLE_LE_Pos               (0)                                            /**< (VCI_LATCH_ENABLE) Latching Enables. Latching occurs after the Polarity configuration, so a VCI_INi# pin is asserted when it is '0' if VCI_IN_POL is '0', and asserted when it is '1' if VCI_IN_POL is '1'.\n     For each bit in the field:\n     1=Enabled. Assertions of the VCI_INi# pin are held until the latch is reset by writing the corresponding LS bit\n     0=Not Enabled. The VCI_INi# signal is not latched but passed directly to the VCI_OUT logic Position */
#define VCI_LATCH_ENABLE_LE_Msk               (0xFU << VCI_LATCH_ENABLE_LE_Pos)              /**< (VCI_LATCH_ENABLE) Latching Enables. Latching occurs after the Polarity configuration, so a VCI_INi# pin is asserted when it is '0' if VCI_IN_POL is '0', and asserted when it is '1' if VCI_IN_POL is '1'.\n     For each bit in the field:\n     1=Enabled. Assertions of the VCI_INi# pin are held until the latch is reset by writing the corresponding LS bit\n     0=Not Enabled. The VCI_INi# signal is not latched but passed directly to the VCI_OUT logic Mask */
#define VCI_LATCH_ENABLE_LE(value)            (VCI_LATCH_ENABLE_LE_Msk & ((value) << VCI_LATCH_ENABLE_LE_Pos))
#define VCI_LATCH_ENABLE_WEEK_ALRM_LE_Pos     (16)                                           /**< (VCI_LATCH_ENABLE) Latch enable for the Week Alarm Power-Up signal.\n     1=Enabled. Assertions of the Week Alarm are held until the latch is reset by writing the corresponding LS bit\n     0=Not Enabled. The Week Alarm signal is not latched but passed directly to the VCI_OUT logic Position */
#define VCI_LATCH_ENABLE_WEEK_ALRM_LE_Msk     (0x1U << VCI_LATCH_ENABLE_WEEK_ALRM_LE_Pos)    /**< (VCI_LATCH_ENABLE) Latch enable for the Week Alarm Power-Up signal.\n     1=Enabled. Assertions of the Week Alarm are held until the latch is reset by writing the corresponding LS bit\n     0=Not Enabled. The Week Alarm signal is not latched but passed directly to the VCI_OUT logic Mask */
#define VCI_LATCH_ENABLE_RTC_ALRM_LE_Pos      (17)                                           /**< (VCI_LATCH_ENABLE) Latch enable for the RTC Power-Up signal.\n     1=Enabled. Assertions of the RTC Alarm are held until the latch is reset by writing the corresponding LS bit\n     0=Not Enabled. The RTC Alarm signal is not latched but passed directly to the VCI_OUT logic Position */
#define VCI_LATCH_ENABLE_RTC_ALRM_LE_Msk      (0x1U << VCI_LATCH_ENABLE_RTC_ALRM_LE_Pos)     /**< (VCI_LATCH_ENABLE) Latch enable for the RTC Power-Up signal.\n     1=Enabled. Assertions of the RTC Alarm are held until the latch is reset by writing the corresponding LS bit\n     0=Not Enabled. The RTC Alarm signal is not latched but passed directly to the VCI_OUT logic Mask */
#define VCI_LATCH_ENABLE_Msk                  (0x0003000FUL)                                 /**< (VCI_LATCH_ENABLE) Register Mask  */

/* -------- VCI_LATCH_RESETS : (VCI Offset: 0x08) (R/W 32) Latch Resets Register -------- */

typedef union
{
  struct
  {
    uint32_t LS:4;                      /**< bit:   0..3  Latch Resets. When a Latch Resets bit is written with a '1', the corresponding VCI_INi# latch is de-asserted ('1'). The VCI_INi#\n     input to the latch has priority over the Latch Reset input, so firmware cannot reset the latch while the VCI_INi# pin is asserted. Firmware\n     should sample the state of the pin in the VCI Register before attempting to reset the latch. As noted in the Latch Enable Register,\n     the assertion level is determined by the VCI_IN_POL bit. Reads of this register are undefined. */
    uint32_t :12;                       /**< bit:  4..15  Reserved                                      */
    uint32_t WEEK_ALRM_LS:1;            /**< bit:     16  Week Alarm Latch Reset. When this bit is written with a '1', the Week Alarm Event latch is reset.\n     The Week Alarm input to the latch has priority over the Reset input Reads of this register are undefined. */
    uint32_t RTC_ALRM_LS:1;             /**< bit:     17  RTC Alarm Latch Reset. When this bit is written with a '1', the RTC Alarm Event latch is reset.\n     The RTC Alarm input to the latch has priority over the Reset input Reads of this register are undefined. */
    uint32_t :14;                       /**< bit: 18..31  Reserved                                      */
  };
  uint32_t w;
} __VCI_LATCH_RESETS_bits_t;
#define VCI_LATCH_RESETS_RESETVALUE         (0x00U)                                       /**<  (VCI_LATCH_RESETS) Latch Resets Register  Reset Value */

#define VCI_LATCH_RESETS_LS_Pos               (0)                                            /**< (VCI_LATCH_RESETS) Latch Resets. When a Latch Resets bit is written with a '1', the corresponding VCI_INi# latch is de-asserted ('1'). The VCI_INi#\n     input to the latch has priority over the Latch Reset input, so firmware cannot reset the latch while the VCI_INi# pin is asserted. Firmware\n     should sample the state of the pin in the VCI Register before attempting to reset the latch. As noted in the Latch Enable Register,\n     the assertion level is determined by the VCI_IN_POL bit. Reads of this register are undefined. Position */
#define VCI_LATCH_RESETS_LS_Msk               (0xFU << VCI_LATCH_RESETS_LS_Pos)              /**< (VCI_LATCH_RESETS) Latch Resets. When a Latch Resets bit is written with a '1', the corresponding VCI_INi# latch is de-asserted ('1'). The VCI_INi#\n     input to the latch has priority over the Latch Reset input, so firmware cannot reset the latch while the VCI_INi# pin is asserted. Firmware\n     should sample the state of the pin in the VCI Register before attempting to reset the latch. As noted in the Latch Enable Register,\n     the assertion level is determined by the VCI_IN_POL bit. Reads of this register are undefined. Mask */
#define VCI_LATCH_RESETS_LS(value)            (VCI_LATCH_RESETS_LS_Msk & ((value) << VCI_LATCH_RESETS_LS_Pos))
#define VCI_LATCH_RESETS_WEEK_ALRM_LS_Pos     (16)                                           /**< (VCI_LATCH_RESETS) Week Alarm Latch Reset. When this bit is written with a '1', the Week Alarm Event latch is reset.\n     The Week Alarm input to the latch has priority over the Reset input Reads of this register are undefined. Position */
#define VCI_LATCH_RESETS_WEEK_ALRM_LS_Msk     (0x1U << VCI_LATCH_RESETS_WEEK_ALRM_LS_Pos)    /**< (VCI_LATCH_RESETS) Week Alarm Latch Reset. When this bit is written with a '1', the Week Alarm Event latch is reset.\n     The Week Alarm input to the latch has priority over the Reset input Reads of this register are undefined. Mask */
#define VCI_LATCH_RESETS_RTC_ALRM_LS_Pos      (17)                                           /**< (VCI_LATCH_RESETS) RTC Alarm Latch Reset. When this bit is written with a '1', the RTC Alarm Event latch is reset.\n     The RTC Alarm input to the latch has priority over the Reset input Reads of this register are undefined. Position */
#define VCI_LATCH_RESETS_RTC_ALRM_LS_Msk      (0x1U << VCI_LATCH_RESETS_RTC_ALRM_LS_Pos)     /**< (VCI_LATCH_RESETS) RTC Alarm Latch Reset. When this bit is written with a '1', the RTC Alarm Event latch is reset.\n     The RTC Alarm input to the latch has priority over the Reset input Reads of this register are undefined. Mask */
#define VCI_LATCH_RESETS_Msk                  (0x0003000FUL)                                 /**< (VCI_LATCH_RESETS) Register Mask  */

/* -------- VCI_INPUT_ENABLE : (VCI Offset: 0x0c) (R/W 32) VCI Input Enable Register -------- */

typedef union
{
  struct
  {
    uint32_t IE:4;                      /**< bit:   0..3  Input Enables for VCI_IN# signals. After changing the input enable for a VCI input, firmware should reset the input latch and clear\n     any potential interrupt that may have been triggered by the input, as changing the enable may cause the internal status to change.\n     For each bit in the field:\n     1=Enabled. The corresponding VCI_IN# input is not gated and toggling the pin will affect the VCI_OUT pin\n     0=Not Enabled. the corresponding VCI_IN# input does not affect the VCI_OUT pin, even if the input is '0'. Unless the corresponding bit\n     in the VCI Buffer Enable Register is 1, latches are not asserted, even if the VCI_IN# pin is low, during a VBAT power transition */
    uint32_t :28;                       /**< bit:  4..31  Reserved                                      */
  };
  uint32_t w;
} __VCI_INPUT_ENABLE_bits_t;
#define VCI_INPUT_ENABLE_RESETVALUE         (0x07U)                                       /**<  (VCI_INPUT_ENABLE) VCI Input Enable Register  Reset Value */

#define VCI_INPUT_ENABLE_IE_Pos               (0)                                            /**< (VCI_INPUT_ENABLE) Input Enables for VCI_IN# signals. After changing the input enable for a VCI input, firmware should reset the input latch and clear\n     any potential interrupt that may have been triggered by the input, as changing the enable may cause the internal status to change.\n     For each bit in the field:\n     1=Enabled. The corresponding VCI_IN# input is not gated and toggling the pin will affect the VCI_OUT pin\n     0=Not Enabled. the corresponding VCI_IN# input does not affect the VCI_OUT pin, even if the input is '0'. Unless the corresponding bit\n     in the VCI Buffer Enable Register is 1, latches are not asserted, even if the VCI_IN# pin is low, during a VBAT power transition Position */
#define VCI_INPUT_ENABLE_IE_Msk               (0xFU << VCI_INPUT_ENABLE_IE_Pos)              /**< (VCI_INPUT_ENABLE) Input Enables for VCI_IN# signals. After changing the input enable for a VCI input, firmware should reset the input latch and clear\n     any potential interrupt that may have been triggered by the input, as changing the enable may cause the internal status to change.\n     For each bit in the field:\n     1=Enabled. The corresponding VCI_IN# input is not gated and toggling the pin will affect the VCI_OUT pin\n     0=Not Enabled. the corresponding VCI_IN# input does not affect the VCI_OUT pin, even if the input is '0'. Unless the corresponding bit\n     in the VCI Buffer Enable Register is 1, latches are not asserted, even if the VCI_IN# pin is low, during a VBAT power transition Mask */
#define VCI_INPUT_ENABLE_IE(value)            (VCI_INPUT_ENABLE_IE_Msk & ((value) << VCI_INPUT_ENABLE_IE_Pos))
#define VCI_INPUT_ENABLE_Msk                  (0x0000000FUL)                                 /**< (VCI_INPUT_ENABLE) Register Mask  */

/* -------- VCI_HOLDOFF_COUNT : (VCI Offset: 0x10) (R/W 32) Holdoff Count Register -------- */

typedef union
{
  struct
  {
    uint32_t HOLDOFF_TIME:8;            /**< bit:   0..7  These bits determine the period of time the VCI_OUT logic is inhibited from re-asserting VCI_OUT after a SYS_SHDN# event.\n     FFh-01h=The Power On Inhibit Holdoff Time is set to a period between 125ms and 31.875 seconds.\n     0=The Power On Inhibit function is disabled. */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __VCI_HOLDOFF_COUNT_bits_t;
#define VCI_HOLDOFF_COUNT_RESETVALUE        (0x00U)                                       /**<  (VCI_HOLDOFF_COUNT) Holdoff Count Register  Reset Value */

#define VCI_HOLDOFF_COUNT_HOLDOFF_TIME_Pos    (0)                                            /**< (VCI_HOLDOFF_COUNT) These bits determine the period of time the VCI_OUT logic is inhibited from re-asserting VCI_OUT after a SYS_SHDN# event.\n     FFh-01h=The Power On Inhibit Holdoff Time is set to a period between 125ms and 31.875 seconds.\n     0=The Power On Inhibit function is disabled. Position */
#define VCI_HOLDOFF_COUNT_HOLDOFF_TIME_Msk    (0xFFU << VCI_HOLDOFF_COUNT_HOLDOFF_TIME_Pos)  /**< (VCI_HOLDOFF_COUNT) These bits determine the period of time the VCI_OUT logic is inhibited from re-asserting VCI_OUT after a SYS_SHDN# event.\n     FFh-01h=The Power On Inhibit Holdoff Time is set to a period between 125ms and 31.875 seconds.\n     0=The Power On Inhibit function is disabled. Mask */
#define VCI_HOLDOFF_COUNT_HOLDOFF_TIME(value) (VCI_HOLDOFF_COUNT_HOLDOFF_TIME_Msk & ((value) << VCI_HOLDOFF_COUNT_HOLDOFF_TIME_Pos))
#define VCI_HOLDOFF_COUNT_Msk                 (0x000000FFUL)                                 /**< (VCI_HOLDOFF_COUNT) Register Mask  */

/* -------- VCI_POLARITY : (VCI Offset: 0x14) (R/W 32) VCI Polarity Register -------- */

typedef union
{
  struct
  {
    uint32_t VCI_IN_POL:4;              /**< bit:   0..3  These bits determine the polarity of the VCI_IN input signals: For each bit in the field:\n     1=Active High. The value on the pins is inverted before use\n     0=Active Low (default). */
    uint32_t :28;                       /**< bit:  4..31  Reserved                                      */
  };
  uint32_t w;
} __VCI_POLARITY_bits_t;
#define VCI_POLARITY_RESETVALUE             (0x00U)                                       /**<  (VCI_POLARITY) VCI Polarity Register  Reset Value */

#define VCI_POLARITY_VCI_IN_POL_Pos           (0)                                            /**< (VCI_POLARITY) These bits determine the polarity of the VCI_IN input signals: For each bit in the field:\n     1=Active High. The value on the pins is inverted before use\n     0=Active Low (default). Position */
#define VCI_POLARITY_VCI_IN_POL_Msk           (0xFU << VCI_POLARITY_VCI_IN_POL_Pos)          /**< (VCI_POLARITY) These bits determine the polarity of the VCI_IN input signals: For each bit in the field:\n     1=Active High. The value on the pins is inverted before use\n     0=Active Low (default). Mask */
#define VCI_POLARITY_VCI_IN_POL(value)        (VCI_POLARITY_VCI_IN_POL_Msk & ((value) << VCI_POLARITY_VCI_IN_POL_Pos))
#define VCI_POLARITY_Msk                      (0x0000000FUL)                                 /**< (VCI_POLARITY) Register Mask  */

/* -------- VCI_POSEDGE_DETECT : (VCI Offset: 0x18) (R/W 32) VCI Posedge Detect Register -------- */

typedef union
{
  struct
  {
    uint32_t VCI_IN_POS:4;              /**< bit:   0..3  These bits record a low to high transition on the VCI_IN# pins. A 1 indicates a transition occurred. For each bit in the field:\n     1=Positive Edge Detected; 0=No edge detected. */
    uint32_t :28;                       /**< bit:  4..31  Reserved                                      */
  };
  uint32_t w;
} __VCI_POSEDGE_DETECT_bits_t;
#define VCI_POSEDGE_DETECT_RESETVALUE       (0x00U)                                       /**<  (VCI_POSEDGE_DETECT) VCI Posedge Detect Register  Reset Value */

#define VCI_POSEDGE_DETECT_VCI_IN_POS_Pos     (0)                                            /**< (VCI_POSEDGE_DETECT) These bits record a low to high transition on the VCI_IN# pins. A 1 indicates a transition occurred. For each bit in the field:\n     1=Positive Edge Detected; 0=No edge detected. Position */
#define VCI_POSEDGE_DETECT_VCI_IN_POS_Msk     (0xFU << VCI_POSEDGE_DETECT_VCI_IN_POS_Pos)    /**< (VCI_POSEDGE_DETECT) These bits record a low to high transition on the VCI_IN# pins. A 1 indicates a transition occurred. For each bit in the field:\n     1=Positive Edge Detected; 0=No edge detected. Mask */
#define VCI_POSEDGE_DETECT_VCI_IN_POS(value)  (VCI_POSEDGE_DETECT_VCI_IN_POS_Msk & ((value) << VCI_POSEDGE_DETECT_VCI_IN_POS_Pos))
#define VCI_POSEDGE_DETECT_Msk                (0x0000000FUL)                                 /**< (VCI_POSEDGE_DETECT) Register Mask  */

/* -------- VCI_NEGEDGE_DETECT : (VCI Offset: 0x1c) (R/W 32) VCI Negedge Detect Register -------- */

typedef union
{
  struct
  {
    uint32_t VCI_IN_NEG:4;              /**< bit:   0..3  These bits record a high to low transition on the VCI_IN# pins. A 1 indicates a transition occurred. For each bit in the field:\n     1=Negative Edge Detected; 0=No edge detected. */
    uint32_t :28;                       /**< bit:  4..31  Reserved                                      */
  };
  uint32_t w;
} __VCI_NEGEDGE_DETECT_bits_t;
#define VCI_NEGEDGE_DETECT_RESETVALUE       (0x00U)                                       /**<  (VCI_NEGEDGE_DETECT) VCI Negedge Detect Register  Reset Value */

#define VCI_NEGEDGE_DETECT_VCI_IN_NEG_Pos     (0)                                            /**< (VCI_NEGEDGE_DETECT) These bits record a high to low transition on the VCI_IN# pins. A 1 indicates a transition occurred. For each bit in the field:\n     1=Negative Edge Detected; 0=No edge detected. Position */
#define VCI_NEGEDGE_DETECT_VCI_IN_NEG_Msk     (0xFU << VCI_NEGEDGE_DETECT_VCI_IN_NEG_Pos)    /**< (VCI_NEGEDGE_DETECT) These bits record a high to low transition on the VCI_IN# pins. A 1 indicates a transition occurred. For each bit in the field:\n     1=Negative Edge Detected; 0=No edge detected. Mask */
#define VCI_NEGEDGE_DETECT_VCI_IN_NEG(value)  (VCI_NEGEDGE_DETECT_VCI_IN_NEG_Msk & ((value) << VCI_NEGEDGE_DETECT_VCI_IN_NEG_Pos))
#define VCI_NEGEDGE_DETECT_Msk                (0x0000000FUL)                                 /**< (VCI_NEGEDGE_DETECT) Register Mask  */

/* -------- VCI_BUFFER_ENABLE : (VCI Offset: 0x20) (R/W 32) VCI Buffer Enable Register -------- */

typedef union
{
  struct
  {
    uint32_t VCI_BUFFER_EN:4;           /**< bit:   0..3  Input Buffer enable. After changing the buffer enable for a VCI input, firmware should reset the input latch and clear any\n     potential interrupt that may have been triggered by the input, as changing the buffer may cause the internal status to change. This register\n     has no effect when VTR is powered. When VTR is on, the input buffers are enabled only by the IE bit. For each bit in the field:\n     1=VCI_IN# input buffer enabled independent of the IE bit. The edge detection latches for this input are always enabled\n     0=VCI_IN# input buffer enabled by the IE bit. The edge detection latches are only enabled when the IE bit is 1 (default). */
    uint32_t :28;                       /**< bit:  4..31  Reserved                                      */
  };
  uint32_t w;
} __VCI_BUFFER_ENABLE_bits_t;
#define VCI_BUFFER_ENABLE_RESETVALUE        (0x00U)                                       /**<  (VCI_BUFFER_ENABLE) VCI Buffer Enable Register  Reset Value */

#define VCI_BUFFER_ENABLE_VCI_BUFFER_EN_Pos   (0)                                            /**< (VCI_BUFFER_ENABLE) Input Buffer enable. After changing the buffer enable for a VCI input, firmware should reset the input latch and clear any\n     potential interrupt that may have been triggered by the input, as changing the buffer may cause the internal status to change. This register\n     has no effect when VTR is powered. When VTR is on, the input buffers are enabled only by the IE bit. For each bit in the field:\n     1=VCI_IN# input buffer enabled independent of the IE bit. The edge detection latches for this input are always enabled\n     0=VCI_IN# input buffer enabled by the IE bit. The edge detection latches are only enabled when the IE bit is 1 (default). Position */
#define VCI_BUFFER_ENABLE_VCI_BUFFER_EN_Msk   (0xFU << VCI_BUFFER_ENABLE_VCI_BUFFER_EN_Pos)  /**< (VCI_BUFFER_ENABLE) Input Buffer enable. After changing the buffer enable for a VCI input, firmware should reset the input latch and clear any\n     potential interrupt that may have been triggered by the input, as changing the buffer may cause the internal status to change. This register\n     has no effect when VTR is powered. When VTR is on, the input buffers are enabled only by the IE bit. For each bit in the field:\n     1=VCI_IN# input buffer enabled independent of the IE bit. The edge detection latches for this input are always enabled\n     0=VCI_IN# input buffer enabled by the IE bit. The edge detection latches are only enabled when the IE bit is 1 (default). Mask */
#define VCI_BUFFER_ENABLE_VCI_BUFFER_EN(value) (VCI_BUFFER_ENABLE_VCI_BUFFER_EN_Msk & ((value) << VCI_BUFFER_ENABLE_VCI_BUFFER_EN_Pos))
#define VCI_BUFFER_ENABLE_Msk                 (0x0000000FUL)                                 /**< (VCI_BUFFER_ENABLE) Register Mask  */

/** \brief VCI register offsets definitions */
#define VCI_REG_OFFSET               (0x00)         /**< (VCI_REG) VCI Register Offset */
#define VCI_LATCH_ENABLE_OFFSET      (0x04)         /**< (VCI_LATCH_ENABLE) Latch Enable Register Offset */
#define VCI_LATCH_RESETS_OFFSET      (0x08)         /**< (VCI_LATCH_RESETS) Latch Resets Register Offset */
#define VCI_INPUT_ENABLE_OFFSET      (0x0C)         /**< (VCI_INPUT_ENABLE) VCI Input Enable Register Offset */
#define VCI_HOLDOFF_COUNT_OFFSET     (0x10)         /**< (VCI_HOLDOFF_COUNT) Holdoff Count Register Offset */
#define VCI_POLARITY_OFFSET          (0x14)         /**< (VCI_POLARITY) VCI Polarity Register Offset */
#define VCI_POSEDGE_DETECT_OFFSET    (0x18)         /**< (VCI_POSEDGE_DETECT) VCI Posedge Detect Register Offset */
#define VCI_NEGEDGE_DETECT_OFFSET    (0x1C)         /**< (VCI_NEGEDGE_DETECT) VCI Negedge Detect Register Offset */
#define VCI_BUFFER_ENABLE_OFFSET     (0x20)         /**< (VCI_BUFFER_ENABLE) VCI Buffer Enable Register Offset */

/** \brief VCI register API structure */
typedef struct
{  /* The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
  __IO  __VCI_REG_bits_t               VCI_REG;       /**< Offset: 0x00 (R/W  32) VCI Register */
  __IO  __VCI_LATCH_ENABLE_bits_t      LATCH_ENABLE;  /**< Offset: 0x04 (R/W  32) Latch Enable Register */
  __IO  __VCI_LATCH_RESETS_bits_t      LATCH_RESETS;  /**< Offset: 0x08 (R/W  32) Latch Resets Register */
  __IO  __VCI_INPUT_ENABLE_bits_t      VCI_INPUT_ENABLE; /**< Offset: 0x0C (R/W  32) VCI Input Enable Register */
  __IO  __VCI_HOLDOFF_COUNT_bits_t     HOLDOFF_COUNT; /**< Offset: 0x10 (R/W  32) Holdoff Count Register */
  __IO  __VCI_POLARITY_bits_t          VCI_POLARITY;  /**< Offset: 0x14 (R/W  32) VCI Polarity Register */
  __IO  __VCI_POSEDGE_DETECT_bits_t    VCI_POSEDGE_DETECT; /**< Offset: 0x18 (R/W  32) VCI Posedge Detect Register */
  __IO  __VCI_NEGEDGE_DETECT_bits_t    VCI_NEGEDGE_DETECT; /**< Offset: 0x1C (R/W  32) VCI Negedge Detect Register */
  __IO  __VCI_BUFFER_ENABLE_bits_t     VCI_BUFFER_ENABLE; /**< Offset: 0x20 (R/W  32) VCI Buffer Enable Register */
} vci_registers_t;
/** @}  end of The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */

#endif /* _PIC32CX_0525SG12_VCI_COMPONENT_H_ */
