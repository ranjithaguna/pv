/**
 * \brief Component description for PIC32CX/0525SG12 TACH
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
#ifndef _PIC32CX_0525SG12_TACH_COMPONENT_H_
#define _PIC32CX_0525SG12_TACH_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_TACH This block monitors TACH output signals (or locked rotor signals) from\n        various types of fans, and determines their speed.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR TACH */
/* ========================================================================== */

/* -------- TACH_CONTROL : (TACH Offset: 0x00) (R/W 32) TACHx Control Register -------- */

typedef union
{
  struct
  {
    uint32_t TACH_OUT_OF_LIMIT_ENABLE:1;  /**< bit:      0  TACH_OUT_OF_LIMIT_ENABLE  This bit is used to enable the TACH_OUT_OF_LIMIT_STATUS bit in the TACHx Status Register to generate an interrupt event.\n                  1=Enable interrupt output from Tach block\n                  0=Disable interrupt output from Tach block (default) */
    uint32_t TACH_ENABLE:1;             /**< bit:      1  TACH_ENABLE  1= TACH Monitoring enabled, clocks enabled. 0= TACH Idle, clocks gated */
    uint32_t :6;                        /**< bit:   2..7  Reserved                                      */
    uint32_t FILTER_ENABLE:1;           /**< bit:      8  FILTER_ENABLE  This filter is used to remove high frequency glitches from Tach Input. When this filter is enabled, Tach input pulses less than two 100kHz_- Clk periods wide get filtered.\n                  1= Filter enabled\n                  0= Filter disabled (default)\n                  It is recommended that the Tach input filter always be enabled. */
    uint32_t :1;                        /**< bit:      9  Reserved                                      */
    uint32_t TACH_READING_MODE_SELECT:1;  /**< bit:     10  TACH_READING_MODE_SELECT\n                  1=Counter is incremented on the rising edge of the 100kHz_Clk input. The counter is latched into the TACHX_COUNTER field and reset when the programmed number of edges is detected.\n                  0=Counter is incremented when Tach Input transitions from low-tohigh state (default) */
    uint32_t TACH_EDGES:2;              /**< bit: 11..12  TACH_EDGES A Tach signal is a square wave with a 50 percent duty cycle. Typically, two Tach periods represents one revolution of the fan. A Tach period consists of three Tach edges. This programmed value represents the number of Tach edges that will be used to determine the interval for which the number of 100kHz_Clk pulses will be counted\n                  11b=9 Tach edges (4 Tach periods)\n                  10b=5 Tach edges (2 Tach periods)\n                  01b=3 Tach edges (1 Tach period)\n                  00b=2 Tach edges (1/2 Tach period) */
    uint32_t :1;                        /**< bit:     13  Reserved                                      */
    uint32_t COUNT_READY_INT_EN:1;      /**< bit:     14  COUNT_READY_INT_EN 1=Enable Count Ready interrupt from Tach block, 0=Disable Count Ready interrupt from Tach block */
    uint32_t TACH_INPUT_INT_EN:1;       /**< bit:     15  TACH_INPUT_INT_EN 1=Enable Tach Input toggle interrupt from Tach block, 0=Disable Tach Input toggle interrupt from Tach block */
    uint32_t TACHX_COUNTER:16;          /**< bit: 16..31  This 16-bit field contains the latched value of the internal Tach pulse counter, which may be configured by the Tach Reading Mode Select field to operate as a free-running counter or to be gated by the Tach input signal. */
  };
  uint32_t w;
} __TACH_CONTROL_bits_t;
#define TACH_CONTROL_RESETVALUE             (0x00U)                                       /**<  (TACH_CONTROL) TACHx Control Register  Reset Value */

