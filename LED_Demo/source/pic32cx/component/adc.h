/**
 * \brief Component description for PIC32CX/0525SG12 ADC
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
#ifndef _PIC32CX_0525SG12_ADC_COMPONENT_H_
#define _PIC32CX_0525SG12_ADC_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_ADC This block is designed to convert external analog voltage readings into digital values.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR ADC */
/* ========================================================================== */

/* -------- ADC_CONTROL : (ADC Offset: 0x00) (R/W 32) The ADC Control Register is used to control the behavior of the Analog to Digital Converter. -------- */

typedef union
{
  struct
  {
    uint32_t ACTIVATE:1;                /**< bit:      0  0: The ADC is disabled and placed in its lowest power state. 1: ADC block is enabled for operation. */
    uint32_t START_SINGLE:1;            /**< bit:      1  (START_SINGLE) 0: The ADC Single Mode is disabled. 1: The ADC Single Mode is enabled. Note: This bit is self-clearing */
    uint32_t START_REPEAT:1;            /**< bit:      2  0: The ADC Repeat Mode is disabled. 1: The ADC Repeat Mode is enabled. */
    uint32_t POWER_SAVER_DIS:1;         /**< bit:      3  0: Power saving feature is enabled. 1: Power saving feature is disabled. */
    uint32_t SOFT_RESET:1;              /**< bit:      4  (SOFT_RESET) 1: writing one causes a reset of the ADC block hardware (not the registers) 0: writing zero takes the ADC block out of reset */
    uint32_t :1;                        /**< bit:      5  Reserved                                      */
    uint32_t REPEAT_DONE_STAT:1;        /**< bit:      6  0: ADC repeat-sample conversion is not complete. 1: ADC repeat-sample conversion is completed. (R/WC) */
    uint32_t SINGLE_DONE_STAT:1;        /**< bit:      7  0: ADC single-sample conversion is not complete. 1: ADC single-sample conversion is completed. (R/WC) */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __ADC_CONTROL_bits_t;
#define ADC_CONTROL_RESETVALUE              (0x00U)                                       /**<  (ADC_CONTROL) The ADC Control Register is used to control the behavior of the Analog to Digital Converter.  Reset Value */

#define ADC_CONTROL_ACTIVATE_Pos              (0)                                            /**< (ADC_CONTROL) 0: The ADC is disabled and placed in its lowest power state. 1: ADC block is enabled for operation. Position */
#define ADC_CONTROL_ACTIVATE_Msk              (0x1U << ADC_CONTROL_ACTIVATE_Pos)             /**< (ADC_CONTROL) 0: The ADC is disabled and placed in its lowest power state. 1: ADC block is enabled for operation. Mask */
#define ADC_CONTROL_START_SINGLE_Pos          (1)                                            /**< (ADC_CONTROL) (START_SINGLE) 0: The ADC Single Mode is disabled. 1: The ADC Single Mode is enabled. Note: This bit is self-clearing Position */
#define ADC_CONTROL_START_SINGLE_Msk          (0x1U << ADC_CONTROL_START_SINGLE_Pos)         /**< (ADC_CONTROL) (START_SINGLE) 0: The ADC Single Mode is disabled. 1: The ADC Single Mode is enabled. Note: This bit is self-clearing Mask */
#define ADC_CONTROL_START_REPEAT_Pos          (2)                                            /**< (ADC_CONTROL) 0: The ADC Repeat Mode is disabled. 1: The ADC Repeat Mode is enabled. Position */
#define ADC_CONTROL_START_REPEAT_Msk          (0x1U << ADC_CONTROL_START_REPEAT_Pos)         /**< (ADC_CONTROL) 0: The ADC Repeat Mode is disabled. 1: The ADC Repeat Mode is enabled. Mask */
#define ADC_CONTROL_POWER_SAVER_DIS_Pos       (3)                                            /**< (ADC_CONTROL) 0: Power saving feature is enabled. 1: Power saving feature is disabled. Position */
#define ADC_CONTROL_POWER_SAVER_DIS_Msk       (0x1U << ADC_CONTROL_POWER_SAVER_DIS_Pos)      /**< (ADC_CONTROL) 0: Power saving feature is enabled. 1: Power saving feature is disabled. Mask */
#define ADC_CONTROL_SOFT_RESET_Pos            (4)                                            /**< (ADC_CONTROL) (SOFT_RESET) 1: writing one causes a reset of the ADC block hardware (not the registers) 0: writing zero takes the ADC block out of reset Position */
#define ADC_CONTROL_SOFT_RESET_Msk            (0x1U << ADC_CONTROL_SOFT_RESET_Pos)           /**< (ADC_CONTROL) (SOFT_RESET) 1: writing one causes a reset of the ADC block hardware (not the registers) 0: writing zero takes the ADC block out of reset Mask */
#define ADC_CONTROL_REPEAT_DONE_STAT_Pos      (6)                                            /**< (ADC_CONTROL) 0: ADC repeat-sample conversion is not complete. 1: ADC repeat-sample conversion is completed. (R/WC) Position */
#define ADC_CONTROL_REPEAT_DONE_STAT_Msk      (0x1U << ADC_CONTROL_REPEAT_DONE_STAT_Pos)     /**< (ADC_CONTROL) 0: ADC repeat-sample conversion is not complete. 1: ADC repeat-sample conversion is completed. (R/WC) Mask */
#define ADC_CONTROL_SINGLE_DONE_STAT_Pos      (7)                                            /**< (ADC_CONTROL) 0: ADC single-sample conversion is not complete. 1: ADC single-sample conversion is completed. (R/WC) Position */
#define ADC_CONTROL_SINGLE_DONE_STAT_Msk      (0x1U << ADC_CONTROL_SINGLE_DONE_STAT_Pos)     /**< (ADC_CONTROL) 0: ADC single-sample conversion is not complete. 1: ADC single-sample conversion is completed. (R/WC) Mask */
#define ADC_CONTROL_Msk                       (0x000000DFUL)                                 /**< (ADC_CONTROL) Register Mask  */

/* -------- ADC_DELAY : (ADC Offset: 0x04) (R/W 32) The ADC Delay register determines the delay from setting Start_Repeat in the ADC Control Register and the start of a conversion cycle. This register also controls the interval between conversion cycles in repeat mode. -------- */

typedef union
{
  struct
  {
    uint32_t START_DELAY:16;            /**< bit:  0..15  This field determines the starting delay before a conversion cycle is begun when Start_Repeat is written with a 1. */
    uint32_t REPEAT_DELAY:16;           /**< bit: 16..31  This field determines the interval between conversion cycles when Start_Repeat is 1. */
  };
  uint32_t w;
} __ADC_DELAY_bits_t;
#define ADC_DELAY_RESETVALUE                (0x00U)                                       /**<  (ADC_DELAY) The ADC Delay register determines the delay from setting Start_Repeat in the ADC Control Register and the start of a conversion cycle. This register also controls the interval between conversion cycles in repeat mode.  Reset Value */

#define ADC_DELAY_START_DELAY_Pos             (0)                                            /**< (ADC_DELAY) This field determines the starting delay before a conversion cycle is begun when Start_Repeat is written with a 1. Position */
#define ADC_DELAY_START_DELAY_Msk             (0xFFFFU << ADC_DELAY_START_DELAY_Pos)         /**< (ADC_DELAY) This field determines the starting delay before a conversion cycle is begun when Start_Repeat is written with a 1. Mask */
#define ADC_DELAY_START_DELAY(value)          (ADC_DELAY_START_DELAY_Msk & ((value) << ADC_DELAY_START_DELAY_Pos))
#define ADC_DELAY_REPEAT_DELAY_Pos            (16)                                           /**< (ADC_DELAY) This field determines the interval between conversion cycles when Start_Repeat is 1. Position */
#define ADC_DELAY_REPEAT_DELAY_Msk            (0xFFFFU << ADC_DELAY_REPEAT_DELAY_Pos)        /**< (ADC_DELAY) This field determines the interval between conversion cycles when Start_Repeat is 1. Mask */
#define ADC_DELAY_REPEAT_DELAY(value)         (ADC_DELAY_REPEAT_DELAY_Msk & ((value) << ADC_DELAY_REPEAT_DELAY_Pos))
#define ADC_DELAY_Msk                         (0xFFFFFFFFUL)                                 /**< (ADC_DELAY) Register Mask  */

/* -------- ADC_STATUS : (ADC Offset: 0x08) (R/W 32) The ADC Status Register indicates whether the ADC has completed a conversion cycle. All bits are cleared by being written with a 1. \n            0: conversion of the corresponding ADC channel is not complete\n            1: conversion of the corresponding ADC channel is complete -------- */

typedef union
{
  struct
  {
    uint32_t ADC_CH_STATUS:16;          /**< bit:  0..15  All bits are cleared by being written with a '1'. 1=conversion of the corresponding ADC channel is complete;\n      0=conversion of the corresponding ADC channel is not complete. For enabled single cycles, the SINGLE_DONE_STATUS bit in the\n      ADC Control Register is also set after all enabled channel conversion are done; for enabled repeat cycles, the REPEAT_DONE_STATUS\n      in the ADC Control Register is also set after all enabled channel conversion are done. */
    uint32_t :16;                       /**< bit: 16..31  Reserved                                      */
  };
  uint32_t w;
} __ADC_STATUS_bits_t;
#define ADC_STATUS_RESETVALUE               (0x00U)                                       /**<  (ADC_STATUS) The ADC Status Register indicates whether the ADC has completed a conversion cycle. All bits are cleared by being written with a 1. \n            0: conversion of the corresponding ADC channel is not complete\n            1: conversion of the corresponding ADC channel is complete  Reset Value */

#define ADC_STATUS_ADC_CH_STATUS_Pos          (0)                                            /**< (ADC_STATUS) All bits are cleared by being written with a '1'. 1=conversion of the corresponding ADC channel is complete;\n      0=conversion of the corresponding ADC channel is not complete. For enabled single cycles, the SINGLE_DONE_STATUS bit in the\n      ADC Control Register is also set after all enabled channel conversion are done; for enabled repeat cycles, the REPEAT_DONE_STATUS\n      in the ADC Control Register is also set after all enabled channel conversion are done. Position */
#define ADC_STATUS_ADC_CH_STATUS_Msk          (0xFFFFU << ADC_STATUS_ADC_CH_STATUS_Pos)      /**< (ADC_STATUS) All bits are cleared by being written with a '1'. 1=conversion of the corresponding ADC channel is complete;\n      0=conversion of the corresponding ADC channel is not complete. For enabled single cycles, the SINGLE_DONE_STATUS bit in the\n      ADC Control Register is also set after all enabled channel conversion are done; for enabled repeat cycles, the REPEAT_DONE_STATUS\n      in the ADC Control Register is also set after all enabled channel conversion are done. Mask */
#define ADC_STATUS_ADC_CH_STATUS(value)       (ADC_STATUS_ADC_CH_STATUS_Msk & ((value) << ADC_STATUS_ADC_CH_STATUS_Pos))
#define ADC_STATUS_Msk                        (0x0000FFFFUL)                                 /**< (ADC_STATUS) Register Mask  */

/* -------- ADC_SINGLE_EN : (ADC Offset: 0x0c) (R/W 32) The ADC Single Register is used to control which ADC channel is captured during a Single-Sample conversion cycle initiated by the Start_Single bit in the ADC Control Register. \n            APPLICATION NOTE: Do not change the bits in this register in the middle of a conversion cycle to insure proper operation.\n            0: single cycle conversions for this channel are disabled\n            1: single cycle conversions for this channel are enabled -------- */

typedef union
{
  struct
  {
    uint32_t SINGLE_EN:16;              /**< bit:  0..15  Each bit in this field enables the corresponding ADC channel when a single cycle of conversions is started when the\n      START_SINGLE bit in the ADC Control Register is written with a 1. 1=single cycle conversions for this channel are enabled\n      0=single cycle conversions for this channel are disabled. Note: If this register is changed while a conversion. */
    uint32_t :16;                       /**< bit: 16..31  Reserved                                      */
  };
  uint32_t w;
} __ADC_SINGLE_EN_bits_t;
#define ADC_SINGLE_EN_RESETVALUE            (0x00U)                                       /**<  (ADC_SINGLE_EN) The ADC Single Register is used to control which ADC channel is captured during a Single-Sample conversion cycle initiated by the Start_Single bit in the ADC Control Register. \n            APPLICATION NOTE: Do not change the bits in this register in the middle of a conversion cycle to insure proper operation.\n            0: single cycle conversions for this channel are disabled\n            1: single cycle conversions for this channel are enabled  Reset Value */

#define ADC_SINGLE_EN_SINGLE_EN_Pos           (0)                                            /**< (ADC_SINGLE_EN) Each bit in this field enables the corresponding ADC channel when a single cycle of conversions is started when the\n      START_SINGLE bit in the ADC Control Register is written with a 1. 1=single cycle conversions for this channel are enabled\n      0=single cycle conversions for this channel are disabled. Note: If this register is changed while a conversion. Position */
#define ADC_SINGLE_EN_SINGLE_EN_Msk           (0xFFFFU << ADC_SINGLE_EN_SINGLE_EN_Pos)       /**< (ADC_SINGLE_EN) Each bit in this field enables the corresponding ADC channel when a single cycle of conversions is started when the\n      START_SINGLE bit in the ADC Control Register is written with a 1. 1=single cycle conversions for this channel are enabled\n      0=single cycle conversions for this channel are disabled. Note: If this register is changed while a conversion. Mask */
#define ADC_SINGLE_EN_SINGLE_EN(value)        (ADC_SINGLE_EN_SINGLE_EN_Msk & ((value) << ADC_SINGLE_EN_SINGLE_EN_Pos))
#define ADC_SINGLE_EN_Msk                     (0x0000FFFFUL)                                 /**< (ADC_SINGLE_EN) Register Mask  */

/* -------- ADC_REPEAT : (ADC Offset: 0x10) (R/W 32) The ADC Repeat Register is used to control which ADC channels are captured during a repeat conversion cycle initiated by the Start_Repeat bit in the ADC Control Register. -------- */

typedef union
{
  struct
  {
    uint32_t RPT_EN:16;                 /**< bit:  0..15  Each bit in this field enables the corresponding ADC channel for each pass of the Repeated ADC Conversion that is\n      controlled by bit START_REPEAT in the ADC Control Register. 1=repeat conversions for this channel are enabled;\n      0=repeat conversions for this channel are disabled */
    uint32_t :16;                       /**< bit: 16..31  Reserved                                      */
  };
  uint32_t w;
} __ADC_REPEAT_bits_t;
#define ADC_REPEAT_RESETVALUE               (0x00U)                                       /**<  (ADC_REPEAT) The ADC Repeat Register is used to control which ADC channels are captured during a repeat conversion cycle initiated by the Start_Repeat bit in the ADC Control Register.  Reset Value */

#define ADC_REPEAT_RPT_EN_Pos                 (0)                                            /**< (ADC_REPEAT) Each bit in this field enables the corresponding ADC channel for each pass of the Repeated ADC Conversion that is\n      controlled by bit START_REPEAT in the ADC Control Register. 1=repeat conversions for this channel are enabled;\n      0=repeat conversions for this channel are disabled Position */
#define ADC_REPEAT_RPT_EN_Msk                 (0xFFFFU << ADC_REPEAT_RPT_EN_Pos)             /**< (ADC_REPEAT) Each bit in this field enables the corresponding ADC channel for each pass of the Repeated ADC Conversion that is\n      controlled by bit START_REPEAT in the ADC Control Register. 1=repeat conversions for this channel are enabled;\n      0=repeat conversions for this channel are disabled Mask */
#define ADC_REPEAT_RPT_EN(value)              (ADC_REPEAT_RPT_EN_Msk & ((value) << ADC_REPEAT_RPT_EN_Pos))
#define ADC_REPEAT_Msk                        (0x0000FFFFUL)                                 /**< (ADC_REPEAT) Register Mask  */

/* -------- ADC_CHANNEL_READING : (ADC Offset: 0x14) (R/W 32) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. -------- */

typedef union
{
  uint32_t w;
} __ADC_CHANNEL_READING_bits_t;
#define ADC_CHANNEL_READING_RESETVALUE      (0x00U)                                       /**<  (ADC_CHANNEL_READING) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0.  Reset Value */

#define ADC_CHANNEL_READING_Msk               (0x00000000UL)                                 /**< (ADC_CHANNEL_READING) Register Mask  */

/* -------- ADC_CFG_REG : (ADC Offset: 0x7c) (R/W 32) The ADC Configuration Register is used to configure the ADC clock timing. -------- */

typedef union
{
  struct
  {
    uint32_t ADC_CLKLOW_TIM:8;          /**< bit:   0..7  These bits define the low time count of the ADC clock.\n         0= not used.\n         1= 1 System Clock.\n         2= 2 System Clock.\n */
    uint32_t ADC_CLKHIGH_TIM:8;         /**< bit:  8..15  These bits define the high time count of the ADC clock.\n         0= not used.\n         1= 1 System Clock.\n         2= 2 System Clock.\n */
    uint32_t ADC_CLKDUMY_TIM:4;         /**< bit: 16..19  These bits define the dummy cycles of the ADC clock.\n         Valid Values are from 0x0 to 0xF.\n */
    uint32_t ADC_PWRUP_DLY:4;           /**< bit: 20..23  These bits define the power up delay in number of micro-seconds.\n         Valid Values are from 0x0 to 0xF.\n */
    uint32_t ADC_DUMYCYCLE_GAP:8;       /**< bit: 24..31  These bits define the number of micro-seconds between consective Starts.\n */
  };
  uint32_t w;
} __ADC_CFG_REG_bits_t;
#define ADC_CFG_REG_RESETVALUE              (0x101U)                                      /**<  (ADC_CFG_REG) The ADC Configuration Register is used to configure the ADC clock timing.  Reset Value */

#define ADC_CFG_REG_ADC_CLKLOW_TIM_Pos        (0)                                            /**< (ADC_CFG_REG) These bits define the low time count of the ADC clock.\n         0= not used.\n         1= 1 System Clock.\n         2= 2 System Clock.\n Position */
#define ADC_CFG_REG_ADC_CLKLOW_TIM_Msk        (0xFFU << ADC_CFG_REG_ADC_CLKLOW_TIM_Pos)      /**< (ADC_CFG_REG) These bits define the low time count of the ADC clock.\n         0= not used.\n         1= 1 System Clock.\n         2= 2 System Clock.\n Mask */
#define ADC_CFG_REG_ADC_CLKLOW_TIM(value)     (ADC_CFG_REG_ADC_CLKLOW_TIM_Msk & ((value) << ADC_CFG_REG_ADC_CLKLOW_TIM_Pos))
#define ADC_CFG_REG_ADC_CLKHIGH_TIM_Pos       (8)                                            /**< (ADC_CFG_REG) These bits define the high time count of the ADC clock.\n         0= not used.\n         1= 1 System Clock.\n         2= 2 System Clock.\n Position */
#define ADC_CFG_REG_ADC_CLKHIGH_TIM_Msk       (0xFFU << ADC_CFG_REG_ADC_CLKHIGH_TIM_Pos)     /**< (ADC_CFG_REG) These bits define the high time count of the ADC clock.\n         0= not used.\n         1= 1 System Clock.\n         2= 2 System Clock.\n Mask */
#define ADC_CFG_REG_ADC_CLKHIGH_TIM(value)    (ADC_CFG_REG_ADC_CLKHIGH_TIM_Msk & ((value) << ADC_CFG_REG_ADC_CLKHIGH_TIM_Pos))
#define ADC_CFG_REG_ADC_CLKDUMY_TIM_Pos       (16)                                           /**< (ADC_CFG_REG) These bits define the dummy cycles of the ADC clock.\n         Valid Values are from 0x0 to 0xF.\n Position */
#define ADC_CFG_REG_ADC_CLKDUMY_TIM_Msk       (0xFU << ADC_CFG_REG_ADC_CLKDUMY_TIM_Pos)      /**< (ADC_CFG_REG) These bits define the dummy cycles of the ADC clock.\n         Valid Values are from 0x0 to 0xF.\n Mask */
#define ADC_CFG_REG_ADC_CLKDUMY_TIM(value)    (ADC_CFG_REG_ADC_CLKDUMY_TIM_Msk & ((value) << ADC_CFG_REG_ADC_CLKDUMY_TIM_Pos))
#define ADC_CFG_REG_ADC_PWRUP_DLY_Pos         (20)                                           /**< (ADC_CFG_REG) These bits define the power up delay in number of micro-seconds.\n         Valid Values are from 0x0 to 0xF.\n Position */
#define ADC_CFG_REG_ADC_PWRUP_DLY_Msk         (0xFU << ADC_CFG_REG_ADC_PWRUP_DLY_Pos)        /**< (ADC_CFG_REG) These bits define the power up delay in number of micro-seconds.\n         Valid Values are from 0x0 to 0xF.\n Mask */
#define ADC_CFG_REG_ADC_PWRUP_DLY(value)      (ADC_CFG_REG_ADC_PWRUP_DLY_Msk & ((value) << ADC_CFG_REG_ADC_PWRUP_DLY_Pos))
#define ADC_CFG_REG_ADC_DUMYCYCLE_GAP_Pos     (24)                                           /**< (ADC_CFG_REG) These bits define the number of micro-seconds between consective Starts.\n Position */
#define ADC_CFG_REG_ADC_DUMYCYCLE_GAP_Msk     (0xFFU << ADC_CFG_REG_ADC_DUMYCYCLE_GAP_Pos)   /**< (ADC_CFG_REG) These bits define the number of micro-seconds between consective Starts.\n Mask */
#define ADC_CFG_REG_ADC_DUMYCYCLE_GAP(value)  (ADC_CFG_REG_ADC_DUMYCYCLE_GAP_Msk & ((value) << ADC_CFG_REG_ADC_DUMYCYCLE_GAP_Pos))
#define ADC_CFG_REG_Msk                       (0xFFFFFFFFUL)                                 /**< (ADC_CFG_REG) Register Mask  */

/* -------- ADC_VREF_CHNL : (ADC Offset: 0x80) (R/W 32) The ADC Channel Register is used to configure the reference voltage to the clock timing.\n -------- */

typedef union
{
  struct
  {
    uint32_t ADCVREF_CH_SEL0:2;         /**< bit:   0..1  These bits define the reference voltage for Channel 0.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n */
    uint32_t ADCVREF_CH_SEL1:2;         /**< bit:   2..3  These bits define the reference voltage for Channel 1.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n */
    uint32_t ADCVREF_CH_SEL2:2;         /**< bit:   4..5  These bits define the reference voltage for Channel 2.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n */
    uint32_t ADCVREF_CH_SEL3:2;         /**< bit:   6..7  These bits define the reference voltage for Channel 3.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n */
    uint32_t ADCVREF_CH_SEL4:2;         /**< bit:   8..9  These bits define the reference voltage for Channel 4.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n */
    uint32_t ADCVREF_CH_SEL5:2;         /**< bit: 10..11  These bits define the reference voltage for Channel 5.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n */
    uint32_t ADCVREF_CH_SEL6:2;         /**< bit: 12..13  These bits define the reference voltage for Channel 6.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n */
    uint32_t ADCVREF_CH_SEL7:2;         /**< bit: 14..15  These bits define the reference voltage for Channel 7.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n */
    uint32_t ADCVREF_CH_SEL8:2;         /**< bit: 16..17  These bits define the reference voltage for Channel 8.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n */
    uint32_t ADCVREF_CH_SEL9:2;         /**< bit: 18..19  These bits define the reference voltage for Channel 9.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n */
    uint32_t ADCVREF_CH_SEL10:2;        /**< bit: 20..21  These bits define the reference voltage for Channel 10.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n */
    uint32_t ADCVREF_CH_SEL11:2;        /**< bit: 22..23  These bits define the reference voltage for Channel 11.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n */
    uint32_t ADCVREF_CH_SEL12:2;        /**< bit: 24..25  These bits define the reference voltage for Channel 12.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n */
    uint32_t ADCVREF_CH_SEL13:2;        /**< bit: 26..27  These bits define the reference voltage for Channel 13.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n */
    uint32_t ADCVREF_CH_SEL14:2;        /**< bit: 28..29  These bits define the reference voltage for Channel 14.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n */
    uint32_t ADCVREF_CH_SEL15:2;        /**< bit: 30..31  These bits define the reference voltage for Channel 15.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n */
  };
  uint32_t w;
} __ADC_VREF_CHNL_bits_t;
#define ADC_VREF_CHNL_RESETVALUE            (0x00U)                                       /**<  (ADC_VREF_CHNL) The ADC Channel Register is used to configure the reference voltage to the clock timing.\n  Reset Value */

#define ADC_VREF_CHNL_ADCVREF_CH_SEL0_Pos     (0)                                            /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 0.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL0_Msk     (0x3U << ADC_VREF_CHNL_ADCVREF_CH_SEL0_Pos)    /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 0.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL0(value)  (ADC_VREF_CHNL_ADCVREF_CH_SEL0_Msk & ((value) << ADC_VREF_CHNL_ADCVREF_CH_SEL0_Pos))
#define ADC_VREF_CHNL_ADCVREF_CH_SEL1_Pos     (2)                                            /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 1.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL1_Msk     (0x3U << ADC_VREF_CHNL_ADCVREF_CH_SEL1_Pos)    /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 1.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL1(value)  (ADC_VREF_CHNL_ADCVREF_CH_SEL1_Msk & ((value) << ADC_VREF_CHNL_ADCVREF_CH_SEL1_Pos))
#define ADC_VREF_CHNL_ADCVREF_CH_SEL2_Pos     (4)                                            /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 2.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL2_Msk     (0x3U << ADC_VREF_CHNL_ADCVREF_CH_SEL2_Pos)    /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 2.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL2(value)  (ADC_VREF_CHNL_ADCVREF_CH_SEL2_Msk & ((value) << ADC_VREF_CHNL_ADCVREF_CH_SEL2_Pos))
#define ADC_VREF_CHNL_ADCVREF_CH_SEL3_Pos     (6)                                            /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 3.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL3_Msk     (0x3U << ADC_VREF_CHNL_ADCVREF_CH_SEL3_Pos)    /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 3.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL3(value)  (ADC_VREF_CHNL_ADCVREF_CH_SEL3_Msk & ((value) << ADC_VREF_CHNL_ADCVREF_CH_SEL3_Pos))
#define ADC_VREF_CHNL_ADCVREF_CH_SEL4_Pos     (8)                                            /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 4.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL4_Msk     (0x3U << ADC_VREF_CHNL_ADCVREF_CH_SEL4_Pos)    /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 4.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL4(value)  (ADC_VREF_CHNL_ADCVREF_CH_SEL4_Msk & ((value) << ADC_VREF_CHNL_ADCVREF_CH_SEL4_Pos))
#define ADC_VREF_CHNL_ADCVREF_CH_SEL5_Pos     (10)                                           /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 5.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL5_Msk     (0x3U << ADC_VREF_CHNL_ADCVREF_CH_SEL5_Pos)    /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 5.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL5(value)  (ADC_VREF_CHNL_ADCVREF_CH_SEL5_Msk & ((value) << ADC_VREF_CHNL_ADCVREF_CH_SEL5_Pos))
#define ADC_VREF_CHNL_ADCVREF_CH_SEL6_Pos     (12)                                           /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 6.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL6_Msk     (0x3U << ADC_VREF_CHNL_ADCVREF_CH_SEL6_Pos)    /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 6.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL6(value)  (ADC_VREF_CHNL_ADCVREF_CH_SEL6_Msk & ((value) << ADC_VREF_CHNL_ADCVREF_CH_SEL6_Pos))
#define ADC_VREF_CHNL_ADCVREF_CH_SEL7_Pos     (14)                                           /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 7.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL7_Msk     (0x3U << ADC_VREF_CHNL_ADCVREF_CH_SEL7_Pos)    /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 7.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL7(value)  (ADC_VREF_CHNL_ADCVREF_CH_SEL7_Msk & ((value) << ADC_VREF_CHNL_ADCVREF_CH_SEL7_Pos))
#define ADC_VREF_CHNL_ADCVREF_CH_SEL8_Pos     (16)                                           /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 8.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL8_Msk     (0x3U << ADC_VREF_CHNL_ADCVREF_CH_SEL8_Pos)    /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 8.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL8(value)  (ADC_VREF_CHNL_ADCVREF_CH_SEL8_Msk & ((value) << ADC_VREF_CHNL_ADCVREF_CH_SEL8_Pos))
#define ADC_VREF_CHNL_ADCVREF_CH_SEL9_Pos     (18)                                           /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 9.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL9_Msk     (0x3U << ADC_VREF_CHNL_ADCVREF_CH_SEL9_Pos)    /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 9.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL9(value)  (ADC_VREF_CHNL_ADCVREF_CH_SEL9_Msk & ((value) << ADC_VREF_CHNL_ADCVREF_CH_SEL9_Pos))
#define ADC_VREF_CHNL_ADCVREF_CH_SEL10_Pos    (20)                                           /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 10.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL10_Msk    (0x3U << ADC_VREF_CHNL_ADCVREF_CH_SEL10_Pos)   /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 10.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL10(value) (ADC_VREF_CHNL_ADCVREF_CH_SEL10_Msk & ((value) << ADC_VREF_CHNL_ADCVREF_CH_SEL10_Pos))
#define ADC_VREF_CHNL_ADCVREF_CH_SEL11_Pos    (22)                                           /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 11.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL11_Msk    (0x3U << ADC_VREF_CHNL_ADCVREF_CH_SEL11_Pos)   /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 11.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL11(value) (ADC_VREF_CHNL_ADCVREF_CH_SEL11_Msk & ((value) << ADC_VREF_CHNL_ADCVREF_CH_SEL11_Pos))
#define ADC_VREF_CHNL_ADCVREF_CH_SEL12_Pos    (24)                                           /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 12.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL12_Msk    (0x3U << ADC_VREF_CHNL_ADCVREF_CH_SEL12_Pos)   /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 12.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL12(value) (ADC_VREF_CHNL_ADCVREF_CH_SEL12_Msk & ((value) << ADC_VREF_CHNL_ADCVREF_CH_SEL12_Pos))
#define ADC_VREF_CHNL_ADCVREF_CH_SEL13_Pos    (26)                                           /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 13.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL13_Msk    (0x3U << ADC_VREF_CHNL_ADCVREF_CH_SEL13_Pos)   /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 13.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL13(value) (ADC_VREF_CHNL_ADCVREF_CH_SEL13_Msk & ((value) << ADC_VREF_CHNL_ADCVREF_CH_SEL13_Pos))
#define ADC_VREF_CHNL_ADCVREF_CH_SEL14_Pos    (28)                                           /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 14.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL14_Msk    (0x3U << ADC_VREF_CHNL_ADCVREF_CH_SEL14_Pos)   /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 14.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL14(value) (ADC_VREF_CHNL_ADCVREF_CH_SEL14_Msk & ((value) << ADC_VREF_CHNL_ADCVREF_CH_SEL14_Pos))
#define ADC_VREF_CHNL_ADCVREF_CH_SEL15_Pos    (30)                                           /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 15.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Position */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL15_Msk    (0x3U << ADC_VREF_CHNL_ADCVREF_CH_SEL15_Pos)   /**< (ADC_VREF_CHNL) These bits define the reference voltage for Channel 15.\n         0h= VREF0\n         1h= VREF1\n         2h= Reserved\n         3h= Reserved\n Mask */
#define ADC_VREF_CHNL_ADCVREF_CH_SEL15(value) (ADC_VREF_CHNL_ADCVREF_CH_SEL15_Msk & ((value) << ADC_VREF_CHNL_ADCVREF_CH_SEL15_Pos))
#define ADC_VREF_CHNL_Msk                     (0xFFFFFFFFUL)                                 /**< (ADC_VREF_CHNL) Register Mask  */

/* -------- ADC_VREF_CTRL : (ADC Offset: 0x84) (R/W 32) This is the VREF Control Register -------- */

typedef union
{
  struct
  {
    uint32_t VREF_CHRG_DLY:16;          /**< bit:  0..15  This field represnts the delay time to charge up the external VREF capacitor.\n */
    uint32_t VREF_SWITCH_DELAY:13;      /**< bit: 16..28  This field represnts the delay time interval between switching VREF Selects.\n */
    uint32_t VREF_PADCTRL:1;            /**< bit:     29  This fields give the choice to the application whether to float the unused PAD's or to Drive them to 0.\n         1= Drive unused PAD's Low 0b\n         0= Leave unused PAD's Floating.\n */
    uint32_t VREF_SELSTAT:2;            /**< bit: 30..31  This fields gives information about the current VREF selected.\n         0x0= VREF0\n         0x1= VREF1\n         0x2= Reserved\n         0x3= Reserved\n */
  };
  uint32_t w;
} __ADC_VREF_CTRL_bits_t;
#define ADC_VREF_CTRL_RESETVALUE            (0x00U)                                       /**<  (ADC_VREF_CTRL) This is the VREF Control Register  Reset Value */

#define ADC_VREF_CTRL_VREF_CHRG_DLY_Pos       (0)                                            /**< (ADC_VREF_CTRL) This field represnts the delay time to charge up the external VREF capacitor.\n Position */
#define ADC_VREF_CTRL_VREF_CHRG_DLY_Msk       (0xFFFFU << ADC_VREF_CTRL_VREF_CHRG_DLY_Pos)   /**< (ADC_VREF_CTRL) This field represnts the delay time to charge up the external VREF capacitor.\n Mask */
#define ADC_VREF_CTRL_VREF_CHRG_DLY(value)    (ADC_VREF_CTRL_VREF_CHRG_DLY_Msk & ((value) << ADC_VREF_CTRL_VREF_CHRG_DLY_Pos))
#define ADC_VREF_CTRL_VREF_SWITCH_DELAY_Pos   (16)                                           /**< (ADC_VREF_CTRL) This field represnts the delay time interval between switching VREF Selects.\n Position */
#define ADC_VREF_CTRL_VREF_SWITCH_DELAY_Msk   (0x1FFFU << ADC_VREF_CTRL_VREF_SWITCH_DELAY_Pos)  /**< (ADC_VREF_CTRL) This field represnts the delay time interval between switching VREF Selects.\n Mask */
#define ADC_VREF_CTRL_VREF_SWITCH_DELAY(value) (ADC_VREF_CTRL_VREF_SWITCH_DELAY_Msk & ((value) << ADC_VREF_CTRL_VREF_SWITCH_DELAY_Pos))
#define ADC_VREF_CTRL_VREF_PADCTRL_Pos        (29)                                           /**< (ADC_VREF_CTRL) This fields give the choice to the application whether to float the unused PAD's or to Drive them to 0.\n         1= Drive unused PAD's Low 0b\n         0= Leave unused PAD's Floating.\n Position */
#define ADC_VREF_CTRL_VREF_PADCTRL_Msk        (0x1U << ADC_VREF_CTRL_VREF_PADCTRL_Pos)       /**< (ADC_VREF_CTRL) This fields give the choice to the application whether to float the unused PAD's or to Drive them to 0.\n         1= Drive unused PAD's Low 0b\n         0= Leave unused PAD's Floating.\n Mask */
#define ADC_VREF_CTRL_VREF_SELSTAT_Pos        (30)                                           /**< (ADC_VREF_CTRL) This fields gives information about the current VREF selected.\n         0x0= VREF0\n         0x1= VREF1\n         0x2= Reserved\n         0x3= Reserved\n Position */
#define ADC_VREF_CTRL_VREF_SELSTAT_Msk        (0x3U << ADC_VREF_CTRL_VREF_SELSTAT_Pos)       /**< (ADC_VREF_CTRL) This fields gives information about the current VREF selected.\n         0x0= VREF0\n         0x1= VREF1\n         0x2= Reserved\n         0x3= Reserved\n Mask */
#define ADC_VREF_CTRL_VREF_SELSTAT(value)     (ADC_VREF_CTRL_VREF_SELSTAT_Msk & ((value) << ADC_VREF_CTRL_VREF_SELSTAT_Pos))
#define ADC_VREF_CTRL_Msk                     (0xFFFFFFFFUL)                                 /**< (ADC_VREF_CTRL) Register Mask  */

/* -------- ADC_SAR_ADC_CTRL : (ADC Offset: 0x88) (R/W 32) This is the SAR ADC Control Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t ADC_SELDIFF:1;             /**< bit:      0  This field select between Single ended / Differential input.\n    0= ADC core is enabled for single ended input operation.\n    1= ADC core is enabled for differential input operation.\n */
    uint32_t ADC_SEL_RES:2;             /**< bit:   1..2  This field select the ADC Resolution (10/12 bits).\n    0x0= Reserved.\n    0x1= Reserved.\n    0x2= 10 bit ADC resolution.\n    0x3= 12 bit ADC resolution.\n */
    uint32_t ADC_SHIFT_DATA:1;          /**< bit:      3  This field defined if the ADC output is Right or Left Justified.\n         1= adc_dout is not shifted and lower bits are set to 0.\n         0= adc_dout is shifted right following resolution selected.\n */
    uint32_t EN_ASYN_SMPL:1;            /**< bit:      4  This field enables asynchronous sampling.\n         0= Async Sampling Disabled.\n         1= Async Sampling Enabled.\n */
    uint32_t EN_SERIAL:1;               /**< bit:      5  This field enables serial output (dout) from ADC.\n         0= Parallel dout.\n         1= Serial dout.\n */
    uint32_t :1;                        /**< bit:      6  Reserved                                      */
    uint32_t WARM_UP_DELAY:9;           /**< bit:  7..15  This field represents the warmup delay number in microseconds.\n */
    uint32_t :16;                       /**< bit: 16..31  Reserved                                      */
  };
  uint32_t w;
} __ADC_SAR_ADC_CTRL_bits_t;
#define ADC_SAR_ADC_CTRL_RESETVALUE         (0x06U)                                       /**<  (ADC_SAR_ADC_CTRL) This is the SAR ADC Control Register.\n  Reset Value */

