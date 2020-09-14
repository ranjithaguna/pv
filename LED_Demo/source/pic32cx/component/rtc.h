/**
 * \brief Component description for PIC32CX/0525SG12 RTC
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
#ifndef _PIC32CX_0525SG12_RTC_COMPONENT_H_
#define _PIC32CX_0525SG12_RTC_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_RTC This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n    to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR RTC */
/* ========================================================================== */

/* -------- RTC_SEC : (RTC Offset: 0x00) (R/W 8) Seconds Register -------- */

typedef union
{
  uint8_t  w;
} __RTC_SEC_bits_t;
#define RTC_SEC_RESETVALUE                  (0x00U)                                       /**<  (RTC_SEC) Seconds Register  Reset Value */

#define RTC_SEC_Msk                           (0x00000000UL)                                 /**< (RTC_SEC) Register Mask  */

/* -------- RTC_SEC_ALARM : (RTC Offset: 0x01) (R/W 8) Seconds Alarm Register -------- */

typedef union
{
  uint8_t  w;
} __RTC_SEC_ALARM_bits_t;
#define RTC_SEC_ALARM_RESETVALUE            (0x00U)                                       /**<  (RTC_SEC_ALARM) Seconds Alarm Register  Reset Value */

#define RTC_SEC_ALARM_Msk                     (0x00000000UL)                                 /**< (RTC_SEC_ALARM) Register Mask  */

/* -------- RTC_MIN : (RTC Offset: 0x02) (R/W 8) Minutes Register -------- */

typedef union
{
  uint8_t  w;
} __RTC_MIN_bits_t;
#define RTC_MIN_RESETVALUE                  (0x00U)                                       /**<  (RTC_MIN) Minutes Register  Reset Value */

#define RTC_MIN_Msk                           (0x00000000UL)                                 /**< (RTC_MIN) Register Mask  */

/* -------- RTC_MIN_ALARM : (RTC Offset: 0x03) (R/W 8) Minutes Alarm Register -------- */

typedef union
{
  uint8_t  w;
} __RTC_MIN_ALARM_bits_t;
#define RTC_MIN_ALARM_RESETVALUE            (0x00U)                                       /**<  (RTC_MIN_ALARM) Minutes Alarm Register  Reset Value */

#define RTC_MIN_ALARM_Msk                     (0x00000000UL)                                 /**< (RTC_MIN_ALARM) Register Mask  */

/* -------- RTC_HR : (RTC Offset: 0x04) (R/W 8) Hours Register -------- */

typedef union
{
  uint8_t  w;
} __RTC_HR_bits_t;
#define RTC_HR_RESETVALUE                   (0x00U)                                       /**<  (RTC_HR) Hours Register  Reset Value */

#define RTC_HR_Msk                            (0x00000000UL)                                 /**< (RTC_HR) Register Mask  */

/* -------- RTC_HR_ALARM : (RTC Offset: 0x05) (R/W 8) Hours Alarm Register -------- */

typedef union
{
  uint8_t  w;
} __RTC_HR_ALARM_bits_t;
#define RTC_HR_ALARM_RESETVALUE             (0x00U)                                       /**<  (RTC_HR_ALARM) Hours Alarm Register  Reset Value */

#define RTC_HR_ALARM_Msk                      (0x00000000UL)                                 /**< (RTC_HR_ALARM) Register Mask  */

/* -------- RTC_DAY_WEEK : (RTC Offset: 0x06) (R/W 8) Day of Week Register -------- */

typedef union
{
  uint8_t  w;
} __RTC_DAY_WEEK_bits_t;
#define RTC_DAY_WEEK_RESETVALUE             (0x00U)                                       /**<  (RTC_DAY_WEEK) Day of Week Register  Reset Value */

#define RTC_DAY_WEEK_Msk                      (0x00000000UL)                                 /**< (RTC_DAY_WEEK) Register Mask  */

/* -------- RTC_DAY_MONTH : (RTC Offset: 0x07) (R/W 8) Day of Month Register -------- */

typedef union
{
  uint8_t  w;
} __RTC_DAY_MONTH_bits_t;
#define RTC_DAY_MONTH_RESETVALUE            (0x00U)                                       /**<  (RTC_DAY_MONTH) Day of Month Register  Reset Value */

