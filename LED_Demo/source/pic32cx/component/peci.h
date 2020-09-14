/**
 * \brief Component description for PIC32CX/0525SG12 PECI
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
#ifndef _PIC32CX_0525SG12_PECI_COMPONENT_H_
#define _PIC32CX_0525SG12_PECI_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_PECI The PECI Interface allows the EC to retrieve temperature readings from PECI-compliant devices.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PECI */
/* ========================================================================== */

/* -------- PECI_WRITE_DATA : (PECI Offset: 0x00) (R/W 8) The Write Data Register provides access to a 32-byte Transmit FIFO. -------- */

typedef union
{
  uint8_t  w;
} __PECI_WRITE_DATA_bits_t;
#define PECI_WRITE_DATA_RESETVALUE          (0x00U)                                       /**<  (PECI_WRITE_DATA) The Write Data Register provides access to a 32-byte Transmit FIFO.  Reset Value */

#define PECI_WRITE_DATA_Msk                   (0x00000000UL)                                 /**< (PECI_WRITE_DATA) Register Mask  */

/* -------- PECI_READ_DATA : (PECI Offset: 0x04) (R/W 8) The Read Data Register provides access to a 32-byte Receive FIFO. -------- */

typedef union
{
  uint8_t  w;
} __PECI_READ_DATA_bits_t;
#define PECI_READ_DATA_RESETVALUE           (0x00U)                                       /**<  (PECI_READ_DATA) The Read Data Register provides access to a 32-byte Receive FIFO.  Reset Value */

#define PECI_READ_DATA_Msk                    (0x00000000UL)                                 /**< (PECI_READ_DATA) Register Mask  */

/* -------- PECI_CONTROL : (PECI Offset: 0x08) (R/W 8) Control Register -------- */

typedef union
{
  struct
  {
    uint8_t  PD:1;                      /**< bit:      0  PD (Power Down) along with RST controls the Power Management Interface */
    uint8_t  :2;                        /**< bit:   1..2  Reserved                                      */
    uint8_t  RST:1;                     /**< bit:      3  RST indicates that the PECI Core should be reset. */
    uint8_t  :1;                        /**< bit:      4  Reserved                                      */
    uint8_t  FRST:1;                    /**< bit:      5  FRST is the FIFO Reset bit.                   */
    uint8_t  TXEN:1;                    /**< bit:      6  TXEN is the Transmit Enable bit.              */
    uint8_t  MIEN:1;                    /**< bit:      7  MIEN is the Master Interrupt Enable           */
  };
  uint8_t  w;
} __PECI_CONTROL_bits_t;
#define PECI_CONTROL_RESETVALUE             (0x01U)                                       /**<  (PECI_CONTROL) Control Register  Reset Value */

#define PECI_CONTROL_PD_Pos                   (0)                                            /**< (PECI_CONTROL) PD (Power Down) along with RST controls the Power Management Interface Position */
#define PECI_CONTROL_PD_Msk                   (0x1U << PECI_CONTROL_PD_Pos)                  /**< (PECI_CONTROL) PD (Power Down) along with RST controls the Power Management Interface Mask */
#define PECI_CONTROL_RST_Pos                  (3)                                            /**< (PECI_CONTROL) RST indicates that the PECI Core should be reset. Position */
#define PECI_CONTROL_RST_Msk                  (0x1U << PECI_CONTROL_RST_Pos)                 /**< (PECI_CONTROL) RST indicates that the PECI Core should be reset. Mask */
#define PECI_CONTROL_FRST_Pos                 (5)                                            /**< (PECI_CONTROL) FRST is the FIFO Reset bit. Position */
#define PECI_CONTROL_FRST_Msk                 (0x1U << PECI_CONTROL_FRST_Pos)                /**< (PECI_CONTROL) FRST is the FIFO Reset bit. Mask */
#define PECI_CONTROL_TXEN_Pos                 (6)                                            /**< (PECI_CONTROL) TXEN is the Transmit Enable bit. Position */
#define PECI_CONTROL_TXEN_Msk                 (0x1U << PECI_CONTROL_TXEN_Pos)                /**< (PECI_CONTROL) TXEN is the Transmit Enable bit. Mask */
#define PECI_CONTROL_MIEN_Pos                 (7)                                            /**< (PECI_CONTROL) MIEN is the Master Interrupt Enable Position */
#define PECI_CONTROL_MIEN_Msk                 (0x1U << PECI_CONTROL_MIEN_Pos)                /**< (PECI_CONTROL) MIEN is the Master Interrupt Enable Mask */
#define PECI_CONTROL_Msk                      (0x000000E9UL)                                 /**< (PECI_CONTROL) Register Mask  */

