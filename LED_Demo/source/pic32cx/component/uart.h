/**
 * \brief Component description for PIC32CX/0525SG12 UART
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
#ifndef _PIC32CX_0525SG12_UART_COMPONENT_H_
#define _PIC32CX_0525SG12_UART_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_UART The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n        full-function Two Pin Serial Port that supports the standard RS-232 Interface.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR UART */
/* ========================================================================== */

/* -------- UART_DATA_RX_DATA : (UART Offset: 0x00) (R/ 8) UART Receive (Read) Buffer Register (DLAB=0) -------- */
typedef union
{
  uint8_t  w;
} __UART_DATA_RX_DATA_bits_t;
#define UART_DATA_RX_DATA_RESETVALUE        (0x00U)                                       /**<  (UART_DATA_RX_DATA) UART Receive (Read) Buffer Register (DLAB=0)  Reset Value */

#define UART_DATA_RX_DATA_Msk                 (0x00000000UL)                                 /**< (UART_DATA_RX_DATA) Register Mask  */

/* -------- UART_DATA_TX_DATA : (UART Offset: 0x00) (/W 8) UART Transmit (Write) Buffer Register (DLAB=0) -------- */
typedef union
{
  uint8_t  w;
} __UART_DATA_TX_DATA_bits_t;
#define UART_DATA_TX_DATA_RESETVALUE        (0x00U)                                       /**<  (UART_DATA_TX_DATA) UART Transmit (Write) Buffer Register (DLAB=0)  Reset Value */

#define UART_DATA_TX_DATA_Msk                 (0x00000000UL)                                 /**< (UART_DATA_TX_DATA) Register Mask  */

/* -------- UART_DLAB_BAUDRATE_LSB : (UART Offset: 0x00) (R/W 8) UART Programmable BAUD Rate Generator (LSB) Register (DLAB=1) -------- */
typedef union
{
  uint8_t  w;
} __UART_DLAB_BAUDRATE_LSB_bits_t;
#define UART_DLAB_BAUDRATE_LSB_RESETVALUE   (0x00U)                                       /**<  (UART_DLAB_BAUDRATE_LSB) UART Programmable BAUD Rate Generator (LSB) Register (DLAB=1)  Reset Value */

#define UART_DLAB_BAUDRATE_LSB_Msk            (0x00000000UL)                                 /**< (UART_DLAB_BAUDRATE_LSB) Register Mask  */

/* -------- UART_DLAB_BAUDRATE_MSB : (UART Offset: 0x01) (R/W 8) UART Programmable BAUD Rate Generator (MSB) Register (DLAB=1). [6:0] BAUD_RATE_DIVISOR_MSB, [7:7] BAUD_CLK_SEL \n            1=If CLK_SRC is '0', the baud clock is derived from the 1.8432MHz_Clk. If CLK_SRC is '1', this bit has no effect\n            0=If CLK_SRC is '0', the baud clock is derived from the 24MHz_Clk. If CLK_SRC is '1', this bit has no effect -------- */
typedef union
{
  uint8_t  w;
} __UART_DLAB_BAUDRATE_MSB_bits_t;
#define UART_DLAB_BAUDRATE_MSB_RESETVALUE   (0x00U)                                       /**<  (UART_DLAB_BAUDRATE_MSB) UART Programmable BAUD Rate Generator (MSB) Register (DLAB=1). [6:0] BAUD_RATE_DIVISOR_MSB, [7:7] BAUD_CLK_SEL \n            1=If CLK_SRC is '0', the baud clock is derived from the 1.8432MHz_Clk. If CLK_SRC is '1', this bit has no effect\n            0=If CLK_SRC is '0', the baud clock is derived from the 24MHz_Clk. If CLK_SRC is '1', this bit has no effect  Reset Value */

#define UART_DLAB_BAUDRATE_MSB_Msk            (0x00000000UL)                                 /**< (UART_DLAB_BAUDRATE_MSB) Register Mask  */

/* -------- UART_DATA_INT_EN : (UART Offset: 0x01) (R/W 8) UART Interrupt Enable Register (DLAB=0) -------- */
typedef union
{
  struct
  {
    uint8_t  ERDAI:1;                   /**< bit:      0  ERDAI This bit enables the Received Data Available Interrupt (and timeout interrupts in the FIFO mode) when set to logic '1'. */
    uint8_t  ETHREI:1;                  /**< bit:      1  ETHREI This bit enables the Transmitter Holding Register Empty Interrupt when set to logic '1'. */
    uint8_t  ELSI:1;                    /**< bit:      2  ELSI This bit enables the Received Line Status Interrupt when set to logic '1'. */
    uint8_t  EMSI:1;                    /**< bit:      3  EMSI  This bit enables the MODEM Status Interrupt when set to logic '1'. */
    uint8_t  :4;                        /**< bit:   4..7  Reserved                                      */
  };
  uint8_t  w;
} __UART_DATA_INT_EN_bits_t;
#define UART_DATA_INT_EN_RESETVALUE         (0x00U)                                       /**<  (UART_DATA_INT_EN) UART Interrupt Enable Register (DLAB=0)  Reset Value */

#define UART_DATA_INT_EN_ERDAI_Pos            (0)                                            /**< (UART_DATA_INT_EN) ERDAI This bit enables the Received Data Available Interrupt (and timeout interrupts in the FIFO mode) when set to logic '1'. Position */
#define UART_DATA_INT_EN_ERDAI_Msk            (0x1U << UART_DATA_INT_EN_ERDAI_Pos)           /**< (UART_DATA_INT_EN) ERDAI This bit enables the Received Data Available Interrupt (and timeout interrupts in the FIFO mode) when set to logic '1'. Mask */
#define UART_DATA_INT_EN_ETHREI_Pos           (1)                                            /**< (UART_DATA_INT_EN) ETHREI This bit enables the Transmitter Holding Register Empty Interrupt when set to logic '1'. Position */
#define UART_DATA_INT_EN_ETHREI_Msk           (0x1U << UART_DATA_INT_EN_ETHREI_Pos)          /**< (UART_DATA_INT_EN) ETHREI This bit enables the Transmitter Holding Register Empty Interrupt when set to logic '1'. Mask */
#define UART_DATA_INT_EN_ELSI_Pos             (2)                                            /**< (UART_DATA_INT_EN) ELSI This bit enables the Received Line Status Interrupt when set to logic '1'. Position */
#define UART_DATA_INT_EN_ELSI_Msk             (0x1U << UART_DATA_INT_EN_ELSI_Pos)            /**< (UART_DATA_INT_EN) ELSI This bit enables the Received Line Status Interrupt when set to logic '1'. Mask */
#define UART_DATA_INT_EN_EMSI_Pos             (3)                                            /**< (UART_DATA_INT_EN) EMSI  This bit enables the MODEM Status Interrupt when set to logic '1'. Position */
#define UART_DATA_INT_EN_EMSI_Msk             (0x1U << UART_DATA_INT_EN_EMSI_Pos)            /**< (UART_DATA_INT_EN) EMSI  This bit enables the MODEM Status Interrupt when set to logic '1'. Mask */
#define UART_DATA_INT_EN_Msk                  (0x0000000FUL)                                 /**< (UART_DATA_INT_EN) Register Mask  */

/* -------- UART_DLAB_FIFO_CR : (UART Offset: 0x02) (/W 8) UART FIFO Control Register -------- */
typedef union
{
  struct
  {
    uint8_t  EXRF:1;                    /**< bit:      0  EXRF Enable XMIT and RECV FIFO.               */
    uint8_t  CLEAR_RECV_FIFO:1;         /**< bit:      1  CLEAR_RECV_FIFO  Setting this bit to a logic '1' clears all bytes in the RCVR FIFO and resets its counter logic to '0'. */
    uint8_t  CLEAR_XMIT_FIFO:1;         /**< bit:      2  CLEAR_XMIT_FIFO  Setting this bit to a logic '1' clears all bytes in the XMIT FIFO and resets its counter logic to '0' . The shift register is not cleared. This bit is self-clearing. */
    uint8_t  DMA_MODE_SELECT:1;         /**< bit:      3  DMA_MODE_SELECT  Writing to this bit has no effect on the operation of the UART. The RXRDY and TXRDY pins are not available on this chip. */
    uint8_t  :2;                        /**< bit:   4..5  Reserved                                      */
    uint8_t  RECV_FIFO_TRIGGER_LEVEL:2;  /**< bit:   6..7  RECV_FIFO_TRIGGER_LEVEL These bits are used to set the trigger level for the RCVR FIFO interrupt. */
  };
  uint8_t  w;
} __UART_DLAB_FIFO_CR_bits_t;
#define UART_DLAB_FIFO_CR_RESETVALUE        (0x00U)                                       /**<  (UART_DLAB_FIFO_CR) UART FIFO Control Register  Reset Value */

