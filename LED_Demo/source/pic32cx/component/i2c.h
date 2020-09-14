/**
 * \brief Component description for PIC32CX/0525SG12 I2C
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
#ifndef _PIC32CX_0525SG12_I2C_COMPONENT_H_
#define _PIC32CX_0525SG12_I2C_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_I2C The I2C interface can handle standard I2C interface.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR I2C */
/* ========================================================================== */

/* -------- I2C_CONTROL : (I2C Offset: 0x00) (/W 32) Control Register -------- */

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
} __I2C_CONTROL_bits_t;
#define I2C_CONTROL_RESETVALUE              (0x00U)                                       /**<  (I2C_CONTROL) Control Register  Reset Value */

#define I2C_CONTROL_ACK_Pos                   (0)                                            /**< (I2C_CONTROL) The Acknowledge bit (ACK) must normally be asserted ('1'). This causes the controller to send an acknowledge automatically after each byte (this occurs during the 9th clock pulse). The ACK bit must not be asserted ('0') when the controller is operating in master/receiver mode and requires no further data to be sent from the slave transmitter. This causes a negative acknowledge on the I2C bus, which halts further transmission from the slave device. Position */
#define I2C_CONTROL_ACK_Msk                   (0x1U << I2C_CONTROL_ACK_Pos)                  /**< (I2C_CONTROL) The Acknowledge bit (ACK) must normally be asserted ('1'). This causes the controller to send an acknowledge automatically after each byte (this occurs during the 9th clock pulse). The ACK bit must not be asserted ('0') when the controller is operating in master/receiver mode and requires no further data to be sent from the slave transmitter. This causes a negative acknowledge on the I2C bus, which halts further transmission from the slave device. Mask */
#define I2C_CONTROL_STO_Pos                   (1)                                            /**< (I2C_CONTROL) See STA description Position */
#define I2C_CONTROL_STO_Msk                   (0x1U << I2C_CONTROL_STO_Pos)                  /**< (I2C_CONTROL) See STA description Mask */
#define I2C_CONTROL_STA_Pos                   (2)                                            /**< (I2C_CONTROL) The STA and STO bits control the generation of the I2C Start condition and the transmission of the Slave Address and R/nW bit (from the Data Register), generation of repeated Start condition, and generation of the Stop condition Position */
#define I2C_CONTROL_STA_Msk                   (0x1U << I2C_CONTROL_STA_Pos)                  /**< (I2C_CONTROL) The STA and STO bits control the generation of the I2C Start condition and the transmission of the Slave Address and R/nW bit (from the Data Register), generation of repeated Start condition, and generation of the Stop condition Mask */
#define I2C_CONTROL_ENI_Pos                   (3)                                            /**< (I2C_CONTROL) Enable Interrupt bit (ENI) controls the Interrupt Interface Position */
#define I2C_CONTROL_ENI_Msk                   (0x1U << I2C_CONTROL_ENI_Pos)                  /**< (I2C_CONTROL) Enable Interrupt bit (ENI) controls the Interrupt Interface Mask */
#define I2C_CONTROL_ESO_Pos                   (6)                                            /**< (I2C_CONTROL) The Enable Serial Output bit (ESO) enables and disables the SMB Controller Core serial data output (SDAT) Position */
#define I2C_CONTROL_ESO_Msk                   (0x1U << I2C_CONTROL_ESO_Pos)                  /**< (I2C_CONTROL) The Enable Serial Output bit (ESO) enables and disables the SMB Controller Core serial data output (SDAT) Mask */
#define I2C_CONTROL_PIN_Pos                   (7)                                            /**< (I2C_CONTROL) The Pending Interrupt Not (PIN) bit serves as a software reset function. Writing the PIN bit to a logic '1' de-asserts all status bits except for the nBB bit which is not affected by the PIN bit. The PIN bit is a self-clearing bit. Writing this bit to a logic '0' has no effect. Position */
#define I2C_CONTROL_PIN_Msk                   (0x1U << I2C_CONTROL_PIN_Pos)                  /**< (I2C_CONTROL) The Pending Interrupt Not (PIN) bit serves as a software reset function. Writing the PIN bit to a logic '1' de-asserts all status bits except for the nBB bit which is not affected by the PIN bit. The PIN bit is a self-clearing bit. Writing this bit to a logic '0' has no effect. Mask */
#define I2C_CONTROL_Msk                       (0x000000CFUL)                                 /**< (I2C_CONTROL) Register Mask  */

/* -------- I2C_STATUS : (I2C Offset: 0x00) (R/ 32) Status Register -------- */

