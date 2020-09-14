/**
 * \brief Component description for PIC32CX/0525SG12 HDMI_CEC
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
#ifndef _PIC32CX_0525SG12_HDMI_CEC_COMPONENT_H_
#define _PIC32CX_0525SG12_HDMI_CEC_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_HDMI_CEC The HDMI Consumer Electronics Control (CEC) Interface that provides high-level control functions between all of the        various audiovisual products in a users environment.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR HDMI_CEC */
/* ========================================================================== */

/* -------- HDMI_CEC_HDMICEC_CTRL : (HDMI_CEC Offset: 0x00) (R/W 8) HDMI CEC Control Register.     Only bits [3:0] are used. Bits [31:4] are Reserved. -------- */

typedef union
{
  struct
  {
    uint8_t  ACTIVATE:1;                /**< bit:      0  Enable the blocks operation. (R/W)\n                1=The block is enabled for normal operation.\n                0=The block is disabled and placed in its lowest power state. */
    uint8_t  RESET:1;                   /**< bit:      1  Soft reset the entire module. This bit is self-clearing. */
    uint8_t  FLTEN:1;                   /**< bit:      2  1=Filtering on the CEC bus is enabled.\n       0=Filtering is disabled */
    uint8_t  SFT5:1;                    /**< bit:      3  When this bit is written to '1', the Signal Free Time (SFT) is changed                    to '5' once only.\n This bit is cleared and normal SFT behavior resumes when the Bus                    Idle condition is asserted. */
    uint8_t  :4;                        /**< bit:   4..7  Reserved                                      */
  };
  uint8_t  w;
} __HDMI_CEC_HDMICEC_CTRL_bits_t;
#define HDMI_CEC_HDMICEC_CTRL_RESETVALUE    (0x00U)                                       /**<  (HDMI_CEC_HDMICEC_CTRL) HDMI CEC Control Register.     Only bits [3:0] are used. Bits [31:4] are Reserved.  Reset Value */

#define HDMI_CEC_HDMICEC_CTRL_ACTIVATE_Pos    (0)                                            /**< (HDMI_CEC_HDMICEC_CTRL) Enable the blocks operation. (R/W)\n                1=The block is enabled for normal operation.\n                0=The block is disabled and placed in its lowest power state. Position */
#define HDMI_CEC_HDMICEC_CTRL_ACTIVATE_Msk    (0x1U << HDMI_CEC_HDMICEC_CTRL_ACTIVATE_Pos)   /**< (HDMI_CEC_HDMICEC_CTRL) Enable the blocks operation. (R/W)\n                1=The block is enabled for normal operation.\n                0=The block is disabled and placed in its lowest power state. Mask */
#define HDMI_CEC_HDMICEC_CTRL_RESET_Pos       (1)                                            /**< (HDMI_CEC_HDMICEC_CTRL) Soft reset the entire module. This bit is self-clearing. Position */
#define HDMI_CEC_HDMICEC_CTRL_RESET_Msk       (0x1U << HDMI_CEC_HDMICEC_CTRL_RESET_Pos)      /**< (HDMI_CEC_HDMICEC_CTRL) Soft reset the entire module. This bit is self-clearing. Mask */
#define HDMI_CEC_HDMICEC_CTRL_FLTEN_Pos       (2)                                            /**< (HDMI_CEC_HDMICEC_CTRL) 1=Filtering on the CEC bus is enabled.\n       0=Filtering is disabled Position */
#define HDMI_CEC_HDMICEC_CTRL_FLTEN_Msk       (0x1U << HDMI_CEC_HDMICEC_CTRL_FLTEN_Pos)      /**< (HDMI_CEC_HDMICEC_CTRL) 1=Filtering on the CEC bus is enabled.\n       0=Filtering is disabled Mask */
#define HDMI_CEC_HDMICEC_CTRL_SFT5_Pos        (3)                                            /**< (HDMI_CEC_HDMICEC_CTRL) When this bit is written to '1', the Signal Free Time (SFT) is changed                    to '5' once only.\n This bit is cleared and normal SFT behavior resumes when the Bus                    Idle condition is asserted. Position */
#define HDMI_CEC_HDMICEC_CTRL_SFT5_Msk        (0x1U << HDMI_CEC_HDMICEC_CTRL_SFT5_Pos)       /**< (HDMI_CEC_HDMICEC_CTRL) When this bit is written to '1', the Signal Free Time (SFT) is changed                    to '5' once only.\n This bit is cleared and normal SFT behavior resumes when the Bus                    Idle condition is asserted. Mask */
#define HDMI_CEC_HDMICEC_CTRL_Msk             (0x0000000FUL)                                 /**< (HDMI_CEC_HDMICEC_CTRL) Register Mask  */

/* -------- HDMI_CEC_HDMICEC_LAR : (HDMI_CEC Offset: 0x04) (R/ 16) HDMI CEC Claimed Logical Address Register.     Only bits [15:0] are used. Bits [31:16] are Reserved. -------- */

typedef union
{
  struct
  {
    uint16_t ADDR:16;                   /**< bit:  0..15  When any bit in this register is asserted ('1'), Follower Directed Messages                  and Follower Broadcast Messages addressed to that logical                  address are claimed by the Follower Interface. The Claimed Logical                  Address Register default effectively disables the Follower Interface. */
  };
  uint16_t w;
} __HDMI_CEC_HDMICEC_LAR_bits_t;
#define HDMI_CEC_HDMICEC_LAR_RESETVALUE     (0x00U)                                       /**<  (HDMI_CEC_HDMICEC_LAR) HDMI CEC Claimed Logical Address Register.     Only bits [15:0] are used. Bits [31:16] are Reserved.  Reset Value */