#define RTC_DAY_MONTH_Msk                     (0x00000000UL)                                 /**< (RTC_DAY_MONTH) Register Mask  */

/* -------- RTC_MONTH : (RTC Offset: 0x08) (R/W 8) Month Register -------- */

typedef union
{
  uint8_t  w;
} __RTC_MONTH_bits_t;
#define RTC_MONTH_RESETVALUE                (0x00U)                                       /**<  (RTC_MONTH) Month Register  Reset Value */

#define RTC_MONTH_Msk                         (0x00000000UL)                                 /**< (RTC_MONTH) Register Mask  */

/* -------- RTC_YEAR : (RTC Offset: 0x09) (R/W 8) Year Register -------- */

typedef union
{
  uint8_t  w;
} __RTC_YEAR_bits_t;
#define RTC_YEAR_RESETVALUE                 (0x00U)                                       /**<  (RTC_YEAR) Year Register  Reset Value */

#define RTC_YEAR_Msk                          (0x00000000UL)                                 /**< (RTC_YEAR) Register Mask  */

/* -------- RTC_REG_A : (RTC Offset: 0x0a) (R/W 8) Register A -------- */

typedef union
{
  uint8_t  w;
} __RTC_REG_A_bits_t;
#define RTC_REG_A_RESETVALUE                (0x00U)                                       /**<  (RTC_REG_A) Register A  Reset Value */

#define RTC_REG_A_Msk                         (0x00000000UL)                                 /**< (RTC_REG_A) Register Mask  */

/* -------- RTC_REG_B : (RTC Offset: 0x0b) (R/W 8) Register B -------- */

typedef union
{
  uint8_t  w;
} __RTC_REG_B_bits_t;
#define RTC_REG_B_RESETVALUE                (0x00U)                                       /**<  (RTC_REG_B) Register B  Reset Value */

#define RTC_REG_B_Msk                         (0x00000000UL)                                 /**< (RTC_REG_B) Register Mask  */

/* -------- RTC_REG_C : (RTC Offset: 0x0c) (R/W 8) Register C -------- */

typedef union
{
  uint8_t  w;
} __RTC_REG_C_bits_t;
#define RTC_REG_C_RESETVALUE                (0x00U)                                       /**<  (RTC_REG_C) Register C  Reset Value */

#define RTC_REG_C_Msk                         (0x00000000UL)                                 /**< (RTC_REG_C) Register Mask  */

/* -------- RTC_REG_D : (RTC Offset: 0x0d) (R/W 8) Register D -------- */

typedef union
{
  uint8_t  w;
} __RTC_REG_D_bits_t;
#define RTC_REG_D_RESETVALUE                (0x00U)                                       /**<  (RTC_REG_D) Register D  Reset Value */

#define RTC_REG_D_Msk                         (0x00000000UL)                                 /**< (RTC_REG_D) Register Mask  */

/* -------- RTC_CONTROL : (RTC Offset: 0x10) (R/W 32) RTC Control Register -------- */

typedef union
{
  struct
  {
    uint32_t BLOCK_ENABLE:1;            /**< bit:      0  BLOCK_ENABLE This bit must be '1' in order for the block to function internally. Registers may be initialized first, before\n      setting this bit to '1' to start operation. */
    uint32_t SOFT_RESET:1;              /**< bit:      1  SOFT_RESET A '1' written to this bit position will trigger the RTC_RST reset, resetting the block and all registers except\n      this one and the Test Register. This bit is self-clearing at the end of the reset, one cycle of Host Bus Clock later, and so requires\n      no waiting. */
    uint32_t TEST:1;                    /**< bit:      2  TEST                                          */
    uint32_t ALARM_ENABLE:1;            /**< bit:      3  ALARM_ENABLE  1=Enables the Alarm features, 0=Disables the Alarm features */
    uint32_t :28;                       /**< bit:  4..31  Reserved                                      */
  };
  uint32_t w;
} __RTC_CONTROL_bits_t;
#define RTC_CONTROL_RESETVALUE              (0x00U)                                       /**<  (RTC_CONTROL) RTC Control Register  Reset Value */