/* -------- PECI_STATUS1 : (PECI Offset: 0x0c) (R/W 8) Status Register 1 -------- */

typedef union
{
  struct
  {
    uint8_t  BOF:1;                     /**< bit:      0  BOF (Beginning of Frame) is asserted when the PECI Core begins Address Timing Negotiation. (R/WC) */
    uint8_t  EOF:1;                     /**< bit:      1  EOF (End of Frame) is asserted following Message Stop (tSTOP). (R/WC) */
    uint8_t  ERR:1;                     /**< bit:      2  ERR Indicates that an error for the current transaction has been detected. */
    uint8_t  RDY:1;                     /**< bit:      3  RDY represents the state of the READY signal function */
    uint8_t  RDYLO:1;                   /**< bit:      4  RDYLO is asserted '1' on the falling edge of the READY signal function (R/WC) */
    uint8_t  RDYHI:1;                   /**< bit:      5  RDYHI is asserted '1' on the rising edge of the READY signal function (R/WC) */
    uint8_t  :1;                        /**< bit:      6  Reserved                                      */
    uint8_t  MINT:1;                    /**< bit:      7  MINT is the Master Interrupt Status bit and is asserted when any interrupt status bit in the Interrupt Interface is asserted. */
  };
  uint8_t  w;
} __PECI_STATUS1_bits_t;
#define PECI_STATUS1_RESETVALUE             (0x00U)                                       /**<  (PECI_STATUS1) Status Register 1  Reset Value */

#define PECI_STATUS1_BOF_Pos                  (0)                                            /**< (PECI_STATUS1) BOF (Beginning of Frame) is asserted when the PECI Core begins Address Timing Negotiation. (R/WC) Position */
#define PECI_STATUS1_BOF_Msk                  (0x1U << PECI_STATUS1_BOF_Pos)                 /**< (PECI_STATUS1) BOF (Beginning of Frame) is asserted when the PECI Core begins Address Timing Negotiation. (R/WC) Mask */
#define PECI_STATUS1_EOF_Pos                  (1)                                            /**< (PECI_STATUS1) EOF (End of Frame) is asserted following Message Stop (tSTOP). (R/WC) Position */
#define PECI_STATUS1_EOF_Msk                  (0x1U << PECI_STATUS1_EOF_Pos)                 /**< (PECI_STATUS1) EOF (End of Frame) is asserted following Message Stop (tSTOP). (R/WC) Mask */
#define PECI_STATUS1_ERR_Pos                  (2)                                            /**< (PECI_STATUS1) ERR Indicates that an error for the current transaction has been detected. Position */
#define PECI_STATUS1_ERR_Msk                  (0x1U << PECI_STATUS1_ERR_Pos)                 /**< (PECI_STATUS1) ERR Indicates that an error for the current transaction has been detected. Mask */
#define PECI_STATUS1_RDY_Pos                  (3)                                            /**< (PECI_STATUS1) RDY represents the state of the READY signal function Position */
#define PECI_STATUS1_RDY_Msk                  (0x1U << PECI_STATUS1_RDY_Pos)                 /**< (PECI_STATUS1) RDY represents the state of the READY signal function Mask */
#define PECI_STATUS1_RDYLO_Pos                (4)                                            /**< (PECI_STATUS1) RDYLO is asserted '1' on the falling edge of the READY signal function (R/WC) Position */
#define PECI_STATUS1_RDYLO_Msk                (0x1U << PECI_STATUS1_RDYLO_Pos)               /**< (PECI_STATUS1) RDYLO is asserted '1' on the falling edge of the READY signal function (R/WC) Mask */
#define PECI_STATUS1_RDYHI_Pos                (5)                                            /**< (PECI_STATUS1) RDYHI is asserted '1' on the rising edge of the READY signal function (R/WC) Position */
#define PECI_STATUS1_RDYHI_Msk                (0x1U << PECI_STATUS1_RDYHI_Pos)               /**< (PECI_STATUS1) RDYHI is asserted '1' on the rising edge of the READY signal function (R/WC) Mask */
#define PECI_STATUS1_MINT_Pos                 (7)                                            /**< (PECI_STATUS1) MINT is the Master Interrupt Status bit and is asserted when any interrupt status bit in the Interrupt Interface is asserted. Position */
#define PECI_STATUS1_MINT_Msk                 (0x1U << PECI_STATUS1_MINT_Pos)                /**< (PECI_STATUS1) MINT is the Master Interrupt Status bit and is asserted when any interrupt status bit in the Interrupt Interface is asserted. Mask */
#define PECI_STATUS1_Msk                      (0x000000BFUL)                                 /**< (PECI_STATUS1) Register Mask  */