#define HDMI_CEC_HDMICEC_LAR_ADDR_Pos         (0)                                            /**< (HDMI_CEC_HDMICEC_LAR) When any bit in this register is asserted ('1'), Follower Directed Messages                  and Follower Broadcast Messages addressed to that logical                  address are claimed by the Follower Interface. The Claimed Logical                  Address Register default effectively disables the Follower Interface. Position */
#define HDMI_CEC_HDMICEC_LAR_ADDR_Msk         (0xFFFFU << HDMI_CEC_HDMICEC_LAR_ADDR_Pos)     /**< (HDMI_CEC_HDMICEC_LAR) When any bit in this register is asserted ('1'), Follower Directed Messages                  and Follower Broadcast Messages addressed to that logical                  address are claimed by the Follower Interface. The Claimed Logical                  Address Register default effectively disables the Follower Interface. Mask */
#define HDMI_CEC_HDMICEC_LAR_ADDR(value)      (HDMI_CEC_HDMICEC_LAR_ADDR_Msk & ((value) << HDMI_CEC_HDMICEC_LAR_ADDR_Pos))
#define HDMI_CEC_HDMICEC_LAR_Msk              (0x0000FFFFUL)                                 /**< (HDMI_CEC_HDMICEC_LAR) Register Mask  */

/* -------- HDMI_CEC_HDMICEC_IDR : (HDMI_CEC Offset: 0x08) (/W 16) HDMI CEC Initiator Data Register.     Only bits [8:0] are used. Bits [31:9] are Reserved. -------- */

typedef union
{
  struct
  {
    uint16_t INITIATOR_DATA:8;          /**< bit:   0..7  When any bit in this register is asserted ('1'), Follower Directed Messages                     and Follower Broadcast Messages addressed to that logical                     address are claimed by the Follower Interface. The Claimed Logical                     Address Register default effectively disables the Follower Interface.                     Reads of this field return 0. */
    uint16_t EOM:1;                     /**< bit:      8  This bit is used for the End of Message bit in header/data blocks in                    CEC message frames. When the bit is '0' more data blocks follow;                    a '1' specifies that the message is complete.                    Reads of this field return 0. */
    uint16_t :7;                        /**< bit:  9..15  Reserved                                      */
  };
  uint16_t w;
} __HDMI_CEC_HDMICEC_IDR_bits_t;
#define HDMI_CEC_HDMICEC_IDR_RESETVALUE     (0x00U)                                       /**<  (HDMI_CEC_HDMICEC_IDR) HDMI CEC Initiator Data Register.     Only bits [8:0] are used. Bits [31:9] are Reserved.  Reset Value */

#define HDMI_CEC_HDMICEC_IDR_INITIATOR_DATA_Pos (0)                                            /**< (HDMI_CEC_HDMICEC_IDR) When any bit in this register is asserted ('1'), Follower Directed Messages                     and Follower Broadcast Messages addressed to that logical                     address are claimed by the Follower Interface. The Claimed Logical                     Address Register default effectively disables the Follower Interface.                     Reads of this field return 0. Position */
#define HDMI_CEC_HDMICEC_IDR_INITIATOR_DATA_Msk (0xFFU << HDMI_CEC_HDMICEC_IDR_INITIATOR_DATA_Pos)  /**< (HDMI_CEC_HDMICEC_IDR) When any bit in this register is asserted ('1'), Follower Directed Messages                     and Follower Broadcast Messages addressed to that logical                     address are claimed by the Follower Interface. The Claimed Logical                     Address Register default effectively disables the Follower Interface.                     Reads of this field return 0. Mask */
#define HDMI_CEC_HDMICEC_IDR_INITIATOR_DATA(value) (HDMI_CEC_HDMICEC_IDR_INITIATOR_DATA_Msk & ((value) << HDMI_CEC_HDMICEC_IDR_INITIATOR_DATA_Pos))
#define HDMI_CEC_HDMICEC_IDR_EOM_Pos          (8)                                            /**< (HDMI_CEC_HDMICEC_IDR) This bit is used for the End of Message bit in header/data blocks in                    CEC message frames. When the bit is '0' more data blocks follow;                    a '1' specifies that the message is complete.                    Reads of this field return 0. Position */
#define HDMI_CEC_HDMICEC_IDR_EOM_Msk          (0x1U << HDMI_CEC_HDMICEC_IDR_EOM_Pos)         /**< (HDMI_CEC_HDMICEC_IDR) This bit is used for the End of Message bit in header/data blocks in                    CEC message frames. When the bit is '0' more data blocks follow;                    a '1' specifies that the message is complete.                    Reads of this field return 0. Mask */
#define HDMI_CEC_HDMICEC_IDR_Msk              (0x000001FFUL)                                 /**< (HDMI_CEC_HDMICEC_IDR) Register Mask  */

/* -------- HDMI_CEC_HDMICEC_FDR : (HDMI_CEC Offset: 0x0c) (R/ 16) HDMI CEC Follower Data Register.     Only bits [8:0] are used. Bits [31:9] are Reserved. -------- */

typedef union
{
  struct
  {
    uint16_t FOLLOWER_DATA:8;           /**< bit:   0..7  This field is used for the received Information bits from header/data                    blocks in CEC message frames.\n                    Reads of this register when the FFNE bit in the Follower Status Register                    is not asserted ('0') return undefined data. */
    uint16_t EOM:1;                     /**< bit:      8  This bit is the received End of Message bit from header/data blocks                    in CEC message frames. When the bit is '0' more data blocks follow;                    a '1' specifies that the message is complete. */
    uint16_t :7;                        /**< bit:  9..15  Reserved                                      */
  };
  uint16_t w;
} __HDMI_CEC_HDMICEC_FDR_bits_t;
#define HDMI_CEC_HDMICEC_FDR_RESETVALUE     (0x00U)                                       /**<  (HDMI_CEC_HDMICEC_FDR) HDMI CEC Follower Data Register.     Only bits [8:0] are used. Bits [31:9] are Reserved.  Reset Value */