typedef union
{
  struct
  {
    uint32_t NBB:1;                     /**< bit:      0  The Bus Busy bit (NBB) is a read-only flag indicating when the bus is in use. A zero indicates that the bus is busy and access is not possible. */
    uint32_t LAB:1;                     /**< bit:      1  The Lost Arbitration Bit (LAB) is set when, in multi-master operation, arbitration is lost to another master on the bus */
    uint32_t AAS:1;                     /**< bit:      2  The Addressed As Slave bit (AAS) is valid only when PIN is asserted ('0'). When acting as slave, AAS is set when an incoming address over the bus matches the value in the Own Address Register or if the 'general call' address (00h) has been received */
    uint32_t LRB_AD0:1;                 /**< bit:      3  The (Last Received Bit)  or (Address 0) (general call) bit (LRB/AD0) serves a dual function and is valid only while the PIN bit is asserted ('0').\n                When the AAS bit is not asserted ('0') (i.e., not addressed as a slave), the LRB/AD0 holds the value of the last received bit over the bus.\n                When the AAS bit is asserted ('1') (i.e., addressed as slave), the SMB Controller Core has been addressed as a slave. */
    uint32_t BER:1;                     /**< bit:      4  When Bus Error (BER) is asserted, a misplaced START or STOP condition or Bus Time-Outs have been detected. */
    uint32_t STS:1;                     /**< bit:      5  When in slave receiver mode, STS is asserted ('1') when an externally generated STOP condition is detected. Note that STS is used only in slave receiver mode. */
    uint32_t SAD:1;                     /**< bit:      6  SMBus Address Decoded (SAD)                   */
    uint32_t PIN:1;                     /**< bit:      7  Pending Interrupt bit                         */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __I2C_STATUS_bits_t;
#define I2C_STATUS_RESETVALUE               (0x00U)                                       /**<  (I2C_STATUS) Status Register  Reset Value */

#define I2C_STATUS_NBB_Pos                    (0)                                            /**< (I2C_STATUS) The Bus Busy bit (NBB) is a read-only flag indicating when the bus is in use. A zero indicates that the bus is busy and access is not possible. Position */
#define I2C_STATUS_NBB_Msk                    (0x1U << I2C_STATUS_NBB_Pos)                   /**< (I2C_STATUS) The Bus Busy bit (NBB) is a read-only flag indicating when the bus is in use. A zero indicates that the bus is busy and access is not possible. Mask */
#define I2C_STATUS_LAB_Pos                    (1)                                            /**< (I2C_STATUS) The Lost Arbitration Bit (LAB) is set when, in multi-master operation, arbitration is lost to another master on the bus Position */
#define I2C_STATUS_LAB_Msk                    (0x1U << I2C_STATUS_LAB_Pos)                   /**< (I2C_STATUS) The Lost Arbitration Bit (LAB) is set when, in multi-master operation, arbitration is lost to another master on the bus Mask */
#define I2C_STATUS_AAS_Pos                    (2)                                            /**< (I2C_STATUS) The Addressed As Slave bit (AAS) is valid only when PIN is asserted ('0'). When acting as slave, AAS is set when an incoming address over the bus matches the value in the Own Address Register or if the 'general call' address (00h) has been received Position */
#define I2C_STATUS_AAS_Msk                    (0x1U << I2C_STATUS_AAS_Pos)                   /**< (I2C_STATUS) The Addressed As Slave bit (AAS) is valid only when PIN is asserted ('0'). When acting as slave, AAS is set when an incoming address over the bus matches the value in the Own Address Register or if the 'general call' address (00h) has been received Mask */
#define I2C_STATUS_LRB_AD0_Pos                (3)                                            /**< (I2C_STATUS) The (Last Received Bit)  or (Address 0) (general call) bit (LRB/AD0) serves a dual function and is valid only while the PIN bit is asserted ('0').\n                When the AAS bit is not asserted ('0') (i.e., not addressed as a slave), the LRB/AD0 holds the value of the last received bit over the bus.\n                When the AAS bit is asserted ('1') (i.e., addressed as slave), the SMB Controller Core has been addressed as a slave. Position */
#define I2C_STATUS_LRB_AD0_Msk                (0x1U << I2C_STATUS_LRB_AD0_Pos)               /**< (I2C_STATUS) The (Last Received Bit)  or (Address 0) (general call) bit (LRB/AD0) serves a dual function and is valid only while the PIN bit is asserted ('0').\n                When the AAS bit is not asserted ('0') (i.e., not addressed as a slave), the LRB/AD0 holds the value of the last received bit over the bus.\n                When the AAS bit is asserted ('1') (i.e., addressed as slave), the SMB Controller Core has been addressed as a slave. Mask */
#define I2C_STATUS_BER_Pos                    (4)                                            /**< (I2C_STATUS) When Bus Error (BER) is asserted, a misplaced START or STOP condition or Bus Time-Outs have been detected. Position */
#define I2C_STATUS_BER_Msk                    (0x1U << I2C_STATUS_BER_Pos)                   /**< (I2C_STATUS) When Bus Error (BER) is asserted, a misplaced START or STOP condition or Bus Time-Outs have been detected. Mask */
#define I2C_STATUS_STS_Pos                    (5)                                            /**< (I2C_STATUS) When in slave receiver mode, STS is asserted ('1') when an externally generated STOP condition is detected. Note that STS is used only in slave receiver mode. Position */
#define I2C_STATUS_STS_Msk                    (0x1U << I2C_STATUS_STS_Pos)                   /**< (I2C_STATUS) When in slave receiver mode, STS is asserted ('1') when an externally generated STOP condition is detected. Note that STS is used only in slave receiver mode. Mask */
#define I2C_STATUS_SAD_Pos                    (6)                                            /**< (I2C_STATUS) SMBus Address Decoded (SAD) Position */
#define I2C_STATUS_SAD_Msk                    (0x1U << I2C_STATUS_SAD_Pos)                   /**< (I2C_STATUS) SMBus Address Decoded (SAD) Mask */
#define I2C_STATUS_PIN_Pos                    (7)                                            /**< (I2C_STATUS) Pending Interrupt bit Position */
#define I2C_STATUS_PIN_Msk                    (0x1U << I2C_STATUS_PIN_Pos)                   /**< (I2C_STATUS) Pending Interrupt bit Mask */
#define I2C_STATUS_Msk                        (0x000000FFUL)                                 /**< (I2C_STATUS) Register Mask  */

/* -------- I2C_OWN : (I2C Offset: 0x04) (R/W 32) Own Address Register\n           Note that the Data Register and Own Address fields are offset by one bit, so that programming Own Address 1 with a value of 55h will result in the value AAh being recognized as the SMB Controller Core slave address. -------- */

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
} __I2C_OWN_bits_t;
#define I2C_OWN_RESETVALUE                  (0x00U)                                       /**<  (I2C_OWN) Own Address Register\n           Note that the Data Register and Own Address fields are offset by one bit, so that programming Own Address 1 with a value of 55h will result in the value AAh being recognized as the SMB Controller Core slave address.  Reset Value */

#define I2C_OWN_OWN_ADDRESS_1_Pos             (0)                                            /**< (I2C_OWN) The Own Address 1 bits configure one of the two addresses to which the SMB Controller Core will respond when addressed as a slave. Position */
#define I2C_OWN_OWN_ADDRESS_1_Msk             (0x7FU << I2C_OWN_OWN_ADDRESS_1_Pos)           /**< (I2C_OWN) The Own Address 1 bits configure one of the two addresses to which the SMB Controller Core will respond when addressed as a slave. Mask */
#define I2C_OWN_OWN_ADDRESS_1(value)          (I2C_OWN_OWN_ADDRESS_1_Msk & ((value) << I2C_OWN_OWN_ADDRESS_1_Pos))
#define I2C_OWN_OWN_ADDRESS_2_Pos             (8)                                            /**< (I2C_OWN) The Own Address 2 bits configure one of the two addresses to which the SMB Controller Core will respond when addressed as a slave. Position */
#define I2C_OWN_OWN_ADDRESS_2_Msk             (0x7FU << I2C_OWN_OWN_ADDRESS_2_Pos)           /**< (I2C_OWN) The Own Address 2 bits configure one of the two addresses to which the SMB Controller Core will respond when addressed as a slave. Mask */
#define I2C_OWN_OWN_ADDRESS_2(value)          (I2C_OWN_OWN_ADDRESS_2_Msk & ((value) << I2C_OWN_OWN_ADDRESS_2_Pos))
#define I2C_OWN_Msk                           (0x00007F7FUL)                                 /**< (I2C_OWN) Register Mask  */

/* -------- I2C_DATA_REG : (I2C Offset: 0x08) (R/W 8) This register holds the data that are either shifted out to or shifted in from the I2C port. -------- */

typedef union
{
  uint8_t  w;
} __I2C_DATA_REG_bits_t;
#define I2C_DATA_REG_RESETVALUE             (0x00U)                                       /**<  (I2C_DATA_REG) This register holds the data that are either shifted out to or shifted in from the I2C port.  Reset Value */

#define I2C_DATA_REG_Msk                      (0x00000000UL)                                 /**< (I2C_DATA_REG) Register Mask  */

/* -------- I2C_REPEATED_START_HOLD_TIME : (I2C Offset: 0x18) (R/W 32) Repeated Start Hold Time Register -------- */

typedef union
{
  struct
  {
    uint32_t RPT_START_HOLD_TIME:8;     /**< bit:   0..7  This is the value of the timing requirement tHd:Sta in the I2C specification for a repeated START bit. This is used to hold\n      the clock until the Hold Time for the repeated Start Bit has been satisfied. */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __I2C_REPEATED_START_HOLD_TIME_bits_t;
#define I2C_REPEATED_START_HOLD_TIME_RESETVALUE (0x4DU)                                       /**<  (I2C_REPEATED_START_HOLD_TIME) Repeated Start Hold Time Register  Reset Value */

#define I2C_REPEATED_START_HOLD_TIME_RPT_START_HOLD_TIME_Pos (0)                                            /**< (I2C_REPEATED_START_HOLD_TIME) This is the value of the timing requirement tHd:Sta in the I2C specification for a repeated START bit. This is used to hold\n      the clock until the Hold Time for the repeated Start Bit has been satisfied. Position */
#define I2C_REPEATED_START_HOLD_TIME_RPT_START_HOLD_TIME_Msk (0xFFU << I2C_REPEATED_START_HOLD_TIME_RPT_START_HOLD_TIME_Pos)  /**< (I2C_REPEATED_START_HOLD_TIME) This is the value of the timing requirement tHd:Sta in the I2C specification for a repeated START bit. This is used to hold\n      the clock until the Hold Time for the repeated Start Bit has been satisfied. Mask */
#define I2C_REPEATED_START_HOLD_TIME_RPT_START_HOLD_TIME(value) (I2C_REPEATED_START_HOLD_TIME_RPT_START_HOLD_TIME_Msk & ((value) << I2C_REPEATED_START_HOLD_TIME_RPT_START_HOLD_TIME_Pos))
#define I2C_REPEATED_START_HOLD_TIME_Msk      (0x000000FFUL)                                 /**< (I2C_REPEATED_START_HOLD_TIME) Register Mask  */

/* -------- I2C_COMPLETION : (I2C Offset: 0x20) (R/W 32) Completion Register -------- */

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
    uint32_t :19;                       /**< bit: 13..31  Reserved                                      */
  };
  uint32_t w;
} __I2C_COMPLETION_bits_t;
#define I2C_COMPLETION_RESETVALUE           (0x00U)                                       /**<  (I2C_COMPLETION) Completion Register  Reset Value */

#define I2C_COMPLETION_DTEN_Pos               (2)                                            /**< (I2C_COMPLETION) When DTEN is asserted ('1'), Device Time-out checking is enabled. When DTEN is not asserted ('0'), Device Time-out checking is disabled. Position */
#define I2C_COMPLETION_DTEN_Msk               (0x1U << I2C_COMPLETION_DTEN_Pos)              /**< (I2C_COMPLETION) When DTEN is asserted ('1'), Device Time-out checking is enabled. When DTEN is not asserted ('0'), Device Time-out checking is disabled. Mask */
#define I2C_COMPLETION_MCEN_Pos               (3)                                            /**< (I2C_COMPLETION) When MCEN is asserted ('1'), Master Cumulative Time-Out checking is enabled. When MCEN is not asserted ('0'), Master Cumulative Time-Out checking is disabled. Position */
#define I2C_COMPLETION_MCEN_Msk               (0x1U << I2C_COMPLETION_MCEN_Pos)              /**< (I2C_COMPLETION) When MCEN is asserted ('1'), Master Cumulative Time-Out checking is enabled. When MCEN is not asserted ('0'), Master Cumulative Time-Out checking is disabled. Mask */
#define I2C_COMPLETION_SCEN_Pos               (4)                                            /**< (I2C_COMPLETION) When SCEN is asserted ('1'), Slave Cumulative Time-Out checking is enabled. When SCEN is not asserted ('0'), Slave Cumulative Time-Out checking is disabled. Position */
#define I2C_COMPLETION_SCEN_Msk               (0x1U << I2C_COMPLETION_SCEN_Pos)              /**< (I2C_COMPLETION) When SCEN is asserted ('1'), Slave Cumulative Time-Out checking is enabled. When SCEN is not asserted ('0'), Slave Cumulative Time-Out checking is disabled. Mask */
#define I2C_COMPLETION_BIDEN_Pos              (5)                                            /**< (I2C_COMPLETION) When BIDEN is asserted ('1'), Bus Idle Detect Time-Out checking is enabled. When BIDEN is not asserted ('0'), Bus Idle Detect Time-Out checking is disabled. Position */
#define I2C_COMPLETION_BIDEN_Msk              (0x1U << I2C_COMPLETION_BIDEN_Pos)             /**< (I2C_COMPLETION) When BIDEN is asserted ('1'), Bus Idle Detect Time-Out checking is enabled. When BIDEN is not asserted ('0'), Bus Idle Detect Time-Out checking is disabled. Mask */
#define I2C_COMPLETION_TIMERR_Pos             (6)                                            /**< (I2C_COMPLETION) The Time-out Error Detected bit (TIMERR) is asserted ('1') whenever any of the enabled time-out error detect status bits (CHDH, CHDL, SCTO, MCTO and DTO) are asserted. Position */
#define I2C_COMPLETION_TIMERR_Msk             (0x1U << I2C_COMPLETION_TIMERR_Pos)            /**< (I2C_COMPLETION) The Time-out Error Detected bit (TIMERR) is asserted ('1') whenever any of the enabled time-out error detect status bits (CHDH, CHDL, SCTO, MCTO and DTO) are asserted. Mask */
#define I2C_COMPLETION_DTO_Pos                (8)                                            /**< (I2C_COMPLETION) DTO is the Device Time-out bit. (R/WC) Position */
#define I2C_COMPLETION_DTO_Msk                (0x1U << I2C_COMPLETION_DTO_Pos)               /**< (I2C_COMPLETION) DTO is the Device Time-out bit. (R/WC) Mask */
#define I2C_COMPLETION_MCTO_Pos               (9)                                            /**< (I2C_COMPLETION) MCTO is the Master Cumulative Time-out bit. (R/WC) Position */
#define I2C_COMPLETION_MCTO_Msk               (0x1U << I2C_COMPLETION_MCTO_Pos)              /**< (I2C_COMPLETION) MCTO is the Master Cumulative Time-out bit. (R/WC) Mask */
#define I2C_COMPLETION_SCTO_Pos               (10)                                           /**< (I2C_COMPLETION) SCTO is the Slave Cumulative Time-out bit(R/WC) Position */
#define I2C_COMPLETION_SCTO_Msk               (0x1U << I2C_COMPLETION_SCTO_Pos)              /**< (I2C_COMPLETION) SCTO is the Slave Cumulative Time-out bit(R/WC) Mask */
#define I2C_COMPLETION_CHDL_Pos               (11)                                           /**< (I2C_COMPLETION) CHDL is the clock high time-out detect bit(R/WC) Position */
#define I2C_COMPLETION_CHDL_Msk               (0x1U << I2C_COMPLETION_CHDL_Pos)              /**< (I2C_COMPLETION) CHDL is the clock high time-out detect bit(R/WC) Mask */
#define I2C_COMPLETION_CHDH_Pos               (12)                                           /**< (I2C_COMPLETION) CHDH is the bus idle time-out detect bit(R/WC) Position */
#define I2C_COMPLETION_CHDH_Msk               (0x1U << I2C_COMPLETION_CHDH_Pos)              /**< (I2C_COMPLETION) CHDH is the bus idle time-out detect bit(R/WC) Mask */
#define I2C_COMPLETION_Msk                    (0x00001F7CUL)                                 /**< (I2C_COMPLETION) Register Mask  */

/* -------- I2C_CONFIGURATION : (I2C Offset: 0x28) (R/W 32) Configuration Register -------- */

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
    uint32_t CNFG_PROMISCUOUS:1;        /**< bit:     15  This is the configur Promiscuous bit.\n                0: Normal operation is enabled. \n         1: Promiscuous Mode enabled , General Call Address disabled, Promiscuous Address Interrupt function enabled.    Stall 9th clock of address byte enabled.  Address byte ACK/NAK done by Promiscuous ACK setting.\n */
    uint32_t :16;                       /**< bit: 16..31  Reserved                                      */
  };
  uint32_t w;
} __I2C_CONFIGURATION_bits_t;
#define I2C_CONFIGURATION_RESETVALUE        (0x00U)                                       /**<  (I2C_CONFIGURATION) Configuration Register  Reset Value */