/* -------- PECI_STATUS2 : (PECI Offset: 0x10) (R/ 8) Status Register 2 -------- */

typedef union
{
  struct
  {
    uint8_t  WFF:1;                     /**< bit:      0  WFF indicates that the Write Data Register FIFO is full. WFF does not generate an interrupt. */
    uint8_t  WFE:1;                     /**< bit:      1  WFE indicates that the Write Data Register FIFO is empty. */
    uint8_t  RFF:1;                     /**< bit:      2  RFF indicates that the Read Data Register FIFO is full. */
    uint8_t  RFE:1;                     /**< bit:      3  RFE indicates that the Read Data Register FIFO is empty. RFE does not generate an interrupt. */
    uint8_t  :3;                        /**< bit:   4..6  Reserved                                      */
    uint8_t  IDLE:1;                    /**< bit:      7  The IDLE status bit indicates when the SST/PECI bus is idle and a new transaction may begin. */
  };
  uint8_t  w;
} __PECI_STATUS2_bits_t;
#define PECI_STATUS2_RESETVALUE             (0x0AU)                                       /**<  (PECI_STATUS2) Status Register 2  Reset Value */

#define PECI_STATUS2_WFF_Pos                  (0)                                            /**< (PECI_STATUS2) WFF indicates that the Write Data Register FIFO is full. WFF does not generate an interrupt. Position */
#define PECI_STATUS2_WFF_Msk                  (0x1U << PECI_STATUS2_WFF_Pos)                 /**< (PECI_STATUS2) WFF indicates that the Write Data Register FIFO is full. WFF does not generate an interrupt. Mask */
#define PECI_STATUS2_WFE_Pos                  (1)                                            /**< (PECI_STATUS2) WFE indicates that the Write Data Register FIFO is empty. Position */
#define PECI_STATUS2_WFE_Msk                  (0x1U << PECI_STATUS2_WFE_Pos)                 /**< (PECI_STATUS2) WFE indicates that the Write Data Register FIFO is empty. Mask */
#define PECI_STATUS2_RFF_Pos                  (2)                                            /**< (PECI_STATUS2) RFF indicates that the Read Data Register FIFO is full. Position */
#define PECI_STATUS2_RFF_Msk                  (0x1U << PECI_STATUS2_RFF_Pos)                 /**< (PECI_STATUS2) RFF indicates that the Read Data Register FIFO is full. Mask */
#define PECI_STATUS2_RFE_Pos                  (3)                                            /**< (PECI_STATUS2) RFE indicates that the Read Data Register FIFO is empty. RFE does not generate an interrupt. Position */
#define PECI_STATUS2_RFE_Msk                  (0x1U << PECI_STATUS2_RFE_Pos)                 /**< (PECI_STATUS2) RFE indicates that the Read Data Register FIFO is empty. RFE does not generate an interrupt. Mask */
#define PECI_STATUS2_IDLE_Pos                 (7)                                            /**< (PECI_STATUS2) The IDLE status bit indicates when the SST/PECI bus is idle and a new transaction may begin. Position */
#define PECI_STATUS2_IDLE_Msk                 (0x1U << PECI_STATUS2_IDLE_Pos)                /**< (PECI_STATUS2) The IDLE status bit indicates when the SST/PECI bus is idle and a new transaction may begin. Mask */
#define PECI_STATUS2_Msk                      (0x0000008FUL)                                 /**< (PECI_STATUS2) Register Mask  */

/* -------- PECI_ERROR : (PECI Offset: 0x14) (R/W 8) Error Register -------- */