#define HDMI_CEC_HDMICEC_FDR_FOLLOWER_DATA_Pos (0)                                            /**< (HDMI_CEC_HDMICEC_FDR) This field is used for the received Information bits from header/data                    blocks in CEC message frames.\n                    Reads of this register when the FFNE bit in the Follower Status Register                    is not asserted ('0') return undefined data. Position */
#define HDMI_CEC_HDMICEC_FDR_FOLLOWER_DATA_Msk (0xFFU << HDMI_CEC_HDMICEC_FDR_FOLLOWER_DATA_Pos)  /**< (HDMI_CEC_HDMICEC_FDR) This field is used for the received Information bits from header/data                    blocks in CEC message frames.\n                    Reads of this register when the FFNE bit in the Follower Status Register                    is not asserted ('0') return undefined data. Mask */
#define HDMI_CEC_HDMICEC_FDR_FOLLOWER_DATA(value) (HDMI_CEC_HDMICEC_FDR_FOLLOWER_DATA_Msk & ((value) << HDMI_CEC_HDMICEC_FDR_FOLLOWER_DATA_Pos))
#define HDMI_CEC_HDMICEC_FDR_EOM_Pos          (8)                                            /**< (HDMI_CEC_HDMICEC_FDR) This bit is the received End of Message bit from header/data blocks                    in CEC message frames. When the bit is '0' more data blocks follow;                    a '1' specifies that the message is complete. Position */
#define HDMI_CEC_HDMICEC_FDR_EOM_Msk          (0x1U << HDMI_CEC_HDMICEC_FDR_EOM_Pos)         /**< (HDMI_CEC_HDMICEC_FDR) This bit is the received End of Message bit from header/data blocks                    in CEC message frames. When the bit is '0' more data blocks follow;                    a '1' specifies that the message is complete. Mask */
#define HDMI_CEC_HDMICEC_FDR_Msk              (0x000001FFUL)                                 /**< (HDMI_CEC_HDMICEC_FDR) Register Mask  */

/* -------- HDMI_CEC_HDMICEC_ISR : (HDMI_CEC Offset: 0x10) (R/W 8) HDMI CEC Initiator Status Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. -------- */

typedef union
{
  struct
  {
    uint8_t  IDLE:1;                    /**< bit:      0  1=The CEC bus is idle.              0=The CEC bus is busy. */
    uint8_t  LAB:1;                     /**< bit:      1  Lost Arbitration (LAB).                    1=Bus contention is detected by the Initiator Interface during CEC line arbitration.                    0=No bus contention detected.                    R/WC. */
    uint8_t  UNDRN:1;                   /**< bit:      2  Initiator Underrun (UNDRN)        1=The Initiator shift register requires data from the Initiator Interface                        FIFO and the IFE bit is asserted.          0=No underrun detected.          R/WC. */
    uint8_t  ACKERR:1;                  /**< bit:      3  The Acknowledge Error bit is asserted ('1') when the follower NACKs                     an acknowledge bit, both for Follower Directed Messages and Follower                     Broadcast Messages.                     For example, in Follower Directed Messages if the follower acknowledge                     bit response is '1' this bit is '1' in Follower Broadcast Messages                     if a follower acknowledge bit response is '0' the bit is '1'. */
    uint8_t  CE:1;                      /**< bit:      4  The Contention Error bit is asserted ('1') when bus contention is                     detected by the Initiator Interface at any point following CEC line                     arbitration. This is likely to be a consequence of CEC Line Error                     Handling (see CEC 7.4, CEC Line Error Handling in References [1]).       R/WC. */
    uint8_t  IFE:1;                     /**< bit:      5  The Initiator FIFO Empty bit is asserted ('1') when the Initiator Interface                     retrieves the last data entry from the FIFO. */
    uint8_t  IFDONE:1;                  /**< bit:      6  The Initiator Frame Done bit is asserted ('1') when a message block                     with the EOM bit asserted ('1') has been transferred by the Initiator                     Interface, or the message frame has been terminated because an                     error occurred as defined by the LAB, UNDRN, ACKERR, and CE bits.        R/WC. */
    uint8_t  :1;                        /**< bit:      7  Reserved                                      */
  };
  uint8_t  w;
} __HDMI_CEC_HDMICEC_ISR_bits_t;
#define HDMI_CEC_HDMICEC_ISR_RESETVALUE     (0x00U)                                       /**<  (HDMI_CEC_HDMICEC_ISR) HDMI CEC Initiator Status Register.     Only bits [6:0] are used. Bits [31:7] are Reserved.  Reset Value */