#define TACH_CONTROL_TACH_OUT_OF_LIMIT_ENABLE_Pos (0)                                            /**< (TACH_CONTROL) TACH_OUT_OF_LIMIT_ENABLE  This bit is used to enable the TACH_OUT_OF_LIMIT_STATUS bit in the TACHx Status Register to generate an interrupt event.\n                  1=Enable interrupt output from Tach block\n                  0=Disable interrupt output from Tach block (default) Position */
#define TACH_CONTROL_TACH_OUT_OF_LIMIT_ENABLE_Msk (0x1U << TACH_CONTROL_TACH_OUT_OF_LIMIT_ENABLE_Pos)  /**< (TACH_CONTROL) TACH_OUT_OF_LIMIT_ENABLE  This bit is used to enable the TACH_OUT_OF_LIMIT_STATUS bit in the TACHx Status Register to generate an interrupt event.\n                  1=Enable interrupt output from Tach block\n                  0=Disable interrupt output from Tach block (default) Mask */
#define TACH_CONTROL_TACH_ENABLE_Pos          (1)                                            /**< (TACH_CONTROL) TACH_ENABLE  1= TACH Monitoring enabled, clocks enabled. 0= TACH Idle, clocks gated Position */
#define TACH_CONTROL_TACH_ENABLE_Msk          (0x1U << TACH_CONTROL_TACH_ENABLE_Pos)         /**< (TACH_CONTROL) TACH_ENABLE  1= TACH Monitoring enabled, clocks enabled. 0= TACH Idle, clocks gated Mask */
#define TACH_CONTROL_FILTER_ENABLE_Pos        (8)                                            /**< (TACH_CONTROL) FILTER_ENABLE  This filter is used to remove high frequency glitches from Tach Input. When this filter is enabled, Tach input pulses less than two 100kHz_- Clk periods wide get filtered.\n                  1= Filter enabled\n                  0= Filter disabled (default)\n                  It is recommended that the Tach input filter always be enabled. Position */
#define TACH_CONTROL_FILTER_ENABLE_Msk        (0x1U << TACH_CONTROL_FILTER_ENABLE_Pos)       /**< (TACH_CONTROL) FILTER_ENABLE  This filter is used to remove high frequency glitches from Tach Input. When this filter is enabled, Tach input pulses less than two 100kHz_- Clk periods wide get filtered.\n                  1= Filter enabled\n                  0= Filter disabled (default)\n                  It is recommended that the Tach input filter always be enabled. Mask */
#define TACH_CONTROL_TACH_READING_MODE_SELECT_Pos (10)                                           /**< (TACH_CONTROL) TACH_READING_MODE_SELECT\n                  1=Counter is incremented on the rising edge of the 100kHz_Clk input. The counter is latched into the TACHX_COUNTER field and reset when the programmed number of edges is detected.\n                  0=Counter is incremented when Tach Input transitions from low-tohigh state (default) Position */
#define TACH_CONTROL_TACH_READING_MODE_SELECT_Msk (0x1U << TACH_CONTROL_TACH_READING_MODE_SELECT_Pos)  /**< (TACH_CONTROL) TACH_READING_MODE_SELECT\n                  1=Counter is incremented on the rising edge of the 100kHz_Clk input. The counter is latched into the TACHX_COUNTER field and reset when the programmed number of edges is detected.\n                  0=Counter is incremented when Tach Input transitions from low-tohigh state (default) Mask */
#define TACH_CONTROL_TACH_EDGES_Pos           (11)                                           /**< (TACH_CONTROL) TACH_EDGES A Tach signal is a square wave with a 50 percent duty cycle. Typically, two Tach periods represents one revolution of the fan. A Tach period consists of three Tach edges. This programmed value represents the number of Tach edges that will be used to determine the interval for which the number of 100kHz_Clk pulses will be counted\n                  11b=9 Tach edges (4 Tach periods)\n                  10b=5 Tach edges (2 Tach periods)\n                  01b=3 Tach edges (1 Tach period)\n                  00b=2 Tach edges (1/2 Tach period) Position */
#define TACH_CONTROL_TACH_EDGES_Msk           (0x3U << TACH_CONTROL_TACH_EDGES_Pos)          /**< (TACH_CONTROL) TACH_EDGES A Tach signal is a square wave with a 50 percent duty cycle. Typically, two Tach periods represents one revolution of the fan. A Tach period consists of three Tach edges. This programmed value represents the number of Tach edges that will be used to determine the interval for which the number of 100kHz_Clk pulses will be counted\n                  11b=9 Tach edges (4 Tach periods)\n                  10b=5 Tach edges (2 Tach periods)\n                  01b=3 Tach edges (1 Tach period)\n                  00b=2 Tach edges (1/2 Tach period) Mask */
#define TACH_CONTROL_TACH_EDGES(value)        (TACH_CONTROL_TACH_EDGES_Msk & ((value) << TACH_CONTROL_TACH_EDGES_Pos))
#define TACH_CONTROL_COUNT_READY_INT_EN_Pos   (14)                                           /**< (TACH_CONTROL) COUNT_READY_INT_EN 1=Enable Count Ready interrupt from Tach block, 0=Disable Count Ready interrupt from Tach block Position */
#define TACH_CONTROL_COUNT_READY_INT_EN_Msk   (0x1U << TACH_CONTROL_COUNT_READY_INT_EN_Pos)  /**< (TACH_CONTROL) COUNT_READY_INT_EN 1=Enable Count Ready interrupt from Tach block, 0=Disable Count Ready interrupt from Tach block Mask */
#define TACH_CONTROL_TACH_INPUT_INT_EN_Pos    (15)                                           /**< (TACH_CONTROL) TACH_INPUT_INT_EN 1=Enable Tach Input toggle interrupt from Tach block, 0=Disable Tach Input toggle interrupt from Tach block Position */
#define TACH_CONTROL_TACH_INPUT_INT_EN_Msk    (0x1U << TACH_CONTROL_TACH_INPUT_INT_EN_Pos)   /**< (TACH_CONTROL) TACH_INPUT_INT_EN 1=Enable Tach Input toggle interrupt from Tach block, 0=Disable Tach Input toggle interrupt from Tach block Mask */
#define TACH_CONTROL_TACHX_COUNTER_Pos        (16)                                           /**< (TACH_CONTROL) This 16-bit field contains the latched value of the internal Tach pulse counter, which may be configured by the Tach Reading Mode Select field to operate as a free-running counter or to be gated by the Tach input signal. Position */
#define TACH_CONTROL_TACHX_COUNTER_Msk        (0xFFFFU << TACH_CONTROL_TACHX_COUNTER_Pos)    /**< (TACH_CONTROL) This 16-bit field contains the latched value of the internal Tach pulse counter, which may be configured by the Tach Reading Mode Select field to operate as a free-running counter or to be gated by the Tach input signal. Mask */
#define TACH_CONTROL_TACHX_COUNTER(value)     (TACH_CONTROL_TACHX_COUNTER_Msk & ((value) << TACH_CONTROL_TACHX_COUNTER_Pos))
#define TACH_CONTROL_Msk                      (0xFFFFDD03UL)                                 /**< (TACH_CONTROL) Register Mask  */

