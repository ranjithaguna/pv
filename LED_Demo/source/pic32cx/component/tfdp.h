/**
 * \brief Component description for PIC32CX/0525SG12 TFDP
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
#ifndef _PIC32CX_0525SG12_TFDP_COMPONENT_H_
#define _PIC32CX_0525SG12_TFDP_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_TFDP The TFDP serially transmits Embedded Controller (EC)-originated \n       diagnostic vectors to an external debug trace system.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR TFDP */
/* ========================================================================== */

/* -------- TFDP_DEBUG_DATA : (TFDP Offset: 0x00) (R/W 8) Debug data to be shifted out on the TFDP Debug port. While data is being shifted out, the Host Interface will 'hold-off' additional writes to the data register until the transfer is complete. -------- */

typedef union
{
  uint8_t  w;
} __TFDP_DEBUG_DATA_bits_t;
#define TFDP_DEBUG_DATA_RESETVALUE          (0x00U)                                       /**<  (TFDP_DEBUG_DATA) Debug data to be shifted out on the TFDP Debug port. While data is being shifted out, the Host Interface will 'hold-off' additional writes to the data register until the transfer is complete.  Reset Value */

#define TFDP_DEBUG_DATA_Msk                   (0x00000000UL)                                 /**< (TFDP_DEBUG_DATA) Register Mask  */

/* -------- TFDP_DEBUG_CONTROL : (TFDP Offset: 0x04) (R/W 8) Debug Control Register -------- */

typedef union
{
  struct
  {
    uint8_t  EN:1;                      /**< bit:      0  Enable. 1=Clock enabled, 0=Clock is disabled (Default) */
    uint8_t  EDGE_SEL:1;                /**< bit:      1  1= Data is shifted out on the falling edge of the debug clock, 0= Data is shifted out on the rising edge of the debug clock (Default) */
    uint8_t  DIVSEL:2;                  /**< bit:   2..3  Clock Divider Select.                         */
    uint8_t  IP_DELAY:3;                /**< bit:   4..6  Inter-packet Delay. The delay is in terms of TFDP Debug output clocks. */
    uint8_t  :1;                        /**< bit:      7  Reserved                                      */
  };
  uint8_t  w;
} __TFDP_DEBUG_CONTROL_bits_t;
#define TFDP_DEBUG_CONTROL_RESETVALUE       (0x00U)                                       /**<  (TFDP_DEBUG_CONTROL) Debug Control Register  Reset Value */

#define TFDP_DEBUG_CONTROL_EN_Pos             (0)                                            /**< (TFDP_DEBUG_CONTROL) Enable. 1=Clock enabled, 0=Clock is disabled (Default) Position */
#define TFDP_DEBUG_CONTROL_EN_Msk             (0x1U << TFDP_DEBUG_CONTROL_EN_Pos)            /**< (TFDP_DEBUG_CONTROL) Enable. 1=Clock enabled, 0=Clock is disabled (Default) Mask */
#define TFDP_DEBUG_CONTROL_EDGE_SEL_Pos       (1)                                            /**< (TFDP_DEBUG_CONTROL) 1= Data is shifted out on the falling edge of the debug clock, 0= Data is shifted out on the rising edge of the debug clock (Default) Position */
#define TFDP_DEBUG_CONTROL_EDGE_SEL_Msk       (0x1U << TFDP_DEBUG_CONTROL_EDGE_SEL_Pos)      /**< (TFDP_DEBUG_CONTROL) 1= Data is shifted out on the falling edge of the debug clock, 0= Data is shifted out on the rising edge of the debug clock (Default) Mask */
#define TFDP_DEBUG_CONTROL_DIVSEL_Pos         (2)                                            /**< (TFDP_DEBUG_CONTROL) Clock Divider Select. Position */
#define TFDP_DEBUG_CONTROL_DIVSEL_Msk         (0x3U << TFDP_DEBUG_CONTROL_DIVSEL_Pos)        /**< (TFDP_DEBUG_CONTROL) Clock Divider Select. Mask */
#define TFDP_DEBUG_CONTROL_DIVSEL(value)      (TFDP_DEBUG_CONTROL_DIVSEL_Msk & ((value) << TFDP_DEBUG_CONTROL_DIVSEL_Pos))
#define TFDP_DEBUG_CONTROL_IP_DELAY_Pos       (4)                                            /**< (TFDP_DEBUG_CONTROL) Inter-packet Delay. The delay is in terms of TFDP Debug output clocks. Position */
#define TFDP_DEBUG_CONTROL_IP_DELAY_Msk       (0x7U << TFDP_DEBUG_CONTROL_IP_DELAY_Pos)      /**< (TFDP_DEBUG_CONTROL) Inter-packet Delay. The delay is in terms of TFDP Debug output clocks. Mask */
#define TFDP_DEBUG_CONTROL_IP_DELAY(value)    (TFDP_DEBUG_CONTROL_IP_DELAY_Msk & ((value) << TFDP_DEBUG_CONTROL_IP_DELAY_Pos))
#define TFDP_DEBUG_CONTROL_Msk                (0x0000007FUL)                                 /**< (TFDP_DEBUG_CONTROL) Register Mask  */

/** \brief TFDP register offsets definitions */
#define TFDP_DEBUG_DATA_OFFSET       (0x00)         /**< (TFDP_DEBUG_DATA) Debug data to be shifted out on the TFDP Debug port. While data is being shifted out, the Host Interface will 'hold-off' additional writes to the data register until the transfer is complete. Offset */
#define TFDP_DEBUG_CONTROL_OFFSET    (0x04)         /**< (TFDP_DEBUG_CONTROL) Debug Control Register Offset */

/** \brief TFDP register API structure */
typedef struct
{  /* The TFDP serially transmits Embedded Controller (EC)-originated \n       diagnostic vectors to an external debug trace system. */
  __IO  __TFDP_DEBUG_DATA_bits_t       DEBUG_DATA;    /**< Offset: 0x00 (R/W   8) Debug data to be shifted out on the TFDP Debug port. While data is being shifted out, the Host Interface will 'hold-off' additional writes to the data register until the transfer is complete. */
  __IO  __TFDP_DEBUG_DATA_bits_t       tmp[3];
  __IO  __TFDP_DEBUG_CONTROL_bits_t    DEBUG_CONTROL; /**< Offset: 0x04 (R/W   8) Debug Control Register */
} tfdp_registers_t;
/** @}  end of The TFDP serially transmits Embedded Controller (EC)-originated \n       diagnostic vectors to an external debug trace system. */

#endif /* _PIC32CX_0525SG12_TFDP_COMPONENT_H_ */