#define I2C_CONFIGURATION_PORT_SEL_Pos        (0)                                            /**< (I2C_CONFIGURATION) The PORT SEL [3:0] bits determine which one of 16 possible bus ports apply to the active 2-wire SDAT and SCLK bus pair. Position */
#define I2C_CONFIGURATION_PORT_SEL_Msk        (0xFU << I2C_CONFIGURATION_PORT_SEL_Pos)       /**< (I2C_CONFIGURATION) The PORT SEL [3:0] bits determine which one of 16 possible bus ports apply to the active 2-wire SDAT and SCLK bus pair. Mask */
#define I2C_CONFIGURATION_PORT_SEL(value)     (I2C_CONFIGURATION_PORT_SEL_Msk & ((value) << I2C_CONFIGURATION_PORT_SEL_Pos))
#define I2C_CONFIGURATION_TCEN_Pos            (4)                                            /**< (I2C_CONFIGURATION) When the Timing Check Enable bit (TCEN) is asserted ('1'), Bus Time-Outs are enabled Position */
#define I2C_CONFIGURATION_TCEN_Msk            (0x1U << I2C_CONFIGURATION_TCEN_Pos)           /**< (I2C_CONFIGURATION) When the Timing Check Enable bit (TCEN) is asserted ('1'), Bus Time-Outs are enabled Mask */
#define I2C_CONFIGURATION_SLOW_CLOCK_Pos      (5)                                            /**< (I2C_CONFIGURATION) When this bit is 1, the base period for the Bus Clock Register is multiplied by 4, and thus the frequency is divided by 4. Position */
#define I2C_CONFIGURATION_SLOW_CLOCK_Msk      (0x1U << I2C_CONFIGURATION_SLOW_CLOCK_Pos)     /**< (I2C_CONFIGURATION) When this bit is 1, the base period for the Bus Clock Register is multiplied by 4, and thus the frequency is divided by 4. Mask */
#define I2C_CONFIGURATION_TEST_Pos            (6)                                            /**< (I2C_CONFIGURATION) Must be always written with 0. Position */
#define I2C_CONFIGURATION_TEST_Msk            (0x1U << I2C_CONFIGURATION_TEST_Pos)           /**< (I2C_CONFIGURATION) Must be always written with 0. Mask */
#define I2C_CONFIGURATION_PECEN_Pos           (7)                                            /**< (I2C_CONFIGURATION) When the PEC Enable bit (PECEN) is asserted ('1'), Hardware PEC Support is enabled Position */
#define I2C_CONFIGURATION_PECEN_Msk           (0x1U << I2C_CONFIGURATION_PECEN_Pos)          /**< (I2C_CONFIGURATION) When the PEC Enable bit (PECEN) is asserted ('1'), Hardware PEC Support is enabled Mask */
#define I2C_CONFIGURATION_FEN_Pos             (8)                                            /**< (I2C_CONFIGURATION) Input filtering enable. Input filtering is required by the I2C specification if external filtering is not available.\n      1=Input filtering is enabled; 0=Input filtering is disabled. Position */
#define I2C_CONFIGURATION_FEN_Msk             (0x1U << I2C_CONFIGURATION_FEN_Pos)            /**< (I2C_CONFIGURATION) Input filtering enable. Input filtering is required by the I2C specification if external filtering is not available.\n      1=Input filtering is enabled; 0=Input filtering is disabled. Mask */
#define I2C_CONFIGURATION_RESET_Pos           (9)                                            /**< (I2C_CONFIGURATION) When RESET is asserted ('1'), all logic and registers except for the RESET bit itself are initialized to the power-on default state. Position */
#define I2C_CONFIGURATION_RESET_Msk           (0x1U << I2C_CONFIGURATION_RESET_Pos)          /**< (I2C_CONFIGURATION) When RESET is asserted ('1'), all logic and registers except for the RESET bit itself are initialized to the power-on default state. Mask */
#define I2C_CONFIGURATION_ENAB_Pos            (10)                                           /**< (I2C_CONFIGURATION) When ENAB (Enable) is not asserted ('0') (default), the SMB Controller Core is disabled and in the lowest power consumption state (Disabled State).\n                The ENAB bit must be asserted ('1') for normal operation. Position */
#define I2C_CONFIGURATION_ENAB_Msk            (0x1U << I2C_CONFIGURATION_ENAB_Pos)           /**< (I2C_CONFIGURATION) When ENAB (Enable) is not asserted ('0') (default), the SMB Controller Core is disabled and in the lowest power consumption state (Disabled State).\n                The ENAB bit must be asserted ('1') for normal operation. Mask */
#define I2C_CONFIGURATION_DSA_Pos             (11)                                           /**< (I2C_CONFIGURATION) 0: Slave Address I2C Compatibility Mode (default). 1: SMBus Address Decode Mode Position */
#define I2C_CONFIGURATION_DSA_Msk             (0x1U << I2C_CONFIGURATION_DSA_Pos)            /**< (I2C_CONFIGURATION) 0: Slave Address I2C Compatibility Mode (default). 1: SMBus Address Decode Mode Mask */
#define I2C_CONFIGURATION_FAIR_Pos            (12)                                           /**< (I2C_CONFIGURATION) If this bit is 1, the MCTP Fairness protocol is in effect. Position */
#define I2C_CONFIGURATION_FAIR_Msk            (0x1U << I2C_CONFIGURATION_FAIR_Pos)           /**< (I2C_CONFIGURATION) If this bit is 1, the MCTP Fairness protocol is in effect. Mask */
#define I2C_CONFIGURATION_TEST0_Pos           (13)                                           /**< (I2C_CONFIGURATION) Must be always written with 0. Position */
#define I2C_CONFIGURATION_TEST0_Msk           (0x1U << I2C_CONFIGURATION_TEST0_Pos)          /**< (I2C_CONFIGURATION) Must be always written with 0. Mask */
#define I2C_CONFIGURATION_GC_DIS_Pos          (14)                                           /**< (I2C_CONFIGURATION) This is the General Call Disable bit.\n                0: the response to the General Call address as a slave is enabled\n                1: the response to the General Call address as a slave is disabled. Position */
#define I2C_CONFIGURATION_GC_DIS_Msk          (0x1U << I2C_CONFIGURATION_GC_DIS_Pos)         /**< (I2C_CONFIGURATION) This is the General Call Disable bit.\n                0: the response to the General Call address as a slave is enabled\n                1: the response to the General Call address as a slave is disabled. Mask */
#define I2C_CONFIGURATION_CNFG_PROMISCUOUS_Pos (15)                                           /**< (I2C_CONFIGURATION) This is the configur Promiscuous bit.\n                0: Normal operation is enabled. \n         1: Promiscuous Mode enabled , General Call Address disabled, Promiscuous Address Interrupt function enabled.    Stall 9th clock of address byte enabled.  Address byte ACK/NAK done by Promiscuous ACK setting.\n Position */
#define I2C_CONFIGURATION_CNFG_PROMISCUOUS_Msk (0x1U << I2C_CONFIGURATION_CNFG_PROMISCUOUS_Pos)  /**< (I2C_CONFIGURATION) This is the configur Promiscuous bit.\n                0: Normal operation is enabled. \n         1: Promiscuous Mode enabled , General Call Address disabled, Promiscuous Address Interrupt function enabled.    Stall 9th clock of address byte enabled.  Address byte ACK/NAK done by Promiscuous ACK setting.\n Mask */
#define I2C_CONFIGURATION_Msk                 (0x0000FFFFUL)                                 /**< (I2C_CONFIGURATION) Register Mask  */

