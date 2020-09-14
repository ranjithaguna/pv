/**
 * \brief Component description for PIC32CX/0525SG12 PWM
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
#ifndef _PIC32CX_0525SG12_PWM_COMPONENT_H_
#define _PIC32CX_0525SG12_PWM_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_PWM This block generates a PWM output that can be used to control 4-wire fans, blinking LEDs, and other\n    similar devices. Each PWM can generate an arbitrary duty cycle output at frequencies from less than 0.1 Hz to 24 MHz.\n    The PWM controller can also used to generate the PROCHOT output and Speaker output.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PWM */
/* ========================================================================== */

/* -------- PWM_COUNTER_ON_TIME : (PWM Offset: 0x00) (R/W 32) This field determines both the frequency and duty cycle of the PWM signal. Setting this field to a value of n will\n    cause the On time of the PWM to be n+1 cycles of the PWM Clock Source.\n    When this field is set to zero and the PWMX_COUNTER_OFF_TIME is not set to zero, the PWM_OUTPUT is held low (Full Off). -------- */

typedef union
{
  uint32_t w;
} __PWM_COUNTER_ON_TIME_bits_t;
#define PWM_COUNTER_ON_TIME_RESETVALUE      (0x00U)                                       /**<  (PWM_COUNTER_ON_TIME) This field determines both the frequency and duty cycle of the PWM signal. Setting this field to a value of n will\n    cause the On time of the PWM to be n+1 cycles of the PWM Clock Source.\n    When this field is set to zero and the PWMX_COUNTER_OFF_TIME is not set to zero, the PWM_OUTPUT is held low (Full Off).  Reset Value */

#define PWM_COUNTER_ON_TIME_Msk               (0x00000000UL)                                 /**< (PWM_COUNTER_ON_TIME) Register Mask  */

/* -------- PWM_COUNTER_OFF_TIME : (PWM Offset: 0x04) (R/W 32) This field determine both the frequency and duty cycle of the PWM signal. Setting this field to a value of n will\n    cause the Off time of the PWM to be n+1 cycles of the PWM Clock Source.\n    When this field is set to zero, the PWM_OUTPUT is held high (Full On). -------- */

typedef union
{
  uint32_t w;
} __PWM_COUNTER_OFF_TIME_bits_t;
#define PWM_COUNTER_OFF_TIME_RESETVALUE     (0x00U)                                       /**<  (PWM_COUNTER_OFF_TIME) This field determine both the frequency and duty cycle of the PWM signal. Setting this field to a value of n will\n    cause the Off time of the PWM to be n+1 cycles of the PWM Clock Source.\n    When this field is set to zero, the PWM_OUTPUT is held high (Full On).  Reset Value */

#define PWM_COUNTER_OFF_TIME_Msk              (0x00000000UL)                                 /**< (PWM_COUNTER_OFF_TIME) Register Mask  */

/* -------- PWM_CONFIG : (PWM Offset: 0x08) (R/W 32) PWMx CONFIGURATION REGISTER -------- */

