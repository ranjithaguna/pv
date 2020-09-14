/**
 * \brief Component description for PIC32CX/0525SG12 PS2
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
#ifndef _PIC32CX_0525SG12_PS2_COMPONENT_H_
#define _PIC32CX_0525SG12_PS2_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_PS2 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PS2 */
/* ========================================================================== */

/* -------- PS2_TX_DATA : (PS2 Offset: 0x00) (/W 32) Writes to bits 7:0 of this register start a transmission of the data in this register to the peripheral -------- */

typedef union
{
  uint32_t w;
} __PS2_TX_DATA_bits_t;
#define PS2_TX_DATA_RESETVALUE              (0x00U)                                       /**<  (PS2_TX_DATA) Writes to bits 7:0 of this register start a transmission of the data in this register to the peripheral  Reset Value */

#define PS2_TX_DATA_Msk                       (0x00000000UL)                                 /**< (PS2_TX_DATA) Register Mask  */

/* -------- PS2_RX_DATA : (PS2 Offset: 0x00) (R/ 32) Data received from a peripheral are recorded in this register in bits 7:0. -------- */

typedef union
{
  uint32_t w;
} __PS2_RX_DATA_bits_t;
#define PS2_RX_DATA_RESETVALUE              (0xFFU)                                       /**<  (PS2_RX_DATA) Data received from a peripheral are recorded in this register in bits 7:0.  Reset Value */

#define PS2_RX_DATA_Msk                       (0x00000000UL)                                 /**< (PS2_RX_DATA) Register Mask  */

/* -------- PS2_CONTROL : (PS2 Offset: 0x04) (R/W 32) PS2 Control Register -------- */

