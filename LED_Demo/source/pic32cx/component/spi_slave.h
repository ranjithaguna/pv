/**
 * \brief Component description for PIC32CX/0525SG12 SPI_SLAVE
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
#ifndef _PIC32CX_0525SG12_SPI_SLAVE_COMPONENT_H_
#define _PIC32CX_0525SG12_SPI_SLAVE_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_SPI_SLAVE SPI Slave Register.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SPI_SLAVE */
/* ========================================================================== */

/* -------- SPI_SLAVE_SSPI_CMM_CNFG : (SPI_SLAVE Offset: 0x00) (R/W 32) SPI Slave Communication Configuration Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t SNG_QUD_SEL:1;             /**< bit:      0  This field defines the Single / Quad Wire mode of operation for SPI Slave block.         0 = Single Wire Slave SPI block operation.\n         1 = Quad Wire Slave SPI block operation.\n */
    uint32_t :7;                        /**< bit:   1..7  Reserved                                      */
    uint32_t TAR_TIM_SEL:3;             /**< bit:  8..10  Turn Around Time select for Quad wire mode.\n         0h = 1 cycle.         1h = 2 cycles.         2h = 4 cycles.         3h = 8 cycles.         Other values are reserved. */
    uint32_t :5;                        /**< bit: 11..15  Reserved                                      */
    uint32_t WAIT_TIME:8;               /**< bit: 16..23  These bits set the amount of wait time in cycles before transmitting data back to master.\n         During this wait time status bits will be transmitted\n */
    uint32_t :8;                        /**< bit: 24..31  Reserved                                      */
  };
  uint32_t w;
} __SPI_SLAVE_SSPI_CMM_CNFG_bits_t;
#define SPI_SLAVE_SSPI_CMM_CNFG_RESETVALUE  (0x00U)                                       /**<  (SPI_SLAVE_SSPI_CMM_CNFG) SPI Slave Communication Configuration Register.\n  Reset Value */

#define SPI_SLAVE_SSPI_CMM_CNFG_SNG_QUD_SEL_Pos (0)                                            /**< (SPI_SLAVE_SSPI_CMM_CNFG) This field defines the Single / Quad Wire mode of operation for SPI Slave block.         0 = Single Wire Slave SPI block operation.\n         1 = Quad Wire Slave SPI block operation.\n Position */
#define SPI_SLAVE_SSPI_CMM_CNFG_SNG_QUD_SEL_Msk (0x1U << SPI_SLAVE_SSPI_CMM_CNFG_SNG_QUD_SEL_Pos)  /**< (SPI_SLAVE_SSPI_CMM_CNFG) This field defines the Single / Quad Wire mode of operation for SPI Slave block.         0 = Single Wire Slave SPI block operation.\n         1 = Quad Wire Slave SPI block operation.\n Mask */
#define SPI_SLAVE_SSPI_CMM_CNFG_TAR_TIM_SEL_Pos (8)                                            /**< (SPI_SLAVE_SSPI_CMM_CNFG) Turn Around Time select for Quad wire mode.\n         0h = 1 cycle.         1h = 2 cycles.         2h = 4 cycles.         3h = 8 cycles.         Other values are reserved. Position */
#define SPI_SLAVE_SSPI_CMM_CNFG_TAR_TIM_SEL_Msk (0x7U << SPI_SLAVE_SSPI_CMM_CNFG_TAR_TIM_SEL_Pos)  /**< (SPI_SLAVE_SSPI_CMM_CNFG) Turn Around Time select for Quad wire mode.\n         0h = 1 cycle.         1h = 2 cycles.         2h = 4 cycles.         3h = 8 cycles.         Other values are reserved. Mask */
#define SPI_SLAVE_SSPI_CMM_CNFG_TAR_TIM_SEL(value) (SPI_SLAVE_SSPI_CMM_CNFG_TAR_TIM_SEL_Msk & ((value) << SPI_SLAVE_SSPI_CMM_CNFG_TAR_TIM_SEL_Pos))
#define SPI_SLAVE_SSPI_CMM_CNFG_WAIT_TIME_Pos (16)                                           /**< (SPI_SLAVE_SSPI_CMM_CNFG) These bits set the amount of wait time in cycles before transmitting data back to master.\n         During this wait time status bits will be transmitted\n Position */
#define SPI_SLAVE_SSPI_CMM_CNFG_WAIT_TIME_Msk (0xFFU << SPI_SLAVE_SSPI_CMM_CNFG_WAIT_TIME_Pos)  /**< (SPI_SLAVE_SSPI_CMM_CNFG) These bits set the amount of wait time in cycles before transmitting data back to master.\n         During this wait time status bits will be transmitted\n Mask */
#define SPI_SLAVE_SSPI_CMM_CNFG_WAIT_TIME(value) (SPI_SLAVE_SSPI_CMM_CNFG_WAIT_TIME_Msk & ((value) << SPI_SLAVE_SSPI_CMM_CNFG_WAIT_TIME_Pos))
#define SPI_SLAVE_SSPI_CMM_CNFG_Msk           (0x00FF0701UL)                                 /**< (SPI_SLAVE_SSPI_CMM_CNFG) Register Mask  */

/* -------- SPI_SLAVE_SSPI_STATUS : (SPI_SLAVE Offset: 0x04) (R/W 32) SPI Slave Status Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t MEM_WR_DONE:1;             /**< bit:      0  When the ARM BUS side has fully finished the last transaction from the FIFO to write the data to\n         Memory for Posted Writes . Clear with new Write request.\n */
    uint32_t MEM_RD_DONE:1;             /**< bit:      1  When the ARM BUS side has fully finished writing the last written DWord to the FIFO for a set of data\n         read from Memory for Posted Reads. - cleared with new Read request.\n */
    uint32_t :1;                        /**< bit:      2  Reserved                                      */
    uint32_t MEM_WR_BUSY:1;             /**< bit:      3  When an Memory Write transaction is currently being processed.\n */
    uint32_t MEM_RD_BUSY:1;             /**< bit:      4  When an Memory Read transaction is currently being processed.\n */
    uint32_t SREG_TRANS:1;              /**< bit:      5  When an SREG transaction is currently being processed.\n */
    uint32_t POLL_HIGH:1;               /**< bit:      6  If this bit is set, then something in the high 16-bit of status register is set and needs to be checked.\n         SPI Master should take action to clear this.\n */
    uint32_t :1;                        /**< bit:      7  Reserved                                      */
    uint32_t RX_FIFO_EMPTY:1;           /**< bit:      8  Signifies all Memory write transactions for the SPI Masters requested size have been performed.\n         New transactions are allowed.\n */
    uint32_t RX_FIFO_FULL:1;            /**< bit:      9  The RX FIFO is full of data to be written to Memory.\n */
    uint32_t TX_FIFO_EMPTY:1;           /**< bit:     10  Signifies SPI Master has read the data requested from Memory. Can be used to show there is data\n         the SPI Master has requested and not been read yet. New read transactions will be aligned.\n */
    uint32_t TX_FIFO_FULL:1;            /**< bit:     11  The TX FIFO is full of data that was read from Memory.\n */
    uint32_t :1;                        /**< bit:     12  Reserved                                      */
    uint32_t TM_CLK_CNT_ERR:1;          /**< bit:     13  This bit is set when the SPI Clock Count Test Mode is set and there is an uneven amount of clocks.\n */
    uint32_t IBF_FLG:1;                 /**< bit:     14  Set when the Host writes to the Input Buffer signaling there is data for the EC to read.\n */
    uint32_t OBF_FLG:1;                 /**< bit:     15  Set when the EC writes to the Output Buffer signaling there is data for the Host to read.\n */
    uint32_t SPIM_RST_REQ:1;            /**< bit:     16  Set when the SPI Master Requested a Configuration Reset.\n */
    uint32_t RXFIFO_RST_DN:1;           /**< bit:     17  Set after the SPI Master initiates a RX FIFO reset and the reset has been processed. FIFO is cleared.\n */
    uint32_t TXFIFO_RST_DN:1;           /**< bit:     18  Set after the SPI Master initiates a TX FIFO reset and the reset has been processed. FIFO is cleared.\n */
    uint32_t OOL0_ERR:1;                /**< bit:     19  This flag is set with the transfer address requested by the master is out of Limit 0 range or when the BAR is disabled.\n */
    uint32_t OOL1_ERR:1;                /**< bit:     20  This flag is set with the transfer address requested by the master is out of Limit 1 range or when the BAR is disabled.\n */
    uint32_t ARMBUS_ERR:1;              /**< bit:     21  ARM Bus Error returned for the curren data transfer.\n */
    uint32_t UNDEF_CMD_ERR:1;           /**< bit:     22  Undefined Command Error: The command received from the master isn't defined.\n */
    uint32_t DV_BUSY:1;                 /**< bit:     23  If the Master requested a transaction whose destination is busy the request is ignored.\n         Should use the poll or wait for interrupts.\n */
    uint32_t RXFIFO_SIZE_ERR:1;         /**< bit:     24  If size requested is more than what Master provided and the Master terminates early error flag         shut down request signal to ARM Bus. Size requested is less than what Master provided -- ignored and         continue transaction, may be taking in garbage.\n */
    uint32_t TXFIFO_UNDERFLOW:1;        /**< bit:     25  If Master reads more than what is in FIFO, FIFO will flag an underflow error and the data returned         will just be the last valid pointer value.\n */
    uint32_t TXFIFO_OVRFLOW:1;          /**< bit:     26  If Master doesn't read all of the data it requested from the posted read block cycle, than data         will still be left in the FIFO. This will cause misalignment with the following transactions and a new         read cycle can cause overflow.\n */
    uint32_t RXFIFO_UNDERFLOW:1;        /**< bit:     27  If the SPI Slave reads RX FIFO when it is empty, RX FIFO Underflow flag will be set. This condition         will never happen under normal situation.\n */
    uint32_t RXFIFO_OVRFLOW:1;          /**< bit:     28  If SPI Master writes more than the space in the FIFO, the FIFO will flag an overflow error and data         will not be stored.\n */
    uint32_t :3;                        /**< bit: 29..31  Reserved                                      */
  };
  uint32_t w;
} __SPI_SLAVE_SSPI_STATUS_bits_t;
#define SPI_SLAVE_SSPI_STATUS_RESETVALUE    (0x500U)                                      /**<  (SPI_SLAVE_SSPI_STATUS) SPI Slave Status Register.\n  Reset Value */

