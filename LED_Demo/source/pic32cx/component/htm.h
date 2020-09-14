/**
 * \brief Component description for PIC32CX/0525SG12 HTM
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
#ifndef _PIC32CX_0525SG12_HTM_COMPONENT_H_
#define _PIC32CX_0525SG12_HTM_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_HTM The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n    This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n    in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR HTM */
/* ========================================================================== */

/* -------- HTM_HT_PRELOAD : (HTM Offset: 0x00) (R/W 16) [15:0] This register is used to set the Hibernation Timer Preload value. -------- */

typedef union
{
  uint16_t w;
} __HTM_HT_PRELOAD_bits_t;
#define HTM_HT_PRELOAD_RESETVALUE           (0x00U)                                       /**<  (HTM_HT_PRELOAD) [15:0] This register is used to set the Hibernation Timer Preload value.  Reset Value */

#define HTM_HT_PRELOAD_Msk                    (0x00000000UL)                                 /**< (HTM_HT_PRELOAD) Register Mask  */

/* -------- HTM_HT_CONTROL : (HTM Offset: 0x04) (R/W 16) HTimer Control Register -------- */

typedef union
{
  struct
  {
    uint16_t CTRL:1;                    /**< bit:      0  1= The Hibernation Timer has a resolution of 0.125s per LSB, which yields a maximum time in excess of 2 hours.\n     0= The Hibernation Timer has a resolution of 30.5us per LSB, which yields a maximum time of ~2seconds. */
    uint16_t :15;                       /**< bit:  1..15  Reserved                                      */
  };
  uint16_t w;
} __HTM_HT_CONTROL_bits_t;
#define HTM_HT_CONTROL_RESETVALUE           (0x00U)                                       /**<  (HTM_HT_CONTROL) HTimer Control Register  Reset Value */

#define HTM_HT_CONTROL_CTRL_Pos               (0)                                            /**< (HTM_HT_CONTROL) 1= The Hibernation Timer has a resolution of 0.125s per LSB, which yields a maximum time in excess of 2 hours.\n     0= The Hibernation Timer has a resolution of 30.5us per LSB, which yields a maximum time of ~2seconds. Position */
#define HTM_HT_CONTROL_CTRL_Msk               (0x1U << HTM_HT_CONTROL_CTRL_Pos)              /**< (HTM_HT_CONTROL) 1= The Hibernation Timer has a resolution of 0.125s per LSB, which yields a maximum time in excess of 2 hours.\n     0= The Hibernation Timer has a resolution of 30.5us per LSB, which yields a maximum time of ~2seconds. Mask */
#define HTM_HT_CONTROL_Msk                    (0x00000001UL)                                 /**< (HTM_HT_CONTROL) Register Mask  */

/* -------- HTM_COUNT : (HTM Offset: 0x08) (R/ 16) The current state of the Hibernation Timer. -------- */

typedef union
{
  uint16_t w;
} __HTM_COUNT_bits_t;
#define HTM_COUNT_RESETVALUE                (0x00U)                                       /**<  (HTM_COUNT) The current state of the Hibernation Timer.  Reset Value */

#define HTM_COUNT_Msk                         (0x00000000UL)                                 /**< (HTM_COUNT) Register Mask  */

/** \brief HTM register offsets definitions */
#define HTM_HT_PRELOAD_OFFSET        (0x00)         /**< (HTM_HT_PRELOAD) [15:0] This register is used to set the Hibernation Timer Preload value. Offset */
#define HTM_HT_CONTROL_OFFSET        (0x04)         /**< (HTM_HT_CONTROL) HTimer Control Register Offset */
#define HTM_COUNT_OFFSET             (0x08)         /**< (HTM_COUNT) The current state of the Hibernation Timer. Offset */

/** \brief HTM register API structure */
typedef struct
{  /* The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n    This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n    in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. */
  __IO  __HTM_HT_PRELOAD_bits_t        HT_PRELOAD;    /**< Offset: 0x00 (R/W  16) [15:0] This register is used to set the Hibernation Timer Preload value. */
  __IO  __HTM_HT_CONTROL_bits_t        HT_CONTROL;    /**< Offset: 0x04 (R/W  16) HTimer Control Register */
  __I   __HTM_COUNT_bits_t             COUNT;         /**< Offset: 0x08 (R/   16) The current state of the Hibernation Timer. */
} htm_registers_t;
/** @}  end of The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n    This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n    in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. */

#endif /* _PIC32CX_0525SG12_HTM_COMPONENT_H_ */
