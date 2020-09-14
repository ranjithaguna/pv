/**
 * \brief Component description for PIC32CX/0525SG12 DMA_CHAN01
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
#ifndef _PIC32CX_0525SG12_DMA_CHAN01_COMPONENT_H_
#define _PIC32CX_0525SG12_DMA_CHAN01_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_DMA_CHAN01 DMA Channel 01 Registers
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR DMA_CHAN01 */
/* ========================================================================== */

/* -------- DMA_CHAN01_DMA_CHANNEL_ACTIVATE : (DMA_CHAN01 Offset: 0x00) (R/W 8) Enable this channel for operation. The DMA Main Control: Activate must also be enabled for this channel to be operational. -------- */

typedef union
{
  struct
  {
    uint8_t  CHANNEL_ACTIVATE:1;        /**< bit:      0  Enable this channel for operation. The DMA Main Control:Activate must also be enabled for this channel to be operational.\n                  1=Enable channel(block). Each individual channel must be enabled separately.\n                  0=Disable channel(block). */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __DMA_CHAN01_DMA_CHANNEL_ACTIVATE_bits_t;
#define DMA_CHAN01_DMA_CHANNEL_ACTIVATE_RESETVALUE (0x00U)                                       /**<  (DMA_CHAN01_DMA_CHANNEL_ACTIVATE) Enable this channel for operation. The DMA Main Control: Activate must also be enabled for this channel to be operational.  Reset Value */

#define DMA_CHAN01_DMA_CHANNEL_ACTIVATE_CHANNEL_ACTIVATE_Pos (0)                                            /**< (DMA_CHAN01_DMA_CHANNEL_ACTIVATE) Enable this channel for operation. The DMA Main Control:Activate must also be enabled for this channel to be operational.\n                  1=Enable channel(block). Each individual channel must be enabled separately.\n                  0=Disable channel(block). Position */
#define DMA_CHAN01_DMA_CHANNEL_ACTIVATE_CHANNEL_ACTIVATE_Msk (0x1U << DMA_CHAN01_DMA_CHANNEL_ACTIVATE_CHANNEL_ACTIVATE_Pos)  /**< (DMA_CHAN01_DMA_CHANNEL_ACTIVATE) Enable this channel for operation. The DMA Main Control:Activate must also be enabled for this channel to be operational.\n                  1=Enable channel(block). Each individual channel must be enabled separately.\n                  0=Disable channel(block). Mask */
#define DMA_CHAN01_DMA_CHANNEL_ACTIVATE_Msk   (0x00000001UL)                                 /**< (DMA_CHAN01_DMA_CHANNEL_ACTIVATE) Register Mask  */

/* -------- DMA_CHAN01_MEMORY_START_ADDRESS : (DMA_CHAN01 Offset: 0x04) (R/W 32) This is the starting address for the Memory device. -------- */

typedef union
{
  uint32_t w;
} __DMA_CHAN01_MEMORY_START_ADDRESS_bits_t;
#define DMA_CHAN01_MEMORY_START_ADDRESS_RESETVALUE (0x00U)                                       /**<  (DMA_CHAN01_MEMORY_START_ADDRESS) This is the starting address for the Memory device.  Reset Value */

#define DMA_CHAN01_MEMORY_START_ADDRESS_Msk   (0x00000000UL)                                 /**< (DMA_CHAN01_MEMORY_START_ADDRESS) Register Mask  */

/* -------- DMA_CHAN01_MEMORY_END_ADDRESS : (DMA_CHAN01 Offset: 0x08) (R/W 32) This is the ending address for the Memory device. -------- */

typedef union
{
  uint32_t w;
} __DMA_CHAN01_MEMORY_END_ADDRESS_bits_t;
#define DMA_CHAN01_MEMORY_END_ADDRESS_RESETVALUE (0x00U)                                       /**<  (DMA_CHAN01_MEMORY_END_ADDRESS) This is the ending address for the Memory device.  Reset Value */

#define DMA_CHAN01_MEMORY_END_ADDRESS_Msk     (0x00000000UL)                                 /**< (DMA_CHAN01_MEMORY_END_ADDRESS) Register Mask  */

/* -------- DMA_CHAN01_DEVICE_ADDRESS : (DMA_CHAN01 Offset: 0x0c) (R/W 32) This is the Master Device address. -------- */

typedef union
{
  uint32_t w;
} __DMA_CHAN01_DEVICE_ADDRESS_bits_t;
#define DMA_CHAN01_DEVICE_ADDRESS_RESETVALUE (0x00U)                                       /**<  (DMA_CHAN01_DEVICE_ADDRESS) This is the Master Device address.  Reset Value */

#define DMA_CHAN01_DEVICE_ADDRESS_Msk         (0x00000000UL)                                 /**< (DMA_CHAN01_DEVICE_ADDRESS) Register Mask  */

/* -------- DMA_CHAN01_CONTROL : (DMA_CHAN01 Offset: 0x10) (R/W 32) DMA Channel N Control -------- */

typedef union
{
  struct
  {
    uint32_t RUN:1;                     /**< bit:      0  This is a control field. Note: This bit only applies to Hardware Flow Control mode.\n                  1= This channel is enabled and will service transfer requests\n                  0=This channel is disabled. All transfer requests are ignored. */
    uint32_t REQUEST:1;                 /**< bit:      1  This is a status field.\n                  1= There is a transfer request from the Master Device\n                  0= There is no transfer request from the Master Device */
    uint32_t DONE:1;                    /**< bit:      2  This is a status signal. It is only valid while DMA Channel Control: Run is Enabled. \n                  This is the inverse of the DMA Channel Control: Busy field, except this is qualified with the DMA Channel Control:Run field.\n                  1=Channel is done\n                  0=Channel is not done or it is OFF */
    uint32_t STATUS:2;                  /**< bit:   3..4  This is a status signal. The status decode is listed in priority order with the highest priority first.\n                  3: Error detected by the DMA\n                  2: The DMA Channel is externally done, in that the Device has terminated the transfer over the Hardware Flow Control through the Port dma_term\n                  1: The DMA Channel is locally done, in that Memory Start Address equals Memory End Address\n                  0: DMA Channel Control:Run is Disabled (0x0) */
    uint32_t BUSY:1;                    /**< bit:      5  This is a status signal.\n                  1=The DMA Channel is busy (FSM is not IDLE)\n                  0=The DMA Channel is not busy (FSM is IDLE) */
    uint32_t :2;                        /**< bit:   6..7  Reserved                                      */
    uint32_t TX_DIRECTION:1;            /**< bit:      8  This determines the direction of the DMA Transfer.\n                  1=Data Packet Read from Memory Start Address followed by Data Packet Write to Device Address\n                  0=Data Packet Read from Device Address followed by Data Packet Write to Memory Start Address */
    uint32_t HARDWARE_FLOW_CONTROL_DEVICE:7;  /**< bit:  9..15  This is the device that is connected to this channel as its Hardware Flow Control master.\n                  The Flow Control Interface is a bus with each master concatenated onto it.\n                  This selects which bus index of the concatenated Flow Control Interface bus is targeted towards this channel.\n                  The Flow Control Interface Port list is dma_req, dma_term, and dma_done. */
    uint32_t INCREMENT_MEM_ADDR:1;      /**< bit:     16  This will enable an auto-increment to the DMA Channel Memory Address.\n                  1=Increment the DMA Channel Memory Address by DMA Channel Control:Transfer Size after every Data Packet transfer\n                  0=Do nothing */
    uint32_t INCREMENT_DEVICE_ADDR:1;   /**< bit:     17  This will enable an auto-increment to the DMA Channel Device Address.\n                  1: Increment the DMA Channel Device Address by DMA Channel Control:Transfer Size after every Data Packet transfer\n                  0: Do nothing */
    uint32_t LOCK:1;                    /**< bit:     18  This is used to lock the arbitration of the Channel Arbiter on this channel once this channel is granted. Once this is locked, it will remain on the arbiter until it has completed it transfer (either the Transfer Aborted, Transfer Done or Transfer Terminated conditions). */
    uint32_t DISABLE_HW_FLOW_CONTROL:1;  /**< bit:     19  This will Disable the Hardware Flow Control. When disabled, any DMA Master device attempting to communicate to the DMA over the DMA Flow Control Interface (Ports: dma_req, dma_term, and dma_done) will be ignored. This should be set before using the DMA channel in Firmware Flow Control mode. */
    uint32_t TRANSFER_SIZE:3;           /**< bit: 20..22  This is the transfer size in Bytes of each Data Packet transfer.\n                  Note: The transfer size must be a legal AMBA transfer size. Valid sizes are 1, 2 and 4 Bytes. */
    uint32_t :1;                        /**< bit:     23  Reserved                                      */
    uint32_t TRANSFER_GO:1;             /**< bit:     24  This is used for the Firmware Flow Control DMA transfer. */
    uint32_t TRANSFER_ABORT:1;          /**< bit:     25  This is used to abort the current transfer on this DMA Channel. The aborted transfer will be forced to terminate immediately. */
    uint32_t :6;                        /**< bit: 26..31  Reserved                                      */
  };
  uint32_t w;
} __DMA_CHAN01_CONTROL_bits_t;
#define DMA_CHAN01_CONTROL_RESETVALUE       (0x00U)                                       /**<  (DMA_CHAN01_CONTROL) DMA Channel N Control  Reset Value */

#define DMA_CHAN01_CONTROL_RUN_Pos            (0)                                            /**< (DMA_CHAN01_CONTROL) This is a control field. Note: This bit only applies to Hardware Flow Control mode.\n                  1= This channel is enabled and will service transfer requests\n                  0=This channel is disabled. All transfer requests are ignored. Position */
#define DMA_CHAN01_CONTROL_RUN_Msk            (0x1U << DMA_CHAN01_CONTROL_RUN_Pos)           /**< (DMA_CHAN01_CONTROL) This is a control field. Note: This bit only applies to Hardware Flow Control mode.\n                  1= This channel is enabled and will service transfer requests\n                  0=This channel is disabled. All transfer requests are ignored. Mask */
#define DMA_CHAN01_CONTROL_REQUEST_Pos        (1)                                            /**< (DMA_CHAN01_CONTROL) This is a status field.\n                  1= There is a transfer request from the Master Device\n                  0= There is no transfer request from the Master Device Position */
#define DMA_CHAN01_CONTROL_REQUEST_Msk        (0x1U << DMA_CHAN01_CONTROL_REQUEST_Pos)       /**< (DMA_CHAN01_CONTROL) This is a status field.\n                  1= There is a transfer request from the Master Device\n                  0= There is no transfer request from the Master Device Mask */
#define DMA_CHAN01_CONTROL_DONE_Pos           (2)                                            /**< (DMA_CHAN01_CONTROL) This is a status signal. It is only valid while DMA Channel Control: Run is Enabled. \n                  This is the inverse of the DMA Channel Control: Busy field, except this is qualified with the DMA Channel Control:Run field.\n                  1=Channel is done\n                  0=Channel is not done or it is OFF Position */
#define DMA_CHAN01_CONTROL_DONE_Msk           (0x1U << DMA_CHAN01_CONTROL_DONE_Pos)          /**< (DMA_CHAN01_CONTROL) This is a status signal. It is only valid while DMA Channel Control: Run is Enabled. \n                  This is the inverse of the DMA Channel Control: Busy field, except this is qualified with the DMA Channel Control:Run field.\n                  1=Channel is done\n                  0=Channel is not done or it is OFF Mask */
#define DMA_CHAN01_CONTROL_STATUS_Pos         (3)                                            /**< (DMA_CHAN01_CONTROL) This is a status signal. The status decode is listed in priority order with the highest priority first.\n                  3: Error detected by the DMA\n                  2: The DMA Channel is externally done, in that the Device has terminated the transfer over the Hardware Flow Control through the Port dma_term\n                  1: The DMA Channel is locally done, in that Memory Start Address equals Memory End Address\n                  0: DMA Channel Control:Run is Disabled (0x0) Position */
#define DMA_CHAN01_CONTROL_STATUS_Msk         (0x3U << DMA_CHAN01_CONTROL_STATUS_Pos)        /**< (DMA_CHAN01_CONTROL) This is a status signal. The status decode is listed in priority order with the highest priority first.\n                  3: Error detected by the DMA\n                  2: The DMA Channel is externally done, in that the Device has terminated the transfer over the Hardware Flow Control through the Port dma_term\n                  1: The DMA Channel is locally done, in that Memory Start Address equals Memory End Address\n                  0: DMA Channel Control:Run is Disabled (0x0) Mask */
#define DMA_CHAN01_CONTROL_STATUS(value)      (DMA_CHAN01_CONTROL_STATUS_Msk & ((value) << DMA_CHAN01_CONTROL_STATUS_Pos))
#define DMA_CHAN01_CONTROL_BUSY_Pos           (5)                                            /**< (DMA_CHAN01_CONTROL) This is a status signal.\n                  1=The DMA Channel is busy (FSM is not IDLE)\n                  0=The DMA Channel is not busy (FSM is IDLE) Position */
#define DMA_CHAN01_CONTROL_BUSY_Msk           (0x1U << DMA_CHAN01_CONTROL_BUSY_Pos)          /**< (DMA_CHAN01_CONTROL) This is a status signal.\n                  1=The DMA Channel is busy (FSM is not IDLE)\n                  0=The DMA Channel is not busy (FSM is IDLE) Mask */
#define DMA_CHAN01_CONTROL_TX_DIRECTION_Pos   (8)                                            /**< (DMA_CHAN01_CONTROL) This determines the direction of the DMA Transfer.\n                  1=Data Packet Read from Memory Start Address followed by Data Packet Write to Device Address\n                  0=Data Packet Read from Device Address followed by Data Packet Write to Memory Start Address Position */
#define DMA_CHAN01_CONTROL_TX_DIRECTION_Msk   (0x1U << DMA_CHAN01_CONTROL_TX_DIRECTION_Pos)  /**< (DMA_CHAN01_CONTROL) This determines the direction of the DMA Transfer.\n                  1=Data Packet Read from Memory Start Address followed by Data Packet Write to Device Address\n                  0=Data Packet Read from Device Address followed by Data Packet Write to Memory Start Address Mask */
#define DMA_CHAN01_CONTROL_HARDWARE_FLOW_CONTROL_DEVICE_Pos (9)                                            /**< (DMA_CHAN01_CONTROL) This is the device that is connected to this channel as its Hardware Flow Control master.\n                  The Flow Control Interface is a bus with each master concatenated onto it.\n                  This selects which bus index of the concatenated Flow Control Interface bus is targeted towards this channel.\n                  The Flow Control Interface Port list is dma_req, dma_term, and dma_done. Position */
#define DMA_CHAN01_CONTROL_HARDWARE_FLOW_CONTROL_DEVICE_Msk (0x7FU << DMA_CHAN01_CONTROL_HARDWARE_FLOW_CONTROL_DEVICE_Pos)  /**< (DMA_CHAN01_CONTROL) This is the device that is connected to this channel as its Hardware Flow Control master.\n                  The Flow Control Interface is a bus with each master concatenated onto it.\n                  This selects which bus index of the concatenated Flow Control Interface bus is targeted towards this channel.\n                  The Flow Control Interface Port list is dma_req, dma_term, and dma_done. Mask */
#define DMA_CHAN01_CONTROL_HARDWARE_FLOW_CONTROL_DEVICE(value) (DMA_CHAN01_CONTROL_HARDWARE_FLOW_CONTROL_DEVICE_Msk & ((value) << DMA_CHAN01_CONTROL_HARDWARE_FLOW_CONTROL_DEVICE_Pos))
#define DMA_CHAN01_CONTROL_INCREMENT_MEM_ADDR_Pos (16)                                           /**< (DMA_CHAN01_CONTROL) This will enable an auto-increment to the DMA Channel Memory Address.\n                  1=Increment the DMA Channel Memory Address by DMA Channel Control:Transfer Size after every Data Packet transfer\n                  0=Do nothing Position */
#define DMA_CHAN01_CONTROL_INCREMENT_MEM_ADDR_Msk (0x1U << DMA_CHAN01_CONTROL_INCREMENT_MEM_ADDR_Pos)  /**< (DMA_CHAN01_CONTROL) This will enable an auto-increment to the DMA Channel Memory Address.\n                  1=Increment the DMA Channel Memory Address by DMA Channel Control:Transfer Size after every Data Packet transfer\n                  0=Do nothing Mask */
#define DMA_CHAN01_CONTROL_INCREMENT_DEVICE_ADDR_Pos (17)                                           /**< (DMA_CHAN01_CONTROL) This will enable an auto-increment to the DMA Channel Device Address.\n                  1: Increment the DMA Channel Device Address by DMA Channel Control:Transfer Size after every Data Packet transfer\n                  0: Do nothing Position */
#define DMA_CHAN01_CONTROL_INCREMENT_DEVICE_ADDR_Msk (0x1U << DMA_CHAN01_CONTROL_INCREMENT_DEVICE_ADDR_Pos)  /**< (DMA_CHAN01_CONTROL) This will enable an auto-increment to the DMA Channel Device Address.\n                  1: Increment the DMA Channel Device Address by DMA Channel Control:Transfer Size after every Data Packet transfer\n                  0: Do nothing Mask */
#define DMA_CHAN01_CONTROL_LOCK_Pos           (18)                                           /**< (DMA_CHAN01_CONTROL) This is used to lock the arbitration of the Channel Arbiter on this channel once this channel is granted. Once this is locked, it will remain on the arbiter until it has completed it transfer (either the Transfer Aborted, Transfer Done or Transfer Terminated conditions). Position */
#define DMA_CHAN01_CONTROL_LOCK_Msk           (0x1U << DMA_CHAN01_CONTROL_LOCK_Pos)          /**< (DMA_CHAN01_CONTROL) This is used to lock the arbitration of the Channel Arbiter on this channel once this channel is granted. Once this is locked, it will remain on the arbiter until it has completed it transfer (either the Transfer Aborted, Transfer Done or Transfer Terminated conditions). Mask */
#define DMA_CHAN01_CONTROL_DISABLE_HW_FLOW_CONTROL_Pos (19)                                           /**< (DMA_CHAN01_CONTROL) This will Disable the Hardware Flow Control. When disabled, any DMA Master device attempting to communicate to the DMA over the DMA Flow Control Interface (Ports: dma_req, dma_term, and dma_done) will be ignored. This should be set before using the DMA channel in Firmware Flow Control mode. Position */
#define DMA_CHAN01_CONTROL_DISABLE_HW_FLOW_CONTROL_Msk (0x1U << DMA_CHAN01_CONTROL_DISABLE_HW_FLOW_CONTROL_Pos)  /**< (DMA_CHAN01_CONTROL) This will Disable the Hardware Flow Control. When disabled, any DMA Master device attempting to communicate to the DMA over the DMA Flow Control Interface (Ports: dma_req, dma_term, and dma_done) will be ignored. This should be set before using the DMA channel in Firmware Flow Control mode. Mask */
#define DMA_CHAN01_CONTROL_TRANSFER_SIZE_Pos  (20)                                           /**< (DMA_CHAN01_CONTROL) This is the transfer size in Bytes of each Data Packet transfer.\n                  Note: The transfer size must be a legal AMBA transfer size. Valid sizes are 1, 2 and 4 Bytes. Position */
#define DMA_CHAN01_CONTROL_TRANSFER_SIZE_Msk  (0x7U << DMA_CHAN01_CONTROL_TRANSFER_SIZE_Pos)  /**< (DMA_CHAN01_CONTROL) This is the transfer size in Bytes of each Data Packet transfer.\n                  Note: The transfer size must be a legal AMBA transfer size. Valid sizes are 1, 2 and 4 Bytes. Mask */
#define DMA_CHAN01_CONTROL_TRANSFER_SIZE(value) (DMA_CHAN01_CONTROL_TRANSFER_SIZE_Msk & ((value) << DMA_CHAN01_CONTROL_TRANSFER_SIZE_Pos))
#define DMA_CHAN01_CONTROL_TRANSFER_GO_Pos    (24)                                           /**< (DMA_CHAN01_CONTROL) This is used for the Firmware Flow Control DMA transfer. Position */
#define DMA_CHAN01_CONTROL_TRANSFER_GO_Msk    (0x1U << DMA_CHAN01_CONTROL_TRANSFER_GO_Pos)   /**< (DMA_CHAN01_CONTROL) This is used for the Firmware Flow Control DMA transfer. Mask */
#define DMA_CHAN01_CONTROL_TRANSFER_ABORT_Pos (25)                                           /**< (DMA_CHAN01_CONTROL) This is used to abort the current transfer on this DMA Channel. The aborted transfer will be forced to terminate immediately. Position */
#define DMA_CHAN01_CONTROL_TRANSFER_ABORT_Msk (0x1U << DMA_CHAN01_CONTROL_TRANSFER_ABORT_Pos)  /**< (DMA_CHAN01_CONTROL) This is used to abort the current transfer on this DMA Channel. The aborted transfer will be forced to terminate immediately. Mask */
#define DMA_CHAN01_CONTROL_Msk                (0x037FFF3FUL)                                 /**< (DMA_CHAN01_CONTROL) Register Mask  */

/* -------- DMA_CHAN01_INT_STATUS : (DMA_CHAN01 Offset: 0x14) (R/W 8) DMA Channel N Interrupt Status -------- */

typedef union
{
  struct
  {
    uint8_t  BUS_ERROR:1;               /**< bit:      0  This is an interrupt source register. This flags when there is an Error detected over the internal 32-bit Bus.\n                  1: Error detected. (R/WC) */
    uint8_t  FLOW_CONTROL:1;            /**< bit:      1  This is an interrupt source register. This flags when the DMA Channel has encountered a Hardware Flow Control Request\n     after the DMA Channel has completed the transfer. This means the Master Device is attempting to overflow the DMA.\n                  1=Hardware Flow Control is requesting after the transfer has completed\n                  0=No Hardware Flow Control event */
    uint8_t  DONE:1;                    /**< bit:      2  This is an interrupt source register. This flags when the DMA Channel has completed a transfer successfully on its side.\n     A completed transfer is defined as when the DMA Channel reaches its limit; Memory Start Address equals Memory End Address.\n     A completion due to a Hardware Flow Control Terminate will not flag this interrupt.\n                  1=Memory Start Address equals Memory End Address\n                  0=Memory Start Address does not equal Memory End Address */
    uint8_t  :5;                        /**< bit:   3..7  Reserved                                      */
  };
  uint8_t  w;
} __DMA_CHAN01_INT_STATUS_bits_t;
#define DMA_CHAN01_INT_STATUS_RESETVALUE    (0x00U)                                       /**<  (DMA_CHAN01_INT_STATUS) DMA Channel N Interrupt Status  Reset Value */

#define DMA_CHAN01_INT_STATUS_BUS_ERROR_Pos   (0)                                            /**< (DMA_CHAN01_INT_STATUS) This is an interrupt source register. This flags when there is an Error detected over the internal 32-bit Bus.\n                  1: Error detected. (R/WC) Position */
#define DMA_CHAN01_INT_STATUS_BUS_ERROR_Msk   (0x1U << DMA_CHAN01_INT_STATUS_BUS_ERROR_Pos)  /**< (DMA_CHAN01_INT_STATUS) This is an interrupt source register. This flags when there is an Error detected over the internal 32-bit Bus.\n                  1: Error detected. (R/WC) Mask */
#define DMA_CHAN01_INT_STATUS_FLOW_CONTROL_Pos (1)                                            /**< (DMA_CHAN01_INT_STATUS) This is an interrupt source register. This flags when the DMA Channel has encountered a Hardware Flow Control Request\n     after the DMA Channel has completed the transfer. This means the Master Device is attempting to overflow the DMA.\n                  1=Hardware Flow Control is requesting after the transfer has completed\n                  0=No Hardware Flow Control event Position */
#define DMA_CHAN01_INT_STATUS_FLOW_CONTROL_Msk (0x1U << DMA_CHAN01_INT_STATUS_FLOW_CONTROL_Pos)  /**< (DMA_CHAN01_INT_STATUS) This is an interrupt source register. This flags when the DMA Channel has encountered a Hardware Flow Control Request\n     after the DMA Channel has completed the transfer. This means the Master Device is attempting to overflow the DMA.\n                  1=Hardware Flow Control is requesting after the transfer has completed\n                  0=No Hardware Flow Control event Mask */
#define DMA_CHAN01_INT_STATUS_DONE_Pos        (2)                                            /**< (DMA_CHAN01_INT_STATUS) This is an interrupt source register. This flags when the DMA Channel has completed a transfer successfully on its side.\n     A completed transfer is defined as when the DMA Channel reaches its limit; Memory Start Address equals Memory End Address.\n     A completion due to a Hardware Flow Control Terminate will not flag this interrupt.\n                  1=Memory Start Address equals Memory End Address\n                  0=Memory Start Address does not equal Memory End Address Position */
#define DMA_CHAN01_INT_STATUS_DONE_Msk        (0x1U << DMA_CHAN01_INT_STATUS_DONE_Pos)       /**< (DMA_CHAN01_INT_STATUS) This is an interrupt source register. This flags when the DMA Channel has completed a transfer successfully on its side.\n     A completed transfer is defined as when the DMA Channel reaches its limit; Memory Start Address equals Memory End Address.\n     A completion due to a Hardware Flow Control Terminate will not flag this interrupt.\n                  1=Memory Start Address equals Memory End Address\n                  0=Memory Start Address does not equal Memory End Address Mask */
#define DMA_CHAN01_INT_STATUS_Msk             (0x00000007UL)                                 /**< (DMA_CHAN01_INT_STATUS) Register Mask  */

/* -------- DMA_CHAN01_INT_EN : (DMA_CHAN01 Offset: 0x18) (R/W 8) DMA CHANNEL N INTERRUPT ENABLE -------- */

typedef union
{
  struct
  {
    uint8_t  STATUS_ENABLE_BUS_ERROR:1;  /**< bit:      0  This is an interrupt enable for DMA Channel Interrupt:Status Bus Error.\n                  1=Enable Interrupt\n                  0=Disable Interrupt */
    uint8_t  STATUS_ENABLE_FLOW_CONTROL:1;  /**< bit:      1  This is an interrupt enable for DMA Channel Interrupt:Status Flow Control Error.\n                  1=Enable Interrupt\n                  0=Disable Interrupt */
    uint8_t  STATUS_ENABLE_DONE:1;      /**< bit:      2  This is an interrupt enable for DMA Channel Interrupt:Status Done.\n                  1=Enable Interrupt\n                  0=Disable Interrupt */
    uint8_t  :5;                        /**< bit:   3..7  Reserved                                      */
  };
  uint8_t  w;
} __DMA_CHAN01_INT_EN_bits_t;
#define DMA_CHAN01_INT_EN_RESETVALUE        (0x00U)                                       /**<  (DMA_CHAN01_INT_EN) DMA CHANNEL N INTERRUPT ENABLE  Reset Value */

#define DMA_CHAN01_INT_EN_STATUS_ENABLE_BUS_ERROR_Pos (0)                                            /**< (DMA_CHAN01_INT_EN) This is an interrupt enable for DMA Channel Interrupt:Status Bus Error.\n                  1=Enable Interrupt\n                  0=Disable Interrupt Position */
#define DMA_CHAN01_INT_EN_STATUS_ENABLE_BUS_ERROR_Msk (0x1U << DMA_CHAN01_INT_EN_STATUS_ENABLE_BUS_ERROR_Pos)  /**< (DMA_CHAN01_INT_EN) This is an interrupt enable for DMA Channel Interrupt:Status Bus Error.\n                  1=Enable Interrupt\n                  0=Disable Interrupt Mask */
#define DMA_CHAN01_INT_EN_STATUS_ENABLE_FLOW_CONTROL_Pos (1)                                            /**< (DMA_CHAN01_INT_EN) This is an interrupt enable for DMA Channel Interrupt:Status Flow Control Error.\n                  1=Enable Interrupt\n                  0=Disable Interrupt Position */
#define DMA_CHAN01_INT_EN_STATUS_ENABLE_FLOW_CONTROL_Msk (0x1U << DMA_CHAN01_INT_EN_STATUS_ENABLE_FLOW_CONTROL_Pos)  /**< (DMA_CHAN01_INT_EN) This is an interrupt enable for DMA Channel Interrupt:Status Flow Control Error.\n                  1=Enable Interrupt\n                  0=Disable Interrupt Mask */
#define DMA_CHAN01_INT_EN_STATUS_ENABLE_DONE_Pos (2)                                            /**< (DMA_CHAN01_INT_EN) This is an interrupt enable for DMA Channel Interrupt:Status Done.\n                  1=Enable Interrupt\n                  0=Disable Interrupt Position */
#define DMA_CHAN01_INT_EN_STATUS_ENABLE_DONE_Msk (0x1U << DMA_CHAN01_INT_EN_STATUS_ENABLE_DONE_Pos)  /**< (DMA_CHAN01_INT_EN) This is an interrupt enable for DMA Channel Interrupt:Status Done.\n                  1=Enable Interrupt\n                  0=Disable Interrupt Mask */
#define DMA_CHAN01_INT_EN_Msk                 (0x00000007UL)                                 /**< (DMA_CHAN01_INT_EN) Register Mask  */

/* -------- DMA_CHAN01_FILL_ENABLE : (DMA_CHAN01 Offset: 0x20) (R/W 32) DMA CHANNEL N FILL ENABLE -------- */

typedef union
{
  struct
  {
    uint32_t FILL_MODE_ENABLE:1;        /**< bit:      0  1=Enable the calculation of CRC-32 for DMA Channel N\n     0=Disable the calculation of CRC-32 for DMA Channel N */
    uint32_t :31;                       /**< bit:  1..31  Reserved                                      */
  };
  uint32_t w;
} __DMA_CHAN01_FILL_ENABLE_bits_t;
#define DMA_CHAN01_FILL_ENABLE_RESETVALUE   (0x00U)                                       /**<  (DMA_CHAN01_FILL_ENABLE) DMA CHANNEL N FILL ENABLE  Reset Value */

#define DMA_CHAN01_FILL_ENABLE_FILL_MODE_ENABLE_Pos (0)                                            /**< (DMA_CHAN01_FILL_ENABLE) 1=Enable the calculation of CRC-32 for DMA Channel N\n     0=Disable the calculation of CRC-32 for DMA Channel N Position */
#define DMA_CHAN01_FILL_ENABLE_FILL_MODE_ENABLE_Msk (0x1U << DMA_CHAN01_FILL_ENABLE_FILL_MODE_ENABLE_Pos)  /**< (DMA_CHAN01_FILL_ENABLE) 1=Enable the calculation of CRC-32 for DMA Channel N\n     0=Disable the calculation of CRC-32 for DMA Channel N Mask */
#define DMA_CHAN01_FILL_ENABLE_Msk            (0x00000001UL)                                 /**< (DMA_CHAN01_FILL_ENABLE) Register Mask  */

/* -------- DMA_CHAN01_FILL_DATA : (DMA_CHAN01 Offset: 0x24) (R/W 32) DMA CHANNEL N FILL DATA -------- */

typedef union
{
  struct
  {
    uint32_t FILL_DATA:32;              /**< bit:  0..31  This is the data pattern used to fill memory. */
  };
  uint32_t w;
} __DMA_CHAN01_FILL_DATA_bits_t;
#define DMA_CHAN01_FILL_DATA_RESETVALUE     (0x00U)                                       /**<  (DMA_CHAN01_FILL_DATA) DMA CHANNEL N FILL DATA  Reset Value */

#define DMA_CHAN01_FILL_DATA_FILL_DATA_Pos    (0)                                            /**< (DMA_CHAN01_FILL_DATA) This is the data pattern used to fill memory. Position */
#define DMA_CHAN01_FILL_DATA_FILL_DATA_Msk    (0xFFFFFFFFU << DMA_CHAN01_FILL_DATA_FILL_DATA_Pos)  /**< (DMA_CHAN01_FILL_DATA) This is the data pattern used to fill memory. Mask */
#define DMA_CHAN01_FILL_DATA_FILL_DATA(value) (DMA_CHAN01_FILL_DATA_FILL_DATA_Msk & ((value) << DMA_CHAN01_FILL_DATA_FILL_DATA_Pos))
#define DMA_CHAN01_FILL_DATA_Msk              (0xFFFFFFFFUL)                                 /**< (DMA_CHAN01_FILL_DATA) Register Mask  */

/* -------- DMA_CHAN01_FILL_STATUS : (DMA_CHAN01 Offset: 0x28) (R/W 32) DMA CHANNEL N FILL STATUS -------- */

typedef union
{
  struct
  {
    uint32_t FILL_DONE:1;               /**< bit:      0  This bit is set to '1b' when the CRC calculation has completed from either normal or forced termination.\n     It is cleared to '0b' when the DMA controller starts a new transfer on the channel. */
    uint32_t FILL_RUNNING:1;            /**< bit:      1  This bit is set to '1b' when the DMA controller starts the post-transfer transmission of the CRC.\n     It is only set when the post-transfer is enabled by the CRC_POST_TRANSFER_ENABLE field. This bit is cleared\n     to '0b' when the post-transfer completes. */
    uint32_t :30;                       /**< bit:  2..31  Reserved                                      */
  };
  uint32_t w;
} __DMA_CHAN01_FILL_STATUS_bits_t;
#define DMA_CHAN01_FILL_STATUS_RESETVALUE   (0x00U)                                       /**<  (DMA_CHAN01_FILL_STATUS) DMA CHANNEL N FILL STATUS  Reset Value */

#define DMA_CHAN01_FILL_STATUS_FILL_DONE_Pos  (0)                                            /**< (DMA_CHAN01_FILL_STATUS) This bit is set to '1b' when the CRC calculation has completed from either normal or forced termination.\n     It is cleared to '0b' when the DMA controller starts a new transfer on the channel. Position */
#define DMA_CHAN01_FILL_STATUS_FILL_DONE_Msk  (0x1U << DMA_CHAN01_FILL_STATUS_FILL_DONE_Pos)  /**< (DMA_CHAN01_FILL_STATUS) This bit is set to '1b' when the CRC calculation has completed from either normal or forced termination.\n     It is cleared to '0b' when the DMA controller starts a new transfer on the channel. Mask */
#define DMA_CHAN01_FILL_STATUS_FILL_RUNNING_Pos (1)                                            /**< (DMA_CHAN01_FILL_STATUS) This bit is set to '1b' when the DMA controller starts the post-transfer transmission of the CRC.\n     It is only set when the post-transfer is enabled by the CRC_POST_TRANSFER_ENABLE field. This bit is cleared\n     to '0b' when the post-transfer completes. Position */
#define DMA_CHAN01_FILL_STATUS_FILL_RUNNING_Msk (0x1U << DMA_CHAN01_FILL_STATUS_FILL_RUNNING_Pos)  /**< (DMA_CHAN01_FILL_STATUS) This bit is set to '1b' when the DMA controller starts the post-transfer transmission of the CRC.\n     It is only set when the post-transfer is enabled by the CRC_POST_TRANSFER_ENABLE field. This bit is cleared\n     to '0b' when the post-transfer completes. Mask */
#define DMA_CHAN01_FILL_STATUS_Msk            (0x00000003UL)                                 /**< (DMA_CHAN01_FILL_STATUS) Register Mask  */

/** \brief DMA_CHAN01 register offsets definitions */
#define DMA_CHAN01_DMA_CHANNEL_ACTIVATE_OFFSET (0x00)         /**< (DMA_CHAN01_DMA_CHANNEL_ACTIVATE) Enable this channel for operation. The DMA Main Control: Activate must also be enabled for this channel to be operational. Offset */
#define DMA_CHAN01_MEMORY_START_ADDRESS_OFFSET (0x04)         /**< (DMA_CHAN01_MEMORY_START_ADDRESS) This is the starting address for the Memory device. Offset */
#define DMA_CHAN01_MEMORY_END_ADDRESS_OFFSET (0x08)         /**< (DMA_CHAN01_MEMORY_END_ADDRESS) This is the ending address for the Memory device. Offset */
#define DMA_CHAN01_DEVICE_ADDRESS_OFFSET (0x0C)         /**< (DMA_CHAN01_DEVICE_ADDRESS) This is the Master Device address. Offset */
#define DMA_CHAN01_CONTROL_OFFSET    (0x10)         /**< (DMA_CHAN01_CONTROL) DMA Channel N Control Offset */
#define DMA_CHAN01_INT_STATUS_OFFSET (0x14)         /**< (DMA_CHAN01_INT_STATUS) DMA Channel N Interrupt Status Offset */
#define DMA_CHAN01_INT_EN_OFFSET     (0x18)         /**< (DMA_CHAN01_INT_EN) DMA CHANNEL N INTERRUPT ENABLE Offset */
#define DMA_CHAN01_FILL_ENABLE_OFFSET (0x20)         /**< (DMA_CHAN01_FILL_ENABLE) DMA CHANNEL N FILL ENABLE Offset */
#define DMA_CHAN01_FILL_DATA_OFFSET  (0x24)         /**< (DMA_CHAN01_FILL_DATA) DMA CHANNEL N FILL DATA Offset */
#define DMA_CHAN01_FILL_STATUS_OFFSET (0x28)         /**< (DMA_CHAN01_FILL_STATUS) DMA CHANNEL N FILL STATUS Offset */

/** \brief DMA_CHAN01 register API structure */
typedef struct
{  /* DMA Channel 01 Registers */
  __IO  __DMA_CHAN01_DMA_CHANNEL_ACTIVATE_bits_t DMA_CHANNEL_ACTIVATE; /**< Offset: 0x00 (R/W   8) Enable this channel for operation. The DMA Main Control: Activate must also be enabled for this channel to be operational. */
  __IO  __DMA_CHAN01_MEMORY_START_ADDRESS_bits_t MEMORY_START_ADDRESS; /**< Offset: 0x04 (R/W  32) This is the starting address for the Memory device. */
  __IO  __DMA_CHAN01_MEMORY_END_ADDRESS_bits_t MEMORY_END_ADDRESS; /**< Offset: 0x08 (R/W  32) This is the ending address for the Memory device. */
  __IO  __DMA_CHAN01_DEVICE_ADDRESS_bits_t DEVICE_ADDRESS; /**< Offset: 0x0C (R/W  32) This is the Master Device address. */
  __IO  __DMA_CHAN01_CONTROL_bits_t    CONTROL;       /**< Offset: 0x10 (R/W  32) DMA Channel N Control */
  __IO  __DMA_CHAN01_INT_STATUS_bits_t INT_STATUS;    /**< Offset: 0x14 (R/W   8) DMA Channel N Interrupt Status */
  __IO  __DMA_CHAN01_INT_EN_bits_t     INT_EN;        /**< Offset: 0x18 (R/W   8) DMA CHANNEL N INTERRUPT ENABLE */
  __IO  __DMA_CHAN01_FILL_ENABLE_bits_t FILL_ENABLE;   /**< Offset: 0x20 (R/W  32) DMA CHANNEL N FILL ENABLE */
  __IO  __DMA_CHAN01_FILL_DATA_bits_t  FILL_DATA;     /**< Offset: 0x24 (R/W  32) DMA CHANNEL N FILL DATA */
  __IO  __DMA_CHAN01_FILL_STATUS_bits_t FILL_STATUS;   /**< Offset: 0x28 (R/W  32) DMA CHANNEL N FILL STATUS */
} dmachan01_registers_t;
/** @}  end of DMA Channel 01 Registers */

#endif /* _PIC32CX_0525SG12_DMA_CHAN01_COMPONENT_H_ */
