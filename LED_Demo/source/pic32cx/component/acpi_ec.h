/**
 * \brief Component description for PIC32CX/0525SG12 ACPI_EC
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
#ifndef _PIC32CX_0525SG12_ACPI_EC_COMPONENT_H_
#define _PIC32CX_0525SG12_ACPI_EC_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_ACPI_EC The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR ACPI_EC */
/* ========================================================================== */

/* -------- ACPI_EC_ACPI_OS_DATA_BYTE_ : (ACPI_EC Offset: 0x00) (R/W 8) This is byte n of the 32-bit ACPI-OS DATA BYTES[3:0]. Writes by the ACPI_OS to the ACPI-OS DATA BYTES[n] are aliased\n    to the OS2EC DATA BYTES[n]. Reads by the ACPI_OS from the ACPI-OS DATA BYTES[n] are aliased to the EC2OS DATA BYTES[n]. -------- */

typedef union
{
  uint8_t  w;
} __ACPI_EC_ACPI_OS_DATA_BYTE__bits_t;
#define ACPI_EC_ACPI_OS_DATA_BYTE__RESETVALUE (0x00U)                                       /**<  (ACPI_EC_ACPI_OS_DATA_BYTE_) This is byte n of the 32-bit ACPI-OS DATA BYTES[3:0]. Writes by the ACPI_OS to the ACPI-OS DATA BYTES[n] are aliased\n    to the OS2EC DATA BYTES[n]. Reads by the ACPI_OS from the ACPI-OS DATA BYTES[n] are aliased to the EC2OS DATA BYTES[n].  Reset Value */

#define ACPI_EC_ACPI_OS_DATA_BYTE__Msk        (0x00000000UL)                                 /**< (ACPI_EC_ACPI_OS_DATA_BYTE_) Register Mask  */

/* -------- ACPI_EC_ACPI_OS_COMMAND : (ACPI_EC Offset: 0x04) (/W 8) Writes to the this register are aliased in the OS2EC Data EC Byte 0 Register.\n              Writes to this register also set the CMD and IBF bits in the OS STATUS OS Register -------- */

typedef union
{
  uint8_t  w;
} __ACPI_EC_ACPI_OS_COMMAND_bits_t;
#define ACPI_EC_ACPI_OS_COMMAND_RESETVALUE  (0x00U)                                       /**<  (ACPI_EC_ACPI_OS_COMMAND) Writes to the this register are aliased in the OS2EC Data EC Byte 0 Register.\n              Writes to this register also set the CMD and IBF bits in the OS STATUS OS Register  Reset Value */

#define ACPI_EC_ACPI_OS_COMMAND_Msk           (0x00000000UL)                                 /**< (ACPI_EC_ACPI_OS_COMMAND) Register Mask  */

/* -------- ACPI_EC_OS_STATUS : (ACPI_EC Offset: 0x04) (R/ 8) OS STATUS -------- */

