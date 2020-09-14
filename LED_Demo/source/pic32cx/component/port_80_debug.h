/**
 * \brief Component description for PIC32CX/0525SG12 PORT_80_DEBUG
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
#ifndef _PIC32CX_0525SG12_PORT_80_DEBUG_COMPONENT_H_
#define _PIC32CX_0525SG12_PORT_80_DEBUG_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_PORT_80_DEBUG The Port 80 BIOS Debug Port emulates the functionality of a Port 80 ISA plug-in card. In addition, a timestamp for the debug data can be\n     optionally added. Diagnostic data is written by the Host Interface to the Port 80 BIOS Debug Port, which is located in the Host I/O address space.\n    The Port 80 BIOS Debug Port generates an interrupt to the EC when host data is available. The EC reads this data along with the timestamp, if enabled.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PORT_80_DEBUG */
/* ========================================================================== */

/* -------- PORT_80_DEBUG_HOST_DATA : (PORT_80_DEBUG Offset: 0x00) (/W 32) Host Data Register -------- */

typedef union
{
  struct
  {
    uint32_t HOST_DATA:8;               /**< bit:   0..7  This is the host data.                        */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __PORT_80_DEBUG_HOST_DATA_bits_t;
#define PORT_80_DEBUG_HOST_DATA_RESETVALUE  (0x00U)                                       /**<  (PORT_80_DEBUG_HOST_DATA) Host Data Register  Reset Value */

#define PORT_80_DEBUG_HOST_DATA_HOST_DATA_Pos (0)                                            /**< (PORT_80_DEBUG_HOST_DATA) This is the host data. Position */
#define PORT_80_DEBUG_HOST_DATA_HOST_DATA_Msk (0xFFU << PORT_80_DEBUG_HOST_DATA_HOST_DATA_Pos)  /**< (PORT_80_DEBUG_HOST_DATA) This is the host data. Mask */
#define PORT_80_DEBUG_HOST_DATA_HOST_DATA(value) (PORT_80_DEBUG_HOST_DATA_HOST_DATA_Msk & ((value) << PORT_80_DEBUG_HOST_DATA_HOST_DATA_Pos))
#define PORT_80_DEBUG_HOST_DATA_Msk           (0x000000FFUL)                                 /**< (PORT_80_DEBUG_HOST_DATA) Register Mask  */

/* -------- PORT_80_DEBUG_EC_DATA : (PORT_80_DEBUG Offset: 0x100) (R/W 32) EC Data Register. -------- */

typedef union
{
  struct
  {
    uint32_t EC_DATA:8;                 /**< bit:   0..7  This is the EC data.                          */
    uint32_t TIME_STAMP:24;             /**< bit:  8..31  This is the time stamp.                       */
  };
  uint32_t w;
} __PORT_80_DEBUG_EC_DATA_bits_t;
#define PORT_80_DEBUG_EC_DATA_RESETVALUE    (0x00U)                                       /**<  (PORT_80_DEBUG_EC_DATA) EC Data Register.  Reset Value */

#define PORT_80_DEBUG_EC_DATA_EC_DATA_Pos     (0)                                            /**< (PORT_80_DEBUG_EC_DATA) This is the EC data. Position */
#define PORT_80_DEBUG_EC_DATA_EC_DATA_Msk     (0xFFU << PORT_80_DEBUG_EC_DATA_EC_DATA_Pos)   /**< (PORT_80_DEBUG_EC_DATA) This is the EC data. Mask */
#define PORT_80_DEBUG_EC_DATA_EC_DATA(value)  (PORT_80_DEBUG_EC_DATA_EC_DATA_Msk & ((value) << PORT_80_DEBUG_EC_DATA_EC_DATA_Pos))
#define PORT_80_DEBUG_EC_DATA_TIME_STAMP_Pos  (8)                                            /**< (PORT_80_DEBUG_EC_DATA) This is the time stamp. Position */
#define PORT_80_DEBUG_EC_DATA_TIME_STAMP_Msk  (0xFFFFFFU << PORT_80_DEBUG_EC_DATA_TIME_STAMP_Pos)  /**< (PORT_80_DEBUG_EC_DATA) This is the time stamp. Mask */
#define PORT_80_DEBUG_EC_DATA_TIME_STAMP(value) (PORT_80_DEBUG_EC_DATA_TIME_STAMP_Msk & ((value) << PORT_80_DEBUG_EC_DATA_TIME_STAMP_Pos))
#define PORT_80_DEBUG_EC_DATA_Msk             (0xFFFFFFFFUL)                                 /**< (PORT_80_DEBUG_EC_DATA) Register Mask  */

/* -------- PORT_80_DEBUG_CONFIGURATION : (PORT_80_DEBUG Offset: 0x104) (R/W 32) Configuration Register. -------- */

typedef union
{
  struct
  {
    uint32_t :1;                        /**< bit:      0  Reserved                                      */
    uint32_t FLUSH:1;                   /**< bit:      1  When this field is written with a 1, the FIFO is flushed. Writes of a 0 to this field have no effect. Reads always return 0. */
    uint32_t RESET_TIME_STAMP:1;        /**< bit:      2  When this field is written with a 1, the 24-bit Timer is reset to 0. Writing zero to the Count Register has the same effect.\n      Writes of a 0 to this field have no effect. Reads always return 0. */
    uint32_t TIMEBASE_SELECT:2;         /**< bit:   3..4  These bits determine the clock for the 24-bit Timer: 3=48MHz/64; 2=48MHz/32; 1=48MHz/16; 0=48MHz/8. */
    uint32_t TIMER_ENABLE:1;            /**< bit:      5  When the TIMER_ENABLE bit is 1, the 24-bit Timer is actively counting at a rate determined by the TIMEBASE_SELECT bits.\n      When the TIMER ENABLE bit is 0, counting is stopped. */
    uint32_t FIFO_THRESHOLD:2;          /**< bit:   6..7  This field determines the threshold for the Port 80 BIOS Debug Port Interrupts:\n      3=14 entry threshold; 2=8 entry threshold; 1=4 entry threshold; 0=1 entry threshold. */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __PORT_80_DEBUG_CONFIGURATION_bits_t;
#define PORT_80_DEBUG_CONFIGURATION_RESETVALUE (0x00U)                                       /**<  (PORT_80_DEBUG_CONFIGURATION) Configuration Register.  Reset Value */

#define PORT_80_DEBUG_CONFIGURATION_FLUSH_Pos (1)                                            /**< (PORT_80_DEBUG_CONFIGURATION) When this field is written with a 1, the FIFO is flushed. Writes of a 0 to this field have no effect. Reads always return 0. Position */
#define PORT_80_DEBUG_CONFIGURATION_FLUSH_Msk (0x1U << PORT_80_DEBUG_CONFIGURATION_FLUSH_Pos)  /**< (PORT_80_DEBUG_CONFIGURATION) When this field is written with a 1, the FIFO is flushed. Writes of a 0 to this field have no effect. Reads always return 0. Mask */
#define PORT_80_DEBUG_CONFIGURATION_RESET_TIME_STAMP_Pos (2)                                            /**< (PORT_80_DEBUG_CONFIGURATION) When this field is written with a 1, the 24-bit Timer is reset to 0. Writing zero to the Count Register has the same effect.\n      Writes of a 0 to this field have no effect. Reads always return 0. Position */
#define PORT_80_DEBUG_CONFIGURATION_RESET_TIME_STAMP_Msk (0x1U << PORT_80_DEBUG_CONFIGURATION_RESET_TIME_STAMP_Pos)  /**< (PORT_80_DEBUG_CONFIGURATION) When this field is written with a 1, the 24-bit Timer is reset to 0. Writing zero to the Count Register has the same effect.\n      Writes of a 0 to this field have no effect. Reads always return 0. Mask */
#define PORT_80_DEBUG_CONFIGURATION_TIMEBASE_SELECT_Pos (3)                                            /**< (PORT_80_DEBUG_CONFIGURATION) These bits determine the clock for the 24-bit Timer: 3=48MHz/64; 2=48MHz/32; 1=48MHz/16; 0=48MHz/8. Position */
#define PORT_80_DEBUG_CONFIGURATION_TIMEBASE_SELECT_Msk (0x3U << PORT_80_DEBUG_CONFIGURATION_TIMEBASE_SELECT_Pos)  /**< (PORT_80_DEBUG_CONFIGURATION) These bits determine the clock for the 24-bit Timer: 3=48MHz/64; 2=48MHz/32; 1=48MHz/16; 0=48MHz/8. Mask */
#define PORT_80_DEBUG_CONFIGURATION_TIMEBASE_SELECT(value) (PORT_80_DEBUG_CONFIGURATION_TIMEBASE_SELECT_Msk & ((value) << PORT_80_DEBUG_CONFIGURATION_TIMEBASE_SELECT_Pos))
#define PORT_80_DEBUG_CONFIGURATION_TIMER_ENABLE_Pos (5)                                            /**< (PORT_80_DEBUG_CONFIGURATION) When the TIMER_ENABLE bit is 1, the 24-bit Timer is actively counting at a rate determined by the TIMEBASE_SELECT bits.\n      When the TIMER ENABLE bit is 0, counting is stopped. Position */
#define PORT_80_DEBUG_CONFIGURATION_TIMER_ENABLE_Msk (0x1U << PORT_80_DEBUG_CONFIGURATION_TIMER_ENABLE_Pos)  /**< (PORT_80_DEBUG_CONFIGURATION) When the TIMER_ENABLE bit is 1, the 24-bit Timer is actively counting at a rate determined by the TIMEBASE_SELECT bits.\n      When the TIMER ENABLE bit is 0, counting is stopped. Mask */
#define PORT_80_DEBUG_CONFIGURATION_FIFO_THRESHOLD_Pos (6)                                            /**< (PORT_80_DEBUG_CONFIGURATION) This field determines the threshold for the Port 80 BIOS Debug Port Interrupts:\n      3=14 entry threshold; 2=8 entry threshold; 1=4 entry threshold; 0=1 entry threshold. Position */
#define PORT_80_DEBUG_CONFIGURATION_FIFO_THRESHOLD_Msk (0x3U << PORT_80_DEBUG_CONFIGURATION_FIFO_THRESHOLD_Pos)  /**< (PORT_80_DEBUG_CONFIGURATION) This field determines the threshold for the Port 80 BIOS Debug Port Interrupts:\n      3=14 entry threshold; 2=8 entry threshold; 1=4 entry threshold; 0=1 entry threshold. Mask */
#define PORT_80_DEBUG_CONFIGURATION_FIFO_THRESHOLD(value) (PORT_80_DEBUG_CONFIGURATION_FIFO_THRESHOLD_Msk & ((value) << PORT_80_DEBUG_CONFIGURATION_FIFO_THRESHOLD_Pos))
#define PORT_80_DEBUG_CONFIGURATION_Msk       (0x000000FEUL)                                 /**< (PORT_80_DEBUG_CONFIGURATION) Register Mask  */

/* -------- PORT_80_DEBUG_STATUS : (PORT_80_DEBUG Offset: 0x108) (R/ 32) Status Register -------- */

typedef union
{
  struct
  {
    uint32_t NOT_EMPTY:1;               /**< bit:      0  The NOT EMPTY bit is 1 when there is data in the FIFO. The NOT EMPTY bit is 0 when the FIFO is empty. */
    uint32_t OVERRUN:1;                 /**< bit:      1  The OVERRUN bit is 1 when the host writes the Host Data Register when the FIFO is full. */
    uint32_t :30;                       /**< bit:  2..31  Reserved                                      */
  };
  uint32_t w;
} __PORT_80_DEBUG_STATUS_bits_t;
#define PORT_80_DEBUG_STATUS_RESETVALUE     (0x00U)                                       /**<  (PORT_80_DEBUG_STATUS) Status Register  Reset Value */

#define PORT_80_DEBUG_STATUS_NOT_EMPTY_Pos    (0)                                            /**< (PORT_80_DEBUG_STATUS) The NOT EMPTY bit is 1 when there is data in the FIFO. The NOT EMPTY bit is 0 when the FIFO is empty. Position */
#define PORT_80_DEBUG_STATUS_NOT_EMPTY_Msk    (0x1U << PORT_80_DEBUG_STATUS_NOT_EMPTY_Pos)   /**< (PORT_80_DEBUG_STATUS) The NOT EMPTY bit is 1 when there is data in the FIFO. The NOT EMPTY bit is 0 when the FIFO is empty. Mask */
#define PORT_80_DEBUG_STATUS_OVERRUN_Pos      (1)                                            /**< (PORT_80_DEBUG_STATUS) The OVERRUN bit is 1 when the host writes the Host Data Register when the FIFO is full. Position */
#define PORT_80_DEBUG_STATUS_OVERRUN_Msk      (0x1U << PORT_80_DEBUG_STATUS_OVERRUN_Pos)     /**< (PORT_80_DEBUG_STATUS) The OVERRUN bit is 1 when the host writes the Host Data Register when the FIFO is full. Mask */
#define PORT_80_DEBUG_STATUS_Msk              (0x00000003UL)                                 /**< (PORT_80_DEBUG_STATUS) Register Mask  */

/* -------- PORT_80_DEBUG_COUNT : (PORT_80_DEBUG Offset: 0x10c) (R/W 32) Count Register -------- */

typedef union
{
  struct
  {
    uint32_t :8;                        /**< bit:   0..7  Reserved                                      */
    uint32_t COUNT:24;                  /**< bit:  8..31  Writes load data into the 24-bit Timer. Reads return the 24-bit Timer current value. */
  };
  uint32_t w;
} __PORT_80_DEBUG_COUNT_bits_t;
#define PORT_80_DEBUG_COUNT_RESETVALUE      (0x00U)                                       /**<  (PORT_80_DEBUG_COUNT) Count Register  Reset Value */

#define PORT_80_DEBUG_COUNT_COUNT_Pos         (8)                                            /**< (PORT_80_DEBUG_COUNT) Writes load data into the 24-bit Timer. Reads return the 24-bit Timer current value. Position */
#define PORT_80_DEBUG_COUNT_COUNT_Msk         (0xFFFFFFU << PORT_80_DEBUG_COUNT_COUNT_Pos)   /**< (PORT_80_DEBUG_COUNT) Writes load data into the 24-bit Timer. Reads return the 24-bit Timer current value. Mask */
#define PORT_80_DEBUG_COUNT_COUNT(value)      (PORT_80_DEBUG_COUNT_COUNT_Msk & ((value) << PORT_80_DEBUG_COUNT_COUNT_Pos))
#define PORT_80_DEBUG_COUNT_Msk               (0xFFFFFF00UL)                                 /**< (PORT_80_DEBUG_COUNT) Register Mask  */

/* -------- PORT_80_DEBUG_ACTIVATE : (PORT_80_DEBUG Offset: 0x330) (R/W 32) Activate Register -------- */

typedef union
{
  struct
  {
    uint32_t ACTIVATE:1;                /**< bit:      0  When this bit is asserted 1, the block is enabled. When this bit is 0, writes by the Host interface to the Host Data Register\n      are not claimed, the FIFO is flushed, the 24-bit Timer is reset, and the timer clock is stopped. Control bits in the Configuration Register are\n      not affected by the state of ACTIVATE. */
    uint32_t :31;                       /**< bit:  1..31  Reserved                                      */
  };
  uint32_t w;
} __PORT_80_DEBUG_ACTIVATE_bits_t;
#define PORT_80_DEBUG_ACTIVATE_RESETVALUE   (0x00U)                                       /**<  (PORT_80_DEBUG_ACTIVATE) Activate Register  Reset Value */

#define PORT_80_DEBUG_ACTIVATE_ACTIVATE_Pos   (0)                                            /**< (PORT_80_DEBUG_ACTIVATE) When this bit is asserted 1, the block is enabled. When this bit is 0, writes by the Host interface to the Host Data Register\n      are not claimed, the FIFO is flushed, the 24-bit Timer is reset, and the timer clock is stopped. Control bits in the Configuration Register are\n      not affected by the state of ACTIVATE. Position */
#define PORT_80_DEBUG_ACTIVATE_ACTIVATE_Msk   (0x1U << PORT_80_DEBUG_ACTIVATE_ACTIVATE_Pos)  /**< (PORT_80_DEBUG_ACTIVATE) When this bit is asserted 1, the block is enabled. When this bit is 0, writes by the Host interface to the Host Data Register\n      are not claimed, the FIFO is flushed, the 24-bit Timer is reset, and the timer clock is stopped. Control bits in the Configuration Register are\n      not affected by the state of ACTIVATE. Mask */
#define PORT_80_DEBUG_ACTIVATE_Msk            (0x00000001UL)                                 /**< (PORT_80_DEBUG_ACTIVATE) Register Mask  */

/** \brief PORT_80_DEBUG register offsets definitions */
#define PORT_80_DEBUG_HOST_DATA_OFFSET (0x00)         /**< (PORT_80_DEBUG_HOST_DATA) Host Data Register Offset */
#define PORT_80_DEBUG_EC_DATA_OFFSET (0x100)        /**< (PORT_80_DEBUG_EC_DATA) EC Data Register. Offset */
#define PORT_80_DEBUG_CONFIGURATION_OFFSET (0x104)        /**< (PORT_80_DEBUG_CONFIGURATION) Configuration Register. Offset */
#define PORT_80_DEBUG_STATUS_OFFSET  (0x108)        /**< (PORT_80_DEBUG_STATUS) Status Register Offset */
#define PORT_80_DEBUG_COUNT_OFFSET   (0x10C)        /**< (PORT_80_DEBUG_COUNT) Count Register Offset */
#define PORT_80_DEBUG_ACTIVATE_OFFSET (0x330)        /**< (PORT_80_DEBUG_ACTIVATE) Activate Register Offset */

/** \brief PORT_80_DEBUG register API structure */
typedef struct
{  /* The Port 80 BIOS Debug Port emulates the functionality of a Port 80 ISA plug-in card. In addition, a timestamp for the debug data can be\n     optionally added. Diagnostic data is written by the Host Interface to the Port 80 BIOS Debug Port, which is located in the Host I/O address space.\n    The Port 80 BIOS Debug Port generates an interrupt to the EC when host data is available. The EC reads this data along with the timestamp, if enabled. */
  __O   __PORT_80_DEBUG_HOST_DATA_bits_t HOST_DATA;     /**< Offset: 0x00 ( /W  32) Host Data Register */
  __IO  __PORT_80_DEBUG_EC_DATA_bits_t EC_DATA;       /**< Offset: 0x100 (R/W  32) EC Data Register. */
  __IO  __PORT_80_DEBUG_CONFIGURATION_bits_t CONFIGURATION; /**< Offset: 0x104 (R/W  32) Configuration Register. */
  __I   __PORT_80_DEBUG_STATUS_bits_t  STATUS;        /**< Offset: 0x108 (R/   32) Status Register */
  __IO  __PORT_80_DEBUG_COUNT_bits_t   COUNT;         /**< Offset: 0x10C (R/W  32) Count Register */
  __IO  __PORT_80_DEBUG_ACTIVATE_bits_t ACTIVATE;      /**< Offset: 0x330 (R/W  32) Activate Register */
} port80debug_registers_t;
/** @}  end of The Port 80 BIOS Debug Port emulates the functionality of a Port 80 ISA plug-in card. In addition, a timestamp for the debug data can be\n     optionally added. Diagnostic data is written by the Host Interface to the Port 80 BIOS Debug Port, which is located in the Host I/O address space.\n    The Port 80 BIOS Debug Port generates an interrupt to the EC when host data is available. The EC reads this data along with the timestamp, if enabled. */

#endif /* _PIC32CX_0525SG12_PORT_80_DEBUG_COMPONENT_H_ */