#define SPI_SLAVE_SSPI_STATUS_MEM_WR_DONE_Pos (0)                                            /**< (SPI_SLAVE_SSPI_STATUS) When the ARM BUS side has fully finished the last transaction from the FIFO to write the data to\n         Memory for Posted Writes . Clear with new Write request.\n Position */
#define SPI_SLAVE_SSPI_STATUS_MEM_WR_DONE_Msk (0x1U << SPI_SLAVE_SSPI_STATUS_MEM_WR_DONE_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) When the ARM BUS side has fully finished the last transaction from the FIFO to write the data to\n         Memory for Posted Writes . Clear with new Write request.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_MEM_RD_DONE_Pos (1)                                            /**< (SPI_SLAVE_SSPI_STATUS) When the ARM BUS side has fully finished writing the last written DWord to the FIFO for a set of data\n         read from Memory for Posted Reads. - cleared with new Read request.\n Position */
#define SPI_SLAVE_SSPI_STATUS_MEM_RD_DONE_Msk (0x1U << SPI_SLAVE_SSPI_STATUS_MEM_RD_DONE_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) When the ARM BUS side has fully finished writing the last written DWord to the FIFO for a set of data\n         read from Memory for Posted Reads. - cleared with new Read request.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_MEM_WR_BUSY_Pos (3)                                            /**< (SPI_SLAVE_SSPI_STATUS) When an Memory Write transaction is currently being processed.\n Position */
#define SPI_SLAVE_SSPI_STATUS_MEM_WR_BUSY_Msk (0x1U << SPI_SLAVE_SSPI_STATUS_MEM_WR_BUSY_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) When an Memory Write transaction is currently being processed.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_MEM_RD_BUSY_Pos (4)                                            /**< (SPI_SLAVE_SSPI_STATUS) When an Memory Read transaction is currently being processed.\n Position */
#define SPI_SLAVE_SSPI_STATUS_MEM_RD_BUSY_Msk (0x1U << SPI_SLAVE_SSPI_STATUS_MEM_RD_BUSY_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) When an Memory Read transaction is currently being processed.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_SREG_TRANS_Pos  (5)                                            /**< (SPI_SLAVE_SSPI_STATUS) When an SREG transaction is currently being processed.\n Position */
#define SPI_SLAVE_SSPI_STATUS_SREG_TRANS_Msk  (0x1U << SPI_SLAVE_SSPI_STATUS_SREG_TRANS_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) When an SREG transaction is currently being processed.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_POLL_HIGH_Pos   (6)                                            /**< (SPI_SLAVE_SSPI_STATUS) If this bit is set, then something in the high 16-bit of status register is set and needs to be checked.\n         SPI Master should take action to clear this.\n Position */
#define SPI_SLAVE_SSPI_STATUS_POLL_HIGH_Msk   (0x1U << SPI_SLAVE_SSPI_STATUS_POLL_HIGH_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) If this bit is set, then something in the high 16-bit of status register is set and needs to be checked.\n         SPI Master should take action to clear this.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_RX_FIFO_EMPTY_Pos (8)                                            /**< (SPI_SLAVE_SSPI_STATUS) Signifies all Memory write transactions for the SPI Masters requested size have been performed.\n         New transactions are allowed.\n Position */
#define SPI_SLAVE_SSPI_STATUS_RX_FIFO_EMPTY_Msk (0x1U << SPI_SLAVE_SSPI_STATUS_RX_FIFO_EMPTY_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) Signifies all Memory write transactions for the SPI Masters requested size have been performed.\n         New transactions are allowed.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_RX_FIFO_FULL_Pos (9)                                            /**< (SPI_SLAVE_SSPI_STATUS) The RX FIFO is full of data to be written to Memory.\n Position */
#define SPI_SLAVE_SSPI_STATUS_RX_FIFO_FULL_Msk (0x1U << SPI_SLAVE_SSPI_STATUS_RX_FIFO_FULL_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) The RX FIFO is full of data to be written to Memory.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_TX_FIFO_EMPTY_Pos (10)                                           /**< (SPI_SLAVE_SSPI_STATUS) Signifies SPI Master has read the data requested from Memory. Can be used to show there is data\n         the SPI Master has requested and not been read yet. New read transactions will be aligned.\n Position */
#define SPI_SLAVE_SSPI_STATUS_TX_FIFO_EMPTY_Msk (0x1U << SPI_SLAVE_SSPI_STATUS_TX_FIFO_EMPTY_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) Signifies SPI Master has read the data requested from Memory. Can be used to show there is data\n         the SPI Master has requested and not been read yet. New read transactions will be aligned.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_TX_FIFO_FULL_Pos (11)                                           /**< (SPI_SLAVE_SSPI_STATUS) The TX FIFO is full of data that was read from Memory.\n Position */
#define SPI_SLAVE_SSPI_STATUS_TX_FIFO_FULL_Msk (0x1U << SPI_SLAVE_SSPI_STATUS_TX_FIFO_FULL_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) The TX FIFO is full of data that was read from Memory.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_TM_CLK_CNT_ERR_Pos (13)                                           /**< (SPI_SLAVE_SSPI_STATUS) This bit is set when the SPI Clock Count Test Mode is set and there is an uneven amount of clocks.\n Position */
#define SPI_SLAVE_SSPI_STATUS_TM_CLK_CNT_ERR_Msk (0x1U << SPI_SLAVE_SSPI_STATUS_TM_CLK_CNT_ERR_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) This bit is set when the SPI Clock Count Test Mode is set and there is an uneven amount of clocks.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_IBF_FLG_Pos     (14)                                           /**< (SPI_SLAVE_SSPI_STATUS) Set when the Host writes to the Input Buffer signaling there is data for the EC to read.\n Position */
#define SPI_SLAVE_SSPI_STATUS_IBF_FLG_Msk     (0x1U << SPI_SLAVE_SSPI_STATUS_IBF_FLG_Pos)    /**< (SPI_SLAVE_SSPI_STATUS) Set when the Host writes to the Input Buffer signaling there is data for the EC to read.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_OBF_FLG_Pos     (15)                                           /**< (SPI_SLAVE_SSPI_STATUS) Set when the EC writes to the Output Buffer signaling there is data for the Host to read.\n Position */
#define SPI_SLAVE_SSPI_STATUS_OBF_FLG_Msk     (0x1U << SPI_SLAVE_SSPI_STATUS_OBF_FLG_Pos)    /**< (SPI_SLAVE_SSPI_STATUS) Set when the EC writes to the Output Buffer signaling there is data for the Host to read.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_SPIM_RST_REQ_Pos (16)                                           /**< (SPI_SLAVE_SSPI_STATUS) Set when the SPI Master Requested a Configuration Reset.\n Position */
#define SPI_SLAVE_SSPI_STATUS_SPIM_RST_REQ_Msk (0x1U << SPI_SLAVE_SSPI_STATUS_SPIM_RST_REQ_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) Set when the SPI Master Requested a Configuration Reset.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_RXFIFO_RST_DN_Pos (17)                                           /**< (SPI_SLAVE_SSPI_STATUS) Set after the SPI Master initiates a RX FIFO reset and the reset has been processed. FIFO is cleared.\n Position */
#define SPI_SLAVE_SSPI_STATUS_RXFIFO_RST_DN_Msk (0x1U << SPI_SLAVE_SSPI_STATUS_RXFIFO_RST_DN_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) Set after the SPI Master initiates a RX FIFO reset and the reset has been processed. FIFO is cleared.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_TXFIFO_RST_DN_Pos (18)                                           /**< (SPI_SLAVE_SSPI_STATUS) Set after the SPI Master initiates a TX FIFO reset and the reset has been processed. FIFO is cleared.\n Position */
#define SPI_SLAVE_SSPI_STATUS_TXFIFO_RST_DN_Msk (0x1U << SPI_SLAVE_SSPI_STATUS_TXFIFO_RST_DN_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) Set after the SPI Master initiates a TX FIFO reset and the reset has been processed. FIFO is cleared.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_OOL0_ERR_Pos    (19)                                           /**< (SPI_SLAVE_SSPI_STATUS) This flag is set with the transfer address requested by the master is out of Limit 0 range or when the BAR is disabled.\n Position */
#define SPI_SLAVE_SSPI_STATUS_OOL0_ERR_Msk    (0x1U << SPI_SLAVE_SSPI_STATUS_OOL0_ERR_Pos)   /**< (SPI_SLAVE_SSPI_STATUS) This flag is set with the transfer address requested by the master is out of Limit 0 range or when the BAR is disabled.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_OOL1_ERR_Pos    (20)                                           /**< (SPI_SLAVE_SSPI_STATUS) This flag is set with the transfer address requested by the master is out of Limit 1 range or when the BAR is disabled.\n Position */
#define SPI_SLAVE_SSPI_STATUS_OOL1_ERR_Msk    (0x1U << SPI_SLAVE_SSPI_STATUS_OOL1_ERR_Pos)   /**< (SPI_SLAVE_SSPI_STATUS) This flag is set with the transfer address requested by the master is out of Limit 1 range or when the BAR is disabled.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_ARMBUS_ERR_Pos  (21)                                           /**< (SPI_SLAVE_SSPI_STATUS) ARM Bus Error returned for the curren data transfer.\n Position */
#define SPI_SLAVE_SSPI_STATUS_ARMBUS_ERR_Msk  (0x1U << SPI_SLAVE_SSPI_STATUS_ARMBUS_ERR_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) ARM Bus Error returned for the curren data transfer.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_UNDEF_CMD_ERR_Pos (22)                                           /**< (SPI_SLAVE_SSPI_STATUS) Undefined Command Error: The command received from the master isn't defined.\n Position */
#define SPI_SLAVE_SSPI_STATUS_UNDEF_CMD_ERR_Msk (0x1U << SPI_SLAVE_SSPI_STATUS_UNDEF_CMD_ERR_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) Undefined Command Error: The command received from the master isn't defined.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_DV_BUSY_Pos     (23)                                           /**< (SPI_SLAVE_SSPI_STATUS) If the Master requested a transaction whose destination is busy the request is ignored.\n         Should use the poll or wait for interrupts.\n Position */
#define SPI_SLAVE_SSPI_STATUS_DV_BUSY_Msk     (0x1U << SPI_SLAVE_SSPI_STATUS_DV_BUSY_Pos)    /**< (SPI_SLAVE_SSPI_STATUS) If the Master requested a transaction whose destination is busy the request is ignored.\n         Should use the poll or wait for interrupts.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_RXFIFO_SIZE_ERR_Pos (24)                                           /**< (SPI_SLAVE_SSPI_STATUS) If size requested is more than what Master provided and the Master terminates early error flag         shut down request signal to ARM Bus. Size requested is less than what Master provided -- ignored and         continue transaction, may be taking in garbage.\n Position */
#define SPI_SLAVE_SSPI_STATUS_RXFIFO_SIZE_ERR_Msk (0x1U << SPI_SLAVE_SSPI_STATUS_RXFIFO_SIZE_ERR_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) If size requested is more than what Master provided and the Master terminates early error flag         shut down request signal to ARM Bus. Size requested is less than what Master provided -- ignored and         continue transaction, may be taking in garbage.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_TXFIFO_UNDERFLOW_Pos (25)                                           /**< (SPI_SLAVE_SSPI_STATUS) If Master reads more than what is in FIFO, FIFO will flag an underflow error and the data returned         will just be the last valid pointer value.\n Position */
#define SPI_SLAVE_SSPI_STATUS_TXFIFO_UNDERFLOW_Msk (0x1U << SPI_SLAVE_SSPI_STATUS_TXFIFO_UNDERFLOW_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) If Master reads more than what is in FIFO, FIFO will flag an underflow error and the data returned         will just be the last valid pointer value.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_TXFIFO_OVRFLOW_Pos (26)                                           /**< (SPI_SLAVE_SSPI_STATUS) If Master doesn't read all of the data it requested from the posted read block cycle, than data         will still be left in the FIFO. This will cause misalignment with the following transactions and a new         read cycle can cause overflow.\n Position */
#define SPI_SLAVE_SSPI_STATUS_TXFIFO_OVRFLOW_Msk (0x1U << SPI_SLAVE_SSPI_STATUS_TXFIFO_OVRFLOW_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) If Master doesn't read all of the data it requested from the posted read block cycle, than data         will still be left in the FIFO. This will cause misalignment with the following transactions and a new         read cycle can cause overflow.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_RXFIFO_UNDERFLOW_Pos (27)                                           /**< (SPI_SLAVE_SSPI_STATUS) If the SPI Slave reads RX FIFO when it is empty, RX FIFO Underflow flag will be set. This condition         will never happen under normal situation.\n Position */
#define SPI_SLAVE_SSPI_STATUS_RXFIFO_UNDERFLOW_Msk (0x1U << SPI_SLAVE_SSPI_STATUS_RXFIFO_UNDERFLOW_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) If the SPI Slave reads RX FIFO when it is empty, RX FIFO Underflow flag will be set. This condition         will never happen under normal situation.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_RXFIFO_OVRFLOW_Pos (28)                                           /**< (SPI_SLAVE_SSPI_STATUS) If SPI Master writes more than the space in the FIFO, the FIFO will flag an overflow error and data         will not be stored.\n Position */
#define SPI_SLAVE_SSPI_STATUS_RXFIFO_OVRFLOW_Msk (0x1U << SPI_SLAVE_SSPI_STATUS_RXFIFO_OVRFLOW_Pos)  /**< (SPI_SLAVE_SSPI_STATUS) If SPI Master writes more than the space in the FIFO, the FIFO will flag an overflow error and data         will not be stored.\n Mask */
#define SPI_SLAVE_SSPI_STATUS_Msk             (0x1FFFEF7BUL)                                 /**< (SPI_SLAVE_SSPI_STATUS) Register Mask  */

/* -------- SPI_SLAVE_SSPI_EC_STATUS : (SPI_SLAVE Offset: 0x08) (R/W 32) SPI Slave EC Status Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t MEM_WR_DONE:1;             /**< bit:      0  When the ARM BUS side has fully finished the last transaction from the FIFO to write the data to\n         Memory for Posted Writes .- clear with new Write request.\n */
    uint32_t MEM_RD_DONE:1;             /**< bit:      1  When the ARM BUS side has fully finished writing the last written DWord to the FIFO for a set of data\n         read from Memory for Posted Reads. - cleared with new Read request.\n */
    uint32_t :1;                        /**< bit:      2  Reserved                                      */
    uint32_t MEM_WR_BUSY:1;             /**< bit:      3  When an Memory Write transaction is currently being processed.\n */
    uint32_t MEM_RD_BUSY:1;             /**< bit:      4  When an Memory Read transaction is currently being processed.\n */
    uint32_t SREG_TRANS:1;              /**< bit:      5  When an SREG transaction is currently being processed.\n */
    uint32_t POLL_HIGH:1;               /**< bit:      6  If this bit is set, then something in the high 16-bit of status register is set and needs to be checked.\n         SPI Master should take action to clear this.\n */
    uint32_t :1;                        /**< bit:      7  Reserved                                      */
    uint32_t RX_FIFO_EMPTY:1;           /**< bit:      8  Signifies all Memory write transactions for the SPI Masters requested size have been performed.\n         New transactions are allowed.\n */
    uint32_t RX_FIFO_FULL:1;            /**< bit:      9  The RX FIFO is full of data to be written to Memory.\n */
    uint32_t TX_FIFO_EMPTY:1;           /**< bit:     10  Signifies SPI Master has read the data requested from Memory. Can be used to show there is data\n         the SPI Master has requested and not been read yet. New read transactions will be aligned.\n */
    uint32_t TX_FIFO_FULL:1;            /**< bit:     11  The TX FIFO is full of data that was read from Memory.\n */
    uint32_t :1;                        /**< bit:     12  Reserved                                      */
    uint32_t TM_CLK_CNT_ERR:1;          /**< bit:     13  This bit is set when the SPI Clock Count Test Mode is set and there is an uneven amount of clocks.\n */
    uint32_t IBF_FLG:1;                 /**< bit:     14  Set when the Host writes to the Input Buffer signaling there is data for the EC to read.\n */
    uint32_t OBF_FLG:1;                 /**< bit:     15  Set when the EC writes to the Output Buffer signaling there is data for the Host to read.\n */
    uint32_t SPIM_RST_REQ:1;            /**< bit:     16  Set when the SPI Master Requested a Configuration Reset.\n */
    uint32_t RXFIFO_RST_DN:1;           /**< bit:     17  Set after the SPI Master initiates a RX FIFO reset and the reset has been processed. FIFO is cleared.\n */
    uint32_t TXFIFO_RST_DN:1;           /**< bit:     18  Set after the SPI Master initiates a TX FIFO reset and the reset has been processed. FIFO is cleared.\n */
    uint32_t OOL0_ERR:1;                /**< bit:     19  This flag is set with the transfer address requested by the master is out of Limit 0 range or when the BAR is disabled.\n */
    uint32_t OOL1_ERR:1;                /**< bit:     20  This flag is set with the transfer address requested by the master is out of Limit 1 range or when the BAR is disabled.\n */
    uint32_t ARMBUS_ERR:1;              /**< bit:     21  ARM Bus Error returned for the curren data transfer.\n */
    uint32_t UNDEF_CMD_ERR:1;           /**< bit:     22  Undefined Command Error: The command received from the master isn't defined.\n */
    uint32_t DV_BUSY:1;                 /**< bit:     23  If the Master requested a transaction whose destination is busy the request is ignored.\n         Should use the poll or wait for interrupts.\n */
    uint32_t RXFIFO_SIZE_ERR:1;         /**< bit:     24  If size requested is more than what Master provided and the Master terminates early error flag         shut down request signal to ARM Bus. Size requested is less than what Master provided -- ignored and         continue transaction, may be taking in garbage.\n */
    uint32_t TXFIFO_UNDERFLOW:1;        /**< bit:     25  If Master reads more than what is in FIFO, FIFO will flag an underflow error and the data returned         will just be the last valid pointer value.\n */
    uint32_t TXFIFO_OVRFLOW:1;          /**< bit:     26  If Master doesn't read all of the data it requested from the posted read block cycle, than data         will still be left in the FIFO. This will cause misalignment with the following transactions and a new         read cycle can cause overflow.\n */
    uint32_t RXFIFO_UNDERFLOW:1;        /**< bit:     27  If the SPI Slave reads RX FIFO when it is empty, RX FIFO Underflow flag will be set. This condition         will never happen under normal situation.\n */
    uint32_t RXFIFO_OVRFLOW:1;          /**< bit:     28  If SPI Master writes more than the space in the FIFO, the FIFO will flag an overflow error and data         will not be stored.\n */
    uint32_t :3;                        /**< bit: 29..31  Reserved                                      */
  };
  uint32_t w;
} __SPI_SLAVE_SSPI_EC_STATUS_bits_t;
#define SPI_SLAVE_SSPI_EC_STATUS_RESETVALUE (0x500U)                                      /**<  (SPI_SLAVE_SSPI_EC_STATUS) SPI Slave EC Status Register.\n  Reset Value */