typedef union
{
  struct
  {
    uint8_t  OBF:1;                     /**< bit:      0  The Output Buffer Full bit is set to indicate that a the ACPI_EC has written a data to the ACPI_OS and that data is ready.\n     This bit is automatically cleared when all the data has been read by the ACPI_OS.     Note: The setting and clearing of this OBF varies depending on the setting FOUR_BYTE_ACCESS bit in the OS Byte Control Register. */
    uint8_t  IBF:1;                     /**< bit:      1  The Input Buffer Full bit is set to indicate that a the ACPI_OS has written a command or data to the ACPI_EC and that\n     data is ready. This bit is automatically cleared when data has been read by the ACPI_EC.\n     Note: The setting and clearing of this IBF varies depending on the setting of the following bits: CMD bit in this register\n     and FOUR_BYTE_ACCESS bit in the OS Byte Control Register. */
    uint8_t  UD1B:1;                    /**< bit:      2  User Defined                                  */
    uint8_t  CMD:1;                     /**< bit:      3  This bit is set when the OS2EC Data EC Byte 0 Register contains a command byte written into ACPI OS COMMAND Register;\n     this bit is cleared when the OS2EC DATA BYTES[3:0] contains a data byte written into the ACPI-OS DATA BYTES[3:0].\n     This bit is hardware controlled:\n     ACPI_OS writes to any of the four ACPI-OS DATA BYTES[3:0] bytes clears this bit\n     ACPI_OS writes to the ACPI OS COMMAND Register sets this bit.\n     Note: This bit allows the embedded controller to differentiate the start of a command sequence from a data byte write operation. */
    uint8_t  BURST:1;                   /**< bit:      4  The BURST bit is set when the ACPI_EC is in Burst Mode for polled command processing; the BURST bit is cleared when the\n     ACPI_EC is in Normal mode for interrupt-driven command processing. The BURST bit is is an ACPI_EC-maintained software flag that\n     indicates the embedded controller has received the Burst Enable command from the host, has halted normal processing, and is\n     waiting for a series of commands to be sent from the host. */
    uint8_t  SCI_EVT:1;                 /**< bit:      5  This bit is set by software when an SCI event is pending; i.e., the ACPI_EC is requesting an SCI query; SCI Event flag\n     is clear when no SCI events are pending. This bit is an ACPI_EC-maintained software flag that is set when the embedded controller\n     has detected an internal event that requires operating system attention. The ACPI_EC sets this bit before generating an SCI to the OS. */
    uint8_t  SMI_EVT:1;                 /**< bit:      6  This bit is set when an SMI event is pending; i.e., the ACPI_EC is requesting an SMI query; This bit is cleared when\n     no SMI events are pending. This bit is an ACPI_EC-maintained software flag that is set when the ACPI_EC has detected an internal\n     event that requires system management interrupt handler attention. The ACPI_EC sets this bit before generating an SMI. */
    uint8_t  UD0B:1;                    /**< bit:      7  User Defined                                  */
  };
  uint8_t  w;
} __ACPI_EC_OS_STATUS_bits_t;
#define ACPI_EC_OS_STATUS_RESETVALUE        (0x00U)                                       /**<  (ACPI_EC_OS_STATUS) OS STATUS  Reset Value */