#define HDMI_CEC_HDMICEC_ISR_IDLE_Pos         (0)                                            /**< (HDMI_CEC_HDMICEC_ISR) 1=The CEC bus is idle.              0=The CEC bus is busy. Position */
#define HDMI_CEC_HDMICEC_ISR_IDLE_Msk         (0x1U << HDMI_CEC_HDMICEC_ISR_IDLE_Pos)        /**< (HDMI_CEC_HDMICEC_ISR) 1=The CEC bus is idle.              0=The CEC bus is busy. Mask */
#define HDMI_CEC_HDMICEC_ISR_LAB_Pos          (1)                                            /**< (HDMI_CEC_HDMICEC_ISR) Lost Arbitration (LAB).                    1=Bus contention is detected by the Initiator Interface during CEC line arbitration.                    0=No bus contention detected.                    R/WC. Position */
#define HDMI_CEC_HDMICEC_ISR_LAB_Msk          (0x1U << HDMI_CEC_HDMICEC_ISR_LAB_Pos)         /**< (HDMI_CEC_HDMICEC_ISR) Lost Arbitration (LAB).                    1=Bus contention is detected by the Initiator Interface during CEC line arbitration.                    0=No bus contention detected.                    R/WC. Mask */
#define HDMI_CEC_HDMICEC_ISR_UNDRN_Pos        (2)                                            /**< (HDMI_CEC_HDMICEC_ISR) Initiator Underrun (UNDRN)        1=The Initiator shift register requires data from the Initiator Interface                        FIFO and the IFE bit is asserted.          0=No underrun detected.          R/WC. Position */
#define HDMI_CEC_HDMICEC_ISR_UNDRN_Msk        (0x1U << HDMI_CEC_HDMICEC_ISR_UNDRN_Pos)       /**< (HDMI_CEC_HDMICEC_ISR) Initiator Underrun (UNDRN)        1=The Initiator shift register requires data from the Initiator Interface                        FIFO and the IFE bit is asserted.          0=No underrun detected.          R/WC. Mask */
#define HDMI_CEC_HDMICEC_ISR_ACKERR_Pos       (3)                                            /**< (HDMI_CEC_HDMICEC_ISR) The Acknowledge Error bit is asserted ('1') when the follower NACKs                     an acknowledge bit, both for Follower Directed Messages and Follower                     Broadcast Messages.                     For example, in Follower Directed Messages if the follower acknowledge                     bit response is '1' this bit is '1' in Follower Broadcast Messages                     if a follower acknowledge bit response is '0' the bit is '1'. Position */
#define HDMI_CEC_HDMICEC_ISR_ACKERR_Msk       (0x1U << HDMI_CEC_HDMICEC_ISR_ACKERR_Pos)      /**< (HDMI_CEC_HDMICEC_ISR) The Acknowledge Error bit is asserted ('1') when the follower NACKs                     an acknowledge bit, both for Follower Directed Messages and Follower                     Broadcast Messages.                     For example, in Follower Directed Messages if the follower acknowledge                     bit response is '1' this bit is '1' in Follower Broadcast Messages                     if a follower acknowledge bit response is '0' the bit is '1'. Mask */
#define HDMI_CEC_HDMICEC_ISR_CE_Pos           (4)                                            /**< (HDMI_CEC_HDMICEC_ISR) The Contention Error bit is asserted ('1') when bus contention is                     detected by the Initiator Interface at any point following CEC line                     arbitration. This is likely to be a consequence of CEC Line Error                     Handling (see CEC 7.4, CEC Line Error Handling in References [1]).       R/WC. Position */
#define HDMI_CEC_HDMICEC_ISR_CE_Msk           (0x1U << HDMI_CEC_HDMICEC_ISR_CE_Pos)          /**< (HDMI_CEC_HDMICEC_ISR) The Contention Error bit is asserted ('1') when bus contention is                     detected by the Initiator Interface at any point following CEC line                     arbitration. This is likely to be a consequence of CEC Line Error                     Handling (see CEC 7.4, CEC Line Error Handling in References [1]).       R/WC. Mask */
#define HDMI_CEC_HDMICEC_ISR_IFE_Pos          (5)                                            /**< (HDMI_CEC_HDMICEC_ISR) The Initiator FIFO Empty bit is asserted ('1') when the Initiator Interface                     retrieves the last data entry from the FIFO. Position */
#define HDMI_CEC_HDMICEC_ISR_IFE_Msk          (0x1U << HDMI_CEC_HDMICEC_ISR_IFE_Pos)         /**< (HDMI_CEC_HDMICEC_ISR) The Initiator FIFO Empty bit is asserted ('1') when the Initiator Interface                     retrieves the last data entry from the FIFO. Mask */
#define HDMI_CEC_HDMICEC_ISR_IFDONE_Pos       (6)                                            /**< (HDMI_CEC_HDMICEC_ISR) The Initiator Frame Done bit is asserted ('1') when a message block                     with the EOM bit asserted ('1') has been transferred by the Initiator                     Interface, or the message frame has been terminated because an                     error occurred as defined by the LAB, UNDRN, ACKERR, and CE bits.        R/WC. Position */
#define HDMI_CEC_HDMICEC_ISR_IFDONE_Msk       (0x1U << HDMI_CEC_HDMICEC_ISR_IFDONE_Pos)      /**< (HDMI_CEC_HDMICEC_ISR) The Initiator Frame Done bit is asserted ('1') when a message block                     with the EOM bit asserted ('1') has been transferred by the Initiator                     Interface, or the message frame has been terminated because an                     error occurred as defined by the LAB, UNDRN, ACKERR, and CE bits.        R/WC. Mask */
#define HDMI_CEC_HDMICEC_ISR_Msk              (0x0000007FUL)                                 /**< (HDMI_CEC_HDMICEC_ISR) Register Mask  */

/* -------- HDMI_CEC_HDMICEC_FSR : (HDMI_CEC Offset: 0x14) (R/W 8) HDMI CEC Follower Status Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. -------- */