/* -------- I2C_BUS_CLOCK : (I2C Offset: 0x2c) (R/W 32) Bus Clock Register -------- */

typedef union
{
  struct
  {
    uint32_t LOW_PERIOD:8;              /**< bit:   0..7  This field defines the number of I2C Baud Clock periods that make up the low phase of the I2C/SMBus bus clock. */
    uint32_t HIGH_PERIOD:8;             /**< bit:  8..15  This field defines the number of I2C Baud Clock periods that make up the high phase of the I2C/SMBus bus clock. */
    uint32_t :16;                       /**< bit: 16..31  Reserved                                      */
  };
  uint32_t w;
} __I2C_BUS_CLOCK_bits_t;
#define I2C_BUS_CLOCK_RESETVALUE            (0x4F4FU)                                     /**<  (I2C_BUS_CLOCK) Bus Clock Register  Reset Value */

#define I2C_BUS_CLOCK_LOW_PERIOD_Pos          (0)                                            /**< (I2C_BUS_CLOCK) This field defines the number of I2C Baud Clock periods that make up the low phase of the I2C/SMBus bus clock. Position */
#define I2C_BUS_CLOCK_LOW_PERIOD_Msk          (0xFFU << I2C_BUS_CLOCK_LOW_PERIOD_Pos)        /**< (I2C_BUS_CLOCK) This field defines the number of I2C Baud Clock periods that make up the low phase of the I2C/SMBus bus clock. Mask */
#define I2C_BUS_CLOCK_LOW_PERIOD(value)       (I2C_BUS_CLOCK_LOW_PERIOD_Msk & ((value) << I2C_BUS_CLOCK_LOW_PERIOD_Pos))
#define I2C_BUS_CLOCK_HIGH_PERIOD_Pos         (8)                                            /**< (I2C_BUS_CLOCK) This field defines the number of I2C Baud Clock periods that make up the high phase of the I2C/SMBus bus clock. Position */
#define I2C_BUS_CLOCK_HIGH_PERIOD_Msk         (0xFFU << I2C_BUS_CLOCK_HIGH_PERIOD_Pos)       /**< (I2C_BUS_CLOCK) This field defines the number of I2C Baud Clock periods that make up the high phase of the I2C/SMBus bus clock. Mask */
#define I2C_BUS_CLOCK_HIGH_PERIOD(value)      (I2C_BUS_CLOCK_HIGH_PERIOD_Msk & ((value) << I2C_BUS_CLOCK_HIGH_PERIOD_Pos))
#define I2C_BUS_CLOCK_Msk                     (0x0000FFFFUL)                                 /**< (I2C_BUS_CLOCK) Register Mask  */