#define UART_DLAB_FIFO_CR_EXRF_Pos            (0)                                            /**< (UART_DLAB_FIFO_CR) EXRF Enable XMIT and RECV FIFO. Position */
#define UART_DLAB_FIFO_CR_EXRF_Msk            (0x1U << UART_DLAB_FIFO_CR_EXRF_Pos)           /**< (UART_DLAB_FIFO_CR) EXRF Enable XMIT and RECV FIFO. Mask */
#define UART_DLAB_FIFO_CR_CLEAR_RECV_FIFO_Pos (1)                                            /**< (UART_DLAB_FIFO_CR) CLEAR_RECV_FIFO  Setting this bit to a logic '1' clears all bytes in the RCVR FIFO and resets its counter logic to '0'. Position */
#define UART_DLAB_FIFO_CR_CLEAR_RECV_FIFO_Msk (0x1U << UART_DLAB_FIFO_CR_CLEAR_RECV_FIFO_Pos)  /**< (UART_DLAB_FIFO_CR) CLEAR_RECV_FIFO  Setting this bit to a logic '1' clears all bytes in the RCVR FIFO and resets its counter logic to '0'. Mask */
#define UART_DLAB_FIFO_CR_CLEAR_XMIT_FIFO_Pos (2)                                            /**< (UART_DLAB_FIFO_CR) CLEAR_XMIT_FIFO  Setting this bit to a logic '1' clears all bytes in the XMIT FIFO and resets its counter logic to '0' . The shift register is not cleared. This bit is self-clearing. Position */
#define UART_DLAB_FIFO_CR_CLEAR_XMIT_FIFO_Msk (0x1U << UART_DLAB_FIFO_CR_CLEAR_XMIT_FIFO_Pos)  /**< (UART_DLAB_FIFO_CR) CLEAR_XMIT_FIFO  Setting this bit to a logic '1' clears all bytes in the XMIT FIFO and resets its counter logic to '0' . The shift register is not cleared. This bit is self-clearing. Mask */
#define UART_DLAB_FIFO_CR_DMA_MODE_SELECT_Pos (3)                                            /**< (UART_DLAB_FIFO_CR) DMA_MODE_SELECT  Writing to this bit has no effect on the operation of the UART. The RXRDY and TXRDY pins are not available on this chip. Position */
#define UART_DLAB_FIFO_CR_DMA_MODE_SELECT_Msk (0x1U << UART_DLAB_FIFO_CR_DMA_MODE_SELECT_Pos)  /**< (UART_DLAB_FIFO_CR) DMA_MODE_SELECT  Writing to this bit has no effect on the operation of the UART. The RXRDY and TXRDY pins are not available on this chip. Mask */
#define UART_DLAB_FIFO_CR_RECV_FIFO_TRIGGER_LEVEL_Pos (6)                                            /**< (UART_DLAB_FIFO_CR) RECV_FIFO_TRIGGER_LEVEL These bits are used to set the trigger level for the RCVR FIFO interrupt. Position */
#define UART_DLAB_FIFO_CR_RECV_FIFO_TRIGGER_LEVEL_Msk (0x3U << UART_DLAB_FIFO_CR_RECV_FIFO_TRIGGER_LEVEL_Pos)  /**< (UART_DLAB_FIFO_CR) RECV_FIFO_TRIGGER_LEVEL These bits are used to set the trigger level for the RCVR FIFO interrupt. Mask */
#define UART_DLAB_FIFO_CR_RECV_FIFO_TRIGGER_LEVEL(value) (UART_DLAB_FIFO_CR_RECV_FIFO_TRIGGER_LEVEL_Msk & ((value) << UART_DLAB_FIFO_CR_RECV_FIFO_TRIGGER_LEVEL_Pos))
#define UART_DLAB_FIFO_CR_Msk                 (0x000000CFUL)                                 /**< (UART_DLAB_FIFO_CR) Register Mask  */

/* -------- UART_DATA_FIFO_CR : (UART Offset: 0x02) (/W 8) UART FIFO Control Register -------- */
typedef union
{
  struct
  {
    uint8_t  EXRF:1;                    /**< bit:      0  EXRF Enable XMIT and RECV FIFO.               */
    uint8_t  CLEAR_RECV_FIFO:1;         /**< bit:      1  CLEAR_RECV_FIFO  Setting this bit to a logic '1' clears all bytes in the RCVR FIFO and resets its counter logic to '0'. */
    uint8_t  CLEAR_XMIT_FIFO:1;         /**< bit:      2  CLEAR_XMIT_FIFO  Setting this bit to a logic '1' clears all bytes in the XMIT FIFO and resets its counter logic to '0' . The shift register is not cleared. This bit is self-clearing. */
    uint8_t  DMA_MODE_SELECT:1;         /**< bit:      3  DMA_MODE_SELECT  Writing to this bit has no effect on the operation of the UART. The RXRDY and TXRDY pins are not available on this chip. */
    uint8_t  :2;                        /**< bit:   4..5  Reserved                                      */
    uint8_t  RECV_FIFO_TRIGGER_LEVEL:2;  /**< bit:   6..7  RECV_FIFO_TRIGGER_LEVEL These bits are used to set the trigger level for the RCVR FIFO interrupt. */
  };
  uint8_t  w;
} __UART_DATA_FIFO_CR_bits_t;
#define UART_DATA_FIFO_CR_RESETVALUE        (0x00U)                                       /**<  (UART_DATA_FIFO_CR) UART FIFO Control Register  Reset Value */

#define UART_DATA_FIFO_CR_EXRF_Pos            (0)                                            /**< (UART_DATA_FIFO_CR) EXRF Enable XMIT and RECV FIFO. Position */
#define UART_DATA_FIFO_CR_EXRF_Msk            (0x1U << UART_DATA_FIFO_CR_EXRF_Pos)           /**< (UART_DATA_FIFO_CR) EXRF Enable XMIT and RECV FIFO. Mask */
#define UART_DATA_FIFO_CR_CLEAR_RECV_FIFO_Pos (1)                                            /**< (UART_DATA_FIFO_CR) CLEAR_RECV_FIFO  Setting this bit to a logic '1' clears all bytes in the RCVR FIFO and resets its counter logic to '0'. Position */
#define UART_DATA_FIFO_CR_CLEAR_RECV_FIFO_Msk (0x1U << UART_DATA_FIFO_CR_CLEAR_RECV_FIFO_Pos)  /**< (UART_DATA_FIFO_CR) CLEAR_RECV_FIFO  Setting this bit to a logic '1' clears all bytes in the RCVR FIFO and resets its counter logic to '0'. Mask */
#define UART_DATA_FIFO_CR_CLEAR_XMIT_FIFO_Pos (2)                                            /**< (UART_DATA_FIFO_CR) CLEAR_XMIT_FIFO  Setting this bit to a logic '1' clears all bytes in the XMIT FIFO and resets its counter logic to '0' . The shift register is not cleared. This bit is self-clearing. Position */
#define UART_DATA_FIFO_CR_CLEAR_XMIT_FIFO_Msk (0x1U << UART_DATA_FIFO_CR_CLEAR_XMIT_FIFO_Pos)  /**< (UART_DATA_FIFO_CR) CLEAR_XMIT_FIFO  Setting this bit to a logic '1' clears all bytes in the XMIT FIFO and resets its counter logic to '0' . The shift register is not cleared. This bit is self-clearing. Mask */
#define UART_DATA_FIFO_CR_DMA_MODE_SELECT_Pos (3)                                            /**< (UART_DATA_FIFO_CR) DMA_MODE_SELECT  Writing to this bit has no effect on the operation of the UART. The RXRDY and TXRDY pins are not available on this chip. Position */
#define UART_DATA_FIFO_CR_DMA_MODE_SELECT_Msk (0x1U << UART_DATA_FIFO_CR_DMA_MODE_SELECT_Pos)  /**< (UART_DATA_FIFO_CR) DMA_MODE_SELECT  Writing to this bit has no effect on the operation of the UART. The RXRDY and TXRDY pins are not available on this chip. Mask */
#define UART_DATA_FIFO_CR_RECV_FIFO_TRIGGER_LEVEL_Pos (6)                                            /**< (UART_DATA_FIFO_CR) RECV_FIFO_TRIGGER_LEVEL These bits are used to set the trigger level for the RCVR FIFO interrupt. Position */
#define UART_DATA_FIFO_CR_RECV_FIFO_TRIGGER_LEVEL_Msk (0x3U << UART_DATA_FIFO_CR_RECV_FIFO_TRIGGER_LEVEL_Pos)  /**< (UART_DATA_FIFO_CR) RECV_FIFO_TRIGGER_LEVEL These bits are used to set the trigger level for the RCVR FIFO interrupt. Mask */
#define UART_DATA_FIFO_CR_RECV_FIFO_TRIGGER_LEVEL(value) (UART_DATA_FIFO_CR_RECV_FIFO_TRIGGER_LEVEL_Msk & ((value) << UART_DATA_FIFO_CR_RECV_FIFO_TRIGGER_LEVEL_Pos))
#define UART_DATA_FIFO_CR_Msk                 (0x000000CFUL)                                 /**< (UART_DATA_FIFO_CR) Register Mask  */

/* -------- UART_DLAB_INT_ID : (UART Offset: 0x02) (R/ 8) UART Interrupt Identification Register -------- */
typedef union
{
  struct
  {
    uint8_t  IPEND:1;                   /**< bit:      0  IPEND  This bit can be used in either a hardwired prioritized or polled environment to indicate whether an interrupt is pending. */
    uint8_t  INTID:3;                   /**< bit:   1..3  INTID  These bits identify the highest priority interrupt pending */
    uint8_t  :2;                        /**< bit:   4..5  Reserved                                      */
    uint8_t  FIFO_EN:2;                 /**< bit:   6..7  These two bits are set when the FIFO CONTROL Register bit 0 equals 1. */
  };
  uint8_t  w;
} __UART_DLAB_INT_ID_bits_t;
#define UART_DLAB_INT_ID_RESETVALUE         (0x00U)                                       /**<  (UART_DLAB_INT_ID) UART Interrupt Identification Register  Reset Value */

#define UART_DLAB_INT_ID_IPEND_Pos            (0)                                            /**< (UART_DLAB_INT_ID) IPEND  This bit can be used in either a hardwired prioritized or polled environment to indicate whether an interrupt is pending. Position */
#define UART_DLAB_INT_ID_IPEND_Msk            (0x1U << UART_DLAB_INT_ID_IPEND_Pos)           /**< (UART_DLAB_INT_ID) IPEND  This bit can be used in either a hardwired prioritized or polled environment to indicate whether an interrupt is pending. Mask */
#define UART_DLAB_INT_ID_INTID_Pos            (1)                                            /**< (UART_DLAB_INT_ID) INTID  These bits identify the highest priority interrupt pending Position */
#define UART_DLAB_INT_ID_INTID_Msk            (0x7U << UART_DLAB_INT_ID_INTID_Pos)           /**< (UART_DLAB_INT_ID) INTID  These bits identify the highest priority interrupt pending Mask */
#define UART_DLAB_INT_ID_INTID(value)         (UART_DLAB_INT_ID_INTID_Msk & ((value) << UART_DLAB_INT_ID_INTID_Pos))
#define UART_DLAB_INT_ID_FIFO_EN_Pos          (6)                                            /**< (UART_DLAB_INT_ID) These two bits are set when the FIFO CONTROL Register bit 0 equals 1. Position */
#define UART_DLAB_INT_ID_FIFO_EN_Msk          (0x3U << UART_DLAB_INT_ID_FIFO_EN_Pos)         /**< (UART_DLAB_INT_ID) These two bits are set when the FIFO CONTROL Register bit 0 equals 1. Mask */
#define UART_DLAB_INT_ID_FIFO_EN(value)       (UART_DLAB_INT_ID_FIFO_EN_Msk & ((value) << UART_DLAB_INT_ID_FIFO_EN_Pos))
#define UART_DLAB_INT_ID_Msk                  (0x000000CFUL)                                 /**< (UART_DLAB_INT_ID) Register Mask  */