typedef union
{
  struct
  {
    uint8_t  OVRN:1;                    /**< bit:      0  The Follower Overrun bit is asserted ('1') when data from the follower                     shift register is transferred to the Follower Interface FIFO when                     the FFF bit is asserted.                     R/WC. */
    uint8_t  BERR:1;                    /**< bit:      1  The Bus Error Detected bit is asserted ('1') when the follower detects                    spurious pulses on the CEC Bus.                     R/WC. */
    uint8_t  BTO:1;                     /**< bit:      2  The Bus Time Out Detected bit is asserted ('1') when the follower                        detects that the CEC Bus is held high too long          R/WC. */
    uint8_t  FFNE:1;                    /**< bit:      3  The Follower FIFO Not Empty bit is asserted ('1') when there is data                         in the Follower Interface FIFO. The bit is not asserted ('0') when                         the Follower Interface FIFO is empty. */
    uint8_t  FFF:1;                     /**< bit:      4  The Follower FIFO Full bit is asserted ('1') when there is no room in                         the Follower Interface FIFO for more data. */
    uint8_t  FDR:1;                     /**< bit:      5  The Follower Data Ready bit is asserted ('1') whenever received                        data is written to the Follower Interface FIFO.          R/WC. */
    uint8_t  FFDONE:1;                  /**< bit:      6  The Follower Frame Done bit is asserted ('1') when a message block                     with the EOM bit asserted ('1') has been received by the Follower                     Interface, or the message frame has been terminated because an                     error occurred as defined by the OVRN, BERR, and BTO bits.       R/WC. */
    uint8_t  :1;                        /**< bit:      7  Reserved                                      */
  };
  uint8_t  w;
} __HDMI_CEC_HDMICEC_FSR_bits_t;
#define HDMI_CEC_HDMICEC_FSR_RESETVALUE     (0x00U)                                       /**<  (HDMI_CEC_HDMICEC_FSR) HDMI CEC Follower Status Register.     Only bits [6:0] are used. Bits [31:7] are Reserved.  Reset Value */

#define HDMI_CEC_HDMICEC_FSR_OVRN_Pos         (0)                                            /**< (HDMI_CEC_HDMICEC_FSR) The Follower Overrun bit is asserted ('1') when data from the follower                     shift register is transferred to the Follower Interface FIFO when                     the FFF bit is asserted.                     R/WC. Position */
#define HDMI_CEC_HDMICEC_FSR_OVRN_Msk         (0x1U << HDMI_CEC_HDMICEC_FSR_OVRN_Pos)        /**< (HDMI_CEC_HDMICEC_FSR) The Follower Overrun bit is asserted ('1') when data from the follower                     shift register is transferred to the Follower Interface FIFO when                     the FFF bit is asserted.                     R/WC. Mask */
#define HDMI_CEC_HDMICEC_FSR_BERR_Pos         (1)                                            /**< (HDMI_CEC_HDMICEC_FSR) The Bus Error Detected bit is asserted ('1') when the follower detects                    spurious pulses on the CEC Bus.                     R/WC. Position */
#define HDMI_CEC_HDMICEC_FSR_BERR_Msk         (0x1U << HDMI_CEC_HDMICEC_FSR_BERR_Pos)        /**< (HDMI_CEC_HDMICEC_FSR) The Bus Error Detected bit is asserted ('1') when the follower detects                    spurious pulses on the CEC Bus.                     R/WC. Mask */
#define HDMI_CEC_HDMICEC_FSR_BTO_Pos          (2)                                            /**< (HDMI_CEC_HDMICEC_FSR) The Bus Time Out Detected bit is asserted ('1') when the follower                        detects that the CEC Bus is held high too long          R/WC. Position */
#define HDMI_CEC_HDMICEC_FSR_BTO_Msk          (0x1U << HDMI_CEC_HDMICEC_FSR_BTO_Pos)         /**< (HDMI_CEC_HDMICEC_FSR) The Bus Time Out Detected bit is asserted ('1') when the follower                        detects that the CEC Bus is held high too long          R/WC. Mask */
#define HDMI_CEC_HDMICEC_FSR_FFNE_Pos         (3)                                            /**< (HDMI_CEC_HDMICEC_FSR) The Follower FIFO Not Empty bit is asserted ('1') when there is data                         in the Follower Interface FIFO. The bit is not asserted ('0') when                         the Follower Interface FIFO is empty. Position */
#define HDMI_CEC_HDMICEC_FSR_FFNE_Msk         (0x1U << HDMI_CEC_HDMICEC_FSR_FFNE_Pos)        /**< (HDMI_CEC_HDMICEC_FSR) The Follower FIFO Not Empty bit is asserted ('1') when there is data                         in the Follower Interface FIFO. The bit is not asserted ('0') when                         the Follower Interface FIFO is empty. Mask */
#define HDMI_CEC_HDMICEC_FSR_FFF_Pos          (4)                                            /**< (HDMI_CEC_HDMICEC_FSR) The Follower FIFO Full bit is asserted ('1') when there is no room in                         the Follower Interface FIFO for more data. Position */
#define HDMI_CEC_HDMICEC_FSR_FFF_Msk          (0x1U << HDMI_CEC_HDMICEC_FSR_FFF_Pos)         /**< (HDMI_CEC_HDMICEC_FSR) The Follower FIFO Full bit is asserted ('1') when there is no room in                         the Follower Interface FIFO for more data. Mask */
#define HDMI_CEC_HDMICEC_FSR_FDR_Pos          (5)                                            /**< (HDMI_CEC_HDMICEC_FSR) The Follower Data Ready bit is asserted ('1') whenever received                        data is written to the Follower Interface FIFO.          R/WC. Position */
#define HDMI_CEC_HDMICEC_FSR_FDR_Msk          (0x1U << HDMI_CEC_HDMICEC_FSR_FDR_Pos)         /**< (HDMI_CEC_HDMICEC_FSR) The Follower Data Ready bit is asserted ('1') whenever received                        data is written to the Follower Interface FIFO.          R/WC. Mask */
#define HDMI_CEC_HDMICEC_FSR_FFDONE_Pos       (6)                                            /**< (HDMI_CEC_HDMICEC_FSR) The Follower Frame Done bit is asserted ('1') when a message block                     with the EOM bit asserted ('1') has been received by the Follower                     Interface, or the message frame has been terminated because an                     error occurred as defined by the OVRN, BERR, and BTO bits.       R/WC. Position */
#define HDMI_CEC_HDMICEC_FSR_FFDONE_Msk       (0x1U << HDMI_CEC_HDMICEC_FSR_FFDONE_Pos)      /**< (HDMI_CEC_HDMICEC_FSR) The Follower Frame Done bit is asserted ('1') when a message block                     with the EOM bit asserted ('1') has been received by the Follower                     Interface, or the message frame has been terminated because an                     error occurred as defined by the OVRN, BERR, and BTO bits.       R/WC. Mask */
#define HDMI_CEC_HDMICEC_FSR_Msk              (0x0000007FUL)                                 /**< (HDMI_CEC_HDMICEC_FSR) Register Mask  */