#define SPI_SLAVE_SSPI_EC_STATUS_MEM_WR_DONE_Pos (0)                                            /**< (SPI_SLAVE_SSPI_EC_STATUS) When the ARM BUS side has fully finished the last transaction from the FIFO to write the data to\n         Memory for Posted Writes .- clear with new Write request.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_MEM_WR_DONE_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_MEM_WR_DONE_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) When the ARM BUS side has fully finished the last transaction from the FIFO to write the data to\n         Memory for Posted Writes .- clear with new Write request.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_MEM_RD_DONE_Pos (1)                                            /**< (SPI_SLAVE_SSPI_EC_STATUS) When the ARM BUS side has fully finished writing the last written DWord to the FIFO for a set of data\n         read from Memory for Posted Reads. - cleared with new Read request.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_MEM_RD_DONE_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_MEM_RD_DONE_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) When the ARM BUS side has fully finished writing the last written DWord to the FIFO for a set of data\n         read from Memory for Posted Reads. - cleared with new Read request.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_MEM_WR_BUSY_Pos (3)                                            /**< (SPI_SLAVE_SSPI_EC_STATUS) When an Memory Write transaction is currently being processed.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_MEM_WR_BUSY_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_MEM_WR_BUSY_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) When an Memory Write transaction is currently being processed.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_MEM_RD_BUSY_Pos (4)                                            /**< (SPI_SLAVE_SSPI_EC_STATUS) When an Memory Read transaction is currently being processed.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_MEM_RD_BUSY_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_MEM_RD_BUSY_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) When an Memory Read transaction is currently being processed.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_SREG_TRANS_Pos (5)                                            /**< (SPI_SLAVE_SSPI_EC_STATUS) When an SREG transaction is currently being processed.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_SREG_TRANS_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_SREG_TRANS_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) When an SREG transaction is currently being processed.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_POLL_HIGH_Pos (6)                                            /**< (SPI_SLAVE_SSPI_EC_STATUS) If this bit is set, then something in the high 16-bit of status register is set and needs to be checked.\n         SPI Master should take action to clear this.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_POLL_HIGH_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_POLL_HIGH_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) If this bit is set, then something in the high 16-bit of status register is set and needs to be checked.\n         SPI Master should take action to clear this.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_RX_FIFO_EMPTY_Pos (8)                                            /**< (SPI_SLAVE_SSPI_EC_STATUS) Signifies all Memory write transactions for the SPI Masters requested size have been performed.\n         New transactions are allowed.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_RX_FIFO_EMPTY_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_RX_FIFO_EMPTY_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) Signifies all Memory write transactions for the SPI Masters requested size have been performed.\n         New transactions are allowed.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_RX_FIFO_FULL_Pos (9)                                            /**< (SPI_SLAVE_SSPI_EC_STATUS) The RX FIFO is full of data to be written to Memory.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_RX_FIFO_FULL_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_RX_FIFO_FULL_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) The RX FIFO is full of data to be written to Memory.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_TX_FIFO_EMPTY_Pos (10)                                           /**< (SPI_SLAVE_SSPI_EC_STATUS) Signifies SPI Master has read the data requested from Memory. Can be used to show there is data\n         the SPI Master has requested and not been read yet. New read transactions will be aligned.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_TX_FIFO_EMPTY_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_TX_FIFO_EMPTY_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) Signifies SPI Master has read the data requested from Memory. Can be used to show there is data\n         the SPI Master has requested and not been read yet. New read transactions will be aligned.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_TX_FIFO_FULL_Pos (11)                                           /**< (SPI_SLAVE_SSPI_EC_STATUS) The TX FIFO is full of data that was read from Memory.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_TX_FIFO_FULL_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_TX_FIFO_FULL_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) The TX FIFO is full of data that was read from Memory.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_TM_CLK_CNT_ERR_Pos (13)                                           /**< (SPI_SLAVE_SSPI_EC_STATUS) This bit is set when the SPI Clock Count Test Mode is set and there is an uneven amount of clocks.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_TM_CLK_CNT_ERR_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_TM_CLK_CNT_ERR_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) This bit is set when the SPI Clock Count Test Mode is set and there is an uneven amount of clocks.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_IBF_FLG_Pos  (14)                                           /**< (SPI_SLAVE_SSPI_EC_STATUS) Set when the Host writes to the Input Buffer signaling there is data for the EC to read.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_IBF_FLG_Msk  (0x1U << SPI_SLAVE_SSPI_EC_STATUS_IBF_FLG_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) Set when the Host writes to the Input Buffer signaling there is data for the EC to read.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_OBF_FLG_Pos  (15)                                           /**< (SPI_SLAVE_SSPI_EC_STATUS) Set when the EC writes to the Output Buffer signaling there is data for the Host to read.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_OBF_FLG_Msk  (0x1U << SPI_SLAVE_SSPI_EC_STATUS_OBF_FLG_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) Set when the EC writes to the Output Buffer signaling there is data for the Host to read.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_SPIM_RST_REQ_Pos (16)                                           /**< (SPI_SLAVE_SSPI_EC_STATUS) Set when the SPI Master Requested a Configuration Reset.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_SPIM_RST_REQ_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_SPIM_RST_REQ_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) Set when the SPI Master Requested a Configuration Reset.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_RXFIFO_RST_DN_Pos (17)                                           /**< (SPI_SLAVE_SSPI_EC_STATUS) Set after the SPI Master initiates a RX FIFO reset and the reset has been processed. FIFO is cleared.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_RXFIFO_RST_DN_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_RXFIFO_RST_DN_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) Set after the SPI Master initiates a RX FIFO reset and the reset has been processed. FIFO is cleared.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_TXFIFO_RST_DN_Pos (18)                                           /**< (SPI_SLAVE_SSPI_EC_STATUS) Set after the SPI Master initiates a TX FIFO reset and the reset has been processed. FIFO is cleared.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_TXFIFO_RST_DN_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_TXFIFO_RST_DN_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) Set after the SPI Master initiates a TX FIFO reset and the reset has been processed. FIFO is cleared.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_OOL0_ERR_Pos (19)                                           /**< (SPI_SLAVE_SSPI_EC_STATUS) This flag is set with the transfer address requested by the master is out of Limit 0 range or when the BAR is disabled.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_OOL0_ERR_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_OOL0_ERR_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) This flag is set with the transfer address requested by the master is out of Limit 0 range or when the BAR is disabled.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_OOL1_ERR_Pos (20)                                           /**< (SPI_SLAVE_SSPI_EC_STATUS) This flag is set with the transfer address requested by the master is out of Limit 1 range or when the BAR is disabled.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_OOL1_ERR_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_OOL1_ERR_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) This flag is set with the transfer address requested by the master is out of Limit 1 range or when the BAR is disabled.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_ARMBUS_ERR_Pos (21)                                           /**< (SPI_SLAVE_SSPI_EC_STATUS) ARM Bus Error returned for the curren data transfer.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_ARMBUS_ERR_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_ARMBUS_ERR_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) ARM Bus Error returned for the curren data transfer.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_UNDEF_CMD_ERR_Pos (22)                                           /**< (SPI_SLAVE_SSPI_EC_STATUS) Undefined Command Error: The command received from the master isn't defined.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_UNDEF_CMD_ERR_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_UNDEF_CMD_ERR_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) Undefined Command Error: The command received from the master isn't defined.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_DV_BUSY_Pos  (23)                                           /**< (SPI_SLAVE_SSPI_EC_STATUS) If the Master requested a transaction whose destination is busy the request is ignored.\n         Should use the poll or wait for interrupts.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_DV_BUSY_Msk  (0x1U << SPI_SLAVE_SSPI_EC_STATUS_DV_BUSY_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) If the Master requested a transaction whose destination is busy the request is ignored.\n         Should use the poll or wait for interrupts.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_RXFIFO_SIZE_ERR_Pos (24)                                           /**< (SPI_SLAVE_SSPI_EC_STATUS) If size requested is more than what Master provided and the Master terminates early error flag         shut down request signal to ARM Bus. Size requested is less than what Master provided -- ignored and         continue transaction, may be taking in garbage.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_RXFIFO_SIZE_ERR_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_RXFIFO_SIZE_ERR_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) If size requested is more than what Master provided and the Master terminates early error flag         shut down request signal to ARM Bus. Size requested is less than what Master provided -- ignored and         continue transaction, may be taking in garbage.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_TXFIFO_UNDERFLOW_Pos (25)                                           /**< (SPI_SLAVE_SSPI_EC_STATUS) If Master reads more than what is in FIFO, FIFO will flag an underflow error and the data returned         will just be the last valid pointer value.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_TXFIFO_UNDERFLOW_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_TXFIFO_UNDERFLOW_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) If Master reads more than what is in FIFO, FIFO will flag an underflow error and the data returned         will just be the last valid pointer value.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_TXFIFO_OVRFLOW_Pos (26)                                           /**< (SPI_SLAVE_SSPI_EC_STATUS) If Master doesn't read all of the data it requested from the posted read block cycle, than data         will still be left in the FIFO. This will cause misalignment with the following transactions and a new         read cycle can cause overflow.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_TXFIFO_OVRFLOW_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_TXFIFO_OVRFLOW_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) If Master doesn't read all of the data it requested from the posted read block cycle, than data         will still be left in the FIFO. This will cause misalignment with the following transactions and a new         read cycle can cause overflow.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_RXFIFO_UNDERFLOW_Pos (27)                                           /**< (SPI_SLAVE_SSPI_EC_STATUS) If the SPI Slave reads RX FIFO when it is empty, RX FIFO Underflow flag will be set. This condition         will never happen under normal situation.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_RXFIFO_UNDERFLOW_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_RXFIFO_UNDERFLOW_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) If the SPI Slave reads RX FIFO when it is empty, RX FIFO Underflow flag will be set. This condition         will never happen under normal situation.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_RXFIFO_OVRFLOW_Pos (28)                                           /**< (SPI_SLAVE_SSPI_EC_STATUS) If SPI Master writes more than the space in the FIFO, the FIFO will flag an overflow error and data         will not be stored.\n Position */
#define SPI_SLAVE_SSPI_EC_STATUS_RXFIFO_OVRFLOW_Msk (0x1U << SPI_SLAVE_SSPI_EC_STATUS_RXFIFO_OVRFLOW_Pos)  /**< (SPI_SLAVE_SSPI_EC_STATUS) If SPI Master writes more than the space in the FIFO, the FIFO will flag an overflow error and data         will not be stored.\n Mask */
#define SPI_SLAVE_SSPI_EC_STATUS_Msk          (0x1FFFEF7BUL)                                 /**< (SPI_SLAVE_SSPI_EC_STATUS) Register Mask  */

