/**
 * \brief Component description for PIC32CX/0525SG12 WEEK
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
#ifndef _PIC32CX_0525SG12_WEEK_COMPONENT_H_
#define _PIC32CX_0525SG12_WEEK_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_WEEK The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR WEEK */
/* ========================================================================== */

/* -------- WEEK_CONTROL_REGISTER : (WEEK Offset: 0x00) (R/W 32) Control Register -------- */

typedef union
{
  struct
  {
    uint32_t WT_ENABLE:1;               /**< bit:      0  The WT_ENABLE bit is used to start and stop the Week Alarm Counter Register and the Clock Divider Register.\n     The value in the Counter Register is held when the WT_ENABLE bit is not asserted (0) and the count is resumed from the last value when the bit is asserted (1).\n     The 15-Bit Clock Divider is reset to 00h and the Week Alarm Interface is in its lowest power consumption state when the WT_ENABLE bit is not asserted. */
    uint32_t :5;                        /**< bit:   1..5  Reserved                                      */
    uint32_t POWERUP_EN:1;              /**< bit:      6  This bit controls the state of the Power-Up Event Output and enables Week POWER-UP Event decoding in the VBAT-Powered Control Interface.\n     1=Power-Up Event Output Enabled\n     0=Power-Up Event Output Disabled and Reset */
    uint32_t :25;                       /**< bit:  7..31  Reserved                                      */
  };
  uint32_t w;
} __WEEK_CONTROL_REGISTER_bits_t;
#define WEEK_CONTROL_REGISTER_RESETVALUE    (0x01U)                                       /**<  (WEEK_CONTROL_REGISTER) Control Register  Reset Value */

#define WEEK_CONTROL_REGISTER_WT_ENABLE_Pos   (0)                                            /**< (WEEK_CONTROL_REGISTER) The WT_ENABLE bit is used to start and stop the Week Alarm Counter Register and the Clock Divider Register.\n     The value in the Counter Register is held when the WT_ENABLE bit is not asserted (0) and the count is resumed from the last value when the bit is asserted (1).\n     The 15-Bit Clock Divider is reset to 00h and the Week Alarm Interface is in its lowest power consumption state when the WT_ENABLE bit is not asserted. Position */
#define WEEK_CONTROL_REGISTER_WT_ENABLE_Msk   (0x1U << WEEK_CONTROL_REGISTER_WT_ENABLE_Pos)  /**< (WEEK_CONTROL_REGISTER) The WT_ENABLE bit is used to start and stop the Week Alarm Counter Register and the Clock Divider Register.\n     The value in the Counter Register is held when the WT_ENABLE bit is not asserted (0) and the count is resumed from the last value when the bit is asserted (1).\n     The 15-Bit Clock Divider is reset to 00h and the Week Alarm Interface is in its lowest power consumption state when the WT_ENABLE bit is not asserted. Mask */
#define WEEK_CONTROL_REGISTER_POWERUP_EN_Pos  (6)                                            /**< (WEEK_CONTROL_REGISTER) This bit controls the state of the Power-Up Event Output and enables Week POWER-UP Event decoding in the VBAT-Powered Control Interface.\n     1=Power-Up Event Output Enabled\n     0=Power-Up Event Output Disabled and Reset Position */
#define WEEK_CONTROL_REGISTER_POWERUP_EN_Msk  (0x1U << WEEK_CONTROL_REGISTER_POWERUP_EN_Pos)  /**< (WEEK_CONTROL_REGISTER) This bit controls the state of the Power-Up Event Output and enables Week POWER-UP Event decoding in the VBAT-Powered Control Interface.\n     1=Power-Up Event Output Enabled\n     0=Power-Up Event Output Disabled and Reset Mask */
#define WEEK_CONTROL_REGISTER_Msk             (0x00000041UL)                                 /**< (WEEK_CONTROL_REGISTER) Register Mask  */

/* -------- WEEK_ALARM_COUNTER : (WEEK Offset: 0x04) (R/W 32) Week Alarm Counter Register -------- */