/* -------- HDMI_CEC_HDMICEC_ICR : (HDMI_CEC Offset: 0x18) (R/W 8) HDMI CEC Initiator Control Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. -------- */

typedef union
{
  struct
  {
    uint8_t  IFLUSH:1;                  /**< bit:      0  When this bit is asserted ('1'), data in the Initiator Interface FIFO is       cleared. When set, the bit is automatically cleared by hardware within one        register access cycle.                     This bit can be used to terminate an Initiator Interface message frame transfer.                     R/WC. */
    uint8_t  START:1;                   /**< bit:      1  When this bit is asserted ('1'), the Initiator Interface begins a message                    frame transfer if the IFE bit is not asserted. If the Initiator                    Interface FIFO is empty when this bit is asserted, the message                    frame transfer begins as soon as a write to the Initiator Data Register                    occurs. In both cases, the bit is automatically cleared by hardware                    within one register access cycle.                    The START bit only needs to be asserted once per message frame.                    R/WC. */
    uint8_t  :3;                        /**< bit:   2..4  Reserved                                      */
    uint8_t  IFE_EN:1;                  /**< bit:      5  Enable bit for the IFE interrupt.                        1=Interrupt is enabled with IFE is asserted                        0=Interrupt is disabled          R/WC. */
    uint8_t  IFDONE_EN:1;               /**< bit:      6  Enable bit for the IFDONE interrupt.                        1=Interrupt is enabled with IFDONE is asserted                        0=Interrupt is disabled          R/WC. */
    uint8_t  :1;                        /**< bit:      7  Reserved                                      */
  };
  uint8_t  w;
} __HDMI_CEC_HDMICEC_ICR_bits_t;
#define HDMI_CEC_HDMICEC_ICR_RESETVALUE     (0x00U)                                       /**<  (HDMI_CEC_HDMICEC_ICR) HDMI CEC Initiator Control Register.     Only bits [6:0] are used. Bits [31:7] are Reserved.  Reset Value */

#define HDMI_CEC_HDMICEC_ICR_IFLUSH_Pos       (0)                                            /**< (HDMI_CEC_HDMICEC_ICR) When this bit is asserted ('1'), data in the Initiator Interface FIFO is       cleared. When set, the bit is automatically cleared by hardware within one        register access cycle.                     This bit can be used to terminate an Initiator Interface message frame transfer.                     R/WC. Position */
#define HDMI_CEC_HDMICEC_ICR_IFLUSH_Msk       (0x1U << HDMI_CEC_HDMICEC_ICR_IFLUSH_Pos)      /**< (HDMI_CEC_HDMICEC_ICR) When this bit is asserted ('1'), data in the Initiator Interface FIFO is       cleared. When set, the bit is automatically cleared by hardware within one        register access cycle.                     This bit can be used to terminate an Initiator Interface message frame transfer.                     R/WC. Mask */
#define HDMI_CEC_HDMICEC_ICR_START_Pos        (1)                                            /**< (HDMI_CEC_HDMICEC_ICR) When this bit is asserted ('1'), the Initiator Interface begins a message                    frame transfer if the IFE bit is not asserted. If the Initiator                    Interface FIFO is empty when this bit is asserted, the message                    frame transfer begins as soon as a write to the Initiator Data Register                    occurs. In both cases, the bit is automatically cleared by hardware                    within one register access cycle.                    The START bit only needs to be asserted once per message frame.                    R/WC. Position */
#define HDMI_CEC_HDMICEC_ICR_START_Msk        (0x1U << HDMI_CEC_HDMICEC_ICR_START_Pos)       /**< (HDMI_CEC_HDMICEC_ICR) When this bit is asserted ('1'), the Initiator Interface begins a message                    frame transfer if the IFE bit is not asserted. If the Initiator                    Interface FIFO is empty when this bit is asserted, the message                    frame transfer begins as soon as a write to the Initiator Data Register                    occurs. In both cases, the bit is automatically cleared by hardware                    within one register access cycle.                    The START bit only needs to be asserted once per message frame.                    R/WC. Mask */
#define HDMI_CEC_HDMICEC_ICR_IFE_EN_Pos       (5)                                            /**< (HDMI_CEC_HDMICEC_ICR) Enable bit for the IFE interrupt.                        1=Interrupt is enabled with IFE is asserted                        0=Interrupt is disabled          R/WC. Position */
#define HDMI_CEC_HDMICEC_ICR_IFE_EN_Msk       (0x1U << HDMI_CEC_HDMICEC_ICR_IFE_EN_Pos)      /**< (HDMI_CEC_HDMICEC_ICR) Enable bit for the IFE interrupt.                        1=Interrupt is enabled with IFE is asserted                        0=Interrupt is disabled          R/WC. Mask */
#define HDMI_CEC_HDMICEC_ICR_IFDONE_EN_Pos    (6)                                            /**< (HDMI_CEC_HDMICEC_ICR) Enable bit for the IFDONE interrupt.                        1=Interrupt is enabled with IFDONE is asserted                        0=Interrupt is disabled          R/WC. Position */
#define HDMI_CEC_HDMICEC_ICR_IFDONE_EN_Msk    (0x1U << HDMI_CEC_HDMICEC_ICR_IFDONE_EN_Pos)   /**< (HDMI_CEC_HDMICEC_ICR) Enable bit for the IFDONE interrupt.                        1=Interrupt is enabled with IFDONE is asserted                        0=Interrupt is disabled          R/WC. Mask */
#define HDMI_CEC_HDMICEC_ICR_Msk              (0x00000063UL)                                 /**< (HDMI_CEC_HDMICEC_ICR) Register Mask  */