typedef union
{
  struct
  {
    uint8_t  FERR:1;                    /**< bit:      0  FERR (Frame Check Sequence Error). (R/WC)     */
    uint8_t  BERR:1;                    /**< bit:      1  BERR (Bus Error). Bus contention has been detected. BERR is asserted when the PECI Module reads a value that is different from what it has driven (R/WC) */
    uint8_t  :1;                        /**< bit:      2  Reserved                                      */
    uint8_t  REQERR:1;                  /**< bit:      3  REQERR is asserted if PEC_AVAILABLE (READY) input is not asserted when the counts down to zero as shown in. When asserted, REQERR can generate interrupt. (R/WC) */
    uint8_t  WROV:1;                    /**< bit:      4  WROV (Write Overrun). (R/WC)                  */
    uint8_t  WRUN:1;                    /**< bit:      5  WRUN (Write Underrun). (R/WC)                 */
    uint8_t  RDOV:1;                    /**< bit:      6  RDOV (Read Overrun). RDOV indicates that the internal read buffer has overflowed (R/WC) */
    uint8_t  CLKERR:1;                  /**< bit:      7  CLKERR indicates that the READY signal function in the Hardware Interface was de-asserted in the middle of a transaction (R/WC) */
  };
  uint8_t  w;
} __PECI_ERROR_bits_t;
#define PECI_ERROR_RESETVALUE               (0x00U)                                       /**<  (PECI_ERROR) Error Register  Reset Value */

#define PECI_ERROR_FERR_Pos                   (0)                                            /**< (PECI_ERROR) FERR (Frame Check Sequence Error). (R/WC) Position */
#define PECI_ERROR_FERR_Msk                   (0x1U << PECI_ERROR_FERR_Pos)                  /**< (PECI_ERROR) FERR (Frame Check Sequence Error). (R/WC) Mask */
#define PECI_ERROR_BERR_Pos                   (1)                                            /**< (PECI_ERROR) BERR (Bus Error). Bus contention has been detected. BERR is asserted when the PECI Module reads a value that is different from what it has driven (R/WC) Position */
#define PECI_ERROR_BERR_Msk                   (0x1U << PECI_ERROR_BERR_Pos)                  /**< (PECI_ERROR) BERR (Bus Error). Bus contention has been detected. BERR is asserted when the PECI Module reads a value that is different from what it has driven (R/WC) Mask */
#define PECI_ERROR_REQERR_Pos                 (3)                                            /**< (PECI_ERROR) REQERR is asserted if PEC_AVAILABLE (READY) input is not asserted when the counts down to zero as shown in. When asserted, REQERR can generate interrupt. (R/WC) Position */
#define PECI_ERROR_REQERR_Msk                 (0x1U << PECI_ERROR_REQERR_Pos)                /**< (PECI_ERROR) REQERR is asserted if PEC_AVAILABLE (READY) input is not asserted when the counts down to zero as shown in. When asserted, REQERR can generate interrupt. (R/WC) Mask */
#define PECI_ERROR_WROV_Pos                   (4)                                            /**< (PECI_ERROR) WROV (Write Overrun). (R/WC) Position */
#define PECI_ERROR_WROV_Msk                   (0x1U << PECI_ERROR_WROV_Pos)                  /**< (PECI_ERROR) WROV (Write Overrun). (R/WC) Mask */
#define PECI_ERROR_WRUN_Pos                   (5)                                            /**< (PECI_ERROR) WRUN (Write Underrun). (R/WC) Position */
#define PECI_ERROR_WRUN_Msk                   (0x1U << PECI_ERROR_WRUN_Pos)                  /**< (PECI_ERROR) WRUN (Write Underrun). (R/WC) Mask */
#define PECI_ERROR_RDOV_Pos                   (6)                                            /**< (PECI_ERROR) RDOV (Read Overrun). RDOV indicates that the internal read buffer has overflowed (R/WC) Position */
#define PECI_ERROR_RDOV_Msk                   (0x1U << PECI_ERROR_RDOV_Pos)                  /**< (PECI_ERROR) RDOV (Read Overrun). RDOV indicates that the internal read buffer has overflowed (R/WC) Mask */
#define PECI_ERROR_CLKERR_Pos                 (7)                                            /**< (PECI_ERROR) CLKERR indicates that the READY signal function in the Hardware Interface was de-asserted in the middle of a transaction (R/WC) Position */
#define PECI_ERROR_CLKERR_Msk                 (0x1U << PECI_ERROR_CLKERR_Pos)                /**< (PECI_ERROR) CLKERR indicates that the READY signal function in the Hardware Interface was de-asserted in the middle of a transaction (R/WC) Mask */
#define PECI_ERROR_Msk                        (0x000000FBUL)                                 /**< (PECI_ERROR) Register Mask  */