typedef union
{
  struct
  {
    uint32_t WEEK_COUNTER:28;           /**< bit:  0..27  While the WT_ENABLE bit is 1, this register is incremented at a 1 Hz rate. Writes of this register may require one second\n     to take effect. Reads return the current state of the register. Reads and writes complete independently of the state of WT_ENABLE. */
    uint32_t :4;                        /**< bit: 28..31  Reserved                                      */
  };
  uint32_t w;
} __WEEK_ALARM_COUNTER_bits_t;
#define WEEK_ALARM_COUNTER_RESETVALUE       (0x00U)                                       /**<  (WEEK_ALARM_COUNTER) Week Alarm Counter Register  Reset Value */

#define WEEK_ALARM_COUNTER_WEEK_COUNTER_Pos   (0)                                            /**< (WEEK_ALARM_COUNTER) While the WT_ENABLE bit is 1, this register is incremented at a 1 Hz rate. Writes of this register may require one second\n     to take effect. Reads return the current state of the register. Reads and writes complete independently of the state of WT_ENABLE. Position */
#define WEEK_ALARM_COUNTER_WEEK_COUNTER_Msk   (0xFFFFFFFU << WEEK_ALARM_COUNTER_WEEK_COUNTER_Pos)  /**< (WEEK_ALARM_COUNTER) While the WT_ENABLE bit is 1, this register is incremented at a 1 Hz rate. Writes of this register may require one second\n     to take effect. Reads return the current state of the register. Reads and writes complete independently of the state of WT_ENABLE. Mask */
#define WEEK_ALARM_COUNTER_WEEK_COUNTER(value) (WEEK_ALARM_COUNTER_WEEK_COUNTER_Msk & ((value) << WEEK_ALARM_COUNTER_WEEK_COUNTER_Pos))
#define WEEK_ALARM_COUNTER_Msk                (0x0FFFFFFFUL)                                 /**< (WEEK_ALARM_COUNTER) Register Mask  */

/* -------- WEEK_TIMER_COMPARE : (WEEK Offset: 0x08) (R/W 32) Week Timer Compare Register -------- */

typedef union
{
  struct
  {
    uint32_t WEEK_COMPARE:28;           /**< bit:  0..27  A Week Alarm Interrupt and a Week Alarm Power-Up Event are asserted when the Week Alarm Counter Register is greater than\n     or equal to the contents of this register. Reads and writes complete independently of the state of WT_ENABLE. */
    uint32_t :4;                        /**< bit: 28..31  Reserved                                      */
  };
  uint32_t w;
} __WEEK_TIMER_COMPARE_bits_t;
#define WEEK_TIMER_COMPARE_RESETVALUE       (0xFFFFFFFU)                                  /**<  (WEEK_TIMER_COMPARE) Week Timer Compare Register  Reset Value */

#define WEEK_TIMER_COMPARE_WEEK_COMPARE_Pos   (0)                                            /**< (WEEK_TIMER_COMPARE) A Week Alarm Interrupt and a Week Alarm Power-Up Event are asserted when the Week Alarm Counter Register is greater than\n     or equal to the contents of this register. Reads and writes complete independently of the state of WT_ENABLE. Position */
#define WEEK_TIMER_COMPARE_WEEK_COMPARE_Msk   (0xFFFFFFFU << WEEK_TIMER_COMPARE_WEEK_COMPARE_Pos)  /**< (WEEK_TIMER_COMPARE) A Week Alarm Interrupt and a Week Alarm Power-Up Event are asserted when the Week Alarm Counter Register is greater than\n     or equal to the contents of this register. Reads and writes complete independently of the state of WT_ENABLE. Mask */
#define WEEK_TIMER_COMPARE_WEEK_COMPARE(value) (WEEK_TIMER_COMPARE_WEEK_COMPARE_Msk & ((value) << WEEK_TIMER_COMPARE_WEEK_COMPARE_Pos))
#define WEEK_TIMER_COMPARE_Msk                (0x0FFFFFFFUL)                                 /**< (WEEK_TIMER_COMPARE) Register Mask  */

/* -------- WEEK_CLOCK_DIVIDER : (WEEK Offset: 0x0c) (R/W 32) Clock Divider Register -------- */