/* -------- SPI_SLAVE_SSPI_INT_EN : (SPI_SLAVE Offset: 0x0c) (R/W 32) SPI Slave Interrupt Enable Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t MEM_WR_DONE:1;             /**< bit:      0  Enable Memory Write Done Interrupt to SPI Master.\n */
    uint32_t MEM_RD_DONE:1;             /**< bit:      1  Enable Memory Read Done Interrupt to SPI Master.\n */
    uint32_t :1;                        /**< bit:      2  Reserved                                      */
    uint32_t MEM_WR_BUSY:1;             /**< bit:      3  Enable Memory Write Busy Interrupt to SPI Master.\n */
    uint32_t MEM_RD_BUSY:1;             /**< bit:      4  Enable Memory Read Busy Interrupt to SPI Master.\n */
    uint32_t SREG_TRANS:1;              /**< bit:      5  Enable SREG Trans Busy Interrupt to SPI Master.\n */
    uint32_t POLL_HIGH:1;               /**< bit:      6  Enable Poll High Request Interrupt to SPI Master.\n */
    uint32_t :1;                        /**< bit:      7  Reserved                                      */
    uint32_t RX_FIFO_EMPTY:1;           /**< bit:      8  Enable SREG RX FIFO Empty Interrupt to SPI Master.\n */
    uint32_t RX_FIFO_FULL:1;            /**< bit:      9  Enable RX FIFO Full Interrupt to SPI Master.\n */
    uint32_t TX_FIFO_EMPTY:1;           /**< bit:     10  Enable TX FIFO Empty Interrupt to SPI Master.\n */
    uint32_t TX_FIFO_FULL:1;            /**< bit:     11  Enable TX FIFI FULL Interrupt to SPI Master.\n */
    uint32_t :1;                        /**< bit:     12  Reserved                                      */
    uint32_t TM_CLK_CNT_ERR:1;          /**< bit:     13  Enable Test Mode SPI Clock Count Error Interrupt to SPI Master.\n */
    uint32_t IBF_FLG:1;                 /**< bit:     14  Enable Input Buffer Signaling Interrupt to SPI Master.\n */
    uint32_t OBF_FLG:1;                 /**< bit:     15  Enable Output Buffer signaling Interrupt to SPI Master.\n */
    uint32_t SPIM_RST_REQ:1;            /**< bit:     16  Enable SPI Master Request Reset Interrupt to SPI Master.\n */
    uint32_t RXFIFO_RST_DN:1;           /**< bit:     17  Enable RX FIFO Reset Done Interrupt to SPI Master.\n */
    uint32_t TXFIFO_RST_DN:1;           /**< bit:     18  Enable TX FIFO Reset Done Interrupt to SPI Master.\n */
    uint32_t OOL0_ERR:1;                /**< bit:     19  Enable Out Of Limit 0 Error Interrupt to SPI Master.\n */
    uint32_t OOL1_ERR:1;                /**< bit:     20  Enable Out Of Limit 1 Error Interrupt to SPI Master.\n */
    uint32_t ARMBUS_ERR:1;              /**< bit:     21  Enable AHB BUS Error Interrupt to SPI Master.\n */
    uint32_t UNDEF_CMD_ERR:1;           /**< bit:     22  Enable Undefined Command Error Interrupt to SPI Master.\n */
    uint32_t DV_BUSY:1;                 /**< bit:     23  Enable Device Busy Interrupt to SPI Master.\n */
    uint32_t RXFIFO_SIZE_ERR:1;         /**< bit:     24  Enable RX FIFO SIZE Error Interrupt to SPI Master.\n */
    uint32_t TXFIFO_UNDERFLOW:1;        /**< bit:     25  Enable TX FIFO Underflow Interrupt to SPI Master.\n */
    uint32_t TXFIFO_OVRFLOW:1;          /**< bit:     26  Enable TX FIFO Overflow Interrupt to SPI Master.\n */
    uint32_t RXFIFO_UNDERFLOW:1;        /**< bit:     27  Enable RX FIFO Underflow Interrupt to SPI Master.\n */
    uint32_t RXFIFO_OVRFLOW:1;          /**< bit:     28  Enable RX FIFO Overflow Interrupt to SPI Master.\n */
    uint32_t :3;                        /**< bit: 29..31  Reserved                                      */
  };
  uint32_t w;
} __SPI_SLAVE_SSPI_INT_EN_bits_t;
#define SPI_SLAVE_SSPI_INT_EN_RESETVALUE    (0x00U)                                       /**<  (SPI_SLAVE_SSPI_INT_EN) SPI Slave Interrupt Enable Register.\n  Reset Value */

#define SPI_SLAVE_SSPI_INT_EN_MEM_WR_DONE_Pos (0)                                            /**< (SPI_SLAVE_SSPI_INT_EN) Enable Memory Write Done Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_MEM_WR_DONE_Msk (0x1U << SPI_SLAVE_SSPI_INT_EN_MEM_WR_DONE_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable Memory Write Done Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_MEM_RD_DONE_Pos (1)                                            /**< (SPI_SLAVE_SSPI_INT_EN) Enable Memory Read Done Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_MEM_RD_DONE_Msk (0x1U << SPI_SLAVE_SSPI_INT_EN_MEM_RD_DONE_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable Memory Read Done Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_MEM_WR_BUSY_Pos (3)                                            /**< (SPI_SLAVE_SSPI_INT_EN) Enable Memory Write Busy Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_MEM_WR_BUSY_Msk (0x1U << SPI_SLAVE_SSPI_INT_EN_MEM_WR_BUSY_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable Memory Write Busy Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_MEM_RD_BUSY_Pos (4)                                            /**< (SPI_SLAVE_SSPI_INT_EN) Enable Memory Read Busy Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_MEM_RD_BUSY_Msk (0x1U << SPI_SLAVE_SSPI_INT_EN_MEM_RD_BUSY_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable Memory Read Busy Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_SREG_TRANS_Pos  (5)                                            /**< (SPI_SLAVE_SSPI_INT_EN) Enable SREG Trans Busy Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_SREG_TRANS_Msk  (0x1U << SPI_SLAVE_SSPI_INT_EN_SREG_TRANS_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable SREG Trans Busy Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_POLL_HIGH_Pos   (6)                                            /**< (SPI_SLAVE_SSPI_INT_EN) Enable Poll High Request Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_POLL_HIGH_Msk   (0x1U << SPI_SLAVE_SSPI_INT_EN_POLL_HIGH_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable Poll High Request Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_RX_FIFO_EMPTY_Pos (8)                                            /**< (SPI_SLAVE_SSPI_INT_EN) Enable SREG RX FIFO Empty Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_RX_FIFO_EMPTY_Msk (0x1U << SPI_SLAVE_SSPI_INT_EN_RX_FIFO_EMPTY_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable SREG RX FIFO Empty Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_RX_FIFO_FULL_Pos (9)                                            /**< (SPI_SLAVE_SSPI_INT_EN) Enable RX FIFO Full Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_RX_FIFO_FULL_Msk (0x1U << SPI_SLAVE_SSPI_INT_EN_RX_FIFO_FULL_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable RX FIFO Full Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_TX_FIFO_EMPTY_Pos (10)                                           /**< (SPI_SLAVE_SSPI_INT_EN) Enable TX FIFO Empty Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_TX_FIFO_EMPTY_Msk (0x1U << SPI_SLAVE_SSPI_INT_EN_TX_FIFO_EMPTY_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable TX FIFO Empty Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_TX_FIFO_FULL_Pos (11)                                           /**< (SPI_SLAVE_SSPI_INT_EN) Enable TX FIFI FULL Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_TX_FIFO_FULL_Msk (0x1U << SPI_SLAVE_SSPI_INT_EN_TX_FIFO_FULL_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable TX FIFI FULL Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_TM_CLK_CNT_ERR_Pos (13)                                           /**< (SPI_SLAVE_SSPI_INT_EN) Enable Test Mode SPI Clock Count Error Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_TM_CLK_CNT_ERR_Msk (0x1U << SPI_SLAVE_SSPI_INT_EN_TM_CLK_CNT_ERR_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable Test Mode SPI Clock Count Error Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_IBF_FLG_Pos     (14)                                           /**< (SPI_SLAVE_SSPI_INT_EN) Enable Input Buffer Signaling Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_IBF_FLG_Msk     (0x1U << SPI_SLAVE_SSPI_INT_EN_IBF_FLG_Pos)    /**< (SPI_SLAVE_SSPI_INT_EN) Enable Input Buffer Signaling Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_OBF_FLG_Pos     (15)                                           /**< (SPI_SLAVE_SSPI_INT_EN) Enable Output Buffer signaling Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_OBF_FLG_Msk     (0x1U << SPI_SLAVE_SSPI_INT_EN_OBF_FLG_Pos)    /**< (SPI_SLAVE_SSPI_INT_EN) Enable Output Buffer signaling Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_SPIM_RST_REQ_Pos (16)                                           /**< (SPI_SLAVE_SSPI_INT_EN) Enable SPI Master Request Reset Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_SPIM_RST_REQ_Msk (0x1U << SPI_SLAVE_SSPI_INT_EN_SPIM_RST_REQ_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable SPI Master Request Reset Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_RXFIFO_RST_DN_Pos (17)                                           /**< (SPI_SLAVE_SSPI_INT_EN) Enable RX FIFO Reset Done Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_RXFIFO_RST_DN_Msk (0x1U << SPI_SLAVE_SSPI_INT_EN_RXFIFO_RST_DN_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable RX FIFO Reset Done Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_TXFIFO_RST_DN_Pos (18)                                           /**< (SPI_SLAVE_SSPI_INT_EN) Enable TX FIFO Reset Done Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_TXFIFO_RST_DN_Msk (0x1U << SPI_SLAVE_SSPI_INT_EN_TXFIFO_RST_DN_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable TX FIFO Reset Done Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_OOL0_ERR_Pos    (19)                                           /**< (SPI_SLAVE_SSPI_INT_EN) Enable Out Of Limit 0 Error Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_OOL0_ERR_Msk    (0x1U << SPI_SLAVE_SSPI_INT_EN_OOL0_ERR_Pos)   /**< (SPI_SLAVE_SSPI_INT_EN) Enable Out Of Limit 0 Error Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_OOL1_ERR_Pos    (20)                                           /**< (SPI_SLAVE_SSPI_INT_EN) Enable Out Of Limit 1 Error Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_OOL1_ERR_Msk    (0x1U << SPI_SLAVE_SSPI_INT_EN_OOL1_ERR_Pos)   /**< (SPI_SLAVE_SSPI_INT_EN) Enable Out Of Limit 1 Error Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_ARMBUS_ERR_Pos  (21)                                           /**< (SPI_SLAVE_SSPI_INT_EN) Enable AHB BUS Error Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_ARMBUS_ERR_Msk  (0x1U << SPI_SLAVE_SSPI_INT_EN_ARMBUS_ERR_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable AHB BUS Error Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_UNDEF_CMD_ERR_Pos (22)                                           /**< (SPI_SLAVE_SSPI_INT_EN) Enable Undefined Command Error Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_UNDEF_CMD_ERR_Msk (0x1U << SPI_SLAVE_SSPI_INT_EN_UNDEF_CMD_ERR_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable Undefined Command Error Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_DV_BUSY_Pos     (23)                                           /**< (SPI_SLAVE_SSPI_INT_EN) Enable Device Busy Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_DV_BUSY_Msk     (0x1U << SPI_SLAVE_SSPI_INT_EN_DV_BUSY_Pos)    /**< (SPI_SLAVE_SSPI_INT_EN) Enable Device Busy Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_RXFIFO_SIZE_ERR_Pos (24)                                           /**< (SPI_SLAVE_SSPI_INT_EN) Enable RX FIFO SIZE Error Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_RXFIFO_SIZE_ERR_Msk (0x1U << SPI_SLAVE_SSPI_INT_EN_RXFIFO_SIZE_ERR_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable RX FIFO SIZE Error Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_TXFIFO_UNDERFLOW_Pos (25)                                           /**< (SPI_SLAVE_SSPI_INT_EN) Enable TX FIFO Underflow Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_TXFIFO_UNDERFLOW_Msk (0x1U << SPI_SLAVE_SSPI_INT_EN_TXFIFO_UNDERFLOW_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable TX FIFO Underflow Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_TXFIFO_OVRFLOW_Pos (26)                                           /**< (SPI_SLAVE_SSPI_INT_EN) Enable TX FIFO Overflow Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_TXFIFO_OVRFLOW_Msk (0x1U << SPI_SLAVE_SSPI_INT_EN_TXFIFO_OVRFLOW_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable TX FIFO Overflow Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_RXFIFO_UNDERFLOW_Pos (27)                                           /**< (SPI_SLAVE_SSPI_INT_EN) Enable RX FIFO Underflow Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_RXFIFO_UNDERFLOW_Msk (0x1U << SPI_SLAVE_SSPI_INT_EN_RXFIFO_UNDERFLOW_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable RX FIFO Underflow Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_RXFIFO_OVRFLOW_Pos (28)                                           /**< (SPI_SLAVE_SSPI_INT_EN) Enable RX FIFO Overflow Interrupt to SPI Master.\n Position */
#define SPI_SLAVE_SSPI_INT_EN_RXFIFO_OVRFLOW_Msk (0x1U << SPI_SLAVE_SSPI_INT_EN_RXFIFO_OVRFLOW_Pos)  /**< (SPI_SLAVE_SSPI_INT_EN) Enable RX FIFO Overflow Interrupt to SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_INT_EN_Msk             (0x1FFFEF7BUL)                                 /**< (SPI_SLAVE_SSPI_INT_EN) Register Mask  */