#define RTC_CONTROL_BLOCK_ENABLE_Pos          (0)                                            /**< (RTC_CONTROL) BLOCK_ENABLE This bit must be '1' in order for the block to function internally. Registers may be initialized first, before\n      setting this bit to '1' to start operation. Position */
#define RTC_CONTROL_BLOCK_ENABLE_Msk          (0x1U << RTC_CONTROL_BLOCK_ENABLE_Pos)         /**< (RTC_CONTROL) BLOCK_ENABLE This bit must be '1' in order for the block to function internally. Registers may be initialized first, before\n      setting this bit to '1' to start operation. Mask */
#define RTC_CONTROL_SOFT_RESET_Pos            (1)                                            /**< (RTC_CONTROL) SOFT_RESET A '1' written to this bit position will trigger the RTC_RST reset, resetting the block and all registers except\n      this one and the Test Register. This bit is self-clearing at the end of the reset, one cycle of Host Bus Clock later, and so requires\n      no waiting. Position */
#define RTC_CONTROL_SOFT_RESET_Msk            (0x1U << RTC_CONTROL_SOFT_RESET_Pos)           /**< (RTC_CONTROL) SOFT_RESET A '1' written to this bit position will trigger the RTC_RST reset, resetting the block and all registers except\n      this one and the Test Register. This bit is self-clearing at the end of the reset, one cycle of Host Bus Clock later, and so requires\n      no waiting. Mask */
#define RTC_CONTROL_TEST_Pos                  (2)                                            /**< (RTC_CONTROL) TEST Position */
#define RTC_CONTROL_TEST_Msk                  (0x1U << RTC_CONTROL_TEST_Pos)                 /**< (RTC_CONTROL) TEST Mask */
#define RTC_CONTROL_ALARM_ENABLE_Pos          (3)                                            /**< (RTC_CONTROL) ALARM_ENABLE  1=Enables the Alarm features, 0=Disables the Alarm features Position */
#define RTC_CONTROL_ALARM_ENABLE_Msk          (0x1U << RTC_CONTROL_ALARM_ENABLE_Pos)         /**< (RTC_CONTROL) ALARM_ENABLE  1=Enables the Alarm features, 0=Disables the Alarm features Mask */
#define RTC_CONTROL_Msk                       (0x0000000FUL)                                 /**< (RTC_CONTROL) Register Mask  */

/* -------- RTC_WEEK_ALARM : (RTC Offset: 0x14) (R/W 32) Week Alarm Register[7:0] - ALARM_DAY_OF_WEEK This register, if written to a value in the range 1- -7, will inhibit the Alarm\n     interrupt unless this field matches the contents of the Day of Week Register also. -------- */

typedef union
{
  uint32_t w;
} __RTC_WEEK_ALARM_bits_t;
#define RTC_WEEK_ALARM_RESETVALUE           (0x00U)                                       /**<  (RTC_WEEK_ALARM) Week Alarm Register[7:0] - ALARM_DAY_OF_WEEK This register, if written to a value in the range 1- -7, will inhibit the Alarm\n     interrupt unless this field matches the contents of the Day of Week Register also.  Reset Value */

#define RTC_WEEK_ALARM_Msk                    (0x00000000UL)                                 /**< (RTC_WEEK_ALARM) Register Mask  */

/* -------- RTC_DAYLIGHT_SAVINGS_FORWARD : (RTC Offset: 0x18) (R/W 32) Daylight Savings Forward Register -------- */