typedef union
{
  struct
  {
    uint32_t CLOCK_DIVIDER:15;          /**< bit:  0..14  Reads of this register return the current state of the Week Timer 15- bit clock divider. */
    uint32_t :17;                       /**< bit: 15..31  Reserved                                      */
  };
  uint32_t w;
} __WEEK_CLOCK_DIVIDER_bits_t;
#define WEEK_CLOCK_DIVIDER_RESETVALUE       (0x00U)                                       /**<  (WEEK_CLOCK_DIVIDER) Clock Divider Register  Reset Value */

#define WEEK_CLOCK_DIVIDER_CLOCK_DIVIDER_Pos  (0)                                            /**< (WEEK_CLOCK_DIVIDER) Reads of this register return the current state of the Week Timer 15- bit clock divider. Position */
#define WEEK_CLOCK_DIVIDER_CLOCK_DIVIDER_Msk  (0x7FFFU << WEEK_CLOCK_DIVIDER_CLOCK_DIVIDER_Pos)  /**< (WEEK_CLOCK_DIVIDER) Reads of this register return the current state of the Week Timer 15- bit clock divider. Mask */
#define WEEK_CLOCK_DIVIDER_CLOCK_DIVIDER(value) (WEEK_CLOCK_DIVIDER_CLOCK_DIVIDER_Msk & ((value) << WEEK_CLOCK_DIVIDER_CLOCK_DIVIDER_Pos))
#define WEEK_CLOCK_DIVIDER_Msk                (0x00007FFFUL)                                 /**< (WEEK_CLOCK_DIVIDER) Register Mask  */

/* -------- WEEK_SUB_SECOND_INT_SELECT : (WEEK Offset: 0x10) (R/W 32) Sub-Second Programmable Interrupt Select Register -------- */

typedef union
{
  struct
  {
    uint32_t SPISR:4;                   /**< bit:   0..3  This field determines the rate at which Sub-Second interrupt events are generated. */
    uint32_t :28;                       /**< bit:  4..31  Reserved                                      */
  };
  uint32_t w;
} __WEEK_SUB_SECOND_INT_SELECT_bits_t;
#define WEEK_SUB_SECOND_INT_SELECT_RESETVALUE (0x00U)                                       /**<  (WEEK_SUB_SECOND_INT_SELECT) Sub-Second Programmable Interrupt Select Register  Reset Value */

#define WEEK_SUB_SECOND_INT_SELECT_SPISR_Pos  (0)                                            /**< (WEEK_SUB_SECOND_INT_SELECT) This field determines the rate at which Sub-Second interrupt events are generated. Position */
#define WEEK_SUB_SECOND_INT_SELECT_SPISR_Msk  (0xFU << WEEK_SUB_SECOND_INT_SELECT_SPISR_Pos)  /**< (WEEK_SUB_SECOND_INT_SELECT) This field determines the rate at which Sub-Second interrupt events are generated. Mask */
#define WEEK_SUB_SECOND_INT_SELECT_SPISR(value) (WEEK_SUB_SECOND_INT_SELECT_SPISR_Msk & ((value) << WEEK_SUB_SECOND_INT_SELECT_SPISR_Pos))
#define WEEK_SUB_SECOND_INT_SELECT_Msk        (0x0000000FUL)                                 /**< (WEEK_SUB_SECOND_INT_SELECT) Register Mask  */

/* -------- WEEK_SUB_WEEK_CONTROL : (WEEK Offset: 0x14) (R/ 32) Sub-Week Control Register -------- */

typedef union
{
  struct
  {
    uint32_t SUBWEEK_TIMER_POWERUP_EVENT_STATUS:1;  /**< bit:      0  This bit is set to 1 when the Sub-Week Alarm Counter Register decrements from 1 to 0 and the POWERUP_EN is 1.\n     Writes of 1 clear this bit. Writes of 0 have no effect. Note: This bit MUST be cleared to remove a Sub-Week Timer Power-Up Event. */
    uint32_t WEEK_TIMER_POWERUP_EVENT_STATUS:1;  /**< bit:      1  This bit is set to 1 when the Week Alarm Counter Register is greater than or equal the contents of the Week Timer Compare\n     Register and the POWERUP_EN is 1. Writes of 1 clear this bit. Writes of 0 have no effect.\n     Note: This bit does not have to be cleared to remove a Week Timer Power-Up Event. */
    uint32_t :2;                        /**< bit:   2..3  Reserved                                      */
    uint32_t TEST:1;                    /**< bit:      4  Test                                          */
    uint32_t TEST0:1;                   /**< bit:      5  Test                                          */
    uint32_t AUTO_RELOAD:1;             /**< bit:      6  1= No reload occurs when the Sub-Week Counter expires\n     0= Reloads the SUBWEEK_COUNTER_LOAD field into the Sub- Week Counter when the counter expires. */
    uint32_t SUBWEEK_TICK:3;            /**< bit:   7..9  This field selects the clock source for the Sub-Week Counter. */
    uint32_t :22;                       /**< bit: 10..31  Reserved                                      */
  };
  uint32_t w;
} __WEEK_SUB_WEEK_CONTROL_bits_t;
#define WEEK_SUB_WEEK_CONTROL_RESETVALUE    (0x00U)                                       /**<  (WEEK_SUB_WEEK_CONTROL) Sub-Week Control Register  Reset Value */