#define ADC_SAR_ADC_CTRL_ADC_SELDIFF_Pos      (0)                                            /**< (ADC_SAR_ADC_CTRL) This field select between Single ended / Differential input.\n    0= ADC core is enabled for single ended input operation.\n    1= ADC core is enabled for differential input operation.\n Position */
#define ADC_SAR_ADC_CTRL_ADC_SELDIFF_Msk      (0x1U << ADC_SAR_ADC_CTRL_ADC_SELDIFF_Pos)     /**< (ADC_SAR_ADC_CTRL) This field select between Single ended / Differential input.\n    0= ADC core is enabled for single ended input operation.\n    1= ADC core is enabled for differential input operation.\n Mask */
#define ADC_SAR_ADC_CTRL_ADC_SEL_RES_Pos      (1)                                            /**< (ADC_SAR_ADC_CTRL) This field select the ADC Resolution (10/12 bits).\n    0x0= Reserved.\n    0x1= Reserved.\n    0x2= 10 bit ADC resolution.\n    0x3= 12 bit ADC resolution.\n Position */
#define ADC_SAR_ADC_CTRL_ADC_SEL_RES_Msk      (0x3U << ADC_SAR_ADC_CTRL_ADC_SEL_RES_Pos)     /**< (ADC_SAR_ADC_CTRL) This field select the ADC Resolution (10/12 bits).\n    0x0= Reserved.\n    0x1= Reserved.\n    0x2= 10 bit ADC resolution.\n    0x3= 12 bit ADC resolution.\n Mask */
#define ADC_SAR_ADC_CTRL_ADC_SEL_RES(value)   (ADC_SAR_ADC_CTRL_ADC_SEL_RES_Msk & ((value) << ADC_SAR_ADC_CTRL_ADC_SEL_RES_Pos))
#define ADC_SAR_ADC_CTRL_ADC_SHIFT_DATA_Pos   (3)                                            /**< (ADC_SAR_ADC_CTRL) This field defined if the ADC output is Right or Left Justified.\n         1= adc_dout is not shifted and lower bits are set to 0.\n         0= adc_dout is shifted right following resolution selected.\n Position */
#define ADC_SAR_ADC_CTRL_ADC_SHIFT_DATA_Msk   (0x1U << ADC_SAR_ADC_CTRL_ADC_SHIFT_DATA_Pos)  /**< (ADC_SAR_ADC_CTRL) This field defined if the ADC output is Right or Left Justified.\n         1= adc_dout is not shifted and lower bits are set to 0.\n         0= adc_dout is shifted right following resolution selected.\n Mask */
#define ADC_SAR_ADC_CTRL_EN_ASYN_SMPL_Pos     (4)                                            /**< (ADC_SAR_ADC_CTRL) This field enables asynchronous sampling.\n         0= Async Sampling Disabled.\n         1= Async Sampling Enabled.\n Position */
#define ADC_SAR_ADC_CTRL_EN_ASYN_SMPL_Msk     (0x1U << ADC_SAR_ADC_CTRL_EN_ASYN_SMPL_Pos)    /**< (ADC_SAR_ADC_CTRL) This field enables asynchronous sampling.\n         0= Async Sampling Disabled.\n         1= Async Sampling Enabled.\n Mask */
#define ADC_SAR_ADC_CTRL_EN_SERIAL_Pos        (5)                                            /**< (ADC_SAR_ADC_CTRL) This field enables serial output (dout) from ADC.\n         0= Parallel dout.\n         1= Serial dout.\n Position */
#define ADC_SAR_ADC_CTRL_EN_SERIAL_Msk        (0x1U << ADC_SAR_ADC_CTRL_EN_SERIAL_Pos)       /**< (ADC_SAR_ADC_CTRL) This field enables serial output (dout) from ADC.\n         0= Parallel dout.\n         1= Serial dout.\n Mask */
#define ADC_SAR_ADC_CTRL_WARM_UP_DELAY_Pos    (7)                                            /**< (ADC_SAR_ADC_CTRL) This field represents the warmup delay number in microseconds.\n Position */
#define ADC_SAR_ADC_CTRL_WARM_UP_DELAY_Msk    (0x1FFU << ADC_SAR_ADC_CTRL_WARM_UP_DELAY_Pos)  /**< (ADC_SAR_ADC_CTRL) This field represents the warmup delay number in microseconds.\n Mask */
#define ADC_SAR_ADC_CTRL_WARM_UP_DELAY(value) (ADC_SAR_ADC_CTRL_WARM_UP_DELAY_Msk & ((value) << ADC_SAR_ADC_CTRL_WARM_UP_DELAY_Pos))
#define ADC_SAR_ADC_CTRL_Msk                  (0x0000FFBFUL)                                 /**< (ADC_SAR_ADC_CTRL) Register Mask  */