/* -------- TACH_TACHX_STATUS : (TACH Offset: 0x04) (R/W 32) TACHx Status Register -------- */

typedef union
{
  struct
  {
    uint32_t TACH_OUT_OF_LIMIT_STATUS:1;  /**< bit:      0  TACH_OUT_OF_LIMIT_STATUS  1=Tach is outside of limits, 0=Tach is within limits (R/WC) */
    uint32_t TACH_PIN_STATUS:1;         /**< bit:      1  TACH_PIN_STATUS  1= Tach Input is high, 0= Tach Input is low */
    uint32_t TOGGLE_STATUS:1;           /**< bit:      2  TOGGLE_STATUS  1=Tach Input changed state (this bit is set on a low-to-high or high-tolow transition), 0=Tach stable (R/WC) */
    uint32_t COUNT_READY_STATUS:1;      /**< bit:      3  COUNT_READY_STATUS  1=Reading ready, 0=Reading not ready */
    uint32_t :28;                       /**< bit:  4..31  Reserved                                      */
  };
  uint32_t w;
} __TACH_TACHX_STATUS_bits_t;
#define TACH_TACHX_STATUS_RESETVALUE        (0x00U)                                       /**<  (TACH_TACHX_STATUS) TACHx Status Register  Reset Value */

#define TACH_TACHX_STATUS_TACH_OUT_OF_LIMIT_STATUS_Pos (0)                                            /**< (TACH_TACHX_STATUS) TACH_OUT_OF_LIMIT_STATUS  1=Tach is outside of limits, 0=Tach is within limits (R/WC) Position */
#define TACH_TACHX_STATUS_TACH_OUT_OF_LIMIT_STATUS_Msk (0x1U << TACH_TACHX_STATUS_TACH_OUT_OF_LIMIT_STATUS_Pos)  /**< (TACH_TACHX_STATUS) TACH_OUT_OF_LIMIT_STATUS  1=Tach is outside of limits, 0=Tach is within limits (R/WC) Mask */
#define TACH_TACHX_STATUS_TACH_PIN_STATUS_Pos (1)                                            /**< (TACH_TACHX_STATUS) TACH_PIN_STATUS  1= Tach Input is high, 0= Tach Input is low Position */
#define TACH_TACHX_STATUS_TACH_PIN_STATUS_Msk (0x1U << TACH_TACHX_STATUS_TACH_PIN_STATUS_Pos)  /**< (TACH_TACHX_STATUS) TACH_PIN_STATUS  1= Tach Input is high, 0= Tach Input is low Mask */
#define TACH_TACHX_STATUS_TOGGLE_STATUS_Pos   (2)                                            /**< (TACH_TACHX_STATUS) TOGGLE_STATUS  1=Tach Input changed state (this bit is set on a low-to-high or high-tolow transition), 0=Tach stable (R/WC) Position */
#define TACH_TACHX_STATUS_TOGGLE_STATUS_Msk   (0x1U << TACH_TACHX_STATUS_TOGGLE_STATUS_Pos)  /**< (TACH_TACHX_STATUS) TOGGLE_STATUS  1=Tach Input changed state (this bit is set on a low-to-high or high-tolow transition), 0=Tach stable (R/WC) Mask */
#define TACH_TACHX_STATUS_COUNT_READY_STATUS_Pos (3)                                            /**< (TACH_TACHX_STATUS) COUNT_READY_STATUS  1=Reading ready, 0=Reading not ready Position */
#define TACH_TACHX_STATUS_COUNT_READY_STATUS_Msk (0x1U << TACH_TACHX_STATUS_COUNT_READY_STATUS_Pos)  /**< (TACH_TACHX_STATUS) COUNT_READY_STATUS  1=Reading ready, 0=Reading not ready Mask */
#define TACH_TACHX_STATUS_Msk                 (0x0000000FUL)                                 /**< (TACH_TACHX_STATUS) Register Mask  */