/* -------- UART_DATA_INT_ID : (UART Offset: 0x02) (R/ 8) UART Interrupt Identification Register -------- */
typedef union
{
  struct
  {
    uint8_t  IPEND:1;                   /**< bit:      0  IPEND  This bit can be used in either a hardwired prioritized or polled environment to indicate whether an interrupt is pending. */
    uint8_t  INTID:3;                   /**< bit:   1..3  INTID  These bits identify the highest priority interrupt pending */
    uint8_t  :2;                        /**< bit:   4..5  Reserved                                      */
    uint8_t  FIFO_EN:2;                 /**< bit:   6..7  These two bits are set when the FIFO CONTROL Register bit 0 equals 1. */
  };
  uint8_t  w;
} __UART_DATA_INT_ID_bits_t;
#define UART_DATA_INT_ID_RESETVALUE         (0x00U)                                       /**<  (UART_DATA_INT_ID) UART Interrupt Identification Register  Reset Value */

#define UART_DATA_INT_ID_IPEND_Pos            (0)                                            /**< (UART_DATA_INT_ID) IPEND  This bit can be used in either a hardwired prioritized or polled environment to indicate whether an interrupt is pending. Position */
#define UART_DATA_INT_ID_IPEND_Msk            (0x1U << UART_DATA_INT_ID_IPEND_Pos)           /**< (UART_DATA_INT_ID) IPEND  This bit can be used in either a hardwired prioritized or polled environment to indicate whether an interrupt is pending. Mask */
#define UART_DATA_INT_ID_INTID_Pos            (1)                                            /**< (UART_DATA_INT_ID) INTID  These bits identify the highest priority interrupt pending Position */
#define UART_DATA_INT_ID_INTID_Msk            (0x7U << UART_DATA_INT_ID_INTID_Pos)           /**< (UART_DATA_INT_ID) INTID  These bits identify the highest priority interrupt pending Mask */
#define UART_DATA_INT_ID_INTID(value)         (UART_DATA_INT_ID_INTID_Msk & ((value) << UART_DATA_INT_ID_INTID_Pos))
#define UART_DATA_INT_ID_FIFO_EN_Pos          (6)                                            /**< (UART_DATA_INT_ID) These two bits are set when the FIFO CONTROL Register bit 0 equals 1. Position */
#define UART_DATA_INT_ID_FIFO_EN_Msk          (0x3U << UART_DATA_INT_ID_FIFO_EN_Pos)         /**< (UART_DATA_INT_ID) These two bits are set when the FIFO CONTROL Register bit 0 equals 1. Mask */
#define UART_DATA_INT_ID_FIFO_EN(value)       (UART_DATA_INT_ID_FIFO_EN_Msk & ((value) << UART_DATA_INT_ID_FIFO_EN_Pos))
#define UART_DATA_INT_ID_Msk                  (0x000000CFUL)                                 /**< (UART_DATA_INT_ID) Register Mask  */

/* -------- UART_DLAB_LINE_CR : (UART Offset: 0x03) (R/W 8) UART Line Control Register -------- */
typedef union
{
  struct
  {
    uint8_t  WORD_LENGTH:2;             /**< bit:   0..1  WORD_LENGTH These two bits specify the number of bits in each transmitted or received serial character. */
    uint8_t  STOP_BITS:1;               /**< bit:      2  STOP_BITS  This bit specifies the number of stop bits in each transmitted or received serial character. */
    uint8_t  ENABLE_PARITY:1;           /**< bit:      3  ENABLE_PARITY  Parity Enable bit.             */
    uint8_t  PARITY_SELECT:1;           /**< bit:      4  PARITY_SELECT Even Parity Select bit.         */
    uint8_t  STICK_PARITY:1;            /**< bit:      5  STICK_PARITY  Stick Parity bit.               */
    uint8_t  BREAK_CONTROL:1;           /**< bit:      6  BREAK_CONTROL Set Break Control bit           */
    uint8_t  DLAB:1;                    /**< bit:      7  DLAB Divisor Latch Access Bit (DLAB).         */
  };
  uint8_t  w;
} __UART_DLAB_LINE_CR_bits_t;
#define UART_DLAB_LINE_CR_RESETVALUE        (0x00U)                                       /**<  (UART_DLAB_LINE_CR) UART Line Control Register  Reset Value */

#define UART_DLAB_LINE_CR_WORD_LENGTH_Pos     (0)                                            /**< (UART_DLAB_LINE_CR) WORD_LENGTH These two bits specify the number of bits in each transmitted or received serial character. Position */
#define UART_DLAB_LINE_CR_WORD_LENGTH_Msk     (0x3U << UART_DLAB_LINE_CR_WORD_LENGTH_Pos)    /**< (UART_DLAB_LINE_CR) WORD_LENGTH These two bits specify the number of bits in each transmitted or received serial character. Mask */
#define UART_DLAB_LINE_CR_WORD_LENGTH(value)  (UART_DLAB_LINE_CR_WORD_LENGTH_Msk & ((value) << UART_DLAB_LINE_CR_WORD_LENGTH_Pos))
#define UART_DLAB_LINE_CR_STOP_BITS_Pos       (2)                                            /**< (UART_DLAB_LINE_CR) STOP_BITS  This bit specifies the number of stop bits in each transmitted or received serial character. Position */
#define UART_DLAB_LINE_CR_STOP_BITS_Msk       (0x1U << UART_DLAB_LINE_CR_STOP_BITS_Pos)      /**< (UART_DLAB_LINE_CR) STOP_BITS  This bit specifies the number of stop bits in each transmitted or received serial character. Mask */
#define UART_DLAB_LINE_CR_ENABLE_PARITY_Pos   (3)                                            /**< (UART_DLAB_LINE_CR) ENABLE_PARITY  Parity Enable bit. Position */
#define UART_DLAB_LINE_CR_ENABLE_PARITY_Msk   (0x1U << UART_DLAB_LINE_CR_ENABLE_PARITY_Pos)  /**< (UART_DLAB_LINE_CR) ENABLE_PARITY  Parity Enable bit. Mask */
#define UART_DLAB_LINE_CR_PARITY_SELECT_Pos   (4)                                            /**< (UART_DLAB_LINE_CR) PARITY_SELECT Even Parity Select bit. Position */
#define UART_DLAB_LINE_CR_PARITY_SELECT_Msk   (0x1U << UART_DLAB_LINE_CR_PARITY_SELECT_Pos)  /**< (UART_DLAB_LINE_CR) PARITY_SELECT Even Parity Select bit. Mask */
#define UART_DLAB_LINE_CR_STICK_PARITY_Pos    (5)                                            /**< (UART_DLAB_LINE_CR) STICK_PARITY  Stick Parity bit. Position */
#define UART_DLAB_LINE_CR_STICK_PARITY_Msk    (0x1U << UART_DLAB_LINE_CR_STICK_PARITY_Pos)   /**< (UART_DLAB_LINE_CR) STICK_PARITY  Stick Parity bit. Mask */
#define UART_DLAB_LINE_CR_BREAK_CONTROL_Pos   (6)                                            /**< (UART_DLAB_LINE_CR) BREAK_CONTROL Set Break Control bit Position */
#define UART_DLAB_LINE_CR_BREAK_CONTROL_Msk   (0x1U << UART_DLAB_LINE_CR_BREAK_CONTROL_Pos)  /**< (UART_DLAB_LINE_CR) BREAK_CONTROL Set Break Control bit Mask */
#define UART_DLAB_LINE_CR_DLAB_Pos            (7)                                            /**< (UART_DLAB_LINE_CR) DLAB Divisor Latch Access Bit (DLAB). Position */
#define UART_DLAB_LINE_CR_DLAB_Msk            (0x1U << UART_DLAB_LINE_CR_DLAB_Pos)           /**< (UART_DLAB_LINE_CR) DLAB Divisor Latch Access Bit (DLAB). Mask */
#define UART_DLAB_LINE_CR_Msk                 (0x000000FFUL)                                 /**< (UART_DLAB_LINE_CR) Register Mask  */

/* -------- UART_DATA_LINE_CR : (UART Offset: 0x03) (R/W 8) UART Line Control Register -------- */
typedef union
{
  struct
  {
    uint8_t  WORD_LENGTH:2;             /**< bit:   0..1  WORD_LENGTH These two bits specify the number of bits in each transmitted or received serial character. */
    uint8_t  STOP_BITS:1;               /**< bit:      2  STOP_BITS  This bit specifies the number of stop bits in each transmitted or received serial character. */
    uint8_t  ENABLE_PARITY:1;           /**< bit:      3  ENABLE_PARITY  Parity Enable bit.             */
    uint8_t  PARITY_SELECT:1;           /**< bit:      4  PARITY_SELECT Even Parity Select bit.         */
    uint8_t  STICK_PARITY:1;            /**< bit:      5  STICK_PARITY  Stick Parity bit.               */
    uint8_t  BREAK_CONTROL:1;           /**< bit:      6  BREAK_CONTROL Set Break Control bit           */
    uint8_t  DLAB:1;                    /**< bit:      7  DLAB Divisor Latch Access Bit (DLAB).         */
  };
  uint8_t  w;
} __UART_DATA_LINE_CR_bits_t;
#define UART_DATA_LINE_CR_RESETVALUE        (0x00U)                                       /**<  (UART_DATA_LINE_CR) UART Line Control Register  Reset Value */