#define WEEK_SUB_WEEK_CONTROL_SUBWEEK_TIMER_POWERUP_EVENT_STATUS_Pos (0)                                            /**< (WEEK_SUB_WEEK_CONTROL) This bit is set to 1 when the Sub-Week Alarm Counter Register decrements from 1 to 0 and the POWERUP_EN is 1.\n     Writes of 1 clear this bit. Writes of 0 have no effect. Note: This bit MUST be cleared to remove a Sub-Week Timer Power-Up Event. Position */
#define WEEK_SUB_WEEK_CONTROL_SUBWEEK_TIMER_POWERUP_EVENT_STATUS_Msk (0x1U << WEEK_SUB_WEEK_CONTROL_SUBWEEK_TIMER_POWERUP_EVENT_STATUS_Pos)  /**< (WEEK_SUB_WEEK_CONTROL) This bit is set to 1 when the Sub-Week Alarm Counter Register decrements from 1 to 0 and the POWERUP_EN is 1.\n     Writes of 1 clear this bit. Writes of 0 have no effect. Note: This bit MUST be cleared to remove a Sub-Week Timer Power-Up Event. Mask */
#define WEEK_SUB_WEEK_CONTROL_WEEK_TIMER_POWERUP_EVENT_STATUS_Pos (1)                                            /**< (WEEK_SUB_WEEK_CONTROL) This bit is set to 1 when the Week Alarm Counter Register is greater than or equal the contents of the Week Timer Compare\n     Register and the POWERUP_EN is 1. Writes of 1 clear this bit. Writes of 0 have no effect.\n     Note: This bit does not have to be cleared to remove a Week Timer Power-Up Event. Position */
#define WEEK_SUB_WEEK_CONTROL_WEEK_TIMER_POWERUP_EVENT_STATUS_Msk (0x1U << WEEK_SUB_WEEK_CONTROL_WEEK_TIMER_POWERUP_EVENT_STATUS_Pos)  /**< (WEEK_SUB_WEEK_CONTROL) This bit is set to 1 when the Week Alarm Counter Register is greater than or equal the contents of the Week Timer Compare\n     Register and the POWERUP_EN is 1. Writes of 1 clear this bit. Writes of 0 have no effect.\n     Note: This bit does not have to be cleared to remove a Week Timer Power-Up Event. Mask */
#define WEEK_SUB_WEEK_CONTROL_TEST_Pos        (4)                                            /**< (WEEK_SUB_WEEK_CONTROL) Test Position */
#define WEEK_SUB_WEEK_CONTROL_TEST_Msk        (0x1U << WEEK_SUB_WEEK_CONTROL_TEST_Pos)       /**< (WEEK_SUB_WEEK_CONTROL) Test Mask */
#define WEEK_SUB_WEEK_CONTROL_TEST0_Pos       (5)                                            /**< (WEEK_SUB_WEEK_CONTROL) Test Position */
#define WEEK_SUB_WEEK_CONTROL_TEST0_Msk       (0x1U << WEEK_SUB_WEEK_CONTROL_TEST0_Pos)      /**< (WEEK_SUB_WEEK_CONTROL) Test Mask */
#define WEEK_SUB_WEEK_CONTROL_AUTO_RELOAD_Pos (6)                                            /**< (WEEK_SUB_WEEK_CONTROL) 1= No reload occurs when the Sub-Week Counter expires\n     0= Reloads the SUBWEEK_COUNTER_LOAD field into the Sub- Week Counter when the counter expires. Position */
#define WEEK_SUB_WEEK_CONTROL_AUTO_RELOAD_Msk (0x1U << WEEK_SUB_WEEK_CONTROL_AUTO_RELOAD_Pos)  /**< (WEEK_SUB_WEEK_CONTROL) 1= No reload occurs when the Sub-Week Counter expires\n     0= Reloads the SUBWEEK_COUNTER_LOAD field into the Sub- Week Counter when the counter expires. Mask */
#define WEEK_SUB_WEEK_CONTROL_SUBWEEK_TICK_Pos (7)                                            /**< (WEEK_SUB_WEEK_CONTROL) This field selects the clock source for the Sub-Week Counter. Position */
#define WEEK_SUB_WEEK_CONTROL_SUBWEEK_TICK_Msk (0x7U << WEEK_SUB_WEEK_CONTROL_SUBWEEK_TICK_Pos)  /**< (WEEK_SUB_WEEK_CONTROL) This field selects the clock source for the Sub-Week Counter. Mask */
#define WEEK_SUB_WEEK_CONTROL_SUBWEEK_TICK(value) (WEEK_SUB_WEEK_CONTROL_SUBWEEK_TICK_Msk & ((value) << WEEK_SUB_WEEK_CONTROL_SUBWEEK_TICK_Pos))
#define WEEK_SUB_WEEK_CONTROL_Msk             (0x000003F3UL)                                 /**< (WEEK_SUB_WEEK_CONTROL) Register Mask  */