typedef union
{
  struct
  {
    uint32_t DST_MONTH:8;               /**< bit:   0..7  This field matches the Month Register.        */
    uint32_t DST_DAY_OF_WEEK:3;         /**< bit:  8..10  This field matches the Day of Week Register bits[2:0]. */
    uint32_t :5;                        /**< bit: 11..15  Reserved                                      */
    uint32_t DST_WEEK:3;                /**< bit: 16..18  5=Last week of month, 4 =Fourth week of month, 3=Third week of month, 2=Second week of month, 1=First week of month */
    uint32_t :5;                        /**< bit: 19..23  Reserved                                      */
    uint32_t DST_HOUR:7;                /**< bit: 24..30  This field holds the matching value for bits[6:0] of the Hours register. The written value will be interpreted according\n      to the 24/12 Hour mode and DM mode settings at the time of writing. */
    uint32_t DST_AM_PM:1;               /**< bit:     31  This bit selects AM vs. PM, to match bit[7] of the Hours Register if 12-Hour mode is selected in Register B at the time\n      of writing. */
  };
  uint32_t w;
} __RTC_DAYLIGHT_SAVINGS_FORWARD_bits_t;
#define RTC_DAYLIGHT_SAVINGS_FORWARD_RESETVALUE (0x00U)                                       /**<  (RTC_DAYLIGHT_SAVINGS_FORWARD) Daylight Savings Forward Register  Reset Value */

#define RTC_DAYLIGHT_SAVINGS_FORWARD_DST_MONTH_Pos (0)                                            /**< (RTC_DAYLIGHT_SAVINGS_FORWARD) This field matches the Month Register. Position */
#define RTC_DAYLIGHT_SAVINGS_FORWARD_DST_MONTH_Msk (0xFFU << RTC_DAYLIGHT_SAVINGS_FORWARD_DST_MONTH_Pos)  /**< (RTC_DAYLIGHT_SAVINGS_FORWARD) This field matches the Month Register. Mask */
#define RTC_DAYLIGHT_SAVINGS_FORWARD_DST_MONTH(value) (RTC_DAYLIGHT_SAVINGS_FORWARD_DST_MONTH_Msk & ((value) << RTC_DAYLIGHT_SAVINGS_FORWARD_DST_MONTH_Pos))
#define RTC_DAYLIGHT_SAVINGS_FORWARD_DST_DAY_OF_WEEK_Pos (8)                                            /**< (RTC_DAYLIGHT_SAVINGS_FORWARD) This field matches the Day of Week Register bits[2:0]. Position */
#define RTC_DAYLIGHT_SAVINGS_FORWARD_DST_DAY_OF_WEEK_Msk (0x7U << RTC_DAYLIGHT_SAVINGS_FORWARD_DST_DAY_OF_WEEK_Pos)  /**< (RTC_DAYLIGHT_SAVINGS_FORWARD) This field matches the Day of Week Register bits[2:0]. Mask */
#define RTC_DAYLIGHT_SAVINGS_FORWARD_DST_DAY_OF_WEEK(value) (RTC_DAYLIGHT_SAVINGS_FORWARD_DST_DAY_OF_WEEK_Msk & ((value) << RTC_DAYLIGHT_SAVINGS_FORWARD_DST_DAY_OF_WEEK_Pos))
#define RTC_DAYLIGHT_SAVINGS_FORWARD_DST_WEEK_Pos (16)                                           /**< (RTC_DAYLIGHT_SAVINGS_FORWARD) 5=Last week of month, 4 =Fourth week of month, 3=Third week of month, 2=Second week of month, 1=First week of month Position */
#define RTC_DAYLIGHT_SAVINGS_FORWARD_DST_WEEK_Msk (0x7U << RTC_DAYLIGHT_SAVINGS_FORWARD_DST_WEEK_Pos)  /**< (RTC_DAYLIGHT_SAVINGS_FORWARD) 5=Last week of month, 4 =Fourth week of month, 3=Third week of month, 2=Second week of month, 1=First week of month Mask */
#define RTC_DAYLIGHT_SAVINGS_FORWARD_DST_WEEK(value) (RTC_DAYLIGHT_SAVINGS_FORWARD_DST_WEEK_Msk & ((value) << RTC_DAYLIGHT_SAVINGS_FORWARD_DST_WEEK_Pos))
#define RTC_DAYLIGHT_SAVINGS_FORWARD_DST_HOUR_Pos (24)                                           /**< (RTC_DAYLIGHT_SAVINGS_FORWARD) This field holds the matching value for bits[6:0] of the Hours register. The written value will be interpreted according\n      to the 24/12 Hour mode and DM mode settings at the time of writing. Position */
#define RTC_DAYLIGHT_SAVINGS_FORWARD_DST_HOUR_Msk (0x7FU << RTC_DAYLIGHT_SAVINGS_FORWARD_DST_HOUR_Pos)  /**< (RTC_DAYLIGHT_SAVINGS_FORWARD) This field holds the matching value for bits[6:0] of the Hours register. The written value will be interpreted according\n      to the 24/12 Hour mode and DM mode settings at the time of writing. Mask */
#define RTC_DAYLIGHT_SAVINGS_FORWARD_DST_HOUR(value) (RTC_DAYLIGHT_SAVINGS_FORWARD_DST_HOUR_Msk & ((value) << RTC_DAYLIGHT_SAVINGS_FORWARD_DST_HOUR_Pos))
#define RTC_DAYLIGHT_SAVINGS_FORWARD_DST_AM_PM_Pos (31)                                           /**< (RTC_DAYLIGHT_SAVINGS_FORWARD) This bit selects AM vs. PM, to match bit[7] of the Hours Register if 12-Hour mode is selected in Register B at the time\n      of writing. Position */
#define RTC_DAYLIGHT_SAVINGS_FORWARD_DST_AM_PM_Msk (0x1U << RTC_DAYLIGHT_SAVINGS_FORWARD_DST_AM_PM_Pos)  /**< (RTC_DAYLIGHT_SAVINGS_FORWARD) This bit selects AM vs. PM, to match bit[7] of the Hours Register if 12-Hour mode is selected in Register B at the time\n      of writing. Mask */
#define RTC_DAYLIGHT_SAVINGS_FORWARD_Msk      (0xFF0707FFUL)                                 /**< (RTC_DAYLIGHT_SAVINGS_FORWARD) Register Mask  */

