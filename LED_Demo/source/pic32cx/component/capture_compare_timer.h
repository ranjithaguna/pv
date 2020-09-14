/**
 * \brief Component description for PIC32CX/0525SG12 CAPTURE_COMPARE_TIMER
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
#ifndef _PIC32CX_0525SG12_CAPTURE_COMPARE_TIMER_COMPONENT_H_
#define _PIC32CX_0525SG12_CAPTURE_COMPARE_TIMER_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_CAPTURE_COMPARE_TIMER This is a 16-bit auto-reloading timer/counter.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR CAPTURE_COMPARE_TIMER */
/* ========================================================================== */

/* -------- CAPTURE_COMPARE_TIMER_CONTROL : (CAPTURE_COMPARE_TIMER Offset: 0x00) (R/W 32) This register controls the capture and compare timer. -------- */

typedef union
{
  struct
  {
    uint32_t ACTIVATE:1;                /**< bit:      0  This bit is used to start the capture and compare timer running and power it down. */
    uint32_t FREE_ENABLE:1;             /**< bit:      1  Free-Running Timer Enable. This bit is used to start and stop the free running timer. */
    uint32_t FREE_RESET:1;              /**< bit:      2  Free Running Timer Reset. This bit stops the timer and resets the internal counter to 0000_0000h. */
    uint32_t :1;                        /**< bit:      3  Reserved                                      */
    uint32_t TCLK:3;                    /**< bit:   4..6  This 3-bit field sets the clock source for the Free-Running Counter. */
    uint32_t :1;                        /**< bit:      7  Reserved                                      */
    uint32_t COMPARE_ENABLE0:1;         /**< bit:      8  Compare Enable for Compare 0 Register.        */
    uint32_t COMPARE_ENABLE1:1;         /**< bit:      9  Compare Enable for Compare 1 Register.        */
    uint32_t :6;                        /**< bit: 10..15  Reserved                                      */
    uint32_t COMPARE_SET1:1;            /**< bit:     16  When read, returns the current value off the Compare Timer Output 1 state. */
    uint32_t COMPARE_SET0:1;            /**< bit:     17  When read, returns the current value off the Compare Timer Output 0 state. */
    uint32_t :6;                        /**< bit: 18..23  Reserved                                      */
    uint32_t COMPARE_CLEAR1:1;          /**< bit:     24  When read, returns the current value off the Compare Timer Output 1 state. */
    uint32_t COMPARE_CLEAR0:1;          /**< bit:     25  When read, returns the current value off the Compare Timer Output 0 state. */
    uint32_t :6;                        /**< bit: 26..31  Reserved                                      */
  };
  struct
  {
    uint32_t :8;                        /**< bit:   0..7  Reserved                                      */
    uint32_t COMPARE_ENABLE:2;          /**< bit:   8..9  Compare Enable for Compare x Register.        */
    uint32_t :6;                        /**< bit: 10..15  Reserved                                      */
    uint32_t COMPARE_SET:2;             /**< bit: 16..17  When read, returns the current value off the Compare Timer Output x state. */
    uint32_t :6;                        /**< bit: 18..23  Reserved                                      */
    uint32_t COMPARE_CLEAR:2;           /**< bit: 24..25  When read, returns the current value off the Compare Timer Output x state. */
    uint32_t :6;                        /**< bit: 26..31  Reserved                                      */
  };
  uint32_t w;
} __CAPTURE_COMPARE_TIMER_CONTROL_bits_t;
#define CAPTURE_COMPARE_TIMER_CONTROL_RESETVALUE (0x3030000U)                                  /**<  (CAPTURE_COMPARE_TIMER_CONTROL) This register controls the capture and compare timer.  Reset Value */