/* -------- WEEK_SUB_WEEK_ALARM_COUNTER : (WEEK Offset: 0x18) (R/ 32) Sub-Week Alarm Counter Register -------- */

typedef union
{
  struct
  {
    uint32_t SUBWEEK_COUNTER_LOAD:9;    /**< bit:   0..8  Writes with a non-zero value to this field reload the 9-bit Sub-Week Alarm counter. Writes of 0 disable the counter.\n     If the Sub-Week Alarm counter decrements to 0 and the AUTO_RELOAD bit is set, the value in this field is automatically loaded into the Sub-Week Alarm counter. */
    uint32_t :7;                        /**< bit:  9..15  Reserved                                      */
    uint32_t SUBWEEK_COUNTER_STATUS:9;  /**< bit: 16..24  Reads of this register return the current state of the 9-bit Sub-Week Alarm counter. */
    uint32_t :7;                        /**< bit: 25..31  Reserved                                      */
  };
  uint32_t w;
} __WEEK_SUB_WEEK_ALARM_COUNTER_bits_t;
#define WEEK_SUB_WEEK_ALARM_COUNTER_RESETVALUE (0x00U)                                       /**<  (WEEK_SUB_WEEK_ALARM_COUNTER) Sub-Week Alarm Counter Register  Reset Value */