/* -------- I2C_BLOCK_ID : (I2C Offset: 0x30) (R/ 8) Block ID Register -------- */

typedef union
{
  struct
  {
    uint8_t  ID:8;                      /**< bit:   0..7  Block ID.                                     */
  };
  uint8_t  w;
} __I2C_BLOCK_ID_bits_t;
#define I2C_BLOCK_ID_RESETVALUE             (0x00U)                                       /**<  (I2C_BLOCK_ID) Block ID Register  Reset Value */

#define I2C_BLOCK_ID_ID_Pos                   (0)                                            /**< (I2C_BLOCK_ID) Block ID. Position */
#define I2C_BLOCK_ID_ID_Msk                   (0xFFU << I2C_BLOCK_ID_ID_Pos)                 /**< (I2C_BLOCK_ID) Block ID. Mask */
#define I2C_BLOCK_ID_ID(value)                (I2C_BLOCK_ID_ID_Msk & ((value) << I2C_BLOCK_ID_ID_Pos))
#define I2C_BLOCK_ID_Msk                      (0x000000FFUL)                                 /**< (I2C_BLOCK_ID) Register Mask  */

/* -------- I2C_REVISION : (I2C Offset: 0x34) (R/ 8) Revision Register -------- */

typedef union
{
  struct
  {
    uint8_t  REVISION:8;                /**< bit:   0..7  Block Revision Number                         */
  };
  uint8_t  w;
} __I2C_REVISION_bits_t;
#define I2C_REVISION_RESETVALUE             (0x00U)                                       /**<  (I2C_REVISION) Revision Register  Reset Value */

#define I2C_REVISION_REVISION_Pos             (0)                                            /**< (I2C_REVISION) Block Revision Number Position */
#define I2C_REVISION_REVISION_Msk             (0xFFU << I2C_REVISION_REVISION_Pos)           /**< (I2C_REVISION) Block Revision Number Mask */
#define I2C_REVISION_REVISION(value)          (I2C_REVISION_REVISION_Msk & ((value) << I2C_REVISION_REVISION_Pos))
#define I2C_REVISION_Msk                      (0x000000FFUL)                                 /**< (I2C_REVISION) Register Mask  */

/* -------- I2C_BIT_BANG_CONTROL : (I2C Offset: 0x38) (R/W 32) Bit-Bang Control Register -------- */

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
} __I2C_BIT_BANG_CONTROL_bits_t;
#define I2C_BIT_BANG_CONTROL_RESETVALUE     (0x60U)                                       /**<  (I2C_BIT_BANG_CONTROL) Bit-Bang Control Register  Reset Value */

#define I2C_BIT_BANG_CONTROL_BBEN_Pos         (0)                                            /**< (I2C_BIT_BANG_CONTROL) Bit-Bang Mode Enable. 0 - Bit Bang Mode Disabled. 1 - Bit Bang Mode Enabled Position */
#define I2C_BIT_BANG_CONTROL_BBEN_Msk         (0x1U << I2C_BIT_BANG_CONTROL_BBEN_Pos)        /**< (I2C_BIT_BANG_CONTROL) Bit-Bang Mode Enable. 0 - Bit Bang Mode Disabled. 1 - Bit Bang Mode Enabled Mask */
#define I2C_BIT_BANG_CONTROL_CLDIR_Pos        (1)                                            /**< (I2C_BIT_BANG_CONTROL) Bit-Bang Clock Direction. The CLDIR bit controls the direction of SCLK. 0 - Input, 1 - Output Position */
#define I2C_BIT_BANG_CONTROL_CLDIR_Msk        (0x1U << I2C_BIT_BANG_CONTROL_CLDIR_Pos)       /**< (I2C_BIT_BANG_CONTROL) Bit-Bang Clock Direction. The CLDIR bit controls the direction of SCLK. 0 - Input, 1 - Output Mask */
#define I2C_BIT_BANG_CONTROL_DADIR_Pos        (2)                                            /**< (I2C_BIT_BANG_CONTROL) Bit-Bang Data Direction. The DADIR bit controls the direction of SDAT. 0 - Input. 1 - Output Position */
#define I2C_BIT_BANG_CONTROL_DADIR_Msk        (0x1U << I2C_BIT_BANG_CONTROL_DADIR_Pos)       /**< (I2C_BIT_BANG_CONTROL) Bit-Bang Data Direction. The DADIR bit controls the direction of SDAT. 0 - Input. 1 - Output Mask */
#define I2C_BIT_BANG_CONTROL_BBCLK_Pos        (3)                                            /**< (I2C_BIT_BANG_CONTROL) Bit-Bang Clock. The BBCLK bit controls the state of SCLK when BBEN = and CLDIR = '1' Position */
#define I2C_BIT_BANG_CONTROL_BBCLK_Msk        (0x1U << I2C_BIT_BANG_CONTROL_BBCLK_Pos)       /**< (I2C_BIT_BANG_CONTROL) Bit-Bang Clock. The BBCLK bit controls the state of SCLK when BBEN = and CLDIR = '1' Mask */
#define I2C_BIT_BANG_CONTROL_BBDAT_Pos        (4)                                            /**< (I2C_BIT_BANG_CONTROL) Bit-Bang Data. The BBDAT bit controls the state of SDAT when BBEN = and DADIR = '1' Position */
#define I2C_BIT_BANG_CONTROL_BBDAT_Msk        (0x1U << I2C_BIT_BANG_CONTROL_BBDAT_Pos)       /**< (I2C_BIT_BANG_CONTROL) Bit-Bang Data. The BBDAT bit controls the state of SDAT when BBEN = and DADIR = '1' Mask */
#define I2C_BIT_BANG_CONTROL_BBCLKI_Pos       (5)                                            /**< (I2C_BIT_BANG_CONTROL) Bit-Bang Clock In. The BBCLKI bit always returns the state of SCLK. Position */
#define I2C_BIT_BANG_CONTROL_BBCLKI_Msk       (0x1U << I2C_BIT_BANG_CONTROL_BBCLKI_Pos)      /**< (I2C_BIT_BANG_CONTROL) Bit-Bang Clock In. The BBCLKI bit always returns the state of SCLK. Mask */
#define I2C_BIT_BANG_CONTROL_BBDATI_Pos       (6)                                            /**< (I2C_BIT_BANG_CONTROL) Bit-Bang Data In. The BBDATI bit always returns the state of SDAT Position */
#define I2C_BIT_BANG_CONTROL_BBDATI_Msk       (0x1U << I2C_BIT_BANG_CONTROL_BBDATI_Pos)      /**< (I2C_BIT_BANG_CONTROL) Bit-Bang Data In. The BBDATI bit always returns the state of SDAT Mask */
#define I2C_BIT_BANG_CONTROL_Msk              (0x0000007FUL)                                 /**< (I2C_BIT_BANG_CONTROL) Register Mask  */

/* -------- I2C_CLK_SYNC_REG : (I2C Offset: 0x3c) (R/ 8) This is Clock Sync Register. This register must not be written, or undesirable results may occur.\n -------- */

typedef union
{
  struct
  {
    uint8_t  CLK_SYNC:8;                /**< bit:   0..7  This register must not be written, or undesirable results may occur. */
  };
  uint8_t  w;
} __I2C_CLK_SYNC_REG_bits_t;
#define I2C_CLK_SYNC_REG_RESETVALUE         (0x00U)                                       /**<  (I2C_CLK_SYNC_REG) This is Clock Sync Register. This register must not be written, or undesirable results may occur.\n  Reset Value */