/* -------- PECI_INT_EN1 : (PECI Offset: 0x18) (R/W 8) Interrupt Enable 1 Register -------- */

typedef union
{
  struct
  {
    uint8_t  BIEN:1;                    /**< bit:      0  When the BIEN bit is asserted '1' the BOF interrupt is enabled. */
    uint8_t  EIEN:1;                    /**< bit:      1  When the EIEN bit is asserted '1' the EOF interrupt is enabled. */
    uint8_t  EREN:1;                    /**< bit:      2  When the EREN bit is asserted '1' the ERR interrupt is enabled. */
    uint8_t  :1;                        /**< bit:      3  Reserved                                      */
    uint8_t  RLEN:1;                    /**< bit:      4  When the RLEN bit is asserted '1' the RDYLO interrupt is enabled. */
    uint8_t  RHEN:1;                    /**< bit:      5  When the RHEN bit is asserted '1' the RDYHI interrupt is enabled. */
    uint8_t  :2;                        /**< bit:   6..7  Reserved                                      */
  };
  uint8_t  w;
} __PECI_INT_EN1_bits_t;
#define PECI_INT_EN1_RESETVALUE             (0x00U)                                       /**<  (PECI_INT_EN1) Interrupt Enable 1 Register  Reset Value */

#define PECI_INT_EN1_BIEN_Pos                 (0)                                            /**< (PECI_INT_EN1) When the BIEN bit is asserted '1' the BOF interrupt is enabled. Position */
#define PECI_INT_EN1_BIEN_Msk                 (0x1U << PECI_INT_EN1_BIEN_Pos)                /**< (PECI_INT_EN1) When the BIEN bit is asserted '1' the BOF interrupt is enabled. Mask */
#define PECI_INT_EN1_EIEN_Pos                 (1)                                            /**< (PECI_INT_EN1) When the EIEN bit is asserted '1' the EOF interrupt is enabled. Position */
#define PECI_INT_EN1_EIEN_Msk                 (0x1U << PECI_INT_EN1_EIEN_Pos)                /**< (PECI_INT_EN1) When the EIEN bit is asserted '1' the EOF interrupt is enabled. Mask */
#define PECI_INT_EN1_EREN_Pos                 (2)                                            /**< (PECI_INT_EN1) When the EREN bit is asserted '1' the ERR interrupt is enabled. Position */
#define PECI_INT_EN1_EREN_Msk                 (0x1U << PECI_INT_EN1_EREN_Pos)                /**< (PECI_INT_EN1) When the EREN bit is asserted '1' the ERR interrupt is enabled. Mask */
#define PECI_INT_EN1_RLEN_Pos                 (4)                                            /**< (PECI_INT_EN1) When the RLEN bit is asserted '1' the RDYLO interrupt is enabled. Position */
#define PECI_INT_EN1_RLEN_Msk                 (0x1U << PECI_INT_EN1_RLEN_Pos)                /**< (PECI_INT_EN1) When the RLEN bit is asserted '1' the RDYLO interrupt is enabled. Mask */
#define PECI_INT_EN1_RHEN_Pos                 (5)                                            /**< (PECI_INT_EN1) When the RHEN bit is asserted '1' the RDYHI interrupt is enabled. Position */
#define PECI_INT_EN1_RHEN_Msk                 (0x1U << PECI_INT_EN1_RHEN_Pos)                /**< (PECI_INT_EN1) When the RHEN bit is asserted '1' the RDYHI interrupt is enabled. Mask */
#define PECI_INT_EN1_Msk                      (0x00000037UL)                                 /**< (PECI_INT_EN1) Register Mask  */

/* -------- PECI_INT_EN2 : (PECI Offset: 0x1c) (R/W 8) Interrupt Enable 2 Register -------- */