/* -------- ADC_SAR_CONFIG : (ADC Offset: 0x8c) (R/W 32) This is the SAR ADC Configuration Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t EN_CMBF:1;                 /**< bit:      0  Enable Common Mode Buffer Amplifier.\n    0= Common Mode Buffer Amplifier is high all the time.\n    1= Controls Common Mode Buffer Amplifier during power cycling.\n */
    uint32_t DIS_DOUT:1;                /**< bit:      1  Disable Parallel Output.\n    0= Enable Parallel Output.\n    1= Disable Parallel Output.\n */
    uint32_t EN_DITHER:1;               /**< bit:      2  Enable Dithering.\n    0= Disable Dither.\n    1= Enable Dither.\n */
    uint32_t FAZ_AUTOZEROING:1;         /**< bit:      3  Enable F_AZ AUTOZEROING.\n    1= Disable f_az autozeroing.\n    0= Enable f_az autozeroing.\n */
    uint32_t SAZ_AUTOZEROING:1;         /**< bit:      4  Enable S_AZ AUTOZEROING.\n    1= Disable S_AZ autozeroing.\n    0= Enable S_AZ autozeroing.\n */
    uint32_t LAZ_AUTOZEROING:1;         /**< bit:      5  Enable L_AZ AUTOZEROING.\n    1= Disable L_AZ autozeroing.\n    0= Enable L_AZ autozeroing.\n */
    uint32_t EN_RADC:1;                 /**< bit:      6  Enable RADC.\n    1 = RDAC remains high during power cycling.\n    0 = Controls RDAC during power cycling.\n */
    uint32_t :2;                        /**< bit:   7..8  Reserved                                      */
    uint32_t REGEN_DELAY:2;             /**< bit:  9..10  This register defines the delay between regen and latch.\n */
    uint32_t ADC_CLK_DIV:5;             /**< bit: 11..15  This register defines the programmable ADC Clock divider value.         Divider ratios of 256,128,64,32,16 are supported.\n */
    uint32_t :4;                        /**< bit: 16..19  Reserved                                      */
    uint32_t IADC_RANGE2:2;             /**< bit: 20..21  This register controls the current consumption for the whole ADC.\n */
    uint32_t IADC_RANGE1:2;             /**< bit: 22..23  This register controls the current consumption for the whole ADC.\n */
    uint32_t ICMBF_STG1:2;              /**< bit: 24..25  This register controls the bias current for the 1st stage of the comparator.\n */
    uint32_t ICMBF_STG2:2;              /**< bit: 26..27  This register controls the bias current for the 2nd stage of the comparator.\n */
    uint32_t ICMBF:2;                   /**< bit: 28..29  This register controls the bias current for common mode buffer amplifier.\n */
    uint32_t :1;                        /**< bit:     30  Reserved                                      */
    uint32_t EN_EXT_BIAS:1;             /**< bit:     31  EN external bias.\n    1 = Disables internal switched cap bias circuit.\n    0 = Enables internal switched cap bias circuit.\n */
  };
  uint32_t w;
} __ADC_SAR_CONFIG_bits_t;
#define ADC_SAR_CONFIG_RESETVALUE           (0x00U)                                       /**<  (ADC_SAR_CONFIG) This is the SAR ADC Configuration Register.\n  Reset Value */