typedef union
{
  struct
  {
    uint32_t PWM_ENABLE:1;              /**< bit:      0  When the PWM_ENABLE is set to 0 the internal counters are reset and the internal state machine is set to the OFF state.\n     In addition, the PWM_OUTPUT signal is set to the inactive state as determined by the Invert bit. The PWMx Counter ON Time Register\n     and PWMx Counter OFF Time Register are not affected by the PWM_ENABLE bit and may be read and written while the PWM enable bit is 0.\n     1=Enabled (default); 0=Disabled (gates clocks to save power). */
    uint32_t CLK_SELECT:1;              /**< bit:      1  This bit determines the clock source used by the PWM duty cycle and frequency control logic.\n                  1=CLOCK_LOW\n                  0=CLOCK_HIGH */
    uint32_t INVERT:1;                  /**< bit:      2  1= PWM_OUTPUT ON State is active low; 0=PWM_OUTPUT ON State is active high. */
    uint32_t CLK_PRE_DIVIDER:4;         /**< bit:   3..6  The Clock source for the 16-bit down counter (see PWMx Counter ON Time Register and PWMx Counter OFF Time Register)\n     is determined by bit D1 of this register. The Clock source is then divided by the value of Pre-Divider+1 and the resulting\n     signal determines the rate at which the down counter will be decremented. For example, a Pre-Divider value of 1 divides\n     the input clock by 2 and a value of 2 divides the input clock by 3. A Pre-Divider of 0 will disable the Pre-Divider option. */
    uint32_t :25;                       /**< bit:  7..31  Reserved                                      */
  };
  uint32_t w;
} __PWM_CONFIG_bits_t;
#define PWM_CONFIG_RESETVALUE               (0x00U)                                       /**<  (PWM_CONFIG) PWMx CONFIGURATION REGISTER  Reset Value */

#define PWM_CONFIG_PWM_ENABLE_Pos             (0)                                            /**< (PWM_CONFIG) When the PWM_ENABLE is set to 0 the internal counters are reset and the internal state machine is set to the OFF state.\n     In addition, the PWM_OUTPUT signal is set to the inactive state as determined by the Invert bit. The PWMx Counter ON Time Register\n     and PWMx Counter OFF Time Register are not affected by the PWM_ENABLE bit and may be read and written while the PWM enable bit is 0.\n     1=Enabled (default); 0=Disabled (gates clocks to save power). Position */
#define PWM_CONFIG_PWM_ENABLE_Msk             (0x1U << PWM_CONFIG_PWM_ENABLE_Pos)            /**< (PWM_CONFIG) When the PWM_ENABLE is set to 0 the internal counters are reset and the internal state machine is set to the OFF state.\n     In addition, the PWM_OUTPUT signal is set to the inactive state as determined by the Invert bit. The PWMx Counter ON Time Register\n     and PWMx Counter OFF Time Register are not affected by the PWM_ENABLE bit and may be read and written while the PWM enable bit is 0.\n     1=Enabled (default); 0=Disabled (gates clocks to save power). Mask */
#define PWM_CONFIG_CLK_SELECT_Pos             (1)                                            /**< (PWM_CONFIG) This bit determines the clock source used by the PWM duty cycle and frequency control logic.\n                  1=CLOCK_LOW\n                  0=CLOCK_HIGH Position */
#define PWM_CONFIG_CLK_SELECT_Msk             (0x1U << PWM_CONFIG_CLK_SELECT_Pos)            /**< (PWM_CONFIG) This bit determines the clock source used by the PWM duty cycle and frequency control logic.\n                  1=CLOCK_LOW\n                  0=CLOCK_HIGH Mask */
#define PWM_CONFIG_INVERT_Pos                 (2)                                            /**< (PWM_CONFIG) 1= PWM_OUTPUT ON State is active low; 0=PWM_OUTPUT ON State is active high. Position */
#define PWM_CONFIG_INVERT_Msk                 (0x1U << PWM_CONFIG_INVERT_Pos)                /**< (PWM_CONFIG) 1= PWM_OUTPUT ON State is active low; 0=PWM_OUTPUT ON State is active high. Mask */
#define PWM_CONFIG_CLK_PRE_DIVIDER_Pos        (3)                                            /**< (PWM_CONFIG) The Clock source for the 16-bit down counter (see PWMx Counter ON Time Register and PWMx Counter OFF Time Register)\n     is determined by bit D1 of this register. The Clock source is then divided by the value of Pre-Divider+1 and the resulting\n     signal determines the rate at which the down counter will be decremented. For example, a Pre-Divider value of 1 divides\n     the input clock by 2 and a value of 2 divides the input clock by 3. A Pre-Divider of 0 will disable the Pre-Divider option. Position */
#define PWM_CONFIG_CLK_PRE_DIVIDER_Msk        (0xFU << PWM_CONFIG_CLK_PRE_DIVIDER_Pos)       /**< (PWM_CONFIG) The Clock source for the 16-bit down counter (see PWMx Counter ON Time Register and PWMx Counter OFF Time Register)\n     is determined by bit D1 of this register. The Clock source is then divided by the value of Pre-Divider+1 and the resulting\n     signal determines the rate at which the down counter will be decremented. For example, a Pre-Divider value of 1 divides\n     the input clock by 2 and a value of 2 divides the input clock by 3. A Pre-Divider of 0 will disable the Pre-Divider option. Mask */
#define PWM_CONFIG_CLK_PRE_DIVIDER(value)     (PWM_CONFIG_CLK_PRE_DIVIDER_Msk & ((value) << PWM_CONFIG_CLK_PRE_DIVIDER_Pos))
#define PWM_CONFIG_Msk                        (0x0000007FUL)                                 /**< (PWM_CONFIG) Register Mask  */