#define UART_DATA_LINE_CR_WORD_LENGTH_Pos     (0)                                            /**< (UART_DATA_LINE_CR) WORD_LENGTH These two bits specify the number of bits in each transmitted or received serial character. Position */
#define UART_DATA_LINE_CR_WORD_LENGTH_Msk     (0x3U << UART_DATA_LINE_CR_WORD_LENGTH_Pos)    /**< (UART_DATA_LINE_CR) WORD_LENGTH These two bits specify the number of bits in each transmitted or received serial character. Mask */
#define UART_DATA_LINE_CR_WORD_LENGTH(value)  (UART_DATA_LINE_CR_WORD_LENGTH_Msk & ((value) << UART_DATA_LINE_CR_WORD_LENGTH_Pos))
#define UART_DATA_LINE_CR_STOP_BITS_Pos       (2)                                            /**< (UART_DATA_LINE_CR) STOP_BITS  This bit specifies the number of stop bits in each transmitted or received serial character. Position */
#define UART_DATA_LINE_CR_STOP_BITS_Msk       (0x1U << UART_DATA_LINE_CR_STOP_BITS_Pos)      /**< (UART_DATA_LINE_CR) STOP_BITS  This bit specifies the number of stop bits in each transmitted or received serial character. Mask */
#define UART_DATA_LINE_CR_ENABLE_PARITY_Pos   (3)                                            /**< (UART_DATA_LINE_CR) ENABLE_PARITY  Parity Enable bit. Position */
#define UART_DATA_LINE_CR_ENABLE_PARITY_Msk   (0x1U << UART_DATA_LINE_CR_ENABLE_PARITY_Pos)  /**< (UART_DATA_LINE_CR) ENABLE_PARITY  Parity Enable bit. Mask */
#define UART_DATA_LINE_CR_PARITY_SELECT_Pos   (4)                                            /**< (UART_DATA_LINE_CR) PARITY_SELECT Even Parity Select bit. Position */
#define UART_DATA_LINE_CR_PARITY_SELECT_Msk   (0x1U << UART_DATA_LINE_CR_PARITY_SELECT_Pos)  /**< (UART_DATA_LINE_CR) PARITY_SELECT Even Parity Select bit. Mask */
#define UART_DATA_LINE_CR_STICK_PARITY_Pos    (5)                                            /**< (UART_DATA_LINE_CR) STICK_PARITY  Stick Parity bit. Position */
#define UART_DATA_LINE_CR_STICK_PARITY_Msk    (0x1U << UART_DATA_LINE_CR_STICK_PARITY_Pos)   /**< (UART_DATA_LINE_CR) STICK_PARITY  Stick Parity bit. Mask */
#define UART_DATA_LINE_CR_BREAK_CONTROL_Pos   (6)                                            /**< (UART_DATA_LINE_CR) BREAK_CONTROL Set Break Control bit Position */
#define UART_DATA_LINE_CR_BREAK_CONTROL_Msk   (0x1U << UART_DATA_LINE_CR_BREAK_CONTROL_Pos)  /**< (UART_DATA_LINE_CR) BREAK_CONTROL Set Break Control bit Mask */
#define UART_DATA_LINE_CR_DLAB_Pos            (7)                                            /**< (UART_DATA_LINE_CR) DLAB Divisor Latch Access Bit (DLAB). Position */
#define UART_DATA_LINE_CR_DLAB_Msk            (0x1U << UART_DATA_LINE_CR_DLAB_Pos)           /**< (UART_DATA_LINE_CR) DLAB Divisor Latch Access Bit (DLAB). Mask */
#define UART_DATA_LINE_CR_Msk                 (0x000000FFUL)                                 /**< (UART_DATA_LINE_CR) Register Mask  */

/* -------- UART_DLAB_MODEM_CR : (UART Offset: 0x04) (R/W 8) UART Modem Control Register -------- */
typedef union
{
  struct
  {
    uint8_t  DTR:1;                     /**< bit:      0  DTR  This bit controls the Data Terminal Ready (nDTR) output. */
    uint8_t  RTS:1;                     /**< bit:      1  RTS  This bit controls the Request To Send (nRTS) output. */
    uint8_t  OUT1:1;                    /**< bit:      2  OUT1 This bit controls the Output 1 (OUT1) bit. */
    uint8_t  OUT2:1;                    /**< bit:      3  OUT2  This bit is used to enable an UART interrupt. */
    uint8_t  LOOPBACK:1;                /**< bit:      4  LOOPBACK  This bit provides the loopback feature for diagnostic testing of the Serial Port. */
    uint8_t  :3;                        /**< bit:   5..7  Reserved                                      */
  };
  struct
  {
    uint8_t  :2;                        /**< bit:   0..1  Reserved                                      */
    uint8_t  OUT:2;                     /**< bit:   2..3  OUTx This bit controls the Output x (OUTx) bit. */
    uint8_t  :4;                        /**< bit:   4..7  Reserved                                      */
  };
  uint8_t  w;
} __UART_DLAB_MODEM_CR_bits_t;
#define UART_DLAB_MODEM_CR_RESETVALUE       (0x00U)                                       /**<  (UART_DLAB_MODEM_CR) UART Modem Control Register  Reset Value */

#define UART_DLAB_MODEM_CR_DTR_Pos            (0)                                            /**< (UART_DLAB_MODEM_CR) DTR  This bit controls the Data Terminal Ready (nDTR) output. Position */
#define UART_DLAB_MODEM_CR_DTR_Msk            (0x1U << UART_DLAB_MODEM_CR_DTR_Pos)           /**< (UART_DLAB_MODEM_CR) DTR  This bit controls the Data Terminal Ready (nDTR) output. Mask */
#define UART_DLAB_MODEM_CR_RTS_Pos            (1)                                            /**< (UART_DLAB_MODEM_CR) RTS  This bit controls the Request To Send (nRTS) output. Position */
#define UART_DLAB_MODEM_CR_RTS_Msk            (0x1U << UART_DLAB_MODEM_CR_RTS_Pos)           /**< (UART_DLAB_MODEM_CR) RTS  This bit controls the Request To Send (nRTS) output. Mask */
#define UART_DLAB_MODEM_CR_OUT1_Pos           (2)                                            /**< (UART_DLAB_MODEM_CR) OUT1 This bit controls the Output 1 (OUT1) bit. Position */
#define UART_DLAB_MODEM_CR_OUT1_Msk           (0x1U << UART_DLAB_MODEM_CR_OUT1_Pos)          /**< (UART_DLAB_MODEM_CR) OUT1 This bit controls the Output 1 (OUT1) bit. Mask */
#define UART_DLAB_MODEM_CR_OUT2_Pos           (3)                                            /**< (UART_DLAB_MODEM_CR) OUT2  This bit is used to enable an UART interrupt. Position */
#define UART_DLAB_MODEM_CR_OUT2_Msk           (0x1U << UART_DLAB_MODEM_CR_OUT2_Pos)          /**< (UART_DLAB_MODEM_CR) OUT2  This bit is used to enable an UART interrupt. Mask */
#define UART_DLAB_MODEM_CR_LOOPBACK_Pos       (4)                                            /**< (UART_DLAB_MODEM_CR) LOOPBACK  This bit provides the loopback feature for diagnostic testing of the Serial Port. Position */
#define UART_DLAB_MODEM_CR_LOOPBACK_Msk       (0x1U << UART_DLAB_MODEM_CR_LOOPBACK_Pos)      /**< (UART_DLAB_MODEM_CR) LOOPBACK  This bit provides the loopback feature for diagnostic testing of the Serial Port. Mask */
#define UART_DLAB_MODEM_CR_Msk                (0x0000001FUL)                                 /**< (UART_DLAB_MODEM_CR) Register Mask  */
#define UART_DLAB_MODEM_CR_OUT_Pos            (2)                                            /**< (UART_DLAB_MODEM_CR Position) OUTx This bit controls the Output x (OUTx) bit. */
#define UART_DLAB_MODEM_CR_OUT_Msk            (0x3U << UART_DLAB_MODEM_CR_OUT_Pos)           /**< (UART_DLAB_MODEM_CR Mask) OUT */
#define UART_DLAB_MODEM_CR_OUT(value)         (UART_DLAB_MODEM_CR_OUT_Msk & ((value) << UART_DLAB_MODEM_CR_OUT_Pos))

/* -------- UART_DATA_MODEM_CR : (UART Offset: 0x04) (R/W 8) UART Modem Control Register -------- */
typedef union
{
  struct
  {
    uint8_t  DTR:1;                     /**< bit:      0  DTR  This bit controls the Data Terminal Ready (nDTR) output. */
    uint8_t  RTS:1;                     /**< bit:      1  RTS  This bit controls the Request To Send (nRTS) output. */
    uint8_t  OUT1:1;                    /**< bit:      2  OUT1 This bit controls the Output 1 (OUT1) bit. */
    uint8_t  OUT2:1;                    /**< bit:      3  OUT2  This bit is used to enable an UART interrupt. */
    uint8_t  LOOPBACK:1;                /**< bit:      4  LOOPBACK  This bit provides the loopback feature for diagnostic testing of the Serial Port. */
    uint8_t  :3;                        /**< bit:   5..7  Reserved                                      */
  };
  struct
  {
    uint8_t  :2;                        /**< bit:   0..1  Reserved                                      */
    uint8_t  OUT:2;                     /**< bit:   2..3  OUTx This bit controls the Output x (OUTx) bit. */
    uint8_t  :4;                        /**< bit:   4..7  Reserved                                      */
  };
  uint8_t  w;
} __UART_DATA_MODEM_CR_bits_t;
#define UART_DATA_MODEM_CR_RESETVALUE       (0x00U)                                       /**<  (UART_DATA_MODEM_CR) UART Modem Control Register  Reset Value */