#define ADC_SAR_CONFIG_EN_CMBF_Pos            (0)                                            /**< (ADC_SAR_CONFIG) Enable Common Mode Buffer Amplifier.\n    0= Common Mode Buffer Amplifier is high all the time.\n    1= Controls Common Mode Buffer Amplifier during power cycling.\n Position */
#define ADC_SAR_CONFIG_EN_CMBF_Msk            (0x1U << ADC_SAR_CONFIG_EN_CMBF_Pos)           /**< (ADC_SAR_CONFIG) Enable Common Mode Buffer Amplifier.\n    0= Common Mode Buffer Amplifier is high all the time.\n    1= Controls Common Mode Buffer Amplifier during power cycling.\n Mask */
#define ADC_SAR_CONFIG_DIS_DOUT_Pos           (1)                                            /**< (ADC_SAR_CONFIG) Disable Parallel Output.\n    0= Enable Parallel Output.\n    1= Disable Parallel Output.\n Position */
#define ADC_SAR_CONFIG_DIS_DOUT_Msk           (0x1U << ADC_SAR_CONFIG_DIS_DOUT_Pos)          /**< (ADC_SAR_CONFIG) Disable Parallel Output.\n    0= Enable Parallel Output.\n    1= Disable Parallel Output.\n Mask */
#define ADC_SAR_CONFIG_EN_DITHER_Pos          (2)                                            /**< (ADC_SAR_CONFIG) Enable Dithering.\n    0= Disable Dither.\n    1= Enable Dither.\n Position */
#define ADC_SAR_CONFIG_EN_DITHER_Msk          (0x1U << ADC_SAR_CONFIG_EN_DITHER_Pos)         /**< (ADC_SAR_CONFIG) Enable Dithering.\n    0= Disable Dither.\n    1= Enable Dither.\n Mask */
#define ADC_SAR_CONFIG_FAZ_AUTOZEROING_Pos    (3)                                            /**< (ADC_SAR_CONFIG) Enable F_AZ AUTOZEROING.\n    1= Disable f_az autozeroing.\n    0= Enable f_az autozeroing.\n Position */
#define ADC_SAR_CONFIG_FAZ_AUTOZEROING_Msk    (0x1U << ADC_SAR_CONFIG_FAZ_AUTOZEROING_Pos)   /**< (ADC_SAR_CONFIG) Enable F_AZ AUTOZEROING.\n    1= Disable f_az autozeroing.\n    0= Enable f_az autozeroing.\n Mask */
#define ADC_SAR_CONFIG_SAZ_AUTOZEROING_Pos    (4)                                            /**< (ADC_SAR_CONFIG) Enable S_AZ AUTOZEROING.\n    1= Disable S_AZ autozeroing.\n    0= Enable S_AZ autozeroing.\n Position */
#define ADC_SAR_CONFIG_SAZ_AUTOZEROING_Msk    (0x1U << ADC_SAR_CONFIG_SAZ_AUTOZEROING_Pos)   /**< (ADC_SAR_CONFIG) Enable S_AZ AUTOZEROING.\n    1= Disable S_AZ autozeroing.\n    0= Enable S_AZ autozeroing.\n Mask */
#define ADC_SAR_CONFIG_LAZ_AUTOZEROING_Pos    (5)                                            /**< (ADC_SAR_CONFIG) Enable L_AZ AUTOZEROING.\n    1= Disable L_AZ autozeroing.\n    0= Enable L_AZ autozeroing.\n Position */
#define ADC_SAR_CONFIG_LAZ_AUTOZEROING_Msk    (0x1U << ADC_SAR_CONFIG_LAZ_AUTOZEROING_Pos)   /**< (ADC_SAR_CONFIG) Enable L_AZ AUTOZEROING.\n    1= Disable L_AZ autozeroing.\n    0= Enable L_AZ autozeroing.\n Mask */
#define ADC_SAR_CONFIG_EN_RADC_Pos            (6)                                            /**< (ADC_SAR_CONFIG) Enable RADC.\n    1 = RDAC remains high during power cycling.\n    0 = Controls RDAC during power cycling.\n Position */
#define ADC_SAR_CONFIG_EN_RADC_Msk            (0x1U << ADC_SAR_CONFIG_EN_RADC_Pos)           /**< (ADC_SAR_CONFIG) Enable RADC.\n    1 = RDAC remains high during power cycling.\n    0 = Controls RDAC during power cycling.\n Mask */
#define ADC_SAR_CONFIG_REGEN_DELAY_Pos        (9)                                            /**< (ADC_SAR_CONFIG) This register defines the delay between regen and latch.\n Position */
#define ADC_SAR_CONFIG_REGEN_DELAY_Msk        (0x3U << ADC_SAR_CONFIG_REGEN_DELAY_Pos)       /**< (ADC_SAR_CONFIG) This register defines the delay between regen and latch.\n Mask */
#define ADC_SAR_CONFIG_REGEN_DELAY(value)     (ADC_SAR_CONFIG_REGEN_DELAY_Msk & ((value) << ADC_SAR_CONFIG_REGEN_DELAY_Pos))
#define ADC_SAR_CONFIG_ADC_CLK_DIV_Pos        (11)                                           /**< (ADC_SAR_CONFIG) This register defines the programmable ADC Clock divider value.         Divider ratios of 256,128,64,32,16 are supported.\n Position */
#define ADC_SAR_CONFIG_ADC_CLK_DIV_Msk        (0x1FU << ADC_SAR_CONFIG_ADC_CLK_DIV_Pos)      /**< (ADC_SAR_CONFIG) This register defines the programmable ADC Clock divider value.         Divider ratios of 256,128,64,32,16 are supported.\n Mask */
#define ADC_SAR_CONFIG_ADC_CLK_DIV(value)     (ADC_SAR_CONFIG_ADC_CLK_DIV_Msk & ((value) << ADC_SAR_CONFIG_ADC_CLK_DIV_Pos))
#define ADC_SAR_CONFIG_IADC_RANGE2_Pos        (20)                                           /**< (ADC_SAR_CONFIG) This register controls the current consumption for the whole ADC.\n Position */
#define ADC_SAR_CONFIG_IADC_RANGE2_Msk        (0x3U << ADC_SAR_CONFIG_IADC_RANGE2_Pos)       /**< (ADC_SAR_CONFIG) This register controls the current consumption for the whole ADC.\n Mask */
#define ADC_SAR_CONFIG_IADC_RANGE2(value)     (ADC_SAR_CONFIG_IADC_RANGE2_Msk & ((value) << ADC_SAR_CONFIG_IADC_RANGE2_Pos))
#define ADC_SAR_CONFIG_IADC_RANGE1_Pos        (22)                                           /**< (ADC_SAR_CONFIG) This register controls the current consumption for the whole ADC.\n Position */
#define ADC_SAR_CONFIG_IADC_RANGE1_Msk        (0x3U << ADC_SAR_CONFIG_IADC_RANGE1_Pos)       /**< (ADC_SAR_CONFIG) This register controls the current consumption for the whole ADC.\n Mask */
#define ADC_SAR_CONFIG_IADC_RANGE1(value)     (ADC_SAR_CONFIG_IADC_RANGE1_Msk & ((value) << ADC_SAR_CONFIG_IADC_RANGE1_Pos))
#define ADC_SAR_CONFIG_ICMBF_STG1_Pos         (24)                                           /**< (ADC_SAR_CONFIG) This register controls the bias current for the 1st stage of the comparator.\n Position */
#define ADC_SAR_CONFIG_ICMBF_STG1_Msk         (0x3U << ADC_SAR_CONFIG_ICMBF_STG1_Pos)        /**< (ADC_SAR_CONFIG) This register controls the bias current for the 1st stage of the comparator.\n Mask */
#define ADC_SAR_CONFIG_ICMBF_STG1(value)      (ADC_SAR_CONFIG_ICMBF_STG1_Msk & ((value) << ADC_SAR_CONFIG_ICMBF_STG1_Pos))
#define ADC_SAR_CONFIG_ICMBF_STG2_Pos         (26)                                           /**< (ADC_SAR_CONFIG) This register controls the bias current for the 2nd stage of the comparator.\n Position */
#define ADC_SAR_CONFIG_ICMBF_STG2_Msk         (0x3U << ADC_SAR_CONFIG_ICMBF_STG2_Pos)        /**< (ADC_SAR_CONFIG) This register controls the bias current for the 2nd stage of the comparator.\n Mask */
#define ADC_SAR_CONFIG_ICMBF_STG2(value)      (ADC_SAR_CONFIG_ICMBF_STG2_Msk & ((value) << ADC_SAR_CONFIG_ICMBF_STG2_Pos))
#define ADC_SAR_CONFIG_ICMBF_Pos              (28)                                           /**< (ADC_SAR_CONFIG) This register controls the bias current for common mode buffer amplifier.\n Position */
#define ADC_SAR_CONFIG_ICMBF_Msk              (0x3U << ADC_SAR_CONFIG_ICMBF_Pos)             /**< (ADC_SAR_CONFIG) This register controls the bias current for common mode buffer amplifier.\n Mask */
#define ADC_SAR_CONFIG_ICMBF(value)           (ADC_SAR_CONFIG_ICMBF_Msk & ((value) << ADC_SAR_CONFIG_ICMBF_Pos))
#define ADC_SAR_CONFIG_EN_EXT_BIAS_Pos        (31)                                           /**< (ADC_SAR_CONFIG) EN external bias.\n    1 = Disables internal switched cap bias circuit.\n    0 = Enables internal switched cap bias circuit.\n Position */
#define ADC_SAR_CONFIG_EN_EXT_BIAS_Msk        (0x1U << ADC_SAR_CONFIG_EN_EXT_BIAS_Pos)       /**< (ADC_SAR_CONFIG) EN external bias.\n    1 = Disables internal switched cap bias circuit.\n    0 = Enables internal switched cap bias circuit.\n Mask */
#define ADC_SAR_CONFIG_Msk                    (0xBFF0FE7FUL)                                 /**< (ADC_SAR_CONFIG) Register Mask  */