/* -------- RTC_DAYLIGHT_SAVINGS_BACKWARD : (RTC Offset: 0x1c) (R/W 32) Daylight Savings Backward Register -------- */

typedef union
{
  struct
  {
    uint32_t DST_MONTH:8;               /**< bit:   0..7  This field matches the Month Register.        */
    uint32_t DST_DAY_OF_WEEK:3;         /**< bit:  8..10  This field matches the Day of Week Register bits[2:0]. */
    uint32_t :5;                        /**< bit: 11..15  Reserved                                      */
    uint32_t DST_WEEK:3;                /**< bit: 16..18  5=Last week of month, 4 =Fourth week of month, 3=Third week of month, 2=Second week of month, 1=First week of month */
    uint32_t :5;                        /**< bit: 19..23  Reserved                                      */
    uint32_t DST_HOUR:7;                /**< bit: 24..30  This field holds the matching value for bits[6:0] of the Hours register. The written value will be interpreted according\n      to the 24/12 Hour mode and DM mode settings at the time of writing. */
    uint32_t DST_AM_PM:1;               /**< bit:     31  This bit selects AM vs. PM, to match bit[7] of the Hours Register if 12-Hour mode is selected in Register B at the time\n      of writing. */
  };
  uint32_t w;
} __RTC_DAYLIGHT_SAVINGS_BACKWARD_bits_t;
#define RTC_DAYLIGHT_SAVINGS_BACKWARD_RESETVALUE (0x00U)                                       /**<  (RTC_DAYLIGHT_SAVINGS_BACKWARD) Daylight Savings Backward Register  Reset Value */