#define UART_DATA_MODEM_CR_DTR_Pos            (0)                                            /**< (UART_DATA_MODEM_CR) DTR  This bit controls the Data Terminal Ready (nDTR) output. Position */
#define UART_DATA_MODEM_CR_DTR_Msk            (0x1U << UART_DATA_MODEM_CR_DTR_Pos)           /**< (UART_DATA_MODEM_CR) DTR  This bit controls the Data Terminal Ready (nDTR) output. Mask */
#define UART_DATA_MODEM_CR_RTS_Pos            (1)                                            /**< (UART_DATA_MODEM_CR) RTS  This bit controls the Request To Send (nRTS) output. Position */
#define UART_DATA_MODEM_CR_RTS_Msk            (0x1U << UART_DATA_MODEM_CR_RTS_Pos)           /**< (UART_DATA_MODEM_CR) RTS  This bit controls the Request To Send (nRTS) output. Mask */
#define UART_DATA_MODEM_CR_OUT1_Pos           (2)                                            /**< (UART_DATA_MODEM_CR) OUT1 This bit controls the Output 1 (OUT1) bit. Position */
#define UART_DATA_MODEM_CR_OUT1_Msk           (0x1U << UART_DATA_MODEM_CR_OUT1_Pos)          /**< (UART_DATA_MODEM_CR) OUT1 This bit controls the Output 1 (OUT1) bit. Mask */
#define UART_DATA_MODEM_CR_OUT2_Pos           (3)                                            /**< (UART_DATA_MODEM_CR) OUT2  This bit is used to enable an UART interrupt. Position */
#define UART_DATA_MODEM_CR_OUT2_Msk           (0x1U << UART_DATA_MODEM_CR_OUT2_Pos)          /**< (UART_DATA_MODEM_CR) OUT2  This bit is used to enable an UART interrupt. Mask */
#define UART_DATA_MODEM_CR_LOOPBACK_Pos       (4)                                            /**< (UART_DATA_MODEM_CR) LOOPBACK  This bit provides the loopback feature for diagnostic testing of the Serial Port. Position */
#define UART_DATA_MODEM_CR_LOOPBACK_Msk       (0x1U << UART_DATA_MODEM_CR_LOOPBACK_Pos)      /**< (UART_DATA_MODEM_CR) LOOPBACK  This bit provides the loopback feature for diagnostic testing of the Serial Port. Mask */
#define UART_DATA_MODEM_CR_Msk                (0x0000001FUL)                                 /**< (UART_DATA_MODEM_CR) Register Mask  */
#define UART_DATA_MODEM_CR_OUT_Pos            (2)                                            /**< (UART_DATA_MODEM_CR Position) OUTx This bit controls the Output x (OUTx) bit. */
#define UART_DATA_MODEM_CR_OUT_Msk            (0x3U << UART_DATA_MODEM_CR_OUT_Pos)           /**< (UART_DATA_MODEM_CR Mask) OUT */
#define UART_DATA_MODEM_CR_OUT(value)         (UART_DATA_MODEM_CR_OUT_Msk & ((value) << UART_DATA_MODEM_CR_OUT_Pos))

/* -------- UART_DLAB_LINE_STS : (UART Offset: 0x05) (R/ 8) UART Line Status Register -------- */
typedef union
{
  struct
  {
    uint8_t  DATA_READY:1;              /**< bit:      0  DATA_READY  Data Ready. It is set to a logic '1' whenever a complete incoming character has been received and transferred into the Receiver Buffer Register or the FIFO */
    uint8_t  OVERRUN:1;                 /**< bit:      1  OVERRUN  Overrun Error.                       */
    uint8_t  PE:1;                      /**< bit:      2  PARITY ERROR  Parity Error.                   */
    uint8_t  FRAME_ERROR:1;             /**< bit:      3  FRAME_ERROR Framing Error.                    */
    uint8_t  BREAK_INTERRUPT:1;         /**< bit:      4  BREAK_INTERRUPT   Break Interrupt.            */
    uint8_t  TRANSMIT_EMPTY:1;          /**< bit:      5  TRANSMIT_EMPTY  Transmitter Holding Register Empty Bit 5 indicates that the Serial Port is ready to accept a new character for transmission. */
    uint8_t  TRANSMIT_ERROR:1;          /**< bit:      6  Transmitter Empty. Bit 6 is set to a logic '1' whenever the Transmitter Holding Register (THR) and Transmitter Shift Register (TSR) are both empty. */
    uint8_t  FIFO_ERROR:1;              /**< bit:      7  FIFO_ERROR                                    */
  };
  uint8_t  w;
} __UART_DLAB_LINE_STS_bits_t;
#define UART_DLAB_LINE_STS_RESETVALUE       (0x00U)                                       /**<  (UART_DLAB_LINE_STS) UART Line Status Register  Reset Value */

#define UART_DLAB_LINE_STS_DATA_READY_Pos     (0)                                            /**< (UART_DLAB_LINE_STS) DATA_READY  Data Ready. It is set to a logic '1' whenever a complete incoming character has been received and transferred into the Receiver Buffer Register or the FIFO Position */
#define UART_DLAB_LINE_STS_DATA_READY_Msk     (0x1U << UART_DLAB_LINE_STS_DATA_READY_Pos)    /**< (UART_DLAB_LINE_STS) DATA_READY  Data Ready. It is set to a logic '1' whenever a complete incoming character has been received and transferred into the Receiver Buffer Register or the FIFO Mask */
#define UART_DLAB_LINE_STS_OVERRUN_Pos        (1)                                            /**< (UART_DLAB_LINE_STS) OVERRUN  Overrun Error. Position */
#define UART_DLAB_LINE_STS_OVERRUN_Msk        (0x1U << UART_DLAB_LINE_STS_OVERRUN_Pos)       /**< (UART_DLAB_LINE_STS) OVERRUN  Overrun Error. Mask */
#define UART_DLAB_LINE_STS_PE_Pos             (2)                                            /**< (UART_DLAB_LINE_STS) PARITY ERROR  Parity Error. Position */
#define UART_DLAB_LINE_STS_PE_Msk             (0x1U << UART_DLAB_LINE_STS_PE_Pos)            /**< (UART_DLAB_LINE_STS) PARITY ERROR  Parity Error. Mask */
#define UART_DLAB_LINE_STS_FRAME_ERROR_Pos    (3)                                            /**< (UART_DLAB_LINE_STS) FRAME_ERROR Framing Error. Position */
#define UART_DLAB_LINE_STS_FRAME_ERROR_Msk    (0x1U << UART_DLAB_LINE_STS_FRAME_ERROR_Pos)   /**< (UART_DLAB_LINE_STS) FRAME_ERROR Framing Error. Mask */
#define UART_DLAB_LINE_STS_BREAK_INTERRUPT_Pos (4)                                            /**< (UART_DLAB_LINE_STS) BREAK_INTERRUPT   Break Interrupt. Position */
#define UART_DLAB_LINE_STS_BREAK_INTERRUPT_Msk (0x1U << UART_DLAB_LINE_STS_BREAK_INTERRUPT_Pos)  /**< (UART_DLAB_LINE_STS) BREAK_INTERRUPT   Break Interrupt. Mask */
#define UART_DLAB_LINE_STS_TRANSMIT_EMPTY_Pos (5)                                            /**< (UART_DLAB_LINE_STS) TRANSMIT_EMPTY  Transmitter Holding Register Empty Bit 5 indicates that the Serial Port is ready to accept a new character for transmission. Position */
#define UART_DLAB_LINE_STS_TRANSMIT_EMPTY_Msk (0x1U << UART_DLAB_LINE_STS_TRANSMIT_EMPTY_Pos)  /**< (UART_DLAB_LINE_STS) TRANSMIT_EMPTY  Transmitter Holding Register Empty Bit 5 indicates that the Serial Port is ready to accept a new character for transmission. Mask */
#define UART_DLAB_LINE_STS_TRANSMIT_ERROR_Pos (6)                                            /**< (UART_DLAB_LINE_STS) Transmitter Empty. Bit 6 is set to a logic '1' whenever the Transmitter Holding Register (THR) and Transmitter Shift Register (TSR) are both empty. Position */
#define UART_DLAB_LINE_STS_TRANSMIT_ERROR_Msk (0x1U << UART_DLAB_LINE_STS_TRANSMIT_ERROR_Pos)  /**< (UART_DLAB_LINE_STS) Transmitter Empty. Bit 6 is set to a logic '1' whenever the Transmitter Holding Register (THR) and Transmitter Shift Register (TSR) are both empty. Mask */
#define UART_DLAB_LINE_STS_FIFO_ERROR_Pos     (7)                                            /**< (UART_DLAB_LINE_STS) FIFO_ERROR Position */
#define UART_DLAB_LINE_STS_FIFO_ERROR_Msk     (0x1U << UART_DLAB_LINE_STS_FIFO_ERROR_Pos)    /**< (UART_DLAB_LINE_STS) FIFO_ERROR Mask */
#define UART_DLAB_LINE_STS_Msk                (0x000000FFUL)                                 /**< (UART_DLAB_LINE_STS) Register Mask  */

/* -------- UART_DATA_LINE_STS : (UART Offset: 0x05) (R/ 8) UART Line Status Register -------- */
typedef union
{
  struct
  {
    uint8_t  DATA_READY:1;              /**< bit:      0  DATA_READY  Data Ready. It is set to a logic '1' whenever a complete incoming character has been received and transferred into the Receiver Buffer Register or the FIFO */
    uint8_t  OVERRUN:1;                 /**< bit:      1  OVERRUN  Overrun Error.                       */
    uint8_t  PE:1;                      /**< bit:      2  PARITY ERROR  Parity Error.                   */
    uint8_t  FRAME_ERROR:1;             /**< bit:      3  FRAME_ERROR Framing Error.                    */
    uint8_t  BREAK_INTERRUPT:1;         /**< bit:      4  BREAK_INTERRUPT   Break Interrupt.            */
    uint8_t  TRANSMIT_EMPTY:1;          /**< bit:      5  TRANSMIT_EMPTY  Transmitter Holding Register Empty Bit 5 indicates that the Serial Port is ready to accept a new character for transmission. */
    uint8_t  TRANSMIT_ERROR:1;          /**< bit:      6  Transmitter Empty. Bit 6 is set to a logic '1' whenever the Transmitter Holding Register (THR) and Transmitter Shift Register (TSR) are both empty. */
    uint8_t  FIFO_ERROR:1;              /**< bit:      7  FIFO_ERROR                                    */
  };
  uint8_t  w;
} __UART_DATA_LINE_STS_bits_t;
#define UART_DATA_LINE_STS_RESETVALUE       (0x00U)                                       /**<  (UART_DATA_LINE_STS) UART Line Status Register  Reset Value */