#define CAPTURE_COMPARE_TIMER_CONTROL_ACTIVATE_Pos (0)                                            /**< (CAPTURE_COMPARE_TIMER_CONTROL) This bit is used to start the capture and compare timer running and power it down. Position */
#define CAPTURE_COMPARE_TIMER_CONTROL_ACTIVATE_Msk (0x1U << CAPTURE_COMPARE_TIMER_CONTROL_ACTIVATE_Pos)  /**< (CAPTURE_COMPARE_TIMER_CONTROL) This bit is used to start the capture and compare timer running and power it down. Mask */
#define CAPTURE_COMPARE_TIMER_CONTROL_FREE_ENABLE_Pos (1)                                            /**< (CAPTURE_COMPARE_TIMER_CONTROL) Free-Running Timer Enable. This bit is used to start and stop the free running timer. Position */
#define CAPTURE_COMPARE_TIMER_CONTROL_FREE_ENABLE_Msk (0x1U << CAPTURE_COMPARE_TIMER_CONTROL_FREE_ENABLE_Pos)  /**< (CAPTURE_COMPARE_TIMER_CONTROL) Free-Running Timer Enable. This bit is used to start and stop the free running timer. Mask */
#define CAPTURE_COMPARE_TIMER_CONTROL_FREE_RESET_Pos (2)                                            /**< (CAPTURE_COMPARE_TIMER_CONTROL) Free Running Timer Reset. This bit stops the timer and resets the internal counter to 0000_0000h. Position */
#define CAPTURE_COMPARE_TIMER_CONTROL_FREE_RESET_Msk (0x1U << CAPTURE_COMPARE_TIMER_CONTROL_FREE_RESET_Pos)  /**< (CAPTURE_COMPARE_TIMER_CONTROL) Free Running Timer Reset. This bit stops the timer and resets the internal counter to 0000_0000h. Mask */
#define CAPTURE_COMPARE_TIMER_CONTROL_TCLK_Pos (4)                                            /**< (CAPTURE_COMPARE_TIMER_CONTROL) This 3-bit field sets the clock source for the Free-Running Counter. Position */
#define CAPTURE_COMPARE_TIMER_CONTROL_TCLK_Msk (0x7U << CAPTURE_COMPARE_TIMER_CONTROL_TCLK_Pos)  /**< (CAPTURE_COMPARE_TIMER_CONTROL) This 3-bit field sets the clock source for the Free-Running Counter. Mask */
#define CAPTURE_COMPARE_TIMER_CONTROL_TCLK(value) (CAPTURE_COMPARE_TIMER_CONTROL_TCLK_Msk & ((value) << CAPTURE_COMPARE_TIMER_CONTROL_TCLK_Pos))
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_ENABLE0_Pos (8)                                            /**< (CAPTURE_COMPARE_TIMER_CONTROL) Compare Enable for Compare 0 Register. Position */
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_ENABLE0_Msk (0x1U << CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_ENABLE0_Pos)  /**< (CAPTURE_COMPARE_TIMER_CONTROL) Compare Enable for Compare 0 Register. Mask */
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_ENABLE1_Pos (9)                                            /**< (CAPTURE_COMPARE_TIMER_CONTROL) Compare Enable for Compare 1 Register. Position */
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_ENABLE1_Msk (0x1U << CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_ENABLE1_Pos)  /**< (CAPTURE_COMPARE_TIMER_CONTROL) Compare Enable for Compare 1 Register. Mask */
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_SET1_Pos (16)                                           /**< (CAPTURE_COMPARE_TIMER_CONTROL) When read, returns the current value off the Compare Timer Output 1 state. Position */
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_SET1_Msk (0x1U << CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_SET1_Pos)  /**< (CAPTURE_COMPARE_TIMER_CONTROL) When read, returns the current value off the Compare Timer Output 1 state. Mask */
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_SET0_Pos (17)                                           /**< (CAPTURE_COMPARE_TIMER_CONTROL) When read, returns the current value off the Compare Timer Output 0 state. Position */
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_SET0_Msk (0x1U << CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_SET0_Pos)  /**< (CAPTURE_COMPARE_TIMER_CONTROL) When read, returns the current value off the Compare Timer Output 0 state. Mask */
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_CLEAR1_Pos (24)                                           /**< (CAPTURE_COMPARE_TIMER_CONTROL) When read, returns the current value off the Compare Timer Output 1 state. Position */
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_CLEAR1_Msk (0x1U << CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_CLEAR1_Pos)  /**< (CAPTURE_COMPARE_TIMER_CONTROL) When read, returns the current value off the Compare Timer Output 1 state. Mask */
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_CLEAR0_Pos (25)                                           /**< (CAPTURE_COMPARE_TIMER_CONTROL) When read, returns the current value off the Compare Timer Output 0 state. Position */
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_CLEAR0_Msk (0x1U << CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_CLEAR0_Pos)  /**< (CAPTURE_COMPARE_TIMER_CONTROL) When read, returns the current value off the Compare Timer Output 0 state. Mask */
#define CAPTURE_COMPARE_TIMER_CONTROL_Msk     (0x03030377UL)                                 /**< (CAPTURE_COMPARE_TIMER_CONTROL) Register Mask  */
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_ENABLE_Pos (8)                                            /**< (CAPTURE_COMPARE_TIMER_CONTROL Position) Compare Enable for Compare x Register. */
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_ENABLE_Msk (0x3U << CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_ENABLE_Pos)  /**< (CAPTURE_COMPARE_TIMER_CONTROL Mask) COMPARE_ENABLE */
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_ENABLE(value) (CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_ENABLE_Msk & ((value) << CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_ENABLE_Pos))
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_SET_Pos (16)                                           /**< (CAPTURE_COMPARE_TIMER_CONTROL Position) When read, returns the current value off the Compare Timer Output x state. */
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_SET_Msk (0x3U << CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_SET_Pos)  /**< (CAPTURE_COMPARE_TIMER_CONTROL Mask) COMPARE_SET */
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_SET(value) (CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_SET_Msk & ((value) << CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_SET_Pos))
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_CLEAR_Pos (24)                                           /**< (CAPTURE_COMPARE_TIMER_CONTROL Position) When read, returns the current value off the Compare Timer Output x state. */
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_CLEAR_Msk (0x3U << CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_CLEAR_Pos)  /**< (CAPTURE_COMPARE_TIMER_CONTROL Mask) COMPARE_CLEAR */
#define CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_CLEAR(value) (CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_CLEAR_Msk & ((value) << CAPTURE_COMPARE_TIMER_CONTROL_COMPARE_CLEAR_Pos))

/* -------- CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0 : (CAPTURE_COMPARE_TIMER Offset: 0x04) (R/W 32) This register is used to configure capture and compare timers 0-3. -------- */

typedef union
{
  struct
  {
    uint32_t CAPTURE_EDGE0:2;           /**< bit:   0..1  This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 0. */
    uint32_t FILTER_BYP0:1;             /**< bit:      2  This bit enables bypassing the input noise filter for Capture Register 0, so that the input signal goes directly into the timer. */
    uint32_t :2;                        /**< bit:   3..4  Reserved                                      */
    uint32_t FCLK_SEL0:3;               /**< bit:   5..7  This 3-bit field sets the clock source for the input filter for Capture Register 0. */
    uint32_t CAPTURE_EDGE1:2;           /**< bit:   8..9  This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 1. */
    uint32_t FILTER_BYP1:1;             /**< bit:     10  This bit enables bypassing the input noise filter for Capture Register 1, so that the input signal goes directly into the timer. */
    uint32_t :2;                        /**< bit: 11..12  Reserved                                      */
    uint32_t FCLK_SEL1:3;               /**< bit: 13..15  This 3-bit field sets the clock source for the input filter for Capture Register 1. */
    uint32_t CAPTURE_EDGE2:2;           /**< bit: 16..17  This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 2. */
    uint32_t FILTER_BYP2:1;             /**< bit:     18  This bit enables bypassing the input noise filter for Capture Register 2, so that the input signal goes directly into the timer. */
    uint32_t :2;                        /**< bit: 19..20  Reserved                                      */
    uint32_t FCLK_SEL2:3;               /**< bit: 21..23  This 3-bit field sets the clock source for the input filter for Capture Register 2. */
    uint32_t CAPTURE_EDGE3:2;           /**< bit: 24..25  This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 3. */
    uint32_t FILTER_BYP3:1;             /**< bit:     26  This bit enables bypassing the input noise filter for Capture Register 3, so that the input signal goes directly into the timer. */
    uint32_t :2;                        /**< bit: 27..28  Reserved                                      */
    uint32_t FCLK_SEL3:3;               /**< bit: 29..31  This 3-bit field sets the clock source for the input filter for Capture Register 3. */
  };
  uint32_t w;
} __CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_bits_t;
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_RESETVALUE (0x00U)                                       /**<  (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This register is used to configure capture and compare timers 0-3.  Reset Value */