/* -------- TACH_TACHX_HIGH_LIMIT : (TACH Offset: 0x08) (R/W 32) TACH HIGH LIMIT Register -------- */

typedef union
{
  struct
  {
    uint32_t TACH_HIGH_LIMIT:16;        /**< bit:  0..15  This value is compared with the value in the TACHX_COUNTER field. If the value in the counter is greater than the value\n     programmed in this register, the TACH_OUT_OF_LIMIT_STATUS bit will be set. The TACH_OUT_OF_LIMIT_STATUS status event may be enabled\n     to generate an interrupt to the embedded controller via the TACH_OUT_OF_LIMIT_ENABLE bit in the TACHx Control Register. */
    uint32_t :16;                       /**< bit: 16..31  Reserved                                      */
  };
  uint32_t w;
} __TACH_TACHX_HIGH_LIMIT_bits_t;
#define TACH_TACHX_HIGH_LIMIT_RESETVALUE    (0xFFFFU)                                     /**<  (TACH_TACHX_HIGH_LIMIT) TACH HIGH LIMIT Register  Reset Value */

#define TACH_TACHX_HIGH_LIMIT_TACH_HIGH_LIMIT_Pos (0)                                            /**< (TACH_TACHX_HIGH_LIMIT) This value is compared with the value in the TACHX_COUNTER field. If the value in the counter is greater than the value\n     programmed in this register, the TACH_OUT_OF_LIMIT_STATUS bit will be set. The TACH_OUT_OF_LIMIT_STATUS status event may be enabled\n     to generate an interrupt to the embedded controller via the TACH_OUT_OF_LIMIT_ENABLE bit in the TACHx Control Register. Position */
#define TACH_TACHX_HIGH_LIMIT_TACH_HIGH_LIMIT_Msk (0xFFFFU << TACH_TACHX_HIGH_LIMIT_TACH_HIGH_LIMIT_Pos)  /**< (TACH_TACHX_HIGH_LIMIT) This value is compared with the value in the TACHX_COUNTER field. If the value in the counter is greater than the value\n     programmed in this register, the TACH_OUT_OF_LIMIT_STATUS bit will be set. The TACH_OUT_OF_LIMIT_STATUS status event may be enabled\n     to generate an interrupt to the embedded controller via the TACH_OUT_OF_LIMIT_ENABLE bit in the TACHx Control Register. Mask */
#define TACH_TACHX_HIGH_LIMIT_TACH_HIGH_LIMIT(value) (TACH_TACHX_HIGH_LIMIT_TACH_HIGH_LIMIT_Msk & ((value) << TACH_TACHX_HIGH_LIMIT_TACH_HIGH_LIMIT_Pos))
#define TACH_TACHX_HIGH_LIMIT_Msk             (0x0000FFFFUL)                                 /**< (TACH_TACHX_HIGH_LIMIT) Register Mask  */

/* -------- TACH_TACHX_LOW_LIMIT : (TACH Offset: 0x0c) (R/W 32) TACHx Low Limit Register -------- */