typedef union
{
  struct
  {
    uint32_t TR:1;                      /**< bit:      0  PS/2 Transmit/Receive \n                  0=The P2/2 channel is enabled to receive data.\n                  1=The PS2 channel is enabled to transmit data. */
    uint32_t EN:1;                      /**< bit:      1  PS/2 Enable. 0=The PS/2 state machine is disabled. 1=The PS/2 state machine is enabled. */
    uint32_t PARITY:2;                  /**< bit:   2..3  00b=Receiver expects Odd Parity (default). \n                  01b=Receiver expects Even Parity.\n                  10b=Receiver ignores level of the parity bit (10th bit is not interpreted as a parity bit).\n                  11b=Reserved */
    uint32_t STOP:2;                    /**< bit:   4..5  00b=Receiver expects an active high stop bit. \n                  01b=Receiver expects an active low stop bit.\n                  10b=Receiver ignores the level of the Stop bit (11th bit is not interpreted as a stop bit). \n                  11b=Reserved. */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __PS2_CONTROL_bits_t;
#define PS2_CONTROL_RESETVALUE              (0x00U)                                       /**<  (PS2_CONTROL) PS2 Control Register  Reset Value */

#define PS2_CONTROL_TR_Pos                    (0)                                            /**< (PS2_CONTROL) PS/2 Transmit/Receive \n                  0=The P2/2 channel is enabled to receive data.\n                  1=The PS2 channel is enabled to transmit data. Position */
#define PS2_CONTROL_TR_Msk                    (0x1U << PS2_CONTROL_TR_Pos)                   /**< (PS2_CONTROL) PS/2 Transmit/Receive \n                  0=The P2/2 channel is enabled to receive data.\n                  1=The PS2 channel is enabled to transmit data. Mask */
#define PS2_CONTROL_EN_Pos                    (1)                                            /**< (PS2_CONTROL) PS/2 Enable. 0=The PS/2 state machine is disabled. 1=The PS/2 state machine is enabled. Position */
#define PS2_CONTROL_EN_Msk                    (0x1U << PS2_CONTROL_EN_Pos)                   /**< (PS2_CONTROL) PS/2 Enable. 0=The PS/2 state machine is disabled. 1=The PS/2 state machine is enabled. Mask */
#define PS2_CONTROL_PARITY_Pos                (2)                                            /**< (PS2_CONTROL) 00b=Receiver expects Odd Parity (default). \n                  01b=Receiver expects Even Parity.\n                  10b=Receiver ignores level of the parity bit (10th bit is not interpreted as a parity bit).\n                  11b=Reserved Position */
#define PS2_CONTROL_PARITY_Msk                (0x3U << PS2_CONTROL_PARITY_Pos)               /**< (PS2_CONTROL) 00b=Receiver expects Odd Parity (default). \n                  01b=Receiver expects Even Parity.\n                  10b=Receiver ignores level of the parity bit (10th bit is not interpreted as a parity bit).\n                  11b=Reserved Mask */
#define PS2_CONTROL_PARITY(value)             (PS2_CONTROL_PARITY_Msk & ((value) << PS2_CONTROL_PARITY_Pos))
#define PS2_CONTROL_STOP_Pos                  (4)                                            /**< (PS2_CONTROL) 00b=Receiver expects an active high stop bit. \n                  01b=Receiver expects an active low stop bit.\n                  10b=Receiver ignores the level of the Stop bit (11th bit is not interpreted as a stop bit). \n                  11b=Reserved. Position */
#define PS2_CONTROL_STOP_Msk                  (0x3U << PS2_CONTROL_STOP_Pos)                 /**< (PS2_CONTROL) 00b=Receiver expects an active high stop bit. \n                  01b=Receiver expects an active low stop bit.\n                  10b=Receiver ignores the level of the Stop bit (11th bit is not interpreted as a stop bit). \n                  11b=Reserved. Mask */
#define PS2_CONTROL_STOP(value)               (PS2_CONTROL_STOP_Msk & ((value) << PS2_CONTROL_STOP_Pos))
#define PS2_CONTROL_Msk                       (0x0000003FUL)                                 /**< (PS2_CONTROL) Register Mask  */

/* -------- PS2_STATUS : (PS2 Offset: 0x08) (R/W 32) PS2 Status Register -------- */

typedef union
{
  struct
  {
    uint32_t RDATA_RDY:1;               /**< bit:      0  Receive Data Ready. Reading the Receive Register clears this bit. A low to high transition on this bit generates a PS2 Activity interrupt. */
    uint32_t REC_TIMEOUT:1;             /**< bit:      1  Receive Timeout. The REC_TIMEOUT bit is cleared when the Status Register is read. A low to high transition on this bit generates a PS2 Activity interrupt. (R/WC) */
    uint32_t PE:1;                      /**< bit:      2  Parity Error                                  */
    uint32_t FE:1;                      /**< bit:      3  Framing Error                                 */
    uint32_t XMIT_IDLE:1;               /**< bit:      4  Transmitter Idle. 0=The channel is actively transmitting PS/2 data. 1=The channel is not transmitting. A low to high transition on this bit generates a PS2 Activity interrupt. */
    uint32_t XMIT_TIME_OUT:1;           /**< bit:      5  Transmitter Time-out. When the XMIT_TIMEOUT bit is set, the PS2_T/R bit is held clear, the PS/2 channel's CLK line is pulled low for a minimum of 300us until the PS/2 Status register is read. */
    uint32_t RX_BUSY:1;                 /**< bit:      6  Receive Channel Busy.\n                  0=The channel is actively receiving PS/2 data\n                  1=The channel is idle */
    uint32_t XMIT_START_TIMEOUT:1;      /**< bit:      7  Transmit Start Timeout.\n                  0=No transmit start timeout detected\n                  1=A start bit was not received within 25 ms following the transmit start event. The transmit start bit time-out condition is also indicated by the XMIT_TIMEOUT bit. */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __PS2_STATUS_bits_t;
#define PS2_STATUS_RESETVALUE               (0x00U)                                       /**<  (PS2_STATUS) PS2 Status Register  Reset Value */

#define PS2_STATUS_RDATA_RDY_Pos              (0)                                            /**< (PS2_STATUS) Receive Data Ready. Reading the Receive Register clears this bit. A low to high transition on this bit generates a PS2 Activity interrupt. Position */
#define PS2_STATUS_RDATA_RDY_Msk              (0x1U << PS2_STATUS_RDATA_RDY_Pos)             /**< (PS2_STATUS) Receive Data Ready. Reading the Receive Register clears this bit. A low to high transition on this bit generates a PS2 Activity interrupt. Mask */
#define PS2_STATUS_REC_TIMEOUT_Pos            (1)                                            /**< (PS2_STATUS) Receive Timeout. The REC_TIMEOUT bit is cleared when the Status Register is read. A low to high transition on this bit generates a PS2 Activity interrupt. (R/WC) Position */
#define PS2_STATUS_REC_TIMEOUT_Msk            (0x1U << PS2_STATUS_REC_TIMEOUT_Pos)           /**< (PS2_STATUS) Receive Timeout. The REC_TIMEOUT bit is cleared when the Status Register is read. A low to high transition on this bit generates a PS2 Activity interrupt. (R/WC) Mask */
#define PS2_STATUS_PE_Pos                     (2)                                            /**< (PS2_STATUS) Parity Error Position */
#define PS2_STATUS_PE_Msk                     (0x1U << PS2_STATUS_PE_Pos)                    /**< (PS2_STATUS) Parity Error Mask */
#define PS2_STATUS_FE_Pos                     (3)                                            /**< (PS2_STATUS) Framing Error Position */
#define PS2_STATUS_FE_Msk                     (0x1U << PS2_STATUS_FE_Pos)                    /**< (PS2_STATUS) Framing Error Mask */
#define PS2_STATUS_XMIT_IDLE_Pos              (4)                                            /**< (PS2_STATUS) Transmitter Idle. 0=The channel is actively transmitting PS/2 data. 1=The channel is not transmitting. A low to high transition on this bit generates a PS2 Activity interrupt. Position */
#define PS2_STATUS_XMIT_IDLE_Msk              (0x1U << PS2_STATUS_XMIT_IDLE_Pos)             /**< (PS2_STATUS) Transmitter Idle. 0=The channel is actively transmitting PS/2 data. 1=The channel is not transmitting. A low to high transition on this bit generates a PS2 Activity interrupt. Mask */
#define PS2_STATUS_XMIT_TIME_OUT_Pos          (5)                                            /**< (PS2_STATUS) Transmitter Time-out. When the XMIT_TIMEOUT bit is set, the PS2_T/R bit is held clear, the PS/2 channel's CLK line is pulled low for a minimum of 300us until the PS/2 Status register is read. Position */
#define PS2_STATUS_XMIT_TIME_OUT_Msk          (0x1U << PS2_STATUS_XMIT_TIME_OUT_Pos)         /**< (PS2_STATUS) Transmitter Time-out. When the XMIT_TIMEOUT bit is set, the PS2_T/R bit is held clear, the PS/2 channel's CLK line is pulled low for a minimum of 300us until the PS/2 Status register is read. Mask */
#define PS2_STATUS_RX_BUSY_Pos                (6)                                            /**< (PS2_STATUS) Receive Channel Busy.\n                  0=The channel is actively receiving PS/2 data\n                  1=The channel is idle Position */
#define PS2_STATUS_RX_BUSY_Msk                (0x1U << PS2_STATUS_RX_BUSY_Pos)               /**< (PS2_STATUS) Receive Channel Busy.\n                  0=The channel is actively receiving PS/2 data\n                  1=The channel is idle Mask */
#define PS2_STATUS_XMIT_START_TIMEOUT_Pos     (7)                                            /**< (PS2_STATUS) Transmit Start Timeout.\n                  0=No transmit start timeout detected\n                  1=A start bit was not received within 25 ms following the transmit start event. The transmit start bit time-out condition is also indicated by the XMIT_TIMEOUT bit. Position */
#define PS2_STATUS_XMIT_START_TIMEOUT_Msk     (0x1U << PS2_STATUS_XMIT_START_TIMEOUT_Pos)    /**< (PS2_STATUS) Transmit Start Timeout.\n                  0=No transmit start timeout detected\n                  1=A start bit was not received within 25 ms following the transmit start event. The transmit start bit time-out condition is also indicated by the XMIT_TIMEOUT bit. Mask */
#define PS2_STATUS_Msk                        (0x000000FFUL)                                 /**< (PS2_STATUS) Register Mask  */

/** \brief PS2 register offsets definitions */
#define PS2_TX_DATA_OFFSET           (0x00)         /**< (PS2_TX_DATA) Writes to bits 7:0 of this register start a transmission of the data in this register to the peripheral Offset */
#define PS2_CONTROL_OFFSET           (0x04)         /**< (PS2_CONTROL) PS2 Control Register Offset */
#define PS2_STATUS_OFFSET            (0x08)         /**< (PS2_STATUS) PS2 Status Register Offset */

/** \brief PS2 register API structure */
typedef struct
{  /* There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. */
  __O   __PS2_TX_DATA_bits_t           TX_DATA;       /**< Offset: 0x00 ( /W  32) Writes to bits 7:0 of this register start a transmission of the data in this register to the peripheral */
  __I   __PS2_RX_DATA_bits_t           RX_DATA;       /**< Offset: 0x00 (R/   32) Data received from a peripheral are recorded in this register in bits 7:0. */
  __IO  __PS2_CONTROL_bits_t           CONTROL;       /**< Offset: 0x04 (R/W  32) PS2 Control Register */
  __IO  __PS2_STATUS_bits_t            STATUS;        /**< Offset: 0x08 (R/W  32) PS2 Status Register */
} ps2_registers_t;
/** @}  end of There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. */

#endif /* _PIC32CX_0525SG12_PS2_COMPONENT_H_ */
