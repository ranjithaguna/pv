/**
 * \brief Component description for PIC32CX/0525SG12 LED
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
#ifndef _PIC32CX_0525SG12_LED_COMPONENT_H_
#define _PIC32CX_0525SG12_LED_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_LED The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n        clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n        PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR LED */
/* ========================================================================== */

/* -------- LED_CONFIG : (LED Offset: 0x00) (R/W 32) LED Configuration -------- */

typedef union
{
  struct
  {
    uint32_t CONTROL:2;                 /**< bit:   0..1  CONTROL 3=PWM is always on\n                  2=LED blinking (standard PWM)\n                  1=LED breathing configuration\n                  0=PWM is always off. All internal registers and counters are reset to 0. Clocks are gated */
    uint32_t CLOCK_SOURCE:1;            /**< bit:      2  1=Clock source is the 48 MHz clock, 0=Clock source is the 32.768 KHz clock */
    uint32_t SYNCHRONIZE:1;             /**< bit:      3  SYNCHRONIZE  When this bit is '1', all counters for all LEDs are reset to their initial values. When this bit is '0' in the LED Configuration Register for all LEDs, then all counters for LEDs that are configured to blink or breathe will increment or decrement, as required. */
    uint32_t PWM_SIZE:2;                /**< bit:   4..5  PWM_SIZE This bit controls the behavior of PWM:\n                  3=Reserved\n                  2=PWM is configured as a 6-bit PWM\n                  1=PWM is configured as a 7-bit PWM\n                  0=PWM is configured as an 8-bit PWM */
    uint32_t ENABLE_UPDATE:1;           /**< bit:      6  ENABLE_UPDATE  This bit is set to 1 when written with a '1'. Writes of '0' have no effect. Hardware clears this bit to 0 when the breathing configuration registers are updated at the end of a PWM period. The current state of the bit is readable any time. */
    uint32_t RESET:1;                   /**< bit:      7  RESET  Writes of '1' to this bit resets the PWM registers to their default values. This bit is self clearing. Writes of '0' to this bit have no effect. */
    uint32_t WDT_RELOAD:8;              /**< bit:  8..15  WDT_RELOAD  The PWM Watchdog Timer counter reload value. On system reset, it defaults to 14h, which corresponds to a 4 second Watchdog timeout value. */
    uint32_t SYMMETRY:1;                /**< bit:     16  SYMMETRY  1=The rising and falling ramp times are in Asymmetric mode.\n                  0=The rising and falling ramp times are in Symmetric mode. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __LED_CONFIG_bits_t;
#define LED_CONFIG_RESETVALUE               (0x00U)                                       /**<  (LED_CONFIG) LED Configuration  Reset Value */

#define LED_CONFIG_CONTROL_Pos                (0)                                            /**< (LED_CONFIG) CONTROL 3=PWM is always on\n                  2=LED blinking (standard PWM)\n                  1=LED breathing configuration\n                  0=PWM is always off. All internal registers and counters are reset to 0. Clocks are gated Position */
#define LED_CONFIG_CONTROL_Msk                (0x3U << LED_CONFIG_CONTROL_Pos)               /**< (LED_CONFIG) CONTROL 3=PWM is always on\n                  2=LED blinking (standard PWM)\n                  1=LED breathing configuration\n                  0=PWM is always off. All internal registers and counters are reset to 0. Clocks are gated Mask */
#define LED_CONFIG_CONTROL(value)             (LED_CONFIG_CONTROL_Msk & ((value) << LED_CONFIG_CONTROL_Pos))
#define LED_CONFIG_CLOCK_SOURCE_Pos           (2)                                            /**< (LED_CONFIG) 1=Clock source is the 48 MHz clock, 0=Clock source is the 32.768 KHz clock Position */
#define LED_CONFIG_CLOCK_SOURCE_Msk           (0x1U << LED_CONFIG_CLOCK_SOURCE_Pos)          /**< (LED_CONFIG) 1=Clock source is the 48 MHz clock, 0=Clock source is the 32.768 KHz clock Mask */
#define LED_CONFIG_SYNCHRONIZE_Pos            (3)                                            /**< (LED_CONFIG) SYNCHRONIZE  When this bit is '1', all counters for all LEDs are reset to their initial values. When this bit is '0' in the LED Configuration Register for all LEDs, then all counters for LEDs that are configured to blink or breathe will increment or decrement, as required. Position */
#define LED_CONFIG_SYNCHRONIZE_Msk            (0x1U << LED_CONFIG_SYNCHRONIZE_Pos)           /**< (LED_CONFIG) SYNCHRONIZE  When this bit is '1', all counters for all LEDs are reset to their initial values. When this bit is '0' in the LED Configuration Register for all LEDs, then all counters for LEDs that are configured to blink or breathe will increment or decrement, as required. Mask */
#define LED_CONFIG_PWM_SIZE_Pos               (4)                                            /**< (LED_CONFIG) PWM_SIZE This bit controls the behavior of PWM:\n                  3=Reserved\n                  2=PWM is configured as a 6-bit PWM\n                  1=PWM is configured as a 7-bit PWM\n                  0=PWM is configured as an 8-bit PWM Position */
#define LED_CONFIG_PWM_SIZE_Msk               (0x3U << LED_CONFIG_PWM_SIZE_Pos)              /**< (LED_CONFIG) PWM_SIZE This bit controls the behavior of PWM:\n                  3=Reserved\n                  2=PWM is configured as a 6-bit PWM\n                  1=PWM is configured as a 7-bit PWM\n                  0=PWM is configured as an 8-bit PWM Mask */
#define LED_CONFIG_PWM_SIZE(value)            (LED_CONFIG_PWM_SIZE_Msk & ((value) << LED_CONFIG_PWM_SIZE_Pos))
#define LED_CONFIG_ENABLE_UPDATE_Pos          (6)                                            /**< (LED_CONFIG) ENABLE_UPDATE  This bit is set to 1 when written with a '1'. Writes of '0' have no effect. Hardware clears this bit to 0 when the breathing configuration registers are updated at the end of a PWM period. The current state of the bit is readable any time. Position */
#define LED_CONFIG_ENABLE_UPDATE_Msk          (0x1U << LED_CONFIG_ENABLE_UPDATE_Pos)         /**< (LED_CONFIG) ENABLE_UPDATE  This bit is set to 1 when written with a '1'. Writes of '0' have no effect. Hardware clears this bit to 0 when the breathing configuration registers are updated at the end of a PWM period. The current state of the bit is readable any time. Mask */
#define LED_CONFIG_RESET_Pos                  (7)                                            /**< (LED_CONFIG) RESET  Writes of '1' to this bit resets the PWM registers to their default values. This bit is self clearing. Writes of '0' to this bit have no effect. Position */
#define LED_CONFIG_RESET_Msk                  (0x1U << LED_CONFIG_RESET_Pos)                 /**< (LED_CONFIG) RESET  Writes of '1' to this bit resets the PWM registers to their default values. This bit is self clearing. Writes of '0' to this bit have no effect. Mask */
#define LED_CONFIG_WDT_RELOAD_Pos             (8)                                            /**< (LED_CONFIG) WDT_RELOAD  The PWM Watchdog Timer counter reload value. On system reset, it defaults to 14h, which corresponds to a 4 second Watchdog timeout value. Position */
#define LED_CONFIG_WDT_RELOAD_Msk             (0xFFU << LED_CONFIG_WDT_RELOAD_Pos)           /**< (LED_CONFIG) WDT_RELOAD  The PWM Watchdog Timer counter reload value. On system reset, it defaults to 14h, which corresponds to a 4 second Watchdog timeout value. Mask */
#define LED_CONFIG_WDT_RELOAD(value)          (LED_CONFIG_WDT_RELOAD_Msk & ((value) << LED_CONFIG_WDT_RELOAD_Pos))
#define LED_CONFIG_SYMMETRY_Pos               (16)                                           /**< (LED_CONFIG) SYMMETRY  1=The rising and falling ramp times are in Asymmetric mode.\n                  0=The rising and falling ramp times are in Symmetric mode. Position */
#define LED_CONFIG_SYMMETRY_Msk               (0x1U << LED_CONFIG_SYMMETRY_Pos)              /**< (LED_CONFIG) SYMMETRY  1=The rising and falling ramp times are in Asymmetric mode.\n                  0=The rising and falling ramp times are in Symmetric mode. Mask */
#define LED_CONFIG_Msk                        (0x0001FFFFUL)                                 /**< (LED_CONFIG) Register Mask  */

/* -------- LED_LIMITS : (LED Offset: 0x04) (R/W 32) LED Limits This register may be written at any time. Values written into the register are held in an holding register, which is transferred into the actual register at the end of a PWM period. The two byte fields may be written independently. Reads of this register return the current contents and not the value of the holding register. -------- */

typedef union
{
  struct
  {
    uint32_t MINIMUM:8;                 /**< bit:   0..7  In breathing mode, when the current duty cycle is less than or equal to this value the breathing apparatus holds the current duty cycle for the period specified by the field LD in register LED_DELAY, then starts incrementing the current duty cycle In blinking mode, this field defines the duty cycle of the blink function. */
    uint32_t MAXIMUM:8;                 /**< bit:  8..15  In breathing mode, when the current duty cycle is greater than or equal to this value the breathing apparatus holds the current duty cycle for the period specified by the field HD in register LED_DELAY, then starts decrementing the current duty cycle */
    uint32_t :16;                       /**< bit: 16..31  Reserved                                      */
  };
  uint32_t w;
} __LED_LIMITS_bits_t;
#define LED_LIMITS_RESETVALUE               (0x00U)                                       /**<  (LED_LIMITS) LED Limits This register may be written at any time. Values written into the register are held in an holding register, which is transferred into the actual register at the end of a PWM period. The two byte fields may be written independently. Reads of this register return the current contents and not the value of the holding register.  Reset Value */

#define LED_LIMITS_MINIMUM_Pos                (0)                                            /**< (LED_LIMITS) In breathing mode, when the current duty cycle is less than or equal to this value the breathing apparatus holds the current duty cycle for the period specified by the field LD in register LED_DELAY, then starts incrementing the current duty cycle In blinking mode, this field defines the duty cycle of the blink function. Position */
#define LED_LIMITS_MINIMUM_Msk                (0xFFU << LED_LIMITS_MINIMUM_Pos)              /**< (LED_LIMITS) In breathing mode, when the current duty cycle is less than or equal to this value the breathing apparatus holds the current duty cycle for the period specified by the field LD in register LED_DELAY, then starts incrementing the current duty cycle In blinking mode, this field defines the duty cycle of the blink function. Mask */
#define LED_LIMITS_MINIMUM(value)             (LED_LIMITS_MINIMUM_Msk & ((value) << LED_LIMITS_MINIMUM_Pos))
#define LED_LIMITS_MAXIMUM_Pos                (8)                                            /**< (LED_LIMITS) In breathing mode, when the current duty cycle is greater than or equal to this value the breathing apparatus holds the current duty cycle for the period specified by the field HD in register LED_DELAY, then starts decrementing the current duty cycle Position */
#define LED_LIMITS_MAXIMUM_Msk                (0xFFU << LED_LIMITS_MAXIMUM_Pos)              /**< (LED_LIMITS) In breathing mode, when the current duty cycle is greater than or equal to this value the breathing apparatus holds the current duty cycle for the period specified by the field HD in register LED_DELAY, then starts decrementing the current duty cycle Mask */
#define LED_LIMITS_MAXIMUM(value)             (LED_LIMITS_MAXIMUM_Msk & ((value) << LED_LIMITS_MAXIMUM_Pos))
#define LED_LIMITS_Msk                        (0x0000FFFFUL)                                 /**< (LED_LIMITS) Register Mask  */

/* -------- LED_DELAY : (LED Offset: 0x08) (R/W 32) LED Delay -------- */

typedef union
{
  struct
  {
    uint32_t LOW_PULSE:12;              /**< bit:  0..11  The number of PWM periods to wait before updating the current duty cycle when the current duty cycle is greater than or equal to the value MIN in register LED_LIMIT. */
    uint32_t HIGH_PULSE:12;             /**< bit: 12..23  In breathing mode, the number of PWM periods to wait before updating the current duty cycle when the current duty cycle is greater than or equal to the value MAX in register LED_LIMIT. */
    uint32_t :8;                        /**< bit: 24..31  Reserved                                      */
  };
  uint32_t w;
} __LED_DELAY_bits_t;
#define LED_DELAY_RESETVALUE                (0x00U)                                       /**<  (LED_DELAY) LED Delay  Reset Value */

#define LED_DELAY_LOW_PULSE_Pos               (0)                                            /**< (LED_DELAY) The number of PWM periods to wait before updating the current duty cycle when the current duty cycle is greater than or equal to the value MIN in register LED_LIMIT. Position */
#define LED_DELAY_LOW_PULSE_Msk               (0xFFFU << LED_DELAY_LOW_PULSE_Pos)            /**< (LED_DELAY) The number of PWM periods to wait before updating the current duty cycle when the current duty cycle is greater than or equal to the value MIN in register LED_LIMIT. Mask */
#define LED_DELAY_LOW_PULSE(value)            (LED_DELAY_LOW_PULSE_Msk & ((value) << LED_DELAY_LOW_PULSE_Pos))
#define LED_DELAY_HIGH_PULSE_Pos              (12)                                           /**< (LED_DELAY) In breathing mode, the number of PWM periods to wait before updating the current duty cycle when the current duty cycle is greater than or equal to the value MAX in register LED_LIMIT. Position */
#define LED_DELAY_HIGH_PULSE_Msk              (0xFFFU << LED_DELAY_HIGH_PULSE_Pos)           /**< (LED_DELAY) In breathing mode, the number of PWM periods to wait before updating the current duty cycle when the current duty cycle is greater than or equal to the value MAX in register LED_LIMIT. Mask */
#define LED_DELAY_HIGH_PULSE(value)           (LED_DELAY_HIGH_PULSE_Msk & ((value) << LED_DELAY_HIGH_PULSE_Pos))
#define LED_DELAY_Msk                         (0x00FFFFFFUL)                                 /**< (LED_DELAY) Register Mask  */

/* -------- LED_UPDATE_STEPSIZE : (LED Offset: 0x0c) (R/W 32) This register has eight segment fields which provide the amount the current duty cycle is adjusted at the end of every PWM period. Segment field selection is decoded based on the segment index. The segment index equation utilized depends on the SYMMETRY bit in the LED Configuration Register Register)              . In Symmetric Mode the Segment_Index[2:0] = Duty Cycle Bits[7:5]\n              . In Asymmetric Mode the Segment_Index[2:0] is the bit concatenation of following: Segment_Index[2] = (FALLING RAMP TIME in Figure 30-3, Clipping Example) and Segment_Index[1:0] = Duty Cycle Bits[7:6]. -------- */

typedef union
{
  struct
  {
    uint32_t STEP0:4;                   /**< bit:   0..3  Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 000. */
    uint32_t STEP1:4;                   /**< bit:   4..7  Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 001. */
    uint32_t STEP2:4;                   /**< bit:  8..11  Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 010. */
    uint32_t STEP3:4;                   /**< bit: 12..15  Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 011. */
    uint32_t STEP4:4;                   /**< bit: 16..19  Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 100. */
    uint32_t STEP5:4;                   /**< bit: 20..23  Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 101 */
    uint32_t STEP6:4;                   /**< bit: 24..27  Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 110. */
    uint32_t STEP7:4;                   /**< bit: 28..31  Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 111. */
  };
  uint32_t w;
} __LED_UPDATE_STEPSIZE_bits_t;
#define LED_UPDATE_STEPSIZE_RESETVALUE      (0x00U)                                       /**<  (LED_UPDATE_STEPSIZE) This register has eight segment fields which provide the amount the current duty cycle is adjusted at the end of every PWM period. Segment field selection is decoded based on the segment index. The segment index equation utilized depends on the SYMMETRY bit in the LED Configuration Register Register)              . In Symmetric Mode the Segment_Index[2:0] = Duty Cycle Bits[7:5]\n              . In Asymmetric Mode the Segment_Index[2:0] is the bit concatenation of following: Segment_Index[2] = (FALLING RAMP TIME in Figure 30-3, Clipping Example) and Segment_Index[1:0] = Duty Cycle Bits[7:6].  Reset Value */

#define LED_UPDATE_STEPSIZE_STEP0_Pos         (0)                                            /**< (LED_UPDATE_STEPSIZE) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 000. Position */
#define LED_UPDATE_STEPSIZE_STEP0_Msk         (0xFU << LED_UPDATE_STEPSIZE_STEP0_Pos)        /**< (LED_UPDATE_STEPSIZE) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 000. Mask */
#define LED_UPDATE_STEPSIZE_STEP0(value)      (LED_UPDATE_STEPSIZE_STEP0_Msk & ((value) << LED_UPDATE_STEPSIZE_STEP0_Pos))
#define LED_UPDATE_STEPSIZE_STEP1_Pos         (4)                                            /**< (LED_UPDATE_STEPSIZE) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 001. Position */
#define LED_UPDATE_STEPSIZE_STEP1_Msk         (0xFU << LED_UPDATE_STEPSIZE_STEP1_Pos)        /**< (LED_UPDATE_STEPSIZE) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 001. Mask */
#define LED_UPDATE_STEPSIZE_STEP1(value)      (LED_UPDATE_STEPSIZE_STEP1_Msk & ((value) << LED_UPDATE_STEPSIZE_STEP1_Pos))
#define LED_UPDATE_STEPSIZE_STEP2_Pos         (8)                                            /**< (LED_UPDATE_STEPSIZE) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 010. Position */
#define LED_UPDATE_STEPSIZE_STEP2_Msk         (0xFU << LED_UPDATE_STEPSIZE_STEP2_Pos)        /**< (LED_UPDATE_STEPSIZE) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 010. Mask */
#define LED_UPDATE_STEPSIZE_STEP2(value)      (LED_UPDATE_STEPSIZE_STEP2_Msk & ((value) << LED_UPDATE_STEPSIZE_STEP2_Pos))
#define LED_UPDATE_STEPSIZE_STEP3_Pos         (12)                                           /**< (LED_UPDATE_STEPSIZE) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 011. Position */
#define LED_UPDATE_STEPSIZE_STEP3_Msk         (0xFU << LED_UPDATE_STEPSIZE_STEP3_Pos)        /**< (LED_UPDATE_STEPSIZE) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 011. Mask */
#define LED_UPDATE_STEPSIZE_STEP3(value)      (LED_UPDATE_STEPSIZE_STEP3_Msk & ((value) << LED_UPDATE_STEPSIZE_STEP3_Pos))
#define LED_UPDATE_STEPSIZE_STEP4_Pos         (16)                                           /**< (LED_UPDATE_STEPSIZE) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 100. Position */
#define LED_UPDATE_STEPSIZE_STEP4_Msk         (0xFU << LED_UPDATE_STEPSIZE_STEP4_Pos)        /**< (LED_UPDATE_STEPSIZE) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 100. Mask */
#define LED_UPDATE_STEPSIZE_STEP4(value)      (LED_UPDATE_STEPSIZE_STEP4_Msk & ((value) << LED_UPDATE_STEPSIZE_STEP4_Pos))
#define LED_UPDATE_STEPSIZE_STEP5_Pos         (20)                                           /**< (LED_UPDATE_STEPSIZE) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 101 Position */
#define LED_UPDATE_STEPSIZE_STEP5_Msk         (0xFU << LED_UPDATE_STEPSIZE_STEP5_Pos)        /**< (LED_UPDATE_STEPSIZE) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 101 Mask */
#define LED_UPDATE_STEPSIZE_STEP5(value)      (LED_UPDATE_STEPSIZE_STEP5_Msk & ((value) << LED_UPDATE_STEPSIZE_STEP5_Pos))
#define LED_UPDATE_STEPSIZE_STEP6_Pos         (24)                                           /**< (LED_UPDATE_STEPSIZE) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 110. Position */
#define LED_UPDATE_STEPSIZE_STEP6_Msk         (0xFU << LED_UPDATE_STEPSIZE_STEP6_Pos)        /**< (LED_UPDATE_STEPSIZE) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 110. Mask */
#define LED_UPDATE_STEPSIZE_STEP6(value)      (LED_UPDATE_STEPSIZE_STEP6_Msk & ((value) << LED_UPDATE_STEPSIZE_STEP6_Pos))
#define LED_UPDATE_STEPSIZE_STEP7_Pos         (28)                                           /**< (LED_UPDATE_STEPSIZE) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 111. Position */
#define LED_UPDATE_STEPSIZE_STEP7_Msk         (0xFU << LED_UPDATE_STEPSIZE_STEP7_Pos)        /**< (LED_UPDATE_STEPSIZE) Amount the current duty cycle is adjusted at the end of every PWM period when the segment index is equal to 111. Mask */
#define LED_UPDATE_STEPSIZE_STEP7(value)      (LED_UPDATE_STEPSIZE_STEP7_Msk & ((value) << LED_UPDATE_STEPSIZE_STEP7_Pos))
#define LED_UPDATE_STEPSIZE_Msk               (0xFFFFFFFFUL)                                 /**< (LED_UPDATE_STEPSIZE) Register Mask  */

/* -------- LED_UPDATE_INTERVAL : (LED Offset: 0x10) (R/W 32) LED Update Interval -------- */

typedef union
{
  struct
  {
    uint32_t INTERVAL0:4;               /**< bit:   0..3  The number of PWM periods between updates to current duty cycle when the segment index is equal to 000b. */
    uint32_t INTERVAL1:4;               /**< bit:   4..7  The number of PWM periods between updates to current duty cycle when the segment index is equal to 001b. */
    uint32_t INTERVAL2:4;               /**< bit:  8..11  The number of PWM periods between updates to current duty cycle when the segment index is equal to 010b. */
    uint32_t INTERVAL3:4;               /**< bit: 12..15  The number of PWM periods between updates to current duty cycle when the segment index is equal to 011b. */
    uint32_t INTERVAL4:4;               /**< bit: 16..19  The number of PWM periods between updates to current duty cycle when the segment index is equal to 100b. */
    uint32_t INTERVAL5:4;               /**< bit: 20..23  The number of PWM periods between updates to current duty cycle when the segment index is equal to 101b. */
    uint32_t INTERVAL6:4;               /**< bit: 24..27  The number of PWM periods between updates to current duty cycle when the segment index is equal to 110b. */
    uint32_t INTERVAL7:4;               /**< bit: 28..31  The number of PWM periods between updates to current duty cycle when the segment index is equal to 111b. */
  };
  uint32_t w;
} __LED_UPDATE_INTERVAL_bits_t;
#define LED_UPDATE_INTERVAL_RESETVALUE      (0x00U)                                       /**<  (LED_UPDATE_INTERVAL) LED Update Interval  Reset Value */

#define LED_UPDATE_INTERVAL_INTERVAL0_Pos     (0)                                            /**< (LED_UPDATE_INTERVAL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 000b. Position */
#define LED_UPDATE_INTERVAL_INTERVAL0_Msk     (0xFU << LED_UPDATE_INTERVAL_INTERVAL0_Pos)    /**< (LED_UPDATE_INTERVAL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 000b. Mask */
#define LED_UPDATE_INTERVAL_INTERVAL0(value)  (LED_UPDATE_INTERVAL_INTERVAL0_Msk & ((value) << LED_UPDATE_INTERVAL_INTERVAL0_Pos))
#define LED_UPDATE_INTERVAL_INTERVAL1_Pos     (4)                                            /**< (LED_UPDATE_INTERVAL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 001b. Position */
#define LED_UPDATE_INTERVAL_INTERVAL1_Msk     (0xFU << LED_UPDATE_INTERVAL_INTERVAL1_Pos)    /**< (LED_UPDATE_INTERVAL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 001b. Mask */
#define LED_UPDATE_INTERVAL_INTERVAL1(value)  (LED_UPDATE_INTERVAL_INTERVAL1_Msk & ((value) << LED_UPDATE_INTERVAL_INTERVAL1_Pos))
#define LED_UPDATE_INTERVAL_INTERVAL2_Pos     (8)                                            /**< (LED_UPDATE_INTERVAL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 010b. Position */
#define LED_UPDATE_INTERVAL_INTERVAL2_Msk     (0xFU << LED_UPDATE_INTERVAL_INTERVAL2_Pos)    /**< (LED_UPDATE_INTERVAL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 010b. Mask */
#define LED_UPDATE_INTERVAL_INTERVAL2(value)  (LED_UPDATE_INTERVAL_INTERVAL2_Msk & ((value) << LED_UPDATE_INTERVAL_INTERVAL2_Pos))
#define LED_UPDATE_INTERVAL_INTERVAL3_Pos     (12)                                           /**< (LED_UPDATE_INTERVAL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 011b. Position */
#define LED_UPDATE_INTERVAL_INTERVAL3_Msk     (0xFU << LED_UPDATE_INTERVAL_INTERVAL3_Pos)    /**< (LED_UPDATE_INTERVAL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 011b. Mask */
#define LED_UPDATE_INTERVAL_INTERVAL3(value)  (LED_UPDATE_INTERVAL_INTERVAL3_Msk & ((value) << LED_UPDATE_INTERVAL_INTERVAL3_Pos))
#define LED_UPDATE_INTERVAL_INTERVAL4_Pos     (16)                                           /**< (LED_UPDATE_INTERVAL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 100b. Position */
#define LED_UPDATE_INTERVAL_INTERVAL4_Msk     (0xFU << LED_UPDATE_INTERVAL_INTERVAL4_Pos)    /**< (LED_UPDATE_INTERVAL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 100b. Mask */
#define LED_UPDATE_INTERVAL_INTERVAL4(value)  (LED_UPDATE_INTERVAL_INTERVAL4_Msk & ((value) << LED_UPDATE_INTERVAL_INTERVAL4_Pos))
#define LED_UPDATE_INTERVAL_INTERVAL5_Pos     (20)                                           /**< (LED_UPDATE_INTERVAL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 101b. Position */
#define LED_UPDATE_INTERVAL_INTERVAL5_Msk     (0xFU << LED_UPDATE_INTERVAL_INTERVAL5_Pos)    /**< (LED_UPDATE_INTERVAL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 101b. Mask */
#define LED_UPDATE_INTERVAL_INTERVAL5(value)  (LED_UPDATE_INTERVAL_INTERVAL5_Msk & ((value) << LED_UPDATE_INTERVAL_INTERVAL5_Pos))
#define LED_UPDATE_INTERVAL_INTERVAL6_Pos     (24)                                           /**< (LED_UPDATE_INTERVAL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 110b. Position */
#define LED_UPDATE_INTERVAL_INTERVAL6_Msk     (0xFU << LED_UPDATE_INTERVAL_INTERVAL6_Pos)    /**< (LED_UPDATE_INTERVAL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 110b. Mask */
#define LED_UPDATE_INTERVAL_INTERVAL6(value)  (LED_UPDATE_INTERVAL_INTERVAL6_Msk & ((value) << LED_UPDATE_INTERVAL_INTERVAL6_Pos))
#define LED_UPDATE_INTERVAL_INTERVAL7_Pos     (28)                                           /**< (LED_UPDATE_INTERVAL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 111b. Position */
#define LED_UPDATE_INTERVAL_INTERVAL7_Msk     (0xFU << LED_UPDATE_INTERVAL_INTERVAL7_Pos)    /**< (LED_UPDATE_INTERVAL) The number of PWM periods between updates to current duty cycle when the segment index is equal to 111b. Mask */
#define LED_UPDATE_INTERVAL_INTERVAL7(value)  (LED_UPDATE_INTERVAL_INTERVAL7_Msk & ((value) << LED_UPDATE_INTERVAL_INTERVAL7_Pos))
#define LED_UPDATE_INTERVAL_Msk               (0xFFFFFFFFUL)                                 /**< (LED_UPDATE_INTERVAL) Register Mask  */

/* -------- LED_OUTPUT_DELAY : (LED Offset: 0x14) (R/W 32) LED Output Delay -------- */

typedef union
{
  struct
  {
    uint32_t OUTPUT_DELAY:8;            /**< bit:   0..7  The delay, in counts of the clock defined in Clock Source (CLKSRC), in which output transitions are delayed.\n     When this field is 0, there is no added transition delay. When the LED is programmed to be Always On or Always Off, the\n     Output Delay field has no effect. */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __LED_OUTPUT_DELAY_bits_t;
#define LED_OUTPUT_DELAY_RESETVALUE         (0x00U)                                       /**<  (LED_OUTPUT_DELAY) LED Output Delay  Reset Value */

#define LED_OUTPUT_DELAY_OUTPUT_DELAY_Pos     (0)                                            /**< (LED_OUTPUT_DELAY) The delay, in counts of the clock defined in Clock Source (CLKSRC), in which output transitions are delayed.\n     When this field is 0, there is no added transition delay. When the LED is programmed to be Always On or Always Off, the\n     Output Delay field has no effect. Position */
#define LED_OUTPUT_DELAY_OUTPUT_DELAY_Msk     (0xFFU << LED_OUTPUT_DELAY_OUTPUT_DELAY_Pos)   /**< (LED_OUTPUT_DELAY) The delay, in counts of the clock defined in Clock Source (CLKSRC), in which output transitions are delayed.\n     When this field is 0, there is no added transition delay. When the LED is programmed to be Always On or Always Off, the\n     Output Delay field has no effect. Mask */
#define LED_OUTPUT_DELAY_OUTPUT_DELAY(value)  (LED_OUTPUT_DELAY_OUTPUT_DELAY_Msk & ((value) << LED_OUTPUT_DELAY_OUTPUT_DELAY_Pos))
#define LED_OUTPUT_DELAY_Msk                  (0x000000FFUL)                                 /**< (LED_OUTPUT_DELAY) Register Mask  */

/** \brief LED register offsets definitions */
#define LED_CONFIG_OFFSET            (0x00)         /**< (LED_CONFIG) LED Configuration Offset */
#define LED_LIMITS_OFFSET            (0x04)         /**< (LED_LIMITS) LED Limits This register may be written at any time. Values written into the register are held in an holding register, which is transferred into the actual register at the end of a PWM period. The two byte fields may be written independently. Reads of this register return the current contents and not the value of the holding register. Offset */
#define LED_DELAY_OFFSET             (0x08)         /**< (LED_DELAY) LED Delay Offset */
#define LED_UPDATE_STEPSIZE_OFFSET   (0x0C)         /**< (LED_UPDATE_STEPSIZE) This register has eight segment fields which provide the amount the current duty cycle is adjusted at the end of every PWM period. Segment field selection is decoded based on the segment index. The segment index equation utilized depends on the SYMMETRY bit in the LED Configuration Register Register)              . In Symmetric Mode the Segment_Index[2:0] = Duty Cycle Bits[7:5]\n              . In Asymmetric Mode the Segment_Index[2:0] is the bit concatenation of following: Segment_Index[2] = (FALLING RAMP TIME in Figure 30-3, Clipping Example) and Segment_Index[1:0] = Duty Cycle Bits[7:6]. Offset */
#define LED_UPDATE_INTERVAL_OFFSET   (0x10)         /**< (LED_UPDATE_INTERVAL) LED Update Interval Offset */
#define LED_OUTPUT_DELAY_OFFSET      (0x14)         /**< (LED_OUTPUT_DELAY) LED Output Delay Offset */

/** \brief LED register API structure */
typedef struct
{  /* The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n        clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n        PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. */
  __IO  __LED_CONFIG_bits_t            CONFIG;        /**< Offset: 0x00 (R/W  32) LED Configuration */
  __IO  __LED_LIMITS_bits_t            LIMITS;        /**< Offset: 0x04 (R/W  32) LED Limits This register may be written at any time. Values written into the register are held in an holding register, which is transferred into the actual register at the end of a PWM period. The two byte fields may be written independently. Reads of this register return the current contents and not the value of the holding register. */
  __IO  __LED_DELAY_bits_t             DELAY;         /**< Offset: 0x08 (R/W  32) LED Delay */
  __IO  __LED_UPDATE_STEPSIZE_bits_t   UPDATE_STEPSIZE; /**< Offset: 0x0C (R/W  32) This register has eight segment fields which provide the amount the current duty cycle is adjusted at the end of every PWM period. Segment field selection is decoded based on the segment index. The segment index equation utilized depends on the SYMMETRY bit in the LED Configuration Register Register)              . In Symmetric Mode the Segment_Index[2:0] = Duty Cycle Bits[7:5]\n              . In Asymmetric Mode the Segment_Index[2:0] is the bit concatenation of following: Segment_Index[2] = (FALLING RAMP TIME in Figure 30-3, Clipping Example) and Segment_Index[1:0] = Duty Cycle Bits[7:6]. */
  __IO  __LED_UPDATE_INTERVAL_bits_t   UPDATE_INTERVAL; /**< Offset: 0x10 (R/W  32) LED Update Interval */
  __IO  __LED_OUTPUT_DELAY_bits_t      LED_OUTPUT_DELAY; /**< Offset: 0x14 (R/W  32) LED Output Delay */
} led_registers_t;
/** @}  end of The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n        clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n        PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. */

#endif /* _PIC32CX_0525SG12_LED_COMPONENT_H_ */