#define RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_MONTH_Pos (0)                                            /**< (RTC_DAYLIGHT_SAVINGS_BACKWARD) This field matches the Month Register. Position */
#define RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_MONTH_Msk (0xFFU << RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_MONTH_Pos)  /**< (RTC_DAYLIGHT_SAVINGS_BACKWARD) This field matches the Month Register. Mask */
#define RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_MONTH(value) (RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_MONTH_Msk & ((value) << RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_MONTH_Pos))
#define RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_DAY_OF_WEEK_Pos (8)                                            /**< (RTC_DAYLIGHT_SAVINGS_BACKWARD) This field matches the Day of Week Register bits[2:0]. Position */
#define RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_DAY_OF_WEEK_Msk (0x7U << RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_DAY_OF_WEEK_Pos)  /**< (RTC_DAYLIGHT_SAVINGS_BACKWARD) This field matches the Day of Week Register bits[2:0]. Mask */
#define RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_DAY_OF_WEEK(value) (RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_DAY_OF_WEEK_Msk & ((value) << RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_DAY_OF_WEEK_Pos))
#define RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_WEEK_Pos (16)                                           /**< (RTC_DAYLIGHT_SAVINGS_BACKWARD) 5=Last week of month, 4 =Fourth week of month, 3=Third week of month, 2=Second week of month, 1=First week of month Position */
#define RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_WEEK_Msk (0x7U << RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_WEEK_Pos)  /**< (RTC_DAYLIGHT_SAVINGS_BACKWARD) 5=Last week of month, 4 =Fourth week of month, 3=Third week of month, 2=Second week of month, 1=First week of month Mask */
#define RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_WEEK(value) (RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_WEEK_Msk & ((value) << RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_WEEK_Pos))
#define RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_HOUR_Pos (24)                                           /**< (RTC_DAYLIGHT_SAVINGS_BACKWARD) This field holds the matching value for bits[6:0] of the Hours register. The written value will be interpreted according\n      to the 24/12 Hour mode and DM mode settings at the time of writing. Position */
#define RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_HOUR_Msk (0x7FU << RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_HOUR_Pos)  /**< (RTC_DAYLIGHT_SAVINGS_BACKWARD) This field holds the matching value for bits[6:0] of the Hours register. The written value will be interpreted according\n      to the 24/12 Hour mode and DM mode settings at the time of writing. Mask */
#define RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_HOUR(value) (RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_HOUR_Msk & ((value) << RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_HOUR_Pos))
#define RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_AM_PM_Pos (31)                                           /**< (RTC_DAYLIGHT_SAVINGS_BACKWARD) This bit selects AM vs. PM, to match bit[7] of the Hours Register if 12-Hour mode is selected in Register B at the time\n      of writing. Position */
#define RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_AM_PM_Msk (0x1U << RTC_DAYLIGHT_SAVINGS_BACKWARD_DST_AM_PM_Pos)  /**< (RTC_DAYLIGHT_SAVINGS_BACKWARD) This bit selects AM vs. PM, to match bit[7] of the Hours Register if 12-Hour mode is selected in Register B at the time\n      of writing. Mask */
#define RTC_DAYLIGHT_SAVINGS_BACKWARD_Msk     (0xFF0707FFUL)                                 /**< (RTC_DAYLIGHT_SAVINGS_BACKWARD) Register Mask  */

/** \brief RTC register offsets definitions */
#define RTC_SEC_OFFSET               (0x00)         /**< (RTC_SEC) Seconds Register Offset */
#define RTC_SEC_ALARM_OFFSET         (0x01)         /**< (RTC_SEC_ALARM) Seconds Alarm Register Offset */
#define RTC_MIN_OFFSET               (0x02)         /**< (RTC_MIN) Minutes Register Offset */
#define RTC_MIN_ALARM_OFFSET         (0x03)         /**< (RTC_MIN_ALARM) Minutes Alarm Register Offset */
#define RTC_HR_OFFSET                (0x04)         /**< (RTC_HR) Hours Register Offset */
#define RTC_HR_ALARM_OFFSET          (0x05)         /**< (RTC_HR_ALARM) Hours Alarm Register Offset */
#define RTC_DAY_WEEK_OFFSET          (0x06)         /**< (RTC_DAY_WEEK) Day of Week Register Offset */
#define RTC_DAY_MONTH_OFFSET         (0x07)         /**< (RTC_DAY_MONTH) Day of Month Register Offset */
#define RTC_MONTH_OFFSET             (0x08)         /**< (RTC_MONTH) Month Register Offset */
#define RTC_YEAR_OFFSET              (0x09)         /**< (RTC_YEAR) Year Register Offset */
#define RTC_REG_A_OFFSET             (0x0A)         /**< (RTC_REG_A) Register A Offset */
#define RTC_REG_B_OFFSET             (0x0B)         /**< (RTC_REG_B) Register B Offset */
#define RTC_REG_C_OFFSET             (0x0C)         /**< (RTC_REG_C) Register C Offset */
#define RTC_REG_D_OFFSET             (0x0D)         /**< (RTC_REG_D) Register D Offset */
#define RTC_CONTROL_OFFSET           (0x10)         /**< (RTC_CONTROL) RTC Control Register Offset */
#define RTC_WEEK_ALARM_OFFSET        (0x14)         /**< (RTC_WEEK_ALARM) Week Alarm Register[7:0] - ALARM_DAY_OF_WEEK This register, if written to a value in the range 1- -7, will inhibit the Alarm\n     interrupt unless this field matches the contents of the Day of Week Register also. Offset */
#define RTC_DAYLIGHT_SAVINGS_FORWARD_OFFSET (0x18)         /**< (RTC_DAYLIGHT_SAVINGS_FORWARD) Daylight Savings Forward Register Offset */
#define RTC_DAYLIGHT_SAVINGS_BACKWARD_OFFSET (0x1C)         /**< (RTC_DAYLIGHT_SAVINGS_BACKWARD) Daylight Savings Backward Register Offset */