/* -------- SPI_SLAVE_SSPI_EC_INT_EN : (SPI_SLAVE Offset: 0x10) (R/W 32) SPI Slave EC Interrupt Enable Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t MEM_WR_DONE:1;             /**< bit:      0  Enable Memory Write Done Interrupt to EC.\n   */
    uint32_t MEM_RD_DONE:1;             /**< bit:      1  Enable Memory Read Done Interrupt to EC.\n    */
    uint32_t :1;                        /**< bit:      2  Reserved                                      */
    uint32_t MEM_WR_BUSY:1;             /**< bit:      3  Enable Memory Write Busy Interrupt to EC.\n   */
    uint32_t MEM_RD_BUSY:1;             /**< bit:      4  Enable Memory Read Busy Interrupt to EC.\n    */
    uint32_t SREG_TRANS:1;              /**< bit:      5  Enable SREG Trans Busy Interrupt to EC.\n     */
    uint32_t POLL_HIGH:1;               /**< bit:      6  Enable Poll High Request Interrupt to EC.\n   */
    uint32_t :1;                        /**< bit:      7  Reserved                                      */
    uint32_t RX_FIFO_EMPTY:1;           /**< bit:      8  Enable SREG RX FIFO Empty Interrupt to EC.\n  */
    uint32_t RX_FIFO_FULL:1;            /**< bit:      9  Enable RX FIFO Full Interrupt to EC.\n        */
    uint32_t TX_FIFO_EMPTY:1;           /**< bit:     10  Enable TX FIFO Empty Interrupt to EC.\n       */
    uint32_t TX_FIFO_FULL:1;            /**< bit:     11  Enable TX FIFI FULL Interrupt to EC.\n        */
    uint32_t :1;                        /**< bit:     12  Reserved                                      */
    uint32_t TM_CLK_CNT_ERR:1;          /**< bit:     13  Enable Test Mode SPI Clock Count Error Interrupt to EC.\n */
    uint32_t IBF_FLG:1;                 /**< bit:     14  Enable Input Buffer Signaling Interrupt to EC.\n */
    uint32_t OBF_FLG:1;                 /**< bit:     15  Enable Output Buffer signaling Interrupt to EC.\n */
    uint32_t SPIM_RST_REQ:1;            /**< bit:     16  Enable SPI Master Request Reset Interrupt to EC.\n */
    uint32_t RXFIFO_RST_DN:1;           /**< bit:     17  Enable RX FIFO Reset Done Interrupt to EC.\n  */
    uint32_t TXFIFO_RST_DN:1;           /**< bit:     18  Enable TX FIFO Reset Done Interrupt to EC.\n  */
    uint32_t OOL0_ERR:1;                /**< bit:     19  Enable Out Of Limit 0 Error Interrupt to EC.\n */
    uint32_t OOL1_ERR:1;                /**< bit:     20  Enable Out Of Limit 1 Error Interrupt to EC.\n */
    uint32_t ARMBUS_ERR:1;              /**< bit:     21  Enable AHB BUS Error Interrupt to EC.\n       */
    uint32_t UNDEF_CMD_ERR:1;           /**< bit:     22  Enable Undefined Command Error Interrupt to EC.\n */
    uint32_t DV_BUSY:1;                 /**< bit:     23  Enable Device Busy Interrupt to EC.\n         */
    uint32_t RXFIFO_SIZE_ERR:1;         /**< bit:     24  Enable RX FIFO SIZE Error Interrupt to EC.\n  */
    uint32_t TXFIFO_UNDERFLOW:1;        /**< bit:     25  Enable TX FIFO Underflow Interrupt to EC.\n   */
    uint32_t TXFIFO_OVRFLOW:1;          /**< bit:     26  Enable TX FIFO Overflow Interrupt to EC.\n    */
    uint32_t RXFIFO_UNDERFLOW:1;        /**< bit:     27  Enable RX FIFO Underflow Interrupt to EC.\n   */
    uint32_t RXFIFO_OVRFLOW:1;          /**< bit:     28  Enable RX FIFO Overflow Interrupt to EC.\n    */
    uint32_t :3;                        /**< bit: 29..31  Reserved                                      */
  };
  uint32_t w;
} __SPI_SLAVE_SSPI_EC_INT_EN_bits_t;
#define SPI_SLAVE_SSPI_EC_INT_EN_RESETVALUE (0x00U)                                       /**<  (SPI_SLAVE_SSPI_EC_INT_EN) SPI Slave EC Interrupt Enable Register.\n  Reset Value */

#define SPI_SLAVE_SSPI_EC_INT_EN_MEM_WR_DONE_Pos (0)                                            /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Memory Write Done Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_MEM_WR_DONE_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_MEM_WR_DONE_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Memory Write Done Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_MEM_RD_DONE_Pos (1)                                            /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Memory Read Done Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_MEM_RD_DONE_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_MEM_RD_DONE_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Memory Read Done Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_MEM_WR_BUSY_Pos (3)                                            /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Memory Write Busy Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_MEM_WR_BUSY_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_MEM_WR_BUSY_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Memory Write Busy Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_MEM_RD_BUSY_Pos (4)                                            /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Memory Read Busy Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_MEM_RD_BUSY_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_MEM_RD_BUSY_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Memory Read Busy Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_SREG_TRANS_Pos (5)                                            /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable SREG Trans Busy Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_SREG_TRANS_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_SREG_TRANS_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable SREG Trans Busy Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_POLL_HIGH_Pos (6)                                            /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Poll High Request Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_POLL_HIGH_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_POLL_HIGH_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Poll High Request Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_RX_FIFO_EMPTY_Pos (8)                                            /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable SREG RX FIFO Empty Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_RX_FIFO_EMPTY_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_RX_FIFO_EMPTY_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable SREG RX FIFO Empty Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_RX_FIFO_FULL_Pos (9)                                            /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable RX FIFO Full Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_RX_FIFO_FULL_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_RX_FIFO_FULL_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable RX FIFO Full Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_TX_FIFO_EMPTY_Pos (10)                                           /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable TX FIFO Empty Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_TX_FIFO_EMPTY_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_TX_FIFO_EMPTY_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable TX FIFO Empty Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_TX_FIFO_FULL_Pos (11)                                           /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable TX FIFI FULL Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_TX_FIFO_FULL_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_TX_FIFO_FULL_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable TX FIFI FULL Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_TM_CLK_CNT_ERR_Pos (13)                                           /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Test Mode SPI Clock Count Error Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_TM_CLK_CNT_ERR_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_TM_CLK_CNT_ERR_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Test Mode SPI Clock Count Error Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_IBF_FLG_Pos  (14)                                           /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Input Buffer Signaling Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_IBF_FLG_Msk  (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_IBF_FLG_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Input Buffer Signaling Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_OBF_FLG_Pos  (15)                                           /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Output Buffer signaling Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_OBF_FLG_Msk  (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_OBF_FLG_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Output Buffer signaling Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_SPIM_RST_REQ_Pos (16)                                           /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable SPI Master Request Reset Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_SPIM_RST_REQ_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_SPIM_RST_REQ_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable SPI Master Request Reset Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_RXFIFO_RST_DN_Pos (17)                                           /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable RX FIFO Reset Done Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_RXFIFO_RST_DN_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_RXFIFO_RST_DN_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable RX FIFO Reset Done Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_TXFIFO_RST_DN_Pos (18)                                           /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable TX FIFO Reset Done Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_TXFIFO_RST_DN_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_TXFIFO_RST_DN_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable TX FIFO Reset Done Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_OOL0_ERR_Pos (19)                                           /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Out Of Limit 0 Error Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_OOL0_ERR_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_OOL0_ERR_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Out Of Limit 0 Error Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_OOL1_ERR_Pos (20)                                           /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Out Of Limit 1 Error Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_OOL1_ERR_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_OOL1_ERR_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Out Of Limit 1 Error Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_ARMBUS_ERR_Pos (21)                                           /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable AHB BUS Error Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_ARMBUS_ERR_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_ARMBUS_ERR_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable AHB BUS Error Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_UNDEF_CMD_ERR_Pos (22)                                           /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Undefined Command Error Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_UNDEF_CMD_ERR_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_UNDEF_CMD_ERR_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Undefined Command Error Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_DV_BUSY_Pos  (23)                                           /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Device Busy Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_DV_BUSY_Msk  (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_DV_BUSY_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable Device Busy Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_RXFIFO_SIZE_ERR_Pos (24)                                           /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable RX FIFO SIZE Error Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_RXFIFO_SIZE_ERR_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_RXFIFO_SIZE_ERR_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable RX FIFO SIZE Error Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_TXFIFO_UNDERFLOW_Pos (25)                                           /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable TX FIFO Underflow Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_TXFIFO_UNDERFLOW_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_TXFIFO_UNDERFLOW_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable TX FIFO Underflow Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_TXFIFO_OVRFLOW_Pos (26)                                           /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable TX FIFO Overflow Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_TXFIFO_OVRFLOW_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_TXFIFO_OVRFLOW_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable TX FIFO Overflow Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_RXFIFO_UNDERFLOW_Pos (27)                                           /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable RX FIFO Underflow Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_RXFIFO_UNDERFLOW_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_RXFIFO_UNDERFLOW_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable RX FIFO Underflow Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_RXFIFO_OVRFLOW_Pos (28)                                           /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable RX FIFO Overflow Interrupt to EC.\n Position */
#define SPI_SLAVE_SSPI_EC_INT_EN_RXFIFO_OVRFLOW_Msk (0x1U << SPI_SLAVE_SSPI_EC_INT_EN_RXFIFO_OVRFLOW_Pos)  /**< (SPI_SLAVE_SSPI_EC_INT_EN) Enable RX FIFO Overflow Interrupt to EC.\n Mask */
#define SPI_SLAVE_SSPI_EC_INT_EN_Msk          (0x1FFFEF7BUL)                                 /**< (SPI_SLAVE_SSPI_EC_INT_EN) Register Mask  */

/* -------- SPI_SLAVE_SSPI_MEM_CFG : (SPI_SLAVE Offset: 0x14) (R/W 32) SPI Slave Memory Configuration Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t BAR_EN0_SEL:1;             /**< bit:      0  Enables Region 0 operation.         0 = Disable Region 0.\n         1 = Enable Region 0.\n */
    uint32_t BAR_EN1_SEL:1;             /**< bit:      1  Enables Region 1 operation.         0 = Disable Region 1.\n         1 = Enable Region 1.\n */
    uint32_t :30;                       /**< bit:  2..31  Reserved                                      */
  };
  uint32_t w;
} __SPI_SLAVE_SSPI_MEM_CFG_bits_t;
#define SPI_SLAVE_SSPI_MEM_CFG_RESETVALUE   (0x00U)                                       /**<  (SPI_SLAVE_SSPI_MEM_CFG) SPI Slave Memory Configuration Register.\n  Reset Value */

#define SPI_SLAVE_SSPI_MEM_CFG_BAR_EN0_SEL_Pos (0)                                            /**< (SPI_SLAVE_SSPI_MEM_CFG) Enables Region 0 operation.         0 = Disable Region 0.\n         1 = Enable Region 0.\n Position */
#define SPI_SLAVE_SSPI_MEM_CFG_BAR_EN0_SEL_Msk (0x1U << SPI_SLAVE_SSPI_MEM_CFG_BAR_EN0_SEL_Pos)  /**< (SPI_SLAVE_SSPI_MEM_CFG) Enables Region 0 operation.         0 = Disable Region 0.\n         1 = Enable Region 0.\n Mask */
#define SPI_SLAVE_SSPI_MEM_CFG_BAR_EN1_SEL_Pos (1)                                            /**< (SPI_SLAVE_SSPI_MEM_CFG) Enables Region 1 operation.         0 = Disable Region 1.\n         1 = Enable Region 1.\n Position */
#define SPI_SLAVE_SSPI_MEM_CFG_BAR_EN1_SEL_Msk (0x1U << SPI_SLAVE_SSPI_MEM_CFG_BAR_EN1_SEL_Pos)  /**< (SPI_SLAVE_SSPI_MEM_CFG) Enables Region 1 operation.         0 = Disable Region 1.\n         1 = Enable Region 1.\n Mask */
#define SPI_SLAVE_SSPI_MEM_CFG_Msk            (0x00000003UL)                                 /**< (SPI_SLAVE_SSPI_MEM_CFG) Register Mask  */

/* -------- SPI_SLAVE_SSPI_MEM0_BADD : (SPI_SLAVE Offset: 0x18) (R/W 32) SPI Slave Memory Base Address0 Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t MEM_BAS_ADD0:32;           /**< bit:  0..31  Base Address for Region 0.\n                  */
  };
  uint32_t w;
} __SPI_SLAVE_SSPI_MEM0_BADD_bits_t;
#define SPI_SLAVE_SSPI_MEM0_BADD_RESETVALUE (0x00U)                                       /**<  (SPI_SLAVE_SSPI_MEM0_BADD) SPI Slave Memory Base Address0 Register.\n  Reset Value */

#define SPI_SLAVE_SSPI_MEM0_BADD_MEM_BAS_ADD0_Pos (0)                                            /**< (SPI_SLAVE_SSPI_MEM0_BADD) Base Address for Region 0.\n Position */
#define SPI_SLAVE_SSPI_MEM0_BADD_MEM_BAS_ADD0_Msk (0xFFFFFFFFU << SPI_SLAVE_SSPI_MEM0_BADD_MEM_BAS_ADD0_Pos)  /**< (SPI_SLAVE_SSPI_MEM0_BADD) Base Address for Region 0.\n Mask */
#define SPI_SLAVE_SSPI_MEM0_BADD_MEM_BAS_ADD0(value) (SPI_SLAVE_SSPI_MEM0_BADD_MEM_BAS_ADD0_Msk & ((value) << SPI_SLAVE_SSPI_MEM0_BADD_MEM_BAS_ADD0_Pos))
#define SPI_SLAVE_SSPI_MEM0_BADD_Msk          (0xFFFFFFFFUL)                                 /**< (SPI_SLAVE_SSPI_MEM0_BADD) Register Mask  */

/* -------- SPI_SLAVE_SSPI_MEM0_WR_LMT : (SPI_SLAVE Offset: 0x1c) (R/W 32) SPI Slave Memory Write LIMIT 0 Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t WR_LMT0:15;                /**< bit:  0..14  Write Limit for Region 0.\n                   */
    uint32_t :17;                       /**< bit: 15..31  Reserved                                      */
  };
  uint32_t w;
} __SPI_SLAVE_SSPI_MEM0_WR_LMT_bits_t;
#define SPI_SLAVE_SSPI_MEM0_WR_LMT_RESETVALUE (0x00U)                                       /**<  (SPI_SLAVE_SSPI_MEM0_WR_LMT) SPI Slave Memory Write LIMIT 0 Register.\n  Reset Value */