#define ACPI_EC_OS_STATUS_OBF_Pos             (0)                                            /**< (ACPI_EC_OS_STATUS) The Output Buffer Full bit is set to indicate that a the ACPI_EC has written a data to the ACPI_OS and that data is ready.\n     This bit is automatically cleared when all the data has been read by the ACPI_OS.     Note: The setting and clearing of this OBF varies depending on the setting FOUR_BYTE_ACCESS bit in the OS Byte Control Register. Position */
#define ACPI_EC_OS_STATUS_OBF_Msk             (0x1U << ACPI_EC_OS_STATUS_OBF_Pos)            /**< (ACPI_EC_OS_STATUS) The Output Buffer Full bit is set to indicate that a the ACPI_EC has written a data to the ACPI_OS and that data is ready.\n     This bit is automatically cleared when all the data has been read by the ACPI_OS.     Note: The setting and clearing of this OBF varies depending on the setting FOUR_BYTE_ACCESS bit in the OS Byte Control Register. Mask */
#define ACPI_EC_OS_STATUS_IBF_Pos             (1)                                            /**< (ACPI_EC_OS_STATUS) The Input Buffer Full bit is set to indicate that a the ACPI_OS has written a command or data to the ACPI_EC and that\n     data is ready. This bit is automatically cleared when data has been read by the ACPI_EC.\n     Note: The setting and clearing of this IBF varies depending on the setting of the following bits: CMD bit in this register\n     and FOUR_BYTE_ACCESS bit in the OS Byte Control Register. Position */
#define ACPI_EC_OS_STATUS_IBF_Msk             (0x1U << ACPI_EC_OS_STATUS_IBF_Pos)            /**< (ACPI_EC_OS_STATUS) The Input Buffer Full bit is set to indicate that a the ACPI_OS has written a command or data to the ACPI_EC and that\n     data is ready. This bit is automatically cleared when data has been read by the ACPI_EC.\n     Note: The setting and clearing of this IBF varies depending on the setting of the following bits: CMD bit in this register\n     and FOUR_BYTE_ACCESS bit in the OS Byte Control Register. Mask */
#define ACPI_EC_OS_STATUS_UD1B_Pos            (2)                                            /**< (ACPI_EC_OS_STATUS) User Defined Position */
#define ACPI_EC_OS_STATUS_UD1B_Msk            (0x1U << ACPI_EC_OS_STATUS_UD1B_Pos)           /**< (ACPI_EC_OS_STATUS) User Defined Mask */
#define ACPI_EC_OS_STATUS_CMD_Pos             (3)                                            /**< (ACPI_EC_OS_STATUS) This bit is set when the OS2EC Data EC Byte 0 Register contains a command byte written into ACPI OS COMMAND Register;\n     this bit is cleared when the OS2EC DATA BYTES[3:0] contains a data byte written into the ACPI-OS DATA BYTES[3:0].\n     This bit is hardware controlled:\n     ACPI_OS writes to any of the four ACPI-OS DATA BYTES[3:0] bytes clears this bit\n     ACPI_OS writes to the ACPI OS COMMAND Register sets this bit.\n     Note: This bit allows the embedded controller to differentiate the start of a command sequence from a data byte write operation. Position */
#define ACPI_EC_OS_STATUS_CMD_Msk             (0x1U << ACPI_EC_OS_STATUS_CMD_Pos)            /**< (ACPI_EC_OS_STATUS) This bit is set when the OS2EC Data EC Byte 0 Register contains a command byte written into ACPI OS COMMAND Register;\n     this bit is cleared when the OS2EC DATA BYTES[3:0] contains a data byte written into the ACPI-OS DATA BYTES[3:0].\n     This bit is hardware controlled:\n     ACPI_OS writes to any of the four ACPI-OS DATA BYTES[3:0] bytes clears this bit\n     ACPI_OS writes to the ACPI OS COMMAND Register sets this bit.\n     Note: This bit allows the embedded controller to differentiate the start of a command sequence from a data byte write operation. Mask */
#define ACPI_EC_OS_STATUS_BURST_Pos           (4)                                            /**< (ACPI_EC_OS_STATUS) The BURST bit is set when the ACPI_EC is in Burst Mode for polled command processing; the BURST bit is cleared when the\n     ACPI_EC is in Normal mode for interrupt-driven command processing. The BURST bit is is an ACPI_EC-maintained software flag that\n     indicates the embedded controller has received the Burst Enable command from the host, has halted normal processing, and is\n     waiting for a series of commands to be sent from the host. Position */
#define ACPI_EC_OS_STATUS_BURST_Msk           (0x1U << ACPI_EC_OS_STATUS_BURST_Pos)          /**< (ACPI_EC_OS_STATUS) The BURST bit is set when the ACPI_EC is in Burst Mode for polled command processing; the BURST bit is cleared when the\n     ACPI_EC is in Normal mode for interrupt-driven command processing. The BURST bit is is an ACPI_EC-maintained software flag that\n     indicates the embedded controller has received the Burst Enable command from the host, has halted normal processing, and is\n     waiting for a series of commands to be sent from the host. Mask */
#define ACPI_EC_OS_STATUS_SCI_EVT_Pos         (5)                                            /**< (ACPI_EC_OS_STATUS) This bit is set by software when an SCI event is pending; i.e., the ACPI_EC is requesting an SCI query; SCI Event flag\n     is clear when no SCI events are pending. This bit is an ACPI_EC-maintained software flag that is set when the embedded controller\n     has detected an internal event that requires operating system attention. The ACPI_EC sets this bit before generating an SCI to the OS. Position */
#define ACPI_EC_OS_STATUS_SCI_EVT_Msk         (0x1U << ACPI_EC_OS_STATUS_SCI_EVT_Pos)        /**< (ACPI_EC_OS_STATUS) This bit is set by software when an SCI event is pending; i.e., the ACPI_EC is requesting an SCI query; SCI Event flag\n     is clear when no SCI events are pending. This bit is an ACPI_EC-maintained software flag that is set when the embedded controller\n     has detected an internal event that requires operating system attention. The ACPI_EC sets this bit before generating an SCI to the OS. Mask */
#define ACPI_EC_OS_STATUS_SMI_EVT_Pos         (6)                                            /**< (ACPI_EC_OS_STATUS) This bit is set when an SMI event is pending; i.e., the ACPI_EC is requesting an SMI query; This bit is cleared when\n     no SMI events are pending. This bit is an ACPI_EC-maintained software flag that is set when the ACPI_EC has detected an internal\n     event that requires system management interrupt handler attention. The ACPI_EC sets this bit before generating an SMI. Position */
#define ACPI_EC_OS_STATUS_SMI_EVT_Msk         (0x1U << ACPI_EC_OS_STATUS_SMI_EVT_Pos)        /**< (ACPI_EC_OS_STATUS) This bit is set when an SMI event is pending; i.e., the ACPI_EC is requesting an SMI query; This bit is cleared when\n     no SMI events are pending. This bit is an ACPI_EC-maintained software flag that is set when the ACPI_EC has detected an internal\n     event that requires system management interrupt handler attention. The ACPI_EC sets this bit before generating an SMI. Mask */
#define ACPI_EC_OS_STATUS_UD0B_Pos            (7)                                            /**< (ACPI_EC_OS_STATUS) User Defined Position */
#define ACPI_EC_OS_STATUS_UD0B_Msk            (0x1U << ACPI_EC_OS_STATUS_UD0B_Pos)           /**< (ACPI_EC_OS_STATUS) User Defined Mask */
#define ACPI_EC_OS_STATUS_Msk                 (0x000000FFUL)                                 /**< (ACPI_EC_OS_STATUS) Register Mask  */