#define UART_DATA_LINE_STS_DATA_READY_Pos     (0)                                            /**< (UART_DATA_LINE_STS) DATA_READY  Data Ready. It is set to a logic '1' whenever a complete incoming character has been received and transferred into the Receiver Buffer Register or the FIFO Position */
#define UART_DATA_LINE_STS_DATA_READY_Msk     (0x1U << UART_DATA_LINE_STS_DATA_READY_Pos)    /**< (UART_DATA_LINE_STS) DATA_READY  Data Ready. It is set to a logic '1' whenever a complete incoming character has been received and transferred into the Receiver Buffer Register or the FIFO Mask */
#define UART_DATA_LINE_STS_OVERRUN_Pos        (1)                                            /**< (UART_DATA_LINE_STS) OVERRUN  Overrun Error. Position */
#define UART_DATA_LINE_STS_OVERRUN_Msk        (0x1U << UART_DATA_LINE_STS_OVERRUN_Pos)       /**< (UART_DATA_LINE_STS) OVERRUN  Overrun Error. Mask */
#define UART_DATA_LINE_STS_PE_Pos             (2)                                            /**< (UART_DATA_LINE_STS) PARITY ERROR  Parity Error. Position */
#define UART_DATA_LINE_STS_PE_Msk             (0x1U << UART_DATA_LINE_STS_PE_Pos)            /**< (UART_DATA_LINE_STS) PARITY ERROR  Parity Error. Mask */
#define UART_DATA_LINE_STS_FRAME_ERROR_Pos    (3)                                            /**< (UART_DATA_LINE_STS) FRAME_ERROR Framing Error. Position */
#define UART_DATA_LINE_STS_FRAME_ERROR_Msk    (0x1U << UART_DATA_LINE_STS_FRAME_ERROR_Pos)   /**< (UART_DATA_LINE_STS) FRAME_ERROR Framing Error. Mask */
#define UART_DATA_LINE_STS_BREAK_INTERRUPT_Pos (4)                                            /**< (UART_DATA_LINE_STS) BREAK_INTERRUPT   Break Interrupt. Position */
#define UART_DATA_LINE_STS_BREAK_INTERRUPT_Msk (0x1U << UART_DATA_LINE_STS_BREAK_INTERRUPT_Pos)  /**< (UART_DATA_LINE_STS) BREAK_INTERRUPT   Break Interrupt. Mask */
#define UART_DATA_LINE_STS_TRANSMIT_EMPTY_Pos (5)                                            /**< (UART_DATA_LINE_STS) TRANSMIT_EMPTY  Transmitter Holding Register Empty Bit 5 indicates that the Serial Port is ready to accept a new character for transmission. Position */
#define UART_DATA_LINE_STS_TRANSMIT_EMPTY_Msk (0x1U << UART_DATA_LINE_STS_TRANSMIT_EMPTY_Pos)  /**< (UART_DATA_LINE_STS) TRANSMIT_EMPTY  Transmitter Holding Register Empty Bit 5 indicates that the Serial Port is ready to accept a new character for transmission. Mask */
#define UART_DATA_LINE_STS_TRANSMIT_ERROR_Pos (6)                                            /**< (UART_DATA_LINE_STS) Transmitter Empty. Bit 6 is set to a logic '1' whenever the Transmitter Holding Register (THR) and Transmitter Shift Register (TSR) are both empty. Position */
#define UART_DATA_LINE_STS_TRANSMIT_ERROR_Msk (0x1U << UART_DATA_LINE_STS_TRANSMIT_ERROR_Pos)  /**< (UART_DATA_LINE_STS) Transmitter Empty. Bit 6 is set to a logic '1' whenever the Transmitter Holding Register (THR) and Transmitter Shift Register (TSR) are both empty. Mask */
#define UART_DATA_LINE_STS_FIFO_ERROR_Pos     (7)                                            /**< (UART_DATA_LINE_STS) FIFO_ERROR Position */
#define UART_DATA_LINE_STS_FIFO_ERROR_Msk     (0x1U << UART_DATA_LINE_STS_FIFO_ERROR_Pos)    /**< (UART_DATA_LINE_STS) FIFO_ERROR Mask */
#define UART_DATA_LINE_STS_Msk                (0x000000FFUL)                                 /**< (UART_DATA_LINE_STS) Register Mask  */

/* -------- UART_DLAB_MODEM_STS : (UART Offset: 0x06) (R/ 8) UART Modem Status Register -------- */
typedef union
{
  struct
  {
    uint8_t  CTS:1;                     /**< bit:      0  CTS  Delta Clear To Send (DCTS).              */
    uint8_t  DSR:1;                     /**< bit:      1  DSR  Delta Data Set Ready (DDSR).             */
    uint8_t  RI:1;                      /**< bit:      2  RI  Trailing Edge of Ring Indicator (TERI).   */
    uint8_t  DCD:1;                     /**< bit:      3  DCD  Delta Data Carrier Detect (DDCD).        */
    uint8_t  nCTS:1;                    /**< bit:      4  nCTS  This bit is the complement of the Clear To Send (nCTS) input. */
    uint8_t  nDSR:1;                    /**< bit:      5  This bit is the complement of the Data Set Ready (nDSR) input. */
    uint8_t  nRI:1;                     /**< bit:      6  nRI This bit is the complement of the Ring Indicator (nRI) input. */
    uint8_t  nDCD:1;                    /**< bit:      7  nDCD   This bit is the complement of the Data Carrier Detect (nDCD) input. */
  };
  uint8_t  w;
} __UART_DLAB_MODEM_STS_bits_t;
#define UART_DLAB_MODEM_STS_RESETVALUE      (0x00U)                                       /**<  (UART_DLAB_MODEM_STS) UART Modem Status Register  Reset Value */

#define UART_DLAB_MODEM_STS_CTS_Pos           (0)                                            /**< (UART_DLAB_MODEM_STS) CTS  Delta Clear To Send (DCTS). Position */
#define UART_DLAB_MODEM_STS_CTS_Msk           (0x1U << UART_DLAB_MODEM_STS_CTS_Pos)          /**< (UART_DLAB_MODEM_STS) CTS  Delta Clear To Send (DCTS). Mask */
#define UART_DLAB_MODEM_STS_DSR_Pos           (1)                                            /**< (UART_DLAB_MODEM_STS) DSR  Delta Data Set Ready (DDSR). Position */
#define UART_DLAB_MODEM_STS_DSR_Msk           (0x1U << UART_DLAB_MODEM_STS_DSR_Pos)          /**< (UART_DLAB_MODEM_STS) DSR  Delta Data Set Ready (DDSR). Mask */
#define UART_DLAB_MODEM_STS_RI_Pos            (2)                                            /**< (UART_DLAB_MODEM_STS) RI  Trailing Edge of Ring Indicator (TERI). Position */
#define UART_DLAB_MODEM_STS_RI_Msk            (0x1U << UART_DLAB_MODEM_STS_RI_Pos)           /**< (UART_DLAB_MODEM_STS) RI  Trailing Edge of Ring Indicator (TERI). Mask */
#define UART_DLAB_MODEM_STS_DCD_Pos           (3)                                            /**< (UART_DLAB_MODEM_STS) DCD  Delta Data Carrier Detect (DDCD). Position */
#define UART_DLAB_MODEM_STS_DCD_Msk           (0x1U << UART_DLAB_MODEM_STS_DCD_Pos)          /**< (UART_DLAB_MODEM_STS) DCD  Delta Data Carrier Detect (DDCD). Mask */
#define UART_DLAB_MODEM_STS_nCTS_Pos          (4)                                            /**< (UART_DLAB_MODEM_STS) nCTS  This bit is the complement of the Clear To Send (nCTS) input. Position */
#define UART_DLAB_MODEM_STS_nCTS_Msk          (0x1U << UART_DLAB_MODEM_STS_nCTS_Pos)         /**< (UART_DLAB_MODEM_STS) nCTS  This bit is the complement of the Clear To Send (nCTS) input. Mask */
#define UART_DLAB_MODEM_STS_nDSR_Pos          (5)                                            /**< (UART_DLAB_MODEM_STS) This bit is the complement of the Data Set Ready (nDSR) input. Position */
#define UART_DLAB_MODEM_STS_nDSR_Msk          (0x1U << UART_DLAB_MODEM_STS_nDSR_Pos)         /**< (UART_DLAB_MODEM_STS) This bit is the complement of the Data Set Ready (nDSR) input. Mask */
#define UART_DLAB_MODEM_STS_nRI_Pos           (6)                                            /**< (UART_DLAB_MODEM_STS) nRI This bit is the complement of the Ring Indicator (nRI) input. Position */
#define UART_DLAB_MODEM_STS_nRI_Msk           (0x1U << UART_DLAB_MODEM_STS_nRI_Pos)          /**< (UART_DLAB_MODEM_STS) nRI This bit is the complement of the Ring Indicator (nRI) input. Mask */
#define UART_DLAB_MODEM_STS_nDCD_Pos          (7)                                            /**< (UART_DLAB_MODEM_STS) nDCD   This bit is the complement of the Data Carrier Detect (nDCD) input. Position */
#define UART_DLAB_MODEM_STS_nDCD_Msk          (0x1U << UART_DLAB_MODEM_STS_nDCD_Pos)         /**< (UART_DLAB_MODEM_STS) nDCD   This bit is the complement of the Data Carrier Detect (nDCD) input. Mask */
#define UART_DLAB_MODEM_STS_Msk               (0x000000FFUL)                                 /**< (UART_DLAB_MODEM_STS) Register Mask  */

/* -------- UART_DATA_MODEM_STS : (UART Offset: 0x06) (R/ 8) UART Modem Status Register -------- */
typedef union
{
  struct
  {
    uint8_t  CTS:1;                     /**< bit:      0  CTS  Delta Clear To Send (DCTS).              */
    uint8_t  DSR:1;                     /**< bit:      1  DSR  Delta Data Set Ready (DDSR).             */
    uint8_t  RI:1;                      /**< bit:      2  RI  Trailing Edge of Ring Indicator (TERI).   */
    uint8_t  DCD:1;                     /**< bit:      3  DCD  Delta Data Carrier Detect (DDCD).        */
    uint8_t  nCTS:1;                    /**< bit:      4  nCTS  This bit is the complement of the Clear To Send (nCTS) input. */
    uint8_t  nDSR:1;                    /**< bit:      5  This bit is the complement of the Data Set Ready (nDSR) input. */
    uint8_t  nRI:1;                     /**< bit:      6  nRI This bit is the complement of the Ring Indicator (nRI) input. */
    uint8_t  nDCD:1;                    /**< bit:      7  nDCD   This bit is the complement of the Data Carrier Detect (nDCD) input. */
  };
  uint8_t  w;
} __UART_DATA_MODEM_STS_bits_t;
#define UART_DATA_MODEM_STS_RESETVALUE      (0x00U)                                       /**<  (UART_DATA_MODEM_STS) UART Modem Status Register  Reset Value */