/** \brief ADC register offsets definitions */
#define ADC_CONTROL_OFFSET           (0x00)         /**< (ADC_CONTROL) The ADC Control Register is used to control the behavior of the Analog to Digital Converter. Offset */
#define ADC_DELAY_OFFSET             (0x04)         /**< (ADC_DELAY) The ADC Delay register determines the delay from setting Start_Repeat in the ADC Control Register and the start of a conversion cycle. This register also controls the interval between conversion cycles in repeat mode. Offset */
#define ADC_STATUS_OFFSET            (0x08)         /**< (ADC_STATUS) The ADC Status Register indicates whether the ADC has completed a conversion cycle. All bits are cleared by being written with a 1. \n            0: conversion of the corresponding ADC channel is not complete\n            1: conversion of the corresponding ADC channel is complete Offset */
#define ADC_SINGLE_EN_OFFSET         (0x0C)         /**< (ADC_SINGLE_EN) The ADC Single Register is used to control which ADC channel is captured during a Single-Sample conversion cycle initiated by the Start_Single bit in the ADC Control Register. \n            APPLICATION NOTE: Do not change the bits in this register in the middle of a conversion cycle to insure proper operation.\n            0: single cycle conversions for this channel are disabled\n            1: single cycle conversions for this channel are enabled Offset */
#define ADC_REPEAT_OFFSET            (0x10)         /**< (ADC_REPEAT) The ADC Repeat Register is used to control which ADC channels are captured during a repeat conversion cycle initiated by the Start_Repeat bit in the ADC Control Register. Offset */
#define ADC_CHANNEL_READING_OFFSET   (0x14)         /**< (ADC_CHANNEL_READING) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. Offset */
#define ADC_CFG_REG_OFFSET           (0x7C)         /**< (ADC_CFG_REG) The ADC Configuration Register is used to configure the ADC clock timing. Offset */
#define ADC_VREF_CHNL_OFFSET         (0x80)         /**< (ADC_VREF_CHNL) The ADC Channel Register is used to configure the reference voltage to the clock timing.\n Offset */
#define ADC_VREF_CTRL_OFFSET         (0x84)         /**< (ADC_VREF_CTRL) This is the VREF Control Register Offset */
#define ADC_SAR_ADC_CTRL_OFFSET      (0x88)         /**< (ADC_SAR_ADC_CTRL) This is the SAR ADC Control Register.\n Offset */
#define ADC_SAR_CONFIG_OFFSET        (0x8C)         /**< (ADC_SAR_CONFIG) This is the SAR ADC Configuration Register.\n Offset */