typedef union
{
  struct
  {
    uint32_t TACH_LOW_LIMIT:16;         /**< bit:  0..15  This value is compared with the value in the TACHX_COUNTER field of the TACHx Control Register. If the value in the counter\n     is less than the value programmed in this register, the TACH_OUT_OF_LIMIT_STATUS bit will be set. The TACH_OUT_OF_LIMIT_STATUS\n     status event may be enabled to generate an interrupt to the embedded controller via the TACH_OUT_OF_LIMIT_ENABLE bit in the TACHx\n     Control Register To disable the TACH_OUT_OF_LIMIT_STATUS low event, program 0000h into this register. */
    uint32_t :16;                       /**< bit: 16..31  Reserved                                      */
  };
  uint32_t w;
} __TACH_TACHX_LOW_LIMIT_bits_t;
#define TACH_TACHX_LOW_LIMIT_RESETVALUE     (0x00U)                                       /**<  (TACH_TACHX_LOW_LIMIT) TACHx Low Limit Register  Reset Value */

#define TACH_TACHX_LOW_LIMIT_TACH_LOW_LIMIT_Pos (0)                                            /**< (TACH_TACHX_LOW_LIMIT) This value is compared with the value in the TACHX_COUNTER field of the TACHx Control Register. If the value in the counter\n     is less than the value programmed in this register, the TACH_OUT_OF_LIMIT_STATUS bit will be set. The TACH_OUT_OF_LIMIT_STATUS\n     status event may be enabled to generate an interrupt to the embedded controller via the TACH_OUT_OF_LIMIT_ENABLE bit in the TACHx\n     Control Register To disable the TACH_OUT_OF_LIMIT_STATUS low event, program 0000h into this register. Position */
#define TACH_TACHX_LOW_LIMIT_TACH_LOW_LIMIT_Msk (0xFFFFU << TACH_TACHX_LOW_LIMIT_TACH_LOW_LIMIT_Pos)  /**< (TACH_TACHX_LOW_LIMIT) This value is compared with the value in the TACHX_COUNTER field of the TACHx Control Register. If the value in the counter\n     is less than the value programmed in this register, the TACH_OUT_OF_LIMIT_STATUS bit will be set. The TACH_OUT_OF_LIMIT_STATUS\n     status event may be enabled to generate an interrupt to the embedded controller via the TACH_OUT_OF_LIMIT_ENABLE bit in the TACHx\n     Control Register To disable the TACH_OUT_OF_LIMIT_STATUS low event, program 0000h into this register. Mask */
#define TACH_TACHX_LOW_LIMIT_TACH_LOW_LIMIT(value) (TACH_TACHX_LOW_LIMIT_TACH_LOW_LIMIT_Msk & ((value) << TACH_TACHX_LOW_LIMIT_TACH_LOW_LIMIT_Pos))
#define TACH_TACHX_LOW_LIMIT_Msk              (0x0000FFFFUL)                                 /**< (TACH_TACHX_LOW_LIMIT) Register Mask  */

/** \brief TACH register offsets definitions */
#define TACH_CONTROL_OFFSET          (0x00)         /**< (TACH_CONTROL) TACHx Control Register Offset */
#define TACH_TACHX_STATUS_OFFSET     (0x04)         /**< (TACH_TACHX_STATUS) TACHx Status Register Offset */
#define TACH_TACHX_HIGH_LIMIT_OFFSET (0x08)         /**< (TACH_TACHX_HIGH_LIMIT) TACH HIGH LIMIT Register Offset */
#define TACH_TACHX_LOW_LIMIT_OFFSET  (0x0C)         /**< (TACH_TACHX_LOW_LIMIT) TACHx Low Limit Register Offset */

/** \brief TACH register API structure */
typedef struct
{  /* This block monitors TACH output signals (or locked rotor signals) from\n        various types of fans, and determines their speed. */
  __IO  __TACH_CONTROL_bits_t          TACH_CONTROL;  /**< Offset: 0x00 (R/W  32) TACHx Control Register */
  __IO  __TACH_TACHX_STATUS_bits_t     TACHX_STATUS;  /**< Offset: 0x04 (R/W  32) TACHx Status Register */
  __IO  __TACH_TACHX_HIGH_LIMIT_bits_t TACHX_HIGH_LIMIT; /**< Offset: 0x08 (R/W  32) TACH HIGH LIMIT Register */
  __IO  __TACH_TACHX_LOW_LIMIT_bits_t  TACHX_LOW_LIMIT; /**< Offset: 0x0C (R/W  32) TACHx Low Limit Register */
} tach_registers_t;
/** @}  end of This block monitors TACH output signals (or locked rotor signals) from\n        various types of fans, and determines their speed. */

#endif /* _PIC32CX_0525SG12_TACH_COMPONENT_H_ */