#define WEEK_SUB_WEEK_ALARM_COUNTER_SUBWEEK_COUNTER_LOAD_Pos (0)                                            /**< (WEEK_SUB_WEEK_ALARM_COUNTER) Writes with a non-zero value to this field reload the 9-bit Sub-Week Alarm counter. Writes of 0 disable the counter.\n     If the Sub-Week Alarm counter decrements to 0 and the AUTO_RELOAD bit is set, the value in this field is automatically loaded into the Sub-Week Alarm counter. Position */
#define WEEK_SUB_WEEK_ALARM_COUNTER_SUBWEEK_COUNTER_LOAD_Msk (0x1FFU << WEEK_SUB_WEEK_ALARM_COUNTER_SUBWEEK_COUNTER_LOAD_Pos)  /**< (WEEK_SUB_WEEK_ALARM_COUNTER) Writes with a non-zero value to this field reload the 9-bit Sub-Week Alarm counter. Writes of 0 disable the counter.\n     If the Sub-Week Alarm counter decrements to 0 and the AUTO_RELOAD bit is set, the value in this field is automatically loaded into the Sub-Week Alarm counter. Mask */
#define WEEK_SUB_WEEK_ALARM_COUNTER_SUBWEEK_COUNTER_LOAD(value) (WEEK_SUB_WEEK_ALARM_COUNTER_SUBWEEK_COUNTER_LOAD_Msk & ((value) << WEEK_SUB_WEEK_ALARM_COUNTER_SUBWEEK_COUNTER_LOAD_Pos))
#define WEEK_SUB_WEEK_ALARM_COUNTER_SUBWEEK_COUNTER_STATUS_Pos (16)                                           /**< (WEEK_SUB_WEEK_ALARM_COUNTER) Reads of this register return the current state of the 9-bit Sub-Week Alarm counter. Position */
#define WEEK_SUB_WEEK_ALARM_COUNTER_SUBWEEK_COUNTER_STATUS_Msk (0x1FFU << WEEK_SUB_WEEK_ALARM_COUNTER_SUBWEEK_COUNTER_STATUS_Pos)  /**< (WEEK_SUB_WEEK_ALARM_COUNTER) Reads of this register return the current state of the 9-bit Sub-Week Alarm counter. Mask */
#define WEEK_SUB_WEEK_ALARM_COUNTER_SUBWEEK_COUNTER_STATUS(value) (WEEK_SUB_WEEK_ALARM_COUNTER_SUBWEEK_COUNTER_STATUS_Msk & ((value) << WEEK_SUB_WEEK_ALARM_COUNTER_SUBWEEK_COUNTER_STATUS_Pos))
#define WEEK_SUB_WEEK_ALARM_COUNTER_Msk       (0x01FF01FFUL)                                 /**< (WEEK_SUB_WEEK_ALARM_COUNTER) Register Mask  */

/* -------- WEEK_BGPO_DATA : (WEEK Offset: 0x1c) (R/W 32) BGPO Data Register -------- */

typedef union
{
  struct
  {
    uint32_t BGPO:3;                    /**< bit:   0..2  Battery powered General Purpose Output. Each output pin may be individually configured to be either a VBAT-power BGPO or a VTR\n     powered GPIO, based on the corresponding settings in the BGPO Power Register. Additionally, each output pin may be individually configured\n     to reset to 0 on either RESET_VTR or RESET_SYS, based on the corresponding settings in the BGPO Reset Register.\n     For each bit [i] in the field: 1=BGPO[i] output is high; 0=BGPO[i] output is low. */
    uint32_t :29;                       /**< bit:  3..31  Reserved                                      */
  };
  uint32_t w;
} __WEEK_BGPO_DATA_bits_t;
#define WEEK_BGPO_DATA_RESETVALUE           (0x00U)                                       /**<  (WEEK_BGPO_DATA) BGPO Data Register  Reset Value */

#define WEEK_BGPO_DATA_BGPO_Pos               (0)                                            /**< (WEEK_BGPO_DATA) Battery powered General Purpose Output. Each output pin may be individually configured to be either a VBAT-power BGPO or a VTR\n     powered GPIO, based on the corresponding settings in the BGPO Power Register. Additionally, each output pin may be individually configured\n     to reset to 0 on either RESET_VTR or RESET_SYS, based on the corresponding settings in the BGPO Reset Register.\n     For each bit [i] in the field: 1=BGPO[i] output is high; 0=BGPO[i] output is low. Position */
#define WEEK_BGPO_DATA_BGPO_Msk               (0x7U << WEEK_BGPO_DATA_BGPO_Pos)              /**< (WEEK_BGPO_DATA) Battery powered General Purpose Output. Each output pin may be individually configured to be either a VBAT-power BGPO or a VTR\n     powered GPIO, based on the corresponding settings in the BGPO Power Register. Additionally, each output pin may be individually configured\n     to reset to 0 on either RESET_VTR or RESET_SYS, based on the corresponding settings in the BGPO Reset Register.\n     For each bit [i] in the field: 1=BGPO[i] output is high; 0=BGPO[i] output is low. Mask */
#define WEEK_BGPO_DATA_BGPO(value)            (WEEK_BGPO_DATA_BGPO_Msk & ((value) << WEEK_BGPO_DATA_BGPO_Pos))
#define WEEK_BGPO_DATA_Msk                    (0x00000007UL)                                 /**< (WEEK_BGPO_DATA) Register Mask  */

/* -------- WEEK_BGPO_POWER : (WEEK Offset: 0x20) (R/W 32) BGPO Power Register -------- */