/** \brief ADC register API structure */
typedef struct
{  /* This block is designed to convert external analog voltage readings into digital values. */
  __IO  __ADC_CONTROL_bits_t           CONTROL;       /**< Offset: 0x00 (R/W  32) The ADC Control Register is used to control the behavior of the Analog to Digital Converter. */
  __IO  __ADC_DELAY_bits_t             DELAY;         /**< Offset: 0x04 (R/W  32) The ADC Delay register determines the delay from setting Start_Repeat in the ADC Control Register and the start of a conversion cycle. This register also controls the interval between conversion cycles in repeat mode. */
  __IO  __ADC_STATUS_bits_t            STATUS;        /**< Offset: 0x08 (R/W  32) The ADC Status Register indicates whether the ADC has completed a conversion cycle. All bits are cleared by being written with a 1. \n            0: conversion of the corresponding ADC channel is not complete\n            1: conversion of the corresponding ADC channel is complete */
  __IO  __ADC_SINGLE_EN_bits_t         SINGLE_EN;     /**< Offset: 0x0C (R/W  32) The ADC Single Register is used to control which ADC channel is captured during a Single-Sample conversion cycle initiated by the Start_Single bit in the ADC Control Register. \n            APPLICATION NOTE: Do not change the bits in this register in the middle of a conversion cycle to insure proper operation.\n            0: single cycle conversions for this channel are disabled\n            1: single cycle conversions for this channel are enabled */
  __IO  __ADC_REPEAT_bits_t            REPEAT;        /**< Offset: 0x10 (R/W  32) The ADC Repeat Register is used to control which ADC channels are captured during a repeat conversion cycle initiated by the Start_Repeat bit in the ADC Control Register. */
  __IO  __ADC_CHANNEL_READING_bits_t   ADC_CHANNEL_READING[16]; /**< Offset: 0x14 (R/W  32) All 16 ADC channels return their results into a 32-bit reading register. In each case the low 10 bits of the reading register\n     return the result of the Analog to Digital conversion and the upper 22 bits return 0. */
  __IO  __ADC_CFG_REG_bits_t           ADC_CFG_REG;   /**< Offset: 0x7C (R/W  32) The ADC Configuration Register is used to configure the ADC clock timing. */
  __IO  __ADC_VREF_CHNL_bits_t         ADC_VREF_CHNL; /**< Offset: 0x80 (R/W  32) The ADC Channel Register is used to configure the reference voltage to the clock timing.\n */
  __IO  __ADC_VREF_CTRL_bits_t         VREF_CTRL;     /**< Offset: 0x84 (R/W  32) This is the VREF Control Register */
  __IO  __ADC_SAR_ADC_CTRL_bits_t      SAR_ADC_CTRL;  /**< Offset: 0x88 (R/W  32) This is the SAR ADC Control Register.\n */
  __IO  __ADC_SAR_CONFIG_bits_t        SAR_CONFIG;    /**< Offset: 0x8C (R/W  32) This is the SAR ADC Configuration Register.\n */
} adc_registers_t;
/** @}  end of This block is designed to convert external analog voltage readings into digital values. */

#endif /* _PIC32CX_0525SG12_ADC_COMPONENT_H_ */