#define UART_DATA_MODEM_STS_CTS_Pos           (0)                                            /**< (UART_DATA_MODEM_STS) CTS  Delta Clear To Send (DCTS). Position */
#define UART_DATA_MODEM_STS_CTS_Msk           (0x1U << UART_DATA_MODEM_STS_CTS_Pos)          /**< (UART_DATA_MODEM_STS) CTS  Delta Clear To Send (DCTS). Mask */
#define UART_DATA_MODEM_STS_DSR_Pos           (1)                                            /**< (UART_DATA_MODEM_STS) DSR  Delta Data Set Ready (DDSR). Position */
#define UART_DATA_MODEM_STS_DSR_Msk           (0x1U << UART_DATA_MODEM_STS_DSR_Pos)          /**< (UART_DATA_MODEM_STS) DSR  Delta Data Set Ready (DDSR). Mask */
#define UART_DATA_MODEM_STS_RI_Pos            (2)                                            /**< (UART_DATA_MODEM_STS) RI  Trailing Edge of Ring Indicator (TERI). Position */
#define UART_DATA_MODEM_STS_RI_Msk            (0x1U << UART_DATA_MODEM_STS_RI_Pos)           /**< (UART_DATA_MODEM_STS) RI  Trailing Edge of Ring Indicator (TERI). Mask */
#define UART_DATA_MODEM_STS_DCD_Pos           (3)                                            /**< (UART_DATA_MODEM_STS) DCD  Delta Data Carrier Detect (DDCD). Position */
#define UART_DATA_MODEM_STS_DCD_Msk           (0x1U << UART_DATA_MODEM_STS_DCD_Pos)          /**< (UART_DATA_MODEM_STS) DCD  Delta Data Carrier Detect (DDCD). Mask */
#define UART_DATA_MODEM_STS_nCTS_Pos          (4)                                            /**< (UART_DATA_MODEM_STS) nCTS  This bit is the complement of the Clear To Send (nCTS) input. Position */
#define UART_DATA_MODEM_STS_nCTS_Msk          (0x1U << UART_DATA_MODEM_STS_nCTS_Pos)         /**< (UART_DATA_MODEM_STS) nCTS  This bit is the complement of the Clear To Send (nCTS) input. Mask */
#define UART_DATA_MODEM_STS_nDSR_Pos          (5)                                            /**< (UART_DATA_MODEM_STS) This bit is the complement of the Data Set Ready (nDSR) input. Position */
#define UART_DATA_MODEM_STS_nDSR_Msk          (0x1U << UART_DATA_MODEM_STS_nDSR_Pos)         /**< (UART_DATA_MODEM_STS) This bit is the complement of the Data Set Ready (nDSR) input. Mask */
#define UART_DATA_MODEM_STS_nRI_Pos           (6)                                            /**< (UART_DATA_MODEM_STS) nRI This bit is the complement of the Ring Indicator (nRI) input. Position */
#define UART_DATA_MODEM_STS_nRI_Msk           (0x1U << UART_DATA_MODEM_STS_nRI_Pos)          /**< (UART_DATA_MODEM_STS) nRI This bit is the complement of the Ring Indicator (nRI) input. Mask */
#define UART_DATA_MODEM_STS_nDCD_Pos          (7)                                            /**< (UART_DATA_MODEM_STS) nDCD   This bit is the complement of the Data Carrier Detect (nDCD) input. Position */
#define UART_DATA_MODEM_STS_nDCD_Msk          (0x1U << UART_DATA_MODEM_STS_nDCD_Pos)         /**< (UART_DATA_MODEM_STS) nDCD   This bit is the complement of the Data Carrier Detect (nDCD) input. Mask */
#define UART_DATA_MODEM_STS_Msk               (0x000000FFUL)                                 /**< (UART_DATA_MODEM_STS) Register Mask  */

/* -------- UART_DLAB_SCRATCHPAD : (UART Offset: 0x07) (R/W 8) UART Scratchpad Register    This 8 bit read/write register has no effect on the operation of the Serial Port. It is intended as a scratchpad register to be used by the programmer to hold data temporarily. -------- */
typedef union
{
  uint8_t  w;
} __UART_DLAB_SCRATCHPAD_bits_t;
#define UART_DLAB_SCRATCHPAD_RESETVALUE     (0x00U)                                       /**<  (UART_DLAB_SCRATCHPAD) UART Scratchpad Register    This 8 bit read/write register has no effect on the operation of the Serial Port. It is intended as a scratchpad register to be used by the programmer to hold data temporarily.  Reset Value */

#define UART_DLAB_SCRATCHPAD_Msk              (0x00000000UL)                                 /**< (UART_DLAB_SCRATCHPAD) Register Mask  */

/* -------- UART_DATA_SCRATCHPAD : (UART Offset: 0x07) (R/W 8) UART Scratchpad Register    This 8 bit read/write register has no effect on the operation of the Serial Port. It is intended as a scratchpad register to be used by the programmer to hold data temporarily. -------- */
typedef union
{
  uint8_t  w;
} __UART_DATA_SCRATCHPAD_bits_t;
#define UART_DATA_SCRATCHPAD_RESETVALUE     (0x00U)                                       /**<  (UART_DATA_SCRATCHPAD) UART Scratchpad Register    This 8 bit read/write register has no effect on the operation of the Serial Port. It is intended as a scratchpad register to be used by the programmer to hold data temporarily.  Reset Value */

#define UART_DATA_SCRATCHPAD_Msk              (0x00000000UL)                                 /**< (UART_DATA_SCRATCHPAD) Register Mask  */

/* -------- UART_DLAB_ACTIVATE : (UART Offset: 0x330) (R/W 8) UART Activate Register. [0:0] ACTIVATE When this bit is 1, the UART logical device is powered and functional. When this bit is 0, the UART logical device is powered down and inactive. -------- */
typedef union
{
  uint8_t  w;
} __UART_DLAB_ACTIVATE_bits_t;
#define UART_DLAB_ACTIVATE_RESETVALUE       (0x00U)                                       /**<  (UART_DLAB_ACTIVATE) UART Activate Register. [0:0] ACTIVATE When this bit is 1, the UART logical device is powered and functional. When this bit is 0, the UART logical device is powered down and inactive.  Reset Value */

#define UART_DLAB_ACTIVATE_Msk                (0x00000000UL)                                 /**< (UART_DLAB_ACTIVATE) Register Mask  */

/* -------- UART_DATA_ACTIVATE : (UART Offset: 0x330) (R/W 8) UART Activate Register. [0:0] ACTIVATE When this bit is 1, the UART logical device is powered and functional. When this bit is 0, the UART logical device is powered down and inactive. -------- */
typedef union
{
  uint8_t  w;
} __UART_DATA_ACTIVATE_bits_t;
#define UART_DATA_ACTIVATE_RESETVALUE       (0x00U)                                       /**<  (UART_DATA_ACTIVATE) UART Activate Register. [0:0] ACTIVATE When this bit is 1, the UART logical device is powered and functional. When this bit is 0, the UART logical device is powered down and inactive.  Reset Value */

#define UART_DATA_ACTIVATE_Msk                (0x00000000UL)                                 /**< (UART_DATA_ACTIVATE) Register Mask  */

/* -------- UART_DLAB_CONFIG : (UART Offset: 0x3f0) (R/W 8) UART Config Select Register -------- */
typedef union
{
  struct
  {
    uint8_t  CLK_SRC:1;                 /**< bit:      0  CLK_SRC  1=The UART Baud Clock is derived from an external clock source, 0=The UART Baud Clock is derived from one of the two internal clock sources */
    uint8_t  POWER:1;                   /**< bit:      1  POWER  1=The RESET reset signal is derived from nSIO_RESET, 0=The RESET reset signal is derived from VCC1_RESET */
    uint8_t  POLARITY:1;                /**< bit:      2  POLARITY  1=The UART_TX and UART_RX pins functions are inverted, 0=The UART_TX and UART_RX pins functions are not inverted */
    uint8_t  :5;                        /**< bit:   3..7  Reserved                                      */
  };
  uint8_t  w;
} __UART_DLAB_CONFIG_bits_t;
#define UART_DLAB_CONFIG_RESETVALUE         (0x00U)                                       /**<  (UART_DLAB_CONFIG) UART Config Select Register  Reset Value */

#define UART_DLAB_CONFIG_CLK_SRC_Pos          (0)                                            /**< (UART_DLAB_CONFIG) CLK_SRC  1=The UART Baud Clock is derived from an external clock source, 0=The UART Baud Clock is derived from one of the two internal clock sources Position */
#define UART_DLAB_CONFIG_CLK_SRC_Msk          (0x1U << UART_DLAB_CONFIG_CLK_SRC_Pos)         /**< (UART_DLAB_CONFIG) CLK_SRC  1=The UART Baud Clock is derived from an external clock source, 0=The UART Baud Clock is derived from one of the two internal clock sources Mask */
#define UART_DLAB_CONFIG_POWER_Pos            (1)                                            /**< (UART_DLAB_CONFIG) POWER  1=The RESET reset signal is derived from nSIO_RESET, 0=The RESET reset signal is derived from VCC1_RESET Position */
#define UART_DLAB_CONFIG_POWER_Msk            (0x1U << UART_DLAB_CONFIG_POWER_Pos)           /**< (UART_DLAB_CONFIG) POWER  1=The RESET reset signal is derived from nSIO_RESET, 0=The RESET reset signal is derived from VCC1_RESET Mask */
#define UART_DLAB_CONFIG_POLARITY_Pos         (2)                                            /**< (UART_DLAB_CONFIG) POLARITY  1=The UART_TX and UART_RX pins functions are inverted, 0=The UART_TX and UART_RX pins functions are not inverted Position */
#define UART_DLAB_CONFIG_POLARITY_Msk         (0x1U << UART_DLAB_CONFIG_POLARITY_Pos)        /**< (UART_DLAB_CONFIG) POLARITY  1=The UART_TX and UART_RX pins functions are inverted, 0=The UART_TX and UART_RX pins functions are not inverted Mask */
#define UART_DLAB_CONFIG_Msk                  (0x00000007UL)                                 /**< (UART_DLAB_CONFIG) Register Mask  */