typedef union
{
  struct
  {
    uint32_t BGPO_POWER:3;              /**< bit:   0..2  Battery powered General Purpose Output power source. For each bit [i] in the field:\n     1=BGPO[i] is powered by VBAT. The BGPO[i] pin is always determined by the corresponding bit in the BGPO Data Register. The GPIO Input register\n     for the GPIO that is multiplexed with the BGPO always returns a '1b'.\n     0=The pin for BGPO[i] functions as a GPIO. When VTR is powered, the pin associated with BGPO[i] is determined by the GPIO associated with the pin.\n     When VTR is unpowered, the pin is tristated. */
    uint32_t :29;                       /**< bit:  3..31  Reserved                                      */
  };
  uint32_t w;
} __WEEK_BGPO_POWER_bits_t;
#define WEEK_BGPO_POWER_RESETVALUE          (0x07U)                                       /**<  (WEEK_BGPO_POWER) BGPO Power Register  Reset Value */

#define WEEK_BGPO_POWER_BGPO_POWER_Pos        (0)                                            /**< (WEEK_BGPO_POWER) Battery powered General Purpose Output power source. For each bit [i] in the field:\n     1=BGPO[i] is powered by VBAT. The BGPO[i] pin is always determined by the corresponding bit in the BGPO Data Register. The GPIO Input register\n     for the GPIO that is multiplexed with the BGPO always returns a '1b'.\n     0=The pin for BGPO[i] functions as a GPIO. When VTR is powered, the pin associated with BGPO[i] is determined by the GPIO associated with the pin.\n     When VTR is unpowered, the pin is tristated. Position */
#define WEEK_BGPO_POWER_BGPO_POWER_Msk        (0x7U << WEEK_BGPO_POWER_BGPO_POWER_Pos)       /**< (WEEK_BGPO_POWER) Battery powered General Purpose Output power source. For each bit [i] in the field:\n     1=BGPO[i] is powered by VBAT. The BGPO[i] pin is always determined by the corresponding bit in the BGPO Data Register. The GPIO Input register\n     for the GPIO that is multiplexed with the BGPO always returns a '1b'.\n     0=The pin for BGPO[i] functions as a GPIO. When VTR is powered, the pin associated with BGPO[i] is determined by the GPIO associated with the pin.\n     When VTR is unpowered, the pin is tristated. Mask */
#define WEEK_BGPO_POWER_BGPO_POWER(value)     (WEEK_BGPO_POWER_BGPO_POWER_Msk & ((value) << WEEK_BGPO_POWER_BGPO_POWER_Pos))
#define WEEK_BGPO_POWER_Msk                   (0x00000007UL)                                 /**< (WEEK_BGPO_POWER) Register Mask  */

/* -------- WEEK_BGPO_RESET : (WEEK Offset: 0x24) (R/W 32) BGPO Reset Register -------- */

typedef union
{
  struct
  {
    uint32_t BGPO_RESET:3;              /**< bit:   0..2  Battery powered General Purpose Output reset event. For each bit [i] in the field:\n     1=BGPO[i] is reset to 0 on RESET_VTR; 0=BGPO[i] is reset to 0 on RESET_SYS. */
    uint32_t :29;                       /**< bit:  3..31  Reserved                                      */
  };
  uint32_t w;
} __WEEK_BGPO_RESET_bits_t;
#define WEEK_BGPO_RESET_RESETVALUE          (0x00U)                                       /**<  (WEEK_BGPO_RESET) BGPO Reset Register  Reset Value */

#define WEEK_BGPO_RESET_BGPO_RESET_Pos        (0)                                            /**< (WEEK_BGPO_RESET) Battery powered General Purpose Output reset event. For each bit [i] in the field:\n     1=BGPO[i] is reset to 0 on RESET_VTR; 0=BGPO[i] is reset to 0 on RESET_SYS. Position */
#define WEEK_BGPO_RESET_BGPO_RESET_Msk        (0x7U << WEEK_BGPO_RESET_BGPO_RESET_Pos)       /**< (WEEK_BGPO_RESET) Battery powered General Purpose Output reset event. For each bit [i] in the field:\n     1=BGPO[i] is reset to 0 on RESET_VTR; 0=BGPO[i] is reset to 0 on RESET_SYS. Mask */
#define WEEK_BGPO_RESET_BGPO_RESET(value)     (WEEK_BGPO_RESET_BGPO_RESET_Msk & ((value) << WEEK_BGPO_RESET_BGPO_RESET_Pos))
#define WEEK_BGPO_RESET_Msk                   (0x00000007UL)                                 /**< (WEEK_BGPO_RESET) Register Mask  */