/* -------- HDMI_CEC_HDMICEC_FCR : (HDMI_CEC Offset: 0x1c) (R/W 8) HDMI CEC Follower Control Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. -------- */

typedef union
{
  struct
  {
    uint8_t  FFLUSH:1;                  /**< bit:      0  When this bit is asserted ('1'), data in the Follower Interface FIFO is                     cleared. When set, the bit is automatically cleared by hardware                     within one register access cycle.                      R/WC. */
    uint8_t  :3;                        /**< bit:   1..3  Reserved                                      */
    uint8_t  FFF_EN:1;                  /**< bit:      4  Enable bit for the FFF interrupt.                    1=Interrupt is enabled with FFF is asserted                    0=Interrupt is disabled                    R/WC. */
    uint8_t  FDR_EN:1;                  /**< bit:      5  Enable bit for the FDR interrupt.                        1=Interrupt is enabled with FDR is asserted                        0=Interrupt is disabled          R/WC. */
    uint8_t  FFDONE_EN:1;               /**< bit:      6  Enable bit for the FFDONE interrupt.                        1=Interrupt is enabled with FFDONE is asserted                        0=Interrupt is disabled          R/WC. */
    uint8_t  :1;                        /**< bit:      7  Reserved                                      */
  };
  uint8_t  w;
} __HDMI_CEC_HDMICEC_FCR_bits_t;
#define HDMI_CEC_HDMICEC_FCR_RESETVALUE     (0x00U)                                       /**<  (HDMI_CEC_HDMICEC_FCR) HDMI CEC Follower Control Register.     Only bits [6:0] are used. Bits [31:7] are Reserved.  Reset Value */

#define HDMI_CEC_HDMICEC_FCR_FFLUSH_Pos       (0)                                            /**< (HDMI_CEC_HDMICEC_FCR) When this bit is asserted ('1'), data in the Follower Interface FIFO is                     cleared. When set, the bit is automatically cleared by hardware                     within one register access cycle.                      R/WC. Position */
#define HDMI_CEC_HDMICEC_FCR_FFLUSH_Msk       (0x1U << HDMI_CEC_HDMICEC_FCR_FFLUSH_Pos)      /**< (HDMI_CEC_HDMICEC_FCR) When this bit is asserted ('1'), data in the Follower Interface FIFO is                     cleared. When set, the bit is automatically cleared by hardware                     within one register access cycle.                      R/WC. Mask */
#define HDMI_CEC_HDMICEC_FCR_FFF_EN_Pos       (4)                                            /**< (HDMI_CEC_HDMICEC_FCR) Enable bit for the FFF interrupt.                    1=Interrupt is enabled with FFF is asserted                    0=Interrupt is disabled                    R/WC. Position */
#define HDMI_CEC_HDMICEC_FCR_FFF_EN_Msk       (0x1U << HDMI_CEC_HDMICEC_FCR_FFF_EN_Pos)      /**< (HDMI_CEC_HDMICEC_FCR) Enable bit for the FFF interrupt.                    1=Interrupt is enabled with FFF is asserted                    0=Interrupt is disabled                    R/WC. Mask */
#define HDMI_CEC_HDMICEC_FCR_FDR_EN_Pos       (5)                                            /**< (HDMI_CEC_HDMICEC_FCR) Enable bit for the FDR interrupt.                        1=Interrupt is enabled with FDR is asserted                        0=Interrupt is disabled          R/WC. Position */
#define HDMI_CEC_HDMICEC_FCR_FDR_EN_Msk       (0x1U << HDMI_CEC_HDMICEC_FCR_FDR_EN_Pos)      /**< (HDMI_CEC_HDMICEC_FCR) Enable bit for the FDR interrupt.                        1=Interrupt is enabled with FDR is asserted                        0=Interrupt is disabled          R/WC. Mask */
#define HDMI_CEC_HDMICEC_FCR_FFDONE_EN_Pos    (6)                                            /**< (HDMI_CEC_HDMICEC_FCR) Enable bit for the FFDONE interrupt.                        1=Interrupt is enabled with FFDONE is asserted                        0=Interrupt is disabled          R/WC. Position */
#define HDMI_CEC_HDMICEC_FCR_FFDONE_EN_Msk    (0x1U << HDMI_CEC_HDMICEC_FCR_FFDONE_EN_Pos)   /**< (HDMI_CEC_HDMICEC_FCR) Enable bit for the FFDONE interrupt.                        1=Interrupt is enabled with FFDONE is asserted                        0=Interrupt is disabled          R/WC. Mask */
#define HDMI_CEC_HDMICEC_FCR_Msk              (0x00000071UL)                                 /**< (HDMI_CEC_HDMICEC_FCR) Register Mask  */

/* -------- HDMI_CEC_HDMICEC_DIV : (HDMI_CEC Offset: 0x20) (R/W 32) HDMI CEC Clock Divier Register.\n    Reset value of this reister is 0x01E0.\n -------- */

typedef union
{
  struct
  {
    uint32_t CLK_DIV:32;                /**< bit:  0..31  HDMI CEC Clock Divier Register.\n             */
  };
  uint32_t w;
} __HDMI_CEC_HDMICEC_DIV_bits_t;
#define HDMI_CEC_HDMICEC_DIV_RESETVALUE     (0x1E0U)                                      /**<  (HDMI_CEC_HDMICEC_DIV) HDMI CEC Clock Divier Register.\n    Reset value of this reister is 0x01E0.\n  Reset Value */