/* -------- UART_DATA_CONFIG : (UART Offset: 0x3f0) (R/W 8) UART Config Select Register -------- */
typedef union
{
  struct
  {
    uint8_t  CLK_SRC:1;                 /**< bit:      0  CLK_SRC  1=The UART Baud Clock is derived from an external clock source, 0=The UART Baud Clock is derived from one of the two internal clock sources */
    uint8_t  POWER:1;                   /**< bit:      1  POWER  1=The RESET reset signal is derived from nSIO_RESET, 0=The RESET reset signal is derived from VCC1_RESET */
    uint8_t  POLARITY:1;                /**< bit:      2  POLARITY  1=The UART_TX and UART_RX pins functions are inverted, 0=The UART_TX and UART_RX pins functions are not inverted */
    uint8_t  :5;                        /**< bit:   3..7  Reserved                                      */
  };
  uint8_t  w;
} __UART_DATA_CONFIG_bits_t;
#define UART_DATA_CONFIG_RESETVALUE         (0x00U)                                       /**<  (UART_DATA_CONFIG) UART Config Select Register  Reset Value */

#define UART_DATA_CONFIG_CLK_SRC_Pos          (0)                                            /**< (UART_DATA_CONFIG) CLK_SRC  1=The UART Baud Clock is derived from an external clock source, 0=The UART Baud Clock is derived from one of the two internal clock sources Position */
#define UART_DATA_CONFIG_CLK_SRC_Msk          (0x1U << UART_DATA_CONFIG_CLK_SRC_Pos)         /**< (UART_DATA_CONFIG) CLK_SRC  1=The UART Baud Clock is derived from an external clock source, 0=The UART Baud Clock is derived from one of the two internal clock sources Mask */
#define UART_DATA_CONFIG_POWER_Pos            (1)                                            /**< (UART_DATA_CONFIG) POWER  1=The RESET reset signal is derived from nSIO_RESET, 0=The RESET reset signal is derived from VCC1_RESET Position */
#define UART_DATA_CONFIG_POWER_Msk            (0x1U << UART_DATA_CONFIG_POWER_Pos)           /**< (UART_DATA_CONFIG) POWER  1=The RESET reset signal is derived from nSIO_RESET, 0=The RESET reset signal is derived from VCC1_RESET Mask */
#define UART_DATA_CONFIG_POLARITY_Pos         (2)                                            /**< (UART_DATA_CONFIG) POLARITY  1=The UART_TX and UART_RX pins functions are inverted, 0=The UART_TX and UART_RX pins functions are not inverted Position */
#define UART_DATA_CONFIG_POLARITY_Msk         (0x1U << UART_DATA_CONFIG_POLARITY_Pos)        /**< (UART_DATA_CONFIG) POLARITY  1=The UART_TX and UART_RX pins functions are inverted, 0=The UART_TX and UART_RX pins functions are not inverted Mask */
#define UART_DATA_CONFIG_Msk                  (0x00000007UL)                                 /**< (UART_DATA_CONFIG) Register Mask  */

/** \brief UART register offsets definitions */
#define UART_RX_DATA_OFFSET          (0x00)         /**< (UART_RX_DATA) UART Receive (Read) Buffer Register (DLAB=0) Offset */
#define UART_BAUDRATE_MSB_OFFSET     (0x01)         /**< (UART_BAUDRATE_MSB) UART Programmable BAUD Rate Generator (MSB) Register (DLAB=1). [6:0] BAUD_RATE_DIVISOR_MSB, [7:7] BAUD_CLK_SEL \n            1=If CLK_SRC is '0', the baud clock is derived from the 1.8432MHz_Clk. If CLK_SRC is '1', this bit has no effect\n            0=If CLK_SRC is '0', the baud clock is derived from the 24MHz_Clk. If CLK_SRC is '1', this bit has no effect Offset */
#define UART_FIFO_CR_OFFSET          (0x02)         /**< (UART_FIFO_CR) UART FIFO Control Register Offset */
#define UART_LINE_CR_OFFSET          (0x03)         /**< (UART_LINE_CR) UART Line Control Register Offset */
#define UART_MODEM_CR_OFFSET         (0x04)         /**< (UART_MODEM_CR) UART Modem Control Register Offset */
#define UART_LINE_STS_OFFSET         (0x05)         /**< (UART_LINE_STS) UART Line Status Register Offset */
#define UART_MODEM_STS_OFFSET        (0x06)         /**< (UART_MODEM_STS) UART Modem Status Register Offset */
#define UART_SCRATCHPAD_OFFSET       (0x07)         /**< (UART_SCRATCHPAD) UART Scratchpad Register    This 8 bit read/write register has no effect on the operation of the Serial Port. It is intended as a scratchpad register to be used by the programmer to hold data temporarily. Offset */
#define UART_ACTIVATE_OFFSET         (0x330)        /**< (UART_ACTIVATE) UART Activate Register. [0:0] ACTIVATE When this bit is 1, the UART logical device is powered and functional. When this bit is 0, the UART logical device is powered down and inactive. Offset */
#define UART_CONFIG_OFFSET           (0x3F0)        /**< (UART_CONFIG) UART Config Select Register Offset */

/** \brief UART register API structure */
typedef struct
{  /* The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n        full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
  __I   __UART_DATA_RX_DATA_bits_t     RX_DATA;       /**< Offset: 0x00 (R/    8) UART Receive (Read) Buffer Register (DLAB=0) */
  __O   __UART_DATA_TX_DATA_bits_t     TX_DATA;       /**< Offset: 0x00 ( /W   8) UART Transmit (Write) Buffer Register (DLAB=0) */
  __IO  __UART_DATA_INT_EN_bits_t      INT_EN;        /**< Offset: 0x01 (R/W   8) UART Interrupt Enable Register (DLAB=0) */
  __O   __UART_DLAB DATA_FIFO_CR_bits_t FIFO_CR;       /**< Offset: 0x02 ( /W   8) UART FIFO Control Register */
  __I   __UART_DLAB DATA_INT_ID_bits_t INT_ID;        /**< Offset: 0x02 (R/    8) UART Interrupt Identification Register */
  __IO  __UART_DLAB DATA_LINE_CR_bits_t LINE_CR;       /**< Offset: 0x03 (R/W   8) UART Line Control Register */
  __IO  __UART_DLAB DATA_MODEM_CR_bits_t MODEM_CR;      /**< Offset: 0x04 (R/W   8) UART Modem Control Register */
  __I   __UART_DLAB DATA_LINE_STS_bits_t LINE_STS;      /**< Offset: 0x05 (R/    8) UART Line Status Register */
  __I   __UART_DLAB DATA_MODEM_STS_bits_t MODEM_STS;     /**< Offset: 0x06 (R/    8) UART Modem Status Register */
  __IO  __UART_DLAB DATA_SCRATCHPAD_bits_t SCRATCHPAD;    /**< Offset: 0x07 (R/W   8) UART Scratchpad Register    This 8 bit read/write register has no effect on the operation of the Serial Port. It is intended as a scratchpad register to be used by the programmer to hold data temporarily. */
  __IO  __UART_DLAB DATA_ACTIVATE_bits_t ACTIVATE;      /**< Offset: 0x330 (R/W   8) UART Activate Register. [0:0] ACTIVATE When this bit is 1, the UART logical device is powered and functional. When this bit is 0, the UART logical device is powered down and inactive. */
  __IO  __UART_DLAB DATA_CONFIG_bits_t CONFIG;        /**< Offset: 0x3F0 (R/W   8) UART Config Select Register */
} uartdata_registers_t;

/** \brief UART register API structure */
typedef struct
{  /* The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n        full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
  __IO  __UART_DLAB_BAUDRATE_LSB_bits_t BAUDRATE_LSB;  /**< Offset: 0x00 (R/W   8) UART Programmable BAUD Rate Generator (LSB) Register (DLAB=1) */
  __IO  __UART_DLAB_BAUDRATE_MSB_bits_t BAUDRATE_MSB;  /**< Offset: 0x01 (R/W   8) UART Programmable BAUD Rate Generator (MSB) Register (DLAB=1). [6:0] BAUD_RATE_DIVISOR_MSB, [7:7] BAUD_CLK_SEL \n            1=If CLK_SRC is '0', the baud clock is derived from the 1.8432MHz_Clk. If CLK_SRC is '1', this bit has no effect\n            0=If CLK_SRC is '0', the baud clock is derived from the 24MHz_Clk. If CLK_SRC is '1', this bit has no effect */
  __O   __UART_DLAB DATA_FIFO_CR_bits_t FIFO_CR;       /**< Offset: 0x02 ( /W   8) UART FIFO Control Register */
  __I   __UART_DLAB DATA_INT_ID_bits_t INT_ID;        /**< Offset: 0x02 (R/    8) UART Interrupt Identification Register */
  __IO  __UART_DLAB DATA_LINE_CR_bits_t LINE_CR;       /**< Offset: 0x03 (R/W   8) UART Line Control Register */
  __IO  __UART_DLAB DATA_MODEM_CR_bits_t MODEM_CR;      /**< Offset: 0x04 (R/W   8) UART Modem Control Register */
  __I   __UART_DLAB DATA_LINE_STS_bits_t LINE_STS;      /**< Offset: 0x05 (R/    8) UART Line Status Register */
  __I   __UART_DLAB DATA_MODEM_STS_bits_t MODEM_STS;     /**< Offset: 0x06 (R/    8) UART Modem Status Register */
  __IO  __UART_DLAB DATA_SCRATCHPAD_bits_t SCRATCHPAD;    /**< Offset: 0x07 (R/W   8) UART Scratchpad Register    This 8 bit read/write register has no effect on the operation of the Serial Port. It is intended as a scratchpad register to be used by the programmer to hold data temporarily. */
  __IO  __UART_DLAB DATA_ACTIVATE_bits_t ACTIVATE;      /**< Offset: 0x330 (R/W   8) UART Activate Register. [0:0] ACTIVATE When this bit is 1, the UART logical device is powered and functional. When this bit is 0, the UART logical device is powered down and inactive. */
  __IO  __UART_DLAB DATA_CONFIG_bits_t CONFIG;        /**< Offset: 0x3F0 (R/W   8) UART Config Select Register */
} uartdlab_registers_t;

/** \brief UART hardware registers */
typedef union
{  /* The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n        full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
       UartData                       DATA;           /**< UART when DLAB=0 */
       UartDlab                       DLAB;           /**< UART when DLAB=1 */
} Uart;
/** @}  end of The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n        full-function Two Pin Serial Port that supports the standard RS-232 Interface. */

#endif /* _PIC32CX_0525SG12_UART_COMPONENT_H_ */