/** \brief WEEK register offsets definitions */
#define WEEK_CONTROL_REGISTER_OFFSET (0x00)         /**< (WEEK_CONTROL_REGISTER) Control Register Offset */
#define WEEK_ALARM_COUNTER_OFFSET    (0x04)         /**< (WEEK_ALARM_COUNTER) Week Alarm Counter Register Offset */
#define WEEK_TIMER_COMPARE_OFFSET    (0x08)         /**< (WEEK_TIMER_COMPARE) Week Timer Compare Register Offset */
#define WEEK_CLOCK_DIVIDER_OFFSET    (0x0C)         /**< (WEEK_CLOCK_DIVIDER) Clock Divider Register Offset */
#define WEEK_SUB_SECOND_INT_SELECT_OFFSET (0x10)         /**< (WEEK_SUB_SECOND_INT_SELECT) Sub-Second Programmable Interrupt Select Register Offset */
#define WEEK_SUB_WEEK_CONTROL_OFFSET (0x14)         /**< (WEEK_SUB_WEEK_CONTROL) Sub-Week Control Register Offset */
#define WEEK_SUB_WEEK_ALARM_COUNTER_OFFSET (0x18)         /**< (WEEK_SUB_WEEK_ALARM_COUNTER) Sub-Week Alarm Counter Register Offset */
#define WEEK_BGPO_DATA_OFFSET        (0x1C)         /**< (WEEK_BGPO_DATA) BGPO Data Register Offset */
#define WEEK_BGPO_POWER_OFFSET       (0x20)         /**< (WEEK_BGPO_POWER) BGPO Power Register Offset */
#define WEEK_BGPO_RESET_OFFSET       (0x24)         /**< (WEEK_BGPO_RESET) BGPO Reset Register Offset */

/** \brief WEEK register API structure */
typedef struct
{  /* The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
  __IO  __WEEK_CONTROL_REGISTER_bits_t CONTROL_REGISTER; /**< Offset: 0x00 (R/W  32) Control Register */
  __IO  __WEEK_ALARM_COUNTER_bits_t    WEEK_ALARM_COUNTER; /**< Offset: 0x04 (R/W  32) Week Alarm Counter Register */
  __IO  __WEEK_TIMER_COMPARE_bits_t    WEEK_TIMER_COMPARE; /**< Offset: 0x08 (R/W  32) Week Timer Compare Register */
  __IO  __WEEK_CLOCK_DIVIDER_bits_t    CLOCK_DIVIDER; /**< Offset: 0x0C (R/W  32) Clock Divider Register */
  __IO  __WEEK_SUB_SECOND_INT_SELECT_bits_t SUB_SECOND_INT_SELECT; /**< Offset: 0x10 (R/W  32) Sub-Second Programmable Interrupt Select Register */
  __I   __WEEK_SUB_WEEK_CONTROL_bits_t SUB_WEEK_CONTROL; /**< Offset: 0x14 (R/   32) Sub-Week Control Register */
  __I   __WEEK_SUB_WEEK_ALARM_COUNTER_bits_t SUB_WEEK_ALARM_COUNTER; /**< Offset: 0x18 (R/   32) Sub-Week Alarm Counter Register */
  __IO  __WEEK_BGPO_DATA_bits_t        BGPO_DATA;     /**< Offset: 0x1C (R/W  32) BGPO Data Register */
  __IO  __WEEK_BGPO_POWER_bits_t       BGPO_POWER;    /**< Offset: 0x20 (R/W  32) BGPO Power Register */
  __IO  __WEEK_BGPO_RESET_bits_t       BGPO_RESET;    /**< Offset: 0x24 (R/W  32) BGPO Reset Register */
} week_registers_t;
/** @}  end of The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */

#endif /* _PIC32CX_0525SG12_WEEK_COMPONENT_H_ */