/** \brief PWM register offsets definitions */
#define PWM_COUNTER_ON_TIME_OFFSET   (0x00)         /**< (PWM_COUNTER_ON_TIME) This field determines both the frequency and duty cycle of the PWM signal. Setting this field to a value of n will\n    cause the On time of the PWM to be n+1 cycles of the PWM Clock Source.\n    When this field is set to zero and the PWMX_COUNTER_OFF_TIME is not set to zero, the PWM_OUTPUT is held low (Full Off). Offset */
#define PWM_COUNTER_OFF_TIME_OFFSET  (0x04)         /**< (PWM_COUNTER_OFF_TIME) This field determine both the frequency and duty cycle of the PWM signal. Setting this field to a value of n will\n    cause the Off time of the PWM to be n+1 cycles of the PWM Clock Source.\n    When this field is set to zero, the PWM_OUTPUT is held high (Full On). Offset */
#define PWM_CONFIG_OFFSET            (0x08)         /**< (PWM_CONFIG) PWMx CONFIGURATION REGISTER Offset */

/** \brief PWM register API structure */
typedef struct
{  /* This block generates a PWM output that can be used to control 4-wire fans, blinking LEDs, and other\n    similar devices. Each PWM can generate an arbitrary duty cycle output at frequencies from less than 0.1 Hz to 24 MHz.\n    The PWM controller can also used to generate the PROCHOT output and Speaker output. */
  __IO  __PWM_COUNTER_ON_TIME_bits_t   COUNTER_ON_TIME; /**< Offset: 0x00 (R/W  32) This field determines both the frequency and duty cycle of the PWM signal. Setting this field to a value of n will\n    cause the On time of the PWM to be n+1 cycles of the PWM Clock Source.\n    When this field is set to zero and the PWMX_COUNTER_OFF_TIME is not set to zero, the PWM_OUTPUT is held low (Full Off). */
  __IO  __PWM_COUNTER_OFF_TIME_bits_t  COUNTER_OFF_TIME; /**< Offset: 0x04 (R/W  32) This field determine both the frequency and duty cycle of the PWM signal. Setting this field to a value of n will\n    cause the Off time of the PWM to be n+1 cycles of the PWM Clock Source.\n    When this field is set to zero, the PWM_OUTPUT is held high (Full On). */
  __IO  __PWM_CONFIG_bits_t            CONFIG;        /**< Offset: 0x08 (R/W  32) PWMx CONFIGURATION REGISTER */
} pwm_registers_t;
/** @}  end of This block generates a PWM output that can be used to control 4-wire fans, blinking LEDs, and other\n    similar devices. Each PWM can generate an arbitrary duty cycle output at frequencies from less than 0.1 Hz to 24 MHz.\n    The PWM controller can also used to generate the PROCHOT output and Speaker output. */

#endif /* _PIC32CX_0525SG12_PWM_COMPONENT_H_ */