#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE0_Pos (0)                                            /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 0. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE0_Msk (0x3U << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE0_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 0. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE0(value) (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE0_Msk & ((value) << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE0_Pos))
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FILTER_BYP0_Pos (2)                                            /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This bit enables bypassing the input noise filter for Capture Register 0, so that the input signal goes directly into the timer. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FILTER_BYP0_Msk (0x1U << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FILTER_BYP0_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This bit enables bypassing the input noise filter for Capture Register 0, so that the input signal goes directly into the timer. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL0_Pos (5)                                            /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This 3-bit field sets the clock source for the input filter for Capture Register 0. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL0_Msk (0x7U << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL0_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This 3-bit field sets the clock source for the input filter for Capture Register 0. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL0(value) (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL0_Msk & ((value) << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL0_Pos))
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE1_Pos (8)                                            /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 1. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE1_Msk (0x3U << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE1_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 1. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE1(value) (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE1_Msk & ((value) << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE1_Pos))
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FILTER_BYP1_Pos (10)                                           /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This bit enables bypassing the input noise filter for Capture Register 1, so that the input signal goes directly into the timer. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FILTER_BYP1_Msk (0x1U << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FILTER_BYP1_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This bit enables bypassing the input noise filter for Capture Register 1, so that the input signal goes directly into the timer. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL1_Pos (13)                                           /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This 3-bit field sets the clock source for the input filter for Capture Register 1. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL1_Msk (0x7U << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL1_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This 3-bit field sets the clock source for the input filter for Capture Register 1. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL1(value) (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL1_Msk & ((value) << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL1_Pos))
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE2_Pos (16)                                           /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 2. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE2_Msk (0x3U << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE2_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 2. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE2(value) (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE2_Msk & ((value) << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE2_Pos))
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FILTER_BYP2_Pos (18)                                           /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This bit enables bypassing the input noise filter for Capture Register 2, so that the input signal goes directly into the timer. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FILTER_BYP2_Msk (0x1U << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FILTER_BYP2_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This bit enables bypassing the input noise filter for Capture Register 2, so that the input signal goes directly into the timer. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL2_Pos (21)                                           /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This 3-bit field sets the clock source for the input filter for Capture Register 2. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL2_Msk (0x7U << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL2_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This 3-bit field sets the clock source for the input filter for Capture Register 2. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL2(value) (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL2_Msk & ((value) << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL2_Pos))
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE3_Pos (24)                                           /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 3. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE3_Msk (0x3U << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE3_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 3. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE3(value) (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE3_Msk & ((value) << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_CAPTURE_EDGE3_Pos))
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FILTER_BYP3_Pos (26)                                           /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This bit enables bypassing the input noise filter for Capture Register 3, so that the input signal goes directly into the timer. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FILTER_BYP3_Msk (0x1U << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FILTER_BYP3_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This bit enables bypassing the input noise filter for Capture Register 3, so that the input signal goes directly into the timer. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL3_Pos (29)                                           /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This 3-bit field sets the clock source for the input filter for Capture Register 3. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL3_Msk (0x7U << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL3_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This 3-bit field sets the clock source for the input filter for Capture Register 3. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL3(value) (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL3_Msk & ((value) << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_FCLK_SEL3_Pos))
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_Msk (0xE7E7E7E7UL)                                 /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) Register Mask  */

/* -------- CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1 : (CAPTURE_COMPARE_TIMER Offset: 0x08) (R/W 32) This register is used to configure capture and compare timers 4-5. -------- */

typedef union
{
  struct
  {
    uint32_t CAPTURE_EDGE4:2;           /**< bit:   0..1  This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 4. */
    uint32_t FILTER_BYP4:1;             /**< bit:      2  This bit enables bypassing the input noise filter for Capture Register 4, so that the input signal goes directly into the timer. */
    uint32_t :2;                        /**< bit:   3..4  Reserved                                      */
    uint32_t FCLK_SEL4:3;               /**< bit:   5..7  This 3-bit field sets the clock source for the input filter for Capture Register 4. */
    uint32_t CAPTURE_EDGE5:2;           /**< bit:   8..9  This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 5. */
    uint32_t FILTER_BYP5:1;             /**< bit:     10  This bit enables bypassing the input noise filter for Capture Register 5, so that the input signal goes directly into the timer. */
    uint32_t :2;                        /**< bit: 11..12  Reserved                                      */
    uint32_t FCLK_SEL5:3;               /**< bit: 13..15  This 3-bit field sets the clock source for the input filter for Capture Register 5. */
    uint32_t :16;                       /**< bit: 16..31  Reserved                                      */
  };
  uint32_t w;
} __CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_bits_t;
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_RESETVALUE (0x00U)                                       /**<  (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1) This register is used to configure capture and compare timers 4-5.  Reset Value */

#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_CAPTURE_EDGE4_Pos (0)                                            /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 4. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_CAPTURE_EDGE4_Msk (0x3U << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_CAPTURE_EDGE4_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 4. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_CAPTURE_EDGE4(value) (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_CAPTURE_EDGE4_Msk & ((value) << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_CAPTURE_EDGE4_Pos))
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_FILTER_BYP4_Pos (2)                                            /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1) This bit enables bypassing the input noise filter for Capture Register 4, so that the input signal goes directly into the timer. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_FILTER_BYP4_Msk (0x1U << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_FILTER_BYP4_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1) This bit enables bypassing the input noise filter for Capture Register 4, so that the input signal goes directly into the timer. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_FCLK_SEL4_Pos (5)                                            /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1) This 3-bit field sets the clock source for the input filter for Capture Register 4. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_FCLK_SEL4_Msk (0x7U << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_FCLK_SEL4_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1) This 3-bit field sets the clock source for the input filter for Capture Register 4. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_FCLK_SEL4(value) (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_FCLK_SEL4_Msk & ((value) << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_FCLK_SEL4_Pos))
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_CAPTURE_EDGE5_Pos (8)                                            /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 5. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_CAPTURE_EDGE5_Msk (0x3U << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_CAPTURE_EDGE5_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1) This field selects the edge type that triggers the capture of the Free Running Counter into Capture Register 5. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_CAPTURE_EDGE5(value) (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_CAPTURE_EDGE5_Msk & ((value) << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_CAPTURE_EDGE5_Pos))
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_FILTER_BYP5_Pos (10)                                           /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1) This bit enables bypassing the input noise filter for Capture Register 5, so that the input signal goes directly into the timer. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_FILTER_BYP5_Msk (0x1U << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_FILTER_BYP5_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1) This bit enables bypassing the input noise filter for Capture Register 5, so that the input signal goes directly into the timer. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_FCLK_SEL5_Pos (13)                                           /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1) This 3-bit field sets the clock source for the input filter for Capture Register 5. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_FCLK_SEL5_Msk (0x7U << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_FCLK_SEL5_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1) This 3-bit field sets the clock source for the input filter for Capture Register 5. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_FCLK_SEL5(value) (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_FCLK_SEL5_Msk & ((value) << CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_FCLK_SEL5_Pos))
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_Msk (0x0000E7E7UL)                                 /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1) Register Mask  */

/* -------- CAPTURE_COMPARE_TIMER_FREE_RUNNING_TIMER : (CAPTURE_COMPARE_TIMER Offset: 0x0c) (R/W 32) This register contains the current value of the Free Running Timer. -------- */

typedef union
{
  struct
  {
    uint32_t FREE_RUNNING_TIMER:32;     /**< bit:  0..31  This register contains the current value of the Free Running Timer. */
  };
  uint32_t w;
} __CAPTURE_COMPARE_TIMER_FREE_RUNNING_TIMER_bits_t;
#define CAPTURE_COMPARE_TIMER_FREE_RUNNING_TIMER_RESETVALUE (0x00U)                                       /**<  (CAPTURE_COMPARE_TIMER_FREE_RUNNING_TIMER) This register contains the current value of the Free Running Timer.  Reset Value */

#define CAPTURE_COMPARE_TIMER_FREE_RUNNING_TIMER_FREE_RUNNING_TIMER_Pos (0)                                            /**< (CAPTURE_COMPARE_TIMER_FREE_RUNNING_TIMER) This register contains the current value of the Free Running Timer. Position */
#define CAPTURE_COMPARE_TIMER_FREE_RUNNING_TIMER_FREE_RUNNING_TIMER_Msk (0xFFFFFFFFU << CAPTURE_COMPARE_TIMER_FREE_RUNNING_TIMER_FREE_RUNNING_TIMER_Pos)  /**< (CAPTURE_COMPARE_TIMER_FREE_RUNNING_TIMER) This register contains the current value of the Free Running Timer. Mask */
#define CAPTURE_COMPARE_TIMER_FREE_RUNNING_TIMER_FREE_RUNNING_TIMER(value) (CAPTURE_COMPARE_TIMER_FREE_RUNNING_TIMER_FREE_RUNNING_TIMER_Msk & ((value) << CAPTURE_COMPARE_TIMER_FREE_RUNNING_TIMER_FREE_RUNNING_TIMER_Pos))
#define CAPTURE_COMPARE_TIMER_FREE_RUNNING_TIMER_Msk (0xFFFFFFFFUL)                                 /**< (CAPTURE_COMPARE_TIMER_FREE_RUNNING_TIMER) Register Mask  */

/* -------- CAPTURE_COMPARE_TIMER_CAPTURE_0 : (CAPTURE_COMPARE_TIMER Offset: 0x10) (R/W 32) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. -------- */

typedef union
{
  struct
  {
    uint32_t CAPTURE_0:32;              /**< bit:  0..31  This register saves the value copied from the Free Running timer on a programmed edge of ICT0. */
  };
  uint32_t w;
} __CAPTURE_COMPARE_TIMER_CAPTURE_0_bits_t;
#define CAPTURE_COMPARE_TIMER_CAPTURE_0_RESETVALUE (0x00U)                                       /**<  (CAPTURE_COMPARE_TIMER_CAPTURE_0) This register saves the value copied from the Free Running timer on a programmed edge of ICT0.  Reset Value */

#define CAPTURE_COMPARE_TIMER_CAPTURE_0_CAPTURE_0_Pos (0)                                            /**< (CAPTURE_COMPARE_TIMER_CAPTURE_0) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_0_CAPTURE_0_Msk (0xFFFFFFFFU << CAPTURE_COMPARE_TIMER_CAPTURE_0_CAPTURE_0_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_0) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_0_CAPTURE_0(value) (CAPTURE_COMPARE_TIMER_CAPTURE_0_CAPTURE_0_Msk & ((value) << CAPTURE_COMPARE_TIMER_CAPTURE_0_CAPTURE_0_Pos))
#define CAPTURE_COMPARE_TIMER_CAPTURE_0_Msk   (0xFFFFFFFFUL)                                 /**< (CAPTURE_COMPARE_TIMER_CAPTURE_0) Register Mask  */

/* -------- CAPTURE_COMPARE_TIMER_CAPTURE_1 : (CAPTURE_COMPARE_TIMER Offset: 0x14) (R/W 32) This register saves the value copied from the Free Running timer on a programmed edge of ICT1. -------- */

typedef union
{
  struct
  {
    uint32_t CAPTURE_1:32;              /**< bit:  0..31  This register saves the value copied from the Free Running timer on a programmed edge of ICT1. */
  };
  uint32_t w;
} __CAPTURE_COMPARE_TIMER_CAPTURE_1_bits_t;
#define CAPTURE_COMPARE_TIMER_CAPTURE_1_RESETVALUE (0x00U)                                       /**<  (CAPTURE_COMPARE_TIMER_CAPTURE_1) This register saves the value copied from the Free Running timer on a programmed edge of ICT1.  Reset Value */

#define CAPTURE_COMPARE_TIMER_CAPTURE_1_CAPTURE_1_Pos (0)                                            /**< (CAPTURE_COMPARE_TIMER_CAPTURE_1) This register saves the value copied from the Free Running timer on a programmed edge of ICT1. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_1_CAPTURE_1_Msk (0xFFFFFFFFU << CAPTURE_COMPARE_TIMER_CAPTURE_1_CAPTURE_1_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_1) This register saves the value copied from the Free Running timer on a programmed edge of ICT1. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_1_CAPTURE_1(value) (CAPTURE_COMPARE_TIMER_CAPTURE_1_CAPTURE_1_Msk & ((value) << CAPTURE_COMPARE_TIMER_CAPTURE_1_CAPTURE_1_Pos))
#define CAPTURE_COMPARE_TIMER_CAPTURE_1_Msk   (0xFFFFFFFFUL)                                 /**< (CAPTURE_COMPARE_TIMER_CAPTURE_1) Register Mask  */

/* -------- CAPTURE_COMPARE_TIMER_CAPTURE_2 : (CAPTURE_COMPARE_TIMER Offset: 0x18) (R/W 32) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. -------- */

typedef union
{
  struct
  {
    uint32_t CAPTURE_2:32;              /**< bit:  0..31  This register saves the value copied from the Free Running timer on a programmed edge of ICT2. */
  };
  uint32_t w;
} __CAPTURE_COMPARE_TIMER_CAPTURE_2_bits_t;
#define CAPTURE_COMPARE_TIMER_CAPTURE_2_RESETVALUE (0x00U)                                       /**<  (CAPTURE_COMPARE_TIMER_CAPTURE_2) This register saves the value copied from the Free Running timer on a programmed edge of ICT0.  Reset Value */

#define CAPTURE_COMPARE_TIMER_CAPTURE_2_CAPTURE_2_Pos (0)                                            /**< (CAPTURE_COMPARE_TIMER_CAPTURE_2) This register saves the value copied from the Free Running timer on a programmed edge of ICT2. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_2_CAPTURE_2_Msk (0xFFFFFFFFU << CAPTURE_COMPARE_TIMER_CAPTURE_2_CAPTURE_2_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_2) This register saves the value copied from the Free Running timer on a programmed edge of ICT2. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_2_CAPTURE_2(value) (CAPTURE_COMPARE_TIMER_CAPTURE_2_CAPTURE_2_Msk & ((value) << CAPTURE_COMPARE_TIMER_CAPTURE_2_CAPTURE_2_Pos))
#define CAPTURE_COMPARE_TIMER_CAPTURE_2_Msk   (0xFFFFFFFFUL)                                 /**< (CAPTURE_COMPARE_TIMER_CAPTURE_2) Register Mask  */

/* -------- CAPTURE_COMPARE_TIMER_CAPTURE_3 : (CAPTURE_COMPARE_TIMER Offset: 0x1c) (R/W 32) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. -------- */

typedef union
{
  struct
  {
    uint32_t CAPTURE_3:32;              /**< bit:  0..31  This register saves the value copied from the Free Running timer on a programmed edge of ICT3. */
  };
  uint32_t w;
} __CAPTURE_COMPARE_TIMER_CAPTURE_3_bits_t;
#define CAPTURE_COMPARE_TIMER_CAPTURE_3_RESETVALUE (0x00U)                                       /**<  (CAPTURE_COMPARE_TIMER_CAPTURE_3) This register saves the value copied from the Free Running timer on a programmed edge of ICT0.  Reset Value */

#define CAPTURE_COMPARE_TIMER_CAPTURE_3_CAPTURE_3_Pos (0)                                            /**< (CAPTURE_COMPARE_TIMER_CAPTURE_3) This register saves the value copied from the Free Running timer on a programmed edge of ICT3. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_3_CAPTURE_3_Msk (0xFFFFFFFFU << CAPTURE_COMPARE_TIMER_CAPTURE_3_CAPTURE_3_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_3) This register saves the value copied from the Free Running timer on a programmed edge of ICT3. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_3_CAPTURE_3(value) (CAPTURE_COMPARE_TIMER_CAPTURE_3_CAPTURE_3_Msk & ((value) << CAPTURE_COMPARE_TIMER_CAPTURE_3_CAPTURE_3_Pos))
#define CAPTURE_COMPARE_TIMER_CAPTURE_3_Msk   (0xFFFFFFFFUL)                                 /**< (CAPTURE_COMPARE_TIMER_CAPTURE_3) Register Mask  */

/* -------- CAPTURE_COMPARE_TIMER_CAPTURE_4 : (CAPTURE_COMPARE_TIMER Offset: 0x20) (R/W 32) This register saves the value copied from the Free Running timer on a programmed edge of ICT4. -------- */

typedef union
{
  struct
  {
    uint32_t CAPTURE_4:32;              /**< bit:  0..31  This register saves the value copied from the Free Running timer on a programmed edge of ICT4. */
  };
  uint32_t w;
} __CAPTURE_COMPARE_TIMER_CAPTURE_4_bits_t;
#define CAPTURE_COMPARE_TIMER_CAPTURE_4_RESETVALUE (0x00U)                                       /**<  (CAPTURE_COMPARE_TIMER_CAPTURE_4) This register saves the value copied from the Free Running timer on a programmed edge of ICT4.  Reset Value */

#define CAPTURE_COMPARE_TIMER_CAPTURE_4_CAPTURE_4_Pos (0)                                            /**< (CAPTURE_COMPARE_TIMER_CAPTURE_4) This register saves the value copied from the Free Running timer on a programmed edge of ICT4. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_4_CAPTURE_4_Msk (0xFFFFFFFFU << CAPTURE_COMPARE_TIMER_CAPTURE_4_CAPTURE_4_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_4) This register saves the value copied from the Free Running timer on a programmed edge of ICT4. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_4_CAPTURE_4(value) (CAPTURE_COMPARE_TIMER_CAPTURE_4_CAPTURE_4_Msk & ((value) << CAPTURE_COMPARE_TIMER_CAPTURE_4_CAPTURE_4_Pos))
#define CAPTURE_COMPARE_TIMER_CAPTURE_4_Msk   (0xFFFFFFFFUL)                                 /**< (CAPTURE_COMPARE_TIMER_CAPTURE_4) Register Mask  */

/* -------- CAPTURE_COMPARE_TIMER_CAPTURE_5 : (CAPTURE_COMPARE_TIMER Offset: 0x24) (R/W 32) This register saves the value copied from the Free Running timer on a programmed edge of ICT5. -------- */

typedef union
{
  struct
  {
    uint32_t CAPTURE_5:32;              /**< bit:  0..31  This register saves the value copied from the Free Running timer on a programmed edge of ICT5. */
  };
  uint32_t w;
} __CAPTURE_COMPARE_TIMER_CAPTURE_5_bits_t;
#define CAPTURE_COMPARE_TIMER_CAPTURE_5_RESETVALUE (0x00U)                                       /**<  (CAPTURE_COMPARE_TIMER_CAPTURE_5) This register saves the value copied from the Free Running timer on a programmed edge of ICT5.  Reset Value */

#define CAPTURE_COMPARE_TIMER_CAPTURE_5_CAPTURE_5_Pos (0)                                            /**< (CAPTURE_COMPARE_TIMER_CAPTURE_5) This register saves the value copied from the Free Running timer on a programmed edge of ICT5. Position */
#define CAPTURE_COMPARE_TIMER_CAPTURE_5_CAPTURE_5_Msk (0xFFFFFFFFU << CAPTURE_COMPARE_TIMER_CAPTURE_5_CAPTURE_5_Pos)  /**< (CAPTURE_COMPARE_TIMER_CAPTURE_5) This register saves the value copied from the Free Running timer on a programmed edge of ICT5. Mask */
#define CAPTURE_COMPARE_TIMER_CAPTURE_5_CAPTURE_5(value) (CAPTURE_COMPARE_TIMER_CAPTURE_5_CAPTURE_5_Msk & ((value) << CAPTURE_COMPARE_TIMER_CAPTURE_5_CAPTURE_5_Pos))
#define CAPTURE_COMPARE_TIMER_CAPTURE_5_Msk   (0xFFFFFFFFUL)                                 /**< (CAPTURE_COMPARE_TIMER_CAPTURE_5) Register Mask  */

/* -------- CAPTURE_COMPARE_TIMER_COMPARE_0 : (CAPTURE_COMPARE_TIMER Offset: 0x28) (R/W 32) A COMPARE 0 interrupt is generated when this register matches the value in the Free Running Timer. -------- */

typedef union
{
  struct
  {
    uint32_t COMPARE_0:32;              /**< bit:  0..31  A COMPARE 0 interrupt is generated when this register matches the value in the Free Running Timer. */
  };
  uint32_t w;
} __CAPTURE_COMPARE_TIMER_COMPARE_0_bits_t;
#define CAPTURE_COMPARE_TIMER_COMPARE_0_RESETVALUE (0x00U)                                       /**<  (CAPTURE_COMPARE_TIMER_COMPARE_0) A COMPARE 0 interrupt is generated when this register matches the value in the Free Running Timer.  Reset Value */

#define CAPTURE_COMPARE_TIMER_COMPARE_0_COMPARE_0_Pos (0)                                            /**< (CAPTURE_COMPARE_TIMER_COMPARE_0) A COMPARE 0 interrupt is generated when this register matches the value in the Free Running Timer. Position */
#define CAPTURE_COMPARE_TIMER_COMPARE_0_COMPARE_0_Msk (0xFFFFFFFFU << CAPTURE_COMPARE_TIMER_COMPARE_0_COMPARE_0_Pos)  /**< (CAPTURE_COMPARE_TIMER_COMPARE_0) A COMPARE 0 interrupt is generated when this register matches the value in the Free Running Timer. Mask */
#define CAPTURE_COMPARE_TIMER_COMPARE_0_COMPARE_0(value) (CAPTURE_COMPARE_TIMER_COMPARE_0_COMPARE_0_Msk & ((value) << CAPTURE_COMPARE_TIMER_COMPARE_0_COMPARE_0_Pos))
#define CAPTURE_COMPARE_TIMER_COMPARE_0_Msk   (0xFFFFFFFFUL)                                 /**< (CAPTURE_COMPARE_TIMER_COMPARE_0) Register Mask  */

/* -------- CAPTURE_COMPARE_TIMER_COMPARE_1 : (CAPTURE_COMPARE_TIMER Offset: 0x2c) (R/W 32) A COMPARE 1 interrupt is generated when this register matches the value in the Free Running Timer. -------- */

typedef union
{
  struct
  {
    uint32_t COMPARE_1:32;              /**< bit:  0..31  A COMPARE 1 interrupt is generated when this register matches the value in the Free Running Timer. */
  };
  uint32_t w;
} __CAPTURE_COMPARE_TIMER_COMPARE_1_bits_t;
#define CAPTURE_COMPARE_TIMER_COMPARE_1_RESETVALUE (0x00U)                                       /**<  (CAPTURE_COMPARE_TIMER_COMPARE_1) A COMPARE 1 interrupt is generated when this register matches the value in the Free Running Timer.  Reset Value */

#define CAPTURE_COMPARE_TIMER_COMPARE_1_COMPARE_1_Pos (0)                                            /**< (CAPTURE_COMPARE_TIMER_COMPARE_1) A COMPARE 1 interrupt is generated when this register matches the value in the Free Running Timer. Position */
#define CAPTURE_COMPARE_TIMER_COMPARE_1_COMPARE_1_Msk (0xFFFFFFFFU << CAPTURE_COMPARE_TIMER_COMPARE_1_COMPARE_1_Pos)  /**< (CAPTURE_COMPARE_TIMER_COMPARE_1) A COMPARE 1 interrupt is generated when this register matches the value in the Free Running Timer. Mask */
#define CAPTURE_COMPARE_TIMER_COMPARE_1_COMPARE_1(value) (CAPTURE_COMPARE_TIMER_COMPARE_1_COMPARE_1_Msk & ((value) << CAPTURE_COMPARE_TIMER_COMPARE_1_COMPARE_1_Pos))
#define CAPTURE_COMPARE_TIMER_COMPARE_1_Msk   (0xFFFFFFFFUL)                                 /**< (CAPTURE_COMPARE_TIMER_COMPARE_1) Register Mask  */

/* -------- CAPTURE_COMPARE_TIMER_ICT_MUX_SEL : (CAPTURE_COMPARE_TIMER Offset: 0x30) (R/W 32) This register selects the pin mapping to the capture register. -------- */

typedef union
{
  struct
  {
    uint32_t MUX_SEL_CAP0:4;            /**< bit:   0..3  Mux Select for Capture 0 register.            */
    uint32_t MUX_SEL_CAP1:4;            /**< bit:   4..7  Mux Select for Capture 1 register.            */
    uint32_t MUX_SEL_CAP2:4;            /**< bit:  8..11  Mux Select for Capture 2 register.            */
    uint32_t MUX_SEL_CAP3:4;            /**< bit: 12..15  Mux Select for Capture 3 register.            */
    uint32_t MUX_SEL_CAP4:4;            /**< bit: 16..19  Mux Select for Capture 4 register.            */
    uint32_t MUX_SEL_CAP5:4;            /**< bit: 20..23  Mux Select for Capture 5 register.            */
    uint32_t :8;                        /**< bit: 24..31  Reserved                                      */
  };
  uint32_t w;
} __CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_bits_t;
#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_RESETVALUE (0x543210U)                                   /**<  (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL) This register selects the pin mapping to the capture register.  Reset Value */

#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP0_Pos (0)                                            /**< (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL) Mux Select for Capture 0 register. Position */
#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP0_Msk (0xFU << CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP0_Pos)  /**< (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL) Mux Select for Capture 0 register. Mask */
#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP0(value) (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP0_Msk & ((value) << CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP0_Pos))
#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP1_Pos (4)                                            /**< (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL) Mux Select for Capture 1 register. Position */
#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP1_Msk (0xFU << CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP1_Pos)  /**< (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL) Mux Select for Capture 1 register. Mask */
#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP1(value) (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP1_Msk & ((value) << CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP1_Pos))
#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP2_Pos (8)                                            /**< (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL) Mux Select for Capture 2 register. Position */
#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP2_Msk (0xFU << CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP2_Pos)  /**< (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL) Mux Select for Capture 2 register. Mask */
#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP2(value) (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP2_Msk & ((value) << CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP2_Pos))
#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP3_Pos (12)                                           /**< (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL) Mux Select for Capture 3 register. Position */
#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP3_Msk (0xFU << CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP3_Pos)  /**< (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL) Mux Select for Capture 3 register. Mask */
#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP3(value) (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP3_Msk & ((value) << CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP3_Pos))
#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP4_Pos (16)                                           /**< (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL) Mux Select for Capture 4 register. Position */
#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP4_Msk (0xFU << CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP4_Pos)  /**< (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL) Mux Select for Capture 4 register. Mask */
#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP4(value) (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP4_Msk & ((value) << CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP4_Pos))
#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP5_Pos (20)                                           /**< (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL) Mux Select for Capture 5 register. Position */
#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP5_Msk (0xFU << CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP5_Pos)  /**< (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL) Mux Select for Capture 5 register. Mask */
#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP5(value) (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP5_Msk & ((value) << CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_MUX_SEL_CAP5_Pos))
#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_Msk (0x00FFFFFFUL)                                 /**< (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL) Register Mask  */

/** \brief CAPTURE_COMPARE_TIMER register offsets definitions */
#define CAPTURE_COMPARE_TIMER_CONTROL_OFFSET (0x00)         /**< (CAPTURE_COMPARE_TIMER_CONTROL) This register controls the capture and compare timer. Offset */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_OFFSET (0x04)         /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0) This register is used to configure capture and compare timers 0-3. Offset */
#define CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_OFFSET (0x08)         /**< (CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1) This register is used to configure capture and compare timers 4-5. Offset */
#define CAPTURE_COMPARE_TIMER_FREE_RUNNING_TIMER_OFFSET (0x0C)         /**< (CAPTURE_COMPARE_TIMER_FREE_RUNNING_TIMER) This register contains the current value of the Free Running Timer. Offset */
#define CAPTURE_COMPARE_TIMER_CAPTURE_0_OFFSET (0x10)         /**< (CAPTURE_COMPARE_TIMER_CAPTURE_0) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. Offset */
#define CAPTURE_COMPARE_TIMER_CAPTURE_1_OFFSET (0x14)         /**< (CAPTURE_COMPARE_TIMER_CAPTURE_1) This register saves the value copied from the Free Running timer on a programmed edge of ICT1. Offset */
#define CAPTURE_COMPARE_TIMER_CAPTURE_2_OFFSET (0x18)         /**< (CAPTURE_COMPARE_TIMER_CAPTURE_2) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. Offset */
#define CAPTURE_COMPARE_TIMER_CAPTURE_3_OFFSET (0x1C)         /**< (CAPTURE_COMPARE_TIMER_CAPTURE_3) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. Offset */
#define CAPTURE_COMPARE_TIMER_CAPTURE_4_OFFSET (0x20)         /**< (CAPTURE_COMPARE_TIMER_CAPTURE_4) This register saves the value copied from the Free Running timer on a programmed edge of ICT4. Offset */
#define CAPTURE_COMPARE_TIMER_CAPTURE_5_OFFSET (0x24)         /**< (CAPTURE_COMPARE_TIMER_CAPTURE_5) This register saves the value copied from the Free Running timer on a programmed edge of ICT5. Offset */
#define CAPTURE_COMPARE_TIMER_COMPARE_0_OFFSET (0x28)         /**< (CAPTURE_COMPARE_TIMER_COMPARE_0) A COMPARE 0 interrupt is generated when this register matches the value in the Free Running Timer. Offset */
#define CAPTURE_COMPARE_TIMER_COMPARE_1_OFFSET (0x2C)         /**< (CAPTURE_COMPARE_TIMER_COMPARE_1) A COMPARE 1 interrupt is generated when this register matches the value in the Free Running Timer. Offset */
#define CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_OFFSET (0x30)         /**< (CAPTURE_COMPARE_TIMER_ICT_MUX_SEL) This register selects the pin mapping to the capture register. Offset */

/** \brief CAPTURE_COMPARE_TIMER register API structure */
typedef struct
{  /* This is a 16-bit auto-reloading timer/counter. */
  __IO  __CAPTURE_COMPARE_TIMER_CONTROL_bits_t CAPTURE_COMPARE_TIMER_CONTROL; /**< Offset: 0x00 (R/W  32) This register controls the capture and compare timer. */
  __IO  __CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_0_bits_t CAPTURE_CONTROL_0; /**< Offset: 0x04 (R/W  32) This register is used to configure capture and compare timers 0-3. */
  __IO  __CAPTURE_COMPARE_TIMER_CAPTURE_CONTROL_1_bits_t CAPTURE_CONTROL_1; /**< Offset: 0x08 (R/W  32) This register is used to configure capture and compare timers 4-5. */
  __IO  __CAPTURE_COMPARE_TIMER_FREE_RUNNING_TIMER_bits_t FREE_RUNNING_TIMER; /**< Offset: 0x0C (R/W  32) This register contains the current value of the Free Running Timer. */
  __IO  __CAPTURE_COMPARE_TIMER_CAPTURE_0_bits_t CAPTURE_0;     /**< Offset: 0x10 (R/W  32) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. */
  __IO  __CAPTURE_COMPARE_TIMER_CAPTURE_1_bits_t CAPTURE_1;     /**< Offset: 0x14 (R/W  32) This register saves the value copied from the Free Running timer on a programmed edge of ICT1. */
  __IO  __CAPTURE_COMPARE_TIMER_CAPTURE_2_bits_t CAPTURE_2;     /**< Offset: 0x18 (R/W  32) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. */
  __IO  __CAPTURE_COMPARE_TIMER_CAPTURE_3_bits_t CAPTURE_3;     /**< Offset: 0x1C (R/W  32) This register saves the value copied from the Free Running timer on a programmed edge of ICT0. */
  __IO  __CAPTURE_COMPARE_TIMER_CAPTURE_4_bits_t CAPTURE_4;     /**< Offset: 0x20 (R/W  32) This register saves the value copied from the Free Running timer on a programmed edge of ICT4. */
  __IO  __CAPTURE_COMPARE_TIMER_CAPTURE_5_bits_t CAPTURE_5;     /**< Offset: 0x24 (R/W  32) This register saves the value copied from the Free Running timer on a programmed edge of ICT5. */
  __IO  __CAPTURE_COMPARE_TIMER_COMPARE_0_bits_t COMPARE_0;     /**< Offset: 0x28 (R/W  32) A COMPARE 0 interrupt is generated when this register matches the value in the Free Running Timer. */
  __IO  __CAPTURE_COMPARE_TIMER_COMPARE_1_bits_t COMPARE_1;     /**< Offset: 0x2C (R/W  32) A COMPARE 1 interrupt is generated when this register matches the value in the Free Running Timer. */
  __IO  __CAPTURE_COMPARE_TIMER_ICT_MUX_SEL_bits_t ICT_MUX_SEL;   /**< Offset: 0x30 (R/W  32) This register selects the pin mapping to the capture register. */
} capturecomparetimer_registers_t;
/** @}  end of This is a 16-bit auto-reloading timer/counter. */

#endif /* _PIC32CX_0525SG12_CAPTURE_COMPARE_TIMER_COMPONENT_H_ */