#define I2C_CLK_SYNC_REG_CLK_SYNC_Pos         (0)                                            /**< (I2C_CLK_SYNC_REG) This register must not be written, or undesirable results may occur. Position */
#define I2C_CLK_SYNC_REG_CLK_SYNC_Msk         (0xFFU << I2C_CLK_SYNC_REG_CLK_SYNC_Pos)       /**< (I2C_CLK_SYNC_REG) This register must not be written, or undesirable results may occur. Mask */
#define I2C_CLK_SYNC_REG_CLK_SYNC(value)      (I2C_CLK_SYNC_REG_CLK_SYNC_Msk & ((value) << I2C_CLK_SYNC_REG_CLK_SYNC_Pos))
#define I2C_CLK_SYNC_REG_Msk                  (0x000000FFUL)                                 /**< (I2C_CLK_SYNC_REG) Register Mask  */

/* -------- I2C_DATA_TIMING : (I2C Offset: 0x40) (R/W 32) Data Timing Register -------- */

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
} __I2C_DATA_TIMING_bits_t;
#define I2C_DATA_TIMING_RESETVALUE          (0xC4D5006U)                                  /**<  (I2C_DATA_TIMING) Data Timing Register  Reset Value */

#define I2C_DATA_TIMING_DATA_HOLD_Pos         (0)                                            /**< (I2C_DATA_TIMING) The Data Hold [7:0] timer determines the SDAT hold time following SCLK driven low. Position */
#define I2C_DATA_TIMING_DATA_HOLD_Msk         (0xFFU << I2C_DATA_TIMING_DATA_HOLD_Pos)       /**< (I2C_DATA_TIMING) The Data Hold [7:0] timer determines the SDAT hold time following SCLK driven low. Mask */
#define I2C_DATA_TIMING_DATA_HOLD(value)      (I2C_DATA_TIMING_DATA_HOLD_Msk & ((value) << I2C_DATA_TIMING_DATA_HOLD_Pos))
#define I2C_DATA_TIMING_RESTART_SETUP_Pos     (8)                                            /**< (I2C_DATA_TIMING) The Restart Setup [7:0] timer determines the SDAT setup time from the rising edge of SCLK for a repeated START condition. Position */
#define I2C_DATA_TIMING_RESTART_SETUP_Msk     (0xFFU << I2C_DATA_TIMING_RESTART_SETUP_Pos)   /**< (I2C_DATA_TIMING) The Restart Setup [7:0] timer determines the SDAT setup time from the rising edge of SCLK for a repeated START condition. Mask */
#define I2C_DATA_TIMING_RESTART_SETUP(value)  (I2C_DATA_TIMING_RESTART_SETUP_Msk & ((value) << I2C_DATA_TIMING_RESTART_SETUP_Pos))
#define I2C_DATA_TIMING_STOP_SETUP_Pos        (16)                                           /**< (I2C_DATA_TIMING) The Stop Setup [7:0] timer determines the SDAT setup time from the rising edge of SCLK for a STOP condition. Position */
#define I2C_DATA_TIMING_STOP_SETUP_Msk        (0xFFU << I2C_DATA_TIMING_STOP_SETUP_Pos)      /**< (I2C_DATA_TIMING) The Stop Setup [7:0] timer determines the SDAT setup time from the rising edge of SCLK for a STOP condition. Mask */
#define I2C_DATA_TIMING_STOP_SETUP(value)     (I2C_DATA_TIMING_STOP_SETUP_Msk & ((value) << I2C_DATA_TIMING_STOP_SETUP_Pos))
#define I2C_DATA_TIMING_FIRST_START_HOLD_Pos  (24)                                           /**< (I2C_DATA_TIMING) This field determines the SCL hold time following SDA driven low during the first START bit in a transfer. It is the parameter\n      THD:STA in the I2C Specification for an initial START bit. Repeated START hold time is determined by the Repeated START Hold Time Register. Position */
#define I2C_DATA_TIMING_FIRST_START_HOLD_Msk  (0xFFU << I2C_DATA_TIMING_FIRST_START_HOLD_Pos)  /**< (I2C_DATA_TIMING) This field determines the SCL hold time following SDA driven low during the first START bit in a transfer. It is the parameter\n      THD:STA in the I2C Specification for an initial START bit. Repeated START hold time is determined by the Repeated START Hold Time Register. Mask */
#define I2C_DATA_TIMING_FIRST_START_HOLD(value) (I2C_DATA_TIMING_FIRST_START_HOLD_Msk & ((value) << I2C_DATA_TIMING_FIRST_START_HOLD_Pos))
#define I2C_DATA_TIMING_Msk                   (0xFFFFFFFFUL)                                 /**< (I2C_DATA_TIMING) Register Mask  */

/* -------- I2C_TIME_OUT_SCALING : (I2C Offset: 0x44) (R/W 32) Time-Out Scaling Register -------- */

typedef union
{
  struct
  {
    uint32_t :24;                       /**< bit:  0..23  Reserved                                      */
    uint32_t BUS_IDLE_MIN:8;            /**< bit: 24..31  Bus Idle Minimum time = Bus Idle Min [7:0] x Baud_Clock_Period */
  };
  uint32_t w;
} __I2C_TIME_OUT_SCALING_bits_t;
#define I2C_TIME_OUT_SCALING_RESETVALUE     (0x4B9CC2C7U)                                 /**<  (I2C_TIME_OUT_SCALING) Time-Out Scaling Register  Reset Value */

#define I2C_TIME_OUT_SCALING_BUS_IDLE_MIN_Pos (24)                                           /**< (I2C_TIME_OUT_SCALING) Bus Idle Minimum time = Bus Idle Min [7:0] x Baud_Clock_Period Position */
#define I2C_TIME_OUT_SCALING_BUS_IDLE_MIN_Msk (0xFFU << I2C_TIME_OUT_SCALING_BUS_IDLE_MIN_Pos)  /**< (I2C_TIME_OUT_SCALING) Bus Idle Minimum time = Bus Idle Min [7:0] x Baud_Clock_Period Mask */
#define I2C_TIME_OUT_SCALING_BUS_IDLE_MIN(value) (I2C_TIME_OUT_SCALING_BUS_IDLE_MIN_Msk & ((value) << I2C_TIME_OUT_SCALING_BUS_IDLE_MIN_Pos))
#define I2C_TIME_OUT_SCALING_Msk              (0xFF000000UL)                                 /**< (I2C_TIME_OUT_SCALING) Register Mask  */

/* -------- I2C_WAKE_STATUS : (I2C Offset: 0x60) (R/W 32) WAKE STATUS Register -------- */

typedef union
{
  struct
  {
    uint32_t START_BIT_DETECTION:1;     /**< bit:      0  This bit is set to '1' when a START bit is detected while the controller is enabled. This bit is cleared to '0' when\n      written with a '1'. Writes of '0' have no effect. (R/WC) */
    uint32_t :31;                       /**< bit:  1..31  Reserved                                      */
  };
  uint32_t w;
} __I2C_WAKE_STATUS_bits_t;
#define I2C_WAKE_STATUS_RESETVALUE          (0x00U)                                       /**<  (I2C_WAKE_STATUS) WAKE STATUS Register  Reset Value */

#define I2C_WAKE_STATUS_START_BIT_DETECTION_Pos (0)                                            /**< (I2C_WAKE_STATUS) This bit is set to '1' when a START bit is detected while the controller is enabled. This bit is cleared to '0' when\n      written with a '1'. Writes of '0' have no effect. (R/WC) Position */
#define I2C_WAKE_STATUS_START_BIT_DETECTION_Msk (0x1U << I2C_WAKE_STATUS_START_BIT_DETECTION_Pos)  /**< (I2C_WAKE_STATUS) This bit is set to '1' when a START bit is detected while the controller is enabled. This bit is cleared to '0' when\n      written with a '1'. Writes of '0' have no effect. (R/WC) Mask */
#define I2C_WAKE_STATUS_Msk                   (0x00000001UL)                                 /**< (I2C_WAKE_STATUS) Register Mask  */

/* -------- I2C_WAKE_ENABLE : (I2C Offset: 0x64) (R/W 32) WAKE ENABLE Register -------- */