#define SPI_SLAVE_SSPI_MEM0_WR_LMT_WR_LMT0_Pos (0)                                            /**< (SPI_SLAVE_SSPI_MEM0_WR_LMT) Write Limit for Region 0.\n Position */
#define SPI_SLAVE_SSPI_MEM0_WR_LMT_WR_LMT0_Msk (0x7FFFU << SPI_SLAVE_SSPI_MEM0_WR_LMT_WR_LMT0_Pos)  /**< (SPI_SLAVE_SSPI_MEM0_WR_LMT) Write Limit for Region 0.\n Mask */
#define SPI_SLAVE_SSPI_MEM0_WR_LMT_WR_LMT0(value) (SPI_SLAVE_SSPI_MEM0_WR_LMT_WR_LMT0_Msk & ((value) << SPI_SLAVE_SSPI_MEM0_WR_LMT_WR_LMT0_Pos))
#define SPI_SLAVE_SSPI_MEM0_WR_LMT_Msk        (0x00007FFFUL)                                 /**< (SPI_SLAVE_SSPI_MEM0_WR_LMT) Register Mask  */

/* -------- SPI_SLAVE_SSPI_MEM0_RD_LMT : (SPI_SLAVE Offset: 0x20) (R/W 32) SPI Slave Memory Read LIMIT 0 Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t RD_LMT0:15;                /**< bit:  0..14  Read Limit for Region 0.\n                    */
    uint32_t :17;                       /**< bit: 15..31  Reserved                                      */
  };
  uint32_t w;
} __SPI_SLAVE_SSPI_MEM0_RD_LMT_bits_t;
#define SPI_SLAVE_SSPI_MEM0_RD_LMT_RESETVALUE (0x00U)                                       /**<  (SPI_SLAVE_SSPI_MEM0_RD_LMT) SPI Slave Memory Read LIMIT 0 Register.\n  Reset Value */

#define SPI_SLAVE_SSPI_MEM0_RD_LMT_RD_LMT0_Pos (0)                                            /**< (SPI_SLAVE_SSPI_MEM0_RD_LMT) Read Limit for Region 0.\n Position */
#define SPI_SLAVE_SSPI_MEM0_RD_LMT_RD_LMT0_Msk (0x7FFFU << SPI_SLAVE_SSPI_MEM0_RD_LMT_RD_LMT0_Pos)  /**< (SPI_SLAVE_SSPI_MEM0_RD_LMT) Read Limit for Region 0.\n Mask */
#define SPI_SLAVE_SSPI_MEM0_RD_LMT_RD_LMT0(value) (SPI_SLAVE_SSPI_MEM0_RD_LMT_RD_LMT0_Msk & ((value) << SPI_SLAVE_SSPI_MEM0_RD_LMT_RD_LMT0_Pos))
#define SPI_SLAVE_SSPI_MEM0_RD_LMT_Msk        (0x00007FFFUL)                                 /**< (SPI_SLAVE_SSPI_MEM0_RD_LMT) Register Mask  */

/* -------- SPI_SLAVE_SSPI_MEM1_BADD : (SPI_SLAVE Offset: 0x24) (R/W 32) SPI Slave Memory Base Address1 Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t MEM_BAS_ADD1:32;           /**< bit:  0..31  Base Address for Region 1.\n                  */
  };
  uint32_t w;
} __SPI_SLAVE_SSPI_MEM1_BADD_bits_t;
#define SPI_SLAVE_SSPI_MEM1_BADD_RESETVALUE (0x00U)                                       /**<  (SPI_SLAVE_SSPI_MEM1_BADD) SPI Slave Memory Base Address1 Register.\n  Reset Value */

#define SPI_SLAVE_SSPI_MEM1_BADD_MEM_BAS_ADD1_Pos (0)                                            /**< (SPI_SLAVE_SSPI_MEM1_BADD) Base Address for Region 1.\n Position */
#define SPI_SLAVE_SSPI_MEM1_BADD_MEM_BAS_ADD1_Msk (0xFFFFFFFFU << SPI_SLAVE_SSPI_MEM1_BADD_MEM_BAS_ADD1_Pos)  /**< (SPI_SLAVE_SSPI_MEM1_BADD) Base Address for Region 1.\n Mask */
#define SPI_SLAVE_SSPI_MEM1_BADD_MEM_BAS_ADD1(value) (SPI_SLAVE_SSPI_MEM1_BADD_MEM_BAS_ADD1_Msk & ((value) << SPI_SLAVE_SSPI_MEM1_BADD_MEM_BAS_ADD1_Pos))
#define SPI_SLAVE_SSPI_MEM1_BADD_Msk          (0xFFFFFFFFUL)                                 /**< (SPI_SLAVE_SSPI_MEM1_BADD) Register Mask  */

/* -------- SPI_SLAVE_SSPI_MEM1_WR_LMT : (SPI_SLAVE Offset: 0x28) (R/W 32) SPI Slave Memory Write LIMIT 1 Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t WR_LMT1:15;                /**< bit:  0..14  Write Limit for Region 1.\n                   */
    uint32_t :17;                       /**< bit: 15..31  Reserved                                      */
  };
  uint32_t w;
} __SPI_SLAVE_SSPI_MEM1_WR_LMT_bits_t;
#define SPI_SLAVE_SSPI_MEM1_WR_LMT_RESETVALUE (0x00U)                                       /**<  (SPI_SLAVE_SSPI_MEM1_WR_LMT) SPI Slave Memory Write LIMIT 1 Register.\n  Reset Value */

#define SPI_SLAVE_SSPI_MEM1_WR_LMT_WR_LMT1_Pos (0)                                            /**< (SPI_SLAVE_SSPI_MEM1_WR_LMT) Write Limit for Region 1.\n Position */
#define SPI_SLAVE_SSPI_MEM1_WR_LMT_WR_LMT1_Msk (0x7FFFU << SPI_SLAVE_SSPI_MEM1_WR_LMT_WR_LMT1_Pos)  /**< (SPI_SLAVE_SSPI_MEM1_WR_LMT) Write Limit for Region 1.\n Mask */
#define SPI_SLAVE_SSPI_MEM1_WR_LMT_WR_LMT1(value) (SPI_SLAVE_SSPI_MEM1_WR_LMT_WR_LMT1_Msk & ((value) << SPI_SLAVE_SSPI_MEM1_WR_LMT_WR_LMT1_Pos))
#define SPI_SLAVE_SSPI_MEM1_WR_LMT_Msk        (0x00007FFFUL)                                 /**< (SPI_SLAVE_SSPI_MEM1_WR_LMT) Register Mask  */

/* -------- SPI_SLAVE_SSPI_MEM1_RD_LMT : (SPI_SLAVE Offset: 0x2c) (R/W 32) SPI Slave Memory Read LIMIT 1 Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t RD_LMT1:15;                /**< bit:  0..14  Read Limit for Region 1.\n                    */
    uint32_t :17;                       /**< bit: 15..31  Reserved                                      */
  };
  uint32_t w;
} __SPI_SLAVE_SSPI_MEM1_RD_LMT_bits_t;
#define SPI_SLAVE_SSPI_MEM1_RD_LMT_RESETVALUE (0x00U)                                       /**<  (SPI_SLAVE_SSPI_MEM1_RD_LMT) SPI Slave Memory Read LIMIT 1 Register.\n  Reset Value */

#define SPI_SLAVE_SSPI_MEM1_RD_LMT_RD_LMT1_Pos (0)                                            /**< (SPI_SLAVE_SSPI_MEM1_RD_LMT) Read Limit for Region 1.\n Position */
#define SPI_SLAVE_SSPI_MEM1_RD_LMT_RD_LMT1_Msk (0x7FFFU << SPI_SLAVE_SSPI_MEM1_RD_LMT_RD_LMT1_Pos)  /**< (SPI_SLAVE_SSPI_MEM1_RD_LMT) Read Limit for Region 1.\n Mask */
#define SPI_SLAVE_SSPI_MEM1_RD_LMT_RD_LMT1(value) (SPI_SLAVE_SSPI_MEM1_RD_LMT_RD_LMT1_Msk & ((value) << SPI_SLAVE_SSPI_MEM1_RD_LMT_RD_LMT1_Pos))
#define SPI_SLAVE_SSPI_MEM1_RD_LMT_Msk        (0x00007FFFUL)                                 /**< (SPI_SLAVE_SSPI_MEM1_RD_LMT) Register Mask  */

/* -------- SPI_SLAVE_SSPI_RXFIFO_BAR : (SPI_SLAVE Offset: 0x30) (R/ 32) SPI Slave RX FIFO Host Bar Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t RXFIFO_BAR:16;             /**< bit:  0..15  RX FIFO Host Bar Register.\n                  */
    uint32_t :16;                       /**< bit: 16..31  Reserved                                      */
  };
  uint32_t w;
} __SPI_SLAVE_SSPI_RXFIFO_BAR_bits_t;
#define SPI_SLAVE_SSPI_RXFIFO_BAR_RESETVALUE (0x00U)                                       /**<  (SPI_SLAVE_SSPI_RXFIFO_BAR) SPI Slave RX FIFO Host Bar Register.\n  Reset Value */

#define SPI_SLAVE_SSPI_RXFIFO_BAR_RXFIFO_BAR_Pos (0)                                            /**< (SPI_SLAVE_SSPI_RXFIFO_BAR) RX FIFO Host Bar Register.\n Position */
#define SPI_SLAVE_SSPI_RXFIFO_BAR_RXFIFO_BAR_Msk (0xFFFFU << SPI_SLAVE_SSPI_RXFIFO_BAR_RXFIFO_BAR_Pos)  /**< (SPI_SLAVE_SSPI_RXFIFO_BAR) RX FIFO Host Bar Register.\n Mask */
#define SPI_SLAVE_SSPI_RXFIFO_BAR_RXFIFO_BAR(value) (SPI_SLAVE_SSPI_RXFIFO_BAR_RXFIFO_BAR_Msk & ((value) << SPI_SLAVE_SSPI_RXFIFO_BAR_RXFIFO_BAR_Pos))
#define SPI_SLAVE_SSPI_RXFIFO_BAR_Msk         (0x0000FFFFUL)                                 /**< (SPI_SLAVE_SSPI_RXFIFO_BAR) Register Mask  */

/* -------- SPI_SLAVE_SSPI_RXFIFO_CNT : (SPI_SLAVE Offset: 0x34) (R/ 32) SPI Slave RX FIFO Byte Counter Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t RXFIFO_BCNT:15;            /**< bit:  0..14  RX FIFO Byte Count Register.\n                */
    uint32_t :17;                       /**< bit: 15..31  Reserved                                      */
  };
  uint32_t w;
} __SPI_SLAVE_SSPI_RXFIFO_CNT_bits_t;
#define SPI_SLAVE_SSPI_RXFIFO_CNT_RESETVALUE (0x00U)                                       /**<  (SPI_SLAVE_SSPI_RXFIFO_CNT) SPI Slave RX FIFO Byte Counter Register.\n  Reset Value */

#define SPI_SLAVE_SSPI_RXFIFO_CNT_RXFIFO_BCNT_Pos (0)                                            /**< (SPI_SLAVE_SSPI_RXFIFO_CNT) RX FIFO Byte Count Register.\n Position */
#define SPI_SLAVE_SSPI_RXFIFO_CNT_RXFIFO_BCNT_Msk (0x7FFFU << SPI_SLAVE_SSPI_RXFIFO_CNT_RXFIFO_BCNT_Pos)  /**< (SPI_SLAVE_SSPI_RXFIFO_CNT) RX FIFO Byte Count Register.\n Mask */
#define SPI_SLAVE_SSPI_RXFIFO_CNT_RXFIFO_BCNT(value) (SPI_SLAVE_SSPI_RXFIFO_CNT_RXFIFO_BCNT_Msk & ((value) << SPI_SLAVE_SSPI_RXFIFO_CNT_RXFIFO_BCNT_Pos))
#define SPI_SLAVE_SSPI_RXFIFO_CNT_Msk         (0x00007FFFUL)                                 /**< (SPI_SLAVE_SSPI_RXFIFO_CNT) Register Mask  */

/* -------- SPI_SLAVE_SSPI_TXFIFO_BAR : (SPI_SLAVE Offset: 0x38) (R/ 32) SPI Slave TX FIFO Host Bar Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t TXFIFO_BAR:16;             /**< bit:  0..15  TX FIFO Host Bar Register.\n                  */
    uint32_t :16;                       /**< bit: 16..31  Reserved                                      */
  };
  uint32_t w;
} __SPI_SLAVE_SSPI_TXFIFO_BAR_bits_t;
#define SPI_SLAVE_SSPI_TXFIFO_BAR_RESETVALUE (0x00U)                                       /**<  (SPI_SLAVE_SSPI_TXFIFO_BAR) SPI Slave TX FIFO Host Bar Register.\n  Reset Value */

#define SPI_SLAVE_SSPI_TXFIFO_BAR_TXFIFO_BAR_Pos (0)                                            /**< (SPI_SLAVE_SSPI_TXFIFO_BAR) TX FIFO Host Bar Register.\n Position */
#define SPI_SLAVE_SSPI_TXFIFO_BAR_TXFIFO_BAR_Msk (0xFFFFU << SPI_SLAVE_SSPI_TXFIFO_BAR_TXFIFO_BAR_Pos)  /**< (SPI_SLAVE_SSPI_TXFIFO_BAR) TX FIFO Host Bar Register.\n Mask */
#define SPI_SLAVE_SSPI_TXFIFO_BAR_TXFIFO_BAR(value) (SPI_SLAVE_SSPI_TXFIFO_BAR_TXFIFO_BAR_Msk & ((value) << SPI_SLAVE_SSPI_TXFIFO_BAR_TXFIFO_BAR_Pos))
#define SPI_SLAVE_SSPI_TXFIFO_BAR_Msk         (0x0000FFFFUL)                                 /**< (SPI_SLAVE_SSPI_TXFIFO_BAR) Register Mask  */