#define HDMI_CEC_HDMICEC_DIV_CLK_DIV_Pos      (0)                                            /**< (HDMI_CEC_HDMICEC_DIV) HDMI CEC Clock Divier Register.\n Position */
#define HDMI_CEC_HDMICEC_DIV_CLK_DIV_Msk      (0xFFFFFFFFU << HDMI_CEC_HDMICEC_DIV_CLK_DIV_Pos)  /**< (HDMI_CEC_HDMICEC_DIV) HDMI CEC Clock Divier Register.\n Mask */
#define HDMI_CEC_HDMICEC_DIV_CLK_DIV(value)   (HDMI_CEC_HDMICEC_DIV_CLK_DIV_Msk & ((value) << HDMI_CEC_HDMICEC_DIV_CLK_DIV_Pos))
#define HDMI_CEC_HDMICEC_DIV_Msk              (0xFFFFFFFFUL)                                 /**< (HDMI_CEC_HDMICEC_DIV) Register Mask  */

/** \brief HDMI_CEC register offsets definitions */
#define HDMI_CEC_HDMICEC_CTRL_OFFSET (0x00)         /**< (HDMI_CEC_HDMICEC_CTRL) HDMI CEC Control Register.     Only bits [3:0] are used. Bits [31:4] are Reserved. Offset */
#define HDMI_CEC_HDMICEC_LAR_OFFSET  (0x04)         /**< (HDMI_CEC_HDMICEC_LAR) HDMI CEC Claimed Logical Address Register.     Only bits [15:0] are used. Bits [31:16] are Reserved. Offset */
#define HDMI_CEC_HDMICEC_IDR_OFFSET  (0x08)         /**< (HDMI_CEC_HDMICEC_IDR) HDMI CEC Initiator Data Register.     Only bits [8:0] are used. Bits [31:9] are Reserved. Offset */
#define HDMI_CEC_HDMICEC_FDR_OFFSET  (0x0C)         /**< (HDMI_CEC_HDMICEC_FDR) HDMI CEC Follower Data Register.     Only bits [8:0] are used. Bits [31:9] are Reserved. Offset */
#define HDMI_CEC_HDMICEC_ISR_OFFSET  (0x10)         /**< (HDMI_CEC_HDMICEC_ISR) HDMI CEC Initiator Status Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. Offset */
#define HDMI_CEC_HDMICEC_FSR_OFFSET  (0x14)         /**< (HDMI_CEC_HDMICEC_FSR) HDMI CEC Follower Status Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. Offset */
#define HDMI_CEC_HDMICEC_ICR_OFFSET  (0x18)         /**< (HDMI_CEC_HDMICEC_ICR) HDMI CEC Initiator Control Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. Offset */
#define HDMI_CEC_HDMICEC_FCR_OFFSET  (0x1C)         /**< (HDMI_CEC_HDMICEC_FCR) HDMI CEC Follower Control Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. Offset */
#define HDMI_CEC_HDMICEC_DIV_OFFSET  (0x20)         /**< (HDMI_CEC_HDMICEC_DIV) HDMI CEC Clock Divier Register.\n    Reset value of this reister is 0x01E0.\n Offset */

/** \brief HDMI_CEC register API structure */
typedef struct
{  /* The HDMI Consumer Electronics Control (CEC) Interface that provides high-level control functions between all of the        various audiovisual products in a users environment. */
  __IO  __HDMI_CEC_HDMICEC_CTRL_bits_t HDMICEC_CTRL;  /**< Offset: 0x00 (R/W   8) HDMI CEC Control Register.     Only bits [3:0] are used. Bits [31:4] are Reserved. */
  __I   __HDMI_CEC_HDMICEC_LAR_bits_t  HDMICEC_LAR;   /**< Offset: 0x04 (R/   16) HDMI CEC Claimed Logical Address Register.     Only bits [15:0] are used. Bits [31:16] are Reserved. */
  __O   __HDMI_CEC_HDMICEC_IDR_bits_t  HDMICEC_IDR;   /**< Offset: 0x08 ( /W  16) HDMI CEC Initiator Data Register.     Only bits [8:0] are used. Bits [31:9] are Reserved. */
  __I   __HDMI_CEC_HDMICEC_FDR_bits_t  HDMICEC_FDR;   /**< Offset: 0x0C (R/   16) HDMI CEC Follower Data Register.     Only bits [8:0] are used. Bits [31:9] are Reserved. */
  __IO  __HDMI_CEC_HDMICEC_ISR_bits_t  HDMICEC_ISR;   /**< Offset: 0x10 (R/W   8) HDMI CEC Initiator Status Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. */
  __IO  __HDMI_CEC_HDMICEC_FSR_bits_t  HDMICEC_FSR;   /**< Offset: 0x14 (R/W   8) HDMI CEC Follower Status Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. */
  __IO  __HDMI_CEC_HDMICEC_ICR_bits_t  HDMICEC_ICR;   /**< Offset: 0x18 (R/W   8) HDMI CEC Initiator Control Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. */
  __IO  __HDMI_CEC_HDMICEC_FCR_bits_t  HDMICEC_FCR;   /**< Offset: 0x1C (R/W   8) HDMI CEC Follower Control Register.     Only bits [6:0] are used. Bits [31:7] are Reserved. */
  __IO  __HDMI_CEC_HDMICEC_DIV_bits_t  HDMICEC_DIV;   /**< Offset: 0x20 (R/W  32) HDMI CEC Clock Divier Register.\n    Reset value of this reister is 0x01E0.\n */
} hdmicec_registers_t;
/** @}  end of The HDMI Consumer Electronics Control (CEC) Interface that provides high-level control functions between all of the        various audiovisual products in a users environment. */

#endif /* _PIC32CX_0525SG12_HDMI_CEC_COMPONENT_H_ */