typedef union
{
  struct
  {
    uint32_t START_DETECT_INT_EN:1;     /**< bit:      0  Enable Start Bit Detection Interrupt. The Start Bit Detection Interrupt is wake-capable.\n         1=Start Bit Detection Interrupt enabled. \n         0=Start Bit Detection Interrupt disabled.\n */
    uint32_t :31;                       /**< bit:  1..31  Reserved                                      */
  };
  uint32_t w;
} __I2C_WAKE_ENABLE_bits_t;
#define I2C_WAKE_ENABLE_RESETVALUE          (0x00U)                                       /**<  (I2C_WAKE_ENABLE) WAKE ENABLE Register  Reset Value */

#define I2C_WAKE_ENABLE_START_DETECT_INT_EN_Pos (0)                                            /**< (I2C_WAKE_ENABLE) Enable Start Bit Detection Interrupt. The Start Bit Detection Interrupt is wake-capable.\n         1=Start Bit Detection Interrupt enabled. \n         0=Start Bit Detection Interrupt disabled.\n Position */
#define I2C_WAKE_ENABLE_START_DETECT_INT_EN_Msk (0x1U << I2C_WAKE_ENABLE_START_DETECT_INT_EN_Pos)  /**< (I2C_WAKE_ENABLE) Enable Start Bit Detection Interrupt. The Start Bit Detection Interrupt is wake-capable.\n         1=Start Bit Detection Interrupt enabled. \n         0=Start Bit Detection Interrupt disabled.\n Mask */
#define I2C_WAKE_ENABLE_Msk                   (0x00000001UL)                                 /**< (I2C_WAKE_ENABLE) Register Mask  */

/* -------- I2C_SLAVE_ADDRESS : (I2C Offset: 0x6c) (R/W 8) This is the Slave Address Register.\n -------- */

typedef union
{
  struct
  {
    uint8_t  SLAVEADD:8;                /**< bit:   0..7  This register stores the value of the Slave Address and Direction Bit from the 1st byte of a Slave transfer.\n    This is loaded immediately upon receipt of the address byte, before the ACK/NAK 9th clock. \n */
  };
  uint8_t  w;
} __I2C_SLAVE_ADDRESS_bits_t;
#define I2C_SLAVE_ADDRESS_RESETVALUE        (0x00U)                                       /**<  (I2C_SLAVE_ADDRESS) This is the Slave Address Register.\n  Reset Value */

#define I2C_SLAVE_ADDRESS_SLAVEADD_Pos        (0)                                            /**< (I2C_SLAVE_ADDRESS) This register stores the value of the Slave Address and Direction Bit from the 1st byte of a Slave transfer.\n    This is loaded immediately upon receipt of the address byte, before the ACK/NAK 9th clock. \n Position */
#define I2C_SLAVE_ADDRESS_SLAVEADD_Msk        (0xFFU << I2C_SLAVE_ADDRESS_SLAVEADD_Pos)      /**< (I2C_SLAVE_ADDRESS) This register stores the value of the Slave Address and Direction Bit from the 1st byte of a Slave transfer.\n    This is loaded immediately upon receipt of the address byte, before the ACK/NAK 9th clock. \n Mask */
#define I2C_SLAVE_ADDRESS_SLAVEADD(value)     (I2C_SLAVE_ADDRESS_SLAVEADD_Msk & ((value) << I2C_SLAVE_ADDRESS_SLAVEADD_Pos))
#define I2C_SLAVE_ADDRESS_Msk                 (0x000000FFUL)                                 /**< (I2C_SLAVE_ADDRESS) Register Mask  */

/* -------- I2C_PROMISCUOUS_INT : (I2C Offset: 0x70) (R/W 8) This is the Promiscuous Interrupt Register. This register bit will be functional only in Promiscuous mode.\n -------- */