typedef union
{
  struct
  {
    uint8_t  :1;                        /**< bit:      0  Reserved                                      */
    uint8_t  ENWFE:1;                   /**< bit:      1  When the ENWFE bit is asserted '1' the WFE interrupt is enabled. */
    uint8_t  ENRFF:1;                   /**< bit:      2  When the ENRFF bit is asserted '1' the RFF interrupt is enabled. */
    uint8_t  :5;                        /**< bit:   3..7  Reserved                                      */
  };
  uint8_t  w;
} __PECI_INT_EN2_bits_t;
#define PECI_INT_EN2_RESETVALUE             (0x00U)                                       /**<  (PECI_INT_EN2) Interrupt Enable 2 Register  Reset Value */

#define PECI_INT_EN2_ENWFE_Pos                (1)                                            /**< (PECI_INT_EN2) When the ENWFE bit is asserted '1' the WFE interrupt is enabled. Position */
#define PECI_INT_EN2_ENWFE_Msk                (0x1U << PECI_INT_EN2_ENWFE_Pos)               /**< (PECI_INT_EN2) When the ENWFE bit is asserted '1' the WFE interrupt is enabled. Mask */
#define PECI_INT_EN2_ENRFF_Pos                (2)                                            /**< (PECI_INT_EN2) When the ENRFF bit is asserted '1' the RFF interrupt is enabled. Position */
#define PECI_INT_EN2_ENRFF_Msk                (0x1U << PECI_INT_EN2_ENRFF_Pos)               /**< (PECI_INT_EN2) When the ENRFF bit is asserted '1' the RFF interrupt is enabled. Mask */
#define PECI_INT_EN2_Msk                      (0x00000006UL)                                 /**< (PECI_INT_EN2) Register Mask  */

/* -------- PECI_OBT1 : (PECI Offset: 0x20) (R/W 8) Optimal Bit Time Register (Low Byte) -------- */

typedef union
{
  uint8_t  w;
} __PECI_OBT1_bits_t;
#define PECI_OBT1_RESETVALUE                (0x16U)                                       /**<  (PECI_OBT1) Optimal Bit Time Register (Low Byte)  Reset Value */

#define PECI_OBT1_Msk                         (0x00000000UL)                                 /**< (PECI_OBT1) Register Mask  */

/* -------- PECI_OBT2 : (PECI Offset: 0x24) (R/W 8) Optimal Bit Time Register (High Byte) -------- */

typedef union
{
  uint8_t  w;
} __PECI_OBT2_bits_t;
#define PECI_OBT2_RESETVALUE                (0x00U)                                       /**<  (PECI_OBT2) Optimal Bit Time Register (High Byte)  Reset Value */

#define PECI_OBT2_Msk                         (0x00000000UL)                                 /**< (PECI_OBT2) Register Mask  */

/* -------- PECI_BAUD_CTRL : (PECI Offset: 0x30) (R/W 32) Baud Control Register.\n     The baud div value divides down the sytem clock frequency to create the peci CORE_CLK frequency.\n -------- */

typedef union
{
  uint32_t w;
} __PECI_BAUD_CTRL_bits_t;
#define PECI_BAUD_CTRL_RESETVALUE           (0x06U)                                       /**<  (PECI_BAUD_CTRL) Baud Control Register.\n     The baud div value divides down the sytem clock frequency to create the peci CORE_CLK frequency.\n  Reset Value */

#define PECI_BAUD_CTRL_Msk                    (0x00000000UL)                                 /**< (PECI_BAUD_CTRL) Register Mask  */

/* -------- PECI_ID : (PECI Offset: 0x40) (R/W 32) Block ID Register -------- */

typedef union
{
  uint32_t w;
} __PECI_ID_bits_t;
#define PECI_ID_RESETVALUE                  (0x0FU)                                       /**<  (PECI_ID) Block ID Register  Reset Value */

#define PECI_ID_Msk                           (0x00000000UL)                                 /**< (PECI_ID) Register Mask  */

/* -------- PECI_REV : (PECI Offset: 0x44) (R/W 32) Revision Register -------- */

typedef union
{
  uint32_t w;
} __PECI_REV_bits_t;
#define PECI_REV_RESETVALUE                 (0x0FU)                                       /**<  (PECI_REV) Revision Register  Reset Value */

#define PECI_REV_Msk                          (0x00000000UL)                                 /**< (PECI_REV) Register Mask  */

