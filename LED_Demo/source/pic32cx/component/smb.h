/**
 * \brief Component description for PIC32CX/0525SG12 SMB
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
#ifndef _PIC32CX_0525SG12_SMB_COMPONENT_H_
#define _PIC32CX_0525SG12_SMB_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_SMB The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SMB */
/* ========================================================================== */

/* -------- SMB_CONTROL : (SMB Offset: 0x00) (/W 32) Control Register -------- */

typedef union
{
  struct
  {
    uint32_t ACK:1;                     /**< bit:      0  The Acknowledge bit (ACK) must normally be asserted ('1'). This causes the controller to send an acknowledge automatically after each byte (this occurs during the 9th clock pulse). The ACK bit must not be asserted ('0') when the controller is operating in master/receiver mode and requires no further data to be sent from the slave transmitter. This causes a negative acknowledge on the I2C bus, which halts further transmission from the slave device. */
    uint32_t STO:1;                     /**< bit:      1  See STA description                           */
    uint32_t STA:1;                     /**< bit:      2  The STA and STO bits control the generation of the I2C Start condition and the transmission of the Slave Address and R/nW bit (from the Data Register), generation of repeated Start condition, and generation of the Stop condition */
    uint32_t ENI:1;                     /**< bit:      3  Enable Interrupt bit (ENI) controls the Interrupt Interface */
    uint32_t :2;                        /**< bit:   4..5  Reserved                                      */
    uint32_t ESO:1;                     /**< bit:      6  The Enable Serial Output bit (ESO) enables and disables the SMB Controller Core serial data output (SDAT) */
    uint32_t PIN:1;                     /**< bit:      7  The Pending Interrupt Not (PIN) bit serves as a software reset function. Writing the PIN bit to a logic '1' de-asserts all status bits except for the nBB bit which is not affected by the PIN bit. The PIN bit is a self-clearing bit. Writing this bit to a logic '0' has no effect. */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __SMB_CONTROL_bits_t;
#define SMB_CONTROL_RESETVALUE              (0x00U)                                       /**<  (SMB_CONTROL) Control Register  Reset Value */

#define SMB_CONTROL_ACK_Pos                   (0)                                            /**< (SMB_CONTROL) The Acknowledge bit (ACK) must normally be asserted ('1'). This causes the controller to send an acknowledge automatically after each byte (this occurs during the 9th clock pulse). The ACK bit must not be asserted ('0') when the controller is operating in master/receiver mode and requires no further data to be sent from the slave transmitter. This causes a negative acknowledge on the I2C bus, which halts further transmission from the slave device. Position */
#define SMB_CONTROL_ACK_Msk                   (0x1U << SMB_CONTROL_ACK_Pos)                  /**< (SMB_CONTROL) The Acknowledge bit (ACK) must normally be asserted ('1'). This causes the controller to send an acknowledge automatically after each byte (this occurs during the 9th clock pulse). The ACK bit must not be asserted ('0') when the controller is operating in master/receiver mode and requires no further data to be sent from the slave transmitter. This causes a negative acknowledge on the I2C bus, which halts further transmission from the slave device. Mask */
#define SMB_CONTROL_STO_Pos                   (1)                                            /**< (SMB_CONTROL) See STA description Position */
#define SMB_CONTROL_STO_Msk                   (0x1U << SMB_CONTROL_STO_Pos)                  /**< (SMB_CONTROL) See STA description Mask */
#define SMB_CONTROL_STA_Pos                   (2)                                            /**< (SMB_CONTROL) The STA and STO bits control the generation of the I2C Start condition and the transmission of the Slave Address and R/nW bit (from the Data Register), generation of repeated Start condition, and generation of the Stop condition Position */
#define SMB_CONTROL_STA_Msk                   (0x1U << SMB_CONTROL_STA_Pos)                  /**< (SMB_CONTROL) The STA and STO bits control the generation of the I2C Start condition and the transmission of the Slave Address and R/nW bit (from the Data Register), generation of repeated Start condition, and generation of the Stop condition Mask */
#define SMB_CONTROL_ENI_Pos                   (3)                                            /**< (SMB_CONTROL) Enable Interrupt bit (ENI) controls the Interrupt Interface Position */
#define SMB_CONTROL_ENI_Msk                   (0x1U << SMB_CONTROL_ENI_Pos)                  /**< (SMB_CONTROL) Enable Interrupt bit (ENI) controls the Interrupt Interface Mask */
#define SMB_CONTROL_ESO_Pos                   (6)                                            /**< (SMB_CONTROL) The Enable Serial Output bit (ESO) enables and disables the SMB Controller Core serial data output (SDAT) Position */
#define SMB_CONTROL_ESO_Msk                   (0x1U << SMB_CONTROL_ESO_Pos)                  /**< (SMB_CONTROL) The Enable Serial Output bit (ESO) enables and disables the SMB Controller Core serial data output (SDAT) Mask */
#define SMB_CONTROL_PIN_Pos                   (7)                                            /**< (SMB_CONTROL) The Pending Interrupt Not (PIN) bit serves as a software reset function. Writing the PIN bit to a logic '1' de-asserts all status bits except for the nBB bit which is not affected by the PIN bit. The PIN bit is a self-clearing bit. Writing this bit to a logic '0' has no effect. Position */
#define SMB_CONTROL_PIN_Msk                   (0x1U << SMB_CONTROL_PIN_Pos)                  /**< (SMB_CONTROL) The Pending Interrupt Not (PIN) bit serves as a software reset function. Writing the PIN bit to a logic '1' de-asserts all status bits except for the nBB bit which is not affected by the PIN bit. The PIN bit is a self-clearing bit. Writing this bit to a logic '0' has no effect. Mask */
#define SMB_CONTROL_Msk                       (0x000000CFUL)                                 /**< (SMB_CONTROL) Register Mask  */

/* -------- SMB_STATUS : (SMB Offset: 0x00) (R/ 32) Status Register -------- */

typedef union
{
  struct
  {
    uint32_t NBB:1;                     /**< bit:      0  The Bus Busy bit (NBB) is a read-only flag indicating when the bus is in use. A zero indicates that the bus is busy and access is not possible. */
    uint32_t LAB:1;                     /**< bit:      1  The Lost Arbitration Bit (LAB) is set when, in multi-master operation, arbitration is lost to another master on the bus */
    uint32_t AAS:1;                     /**< bit:      2  The Addressed As Slave bit (AAS) is valid only when PIN is asserted ('0'). When acting as slave, AAS is set when an incoming address over the bus matches the value in the Own Address Register or if the 'general call' address (00h) has been received */
    uint32_t LRB_AD0:1;                 /**< bit:      3  The Last Received Bit  or Address 0 (general call) bit (LRB/AD0) serves a dual function and is valid only while the PIN bit is asserted ('0').\n                When the AAS bit is not asserted ('0') (i.e., not addressed as a slave), the LRB/AD0 holds the value of the last received bit over the bus.\n                When the AAS bit is asserted ('1') (i.e., addressed as slave), the SMB Controller Core has been addressed as a slave. */
    uint32_t BER:1;                     /**< bit:      4  When Bus Error (BER) is asserted, a misplaced START or STOP condition or Bus Time-Outs have been detected. */
    uint32_t STS:1;                     /**< bit:      5  When in slave receiver mode, STS is asserted ('1') when an externally generated STOP condition is detected. Note that STS is used only in slave receiver mode. */
    uint32_t SAD:1;                     /**< bit:      6  SMBus Address Decoded (SAD)                   */
    uint32_t PIN:1;                     /**< bit:      7  Pending Interrupt bit                         */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __SMB_STATUS_bits_t;
#define SMB_STATUS_RESETVALUE               (0x00U)                                       /**<  (SMB_STATUS) Status Register  Reset Value */

#define SMB_STATUS_NBB_Pos                    (0)                                            /**< (SMB_STATUS) The Bus Busy bit (NBB) is a read-only flag indicating when the bus is in use. A zero indicates that the bus is busy and access is not possible. Position */
#define SMB_STATUS_NBB_Msk                    (0x1U << SMB_STATUS_NBB_Pos)                   /**< (SMB_STATUS) The Bus Busy bit (NBB) is a read-only flag indicating when the bus is in use. A zero indicates that the bus is busy and access is not possible. Mask */
#define SMB_STATUS_LAB_Pos                    (1)                                            /**< (SMB_STATUS) The Lost Arbitration Bit (LAB) is set when, in multi-master operation, arbitration is lost to another master on the bus Position */
#define SMB_STATUS_LAB_Msk                    (0x1U << SMB_STATUS_LAB_Pos)                   /**< (SMB_STATUS) The Lost Arbitration Bit (LAB) is set when, in multi-master operation, arbitration is lost to another master on the bus Mask */
#define SMB_STATUS_AAS_Pos                    (2)                                            /**< (SMB_STATUS) The Addressed As Slave bit (AAS) is valid only when PIN is asserted ('0'). When acting as slave, AAS is set when an incoming address over the bus matches the value in the Own Address Register or if the 'general call' address (00h) has been received Position */
#define SMB_STATUS_AAS_Msk                    (0x1U << SMB_STATUS_AAS_Pos)                   /**< (SMB_STATUS) The Addressed As Slave bit (AAS) is valid only when PIN is asserted ('0'). When acting as slave, AAS is set when an incoming address over the bus matches the value in the Own Address Register or if the 'general call' address (00h) has been received Mask */
#define SMB_STATUS_LRB_AD0_Pos                (3)                                            /**< (SMB_STATUS) The Last Received Bit  or Address 0 (general call) bit (LRB/AD0) serves a dual function and is valid only while the PIN bit is asserted ('0').\n                When the AAS bit is not asserted ('0') (i.e., not addressed as a slave), the LRB/AD0 holds the value of the last received bit over the bus.\n                When the AAS bit is asserted ('1') (i.e., addressed as slave), the SMB Controller Core has been addressed as a slave. Position */
#define SMB_STATUS_LRB_AD0_Msk                (0x1U << SMB_STATUS_LRB_AD0_Pos)               /**< (SMB_STATUS) The Last Received Bit  or Address 0 (general call) bit (LRB/AD0) serves a dual function and is valid only while the PIN bit is asserted ('0').\n                When the AAS bit is not asserted ('0') (i.e., not addressed as a slave), the LRB/AD0 holds the value of the last received bit over the bus.\n                When the AAS bit is asserted ('1') (i.e., addressed as slave), the SMB Controller Core has been addressed as a slave. Mask */
#define SMB_STATUS_BER_Pos                    (4)                                            /**< (SMB_STATUS) When Bus Error (BER) is asserted, a misplaced START or STOP condition or Bus Time-Outs have been detected. Position */
#define SMB_STATUS_BER_Msk                    (0x1U << SMB_STATUS_BER_Pos)                   /**< (SMB_STATUS) When Bus Error (BER) is asserted, a misplaced START or STOP condition or Bus Time-Outs have been detected. Mask */
#define SMB_STATUS_STS_Pos                    (5)                                            /**< (SMB_STATUS) When in slave receiver mode, STS is asserted ('1') when an externally generated STOP condition is detected. Note that STS is used only in slave receiver mode. Position */
#define SMB_STATUS_STS_Msk                    (0x1U << SMB_STATUS_STS_Pos)                   /**< (SMB_STATUS) When in slave receiver mode, STS is asserted ('1') when an externally generated STOP condition is detected. Note that STS is used only in slave receiver mode. Mask */
#define SMB_STATUS_SAD_Pos                    (6)                                            /**< (SMB_STATUS) SMBus Address Decoded (SAD) Position */
#define SMB_STATUS_SAD_Msk                    (0x1U << SMB_STATUS_SAD_Pos)                   /**< (SMB_STATUS) SMBus Address Decoded (SAD) Mask */
#define SMB_STATUS_PIN_Pos                    (7)                                            /**< (SMB_STATUS) Pending Interrupt bit Position */
#define SMB_STATUS_PIN_Msk                    (0x1U << SMB_STATUS_PIN_Pos)                   /**< (SMB_STATUS) Pending Interrupt bit Mask */
#define SMB_STATUS_Msk                        (0x000000FFUL)                                 /**< (SMB_STATUS) Register Mask  */

/* -------- SMB_OWN : (SMB Offset: 0x04) (R/W 32) Own Address Register\n           Note that the Data Register and Own Address fields are offset by one bit, so that programming Own Address 1 with a value of 55h will result in the value AAh being recognized as the SMB Controller Core slave address. -------- */

typedef union
{
  struct
  {
    uint32_t OWN_ADDRESS_1:7;           /**< bit:   0..6  The Own Address 1 bits configure one of the two addresses to which the SMB Controller Core will respond when addressed as a slave. */
    uint32_t :1;                        /**< bit:      7  Reserved                                      */
    uint32_t OWN_ADDRESS_2:7;           /**< bit:  8..14  The Own Address 2 bits configure one of the two addresses to which the SMB Controller Core will respond when addressed as a slave. */
    uint32_t :17;                       /**< bit: 15..31  Reserved                                      */
  };
  uint32_t w;
} __SMB_OWN_bits_t;
#define SMB_OWN_RESETVALUE                  (0x00U)                                       /**<  (SMB_OWN) Own Address Register\n           Note that the Data Register and Own Address fields are offset by one bit, so that programming Own Address 1 with a value of 55h will result in the value AAh being recognized as the SMB Controller Core slave address.  Reset Value */

#define SMB_OWN_OWN_ADDRESS_1_Pos             (0)                                            /**< (SMB_OWN) The Own Address 1 bits configure one of the two addresses to which the SMB Controller Core will respond when addressed as a slave. Position */
#define SMB_OWN_OWN_ADDRESS_1_Msk             (0x7FU << SMB_OWN_OWN_ADDRESS_1_Pos)           /**< (SMB_OWN) The Own Address 1 bits configure one of the two addresses to which the SMB Controller Core will respond when addressed as a slave. Mask */
#define SMB_OWN_OWN_ADDRESS_1(value)          (SMB_OWN_OWN_ADDRESS_1_Msk & ((value) << SMB_OWN_OWN_ADDRESS_1_Pos))
#define SMB_OWN_OWN_ADDRESS_2_Pos             (8)                                            /**< (SMB_OWN) The Own Address 2 bits configure one of the two addresses to which the SMB Controller Core will respond when addressed as a slave. Position */
#define SMB_OWN_OWN_ADDRESS_2_Msk             (0x7FU << SMB_OWN_OWN_ADDRESS_2_Pos)           /**< (SMB_OWN) The Own Address 2 bits configure one of the two addresses to which the SMB Controller Core will respond when addressed as a slave. Mask */
#define SMB_OWN_OWN_ADDRESS_2(value)          (SMB_OWN_OWN_ADDRESS_2_Msk & ((value) << SMB_OWN_OWN_ADDRESS_2_Pos))
#define SMB_OWN_Msk                           (0x00007F7FUL)                                 /**< (SMB_OWN) Register Mask  */

/* -------- SMB_DATA_REG : (SMB Offset: 0x08) (R/W 8) This register holds the data that are either shifted out to or shifted in from the I2C port. -------- */

typedef union
{
  uint8_t  w;
} __SMB_DATA_REG_bits_t;
#define SMB_DATA_REG_RESETVALUE             (0x00U)                                       /**<  (SMB_DATA_REG) This register holds the data that are either shifted out to or shifted in from the I2C port.  Reset Value */

#define SMB_DATA_REG_Msk                      (0x00000000UL)                                 /**< (SMB_DATA_REG) Register Mask  */

/* -------- SMB_MASTER_COMMAND : (SMB Offset: 0x0c) (R/W 32) SMBus Master Command Register -------- */

typedef union
{
  struct
  {
    uint32_t MRUN:1;                    /**< bit:      0  While this bit is 1, transfer bytes over SMBus. As long as WriteCount is non-zero, a byte from the Master Transmit Buffer is transmitted to the slave device and WriteCount is decremented. */
    uint32_t MPROCEED:1;                /**< bit:      1  When this bit is 0, the Master State Machine does not transition out of the IDLE or PAUSE states. When this bit is 1, the Master State Machine immediately transitions to the WAIT-BUSBUSY and MRUN-RECEIVE states, respectively. */
    uint32_t :6;                        /**< bit:   2..7  Reserved                                      */
    uint32_t START0:1;                  /**< bit:      8  If this bit is 1, send a Start bit on the SMBus before the first byte of the WriteCount is sent to the SMBus transmitter. */
    uint32_t STARTN:1;                  /**< bit:      9  If this bit is 1, send a Start bit just before the last byte of the WriteCount is sent to the SMBus transmitter. */
    uint32_t STOP:1;                    /**< bit:     10  If this bit is 1, send a Stop bit after the transaction completes. */
    uint32_t PEC_TERM:1;                /**< bit:     11  If this bit is 1, a copy of the PEC register is transmitted when WriteCount is 0. After the PEC register is read, both the PEC register and this bit are cleared to 0. */
    uint32_t READM:1;                   /**< bit:     12  If this bit is 1, then the ReadCount field is replaced by the byte that is read from the SMBus when ReadCount[7:0] is 1. After ReadCount[7:0] is updated, this bit is cleared to 0. */
    uint32_t READ_PEC:1;                /**< bit:     13  If this bit is 0, reading from the SMBus stops when ReadCount reaches 0. If this bit is 1, reading continues when ReadCount is 0 for one more byte. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t WRITE_COUNT:8;             /**< bit: 16..23  This field is a count of the number of bytes to transmit to the SMBus from the SMBus Master Transmit Buffer Register It is decremented by 1 for each byte written to the SMBus from the SMBus Master Transmit Buffer Register. */
    uint32_t READ_COUNT:8;              /**< bit: 24..31  This field is a count of the number of bytes to read in from the SMBus to the SMBus Master Receive Buffer Register and must be greater than 0 in order for the Master State Machine to initiate a read phase. It is decremented by 1 for each byte read from the SMBus into the SMBus Master Receive Buffer Register. It can be overwritten by the first byte read in from the SMBus. */
  };
  uint32_t w;
} __SMB_MASTER_COMMAND_bits_t;
#define SMB_MASTER_COMMAND_RESETVALUE       (0x00U)                                       /**<  (SMB_MASTER_COMMAND) SMBus Master Command Register  Reset Value */

#define SMB_MASTER_COMMAND_MRUN_Pos           (0)                                            /**< (SMB_MASTER_COMMAND) While this bit is 1, transfer bytes over SMBus. As long as WriteCount is non-zero, a byte from the Master Transmit Buffer is transmitted to the slave device and WriteCount is decremented. Position */
#define SMB_MASTER_COMMAND_MRUN_Msk           (0x1U << SMB_MASTER_COMMAND_MRUN_Pos)          /**< (SMB_MASTER_COMMAND) While this bit is 1, transfer bytes over SMBus. As long as WriteCount is non-zero, a byte from the Master Transmit Buffer is transmitted to the slave device and WriteCount is decremented. Mask */
#define SMB_MASTER_COMMAND_MPROCEED_Pos       (1)                                            /**< (SMB_MASTER_COMMAND) When this bit is 0, the Master State Machine does not transition out of the IDLE or PAUSE states. When this bit is 1, the Master State Machine immediately transitions to the WAIT-BUSBUSY and MRUN-RECEIVE states, respectively. Position */
#define SMB_MASTER_COMMAND_MPROCEED_Msk       (0x1U << SMB_MASTER_COMMAND_MPROCEED_Pos)      /**< (SMB_MASTER_COMMAND) When this bit is 0, the Master State Machine does not transition out of the IDLE or PAUSE states. When this bit is 1, the Master State Machine immediately transitions to the WAIT-BUSBUSY and MRUN-RECEIVE states, respectively. Mask */
#define SMB_MASTER_COMMAND_START0_Pos         (8)                                            /**< (SMB_MASTER_COMMAND) If this bit is 1, send a Start bit on the SMBus before the first byte of the WriteCount is sent to the SMBus transmitter. Position */
#define SMB_MASTER_COMMAND_START0_Msk         (0x1U << SMB_MASTER_COMMAND_START0_Pos)        /**< (SMB_MASTER_COMMAND) If this bit is 1, send a Start bit on the SMBus before the first byte of the WriteCount is sent to the SMBus transmitter. Mask */
#define SMB_MASTER_COMMAND_STARTN_Pos         (9)                                            /**< (SMB_MASTER_COMMAND) If this bit is 1, send a Start bit just before the last byte of the WriteCount is sent to the SMBus transmitter. Position */
#define SMB_MASTER_COMMAND_STARTN_Msk         (0x1U << SMB_MASTER_COMMAND_STARTN_Pos)        /**< (SMB_MASTER_COMMAND) If this bit is 1, send a Start bit just before the last byte of the WriteCount is sent to the SMBus transmitter. Mask */
#define SMB_MASTER_COMMAND_STOP_Pos           (10)                                           /**< (SMB_MASTER_COMMAND) If this bit is 1, send a Stop bit after the transaction completes. Position */
#define SMB_MASTER_COMMAND_STOP_Msk           (0x1U << SMB_MASTER_COMMAND_STOP_Pos)          /**< (SMB_MASTER_COMMAND) If this bit is 1, send a Stop bit after the transaction completes. Mask */
#define SMB_MASTER_COMMAND_PEC_TERM_Pos       (11)                                           /**< (SMB_MASTER_COMMAND) If this bit is 1, a copy of the PEC register is transmitted when WriteCount is 0. After the PEC register is read, both the PEC register and this bit are cleared to 0. Position */
#define SMB_MASTER_COMMAND_PEC_TERM_Msk       (0x1U << SMB_MASTER_COMMAND_PEC_TERM_Pos)      /**< (SMB_MASTER_COMMAND) If this bit is 1, a copy of the PEC register is transmitted when WriteCount is 0. After the PEC register is read, both the PEC register and this bit are cleared to 0. Mask */
#define SMB_MASTER_COMMAND_READM_Pos          (12)                                           /**< (SMB_MASTER_COMMAND) If this bit is 1, then the ReadCount field is replaced by the byte that is read from the SMBus when ReadCount[7:0] is 1. After ReadCount[7:0] is updated, this bit is cleared to 0. Position */
#define SMB_MASTER_COMMAND_READM_Msk          (0x1U << SMB_MASTER_COMMAND_READM_Pos)         /**< (SMB_MASTER_COMMAND) If this bit is 1, then the ReadCount field is replaced by the byte that is read from the SMBus when ReadCount[7:0] is 1. After ReadCount[7:0] is updated, this bit is cleared to 0. Mask */
#define SMB_MASTER_COMMAND_READ_PEC_Pos       (13)                                           /**< (SMB_MASTER_COMMAND) If this bit is 0, reading from the SMBus stops when ReadCount reaches 0. If this bit is 1, reading continues when ReadCount is 0 for one more byte. Position */
#define SMB_MASTER_COMMAND_READ_PEC_Msk       (0x1U << SMB_MASTER_COMMAND_READ_PEC_Pos)      /**< (SMB_MASTER_COMMAND) If this bit is 0, reading from the SMBus stops when ReadCount reaches 0. If this bit is 1, reading continues when ReadCount is 0 for one more byte. Mask */
#define SMB_MASTER_COMMAND_WRITE_COUNT_Pos    (16)                                           /**< (SMB_MASTER_COMMAND) This field is a count of the number of bytes to transmit to the SMBus from the SMBus Master Transmit Buffer Register It is decremented by 1 for each byte written to the SMBus from the SMBus Master Transmit Buffer Register. Position */
#define SMB_MASTER_COMMAND_WRITE_COUNT_Msk    (0xFFU << SMB_MASTER_COMMAND_WRITE_COUNT_Pos)  /**< (SMB_MASTER_COMMAND) This field is a count of the number of bytes to transmit to the SMBus from the SMBus Master Transmit Buffer Register It is decremented by 1 for each byte written to the SMBus from the SMBus Master Transmit Buffer Register. Mask */
#define SMB_MASTER_COMMAND_WRITE_COUNT(value) (SMB_MASTER_COMMAND_WRITE_COUNT_Msk & ((value) << SMB_MASTER_COMMAND_WRITE_COUNT_Pos))
#define SMB_MASTER_COMMAND_READ_COUNT_Pos     (24)                                           /**< (SMB_MASTER_COMMAND) This field is a count of the number of bytes to read in from the SMBus to the SMBus Master Receive Buffer Register and must be greater than 0 in order for the Master State Machine to initiate a read phase. It is decremented by 1 for each byte read from the SMBus into the SMBus Master Receive Buffer Register. It can be overwritten by the first byte read in from the SMBus. Position */
#define SMB_MASTER_COMMAND_READ_COUNT_Msk     (0xFFU << SMB_MASTER_COMMAND_READ_COUNT_Pos)   /**< (SMB_MASTER_COMMAND) This field is a count of the number of bytes to read in from the SMBus to the SMBus Master Receive Buffer Register and must be greater than 0 in order for the Master State Machine to initiate a read phase. It is decremented by 1 for each byte read from the SMBus into the SMBus Master Receive Buffer Register. It can be overwritten by the first byte read in from the SMBus. Mask */
#define SMB_MASTER_COMMAND_READ_COUNT(value)  (SMB_MASTER_COMMAND_READ_COUNT_Msk & ((value) << SMB_MASTER_COMMAND_READ_COUNT_Pos))
#define SMB_MASTER_COMMAND_Msk                (0xFFFF3F03UL)                                 /**< (SMB_MASTER_COMMAND) Register Mask  */

/* -------- SMB_SLAVE_COMMAND : (SMB Offset: 0x10) (R/W 32) SMBus Slave Command Register -------- */

typedef union
{
  struct
  {
    uint32_t SRUN:1;                    /**< bit:      0  Setting this bit to 1 enables the Slave State Machine to operate. */
    uint32_t SPROCEED:1;                /**< bit:      1  When this bit is 0, the Slave State Machine does not transition out of the IDLE, REPEAT_START_WRITE or REPEAT_START_READ states. When this bit is 1, the Slave State Machine immediately transitions to the START_WAIT, RECEIVE and TRANSMIT states, respectively. */
    uint32_t SLAVE_PEC:1;               /**< bit:      2  If Slave_WriteCount is 0 and Slave_PEC is 1 when the Master requests data, the PEC Register is copied to the DATA register. After the PEC Register is copied to the SMBus, the PEC Register is cleared and Slave_PEC is set to 0. */
    uint32_t :5;                        /**< bit:   3..7  Reserved                                      */
    uint32_t SLAVE_WRITECOUNT:8;        /**< bit:  8..15  This field is set to the number of bytes software expects to send to the Master. */
    uint32_t SLAVE_READCOUNT:8;         /**< bit: 16..23  This field is decremented each time a byte is copied from DATA to the SMBus Slave Receive Buffer Register. */
    uint32_t :8;                        /**< bit: 24..31  Reserved                                      */
  };
  uint32_t w;
} __SMB_SLAVE_COMMAND_bits_t;
#define SMB_SLAVE_COMMAND_RESETVALUE        (0x00U)                                       /**<  (SMB_SLAVE_COMMAND) SMBus Slave Command Register  Reset Value */

#define SMB_SLAVE_COMMAND_SRUN_Pos            (0)                                            /**< (SMB_SLAVE_COMMAND) Setting this bit to 1 enables the Slave State Machine to operate. Position */
#define SMB_SLAVE_COMMAND_SRUN_Msk            (0x1U << SMB_SLAVE_COMMAND_SRUN_Pos)           /**< (SMB_SLAVE_COMMAND) Setting this bit to 1 enables the Slave State Machine to operate. Mask */
#define SMB_SLAVE_COMMAND_SPROCEED_Pos        (1)                                            /**< (SMB_SLAVE_COMMAND) When this bit is 0, the Slave State Machine does not transition out of the IDLE, REPEAT_START_WRITE or REPEAT_START_READ states. When this bit is 1, the Slave State Machine immediately transitions to the START_WAIT, RECEIVE and TRANSMIT states, respectively. Position */
#define SMB_SLAVE_COMMAND_SPROCEED_Msk        (0x1U << SMB_SLAVE_COMMAND_SPROCEED_Pos)       /**< (SMB_SLAVE_COMMAND) When this bit is 0, the Slave State Machine does not transition out of the IDLE, REPEAT_START_WRITE or REPEAT_START_READ states. When this bit is 1, the Slave State Machine immediately transitions to the START_WAIT, RECEIVE and TRANSMIT states, respectively. Mask */
#define SMB_SLAVE_COMMAND_SLAVE_PEC_Pos       (2)                                            /**< (SMB_SLAVE_COMMAND) If Slave_WriteCount is 0 and Slave_PEC is 1 when the Master requests data, the PEC Register is copied to the DATA register. After the PEC Register is copied to the SMBus, the PEC Register is cleared and Slave_PEC is set to 0. Position */
#define SMB_SLAVE_COMMAND_SLAVE_PEC_Msk       (0x1U << SMB_SLAVE_COMMAND_SLAVE_PEC_Pos)      /**< (SMB_SLAVE_COMMAND) If Slave_WriteCount is 0 and Slave_PEC is 1 when the Master requests data, the PEC Register is copied to the DATA register. After the PEC Register is copied to the SMBus, the PEC Register is cleared and Slave_PEC is set to 0. Mask */
#define SMB_SLAVE_COMMAND_SLAVE_WRITECOUNT_Pos (8)                                            /**< (SMB_SLAVE_COMMAND) This field is set to the number of bytes software expects to send to the Master. Position */
#define SMB_SLAVE_COMMAND_SLAVE_WRITECOUNT_Msk (0xFFU << SMB_SLAVE_COMMAND_SLAVE_WRITECOUNT_Pos)  /**< (SMB_SLAVE_COMMAND) This field is set to the number of bytes software expects to send to the Master. Mask */
#define SMB_SLAVE_COMMAND_SLAVE_WRITECOUNT(value) (SMB_SLAVE_COMMAND_SLAVE_WRITECOUNT_Msk & ((value) << SMB_SLAVE_COMMAND_SLAVE_WRITECOUNT_Pos))
#define SMB_SLAVE_COMMAND_SLAVE_READCOUNT_Pos (16)                                           /**< (SMB_SLAVE_COMMAND) This field is decremented each time a byte is copied from DATA to the SMBus Slave Receive Buffer Register. Position */
#define SMB_SLAVE_COMMAND_SLAVE_READCOUNT_Msk (0xFFU << SMB_SLAVE_COMMAND_SLAVE_READCOUNT_Pos)  /**< (SMB_SLAVE_COMMAND) This field is decremented each time a byte is copied from DATA to the SMBus Slave Receive Buffer Register. Mask */
#define SMB_SLAVE_COMMAND_SLAVE_READCOUNT(value) (SMB_SLAVE_COMMAND_SLAVE_READCOUNT_Msk & ((value) << SMB_SLAVE_COMMAND_SLAVE_READCOUNT_Pos))
#define SMB_SLAVE_COMMAND_Msk                 (0x00FFFF07UL)                                 /**< (SMB_SLAVE_COMMAND) Register Mask  */

/* -------- SMB_PEC : (SMB Offset: 0x14) (R/W 32) Packet Error Check (PEC) Register -------- */

typedef union
{
  struct
  {
    uint32_t PEC:8;                     /**< bit:   0..7  The SMBus Packet Error Check (PEC) byte.      */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __SMB_PEC_bits_t;
#define SMB_PEC_RESETVALUE                  (0x00U)                                       /**<  (SMB_PEC) Packet Error Check (PEC) Register  Reset Value */

#define SMB_PEC_PEC_Pos                       (0)                                            /**< (SMB_PEC) The SMBus Packet Error Check (PEC) byte. Position */
#define SMB_PEC_PEC_Msk                       (0xFFU << SMB_PEC_PEC_Pos)                     /**< (SMB_PEC) The SMBus Packet Error Check (PEC) byte. Mask */
#define SMB_PEC_PEC(value)                    (SMB_PEC_PEC_Msk & ((value) << SMB_PEC_PEC_Pos))
#define SMB_PEC_Msk                           (0x000000FFUL)                                 /**< (SMB_PEC) Register Mask  */

/* -------- SMB_REPEATED_START_HOLD_TIME : (SMB Offset: 0x18) (R/W 32) Repeated Start Hold Time Register -------- */

typedef union
{
  struct
  {
    uint32_t RPT_START_HOLD_TIME:8;     /**< bit:   0..7  This is the value of the timing requirement tHd:Sta in the I2C specification for a repeated START bit. This is used to hold\n      the clock until the Hold Time for the repeated Start Bit has been satisfied. */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __SMB_REPEATED_START_HOLD_TIME_bits_t;
#define SMB_REPEATED_START_HOLD_TIME_RESETVALUE (0x4DU)                                       /**<  (SMB_REPEATED_START_HOLD_TIME) Repeated Start Hold Time Register  Reset Value */

#define SMB_REPEATED_START_HOLD_TIME_RPT_START_HOLD_TIME_Pos (0)                                            /**< (SMB_REPEATED_START_HOLD_TIME) This is the value of the timing requirement tHd:Sta in the I2C specification for a repeated START bit. This is used to hold\n      the clock until the Hold Time for the repeated Start Bit has been satisfied. Position */
#define SMB_REPEATED_START_HOLD_TIME_RPT_START_HOLD_TIME_Msk (0xFFU << SMB_REPEATED_START_HOLD_TIME_RPT_START_HOLD_TIME_Pos)  /**< (SMB_REPEATED_START_HOLD_TIME) This is the value of the timing requirement tHd:Sta in the I2C specification for a repeated START bit. This is used to hold\n      the clock until the Hold Time for the repeated Start Bit has been satisfied. Mask */
#define SMB_REPEATED_START_HOLD_TIME_RPT_START_HOLD_TIME(value) (SMB_REPEATED_START_HOLD_TIME_RPT_START_HOLD_TIME_Msk & ((value) << SMB_REPEATED_START_HOLD_TIME_RPT_START_HOLD_TIME_Pos))
#define SMB_REPEATED_START_HOLD_TIME_Msk      (0x000000FFUL)                                 /**< (SMB_REPEATED_START_HOLD_TIME) Register Mask  */

/* -------- SMB_COMPLETION : (SMB Offset: 0x20) (R/W 32) Completion Register -------- */

typedef union
{
  struct
  {
    uint32_t :2;                        /**< bit:   0..1  Reserved                                      */
    uint32_t DTEN:1;                    /**< bit:      2  When DTEN is asserted ('1'), Device Time-out checking is enabled. When DTEN is not asserted ('0'), Device Time-out checking is disabled. */
    uint32_t MCEN:1;                    /**< bit:      3  When MCEN is asserted ('1'), Master Cumulative Time-Out checking is enabled. When MCEN is not asserted ('0'), Master Cumulative Time-Out checking is disabled. */
    uint32_t SCEN:1;                    /**< bit:      4  When SCEN is asserted ('1'), Slave Cumulative Time-Out checking is enabled. When SCEN is not asserted ('0'), Slave Cumulative Time-Out checking is disabled. */
    uint32_t BIDEN:1;                   /**< bit:      5  When BIDEN is asserted ('1'), Bus Idle Detect Time-Out checking is enabled. When BIDEN is not asserted ('0'), Bus Idle Detect Time-Out checking is disabled. */
    uint32_t TIMERR:1;                  /**< bit:      6  The Time-out Error Detected bit (TIMERR) is asserted ('1') whenever any of the enabled time-out error detect status bits (CHDH, CHDL, SCTO, MCTO and DTO) are asserted. */
    uint32_t :1;                        /**< bit:      7  Reserved                                      */
    uint32_t DTO:1;                     /**< bit:      8  DTO is the Device Time-out bit. (R/WC)        */
    uint32_t MCTO:1;                    /**< bit:      9  MCTO is the Master Cumulative Time-out bit. (R/WC) */
    uint32_t SCTO:1;                    /**< bit:     10  SCTO is the Slave Cumulative Time-out bit(R/WC) */
    uint32_t CHDL:1;                    /**< bit:     11  CHDL is the clock high time-out detect bit(R/WC) */
    uint32_t CHDH:1;                    /**< bit:     12  CHDH is the bus idle time-out detect bit(R/WC) */
    uint32_t BER:1;                     /**< bit:     13  If this bit is 1, the BER bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) */
    uint32_t LAB:1;                     /**< bit:     14  If this bit is 1, the LAB bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) */
    uint32_t :1;                        /**< bit:     15  Reserved                                      */
    uint32_t SNAKR:1;                   /**< bit:     16  If this bit is 1, the Slave state machine sent a NACK to the transmitting Master while the Slave was receiving data from the SMBus interface. */
    uint32_t STR:1;                     /**< bit:     17  0: Slave has just finished the receive phase of a transaction. \n                1: Slave has just finished the transmit phase of a transaction. */
    uint32_t :1;                        /**< bit:     18  Reserved                                      */
    uint32_t SPROT:1;                   /**< bit:     19  If this bit is 1, the WriteCount[7:0] counter in the Slave state machine either counted down to 0 before the Master sent a NACK signal, or the Slave received a NACK signal before the counter reached 0. */
    uint32_t REPEAT_READ:1;             /**< bit:     20  If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 1, indicating that the Master requested a Read operation. */
    uint32_t REPEAT_WRITE:1;            /**< bit:     21  If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 0, indicating that the Master requested a Write operation. */
    uint32_t :2;                        /**< bit: 22..23  Reserved                                      */
    uint32_t MNAKX:1;                   /**< bit:     24  If this bit is 1, the Master state machine received a NACK from the receiving Slave while the Master was transmitting data over the SMBus interface. (R/WC) */
    uint32_t MTR:1;                     /**< bit:     25  0: Master has just finished the receive phase of a transaction. \n                1: Master has just finished the transmit phase of a transaction. */
    uint32_t :3;                        /**< bit: 26..28  Reserved                                      */
    uint32_t IDLE:1;                    /**< bit:     29  This bit is set when the I2C bus becomes idle (on the rising edge of nBB). (R/WC) */
    uint32_t MDONE:1;                   /**< bit:     30  If this bit is 1, Master State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect. (R/WC) */
    uint32_t SDONE:1;                   /**< bit:     31  If this bit is 1, Slave State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect.(R/WC) */
  };
  uint32_t w;
} __SMB_COMPLETION_bits_t;
#define SMB_COMPLETION_RESETVALUE           (0x00U)                                       /**<  (SMB_COMPLETION) Completion Register  Reset Value */

#define SMB_COMPLETION_DTEN_Pos               (2)                                            /**< (SMB_COMPLETION) When DTEN is asserted ('1'), Device Time-out checking is enabled. When DTEN is not asserted ('0'), Device Time-out checking is disabled. Position */
#define SMB_COMPLETION_DTEN_Msk               (0x1U << SMB_COMPLETION_DTEN_Pos)              /**< (SMB_COMPLETION) When DTEN is asserted ('1'), Device Time-out checking is enabled. When DTEN is not asserted ('0'), Device Time-out checking is disabled. Mask */
#define SMB_COMPLETION_MCEN_Pos               (3)                                            /**< (SMB_COMPLETION) When MCEN is asserted ('1'), Master Cumulative Time-Out checking is enabled. When MCEN is not asserted ('0'), Master Cumulative Time-Out checking is disabled. Position */
#define SMB_COMPLETION_MCEN_Msk               (0x1U << SMB_COMPLETION_MCEN_Pos)              /**< (SMB_COMPLETION) When MCEN is asserted ('1'), Master Cumulative Time-Out checking is enabled. When MCEN is not asserted ('0'), Master Cumulative Time-Out checking is disabled. Mask */
#define SMB_COMPLETION_SCEN_Pos               (4)                                            /**< (SMB_COMPLETION) When SCEN is asserted ('1'), Slave Cumulative Time-Out checking is enabled. When SCEN is not asserted ('0'), Slave Cumulative Time-Out checking is disabled. Position */
#define SMB_COMPLETION_SCEN_Msk               (0x1U << SMB_COMPLETION_SCEN_Pos)              /**< (SMB_COMPLETION) When SCEN is asserted ('1'), Slave Cumulative Time-Out checking is enabled. When SCEN is not asserted ('0'), Slave Cumulative Time-Out checking is disabled. Mask */
#define SMB_COMPLETION_BIDEN_Pos              (5)                                            /**< (SMB_COMPLETION) When BIDEN is asserted ('1'), Bus Idle Detect Time-Out checking is enabled. When BIDEN is not asserted ('0'), Bus Idle Detect Time-Out checking is disabled. Position */
#define SMB_COMPLETION_BIDEN_Msk              (0x1U << SMB_COMPLETION_BIDEN_Pos)             /**< (SMB_COMPLETION) When BIDEN is asserted ('1'), Bus Idle Detect Time-Out checking is enabled. When BIDEN is not asserted ('0'), Bus Idle Detect Time-Out checking is disabled. Mask */
#define SMB_COMPLETION_TIMERR_Pos             (6)                                            /**< (SMB_COMPLETION) The Time-out Error Detected bit (TIMERR) is asserted ('1') whenever any of the enabled time-out error detect status bits (CHDH, CHDL, SCTO, MCTO and DTO) are asserted. Position */
#define SMB_COMPLETION_TIMERR_Msk             (0x1U << SMB_COMPLETION_TIMERR_Pos)            /**< (SMB_COMPLETION) The Time-out Error Detected bit (TIMERR) is asserted ('1') whenever any of the enabled time-out error detect status bits (CHDH, CHDL, SCTO, MCTO and DTO) are asserted. Mask */
#define SMB_COMPLETION_DTO_Pos                (8)                                            /**< (SMB_COMPLETION) DTO is the Device Time-out bit. (R/WC) Position */
#define SMB_COMPLETION_DTO_Msk                (0x1U << SMB_COMPLETION_DTO_Pos)               /**< (SMB_COMPLETION) DTO is the Device Time-out bit. (R/WC) Mask */
#define SMB_COMPLETION_MCTO_Pos               (9)                                            /**< (SMB_COMPLETION) MCTO is the Master Cumulative Time-out bit. (R/WC) Position */
#define SMB_COMPLETION_MCTO_Msk               (0x1U << SMB_COMPLETION_MCTO_Pos)              /**< (SMB_COMPLETION) MCTO is the Master Cumulative Time-out bit. (R/WC) Mask */
#define SMB_COMPLETION_SCTO_Pos               (10)                                           /**< (SMB_COMPLETION) SCTO is the Slave Cumulative Time-out bit(R/WC) Position */
#define SMB_COMPLETION_SCTO_Msk               (0x1U << SMB_COMPLETION_SCTO_Pos)              /**< (SMB_COMPLETION) SCTO is the Slave Cumulative Time-out bit(R/WC) Mask */
#define SMB_COMPLETION_CHDL_Pos               (11)                                           /**< (SMB_COMPLETION) CHDL is the clock high time-out detect bit(R/WC) Position */
#define SMB_COMPLETION_CHDL_Msk               (0x1U << SMB_COMPLETION_CHDL_Pos)              /**< (SMB_COMPLETION) CHDL is the clock high time-out detect bit(R/WC) Mask */
#define SMB_COMPLETION_CHDH_Pos               (12)                                           /**< (SMB_COMPLETION) CHDH is the bus idle time-out detect bit(R/WC) Position */
#define SMB_COMPLETION_CHDH_Msk               (0x1U << SMB_COMPLETION_CHDH_Pos)              /**< (SMB_COMPLETION) CHDH is the bus idle time-out detect bit(R/WC) Mask */
#define SMB_COMPLETION_BER_Pos                (13)                                           /**< (SMB_COMPLETION) If this bit is 1, the BER bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Position */
#define SMB_COMPLETION_BER_Msk                (0x1U << SMB_COMPLETION_BER_Pos)               /**< (SMB_COMPLETION) If this bit is 1, the BER bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Mask */
#define SMB_COMPLETION_LAB_Pos                (14)                                           /**< (SMB_COMPLETION) If this bit is 1, the LAB bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Position */
#define SMB_COMPLETION_LAB_Msk                (0x1U << SMB_COMPLETION_LAB_Pos)               /**< (SMB_COMPLETION) If this bit is 1, the LAB bit in the Status register was set while either the Slave state machine or the Master state machine was not in the Idle state.(R/WC) Mask */
#define SMB_COMPLETION_SNAKR_Pos              (16)                                           /**< (SMB_COMPLETION) If this bit is 1, the Slave state machine sent a NACK to the transmitting Master while the Slave was receiving data from the SMBus interface. Position */
#define SMB_COMPLETION_SNAKR_Msk              (0x1U << SMB_COMPLETION_SNAKR_Pos)             /**< (SMB_COMPLETION) If this bit is 1, the Slave state machine sent a NACK to the transmitting Master while the Slave was receiving data from the SMBus interface. Mask */
#define SMB_COMPLETION_STR_Pos                (17)                                           /**< (SMB_COMPLETION) 0: Slave has just finished the receive phase of a transaction. \n                1: Slave has just finished the transmit phase of a transaction. Position */
#define SMB_COMPLETION_STR_Msk                (0x1U << SMB_COMPLETION_STR_Pos)               /**< (SMB_COMPLETION) 0: Slave has just finished the receive phase of a transaction. \n                1: Slave has just finished the transmit phase of a transaction. Mask */
#define SMB_COMPLETION_SPROT_Pos              (19)                                           /**< (SMB_COMPLETION) If this bit is 1, the WriteCount[7:0] counter in the Slave state machine either counted down to 0 before the Master sent a NACK signal, or the Slave received a NACK signal before the counter reached 0. Position */
#define SMB_COMPLETION_SPROT_Msk              (0x1U << SMB_COMPLETION_SPROT_Pos)             /**< (SMB_COMPLETION) If this bit is 1, the WriteCount[7:0] counter in the Slave state machine either counted down to 0 before the Master sent a NACK signal, or the Slave received a NACK signal before the counter reached 0. Mask */
#define SMB_COMPLETION_REPEAT_READ_Pos        (20)                                           /**< (SMB_COMPLETION) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 1, indicating that the Master requested a Read operation. Position */
#define SMB_COMPLETION_REPEAT_READ_Msk        (0x1U << SMB_COMPLETION_REPEAT_READ_Pos)       /**< (SMB_COMPLETION) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 1, indicating that the Master requested a Read operation. Mask */
#define SMB_COMPLETION_REPEAT_WRITE_Pos       (21)                                           /**< (SMB_COMPLETION) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 0, indicating that the Master requested a Write operation. Position */
#define SMB_COMPLETION_REPEAT_WRITE_Msk       (0x1U << SMB_COMPLETION_REPEAT_WRITE_Pos)      /**< (SMB_COMPLETION) If this bit is 1, the Slave State Machine stopped because it detected a Repeat Start bit, with bit[0] of the byte containing the slave address equal to 0, indicating that the Master requested a Write operation. Mask */
#define SMB_COMPLETION_MNAKX_Pos              (24)                                           /**< (SMB_COMPLETION) If this bit is 1, the Master state machine received a NACK from the receiving Slave while the Master was transmitting data over the SMBus interface. (R/WC) Position */
#define SMB_COMPLETION_MNAKX_Msk              (0x1U << SMB_COMPLETION_MNAKX_Pos)             /**< (SMB_COMPLETION) If this bit is 1, the Master state machine received a NACK from the receiving Slave while the Master was transmitting data over the SMBus interface. (R/WC) Mask */
#define SMB_COMPLETION_MTR_Pos                (25)                                           /**< (SMB_COMPLETION) 0: Master has just finished the receive phase of a transaction. \n                1: Master has just finished the transmit phase of a transaction. Position */
#define SMB_COMPLETION_MTR_Msk                (0x1U << SMB_COMPLETION_MTR_Pos)               /**< (SMB_COMPLETION) 0: Master has just finished the receive phase of a transaction. \n                1: Master has just finished the transmit phase of a transaction. Mask */
#define SMB_COMPLETION_IDLE_Pos               (29)                                           /**< (SMB_COMPLETION) This bit is set when the I2C bus becomes idle (on the rising edge of nBB). (R/WC) Position */
#define SMB_COMPLETION_IDLE_Msk               (0x1U << SMB_COMPLETION_IDLE_Pos)              /**< (SMB_COMPLETION) This bit is set when the I2C bus becomes idle (on the rising edge of nBB). (R/WC) Mask */
#define SMB_COMPLETION_MDONE_Pos              (30)                                           /**< (SMB_COMPLETION) If this bit is 1, Master State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect. (R/WC) Position */
#define SMB_COMPLETION_MDONE_Msk              (0x1U << SMB_COMPLETION_MDONE_Pos)             /**< (SMB_COMPLETION) If this bit is 1, Master State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect. (R/WC) Mask */
#define SMB_COMPLETION_SDONE_Pos              (31)                                           /**< (SMB_COMPLETION) If this bit is 1, Slave State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect.(R/WC) Position */
#define SMB_COMPLETION_SDONE_Msk              (0x1U << SMB_COMPLETION_SDONE_Pos)             /**< (SMB_COMPLETION) If this bit is 1, Slave State machine completed operation and returned to the Idle state. It is cleared when written with a 1. Writes of a 0 have no effect.(R/WC) Mask */
#define SMB_COMPLETION_Msk                    (0xE33B7F7CUL)                                 /**< (SMB_COMPLETION) Register Mask  */

/* -------- SMB_IDLE_SCALING : (SMB Offset: 0x24) (R/W 32) Idle Scaling Register -------- */

typedef union
{
  struct
  {
    uint32_t FAIR_BUS_IDLE_MIN:12;      /**< bit:  0..11  This field defines the number of ticks of the baud clock required to satisfy the fairness protocol. The default value for this field sets the idle window to 31us, which is the appropriate value for a 100 KHz bus */
    uint32_t :4;                        /**< bit: 12..15  Reserved                                      */
    uint32_t FAIR_IDLE_DELAY:12;        /**< bit: 16..27  This field defines the number of ticks of the baud clock required to program the delay. The default value for this field sets the delay period to 32us, which is the appropriate value for a 100 KHz bus */
    uint32_t :4;                        /**< bit: 28..31  Reserved                                      */
  };
  uint32_t w;
} __SMB_IDLE_SCALING_bits_t;
#define SMB_IDLE_SCALING_RESETVALUE         (0x1FC01EDU)                                  /**<  (SMB_IDLE_SCALING) Idle Scaling Register  Reset Value */

#define SMB_IDLE_SCALING_FAIR_BUS_IDLE_MIN_Pos (0)                                            /**< (SMB_IDLE_SCALING) This field defines the number of ticks of the baud clock required to satisfy the fairness protocol. The default value for this field sets the idle window to 31us, which is the appropriate value for a 100 KHz bus Position */
#define SMB_IDLE_SCALING_FAIR_BUS_IDLE_MIN_Msk (0xFFFU << SMB_IDLE_SCALING_FAIR_BUS_IDLE_MIN_Pos)  /**< (SMB_IDLE_SCALING) This field defines the number of ticks of the baud clock required to satisfy the fairness protocol. The default value for this field sets the idle window to 31us, which is the appropriate value for a 100 KHz bus Mask */
#define SMB_IDLE_SCALING_FAIR_BUS_IDLE_MIN(value) (SMB_IDLE_SCALING_FAIR_BUS_IDLE_MIN_Msk & ((value) << SMB_IDLE_SCALING_FAIR_BUS_IDLE_MIN_Pos))
#define SMB_IDLE_SCALING_FAIR_IDLE_DELAY_Pos  (16)                                           /**< (SMB_IDLE_SCALING) This field defines the number of ticks of the baud clock required to program the delay. The default value for this field sets the delay period to 32us, which is the appropriate value for a 100 KHz bus Position */
#define SMB_IDLE_SCALING_FAIR_IDLE_DELAY_Msk  (0xFFFU << SMB_IDLE_SCALING_FAIR_IDLE_DELAY_Pos)  /**< (SMB_IDLE_SCALING) This field defines the number of ticks of the baud clock required to program the delay. The default value for this field sets the delay period to 32us, which is the appropriate value for a 100 KHz bus Mask */
#define SMB_IDLE_SCALING_FAIR_IDLE_DELAY(value) (SMB_IDLE_SCALING_FAIR_IDLE_DELAY_Msk & ((value) << SMB_IDLE_SCALING_FAIR_IDLE_DELAY_Pos))
#define SMB_IDLE_SCALING_Msk                  (0x0FFF0FFFUL)                                 /**< (SMB_IDLE_SCALING) Register Mask  */

/* -------- SMB_CONFIGURATION : (SMB Offset: 0x28) (R/W 32) Configuration Register -------- */

typedef union
{
  struct
  {
    uint32_t PORT_SEL:4;                /**< bit:   0..3  The PORT SEL [3:0] bits determine which one of 16 possible bus ports apply to the active 2-wire SDAT and SCLK bus pair. */
    uint32_t TCEN:1;                    /**< bit:      4  When the Timing Check Enable bit (TCEN) is asserted ('1'), Bus Time-Outs are enabled */
    uint32_t SLOW_CLOCK:1;              /**< bit:      5  When this bit is 1, the base period for the Bus Clock Register is multiplied by 4, and thus the frequency is divided by 4. */
    uint32_t TEST:1;                    /**< bit:      6  Must be always written with 0.                */
    uint32_t PECEN:1;                   /**< bit:      7  When the PEC Enable bit (PECEN) is asserted ('1'), Hardware PEC Support is enabled */
    uint32_t FEN:1;                     /**< bit:      8  Input filtering enable. Input filtering is required by the I2C specification if external filtering is not available.\n      1=Input filtering is enabled; 0=Input filtering is disabled. */
    uint32_t RESET:1;                   /**< bit:      9  When RESET is asserted ('1'), all logic and registers except for the RESET bit itself are initialized to the power-on default state. */
    uint32_t ENAB:1;                    /**< bit:     10  When ENAB (Enable) is not asserted ('0') (default), the SMB Controller Core is disabled and in the lowest power consumption state (Disabled State).\n                The ENAB bit must be asserted ('1') for normal operation. */
    uint32_t DSA:1;                     /**< bit:     11  0: Slave Address I2C Compatibility Mode (default). 1: SMBus Address Decode Mode */
    uint32_t FAIR:1;                    /**< bit:     12  If this bit is 1, the MCTP Fairness protocol is in effect. */
    uint32_t TEST0:1;                   /**< bit:     13  Must be always written with 0.                */
    uint32_t GC_DIS:1;                  /**< bit:     14  This is the General Call Disable bit.\n                0: the response to the General Call address as a slave is enabled\n                1: the response to the General Call address as a slave is disabled. */
    uint32_t CFG_PROMISCUOUS:1;         /**< bit:     15  This bit define the Mode of SM Bus Controler Mode of operation.         0= Normal Operation.         1=  Promiscuous Mode Enable. */
    uint32_t FLUSH_SXBUF:1;             /**< bit:     16  A write of a 1 to this bit forces the SMBus Slave Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. */
    uint32_t FLUSH_SRBUF:1;             /**< bit:     17  A write of a 1 to this bit forces the SMBus Slave Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. */
    uint32_t FLUSH_MXBUF:1;             /**< bit:     18  A write of a 1 to this bit forces the SMBus Master Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. */
    uint32_t FLUSH_MRBUF:1;             /**< bit:     19  A write of a 1 to this bit forces the SMBus Master Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. */
    uint32_t :8;                        /**< bit: 20..27  Reserved                                      */
    uint32_t EN_AAS:1;                  /**< bit:     28  0: Disable the AAS, 1: Enable the AAS Interrupt */
    uint32_t ENIDI:1;                   /**< bit:     29  If this bit is 1, the Idle interrupt is enabled. If this bit is 0, the Idle interrupt is disabled. */
    uint32_t ENMI:1;                    /**< bit:     30  If this bit is 1, the Master Done interrupt is enabled. If this bit is 0, the Master Done interrupt is disabled. */
    uint32_t ENSI:1;                    /**< bit:     31  If this bit is 1, the Slave Done interrupt is enabled. If this bit is 0, the Slave Done interrupt is disabled */
  };
  uint32_t w;
} __SMB_CONFIGURATION_bits_t;
#define SMB_CONFIGURATION_RESETVALUE        (0x00U)                                       /**<  (SMB_CONFIGURATION) Configuration Register  Reset Value */

#define SMB_CONFIGURATION_PORT_SEL_Pos        (0)                                            /**< (SMB_CONFIGURATION) The PORT SEL [3:0] bits determine which one of 16 possible bus ports apply to the active 2-wire SDAT and SCLK bus pair. Position */
#define SMB_CONFIGURATION_PORT_SEL_Msk        (0xFU << SMB_CONFIGURATION_PORT_SEL_Pos)       /**< (SMB_CONFIGURATION) The PORT SEL [3:0] bits determine which one of 16 possible bus ports apply to the active 2-wire SDAT and SCLK bus pair. Mask */
#define SMB_CONFIGURATION_PORT_SEL(value)     (SMB_CONFIGURATION_PORT_SEL_Msk & ((value) << SMB_CONFIGURATION_PORT_SEL_Pos))
#define SMB_CONFIGURATION_TCEN_Pos            (4)                                            /**< (SMB_CONFIGURATION) When the Timing Check Enable bit (TCEN) is asserted ('1'), Bus Time-Outs are enabled Position */
#define SMB_CONFIGURATION_TCEN_Msk            (0x1U << SMB_CONFIGURATION_TCEN_Pos)           /**< (SMB_CONFIGURATION) When the Timing Check Enable bit (TCEN) is asserted ('1'), Bus Time-Outs are enabled Mask */
#define SMB_CONFIGURATION_SLOW_CLOCK_Pos      (5)                                            /**< (SMB_CONFIGURATION) When this bit is 1, the base period for the Bus Clock Register is multiplied by 4, and thus the frequency is divided by 4. Position */
#define SMB_CONFIGURATION_SLOW_CLOCK_Msk      (0x1U << SMB_CONFIGURATION_SLOW_CLOCK_Pos)     /**< (SMB_CONFIGURATION) When this bit is 1, the base period for the Bus Clock Register is multiplied by 4, and thus the frequency is divided by 4. Mask */
#define SMB_CONFIGURATION_TEST_Pos            (6)                                            /**< (SMB_CONFIGURATION) Must be always written with 0. Position */
#define SMB_CONFIGURATION_TEST_Msk            (0x1U << SMB_CONFIGURATION_TEST_Pos)           /**< (SMB_CONFIGURATION) Must be always written with 0. Mask */
#define SMB_CONFIGURATION_PECEN_Pos           (7)                                            /**< (SMB_CONFIGURATION) When the PEC Enable bit (PECEN) is asserted ('1'), Hardware PEC Support is enabled Position */
#define SMB_CONFIGURATION_PECEN_Msk           (0x1U << SMB_CONFIGURATION_PECEN_Pos)          /**< (SMB_CONFIGURATION) When the PEC Enable bit (PECEN) is asserted ('1'), Hardware PEC Support is enabled Mask */
#define SMB_CONFIGURATION_FEN_Pos             (8)                                            /**< (SMB_CONFIGURATION) Input filtering enable. Input filtering is required by the I2C specification if external filtering is not available.\n      1=Input filtering is enabled; 0=Input filtering is disabled. Position */
#define SMB_CONFIGURATION_FEN_Msk             (0x1U << SMB_CONFIGURATION_FEN_Pos)            /**< (SMB_CONFIGURATION) Input filtering enable. Input filtering is required by the I2C specification if external filtering is not available.\n      1=Input filtering is enabled; 0=Input filtering is disabled. Mask */
#define SMB_CONFIGURATION_RESET_Pos           (9)                                            /**< (SMB_CONFIGURATION) When RESET is asserted ('1'), all logic and registers except for the RESET bit itself are initialized to the power-on default state. Position */
#define SMB_CONFIGURATION_RESET_Msk           (0x1U << SMB_CONFIGURATION_RESET_Pos)          /**< (SMB_CONFIGURATION) When RESET is asserted ('1'), all logic and registers except for the RESET bit itself are initialized to the power-on default state. Mask */
#define SMB_CONFIGURATION_ENAB_Pos            (10)                                           /**< (SMB_CONFIGURATION) When ENAB (Enable) is not asserted ('0') (default), the SMB Controller Core is disabled and in the lowest power consumption state (Disabled State).\n                The ENAB bit must be asserted ('1') for normal operation. Position */
#define SMB_CONFIGURATION_ENAB_Msk            (0x1U << SMB_CONFIGURATION_ENAB_Pos)           /**< (SMB_CONFIGURATION) When ENAB (Enable) is not asserted ('0') (default), the SMB Controller Core is disabled and in the lowest power consumption state (Disabled State).\n                The ENAB bit must be asserted ('1') for normal operation. Mask */
#define SMB_CONFIGURATION_DSA_Pos             (11)                                           /**< (SMB_CONFIGURATION) 0: Slave Address I2C Compatibility Mode (default). 1: SMBus Address Decode Mode Position */
#define SMB_CONFIGURATION_DSA_Msk             (0x1U << SMB_CONFIGURATION_DSA_Pos)            /**< (SMB_CONFIGURATION) 0: Slave Address I2C Compatibility Mode (default). 1: SMBus Address Decode Mode Mask */
#define SMB_CONFIGURATION_FAIR_Pos            (12)                                           /**< (SMB_CONFIGURATION) If this bit is 1, the MCTP Fairness protocol is in effect. Position */
#define SMB_CONFIGURATION_FAIR_Msk            (0x1U << SMB_CONFIGURATION_FAIR_Pos)           /**< (SMB_CONFIGURATION) If this bit is 1, the MCTP Fairness protocol is in effect. Mask */
#define SMB_CONFIGURATION_TEST0_Pos           (13)                                           /**< (SMB_CONFIGURATION) Must be always written with 0. Position */
#define SMB_CONFIGURATION_TEST0_Msk           (0x1U << SMB_CONFIGURATION_TEST0_Pos)          /**< (SMB_CONFIGURATION) Must be always written with 0. Mask */
#define SMB_CONFIGURATION_GC_DIS_Pos          (14)                                           /**< (SMB_CONFIGURATION) This is the General Call Disable bit.\n                0: the response to the General Call address as a slave is enabled\n                1: the response to the General Call address as a slave is disabled. Position */
#define SMB_CONFIGURATION_GC_DIS_Msk          (0x1U << SMB_CONFIGURATION_GC_DIS_Pos)         /**< (SMB_CONFIGURATION) This is the General Call Disable bit.\n                0: the response to the General Call address as a slave is enabled\n                1: the response to the General Call address as a slave is disabled. Mask */
#define SMB_CONFIGURATION_CFG_PROMISCUOUS_Pos (15)                                           /**< (SMB_CONFIGURATION) This bit define the Mode of SM Bus Controler Mode of operation.         0= Normal Operation.         1=  Promiscuous Mode Enable. Position */
#define SMB_CONFIGURATION_CFG_PROMISCUOUS_Msk (0x1U << SMB_CONFIGURATION_CFG_PROMISCUOUS_Pos)  /**< (SMB_CONFIGURATION) This bit define the Mode of SM Bus Controler Mode of operation.         0= Normal Operation.         1=  Promiscuous Mode Enable. Mask */
#define SMB_CONFIGURATION_FLUSH_SXBUF_Pos     (16)                                           /**< (SMB_CONFIGURATION) A write of a 1 to this bit forces the SMBus Slave Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Position */
#define SMB_CONFIGURATION_FLUSH_SXBUF_Msk     (0x1U << SMB_CONFIGURATION_FLUSH_SXBUF_Pos)    /**< (SMB_CONFIGURATION) A write of a 1 to this bit forces the SMBus Slave Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Mask */
#define SMB_CONFIGURATION_FLUSH_SRBUF_Pos     (17)                                           /**< (SMB_CONFIGURATION) A write of a 1 to this bit forces the SMBus Slave Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Position */
#define SMB_CONFIGURATION_FLUSH_SRBUF_Msk     (0x1U << SMB_CONFIGURATION_FLUSH_SRBUF_Pos)    /**< (SMB_CONFIGURATION) A write of a 1 to this bit forces the SMBus Slave Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Mask */
#define SMB_CONFIGURATION_FLUSH_MXBUF_Pos     (18)                                           /**< (SMB_CONFIGURATION) A write of a 1 to this bit forces the SMBus Master Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Position */
#define SMB_CONFIGURATION_FLUSH_MXBUF_Msk     (0x1U << SMB_CONFIGURATION_FLUSH_MXBUF_Pos)    /**< (SMB_CONFIGURATION) A write of a 1 to this bit forces the SMBus Master Transmit Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Mask */
#define SMB_CONFIGURATION_FLUSH_MRBUF_Pos     (19)                                           /**< (SMB_CONFIGURATION) A write of a 1 to this bit forces the SMBus Master Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Position */
#define SMB_CONFIGURATION_FLUSH_MRBUF_Msk     (0x1U << SMB_CONFIGURATION_FLUSH_MRBUF_Pos)    /**< (SMB_CONFIGURATION) A write of a 1 to this bit forces the SMBus Master Receive Buffer Register to be marked empty. A write of 0 has no effect. This is a self-clearing bit. Mask */
#define SMB_CONFIGURATION_EN_AAS_Pos          (28)                                           /**< (SMB_CONFIGURATION) 0: Disable the AAS, 1: Enable the AAS Interrupt Position */
#define SMB_CONFIGURATION_EN_AAS_Msk          (0x1U << SMB_CONFIGURATION_EN_AAS_Pos)         /**< (SMB_CONFIGURATION) 0: Disable the AAS, 1: Enable the AAS Interrupt Mask */
#define SMB_CONFIGURATION_ENIDI_Pos           (29)                                           /**< (SMB_CONFIGURATION) If this bit is 1, the Idle interrupt is enabled. If this bit is 0, the Idle interrupt is disabled. Position */
#define SMB_CONFIGURATION_ENIDI_Msk           (0x1U << SMB_CONFIGURATION_ENIDI_Pos)          /**< (SMB_CONFIGURATION) If this bit is 1, the Idle interrupt is enabled. If this bit is 0, the Idle interrupt is disabled. Mask */
#define SMB_CONFIGURATION_ENMI_Pos            (30)                                           /**< (SMB_CONFIGURATION) If this bit is 1, the Master Done interrupt is enabled. If this bit is 0, the Master Done interrupt is disabled. Position */
#define SMB_CONFIGURATION_ENMI_Msk            (0x1U << SMB_CONFIGURATION_ENMI_Pos)           /**< (SMB_CONFIGURATION) If this bit is 1, the Master Done interrupt is enabled. If this bit is 0, the Master Done interrupt is disabled. Mask */
#define SMB_CONFIGURATION_ENSI_Pos            (31)                                           /**< (SMB_CONFIGURATION) If this bit is 1, the Slave Done interrupt is enabled. If this bit is 0, the Slave Done interrupt is disabled Position */
#define SMB_CONFIGURATION_ENSI_Msk            (0x1U << SMB_CONFIGURATION_ENSI_Pos)           /**< (SMB_CONFIGURATION) If this bit is 1, the Slave Done interrupt is enabled. If this bit is 0, the Slave Done interrupt is disabled Mask */
#define SMB_CONFIGURATION_Msk                 (0xF00FFFFFUL)                                 /**< (SMB_CONFIGURATION) Register Mask  */

/* -------- SMB_BUS_CLOCK : (SMB Offset: 0x2c) (R/W 32) Bus Clock Register -------- */

typedef union
{
  struct
  {
    uint32_t LOW_PERIOD:8;              /**< bit:   0..7  This field defines the number of I2C Baud Clock periods that make up the low phase of the I2C/SMBus bus clock. */
    uint32_t HIGH_PERIOD:8;             /**< bit:  8..15  This field defines the number of I2C Baud Clock periods that make up the high phase of the I2C/SMBus bus clock. */
    uint32_t :16;                       /**< bit: 16..31  Reserved                                      */
  };
  uint32_t w;
} __SMB_BUS_CLOCK_bits_t;
#define SMB_BUS_CLOCK_RESETVALUE            (0x4F4FU)                                     /**<  (SMB_BUS_CLOCK) Bus Clock Register  Reset Value */

#define SMB_BUS_CLOCK_LOW_PERIOD_Pos          (0)                                            /**< (SMB_BUS_CLOCK) This field defines the number of I2C Baud Clock periods that make up the low phase of the I2C/SMBus bus clock. Position */
#define SMB_BUS_CLOCK_LOW_PERIOD_Msk          (0xFFU << SMB_BUS_CLOCK_LOW_PERIOD_Pos)        /**< (SMB_BUS_CLOCK) This field defines the number of I2C Baud Clock periods that make up the low phase of the I2C/SMBus bus clock. Mask */
#define SMB_BUS_CLOCK_LOW_PERIOD(value)       (SMB_BUS_CLOCK_LOW_PERIOD_Msk & ((value) << SMB_BUS_CLOCK_LOW_PERIOD_Pos))
#define SMB_BUS_CLOCK_HIGH_PERIOD_Pos         (8)                                            /**< (SMB_BUS_CLOCK) This field defines the number of I2C Baud Clock periods that make up the high phase of the I2C/SMBus bus clock. Position */
#define SMB_BUS_CLOCK_HIGH_PERIOD_Msk         (0xFFU << SMB_BUS_CLOCK_HIGH_PERIOD_Pos)       /**< (SMB_BUS_CLOCK) This field defines the number of I2C Baud Clock periods that make up the high phase of the I2C/SMBus bus clock. Mask */
#define SMB_BUS_CLOCK_HIGH_PERIOD(value)      (SMB_BUS_CLOCK_HIGH_PERIOD_Msk & ((value) << SMB_BUS_CLOCK_HIGH_PERIOD_Pos))
#define SMB_BUS_CLOCK_Msk                     (0x0000FFFFUL)                                 /**< (SMB_BUS_CLOCK) Register Mask  */

/* -------- SMB_BLOCK_ID : (SMB Offset: 0x30) (R/ 8) Block ID Register -------- */

typedef union
{
  struct
  {
    uint8_t  ID:8;                      /**< bit:   0..7  Block ID.                                     */
  };
  uint8_t  w;
} __SMB_BLOCK_ID_bits_t;
#define SMB_BLOCK_ID_RESETVALUE             (0x00U)                                       /**<  (SMB_BLOCK_ID) Block ID Register  Reset Value */

#define SMB_BLOCK_ID_ID_Pos                   (0)                                            /**< (SMB_BLOCK_ID) Block ID. Position */
#define SMB_BLOCK_ID_ID_Msk                   (0xFFU << SMB_BLOCK_ID_ID_Pos)                 /**< (SMB_BLOCK_ID) Block ID. Mask */
#define SMB_BLOCK_ID_ID(value)                (SMB_BLOCK_ID_ID_Msk & ((value) << SMB_BLOCK_ID_ID_Pos))
#define SMB_BLOCK_ID_Msk                      (0x000000FFUL)                                 /**< (SMB_BLOCK_ID) Register Mask  */

/* -------- SMB_REVISION : (SMB Offset: 0x34) (R/ 8) Revision Register -------- */

typedef union
{
  struct
  {
    uint8_t  REVISION:8;                /**< bit:   0..7  Block Revision Number                         */
  };
  uint8_t  w;
} __SMB_REVISION_bits_t;
#define SMB_REVISION_RESETVALUE             (0x00U)                                       /**<  (SMB_REVISION) Revision Register  Reset Value */

#define SMB_REVISION_REVISION_Pos             (0)                                            /**< (SMB_REVISION) Block Revision Number Position */
#define SMB_REVISION_REVISION_Msk             (0xFFU << SMB_REVISION_REVISION_Pos)           /**< (SMB_REVISION) Block Revision Number Mask */
#define SMB_REVISION_REVISION(value)          (SMB_REVISION_REVISION_Msk & ((value) << SMB_REVISION_REVISION_Pos))
#define SMB_REVISION_Msk                      (0x000000FFUL)                                 /**< (SMB_REVISION) Register Mask  */

/* -------- SMB_BIT_BANG_CONTROL : (SMB Offset: 0x38) (R/W 32) Bit-Bang Control Register -------- */

typedef union
{
  struct
  {
    uint32_t BBEN:1;                    /**< bit:      0  Bit-Bang Mode Enable. 0 - Bit Bang Mode Disabled. 1 - Bit Bang Mode Enabled */
    uint32_t CLDIR:1;                   /**< bit:      1  Bit-Bang Clock Direction. The CLDIR bit controls the direction of SCLK. 0 - Input, 1 - Output */
    uint32_t DADIR:1;                   /**< bit:      2  Bit-Bang Data Direction. The DADIR bit controls the direction of SDAT. 0 - Input. 1 - Output */
    uint32_t BBCLK:1;                   /**< bit:      3  Bit-Bang Clock. The BBCLK bit controls the state of SCLK when BBEN = and CLDIR = '1' */
    uint32_t BBDAT:1;                   /**< bit:      4  Bit-Bang Data. The BBDAT bit controls the state of SDAT when BBEN = and DADIR = '1' */
    uint32_t BBCLKI:1;                  /**< bit:      5  Bit-Bang Clock In. The BBCLKI bit always returns the state of SCLK. */
    uint32_t BBDATI:1;                  /**< bit:      6  Bit-Bang Data In. The BBDATI bit always returns the state of SDAT */
    uint32_t :25;                       /**< bit:  7..31  Reserved                                      */
  };
  uint32_t w;
} __SMB_BIT_BANG_CONTROL_bits_t;
#define SMB_BIT_BANG_CONTROL_RESETVALUE     (0x60U)                                       /**<  (SMB_BIT_BANG_CONTROL) Bit-Bang Control Register  Reset Value */

#define SMB_BIT_BANG_CONTROL_BBEN_Pos         (0)                                            /**< (SMB_BIT_BANG_CONTROL) Bit-Bang Mode Enable. 0 - Bit Bang Mode Disabled. 1 - Bit Bang Mode Enabled Position */
#define SMB_BIT_BANG_CONTROL_BBEN_Msk         (0x1U << SMB_BIT_BANG_CONTROL_BBEN_Pos)        /**< (SMB_BIT_BANG_CONTROL) Bit-Bang Mode Enable. 0 - Bit Bang Mode Disabled. 1 - Bit Bang Mode Enabled Mask */
#define SMB_BIT_BANG_CONTROL_CLDIR_Pos        (1)                                            /**< (SMB_BIT_BANG_CONTROL) Bit-Bang Clock Direction. The CLDIR bit controls the direction of SCLK. 0 - Input, 1 - Output Position */
#define SMB_BIT_BANG_CONTROL_CLDIR_Msk        (0x1U << SMB_BIT_BANG_CONTROL_CLDIR_Pos)       /**< (SMB_BIT_BANG_CONTROL) Bit-Bang Clock Direction. The CLDIR bit controls the direction of SCLK. 0 - Input, 1 - Output Mask */
#define SMB_BIT_BANG_CONTROL_DADIR_Pos        (2)                                            /**< (SMB_BIT_BANG_CONTROL) Bit-Bang Data Direction. The DADIR bit controls the direction of SDAT. 0 - Input. 1 - Output Position */
#define SMB_BIT_BANG_CONTROL_DADIR_Msk        (0x1U << SMB_BIT_BANG_CONTROL_DADIR_Pos)       /**< (SMB_BIT_BANG_CONTROL) Bit-Bang Data Direction. The DADIR bit controls the direction of SDAT. 0 - Input. 1 - Output Mask */
#define SMB_BIT_BANG_CONTROL_BBCLK_Pos        (3)                                            /**< (SMB_BIT_BANG_CONTROL) Bit-Bang Clock. The BBCLK bit controls the state of SCLK when BBEN = and CLDIR = '1' Position */
#define SMB_BIT_BANG_CONTROL_BBCLK_Msk        (0x1U << SMB_BIT_BANG_CONTROL_BBCLK_Pos)       /**< (SMB_BIT_BANG_CONTROL) Bit-Bang Clock. The BBCLK bit controls the state of SCLK when BBEN = and CLDIR = '1' Mask */
#define SMB_BIT_BANG_CONTROL_BBDAT_Pos        (4)                                            /**< (SMB_BIT_BANG_CONTROL) Bit-Bang Data. The BBDAT bit controls the state of SDAT when BBEN = and DADIR = '1' Position */
#define SMB_BIT_BANG_CONTROL_BBDAT_Msk        (0x1U << SMB_BIT_BANG_CONTROL_BBDAT_Pos)       /**< (SMB_BIT_BANG_CONTROL) Bit-Bang Data. The BBDAT bit controls the state of SDAT when BBEN = and DADIR = '1' Mask */
#define SMB_BIT_BANG_CONTROL_BBCLKI_Pos       (5)                                            /**< (SMB_BIT_BANG_CONTROL) Bit-Bang Clock In. The BBCLKI bit always returns the state of SCLK. Position */
#define SMB_BIT_BANG_CONTROL_BBCLKI_Msk       (0x1U << SMB_BIT_BANG_CONTROL_BBCLKI_Pos)      /**< (SMB_BIT_BANG_CONTROL) Bit-Bang Clock In. The BBCLKI bit always returns the state of SCLK. Mask */
#define SMB_BIT_BANG_CONTROL_BBDATI_Pos       (6)                                            /**< (SMB_BIT_BANG_CONTROL) Bit-Bang Data In. The BBDATI bit always returns the state of SDAT Position */
#define SMB_BIT_BANG_CONTROL_BBDATI_Msk       (0x1U << SMB_BIT_BANG_CONTROL_BBDATI_Pos)      /**< (SMB_BIT_BANG_CONTROL) Bit-Bang Data In. The BBDATI bit always returns the state of SDAT Mask */
#define SMB_BIT_BANG_CONTROL_Msk              (0x0000007FUL)                                 /**< (SMB_BIT_BANG_CONTROL) Register Mask  */

/* -------- SMB_TEST : (SMB Offset: 0x3c) (R/ 8) Test -------- */

typedef union
{
  struct
  {
    uint8_t  TEST:8;                    /**< bit:   0..7  This register must not be written, or undesirable results may occur. */
  };
  uint8_t  w;
} __SMB_TEST_bits_t;
#define SMB_TEST_RESETVALUE                 (0x00U)                                       /**<  (SMB_TEST) Test  Reset Value */

#define SMB_TEST_TEST_Pos                     (0)                                            /**< (SMB_TEST) This register must not be written, or undesirable results may occur. Position */
#define SMB_TEST_TEST_Msk                     (0xFFU << SMB_TEST_TEST_Pos)                   /**< (SMB_TEST) This register must not be written, or undesirable results may occur. Mask */
#define SMB_TEST_TEST(value)                  (SMB_TEST_TEST_Msk & ((value) << SMB_TEST_TEST_Pos))
#define SMB_TEST_Msk                          (0x000000FFUL)                                 /**< (SMB_TEST) Register Mask  */

/* -------- SMB_DATA_TIMING : (SMB Offset: 0x40) (R/W 32) Data Timing Register -------- */

typedef union
{
  struct
  {
    uint32_t DATA_HOLD:8;               /**< bit:   0..7  The Data Hold [7:0] timer determines the SDAT hold time following SCLK driven low. */
    uint32_t RESTART_SETUP:8;           /**< bit:  8..15  The Restart Setup [7:0] timer determines the SDAT setup time from the rising edge of SCLK for a repeated START condition. */
    uint32_t STOP_SETUP:8;              /**< bit: 16..23  The Stop Setup [7:0] timer determines the SDAT setup time from the rising edge of SCLK for a STOP condition. */
    uint32_t FIRST_START_HOLD:8;        /**< bit: 24..31  This field determines the SCL hold time following SDA driven low during the first START bit in a transfer. It is the parameter\n      THD:STA in the I2C Specification for an initial START bit. Repeated START hold time is determined by the Repeated START Hold Time Register. */
  };
  uint32_t w;
} __SMB_DATA_TIMING_bits_t;
#define SMB_DATA_TIMING_RESETVALUE          (0xC4D5006U)                                  /**<  (SMB_DATA_TIMING) Data Timing Register  Reset Value */

#define SMB_DATA_TIMING_DATA_HOLD_Pos         (0)                                            /**< (SMB_DATA_TIMING) The Data Hold [7:0] timer determines the SDAT hold time following SCLK driven low. Position */
#define SMB_DATA_TIMING_DATA_HOLD_Msk         (0xFFU << SMB_DATA_TIMING_DATA_HOLD_Pos)       /**< (SMB_DATA_TIMING) The Data Hold [7:0] timer determines the SDAT hold time following SCLK driven low. Mask */
#define SMB_DATA_TIMING_DATA_HOLD(value)      (SMB_DATA_TIMING_DATA_HOLD_Msk & ((value) << SMB_DATA_TIMING_DATA_HOLD_Pos))
#define SMB_DATA_TIMING_RESTART_SETUP_Pos     (8)                                            /**< (SMB_DATA_TIMING) The Restart Setup [7:0] timer determines the SDAT setup time from the rising edge of SCLK for a repeated START condition. Position */
#define SMB_DATA_TIMING_RESTART_SETUP_Msk     (0xFFU << SMB_DATA_TIMING_RESTART_SETUP_Pos)   /**< (SMB_DATA_TIMING) The Restart Setup [7:0] timer determines the SDAT setup time from the rising edge of SCLK for a repeated START condition. Mask */
#define SMB_DATA_TIMING_RESTART_SETUP(value)  (SMB_DATA_TIMING_RESTART_SETUP_Msk & ((value) << SMB_DATA_TIMING_RESTART_SETUP_Pos))
#define SMB_DATA_TIMING_STOP_SETUP_Pos        (16)                                           /**< (SMB_DATA_TIMING) The Stop Setup [7:0] timer determines the SDAT setup time from the rising edge of SCLK for a STOP condition. Position */
#define SMB_DATA_TIMING_STOP_SETUP_Msk        (0xFFU << SMB_DATA_TIMING_STOP_SETUP_Pos)      /**< (SMB_DATA_TIMING) The Stop Setup [7:0] timer determines the SDAT setup time from the rising edge of SCLK for a STOP condition. Mask */
#define SMB_DATA_TIMING_STOP_SETUP(value)     (SMB_DATA_TIMING_STOP_SETUP_Msk & ((value) << SMB_DATA_TIMING_STOP_SETUP_Pos))
#define SMB_DATA_TIMING_FIRST_START_HOLD_Pos  (24)                                           /**< (SMB_DATA_TIMING) This field determines the SCL hold time following SDA driven low during the first START bit in a transfer. It is the parameter\n      THD:STA in the I2C Specification for an initial START bit. Repeated START hold time is determined by the Repeated START Hold Time Register. Position */
#define SMB_DATA_TIMING_FIRST_START_HOLD_Msk  (0xFFU << SMB_DATA_TIMING_FIRST_START_HOLD_Pos)  /**< (SMB_DATA_TIMING) This field determines the SCL hold time following SDA driven low during the first START bit in a transfer. It is the parameter\n      THD:STA in the I2C Specification for an initial START bit. Repeated START hold time is determined by the Repeated START Hold Time Register. Mask */
#define SMB_DATA_TIMING_FIRST_START_HOLD(value) (SMB_DATA_TIMING_FIRST_START_HOLD_Msk & ((value) << SMB_DATA_TIMING_FIRST_START_HOLD_Pos))
#define SMB_DATA_TIMING_Msk                   (0xFFFFFFFFUL)                                 /**< (SMB_DATA_TIMING) Register Mask  */

/* -------- SMB_TIME_OUT_SCALING : (SMB Offset: 0x44) (R/W 32) Time-Out Scaling Register -------- */

typedef union
{
  struct
  {
    uint32_t CLOCK_HIGH_TIME_OUT:8;     /**< bit:   0..7  Clock High time out period = Clock High Time-Out [7:0] x Baud_Clock_Period x 2 */
    uint32_t SLAVE_CUM_TIME_OUT:8;      /**< bit:  8..15  Slave Cumulative Time-Out duration = Slave Cum Time-Out [7:0] x Baud_Clock_Period x 1024 */
    uint32_t MASTER_CUM_TIME_OUT:8;     /**< bit: 16..23  Master Cumulative Time-Out duration = Master Cum Time-Out [7:0] x Baud_Clock_Period x 512 */
    uint32_t BUS_IDLE_MIN:8;            /**< bit: 24..31  Bus Idle Minimum time = Bus Idle Min [7:0] x Baud_Clock_Period */
  };
  uint32_t w;
} __SMB_TIME_OUT_SCALING_bits_t;
#define SMB_TIME_OUT_SCALING_RESETVALUE     (0x4B9CC2C7U)                                 /**<  (SMB_TIME_OUT_SCALING) Time-Out Scaling Register  Reset Value */

#define SMB_TIME_OUT_SCALING_CLOCK_HIGH_TIME_OUT_Pos (0)                                            /**< (SMB_TIME_OUT_SCALING) Clock High time out period = Clock High Time-Out [7:0] x Baud_Clock_Period x 2 Position */
#define SMB_TIME_OUT_SCALING_CLOCK_HIGH_TIME_OUT_Msk (0xFFU << SMB_TIME_OUT_SCALING_CLOCK_HIGH_TIME_OUT_Pos)  /**< (SMB_TIME_OUT_SCALING) Clock High time out period = Clock High Time-Out [7:0] x Baud_Clock_Period x 2 Mask */
#define SMB_TIME_OUT_SCALING_CLOCK_HIGH_TIME_OUT(value) (SMB_TIME_OUT_SCALING_CLOCK_HIGH_TIME_OUT_Msk & ((value) << SMB_TIME_OUT_SCALING_CLOCK_HIGH_TIME_OUT_Pos))
#define SMB_TIME_OUT_SCALING_SLAVE_CUM_TIME_OUT_Pos (8)                                            /**< (SMB_TIME_OUT_SCALING) Slave Cumulative Time-Out duration = Slave Cum Time-Out [7:0] x Baud_Clock_Period x 1024 Position */
#define SMB_TIME_OUT_SCALING_SLAVE_CUM_TIME_OUT_Msk (0xFFU << SMB_TIME_OUT_SCALING_SLAVE_CUM_TIME_OUT_Pos)  /**< (SMB_TIME_OUT_SCALING) Slave Cumulative Time-Out duration = Slave Cum Time-Out [7:0] x Baud_Clock_Period x 1024 Mask */
#define SMB_TIME_OUT_SCALING_SLAVE_CUM_TIME_OUT(value) (SMB_TIME_OUT_SCALING_SLAVE_CUM_TIME_OUT_Msk & ((value) << SMB_TIME_OUT_SCALING_SLAVE_CUM_TIME_OUT_Pos))
#define SMB_TIME_OUT_SCALING_MASTER_CUM_TIME_OUT_Pos (16)                                           /**< (SMB_TIME_OUT_SCALING) Master Cumulative Time-Out duration = Master Cum Time-Out [7:0] x Baud_Clock_Period x 512 Position */
#define SMB_TIME_OUT_SCALING_MASTER_CUM_TIME_OUT_Msk (0xFFU << SMB_TIME_OUT_SCALING_MASTER_CUM_TIME_OUT_Pos)  /**< (SMB_TIME_OUT_SCALING) Master Cumulative Time-Out duration = Master Cum Time-Out [7:0] x Baud_Clock_Period x 512 Mask */
#define SMB_TIME_OUT_SCALING_MASTER_CUM_TIME_OUT(value) (SMB_TIME_OUT_SCALING_MASTER_CUM_TIME_OUT_Msk & ((value) << SMB_TIME_OUT_SCALING_MASTER_CUM_TIME_OUT_Pos))
#define SMB_TIME_OUT_SCALING_BUS_IDLE_MIN_Pos (24)                                           /**< (SMB_TIME_OUT_SCALING) Bus Idle Minimum time = Bus Idle Min [7:0] x Baud_Clock_Period Position */
#define SMB_TIME_OUT_SCALING_BUS_IDLE_MIN_Msk (0xFFU << SMB_TIME_OUT_SCALING_BUS_IDLE_MIN_Pos)  /**< (SMB_TIME_OUT_SCALING) Bus Idle Minimum time = Bus Idle Min [7:0] x Baud_Clock_Period Mask */
#define SMB_TIME_OUT_SCALING_BUS_IDLE_MIN(value) (SMB_TIME_OUT_SCALING_BUS_IDLE_MIN_Msk & ((value) << SMB_TIME_OUT_SCALING_BUS_IDLE_MIN_Pos))
#define SMB_TIME_OUT_SCALING_Msk              (0xFFFFFFFFUL)                                 /**< (SMB_TIME_OUT_SCALING) Register Mask  */

/* -------- SMB_SLAVE_TRANSMIT_BUFFER : (SMB Offset: 0x48) (R/W 32) SMBus Slave Transmit Buffer Register -------- */

typedef union
{
  struct
  {
    uint32_t SLAVE_TRANSMIT_BUFFER:8;   /**< bit:   0..7  SLAVE_TRANSMIT_BUFFER                         */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __SMB_SLAVE_TRANSMIT_BUFFER_bits_t;
#define SMB_SLAVE_TRANSMIT_BUFFER_RESETVALUE (0x00U)                                       /**<  (SMB_SLAVE_TRANSMIT_BUFFER) SMBus Slave Transmit Buffer Register  Reset Value */

#define SMB_SLAVE_TRANSMIT_BUFFER_SLAVE_TRANSMIT_BUFFER_Pos (0)                                            /**< (SMB_SLAVE_TRANSMIT_BUFFER) SLAVE_TRANSMIT_BUFFER Position */
#define SMB_SLAVE_TRANSMIT_BUFFER_SLAVE_TRANSMIT_BUFFER_Msk (0xFFU << SMB_SLAVE_TRANSMIT_BUFFER_SLAVE_TRANSMIT_BUFFER_Pos)  /**< (SMB_SLAVE_TRANSMIT_BUFFER) SLAVE_TRANSMIT_BUFFER Mask */
#define SMB_SLAVE_TRANSMIT_BUFFER_SLAVE_TRANSMIT_BUFFER(value) (SMB_SLAVE_TRANSMIT_BUFFER_SLAVE_TRANSMIT_BUFFER_Msk & ((value) << SMB_SLAVE_TRANSMIT_BUFFER_SLAVE_TRANSMIT_BUFFER_Pos))
#define SMB_SLAVE_TRANSMIT_BUFFER_Msk         (0x000000FFUL)                                 /**< (SMB_SLAVE_TRANSMIT_BUFFER) Register Mask  */

/* -------- SMB_SLAVE_RECEIVE_BUFFER : (SMB Offset: 0x4c) (R/W 32) SMBus Slave Receive Buffer Register -------- */

typedef union
{
  struct
  {
    uint32_t SLAVE_RECEIVE_BUFFER:8;    /**< bit:   0..7  SLAVE_RECEIVE_BUFFER                          */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __SMB_SLAVE_RECEIVE_BUFFER_bits_t;
#define SMB_SLAVE_RECEIVE_BUFFER_RESETVALUE (0x00U)                                       /**<  (SMB_SLAVE_RECEIVE_BUFFER) SMBus Slave Receive Buffer Register  Reset Value */

#define SMB_SLAVE_RECEIVE_BUFFER_SLAVE_RECEIVE_BUFFER_Pos (0)                                            /**< (SMB_SLAVE_RECEIVE_BUFFER) SLAVE_RECEIVE_BUFFER Position */
#define SMB_SLAVE_RECEIVE_BUFFER_SLAVE_RECEIVE_BUFFER_Msk (0xFFU << SMB_SLAVE_RECEIVE_BUFFER_SLAVE_RECEIVE_BUFFER_Pos)  /**< (SMB_SLAVE_RECEIVE_BUFFER) SLAVE_RECEIVE_BUFFER Mask */
#define SMB_SLAVE_RECEIVE_BUFFER_SLAVE_RECEIVE_BUFFER(value) (SMB_SLAVE_RECEIVE_BUFFER_SLAVE_RECEIVE_BUFFER_Msk & ((value) << SMB_SLAVE_RECEIVE_BUFFER_SLAVE_RECEIVE_BUFFER_Pos))
#define SMB_SLAVE_RECEIVE_BUFFER_Msk          (0x000000FFUL)                                 /**< (SMB_SLAVE_RECEIVE_BUFFER) Register Mask  */

/* -------- SMB_MASTER_TRANSMIT_BUFER : (SMB Offset: 0x50) (R/W 32) SMBus Master Transmit Buffer Register -------- */

typedef union
{
  struct
  {
    uint32_t MASTER_TRANSMIT_BUFFER:8;  /**< bit:   0..7  MASTER_TRANSMIT_BUFFER                        */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __SMB_MASTER_TRANSMIT_BUFER_bits_t;
#define SMB_MASTER_TRANSMIT_BUFER_RESETVALUE (0x00U)                                       /**<  (SMB_MASTER_TRANSMIT_BUFER) SMBus Master Transmit Buffer Register  Reset Value */

#define SMB_MASTER_TRANSMIT_BUFER_MASTER_TRANSMIT_BUFFER_Pos (0)                                            /**< (SMB_MASTER_TRANSMIT_BUFER) MASTER_TRANSMIT_BUFFER Position */
#define SMB_MASTER_TRANSMIT_BUFER_MASTER_TRANSMIT_BUFFER_Msk (0xFFU << SMB_MASTER_TRANSMIT_BUFER_MASTER_TRANSMIT_BUFFER_Pos)  /**< (SMB_MASTER_TRANSMIT_BUFER) MASTER_TRANSMIT_BUFFER Mask */
#define SMB_MASTER_TRANSMIT_BUFER_MASTER_TRANSMIT_BUFFER(value) (SMB_MASTER_TRANSMIT_BUFER_MASTER_TRANSMIT_BUFFER_Msk & ((value) << SMB_MASTER_TRANSMIT_BUFER_MASTER_TRANSMIT_BUFFER_Pos))
#define SMB_MASTER_TRANSMIT_BUFER_Msk         (0x000000FFUL)                                 /**< (SMB_MASTER_TRANSMIT_BUFER) Register Mask  */

/* -------- SMB_MASTER_RECEIVE_BUFFER : (SMB Offset: 0x54) (R/W 32) SMBus Master Receive Buffer Register -------- */

typedef union
{
  struct
  {
    uint32_t MASTER_RECEIVE_BUFFER:8;   /**< bit:   0..7  MASTER_RECEIVE_BUFFER                         */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __SMB_MASTER_RECEIVE_BUFFER_bits_t;
#define SMB_MASTER_RECEIVE_BUFFER_RESETVALUE (0x00U)                                       /**<  (SMB_MASTER_RECEIVE_BUFFER) SMBus Master Receive Buffer Register  Reset Value */

#define SMB_MASTER_RECEIVE_BUFFER_MASTER_RECEIVE_BUFFER_Pos (0)                                            /**< (SMB_MASTER_RECEIVE_BUFFER) MASTER_RECEIVE_BUFFER Position */
#define SMB_MASTER_RECEIVE_BUFFER_MASTER_RECEIVE_BUFFER_Msk (0xFFU << SMB_MASTER_RECEIVE_BUFFER_MASTER_RECEIVE_BUFFER_Pos)  /**< (SMB_MASTER_RECEIVE_BUFFER) MASTER_RECEIVE_BUFFER Mask */
#define SMB_MASTER_RECEIVE_BUFFER_MASTER_RECEIVE_BUFFER(value) (SMB_MASTER_RECEIVE_BUFFER_MASTER_RECEIVE_BUFFER_Msk & ((value) << SMB_MASTER_RECEIVE_BUFFER_MASTER_RECEIVE_BUFFER_Pos))
#define SMB_MASTER_RECEIVE_BUFFER_Msk         (0x000000FFUL)                                 /**< (SMB_MASTER_RECEIVE_BUFFER) Register Mask  */

/* -------- SMB_WAKE_STATUS : (SMB Offset: 0x60) (R/W 32) WAKE STATUS Register -------- */

typedef union
{
  struct
  {
    uint32_t START_BIT_DETECTION:1;     /**< bit:      0  This bit is set to '1' when a START bit is detected while the controller is enabled. This bit is cleared to '0' when\n      written with a '1'. Writes of '0' have no effect. (R/WC) */
    uint32_t :31;                       /**< bit:  1..31  Reserved                                      */
  };
  uint32_t w;
} __SMB_WAKE_STATUS_bits_t;
#define SMB_WAKE_STATUS_RESETVALUE          (0x00U)                                       /**<  (SMB_WAKE_STATUS) WAKE STATUS Register  Reset Value */

#define SMB_WAKE_STATUS_START_BIT_DETECTION_Pos (0)                                            /**< (SMB_WAKE_STATUS) This bit is set to '1' when a START bit is detected while the controller is enabled. This bit is cleared to '0' when\n      written with a '1'. Writes of '0' have no effect. (R/WC) Position */
#define SMB_WAKE_STATUS_START_BIT_DETECTION_Msk (0x1U << SMB_WAKE_STATUS_START_BIT_DETECTION_Pos)  /**< (SMB_WAKE_STATUS) This bit is set to '1' when a START bit is detected while the controller is enabled. This bit is cleared to '0' when\n      written with a '1'. Writes of '0' have no effect. (R/WC) Mask */
#define SMB_WAKE_STATUS_Msk                   (0x00000001UL)                                 /**< (SMB_WAKE_STATUS) Register Mask  */

/* -------- SMB_WAKE_ENABLE : (SMB Offset: 0x64) (R/W 32) WAKE ENABLE Register -------- */

typedef union
{
  struct
  {
    uint32_t START_DETECT_INT_EN:1;     /**< bit:      0  Enable Start Bit Detection Interrupt. The Start Bit Detection Interrupt is wake-capable.\n      1=Start Bit Detection Interrupt enabled; 0=Start Bit Detection Interrupt disabled */
    uint32_t :31;                       /**< bit:  1..31  Reserved                                      */
  };
  uint32_t w;
} __SMB_WAKE_ENABLE_bits_t;
#define SMB_WAKE_ENABLE_RESETVALUE          (0x00U)                                       /**<  (SMB_WAKE_ENABLE) WAKE ENABLE Register  Reset Value */

#define SMB_WAKE_ENABLE_START_DETECT_INT_EN_Pos (0)                                            /**< (SMB_WAKE_ENABLE) Enable Start Bit Detection Interrupt. The Start Bit Detection Interrupt is wake-capable.\n      1=Start Bit Detection Interrupt enabled; 0=Start Bit Detection Interrupt disabled Position */
#define SMB_WAKE_ENABLE_START_DETECT_INT_EN_Msk (0x1U << SMB_WAKE_ENABLE_START_DETECT_INT_EN_Pos)  /**< (SMB_WAKE_ENABLE) Enable Start Bit Detection Interrupt. The Start Bit Detection Interrupt is wake-capable.\n      1=Start Bit Detection Interrupt enabled; 0=Start Bit Detection Interrupt disabled Mask */
#define SMB_WAKE_ENABLE_Msk                   (0x00000001UL)                                 /**< (SMB_WAKE_ENABLE) Register Mask  */

/* -------- SMB_SLAVE_ADDRESS : (SMB Offset: 0x6c) (R/W 8) This is the Slave Address Register -------- */

typedef union
{
  struct
  {
    uint8_t  SLAVEADD:8;                /**< bit:   0..7  This register stores value of address + LSB direction after the 8th clock of the Address Byte.\n */
  };
  uint8_t  w;
} __SMB_SLAVE_ADDRESS_bits_t;
#define SMB_SLAVE_ADDRESS_RESETVALUE        (0x00U)                                       /**<  (SMB_SLAVE_ADDRESS) This is the Slave Address Register  Reset Value */

#define SMB_SLAVE_ADDRESS_SLAVEADD_Pos        (0)                                            /**< (SMB_SLAVE_ADDRESS) This register stores value of address + LSB direction after the 8th clock of the Address Byte.\n Position */
#define SMB_SLAVE_ADDRESS_SLAVEADD_Msk        (0xFFU << SMB_SLAVE_ADDRESS_SLAVEADD_Pos)      /**< (SMB_SLAVE_ADDRESS) This register stores value of address + LSB direction after the 8th clock of the Address Byte.\n Mask */
#define SMB_SLAVE_ADDRESS_SLAVEADD(value)     (SMB_SLAVE_ADDRESS_SLAVEADD_Msk & ((value) << SMB_SLAVE_ADDRESS_SLAVEADD_Pos))
#define SMB_SLAVE_ADDRESS_Msk                 (0x000000FFUL)                                 /**< (SMB_SLAVE_ADDRESS) Register Mask  */

/* -------- SMB_PROMISCUOUS_INT : (SMB Offset: 0x70) (R/W 8) This is the Promiscuous Interrupt Register -------- */

typedef union
{
  struct
  {
    uint8_t  PROMISCUOUS_ADDSTAT:1;     /**< bit:      0  This is the Promiscuous Address Status interrupt and is set on the 8th clock of the I2C Address.\n         This bit will hold the Clock line low till this register bit is cleared. This is Write 1 to clear.\n         R/W1C. */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __SMB_PROMISCUOUS_INT_bits_t;
#define SMB_PROMISCUOUS_INT_RESETVALUE      (0x00U)                                       /**<  (SMB_PROMISCUOUS_INT) This is the Promiscuous Interrupt Register  Reset Value */

#define SMB_PROMISCUOUS_INT_PROMISCUOUS_ADDSTAT_Pos (0)                                            /**< (SMB_PROMISCUOUS_INT) This is the Promiscuous Address Status interrupt and is set on the 8th clock of the I2C Address.\n         This bit will hold the Clock line low till this register bit is cleared. This is Write 1 to clear.\n         R/W1C. Position */
#define SMB_PROMISCUOUS_INT_PROMISCUOUS_ADDSTAT_Msk (0x1U << SMB_PROMISCUOUS_INT_PROMISCUOUS_ADDSTAT_Pos)  /**< (SMB_PROMISCUOUS_INT) This is the Promiscuous Address Status interrupt and is set on the 8th clock of the I2C Address.\n         This bit will hold the Clock line low till this register bit is cleared. This is Write 1 to clear.\n         R/W1C. Mask */
#define SMB_PROMISCUOUS_INT_Msk               (0x00000001UL)                                 /**< (SMB_PROMISCUOUS_INT) Register Mask  */

/* -------- SMB_PROMIS_INTEN : (SMB Offset: 0x74) (R/W 8) This is the Promiscuous Interrupt Enable Register -------- */

typedef union
{
  struct
  {
    uint8_t  PROMIS_ADDSTAT_INTEN:1;    /**< bit:      0  This is the Promiscuous interrupt enable register.\n         1= Interrupt Enable. \n         0= Interrupt Disabled. \n */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __SMB_PROMIS_INTEN_bits_t;
#define SMB_PROMIS_INTEN_RESETVALUE         (0x00U)                                       /**<  (SMB_PROMIS_INTEN) This is the Promiscuous Interrupt Enable Register  Reset Value */

#define SMB_PROMIS_INTEN_PROMIS_ADDSTAT_INTEN_Pos (0)                                            /**< (SMB_PROMIS_INTEN) This is the Promiscuous interrupt enable register.\n         1= Interrupt Enable. \n         0= Interrupt Disabled. \n Position */
#define SMB_PROMIS_INTEN_PROMIS_ADDSTAT_INTEN_Msk (0x1U << SMB_PROMIS_INTEN_PROMIS_ADDSTAT_INTEN_Pos)  /**< (SMB_PROMIS_INTEN) This is the Promiscuous interrupt enable register.\n         1= Interrupt Enable. \n         0= Interrupt Disabled. \n Mask */
#define SMB_PROMIS_INTEN_Msk                  (0x00000001UL)                                 /**< (SMB_PROMIS_INTEN) Register Mask  */

/* -------- SMB_PROMIS_CTRL : (SMB Offset: 0x78) (R/W 8) This is the Promiscuous Control Register -------- */

typedef union
{
  struct
  {
    uint8_t  PROMIS_ACK_NAK:1;          /**< bit:      0  This is the Promiscuous ACK / NAK response register.\n         1= ACK. \n         0= NAK. \n */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __SMB_PROMIS_CTRL_bits_t;
#define SMB_PROMIS_CTRL_RESETVALUE          (0x00U)                                       /**<  (SMB_PROMIS_CTRL) This is the Promiscuous Control Register  Reset Value */

#define SMB_PROMIS_CTRL_PROMIS_ACK_NAK_Pos    (0)                                            /**< (SMB_PROMIS_CTRL) This is the Promiscuous ACK / NAK response register.\n         1= ACK. \n         0= NAK. \n Position */
#define SMB_PROMIS_CTRL_PROMIS_ACK_NAK_Msk    (0x1U << SMB_PROMIS_CTRL_PROMIS_ACK_NAK_Pos)   /**< (SMB_PROMIS_CTRL) This is the Promiscuous ACK / NAK response register.\n         1= ACK. \n         0= NAK. \n Mask */
#define SMB_PROMIS_CTRL_Msk                   (0x00000001UL)                                 /**< (SMB_PROMIS_CTRL) Register Mask  */

/** \brief SMB register offsets definitions */
#define SMB_CONTROL_OFFSET           (0x00)         /**< (SMB_CONTROL) Control Register Offset */
#define SMB_OWN_OFFSET               (0x04)         /**< (SMB_OWN) Own Address Register\n           Note that the Data Register and Own Address fields are offset by one bit, so that programming Own Address 1 with a value of 55h will result in the value AAh being recognized as the SMB Controller Core slave address. Offset */
#define SMB_DATA_REG_OFFSET          (0x08)         /**< (SMB_DATA_REG) This register holds the data that are either shifted out to or shifted in from the I2C port. Offset */
#define SMB_MASTER_COMMAND_OFFSET    (0x0C)         /**< (SMB_MASTER_COMMAND) SMBus Master Command Register Offset */
#define SMB_SLAVE_COMMAND_OFFSET     (0x10)         /**< (SMB_SLAVE_COMMAND) SMBus Slave Command Register Offset */
#define SMB_PEC_OFFSET               (0x14)         /**< (SMB_PEC) Packet Error Check (PEC) Register Offset */
#define SMB_REPEATED_START_HOLD_TIME_OFFSET (0x18)         /**< (SMB_REPEATED_START_HOLD_TIME) Repeated Start Hold Time Register Offset */
#define SMB_COMPLETION_OFFSET        (0x20)         /**< (SMB_COMPLETION) Completion Register Offset */
#define SMB_IDLE_SCALING_OFFSET      (0x24)         /**< (SMB_IDLE_SCALING) Idle Scaling Register Offset */
#define SMB_CONFIGURATION_OFFSET     (0x28)         /**< (SMB_CONFIGURATION) Configuration Register Offset */
#define SMB_BUS_CLOCK_OFFSET         (0x2C)         /**< (SMB_BUS_CLOCK) Bus Clock Register Offset */
#define SMB_BLOCK_ID_OFFSET          (0x30)         /**< (SMB_BLOCK_ID) Block ID Register Offset */
#define SMB_REVISION_OFFSET          (0x34)         /**< (SMB_REVISION) Revision Register Offset */
#define SMB_BIT_BANG_CONTROL_OFFSET  (0x38)         /**< (SMB_BIT_BANG_CONTROL) Bit-Bang Control Register Offset */
#define SMB_TEST_OFFSET              (0x3C)         /**< (SMB_TEST) Test Offset */
#define SMB_DATA_TIMING_OFFSET       (0x40)         /**< (SMB_DATA_TIMING) Data Timing Register Offset */
#define SMB_TIME_OUT_SCALING_OFFSET  (0x44)         /**< (SMB_TIME_OUT_SCALING) Time-Out Scaling Register Offset */
#define SMB_SLAVE_TRANSMIT_BUFFER_OFFSET (0x48)         /**< (SMB_SLAVE_TRANSMIT_BUFFER) SMBus Slave Transmit Buffer Register Offset */
#define SMB_SLAVE_RECEIVE_BUFFER_OFFSET (0x4C)         /**< (SMB_SLAVE_RECEIVE_BUFFER) SMBus Slave Receive Buffer Register Offset */
#define SMB_MASTER_TRANSMIT_BUFER_OFFSET (0x50)         /**< (SMB_MASTER_TRANSMIT_BUFER) SMBus Master Transmit Buffer Register Offset */
#define SMB_MASTER_RECEIVE_BUFFER_OFFSET (0x54)         /**< (SMB_MASTER_RECEIVE_BUFFER) SMBus Master Receive Buffer Register Offset */
#define SMB_WAKE_STATUS_OFFSET       (0x60)         /**< (SMB_WAKE_STATUS) WAKE STATUS Register Offset */
#define SMB_WAKE_ENABLE_OFFSET       (0x64)         /**< (SMB_WAKE_ENABLE) WAKE ENABLE Register Offset */
#define SMB_SLAVE_ADDRESS_OFFSET     (0x6C)         /**< (SMB_SLAVE_ADDRESS) This is the Slave Address Register Offset */
#define SMB_PROMISCUOUS_INT_OFFSET   (0x70)         /**< (SMB_PROMISCUOUS_INT) This is the Promiscuous Interrupt Register Offset */
#define SMB_PROMIS_INTEN_OFFSET      (0x74)         /**< (SMB_PROMIS_INTEN) This is the Promiscuous Interrupt Enable Register Offset */
#define SMB_PROMIS_CTRL_OFFSET       (0x78)         /**< (SMB_PROMIS_CTRL) This is the Promiscuous Control Register Offset */

/** \brief SMB register API structure */
typedef struct
{  /* The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
  __O   __SMB_CONTROL_bits_t           CONTROL;       /**< Offset: 0x00 ( /W  32) Control Register */
  __I   __SMB_STATUS_bits_t            STATUS;        /**< Offset: 0x00 (R/   32) Status Register */
  __IO  __SMB_OWN_bits_t               OWN;           /**< Offset: 0x04 (R/W  32) Own Address Register\n           Note that the Data Register and Own Address fields are offset by one bit, so that programming Own Address 1 with a value of 55h will result in the value AAh being recognized as the SMB Controller Core slave address. */
  __IO  __SMB_DATA_REG_bits_t          DATA_REG;      /**< Offset: 0x08 (R/W   8) This register holds the data that are either shifted out to or shifted in from the I2C port. */
  __IO  __SMB_MASTER_COMMAND_bits_t    MASTER_COMMAND; /**< Offset: 0x0C (R/W  32) SMBus Master Command Register */
  __IO  __SMB_SLAVE_COMMAND_bits_t     SLAVE_COMMAND; /**< Offset: 0x10 (R/W  32) SMBus Slave Command Register */
  __IO  __SMB_PEC_bits_t               PEC;           /**< Offset: 0x14 (R/W  32) Packet Error Check (PEC) Register */
  __IO  __SMB_REPEATED_START_HOLD_TIME_bits_t REPEATED_START_HOLD_TIME; /**< Offset: 0x18 (R/W  32) Repeated Start Hold Time Register */
  __IO  __SMB_COMPLETION_bits_t        COMPLETION;    /**< Offset: 0x20 (R/W  32) Completion Register */
  __IO  __SMB_IDLE_SCALING_bits_t      IDLE_SCALING;  /**< Offset: 0x24 (R/W  32) Idle Scaling Register */
  __IO  __SMB_CONFIGURATION_bits_t     CONFIGURATION; /**< Offset: 0x28 (R/W  32) Configuration Register */
  __IO  __SMB_BUS_CLOCK_bits_t         BUS_CLOCK;     /**< Offset: 0x2C (R/W  32) Bus Clock Register */
  __I   __SMB_BLOCK_ID_bits_t          BLOCK_ID;      /**< Offset: 0x30 (R/    8) Block ID Register */
  __I   __SMB_REVISION_bits_t          REVISION;      /**< Offset: 0x34 (R/    8) Revision Register */
  __IO  __SMB_BIT_BANG_CONTROL_bits_t  BIT_BANG_CONTROL; /**< Offset: 0x38 (R/W  32) Bit-Bang Control Register */
  __I   __SMB_TEST_bits_t              TEST;          /**< Offset: 0x3C (R/    8) Test */
  __IO  __SMB_DATA_TIMING_bits_t       DATA_TIMING;   /**< Offset: 0x40 (R/W  32) Data Timing Register */
  __IO  __SMB_TIME_OUT_SCALING_bits_t  TIME_OUT_SCALING; /**< Offset: 0x44 (R/W  32) Time-Out Scaling Register */
  __IO  __SMB_SLAVE_TRANSMIT_BUFFER_bits_t SLAVE_TRANSMIT_BUFFER; /**< Offset: 0x48 (R/W  32) SMBus Slave Transmit Buffer Register */
  __IO  __SMB_SLAVE_RECEIVE_BUFFER_bits_t SLAVE_RECEIVE_BUFFER; /**< Offset: 0x4C (R/W  32) SMBus Slave Receive Buffer Register */
  __IO  __SMB_MASTER_TRANSMIT_BUFER_bits_t MASTER_TRANSMIT_BUFER; /**< Offset: 0x50 (R/W  32) SMBus Master Transmit Buffer Register */
  __IO  __SMB_MASTER_RECEIVE_BUFFER_bits_t MASTER_RECEIVE_BUFFER; /**< Offset: 0x54 (R/W  32) SMBus Master Receive Buffer Register */
  __IO  __SMB_WAKE_STATUS_bits_t       WAKE_STATUS;   /**< Offset: 0x60 (R/W  32) WAKE STATUS Register */
  __IO  __SMB_WAKE_ENABLE_bits_t       WAKE_ENABLE;   /**< Offset: 0x64 (R/W  32) WAKE ENABLE Register */
  __IO  __SMB_SLAVE_ADDRESS_bits_t     SLAVE_ADDRESS; /**< Offset: 0x6C (R/W   8) This is the Slave Address Register */
  __IO  __SMB_PROMISCUOUS_INT_bits_t   PROMISCUOUS_INT; /**< Offset: 0x70 (R/W   8) This is the Promiscuous Interrupt Register */
  __IO  __SMB_PROMIS_INTEN_bits_t      PROMIS_INTEN;  /**< Offset: 0x74 (R/W   8) This is the Promiscuous Interrupt Enable Register */
  __IO  __SMB_PROMIS_CTRL_bits_t       PROMIS_CTRL;   /**< Offset: 0x78 (R/W   8) This is the Promiscuous Control Register */
} smb_registers_t;
/** @}  end of The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */

#endif /* _PIC32CX_0525SG12_SMB_COMPONENT_H_ */