/* -------- SPI_SLAVE_SSPI_TXFIFO_CNT : (SPI_SLAVE Offset: 0x3c) (R/ 32) SPI Slave TX FIFO Byte Counter Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t TXFIFO_BCNT:15;            /**< bit:  0..14  TX FIFO Byte Count Register.\n                */
    uint32_t :17;                       /**< bit: 15..31  Reserved                                      */
  };
  uint32_t w;
} __SPI_SLAVE_SSPI_TXFIFO_CNT_bits_t;
#define SPI_SLAVE_SSPI_TXFIFO_CNT_RESETVALUE (0x00U)                                       /**<  (SPI_SLAVE_SSPI_TXFIFO_CNT) SPI Slave TX FIFO Byte Counter Register.\n  Reset Value */

#define SPI_SLAVE_SSPI_TXFIFO_CNT_TXFIFO_BCNT_Pos (0)                                            /**< (SPI_SLAVE_SSPI_TXFIFO_CNT) TX FIFO Byte Count Register.\n Position */
#define SPI_SLAVE_SSPI_TXFIFO_CNT_TXFIFO_BCNT_Msk (0x7FFFU << SPI_SLAVE_SSPI_TXFIFO_CNT_TXFIFO_BCNT_Pos)  /**< (SPI_SLAVE_SSPI_TXFIFO_CNT) TX FIFO Byte Count Register.\n Mask */
#define SPI_SLAVE_SSPI_TXFIFO_CNT_TXFIFO_BCNT(value) (SPI_SLAVE_SSPI_TXFIFO_CNT_TXFIFO_BCNT_Msk & ((value) << SPI_SLAVE_SSPI_TXFIFO_CNT_TXFIFO_BCNT_Pos))
#define SPI_SLAVE_SSPI_TXFIFO_CNT_Msk         (0x00007FFFUL)                                 /**< (SPI_SLAVE_SSPI_TXFIFO_CNT) Register Mask  */

/* -------- SPI_SLAVE_SSPI_SYS_CNFG : (SPI_SLAVE Offset: 0x40) (R/W 32) SPI Slave System Configuration Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t SOFT_RST:1;                /**< bit:      0  Soft reset for entire SPI Slave Block. This bit is self clearing.\n */
    uint32_t LOCK_QUAD_SNGL_WRMOD:1;    /**< bit:      1  Lock Quad / Single Write Mode bit, write access from SPI Master.\n */
    uint32_t LOCK_TAR_TIME:1;           /**< bit:      2  Lock Tar Time bit, write access from SPI Master.\n */
    uint32_t LOCK_WAIT_CYCL:1;          /**< bit:      3  Lock Wait Cycle bits, write access from SPI Master.\n */
    uint32_t LOCK_MEM_CFG:1;            /**< bit:      4  Lock Memory Configuration register, write access from SPI Master.\n */
    uint32_t LOCK_SPIINT_EN:1;          /**< bit:      5  Lock SPI Interrupt Enable register, write access from SPI Master.\n */
    uint32_t LOCK_MEM_BAR0:1;           /**< bit:      6  Lock Memory Bar 0 register, write access from SPI Master.\n */
    uint32_t LOCK_MEM_BAR1:1;           /**< bit:      7  Lock Memory Bar 1 register, write access from SPI Master.\n */
    uint32_t :2;                        /**< bit:   8..9  Reserved                                      */
    uint32_t LOCK_TEST_MODE:1;          /**< bit:     10  Lock TEST Mode register, write access from SPI Master.\n */
    uint32_t :5;                        /**< bit: 11..15  Reserved                                      */
    uint32_t SPI_SLAVE_EN:1;            /**< bit:     16  Enable / Disable SPI Slave Block.\n         0 = Disable SPI Slave module.\n         1 = Enable SPI Slave module.\n */
    uint32_t MASK_EC_REG:1;             /**< bit:     17  Mask EC register 'fld_mask_ec_register' from SPI Master. All the register are         neither readable now writable from SPI Master.\n */
    uint32_t SIMPLE_EN:1;               /**< bit:     18  Enable SPI Slave Simple Mode operation.\n     */
    uint32_t EC_DATA_AVAIL:1;           /**< bit:     19  Notification to TX FIFO Engine that data is available for AHB Transfer. This register         but is cleared by Hardware at the end of the transaction, with SPI_CS_N de-assertion.         (R/WC).\n */
    uint32_t :12;                       /**< bit: 20..31  Reserved                                      */
  };
  struct
  {
    uint32_t :6;                        /**< bit:   0..5  Reserved                                      */
    uint32_t LOCK_MEM_BAR:2;            /**< bit:   6..7  Lock Memory Bar x register, write access from SPI Master.\n */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __SPI_SLAVE_SSPI_SYS_CNFG_bits_t;
#define SPI_SLAVE_SSPI_SYS_CNFG_RESETVALUE  (0x4C0U)                                      /**<  (SPI_SLAVE_SSPI_SYS_CNFG) SPI Slave System Configuration Register.\n  Reset Value */

#define SPI_SLAVE_SSPI_SYS_CNFG_SOFT_RST_Pos  (0)                                            /**< (SPI_SLAVE_SSPI_SYS_CNFG) Soft reset for entire SPI Slave Block. This bit is self clearing.\n Position */
#define SPI_SLAVE_SSPI_SYS_CNFG_SOFT_RST_Msk  (0x1U << SPI_SLAVE_SSPI_SYS_CNFG_SOFT_RST_Pos)  /**< (SPI_SLAVE_SSPI_SYS_CNFG) Soft reset for entire SPI Slave Block. This bit is self clearing.\n Mask */
#define SPI_SLAVE_SSPI_SYS_CNFG_LOCK_QUAD_SNGL_WRMOD_Pos (1)                                            /**< (SPI_SLAVE_SSPI_SYS_CNFG) Lock Quad / Single Write Mode bit, write access from SPI Master.\n Position */
#define SPI_SLAVE_SSPI_SYS_CNFG_LOCK_QUAD_SNGL_WRMOD_Msk (0x1U << SPI_SLAVE_SSPI_SYS_CNFG_LOCK_QUAD_SNGL_WRMOD_Pos)  /**< (SPI_SLAVE_SSPI_SYS_CNFG) Lock Quad / Single Write Mode bit, write access from SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_SYS_CNFG_LOCK_TAR_TIME_Pos (2)                                            /**< (SPI_SLAVE_SSPI_SYS_CNFG) Lock Tar Time bit, write access from SPI Master.\n Position */
#define SPI_SLAVE_SSPI_SYS_CNFG_LOCK_TAR_TIME_Msk (0x1U << SPI_SLAVE_SSPI_SYS_CNFG_LOCK_TAR_TIME_Pos)  /**< (SPI_SLAVE_SSPI_SYS_CNFG) Lock Tar Time bit, write access from SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_SYS_CNFG_LOCK_WAIT_CYCL_Pos (3)                                            /**< (SPI_SLAVE_SSPI_SYS_CNFG) Lock Wait Cycle bits, write access from SPI Master.\n Position */
#define SPI_SLAVE_SSPI_SYS_CNFG_LOCK_WAIT_CYCL_Msk (0x1U << SPI_SLAVE_SSPI_SYS_CNFG_LOCK_WAIT_CYCL_Pos)  /**< (SPI_SLAVE_SSPI_SYS_CNFG) Lock Wait Cycle bits, write access from SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_SYS_CNFG_LOCK_MEM_CFG_Pos (4)                                            /**< (SPI_SLAVE_SSPI_SYS_CNFG) Lock Memory Configuration register, write access from SPI Master.\n Position */
#define SPI_SLAVE_SSPI_SYS_CNFG_LOCK_MEM_CFG_Msk (0x1U << SPI_SLAVE_SSPI_SYS_CNFG_LOCK_MEM_CFG_Pos)  /**< (SPI_SLAVE_SSPI_SYS_CNFG) Lock Memory Configuration register, write access from SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_SYS_CNFG_LOCK_SPIINT_EN_Pos (5)                                            /**< (SPI_SLAVE_SSPI_SYS_CNFG) Lock SPI Interrupt Enable register, write access from SPI Master.\n Position */
#define SPI_SLAVE_SSPI_SYS_CNFG_LOCK_SPIINT_EN_Msk (0x1U << SPI_SLAVE_SSPI_SYS_CNFG_LOCK_SPIINT_EN_Pos)  /**< (SPI_SLAVE_SSPI_SYS_CNFG) Lock SPI Interrupt Enable register, write access from SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_SYS_CNFG_LOCK_MEM_BAR0_Pos (6)                                            /**< (SPI_SLAVE_SSPI_SYS_CNFG) Lock Memory Bar 0 register, write access from SPI Master.\n Position */
#define SPI_SLAVE_SSPI_SYS_CNFG_LOCK_MEM_BAR0_Msk (0x1U << SPI_SLAVE_SSPI_SYS_CNFG_LOCK_MEM_BAR0_Pos)  /**< (SPI_SLAVE_SSPI_SYS_CNFG) Lock Memory Bar 0 register, write access from SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_SYS_CNFG_LOCK_MEM_BAR1_Pos (7)                                            /**< (SPI_SLAVE_SSPI_SYS_CNFG) Lock Memory Bar 1 register, write access from SPI Master.\n Position */
#define SPI_SLAVE_SSPI_SYS_CNFG_LOCK_MEM_BAR1_Msk (0x1U << SPI_SLAVE_SSPI_SYS_CNFG_LOCK_MEM_BAR1_Pos)  /**< (SPI_SLAVE_SSPI_SYS_CNFG) Lock Memory Bar 1 register, write access from SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_SYS_CNFG_LOCK_TEST_MODE_Pos (10)                                           /**< (SPI_SLAVE_SSPI_SYS_CNFG) Lock TEST Mode register, write access from SPI Master.\n Position */
#define SPI_SLAVE_SSPI_SYS_CNFG_LOCK_TEST_MODE_Msk (0x1U << SPI_SLAVE_SSPI_SYS_CNFG_LOCK_TEST_MODE_Pos)  /**< (SPI_SLAVE_SSPI_SYS_CNFG) Lock TEST Mode register, write access from SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_SYS_CNFG_SPI_SLAVE_EN_Pos (16)                                           /**< (SPI_SLAVE_SSPI_SYS_CNFG) Enable / Disable SPI Slave Block.\n         0 = Disable SPI Slave module.\n         1 = Enable SPI Slave module.\n Position */
#define SPI_SLAVE_SSPI_SYS_CNFG_SPI_SLAVE_EN_Msk (0x1U << SPI_SLAVE_SSPI_SYS_CNFG_SPI_SLAVE_EN_Pos)  /**< (SPI_SLAVE_SSPI_SYS_CNFG) Enable / Disable SPI Slave Block.\n         0 = Disable SPI Slave module.\n         1 = Enable SPI Slave module.\n Mask */
#define SPI_SLAVE_SSPI_SYS_CNFG_MASK_EC_REG_Pos (17)                                           /**< (SPI_SLAVE_SSPI_SYS_CNFG) Mask EC register 'fld_mask_ec_register' from SPI Master. All the register are         neither readable now writable from SPI Master.\n Position */
#define SPI_SLAVE_SSPI_SYS_CNFG_MASK_EC_REG_Msk (0x1U << SPI_SLAVE_SSPI_SYS_CNFG_MASK_EC_REG_Pos)  /**< (SPI_SLAVE_SSPI_SYS_CNFG) Mask EC register 'fld_mask_ec_register' from SPI Master. All the register are         neither readable now writable from SPI Master.\n Mask */
#define SPI_SLAVE_SSPI_SYS_CNFG_SIMPLE_EN_Pos (18)                                           /**< (SPI_SLAVE_SSPI_SYS_CNFG) Enable SPI Slave Simple Mode operation.\n Position */
#define SPI_SLAVE_SSPI_SYS_CNFG_SIMPLE_EN_Msk (0x1U << SPI_SLAVE_SSPI_SYS_CNFG_SIMPLE_EN_Pos)  /**< (SPI_SLAVE_SSPI_SYS_CNFG) Enable SPI Slave Simple Mode operation.\n Mask */
#define SPI_SLAVE_SSPI_SYS_CNFG_EC_DATA_AVAIL_Pos (19)                                           /**< (SPI_SLAVE_SSPI_SYS_CNFG) Notification to TX FIFO Engine that data is available for AHB Transfer. This register         but is cleared by Hardware at the end of the transaction, with SPI_CS_N de-assertion.         (R/WC).\n Position */
#define SPI_SLAVE_SSPI_SYS_CNFG_EC_DATA_AVAIL_Msk (0x1U << SPI_SLAVE_SSPI_SYS_CNFG_EC_DATA_AVAIL_Pos)  /**< (SPI_SLAVE_SSPI_SYS_CNFG) Notification to TX FIFO Engine that data is available for AHB Transfer. This register         but is cleared by Hardware at the end of the transaction, with SPI_CS_N de-assertion.         (R/WC).\n Mask */
#define SPI_SLAVE_SSPI_SYS_CNFG_Msk           (0x000F04FFUL)                                 /**< (SPI_SLAVE_SSPI_SYS_CNFG) Register Mask  */
#define SPI_SLAVE_SSPI_SYS_CNFG_LOCK_MEM_BAR_Pos (6)                                            /**< (SPI_SLAVE_SSPI_SYS_CNFG Position) Lock Memory Bar x register, write access from SPI Master.\n */
#define SPI_SLAVE_SSPI_SYS_CNFG_LOCK_MEM_BAR_Msk (0x3U << SPI_SLAVE_SSPI_SYS_CNFG_LOCK_MEM_BAR_Pos)  /**< (SPI_SLAVE_SSPI_SYS_CNFG Mask) LOCK_MEM_BAR */
#define SPI_SLAVE_SSPI_SYS_CNFG_LOCK_MEM_BAR(value) (SPI_SLAVE_SSPI_SYS_CNFG_LOCK_MEM_BAR_Msk & ((value) << SPI_SLAVE_SSPI_SYS_CNFG_LOCK_MEM_BAR_Pos))

/* -------- SPI_SLAVE_SSPI_MAST2EC_MLX : (SPI_SLAVE Offset: 0x44) (R/W 32) SPI Slave Master to EC Mailbox Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t MAST2EC_MLX:32;            /**< bit:  0..31  Write only register for the Host. When data is written to this register the IBF Flag         is set. EC can read the data and writes of 0xFFFF will clear this register. Any form of         read will clear the flag for this register.\n */
  };
  uint32_t w;
} __SPI_SLAVE_SSPI_MAST2EC_MLX_bits_t;
#define SPI_SLAVE_SSPI_MAST2EC_MLX_RESETVALUE (0x00U)                                       /**<  (SPI_SLAVE_SSPI_MAST2EC_MLX) SPI Slave Master to EC Mailbox Register.\n  Reset Value */