typedef union
{
  struct
  {
    uint8_t  PROMISCUOUS_ADDSTAT:1;     /**< bit:      0  This is the Promiscuous Address Status interrupt. This bit is functional only in Promiscuous mode. This bit is set \n         on the 8th clock of the I2C Address. This bit will hold the Clock line low till this register bit is cleared. In other words, \n         Software should read the address program ACK/NAK and clear this bit for the ACK/NAK clock to appear on the I2C clock (SCL) line. \n         This is Write 1 to clear. R/W1C. */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __I2C_PROMISCUOUS_INT_bits_t;
#define I2C_PROMISCUOUS_INT_RESETVALUE      (0x00U)                                       /**<  (I2C_PROMISCUOUS_INT) This is the Promiscuous Interrupt Register. This register bit will be functional only in Promiscuous mode.\n  Reset Value */

#define I2C_PROMISCUOUS_INT_PROMISCUOUS_ADDSTAT_Pos (0)                                            /**< (I2C_PROMISCUOUS_INT) This is the Promiscuous Address Status interrupt. This bit is functional only in Promiscuous mode. This bit is set \n         on the 8th clock of the I2C Address. This bit will hold the Clock line low till this register bit is cleared. In other words, \n         Software should read the address program ACK/NAK and clear this bit for the ACK/NAK clock to appear on the I2C clock (SCL) line. \n         This is Write 1 to clear. R/W1C. Position */
#define I2C_PROMISCUOUS_INT_PROMISCUOUS_ADDSTAT_Msk (0x1U << I2C_PROMISCUOUS_INT_PROMISCUOUS_ADDSTAT_Pos)  /**< (I2C_PROMISCUOUS_INT) This is the Promiscuous Address Status interrupt. This bit is functional only in Promiscuous mode. This bit is set \n         on the 8th clock of the I2C Address. This bit will hold the Clock line low till this register bit is cleared. In other words, \n         Software should read the address program ACK/NAK and clear this bit for the ACK/NAK clock to appear on the I2C clock (SCL) line. \n         This is Write 1 to clear. R/W1C. Mask */
#define I2C_PROMISCUOUS_INT_Msk               (0x00000001UL)                                 /**< (I2C_PROMISCUOUS_INT) Register Mask  */

/* -------- I2C_PROMIS_INTEN : (I2C Offset: 0x74) (R/W 8) This is the Promiscuous Interrupt Enable Register.\n -------- */

typedef union
{
  struct
  {
    uint8_t  PROMIS_ADDSTAT_INTEN:1;    /**< bit:      0  This is the Promiscuous interrupt enable register.\n         1= Interrupt Enable. \n         0= Interrupt Disabled. \n */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __I2C_PROMIS_INTEN_bits_t;
#define I2C_PROMIS_INTEN_RESETVALUE         (0x00U)                                       /**<  (I2C_PROMIS_INTEN) This is the Promiscuous Interrupt Enable Register.\n  Reset Value */

#define I2C_PROMIS_INTEN_PROMIS_ADDSTAT_INTEN_Pos (0)                                            /**< (I2C_PROMIS_INTEN) This is the Promiscuous interrupt enable register.\n         1= Interrupt Enable. \n         0= Interrupt Disabled. \n Position */
#define I2C_PROMIS_INTEN_PROMIS_ADDSTAT_INTEN_Msk (0x1U << I2C_PROMIS_INTEN_PROMIS_ADDSTAT_INTEN_Pos)  /**< (I2C_PROMIS_INTEN) This is the Promiscuous interrupt enable register.\n         1= Interrupt Enable. \n         0= Interrupt Disabled. \n Mask */
#define I2C_PROMIS_INTEN_Msk                  (0x00000001UL)                                 /**< (I2C_PROMIS_INTEN) Register Mask  */

/* -------- I2C_PROMIS_CTRL : (I2C Offset: 0x78) (R/W 8) This is the Promiscuous Control Register. This register is functional only in Promiscuous mode.\n -------- */

typedef union
{
  struct
  {
    uint8_t  PROMIS_ACK_NAK:1;          /**< bit:      0  This is the Promiscuous ACK / NAK response register. This bit has no effect in Normal mode of operation.\n         1= ACK the address byte. \n         0= NAK the address byte. \n */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __I2C_PROMIS_CTRL_bits_t;
#define I2C_PROMIS_CTRL_RESETVALUE          (0x00U)                                       /**<  (I2C_PROMIS_CTRL) This is the Promiscuous Control Register. This register is functional only in Promiscuous mode.\n  Reset Value */

#define I2C_PROMIS_CTRL_PROMIS_ACK_NAK_Pos    (0)                                            /**< (I2C_PROMIS_CTRL) This is the Promiscuous ACK / NAK response register. This bit has no effect in Normal mode of operation.\n         1= ACK the address byte. \n         0= NAK the address byte. \n Position */
#define I2C_PROMIS_CTRL_PROMIS_ACK_NAK_Msk    (0x1U << I2C_PROMIS_CTRL_PROMIS_ACK_NAK_Pos)   /**< (I2C_PROMIS_CTRL) This is the Promiscuous ACK / NAK response register. This bit has no effect in Normal mode of operation.\n         1= ACK the address byte. \n         0= NAK the address byte. \n Mask */
#define I2C_PROMIS_CTRL_Msk                   (0x00000001UL)                                 /**< (I2C_PROMIS_CTRL) Register Mask  */

/** \brief I2C register offsets definitions */
#define I2C_CONTROL_OFFSET           (0x00)         /**< (I2C_CONTROL) Control Register Offset */
#define I2C_OWN_OFFSET               (0x04)         /**< (I2C_OWN) Own Address Register\n           Note that the Data Register and Own Address fields are offset by one bit, so that programming Own Address 1 with a value of 55h will result in the value AAh being recognized as the SMB Controller Core slave address. Offset */
#define I2C_DATA_REG_OFFSET          (0x08)         /**< (I2C_DATA_REG) This register holds the data that are either shifted out to or shifted in from the I2C port. Offset */
#define I2C_REPEATED_START_HOLD_TIME_OFFSET (0x18)         /**< (I2C_REPEATED_START_HOLD_TIME) Repeated Start Hold Time Register Offset */
#define I2C_COMPLETION_OFFSET        (0x20)         /**< (I2C_COMPLETION) Completion Register Offset */
#define I2C_CONFIGURATION_OFFSET     (0x28)         /**< (I2C_CONFIGURATION) Configuration Register Offset */
#define I2C_BUS_CLOCK_OFFSET         (0x2C)         /**< (I2C_BUS_CLOCK) Bus Clock Register Offset */
#define I2C_BLOCK_ID_OFFSET          (0x30)         /**< (I2C_BLOCK_ID) Block ID Register Offset */
#define I2C_REVISION_OFFSET          (0x34)         /**< (I2C_REVISION) Revision Register Offset */
#define I2C_BIT_BANG_CONTROL_OFFSET  (0x38)         /**< (I2C_BIT_BANG_CONTROL) Bit-Bang Control Register Offset */
#define I2C_CLK_SYNC_REG_OFFSET      (0x3C)         /**< (I2C_CLK_SYNC_REG) This is Clock Sync Register. This register must not be written, or undesirable results may occur.\n Offset */
#define I2C_DATA_TIMING_OFFSET       (0x40)         /**< (I2C_DATA_TIMING) Data Timing Register Offset */
#define I2C_TIME_OUT_SCALING_OFFSET  (0x44)         /**< (I2C_TIME_OUT_SCALING) Time-Out Scaling Register Offset */
#define I2C_WAKE_STATUS_OFFSET       (0x60)         /**< (I2C_WAKE_STATUS) WAKE STATUS Register Offset */
#define I2C_WAKE_ENABLE_OFFSET       (0x64)         /**< (I2C_WAKE_ENABLE) WAKE ENABLE Register Offset */
#define I2C_SLAVE_ADDRESS_OFFSET     (0x6C)         /**< (I2C_SLAVE_ADDRESS) This is the Slave Address Register.\n Offset */
#define I2C_PROMISCUOUS_INT_OFFSET   (0x70)         /**< (I2C_PROMISCUOUS_INT) This is the Promiscuous Interrupt Register. This register bit will be functional only in Promiscuous mode.\n Offset */
#define I2C_PROMIS_INTEN_OFFSET      (0x74)         /**< (I2C_PROMIS_INTEN) This is the Promiscuous Interrupt Enable Register.\n Offset */
#define I2C_PROMIS_CTRL_OFFSET       (0x78)         /**< (I2C_PROMIS_CTRL) This is the Promiscuous Control Register. This register is functional only in Promiscuous mode.\n Offset */

/** \brief I2C register API structure */
typedef struct
{  /* The I2C interface can handle standard I2C interface. */
  __O   __I2C_CONTROL_bits_t           CONTROL;       /**< Offset: 0x00 ( /W  32) Control Register */
  __I   __I2C_STATUS_bits_t            STATUS;        /**< Offset: 0x00 (R/   32) Status Register */
  __IO  __I2C_OWN_bits_t               OWN;           /**< Offset: 0x04 (R/W  32) Own Address Register\n           Note that the Data Register and Own Address fields are offset by one bit, so that programming Own Address 1 with a value of 55h will result in the value AAh being recognized as the SMB Controller Core slave address. */
  __IO  __I2C_DATA_REG_bits_t          DATA_REG;      /**< Offset: 0x08 (R/W   8) This register holds the data that are either shifted out to or shifted in from the I2C port. */
  __IO  __I2C_REPEATED_START_HOLD_TIME_bits_t REPEATED_START_HOLD_TIME; /**< Offset: 0x18 (R/W  32) Repeated Start Hold Time Register */
  __IO  __I2C_COMPLETION_bits_t        COMPLETION;    /**< Offset: 0x20 (R/W  32) Completion Register */
  __IO  __I2C_CONFIGURATION_bits_t     CONFIGURATION; /**< Offset: 0x28 (R/W  32) Configuration Register */
  __IO  __I2C_BUS_CLOCK_bits_t         BUS_CLOCK;     /**< Offset: 0x2C (R/W  32) Bus Clock Register */
  __I   __I2C_BLOCK_ID_bits_t          BLOCK_ID;      /**< Offset: 0x30 (R/    8) Block ID Register */
  __I   __I2C_REVISION_bits_t          REVISION;      /**< Offset: 0x34 (R/    8) Revision Register */
  __IO  __I2C_BIT_BANG_CONTROL_bits_t  BIT_BANG_CONTROL; /**< Offset: 0x38 (R/W  32) Bit-Bang Control Register */
  __I   __I2C_CLK_SYNC_REG_bits_t      CLK_SYNC_REG;  /**< Offset: 0x3C (R/    8) This is Clock Sync Register. This register must not be written, or undesirable results may occur.\n */
  __IO  __I2C_DATA_TIMING_bits_t       DATA_TIMING;   /**< Offset: 0x40 (R/W  32) Data Timing Register */
  __IO  __I2C_TIME_OUT_SCALING_bits_t  TIME_OUT_SCALING; /**< Offset: 0x44 (R/W  32) Time-Out Scaling Register */
  __IO  __I2C_WAKE_STATUS_bits_t       WAKE_STATUS;   /**< Offset: 0x60 (R/W  32) WAKE STATUS Register */
  __IO  __I2C_WAKE_ENABLE_bits_t       WAKE_ENABLE;   /**< Offset: 0x64 (R/W  32) WAKE ENABLE Register */
  __IO  __I2C_SLAVE_ADDRESS_bits_t     SLAVE_ADDRESS; /**< Offset: 0x6C (R/W   8) This is the Slave Address Register.\n */
  __IO  __I2C_PROMISCUOUS_INT_bits_t   PROMISCUOUS_INT; /**< Offset: 0x70 (R/W   8) This is the Promiscuous Interrupt Register. This register bit will be functional only in Promiscuous mode.\n */
  __IO  __I2C_PROMIS_INTEN_bits_t      PROMIS_INTEN;  /**< Offset: 0x74 (R/W   8) This is the Promiscuous Interrupt Enable Register.\n */
  __IO  __I2C_PROMIS_CTRL_bits_t       PROMIS_CTRL;   /**< Offset: 0x78 (R/W   8) This is the Promiscuous Control Register. This register is functional only in Promiscuous mode.\n */
} i2c_registers_t;
/** @}  end of The I2C interface can handle standard I2C interface. */

#endif /* _PIC32CX_0525SG12_I2C_COMPONENT_H_ */