/** \brief PECI register offsets definitions */
#define PECI_WRITE_DATA_OFFSET       (0x00)         /**< (PECI_WRITE_DATA) The Write Data Register provides access to a 32-byte Transmit FIFO. Offset */
#define PECI_READ_DATA_OFFSET        (0x04)         /**< (PECI_READ_DATA) The Read Data Register provides access to a 32-byte Receive FIFO. Offset */
#define PECI_CONTROL_OFFSET          (0x08)         /**< (PECI_CONTROL) Control Register Offset */
#define PECI_STATUS1_OFFSET          (0x0C)         /**< (PECI_STATUS1) Status Register 1 Offset */
#define PECI_STATUS2_OFFSET          (0x10)         /**< (PECI_STATUS2) Status Register 2 Offset */
#define PECI_ERROR_OFFSET            (0x14)         /**< (PECI_ERROR) Error Register Offset */
#define PECI_INT_EN1_OFFSET          (0x18)         /**< (PECI_INT_EN1) Interrupt Enable 1 Register Offset */
#define PECI_INT_EN2_OFFSET          (0x1C)         /**< (PECI_INT_EN2) Interrupt Enable 2 Register Offset */
#define PECI_OBT1_OFFSET             (0x20)         /**< (PECI_OBT1) Optimal Bit Time Register (Low Byte) Offset */
#define PECI_OBT2_OFFSET             (0x24)         /**< (PECI_OBT2) Optimal Bit Time Register (High Byte) Offset */
#define PECI_BAUD_CTRL_OFFSET        (0x30)         /**< (PECI_BAUD_CTRL) Baud Control Register.\n     The baud div value divides down the sytem clock frequency to create the peci CORE_CLK frequency.\n Offset */
#define PECI_ID_OFFSET               (0x40)         /**< (PECI_ID) Block ID Register Offset */
#define PECI_REV_OFFSET              (0x44)         /**< (PECI_REV) Revision Register Offset */

/** \brief PECI register API structure */
typedef struct
{  /* The PECI Interface allows the EC to retrieve temperature readings from PECI-compliant devices. */
  __IO  __PECI_WRITE_DATA_bits_t       WRITE_DATA;    /**< Offset: 0x00 (R/W   8) The Write Data Register provides access to a 32-byte Transmit FIFO. */
  __IO  __PECI_READ_DATA_bits_t        READ_DATA;     /**< Offset: 0x04 (R/W   8) The Read Data Register provides access to a 32-byte Receive FIFO. */
  __IO  __PECI_CONTROL_bits_t          CONTROL;       /**< Offset: 0x08 (R/W   8) Control Register */
  __IO  __PECI_STATUS1_bits_t          STATUS1;       /**< Offset: 0x0C (R/W   8) Status Register 1 */
  __I   __PECI_STATUS2_bits_t          STATUS2;       /**< Offset: 0x10 (R/    8) Status Register 2 */
  __IO  __PECI_ERROR_bits_t            ERROR;         /**< Offset: 0x14 (R/W   8) Error Register */
  __IO  __PECI_INT_EN1_bits_t          INT_EN1;       /**< Offset: 0x18 (R/W   8) Interrupt Enable 1 Register */
  __IO  __PECI_INT_EN2_bits_t          INT_EN2;       /**< Offset: 0x1C (R/W   8) Interrupt Enable 2 Register */
  __IO  __PECI_OBT1_bits_t             OBT1;          /**< Offset: 0x20 (R/W   8) Optimal Bit Time Register (Low Byte) */
  __IO  __PECI_OBT2_bits_t             OBT2;          /**< Offset: 0x24 (R/W   8) Optimal Bit Time Register (High Byte) */
  __IO  __PECI_BAUD_CTRL_bits_t        BAUD_CTRL;     /**< Offset: 0x30 (R/W  32) Baud Control Register.\n     The baud div value divides down the sytem clock frequency to create the peci CORE_CLK frequency.\n */
  __IO  __PECI_ID_bits_t               ID;            /**< Offset: 0x40 (R/W  32) Block ID Register */
  __IO  __PECI_REV_bits_t              REV;           /**< Offset: 0x44 (R/W  32) Revision Register */
} peci_registers_t;
/** @}  end of The PECI Interface allows the EC to retrieve temperature readings from PECI-compliant devices. */

#endif /* _PIC32CX_0525SG12_PECI_COMPONENT_H_ */
