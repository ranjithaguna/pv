/**
 * \brief Component description for PIC32CX/0525SG12 DMA_MAIN
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
#ifndef _PIC32CX_0525SG12_DMA_MAIN_COMPONENT_H_
#define _PIC32CX_0525SG12_DMA_MAIN_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_DMA_MAIN DMA Main Registers
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR DMA_MAIN */
/* ========================================================================== */

/* -------- DMA_MAIN_CONTROL : (DMA_MAIN Offset: 0x00) (R/W 8) Soft reset the entire module. Enable the blocks operation. -------- */

typedef union
{
  struct
  {
    uint8_t  ACTIVATE:1;                /**< bit:      0  Enable the blocks operation. (R/WS)\n                1=Enable block. Each individual channel must be enabled separately.\n                0=Disable all channels. */
    uint8_t  SOFT_RESET:1;              /**< bit:      1  Soft reset the entire module. This bit is self-clearing. */
    uint8_t  :6;                        /**< bit:   2..7  Reserved                                      */
  };
  uint8_t  w;
} __DMA_MAIN_CONTROL_bits_t;
#define DMA_MAIN_CONTROL_RESETVALUE         (0x00U)                                       /**<  (DMA_MAIN_CONTROL) Soft reset the entire module. Enable the blocks operation.  Reset Value */

#define DMA_MAIN_CONTROL_ACTIVATE_Pos         (0)                                            /**< (DMA_MAIN_CONTROL) Enable the blocks operation. (R/WS)\n                1=Enable block. Each individual channel must be enabled separately.\n                0=Disable all channels. Position */
#define DMA_MAIN_CONTROL_ACTIVATE_Msk         (0x1U << DMA_MAIN_CONTROL_ACTIVATE_Pos)        /**< (DMA_MAIN_CONTROL) Enable the blocks operation. (R/WS)\n                1=Enable block. Each individual channel must be enabled separately.\n                0=Disable all channels. Mask */
#define DMA_MAIN_CONTROL_SOFT_RESET_Pos       (1)                                            /**< (DMA_MAIN_CONTROL) Soft reset the entire module. This bit is self-clearing. Position */
#define DMA_MAIN_CONTROL_SOFT_RESET_Msk       (0x1U << DMA_MAIN_CONTROL_SOFT_RESET_Pos)      /**< (DMA_MAIN_CONTROL) Soft reset the entire module. This bit is self-clearing. Mask */
#define DMA_MAIN_CONTROL_Msk                  (0x00000003UL)                                 /**< (DMA_MAIN_CONTROL) Register Mask  */

/* -------- DMA_MAIN_DATA_PACKET : (DMA_MAIN Offset: 0x04) (R/ 32) Debug register that has the data that is stored in the Data Packet. This data is read data from the currently active transfer source. -------- */

typedef union
{
  uint32_t w;
} __DMA_MAIN_DATA_PACKET_bits_t;
#define DMA_MAIN_DATA_PACKET_RESETVALUE     (0x00U)                                       /**<  (DMA_MAIN_DATA_PACKET) Debug register that has the data that is stored in the Data Packet. This data is read data from the currently active transfer source.  Reset Value */

#define DMA_MAIN_DATA_PACKET_Msk              (0x00000000UL)                                 /**< (DMA_MAIN_DATA_PACKET) Register Mask  */

/** \brief DMA_MAIN register offsets definitions */
#define DMA_MAIN_CONTROL_OFFSET      (0x00)         /**< (DMA_MAIN_CONTROL) Soft reset the entire module. Enable the blocks operation. Offset */
#define DMA_MAIN_DATA_PACKET_OFFSET  (0x04)         /**< (DMA_MAIN_DATA_PACKET) Debug register that has the data that is stored in the Data Packet. This data is read data from the currently active transfer source. Offset */

/** \brief DMA_MAIN register API structure */
typedef struct
{  /* DMA Main Registers */
  __IO  __DMA_MAIN_CONTROL_bits_t      DMA_MAIN_CONTROL; /**< Offset: 0x00 (R/W   8) Soft reset the entire module. Enable the blocks operation. */
  __I   __DMA_MAIN_DATA_PACKET_bits_t  DATA_PACKET;   /**< Offset: 0x04 (R/   32) Debug register that has the data that is stored in the Data Packet. This data is read data from the currently active transfer source. */
} dmamain_registers_t;
/** @}  end of DMA Main Registers */

#endif /* _PIC32CX_0525SG12_DMA_MAIN_COMPONENT_H_ */