/* -------- ACPI_EC_OS_BYTE_CONTROL : (ACPI_EC Offset: 0x05) (R/ 8) OS Byte Control Register -------- */

typedef union
{
  struct
  {
    uint8_t  FOUR_BYTE_ACCESS:1;        /**< bit:      0  When this bit is set to '1', the ACPI Embedded Controller Interface (ACPI-ECI) accesses four bytes through the\n     ACPI-OS DATA BYTES[3:0]. When this bit is cleared to '0', the ACPI Embedded Controller Interface (ACPI-ECI) accesses one byte\n     through the ACPI OS Data Register Byte 0 Register. This corresponds to Legacy Mode. This bit effects the behaviour of the IBF\n     and OBF bits in the OS STATUS OS Register. */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __ACPI_EC_OS_BYTE_CONTROL_bits_t;
#define ACPI_EC_OS_BYTE_CONTROL_RESETVALUE  (0x00U)                                       /**<  (ACPI_EC_OS_BYTE_CONTROL) OS Byte Control Register  Reset Value */

#define ACPI_EC_OS_BYTE_CONTROL_FOUR_BYTE_ACCESS_Pos (0)                                            /**< (ACPI_EC_OS_BYTE_CONTROL) When this bit is set to '1', the ACPI Embedded Controller Interface (ACPI-ECI) accesses four bytes through the\n     ACPI-OS DATA BYTES[3:0]. When this bit is cleared to '0', the ACPI Embedded Controller Interface (ACPI-ECI) accesses one byte\n     through the ACPI OS Data Register Byte 0 Register. This corresponds to Legacy Mode. This bit effects the behaviour of the IBF\n     and OBF bits in the OS STATUS OS Register. Position */
#define ACPI_EC_OS_BYTE_CONTROL_FOUR_BYTE_ACCESS_Msk (0x1U << ACPI_EC_OS_BYTE_CONTROL_FOUR_BYTE_ACCESS_Pos)  /**< (ACPI_EC_OS_BYTE_CONTROL) When this bit is set to '1', the ACPI Embedded Controller Interface (ACPI-ECI) accesses four bytes through the\n     ACPI-OS DATA BYTES[3:0]. When this bit is cleared to '0', the ACPI Embedded Controller Interface (ACPI-ECI) accesses one byte\n     through the ACPI OS Data Register Byte 0 Register. This corresponds to Legacy Mode. This bit effects the behaviour of the IBF\n     and OBF bits in the OS STATUS OS Register. Mask */
#define ACPI_EC_OS_BYTE_CONTROL_Msk           (0x00000001UL)                                 /**< (ACPI_EC_OS_BYTE_CONTROL) Register Mask  */

/* -------- ACPI_EC_EC2OS_DATA_EC_BYTE_ : (ACPI_EC Offset: 0x100) (R/W 8) This is byte n of the 32-bit EC2OS DATA BYTES[3:0]. Writes by the ACPI_EC to the EC2OS DATA BYTES[3:0] are aliased to the\n    ACPI-OS DATA BYTES[3:0]. -------- */

typedef union
{
  uint8_t  w;
} __ACPI_EC_EC2OS_DATA_EC_BYTE__bits_t;
#define ACPI_EC_EC2OS_DATA_EC_BYTE__RESETVALUE (0x00U)                                       /**<  (ACPI_EC_EC2OS_DATA_EC_BYTE_) This is byte n of the 32-bit EC2OS DATA BYTES[3:0]. Writes by the ACPI_EC to the EC2OS DATA BYTES[3:0] are aliased to the\n    ACPI-OS DATA BYTES[3:0].  Reset Value */

#define ACPI_EC_EC2OS_DATA_EC_BYTE__Msk       (0x00000000UL)                                 /**< (ACPI_EC_EC2OS_DATA_EC_BYTE_) Register Mask  */

/* -------- ACPI_EC_EC_STATUS : (ACPI_EC Offset: 0x104) (R/W 8) EC STATUS -------- */

typedef union
{
  struct
  {
    uint8_t  OBF:1;                     /**< bit:      0  The Output Buffer Full bit is set to indicate that a the ACPI_EC has written a data to the ACPI_OS and that data is ready. */
    uint8_t  IBF:1;                     /**< bit:      1  The Input Buffer Full bit is set to indicate that a the ACPI_OS has written a command or data to the ACPI_EC and that data is ready. */
    uint8_t  UD1A:1;                    /**< bit:      2  UD1A User Defined                             */
    uint8_t  CMD:1;                     /**< bit:      3  This bit is set when the OS2EC Data EC Byte 0 Register contains a command byte written into ACPI OS COMMAND Register */
    uint8_t  BURST:1;                   /**< bit:      4  The BURST bit is set when the ACPI_EC is in Burst Mode */
    uint8_t  SCI_EVT:1;                 /**< bit:      5  This bit is set by software when an SCI event is pending */
    uint8_t  SMI_EVT:1;                 /**< bit:      6  This bit is set when an SMI event is pending  */
    uint8_t  UD0A:1;                    /**< bit:      7  User Defined                                  */
  };
  uint8_t  w;
} __ACPI_EC_EC_STATUS_bits_t;
#define ACPI_EC_EC_STATUS_RESETVALUE        (0x00U)                                       /**<  (ACPI_EC_EC_STATUS) EC STATUS  Reset Value */

#define ACPI_EC_EC_STATUS_OBF_Pos             (0)                                            /**< (ACPI_EC_EC_STATUS) The Output Buffer Full bit is set to indicate that a the ACPI_EC has written a data to the ACPI_OS and that data is ready. Position */
#define ACPI_EC_EC_STATUS_OBF_Msk             (0x1U << ACPI_EC_EC_STATUS_OBF_Pos)            /**< (ACPI_EC_EC_STATUS) The Output Buffer Full bit is set to indicate that a the ACPI_EC has written a data to the ACPI_OS and that data is ready. Mask */
#define ACPI_EC_EC_STATUS_IBF_Pos             (1)                                            /**< (ACPI_EC_EC_STATUS) The Input Buffer Full bit is set to indicate that a the ACPI_OS has written a command or data to the ACPI_EC and that data is ready. Position */
#define ACPI_EC_EC_STATUS_IBF_Msk             (0x1U << ACPI_EC_EC_STATUS_IBF_Pos)            /**< (ACPI_EC_EC_STATUS) The Input Buffer Full bit is set to indicate that a the ACPI_OS has written a command or data to the ACPI_EC and that data is ready. Mask */
#define ACPI_EC_EC_STATUS_UD1A_Pos            (2)                                            /**< (ACPI_EC_EC_STATUS) UD1A User Defined Position */
#define ACPI_EC_EC_STATUS_UD1A_Msk            (0x1U << ACPI_EC_EC_STATUS_UD1A_Pos)           /**< (ACPI_EC_EC_STATUS) UD1A User Defined Mask */
#define ACPI_EC_EC_STATUS_CMD_Pos             (3)                                            /**< (ACPI_EC_EC_STATUS) This bit is set when the OS2EC Data EC Byte 0 Register contains a command byte written into ACPI OS COMMAND Register Position */
#define ACPI_EC_EC_STATUS_CMD_Msk             (0x1U << ACPI_EC_EC_STATUS_CMD_Pos)            /**< (ACPI_EC_EC_STATUS) This bit is set when the OS2EC Data EC Byte 0 Register contains a command byte written into ACPI OS COMMAND Register Mask */
#define ACPI_EC_EC_STATUS_BURST_Pos           (4)                                            /**< (ACPI_EC_EC_STATUS) The BURST bit is set when the ACPI_EC is in Burst Mode Position */
#define ACPI_EC_EC_STATUS_BURST_Msk           (0x1U << ACPI_EC_EC_STATUS_BURST_Pos)          /**< (ACPI_EC_EC_STATUS) The BURST bit is set when the ACPI_EC is in Burst Mode Mask */
#define ACPI_EC_EC_STATUS_SCI_EVT_Pos         (5)                                            /**< (ACPI_EC_EC_STATUS) This bit is set by software when an SCI event is pending Position */
#define ACPI_EC_EC_STATUS_SCI_EVT_Msk         (0x1U << ACPI_EC_EC_STATUS_SCI_EVT_Pos)        /**< (ACPI_EC_EC_STATUS) This bit is set by software when an SCI event is pending Mask */
#define ACPI_EC_EC_STATUS_SMI_EVT_Pos         (6)                                            /**< (ACPI_EC_EC_STATUS) This bit is set when an SMI event is pending Position */
#define ACPI_EC_EC_STATUS_SMI_EVT_Msk         (0x1U << ACPI_EC_EC_STATUS_SMI_EVT_Pos)        /**< (ACPI_EC_EC_STATUS) This bit is set when an SMI event is pending Mask */
#define ACPI_EC_EC_STATUS_UD0A_Pos            (7)                                            /**< (ACPI_EC_EC_STATUS) User Defined Position */
#define ACPI_EC_EC_STATUS_UD0A_Msk            (0x1U << ACPI_EC_EC_STATUS_UD0A_Pos)           /**< (ACPI_EC_EC_STATUS) User Defined Mask */
#define ACPI_EC_EC_STATUS_Msk                 (0x000000FFUL)                                 /**< (ACPI_EC_EC_STATUS) Register Mask  */

/* -------- ACPI_EC_EC_BYTE_CONTROL : (ACPI_EC Offset: 0x105) (R/W 8) Byte Control EC-Register -------- */

typedef union
{
  struct
  {
    uint8_t  FOUR_BYTE_ACCESS:1;        /**< bit:      0  When this bit is set to '1', the ACPI Embedded Controller Interface (ACPI-ECI) accesses four bytes through the\n     ACPI-OS DATA BYTES[3:0]. When this bit is cleared to '0', the ACPI Embedded Controller Interface (ACPI-ECI) accesses one byte\n     through the ACPI OS Data Register Byte 0 Register. This corresponds to Legacy Mode. This bit effects the behaviour of the IBF\n     and OBF bits in the OS STATUS OS Register. */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __ACPI_EC_EC_BYTE_CONTROL_bits_t;
#define ACPI_EC_EC_BYTE_CONTROL_RESETVALUE  (0x00U)                                       /**<  (ACPI_EC_EC_BYTE_CONTROL) Byte Control EC-Register  Reset Value */

#define ACPI_EC_EC_BYTE_CONTROL_FOUR_BYTE_ACCESS_Pos (0)                                            /**< (ACPI_EC_EC_BYTE_CONTROL) When this bit is set to '1', the ACPI Embedded Controller Interface (ACPI-ECI) accesses four bytes through the\n     ACPI-OS DATA BYTES[3:0]. When this bit is cleared to '0', the ACPI Embedded Controller Interface (ACPI-ECI) accesses one byte\n     through the ACPI OS Data Register Byte 0 Register. This corresponds to Legacy Mode. This bit effects the behaviour of the IBF\n     and OBF bits in the OS STATUS OS Register. Position */
#define ACPI_EC_EC_BYTE_CONTROL_FOUR_BYTE_ACCESS_Msk (0x1U << ACPI_EC_EC_BYTE_CONTROL_FOUR_BYTE_ACCESS_Pos)  /**< (ACPI_EC_EC_BYTE_CONTROL) When this bit is set to '1', the ACPI Embedded Controller Interface (ACPI-ECI) accesses four bytes through the\n     ACPI-OS DATA BYTES[3:0]. When this bit is cleared to '0', the ACPI Embedded Controller Interface (ACPI-ECI) accesses one byte\n     through the ACPI OS Data Register Byte 0 Register. This corresponds to Legacy Mode. This bit effects the behaviour of the IBF\n     and OBF bits in the OS STATUS OS Register. Mask */
#define ACPI_EC_EC_BYTE_CONTROL_Msk           (0x00000001UL)                                 /**< (ACPI_EC_EC_BYTE_CONTROL) Register Mask  */

/* -------- ACPI_EC_OS2EC_DATA_EC_BYTE_ : (ACPI_EC Offset: 0x108) (R/W 8) OS_TO_EC_DATA_BYTE_n. This is byte n of the 32-bit OS2EC DATA BYTES[3:0]. When the CMD bit in the OS STATUS OS Register\n    is cleared to '0', reads by the ACPI_EC from the OS2EC DATA BYTES[3:0] are aliased to the ACPI-OS DATA BYTES[3:0]. -------- */

typedef union
{
  uint8_t  w;
} __ACPI_EC_OS2EC_DATA_EC_BYTE__bits_t;
#define ACPI_EC_OS2EC_DATA_EC_BYTE__RESETVALUE (0x00U)                                       /**<  (ACPI_EC_OS2EC_DATA_EC_BYTE_) OS_TO_EC_DATA_BYTE_n. This is byte n of the 32-bit OS2EC DATA BYTES[3:0]. When the CMD bit in the OS STATUS OS Register\n    is cleared to '0', reads by the ACPI_EC from the OS2EC DATA BYTES[3:0] are aliased to the ACPI-OS DATA BYTES[3:0].  Reset Value */

#define ACPI_EC_OS2EC_DATA_EC_BYTE__Msk       (0x00000000UL)                                 /**< (ACPI_EC_OS2EC_DATA_EC_BYTE_) Register Mask  */

/** \brief ACPI_EC register offsets definitions */
#define ACPI_EC_ACPI_OS_DATA_BYTE__OFFSET (0x00)         /**< (ACPI_EC_ACPI_OS_DATA_BYTE_) This is byte n of the 32-bit ACPI-OS DATA BYTES[3:0]. Writes by the ACPI_OS to the ACPI-OS DATA BYTES[n] are aliased\n    to the OS2EC DATA BYTES[n]. Reads by the ACPI_OS from the ACPI-OS DATA BYTES[n] are aliased to the EC2OS DATA BYTES[n]. Offset */
#define ACPI_EC_ACPI_OS_COMMAND_OFFSET (0x04)         /**< (ACPI_EC_ACPI_OS_COMMAND) Writes to the this register are aliased in the OS2EC Data EC Byte 0 Register.\n              Writes to this register also set the CMD and IBF bits in the OS STATUS OS Register Offset */
#define ACPI_EC_OS_BYTE_CONTROL_OFFSET (0x05)         /**< (ACPI_EC_OS_BYTE_CONTROL) OS Byte Control Register Offset */
#define ACPI_EC_EC2OS_DATA_EC_BYTE__OFFSET (0x100)        /**< (ACPI_EC_EC2OS_DATA_EC_BYTE_) This is byte n of the 32-bit EC2OS DATA BYTES[3:0]. Writes by the ACPI_EC to the EC2OS DATA BYTES[3:0] are aliased to the\n    ACPI-OS DATA BYTES[3:0]. Offset */
#define ACPI_EC_EC_STATUS_OFFSET     (0x104)        /**< (ACPI_EC_EC_STATUS) EC STATUS Offset */
#define ACPI_EC_EC_BYTE_CONTROL_OFFSET (0x105)        /**< (ACPI_EC_EC_BYTE_CONTROL) Byte Control EC-Register Offset */
#define ACPI_EC_OS2EC_DATA_EC_BYTE__OFFSET (0x108)        /**< (ACPI_EC_OS2EC_DATA_EC_BYTE_) OS_TO_EC_DATA_BYTE_n. This is byte n of the 32-bit OS2EC DATA BYTES[3:0]. When the CMD bit in the OS STATUS OS Register\n    is cleared to '0', reads by the ACPI_EC from the OS2EC DATA BYTES[3:0] are aliased to the ACPI-OS DATA BYTES[3:0]. Offset */

/** \brief ACPI_EC register API structure */
typedef struct
{  /* The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. */
  __IO  __ACPI_EC_ACPI_OS_DATA_BYTE__bits_t ACPI_OS_DATA_BYTE_[4]; /**< Offset: 0x00 (R/W   8) This is byte n of the 32-bit ACPI-OS DATA BYTES[3:0]. Writes by the ACPI_OS to the ACPI-OS DATA BYTES[n] are aliased\n    to the OS2EC DATA BYTES[n]. Reads by the ACPI_OS from the ACPI-OS DATA BYTES[n] are aliased to the EC2OS DATA BYTES[n]. */
  __O   __ACPI_EC_ACPI_OS_COMMAND_bits_t ACPI_OS_COMMAND; /**< Offset: 0x04 ( /W   8) Writes to the this register are aliased in the OS2EC Data EC Byte 0 Register.\n              Writes to this register also set the CMD and IBF bits in the OS STATUS OS Register */
  __I   __ACPI_EC_OS_STATUS_bits_t     OS_STATUS;     /**< Offset: 0x04 (R/    8) OS STATUS */
  __I   __ACPI_EC_OS_BYTE_CONTROL_bits_t OS_BYTE_CONTROL; /**< Offset: 0x05 (R/    8) OS Byte Control Register */
  __IO  __ACPI_EC_EC2OS_DATA_EC_BYTE__bits_t EC2OS_DATA_EC_BYTE_[4]; /**< Offset: 0x100 (R/W   8) This is byte n of the 32-bit EC2OS DATA BYTES[3:0]. Writes by the ACPI_EC to the EC2OS DATA BYTES[3:0] are aliased to the\n    ACPI-OS DATA BYTES[3:0]. */
  __IO  __ACPI_EC_EC_STATUS_bits_t     EC_STATUS;     /**< Offset: 0x104 (R/W   8) EC STATUS */
  __IO  __ACPI_EC_EC_BYTE_CONTROL_bits_t EC_BYTE_CONTROL; /**< Offset: 0x105 (R/W   8) Byte Control EC-Register */
  __IO  __ACPI_EC_OS2EC_DATA_EC_BYTE__bits_t OS2EC_DATA_EC_BYTE_[4]; /**< Offset: 0x108 (R/W   8) OS_TO_EC_DATA_BYTE_n. This is byte n of the 32-bit OS2EC DATA BYTES[3:0]. When the CMD bit in the OS STATUS OS Register\n    is cleared to '0', reads by the ACPI_EC from the OS2EC DATA BYTES[3:0] are aliased to the ACPI-OS DATA BYTES[3:0]. */
} acpiec_registers_t;
/** @}  end of The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. */

#endif /* _PIC32CX_0525SG12_ACPI_EC_COMPONENT_H_ */