#define SPI_SLAVE_SSPI_MAST2EC_MLX_MAST2EC_MLX_Pos (0)                                            /**< (SPI_SLAVE_SSPI_MAST2EC_MLX) Write only register for the Host. When data is written to this register the IBF Flag         is set. EC can read the data and writes of 0xFFFF will clear this register. Any form of         read will clear the flag for this register.\n Position */
#define SPI_SLAVE_SSPI_MAST2EC_MLX_MAST2EC_MLX_Msk (0xFFFFFFFFU << SPI_SLAVE_SSPI_MAST2EC_MLX_MAST2EC_MLX_Pos)  /**< (SPI_SLAVE_SSPI_MAST2EC_MLX) Write only register for the Host. When data is written to this register the IBF Flag         is set. EC can read the data and writes of 0xFFFF will clear this register. Any form of         read will clear the flag for this register.\n Mask */
#define SPI_SLAVE_SSPI_MAST2EC_MLX_MAST2EC_MLX(value) (SPI_SLAVE_SSPI_MAST2EC_MLX_MAST2EC_MLX_Msk & ((value) << SPI_SLAVE_SSPI_MAST2EC_MLX_MAST2EC_MLX_Pos))
#define SPI_SLAVE_SSPI_MAST2EC_MLX_Msk        (0xFFFFFFFFUL)                                 /**< (SPI_SLAVE_SSPI_MAST2EC_MLX) Register Mask  */

/* -------- SPI_SLAVE_SSPI_EC2MAST_MLX : (SPI_SLAVE Offset: 0x48) (R/W 32) SPI Slave Master to EC Mailbox Register.\n -------- */

typedef union
{
  struct
  {
    uint32_t EC2MAST_MLX:32;            /**< bit:  0..31  Read only register for the Host. When data is written to this register the OBF Flag         is set. Host can read the data and writes of 0xFFFF_FFFF will clear this register, also         clearing the flag. Any form of read will clear the flag for this register\n */
  };
  uint32_t w;
} __SPI_SLAVE_SSPI_EC2MAST_MLX_bits_t;
#define SPI_SLAVE_SSPI_EC2MAST_MLX_RESETVALUE (0x00U)                                       /**<  (SPI_SLAVE_SSPI_EC2MAST_MLX) SPI Slave Master to EC Mailbox Register.\n  Reset Value */

#define SPI_SLAVE_SSPI_EC2MAST_MLX_EC2MAST_MLX_Pos (0)                                            /**< (SPI_SLAVE_SSPI_EC2MAST_MLX) Read only register for the Host. When data is written to this register the OBF Flag         is set. Host can read the data and writes of 0xFFFF_FFFF will clear this register, also         clearing the flag. Any form of read will clear the flag for this register\n Position */
#define SPI_SLAVE_SSPI_EC2MAST_MLX_EC2MAST_MLX_Msk (0xFFFFFFFFU << SPI_SLAVE_SSPI_EC2MAST_MLX_EC2MAST_MLX_Pos)  /**< (SPI_SLAVE_SSPI_EC2MAST_MLX) Read only register for the Host. When data is written to this register the OBF Flag         is set. Host can read the data and writes of 0xFFFF_FFFF will clear this register, also         clearing the flag. Any form of read will clear the flag for this register\n Mask */
#define SPI_SLAVE_SSPI_EC2MAST_MLX_EC2MAST_MLX(value) (SPI_SLAVE_SSPI_EC2MAST_MLX_EC2MAST_MLX_Msk & ((value) << SPI_SLAVE_SSPI_EC2MAST_MLX_EC2MAST_MLX_Pos))
#define SPI_SLAVE_SSPI_EC2MAST_MLX_Msk        (0xFFFFFFFFUL)                                 /**< (SPI_SLAVE_SSPI_EC2MAST_MLX) Register Mask  */

/** \brief SPI_SLAVE register offsets definitions */
#define SPI_SLAVE_SSPI_CMM_CNFG_OFFSET (0x00)         /**< (SPI_SLAVE_SSPI_CMM_CNFG) SPI Slave Communication Configuration Register.\n Offset */
#define SPI_SLAVE_SSPI_STATUS_OFFSET (0x04)         /**< (SPI_SLAVE_SSPI_STATUS) SPI Slave Status Register.\n Offset */
#define SPI_SLAVE_SSPI_EC_STATUS_OFFSET (0x08)         /**< (SPI_SLAVE_SSPI_EC_STATUS) SPI Slave EC Status Register.\n Offset */
#define SPI_SLAVE_SSPI_INT_EN_OFFSET (0x0C)         /**< (SPI_SLAVE_SSPI_INT_EN) SPI Slave Interrupt Enable Register.\n Offset */
#define SPI_SLAVE_SSPI_EC_INT_EN_OFFSET (0x10)         /**< (SPI_SLAVE_SSPI_EC_INT_EN) SPI Slave EC Interrupt Enable Register.\n Offset */
#define SPI_SLAVE_SSPI_MEM_CFG_OFFSET (0x14)         /**< (SPI_SLAVE_SSPI_MEM_CFG) SPI Slave Memory Configuration Register.\n Offset */
#define SPI_SLAVE_SSPI_MEM0_BADD_OFFSET (0x18)         /**< (SPI_SLAVE_SSPI_MEM0_BADD) SPI Slave Memory Base Address0 Register.\n Offset */
#define SPI_SLAVE_SSPI_MEM0_WR_LMT_OFFSET (0x1C)         /**< (SPI_SLAVE_SSPI_MEM0_WR_LMT) SPI Slave Memory Write LIMIT 0 Register.\n Offset */
#define SPI_SLAVE_SSPI_MEM0_RD_LMT_OFFSET (0x20)         /**< (SPI_SLAVE_SSPI_MEM0_RD_LMT) SPI Slave Memory Read LIMIT 0 Register.\n Offset */
#define SPI_SLAVE_SSPI_MEM1_BADD_OFFSET (0x24)         /**< (SPI_SLAVE_SSPI_MEM1_BADD) SPI Slave Memory Base Address1 Register.\n Offset */
#define SPI_SLAVE_SSPI_MEM1_WR_LMT_OFFSET (0x28)         /**< (SPI_SLAVE_SSPI_MEM1_WR_LMT) SPI Slave Memory Write LIMIT 1 Register.\n Offset */
#define SPI_SLAVE_SSPI_MEM1_RD_LMT_OFFSET (0x2C)         /**< (SPI_SLAVE_SSPI_MEM1_RD_LMT) SPI Slave Memory Read LIMIT 1 Register.\n Offset */
#define SPI_SLAVE_SSPI_RXFIFO_BAR_OFFSET (0x30)         /**< (SPI_SLAVE_SSPI_RXFIFO_BAR) SPI Slave RX FIFO Host Bar Register.\n Offset */
#define SPI_SLAVE_SSPI_RXFIFO_CNT_OFFSET (0x34)         /**< (SPI_SLAVE_SSPI_RXFIFO_CNT) SPI Slave RX FIFO Byte Counter Register.\n Offset */
#define SPI_SLAVE_SSPI_TXFIFO_BAR_OFFSET (0x38)         /**< (SPI_SLAVE_SSPI_TXFIFO_BAR) SPI Slave TX FIFO Host Bar Register.\n Offset */
#define SPI_SLAVE_SSPI_TXFIFO_CNT_OFFSET (0x3C)         /**< (SPI_SLAVE_SSPI_TXFIFO_CNT) SPI Slave TX FIFO Byte Counter Register.\n Offset */
#define SPI_SLAVE_SSPI_SYS_CNFG_OFFSET (0x40)         /**< (SPI_SLAVE_SSPI_SYS_CNFG) SPI Slave System Configuration Register.\n Offset */
#define SPI_SLAVE_SSPI_MAST2EC_MLX_OFFSET (0x44)         /**< (SPI_SLAVE_SSPI_MAST2EC_MLX) SPI Slave Master to EC Mailbox Register.\n Offset */
#define SPI_SLAVE_SSPI_EC2MAST_MLX_OFFSET (0x48)         /**< (SPI_SLAVE_SSPI_EC2MAST_MLX) SPI Slave Master to EC Mailbox Register.\n Offset */

/** \brief SPI_SLAVE register API structure */
typedef struct
{  /* SPI Slave Register. */
  __IO  __SPI_SLAVE_SSPI_CMM_CNFG_bits_t SSPI_CMM_CNFG; /**< Offset: 0x00 (R/W  32) SPI Slave Communication Configuration Register.\n */
  __IO  __SPI_SLAVE_SSPI_STATUS_bits_t SSPI_STATUS;   /**< Offset: 0x04 (R/W  32) SPI Slave Status Register.\n */
  __IO  __SPI_SLAVE_SSPI_EC_STATUS_bits_t SSPI_EC_STATUS; /**< Offset: 0x08 (R/W  32) SPI Slave EC Status Register.\n */
  __IO  __SPI_SLAVE_SSPI_INT_EN_bits_t SSPI_INT_EN;   /**< Offset: 0x0C (R/W  32) SPI Slave Interrupt Enable Register.\n */
  __IO  __SPI_SLAVE_SSPI_EC_INT_EN_bits_t SSPI_EC_INT_EN; /**< Offset: 0x10 (R/W  32) SPI Slave EC Interrupt Enable Register.\n */
  __IO  __SPI_SLAVE_SSPI_MEM_CFG_bits_t SSPI_MEM_CFG;  /**< Offset: 0x14 (R/W  32) SPI Slave Memory Configuration Register.\n */
  __IO  __SPI_SLAVE_SSPI_MEM0_BADD_bits_t SSPI_MEM0_BADD; /**< Offset: 0x18 (R/W  32) SPI Slave Memory Base Address0 Register.\n */
  __IO  __SPI_SLAVE_SSPI_MEM0_WR_LMT_bits_t SSPI_MEM0_WR_LMT; /**< Offset: 0x1C (R/W  32) SPI Slave Memory Write LIMIT 0 Register.\n */
  __IO  __SPI_SLAVE_SSPI_MEM0_RD_LMT_bits_t SSPI_MEM0_RD_LMT; /**< Offset: 0x20 (R/W  32) SPI Slave Memory Read LIMIT 0 Register.\n */
  __IO  __SPI_SLAVE_SSPI_MEM1_BADD_bits_t SSPI_MEM1_BADD; /**< Offset: 0x24 (R/W  32) SPI Slave Memory Base Address1 Register.\n */
  __IO  __SPI_SLAVE_SSPI_MEM1_WR_LMT_bits_t SSPI_MEM1_WR_LMT; /**< Offset: 0x28 (R/W  32) SPI Slave Memory Write LIMIT 1 Register.\n */
  __IO  __SPI_SLAVE_SSPI_MEM1_RD_LMT_bits_t SSPI_MEM1_RD_LMT; /**< Offset: 0x2C (R/W  32) SPI Slave Memory Read LIMIT 1 Register.\n */
  __I   __SPI_SLAVE_SSPI_RXFIFO_BAR_bits_t SSPI_RXFIFO_BAR; /**< Offset: 0x30 (R/   32) SPI Slave RX FIFO Host Bar Register.\n */
  __I   __SPI_SLAVE_SSPI_RXFIFO_CNT_bits_t SSPI_RXFIFO_CNT; /**< Offset: 0x34 (R/   32) SPI Slave RX FIFO Byte Counter Register.\n */
  __I   __SPI_SLAVE_SSPI_TXFIFO_BAR_bits_t SSPI_TXFIFO_BAR; /**< Offset: 0x38 (R/   32) SPI Slave TX FIFO Host Bar Register.\n */
  __I   __SPI_SLAVE_SSPI_TXFIFO_CNT_bits_t SSPI_TXFIFO_CNT; /**< Offset: 0x3C (R/   32) SPI Slave TX FIFO Byte Counter Register.\n */
  __IO  __SPI_SLAVE_SSPI_SYS_CNFG_bits_t SSPI_SYS_CNFG; /**< Offset: 0x40 (R/W  32) SPI Slave System Configuration Register.\n */
  __IO  __SPI_SLAVE_SSPI_MAST2EC_MLX_bits_t SSPI_MAST2EC_MLX; /**< Offset: 0x44 (R/W  32) SPI Slave Master to EC Mailbox Register.\n */
  __IO  __SPI_SLAVE_SSPI_EC2MAST_MLX_bits_t SSPI_EC2MAST_MLX; /**< Offset: 0x48 (R/W  32) SPI Slave Master to EC Mailbox Register.\n */
} spislave_registers_t;
/** @}  end of SPI Slave Register. */

#endif /* _PIC32CX_0525SG12_SPI_SLAVE_COMPONENT_H_ */