/** \brief RTC register API structure */
typedef struct
{  /* This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n    to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. */
  __IO  __RTC_SEC_bits_t               SEC;           /**< Offset: 0x00 (R/W   8) Seconds Register */
  __IO  __RTC_SEC_ALARM_bits_t         SEC_ALARM;     /**< Offset: 0x01 (R/W   8) Seconds Alarm Register */
  __IO  __RTC_MIN_bits_t               MIN;           /**< Offset: 0x02 (R/W   8) Minutes Register */
  __IO  __RTC_MIN_ALARM_bits_t         MIN_ALARM;     /**< Offset: 0x03 (R/W   8) Minutes Alarm Register */
  __IO  __RTC_HR_bits_t                HR;            /**< Offset: 0x04 (R/W   8) Hours Register */
  __IO  __RTC_HR_ALARM_bits_t          HR_ALARM;      /**< Offset: 0x05 (R/W   8) Hours Alarm Register */
  __IO  __RTC_DAY_WEEK_bits_t          DAY_WEEK;      /**< Offset: 0x06 (R/W   8) Day of Week Register */
  __IO  __RTC_DAY_MONTH_bits_t         DAY_MONTH;     /**< Offset: 0x07 (R/W   8) Day of Month Register */
  __IO  __RTC_MONTH_bits_t             MONTH;         /**< Offset: 0x08 (R/W   8) Month Register */
  __IO  __RTC_YEAR_bits_t              YEAR;          /**< Offset: 0x09 (R/W   8) Year Register */
  __IO  __RTC_REG_A_bits_t             REG_A;         /**< Offset: 0x0A (R/W   8) Register A */
  __IO  __RTC_REG_B_bits_t             REG_B;         /**< Offset: 0x0B (R/W   8) Register B */
  __IO  __RTC_REG_C_bits_t             REG_C;         /**< Offset: 0x0C (R/W   8) Register C */
  __IO  __RTC_REG_D_bits_t             REG_D;         /**< Offset: 0x0D (R/W   8) Register D */
  __IO  __RTC_CONTROL_bits_t           CONTROL;       /**< Offset: 0x10 (R/W  32) RTC Control Register */
  __IO  __RTC_WEEK_ALARM_bits_t        WEEK_ALARM;    /**< Offset: 0x14 (R/W  32) Week Alarm Register[7:0] - ALARM_DAY_OF_WEEK This register, if written to a value in the range 1- -7, will inhibit the Alarm\n     interrupt unless this field matches the contents of the Day of Week Register also. */
  __IO  __RTC_DAYLIGHT_SAVINGS_FORWARD_bits_t DAYLIGHT_SAVINGS_FORWARD; /**< Offset: 0x18 (R/W  32) Daylight Savings Forward Register */
  __IO  __RTC_DAYLIGHT_SAVINGS_BACKWARD_bits_t DAYLIGHT_SAVINGS_BACKWARD; /**< Offset: 0x1C (R/W  32) Daylight Savings Backward Register */
} rtc_registers_t;
/** @}  end of This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n    to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. */

#endif /* _PIC32CX_0525SG12_RTC_COMPONENT_H_ */
