/**
 * \brief Component description for PIC32CX/0525SG12 ESPI_IO
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
#ifndef _PIC32CX_0525SG12_ESPI_IO_COMPONENT_H_
#define _PIC32CX_0525SG12_ESPI_IO_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_ESPI_IO The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR ESPI_IO */
/* ========================================================================== */

/* -------- ESPI_IO_INDEX : (ESPI_IO Offset: 0x00) (R/W 8) The INDEX register, which is part of the Configuration Port, is used as a pointer to a Configuration Register Address. -------- */

typedef union
{
  uint8_t  w;
} __ESPI_IO_INDEX_bits_t;
#define ESPI_IO_INDEX_RESETVALUE            (0x00U)                                       /**<  (ESPI_IO_INDEX) The INDEX register, which is part of the Configuration Port, is used as a pointer to a Configuration Register Address.  Reset Value */

#define ESPI_IO_INDEX_Msk                     (0x00000000UL)                                 /**< (ESPI_IO_INDEX) Register Mask  */

/* -------- ESPI_IO_DATA_REG : (ESPI_IO Offset: 0x01) (R/W 8) The DATA register, which is part of the Configuration Port, is used to read or write data to the register currently being selected by the INDEX Register. -------- */

typedef union
{
  uint8_t  w;
} __ESPI_IO_DATA_REG_bits_t;
#define ESPI_IO_DATA_REG_RESETVALUE         (0x00U)                                       /**<  (ESPI_IO_DATA_REG) The DATA register, which is part of the Configuration Port, is used to read or write data to the register currently being selected by the INDEX Register.  Reset Value */

#define ESPI_IO_DATA_REG_Msk                  (0x00000000UL)                                 /**< (ESPI_IO_DATA_REG) Register Mask  */

/* -------- ESPI_IO_PC_LAST_CYCLE_DW0 : (ESPI_IO Offset: 0x100) (R/ 32) Peripheral Channel Last Cycle Register (DWord 0) -------- */

typedef union
{
  struct
  {
    uint32_t PC_ADDRESS_LSDW:32;        /**< bit:  0..31  This field records bits[31:0] of the 64 bit address of the most recent eSPI transaction. */
  };
  uint32_t w;
} __ESPI_IO_PC_LAST_CYCLE_DW0_bits_t;
#define ESPI_IO_PC_LAST_CYCLE_DW0_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_PC_LAST_CYCLE_DW0) Peripheral Channel Last Cycle Register (DWord 0)  Reset Value */

#define ESPI_IO_PC_LAST_CYCLE_DW0_PC_ADDRESS_LSDW_Pos (0)                                            /**< (ESPI_IO_PC_LAST_CYCLE_DW0) This field records bits[31:0] of the 64 bit address of the most recent eSPI transaction. Position */
#define ESPI_IO_PC_LAST_CYCLE_DW0_PC_ADDRESS_LSDW_Msk (0xFFFFFFFFU << ESPI_IO_PC_LAST_CYCLE_DW0_PC_ADDRESS_LSDW_Pos)  /**< (ESPI_IO_PC_LAST_CYCLE_DW0) This field records bits[31:0] of the 64 bit address of the most recent eSPI transaction. Mask */
#define ESPI_IO_PC_LAST_CYCLE_DW0_PC_ADDRESS_LSDW(value) (ESPI_IO_PC_LAST_CYCLE_DW0_PC_ADDRESS_LSDW_Msk & ((value) << ESPI_IO_PC_LAST_CYCLE_DW0_PC_ADDRESS_LSDW_Pos))
#define ESPI_IO_PC_LAST_CYCLE_DW0_Msk         (0xFFFFFFFFUL)                                 /**< (ESPI_IO_PC_LAST_CYCLE_DW0) Register Mask  */

/* -------- ESPI_IO_PC_LAST_CYCLE_DW1 : (ESPI_IO Offset: 0x104) (R/ 32) Peripheral Channel Last Cycle Register (DWord 1) -------- */

typedef union
{
  struct
  {
    uint32_t PC_ADDRESS_MSDW:32;        /**< bit:  0..31  This field records bits[63:32] of the 64 bit address of the most recent eSPI transaction. */
  };
  uint32_t w;
} __ESPI_IO_PC_LAST_CYCLE_DW1_bits_t;
#define ESPI_IO_PC_LAST_CYCLE_DW1_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_PC_LAST_CYCLE_DW1) Peripheral Channel Last Cycle Register (DWord 1)  Reset Value */

#define ESPI_IO_PC_LAST_CYCLE_DW1_PC_ADDRESS_MSDW_Pos (0)                                            /**< (ESPI_IO_PC_LAST_CYCLE_DW1) This field records bits[63:32] of the 64 bit address of the most recent eSPI transaction. Position */
#define ESPI_IO_PC_LAST_CYCLE_DW1_PC_ADDRESS_MSDW_Msk (0xFFFFFFFFU << ESPI_IO_PC_LAST_CYCLE_DW1_PC_ADDRESS_MSDW_Pos)  /**< (ESPI_IO_PC_LAST_CYCLE_DW1) This field records bits[63:32] of the 64 bit address of the most recent eSPI transaction. Mask */
#define ESPI_IO_PC_LAST_CYCLE_DW1_PC_ADDRESS_MSDW(value) (ESPI_IO_PC_LAST_CYCLE_DW1_PC_ADDRESS_MSDW_Msk & ((value) << ESPI_IO_PC_LAST_CYCLE_DW1_PC_ADDRESS_MSDW_Pos))
#define ESPI_IO_PC_LAST_CYCLE_DW1_Msk         (0xFFFFFFFFUL)                                 /**< (ESPI_IO_PC_LAST_CYCLE_DW1) Register Mask  */

/* -------- ESPI_IO_PC_LAST_CYCLE_DW2 : (ESPI_IO Offset: 0x108) (R/ 32) Peripheral Channel Last Cycle Register (DWord 2) -------- */

typedef union
{
  struct
  {
    uint32_t PC_LENGTH:12;              /**< bit:  0..11  This field records the length of the most recent eSPI transaction. */
    uint32_t PC_CYCLE_TYPE:8;           /**< bit: 12..19  This field records the cycle type of the most recent eSPI transaction. */
    uint32_t PC_TAG:4;                  /**< bit: 20..23  This field records the tag of the most recent eSPI transaction. */
    uint32_t :8;                        /**< bit: 24..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_PC_LAST_CYCLE_DW2_bits_t;
#define ESPI_IO_PC_LAST_CYCLE_DW2_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_PC_LAST_CYCLE_DW2) Peripheral Channel Last Cycle Register (DWord 2)  Reset Value */

#define ESPI_IO_PC_LAST_CYCLE_DW2_PC_LENGTH_Pos (0)                                            /**< (ESPI_IO_PC_LAST_CYCLE_DW2) This field records the length of the most recent eSPI transaction. Position */
#define ESPI_IO_PC_LAST_CYCLE_DW2_PC_LENGTH_Msk (0xFFFU << ESPI_IO_PC_LAST_CYCLE_DW2_PC_LENGTH_Pos)  /**< (ESPI_IO_PC_LAST_CYCLE_DW2) This field records the length of the most recent eSPI transaction. Mask */
#define ESPI_IO_PC_LAST_CYCLE_DW2_PC_LENGTH(value) (ESPI_IO_PC_LAST_CYCLE_DW2_PC_LENGTH_Msk & ((value) << ESPI_IO_PC_LAST_CYCLE_DW2_PC_LENGTH_Pos))
#define ESPI_IO_PC_LAST_CYCLE_DW2_PC_CYCLE_TYPE_Pos (12)                                           /**< (ESPI_IO_PC_LAST_CYCLE_DW2) This field records the cycle type of the most recent eSPI transaction. Position */
#define ESPI_IO_PC_LAST_CYCLE_DW2_PC_CYCLE_TYPE_Msk (0xFFU << ESPI_IO_PC_LAST_CYCLE_DW2_PC_CYCLE_TYPE_Pos)  /**< (ESPI_IO_PC_LAST_CYCLE_DW2) This field records the cycle type of the most recent eSPI transaction. Mask */
#define ESPI_IO_PC_LAST_CYCLE_DW2_PC_CYCLE_TYPE(value) (ESPI_IO_PC_LAST_CYCLE_DW2_PC_CYCLE_TYPE_Msk & ((value) << ESPI_IO_PC_LAST_CYCLE_DW2_PC_CYCLE_TYPE_Pos))
#define ESPI_IO_PC_LAST_CYCLE_DW2_PC_TAG_Pos  (20)                                           /**< (ESPI_IO_PC_LAST_CYCLE_DW2) This field records the tag of the most recent eSPI transaction. Position */
#define ESPI_IO_PC_LAST_CYCLE_DW2_PC_TAG_Msk  (0xFU << ESPI_IO_PC_LAST_CYCLE_DW2_PC_TAG_Pos)  /**< (ESPI_IO_PC_LAST_CYCLE_DW2) This field records the tag of the most recent eSPI transaction. Mask */
#define ESPI_IO_PC_LAST_CYCLE_DW2_PC_TAG(value) (ESPI_IO_PC_LAST_CYCLE_DW2_PC_TAG_Msk & ((value) << ESPI_IO_PC_LAST_CYCLE_DW2_PC_TAG_Pos))
#define ESPI_IO_PC_LAST_CYCLE_DW2_Msk         (0x00FFFFFFUL)                                 /**< (ESPI_IO_PC_LAST_CYCLE_DW2) Register Mask  */

/* -------- ESPI_IO_PC_ERROR_ADDRESS_DW0 : (ESPI_IO Offset: 0x10c) (R/ 32) Peripheral Channel Error Address Register (DWord 0) -------- */

typedef union
{
  struct
  {
    uint32_t PC_ERROR_ADDRESS_LSDW:32;  /**< bit:  0..31  This field records bits[31:0] of the 64 bit address of the most recent eSPI transaction that incurred an error. */
  };
  uint32_t w;
} __ESPI_IO_PC_ERROR_ADDRESS_DW0_bits_t;
#define ESPI_IO_PC_ERROR_ADDRESS_DW0_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_PC_ERROR_ADDRESS_DW0) Peripheral Channel Error Address Register (DWord 0)  Reset Value */

#define ESPI_IO_PC_ERROR_ADDRESS_DW0_PC_ERROR_ADDRESS_LSDW_Pos (0)                                            /**< (ESPI_IO_PC_ERROR_ADDRESS_DW0) This field records bits[31:0] of the 64 bit address of the most recent eSPI transaction that incurred an error. Position */
#define ESPI_IO_PC_ERROR_ADDRESS_DW0_PC_ERROR_ADDRESS_LSDW_Msk (0xFFFFFFFFU << ESPI_IO_PC_ERROR_ADDRESS_DW0_PC_ERROR_ADDRESS_LSDW_Pos)  /**< (ESPI_IO_PC_ERROR_ADDRESS_DW0) This field records bits[31:0] of the 64 bit address of the most recent eSPI transaction that incurred an error. Mask */
#define ESPI_IO_PC_ERROR_ADDRESS_DW0_PC_ERROR_ADDRESS_LSDW(value) (ESPI_IO_PC_ERROR_ADDRESS_DW0_PC_ERROR_ADDRESS_LSDW_Msk & ((value) << ESPI_IO_PC_ERROR_ADDRESS_DW0_PC_ERROR_ADDRESS_LSDW_Pos))
#define ESPI_IO_PC_ERROR_ADDRESS_DW0_Msk      (0xFFFFFFFFUL)                                 /**< (ESPI_IO_PC_ERROR_ADDRESS_DW0) Register Mask  */

/* -------- ESPI_IO_PC_ERROR_ADDRESS_DW1 : (ESPI_IO Offset: 0x110) (R/ 32) Peripheral Channel Error Address Register (DWord 1) -------- */

typedef union
{
  struct
  {
    uint32_t PC_ERROR_ADDRESS_MSDW:32;  /**< bit:  0..31  This field records bits[63:32] of the 64 bit  address of the most recent eSPI transaction that incurred an error. */
  };
  uint32_t w;
} __ESPI_IO_PC_ERROR_ADDRESS_DW1_bits_t;
#define ESPI_IO_PC_ERROR_ADDRESS_DW1_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_PC_ERROR_ADDRESS_DW1) Peripheral Channel Error Address Register (DWord 1)  Reset Value */

#define ESPI_IO_PC_ERROR_ADDRESS_DW1_PC_ERROR_ADDRESS_MSDW_Pos (0)                                            /**< (ESPI_IO_PC_ERROR_ADDRESS_DW1) This field records bits[63:32] of the 64 bit  address of the most recent eSPI transaction that incurred an error. Position */
#define ESPI_IO_PC_ERROR_ADDRESS_DW1_PC_ERROR_ADDRESS_MSDW_Msk (0xFFFFFFFFU << ESPI_IO_PC_ERROR_ADDRESS_DW1_PC_ERROR_ADDRESS_MSDW_Pos)  /**< (ESPI_IO_PC_ERROR_ADDRESS_DW1) This field records bits[63:32] of the 64 bit  address of the most recent eSPI transaction that incurred an error. Mask */
#define ESPI_IO_PC_ERROR_ADDRESS_DW1_PC_ERROR_ADDRESS_MSDW(value) (ESPI_IO_PC_ERROR_ADDRESS_DW1_PC_ERROR_ADDRESS_MSDW_Msk & ((value) << ESPI_IO_PC_ERROR_ADDRESS_DW1_PC_ERROR_ADDRESS_MSDW_Pos))
#define ESPI_IO_PC_ERROR_ADDRESS_DW1_Msk      (0xFFFFFFFFUL)                                 /**< (ESPI_IO_PC_ERROR_ADDRESS_DW1) Register Mask  */

/* -------- ESPI_IO_PC_STATUS : (ESPI_IO Offset: 0x114) (R/W 32) Peripheral Channel Status Register -------- */

typedef union
{
  struct
  {
    uint32_t PC_VIRTUAL_READ:1;         /**< bit:      0  This bit is set whenever a eSPI read transaction targeting a Logical Device with an I/O BAR or a Memory BAR in which the VIRTUALIZED bit\n      is set. (R/WC) */
    uint32_t PC_VIRTUAL_WRITE:1;        /**< bit:      1  This bit is set whenever a eSPI write transaction targeting a Logical Device with an I/O BAR or a Memory BAR in which the VIRTUALIZED bit\n      is set. (R/WC) */
    uint32_t PC_VIRTUAL_TYPE:1;         /**< bit:      2  This bit returns the type of Virtualized eSPI transaction that is\n      1=Peripheral Channel Memory Address access\n      0=Peripheral Channel I/O Address access. */
    uint32_t :5;                        /**< bit:   3..7  Reserved                                      */
    uint32_t PC_VIRTUAL_BAR_LDN:6;      /**< bit:  8..13  This field returns the Logical Device Number of the device targeted by the most recent virtual transaction. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t PC_BUS_ERROR:1;            /**< bit:     16  This bit is set to '1' whenever an eSPI access causes an internal bus error. Once set, it remains set until cleared by being written\n      with a 1. (R/WC) */
    uint32_t BAR_CONFLICT:1;            /**< bit:     17  This bit is set to '1' whenever a BAR conflict occurs on an eSPI address. A BAR conflict occurs when more than one BAR matches\n      the address of an eSPI transaction. Once set, it remains set until cleared by being written with a 1. (R/WC) */
    uint32_t :6;                        /**< bit: 18..23  Reserved                                      */
    uint32_t PC_CHANNEL_ENABLE_STATUS:1;  /**< bit:     24  This bit reflects the Host writable configuration field. */
    uint32_t PC_ENABLE_CHANGE:1;        /**< bit:     25  This bit is set to '1' whenever the field PC_CHANNEL_ENABLE_STATUS in this register changes. Once set, it remains set until cleared by being written with a 1. (R/WC) */
    uint32_t :1;                        /**< bit:     26  Reserved                                      */
    uint32_t PC_MASTERING_ENABLE_STATUS:1;  /**< bit:     27  This bit is 1 if three bits in the Peripheral Channel Capabilities and Configurations register, Peripheral Channel Mastering Enable,\n      Peripheral Channel Ready and Peripheral Channel Enable, are all 1, and 0 otherwise. */
    uint32_t PC_MASTERING_ENABLE_CHANGE:1;  /**< bit:     28  This bit is set to '1' whenever the field PC_MASTERING_ENABLE_STATUS in this register changes. Once set, it remains set until cleared by being written with a 1 (R/WC) */
    uint32_t :3;                        /**< bit: 29..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_PC_STATUS_bits_t;
#define ESPI_IO_PC_STATUS_RESETVALUE        (0x00U)                                       /**<  (ESPI_IO_PC_STATUS) Peripheral Channel Status Register  Reset Value */

#define ESPI_IO_PC_STATUS_PC_VIRTUAL_READ_Pos (0)                                            /**< (ESPI_IO_PC_STATUS) This bit is set whenever a eSPI read transaction targeting a Logical Device with an I/O BAR or a Memory BAR in which the VIRTUALIZED bit\n      is set. (R/WC) Position */
#define ESPI_IO_PC_STATUS_PC_VIRTUAL_READ_Msk (0x1U << ESPI_IO_PC_STATUS_PC_VIRTUAL_READ_Pos)  /**< (ESPI_IO_PC_STATUS) This bit is set whenever a eSPI read transaction targeting a Logical Device with an I/O BAR or a Memory BAR in which the VIRTUALIZED bit\n      is set. (R/WC) Mask */
#define ESPI_IO_PC_STATUS_PC_VIRTUAL_WRITE_Pos (1)                                            /**< (ESPI_IO_PC_STATUS) This bit is set whenever a eSPI write transaction targeting a Logical Device with an I/O BAR or a Memory BAR in which the VIRTUALIZED bit\n      is set. (R/WC) Position */
#define ESPI_IO_PC_STATUS_PC_VIRTUAL_WRITE_Msk (0x1U << ESPI_IO_PC_STATUS_PC_VIRTUAL_WRITE_Pos)  /**< (ESPI_IO_PC_STATUS) This bit is set whenever a eSPI write transaction targeting a Logical Device with an I/O BAR or a Memory BAR in which the VIRTUALIZED bit\n      is set. (R/WC) Mask */
#define ESPI_IO_PC_STATUS_PC_VIRTUAL_TYPE_Pos (2)                                            /**< (ESPI_IO_PC_STATUS) This bit returns the type of Virtualized eSPI transaction that is\n      1=Peripheral Channel Memory Address access\n      0=Peripheral Channel I/O Address access. Position */
#define ESPI_IO_PC_STATUS_PC_VIRTUAL_TYPE_Msk (0x1U << ESPI_IO_PC_STATUS_PC_VIRTUAL_TYPE_Pos)  /**< (ESPI_IO_PC_STATUS) This bit returns the type of Virtualized eSPI transaction that is\n      1=Peripheral Channel Memory Address access\n      0=Peripheral Channel I/O Address access. Mask */
#define ESPI_IO_PC_STATUS_PC_VIRTUAL_BAR_LDN_Pos (8)                                            /**< (ESPI_IO_PC_STATUS) This field returns the Logical Device Number of the device targeted by the most recent virtual transaction. Position */
#define ESPI_IO_PC_STATUS_PC_VIRTUAL_BAR_LDN_Msk (0x3FU << ESPI_IO_PC_STATUS_PC_VIRTUAL_BAR_LDN_Pos)  /**< (ESPI_IO_PC_STATUS) This field returns the Logical Device Number of the device targeted by the most recent virtual transaction. Mask */
#define ESPI_IO_PC_STATUS_PC_VIRTUAL_BAR_LDN(value) (ESPI_IO_PC_STATUS_PC_VIRTUAL_BAR_LDN_Msk & ((value) << ESPI_IO_PC_STATUS_PC_VIRTUAL_BAR_LDN_Pos))
#define ESPI_IO_PC_STATUS_PC_BUS_ERROR_Pos    (16)                                           /**< (ESPI_IO_PC_STATUS) This bit is set to '1' whenever an eSPI access causes an internal bus error. Once set, it remains set until cleared by being written\n      with a 1. (R/WC) Position */
#define ESPI_IO_PC_STATUS_PC_BUS_ERROR_Msk    (0x1U << ESPI_IO_PC_STATUS_PC_BUS_ERROR_Pos)   /**< (ESPI_IO_PC_STATUS) This bit is set to '1' whenever an eSPI access causes an internal bus error. Once set, it remains set until cleared by being written\n      with a 1. (R/WC) Mask */
#define ESPI_IO_PC_STATUS_BAR_CONFLICT_Pos    (17)                                           /**< (ESPI_IO_PC_STATUS) This bit is set to '1' whenever a BAR conflict occurs on an eSPI address. A BAR conflict occurs when more than one BAR matches\n      the address of an eSPI transaction. Once set, it remains set until cleared by being written with a 1. (R/WC) Position */
#define ESPI_IO_PC_STATUS_BAR_CONFLICT_Msk    (0x1U << ESPI_IO_PC_STATUS_BAR_CONFLICT_Pos)   /**< (ESPI_IO_PC_STATUS) This bit is set to '1' whenever a BAR conflict occurs on an eSPI address. A BAR conflict occurs when more than one BAR matches\n      the address of an eSPI transaction. Once set, it remains set until cleared by being written with a 1. (R/WC) Mask */
#define ESPI_IO_PC_STATUS_PC_CHANNEL_ENABLE_STATUS_Pos (24)                                           /**< (ESPI_IO_PC_STATUS) This bit reflects the Host writable configuration field. Position */
#define ESPI_IO_PC_STATUS_PC_CHANNEL_ENABLE_STATUS_Msk (0x1U << ESPI_IO_PC_STATUS_PC_CHANNEL_ENABLE_STATUS_Pos)  /**< (ESPI_IO_PC_STATUS) This bit reflects the Host writable configuration field. Mask */
#define ESPI_IO_PC_STATUS_PC_ENABLE_CHANGE_Pos (25)                                           /**< (ESPI_IO_PC_STATUS) This bit is set to '1' whenever the field PC_CHANNEL_ENABLE_STATUS in this register changes. Once set, it remains set until cleared by being written with a 1. (R/WC) Position */
#define ESPI_IO_PC_STATUS_PC_ENABLE_CHANGE_Msk (0x1U << ESPI_IO_PC_STATUS_PC_ENABLE_CHANGE_Pos)  /**< (ESPI_IO_PC_STATUS) This bit is set to '1' whenever the field PC_CHANNEL_ENABLE_STATUS in this register changes. Once set, it remains set until cleared by being written with a 1. (R/WC) Mask */
#define ESPI_IO_PC_STATUS_PC_MASTERING_ENABLE_STATUS_Pos (27)                                           /**< (ESPI_IO_PC_STATUS) This bit is 1 if three bits in the Peripheral Channel Capabilities and Configurations register, Peripheral Channel Mastering Enable,\n      Peripheral Channel Ready and Peripheral Channel Enable, are all 1, and 0 otherwise. Position */
#define ESPI_IO_PC_STATUS_PC_MASTERING_ENABLE_STATUS_Msk (0x1U << ESPI_IO_PC_STATUS_PC_MASTERING_ENABLE_STATUS_Pos)  /**< (ESPI_IO_PC_STATUS) This bit is 1 if three bits in the Peripheral Channel Capabilities and Configurations register, Peripheral Channel Mastering Enable,\n      Peripheral Channel Ready and Peripheral Channel Enable, are all 1, and 0 otherwise. Mask */
#define ESPI_IO_PC_STATUS_PC_MASTERING_ENABLE_CHANGE_Pos (28)                                           /**< (ESPI_IO_PC_STATUS) This bit is set to '1' whenever the field PC_MASTERING_ENABLE_STATUS in this register changes. Once set, it remains set until cleared by being written with a 1 (R/WC) Position */
#define ESPI_IO_PC_STATUS_PC_MASTERING_ENABLE_CHANGE_Msk (0x1U << ESPI_IO_PC_STATUS_PC_MASTERING_ENABLE_CHANGE_Pos)  /**< (ESPI_IO_PC_STATUS) This bit is set to '1' whenever the field PC_MASTERING_ENABLE_STATUS in this register changes. Once set, it remains set until cleared by being written with a 1 (R/WC) Mask */
#define ESPI_IO_PC_STATUS_Msk                 (0x1B033F07UL)                                 /**< (ESPI_IO_PC_STATUS) Register Mask  */

/* -------- ESPI_IO_PC_INT_ENABLE : (ESPI_IO Offset: 0x118) (R/W 32) Peripheral Channel Interrupt Enable Register -------- */

typedef union
{
  struct
  {
    uint32_t PC_VIRTUAL_READ_ENABLE:1;  /**< bit:      0  When this bit is '1' an interrupt is generated when the bit PC_VIRTUAL_READ in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. */
    uint32_t PC_VIRTUAL_WRITE_ENABLE:1;  /**< bit:      1  When this bit is '1' an interrupt is generated when the bit PC_VIRTUAL_WRITE in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. */
    uint32_t :14;                       /**< bit:  2..15  Reserved                                      */
    uint32_t PC_BUS_ERROR_ENABLE:1;     /**< bit:     16  When this bit is '1' an interrupt is generated when the bit PC_BUS_ERROR in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. */
    uint32_t BAR_CONFLICT_ENABLE:1;     /**< bit:     17  When this bit is '1' an interrupt is generated when the bit BAR_CONFLICT in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. */
    uint32_t :7;                        /**< bit: 18..24  Reserved                                      */
    uint32_t PC_ENABLE_CHANGE_ENABLE:1;  /**< bit:     25  When this bit is '1' an interrupt is generated when the bit PC_ENABLE_CHANGE in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. */
    uint32_t :2;                        /**< bit: 26..27  Reserved                                      */
    uint32_t PC_MASTERING_ENABLE_CHANGE_ENABLE:1;  /**< bit:     28  When this bit is '1' an interrupt is generated when the bit PC_MASTERING_ENABLE_CHANGE in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. */
    uint32_t :3;                        /**< bit: 29..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_PC_INT_ENABLE_bits_t;
#define ESPI_IO_PC_INT_ENABLE_RESETVALUE    (0x00U)                                       /**<  (ESPI_IO_PC_INT_ENABLE) Peripheral Channel Interrupt Enable Register  Reset Value */

#define ESPI_IO_PC_INT_ENABLE_PC_VIRTUAL_READ_ENABLE_Pos (0)                                            /**< (ESPI_IO_PC_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit PC_VIRTUAL_READ in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_PC_INT_ENABLE_PC_VIRTUAL_READ_ENABLE_Msk (0x1U << ESPI_IO_PC_INT_ENABLE_PC_VIRTUAL_READ_ENABLE_Pos)  /**< (ESPI_IO_PC_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit PC_VIRTUAL_READ in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_PC_INT_ENABLE_PC_VIRTUAL_WRITE_ENABLE_Pos (1)                                            /**< (ESPI_IO_PC_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit PC_VIRTUAL_WRITE in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_PC_INT_ENABLE_PC_VIRTUAL_WRITE_ENABLE_Msk (0x1U << ESPI_IO_PC_INT_ENABLE_PC_VIRTUAL_WRITE_ENABLE_Pos)  /**< (ESPI_IO_PC_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit PC_VIRTUAL_WRITE in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_PC_INT_ENABLE_PC_BUS_ERROR_ENABLE_Pos (16)                                           /**< (ESPI_IO_PC_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit PC_BUS_ERROR in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_PC_INT_ENABLE_PC_BUS_ERROR_ENABLE_Msk (0x1U << ESPI_IO_PC_INT_ENABLE_PC_BUS_ERROR_ENABLE_Pos)  /**< (ESPI_IO_PC_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit PC_BUS_ERROR in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_PC_INT_ENABLE_BAR_CONFLICT_ENABLE_Pos (17)                                           /**< (ESPI_IO_PC_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit BAR_CONFLICT in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_PC_INT_ENABLE_BAR_CONFLICT_ENABLE_Msk (0x1U << ESPI_IO_PC_INT_ENABLE_BAR_CONFLICT_ENABLE_Pos)  /**< (ESPI_IO_PC_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit BAR_CONFLICT in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_PC_INT_ENABLE_PC_ENABLE_CHANGE_ENABLE_Pos (25)                                           /**< (ESPI_IO_PC_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit PC_ENABLE_CHANGE in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_PC_INT_ENABLE_PC_ENABLE_CHANGE_ENABLE_Msk (0x1U << ESPI_IO_PC_INT_ENABLE_PC_ENABLE_CHANGE_ENABLE_Pos)  /**< (ESPI_IO_PC_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit PC_ENABLE_CHANGE in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_PC_INT_ENABLE_PC_MASTERING_ENABLE_CHANGE_ENABLE_Pos (28)                                           /**< (ESPI_IO_PC_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit PC_MASTERING_ENABLE_CHANGE in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_PC_INT_ENABLE_PC_MASTERING_ENABLE_CHANGE_ENABLE_Msk (0x1U << ESPI_IO_PC_INT_ENABLE_PC_MASTERING_ENABLE_CHANGE_ENABLE_Pos)  /**< (ESPI_IO_PC_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit PC_MASTERING_ENABLE_CHANGE in the Peripheral Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_PC_INT_ENABLE_Msk             (0x12030003UL)                                 /**< (ESPI_IO_PC_INT_ENABLE) Register Mask  */

/* -------- ESPI_IO_BAR_INHIBIT_DW0 : (ESPI_IO Offset: 0x120) (R/W 32) BAR Inhibit Register (DWord 0) -------- */

typedef union
{
  struct
  {
    uint32_t BAR_INHIBIT_LSDW:32;       /**< bit:  0..31  When bit Di of BAR_Inhibit is 1, the BAR for Logical Device i is disabled and its addresses will not be claimed on the eSPI\n      bus, independent of the value of the Valid bit in the BAR. The BAR Inhibit function applies to both I/O transactions and Memory transactions. */
  };
  uint32_t w;
} __ESPI_IO_BAR_INHIBIT_DW0_bits_t;
#define ESPI_IO_BAR_INHIBIT_DW0_RESETVALUE  (0x00U)                                       /**<  (ESPI_IO_BAR_INHIBIT_DW0) BAR Inhibit Register (DWord 0)  Reset Value */

#define ESPI_IO_BAR_INHIBIT_DW0_BAR_INHIBIT_LSDW_Pos (0)                                            /**< (ESPI_IO_BAR_INHIBIT_DW0) When bit Di of BAR_Inhibit is 1, the BAR for Logical Device i is disabled and its addresses will not be claimed on the eSPI\n      bus, independent of the value of the Valid bit in the BAR. The BAR Inhibit function applies to both I/O transactions and Memory transactions. Position */
#define ESPI_IO_BAR_INHIBIT_DW0_BAR_INHIBIT_LSDW_Msk (0xFFFFFFFFU << ESPI_IO_BAR_INHIBIT_DW0_BAR_INHIBIT_LSDW_Pos)  /**< (ESPI_IO_BAR_INHIBIT_DW0) When bit Di of BAR_Inhibit is 1, the BAR for Logical Device i is disabled and its addresses will not be claimed on the eSPI\n      bus, independent of the value of the Valid bit in the BAR. The BAR Inhibit function applies to both I/O transactions and Memory transactions. Mask */
#define ESPI_IO_BAR_INHIBIT_DW0_BAR_INHIBIT_LSDW(value) (ESPI_IO_BAR_INHIBIT_DW0_BAR_INHIBIT_LSDW_Msk & ((value) << ESPI_IO_BAR_INHIBIT_DW0_BAR_INHIBIT_LSDW_Pos))
#define ESPI_IO_BAR_INHIBIT_DW0_Msk           (0xFFFFFFFFUL)                                 /**< (ESPI_IO_BAR_INHIBIT_DW0) Register Mask  */

/* -------- ESPI_IO_BAR_INHIBIT_DW1 : (ESPI_IO Offset: 0x124) (R/W 32) BAR Inhibit Register (DWord 1) -------- */

typedef union
{
  struct
  {
    uint32_t BAR_INHIBIT_MSDW:32;       /**< bit:  0..31  When bit Di of BAR_Inhibit is 1, the BAR for Logical Device i is disabled and its addresses will not be claimed on the eSPI\n      bus, independent of the value of the Valid bit in the BAR. The BAR Inhibit function applies to both I/O transactions and Memory transactions. */
  };
  uint32_t w;
} __ESPI_IO_BAR_INHIBIT_DW1_bits_t;
#define ESPI_IO_BAR_INHIBIT_DW1_RESETVALUE  (0x00U)                                       /**<  (ESPI_IO_BAR_INHIBIT_DW1) BAR Inhibit Register (DWord 1)  Reset Value */

#define ESPI_IO_BAR_INHIBIT_DW1_BAR_INHIBIT_MSDW_Pos (0)                                            /**< (ESPI_IO_BAR_INHIBIT_DW1) When bit Di of BAR_Inhibit is 1, the BAR for Logical Device i is disabled and its addresses will not be claimed on the eSPI\n      bus, independent of the value of the Valid bit in the BAR. The BAR Inhibit function applies to both I/O transactions and Memory transactions. Position */
#define ESPI_IO_BAR_INHIBIT_DW1_BAR_INHIBIT_MSDW_Msk (0xFFFFFFFFU << ESPI_IO_BAR_INHIBIT_DW1_BAR_INHIBIT_MSDW_Pos)  /**< (ESPI_IO_BAR_INHIBIT_DW1) When bit Di of BAR_Inhibit is 1, the BAR for Logical Device i is disabled and its addresses will not be claimed on the eSPI\n      bus, independent of the value of the Valid bit in the BAR. The BAR Inhibit function applies to both I/O transactions and Memory transactions. Mask */
#define ESPI_IO_BAR_INHIBIT_DW1_BAR_INHIBIT_MSDW(value) (ESPI_IO_BAR_INHIBIT_DW1_BAR_INHIBIT_MSDW_Msk & ((value) << ESPI_IO_BAR_INHIBIT_DW1_BAR_INHIBIT_MSDW_Pos))
#define ESPI_IO_BAR_INHIBIT_DW1_Msk           (0xFFFFFFFFUL)                                 /**< (ESPI_IO_BAR_INHIBIT_DW1) Register Mask  */

/* -------- ESPI_IO_ESPI_BAR_INIT : (ESPI_IO Offset: 0x128) (R/W 32) eSPI BAR Init Register -------- */

typedef union
{
  struct
  {
    uint32_t BAR_INIT:16;               /**< bit:  0..15  This field is loaded into the Base Address Register register for Logical Device Ch (eSPI, I/O Configuration Port) on RESET_SIO. */
    uint32_t :16;                       /**< bit: 16..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_ESPI_BAR_INIT_bits_t;
#define ESPI_IO_ESPI_BAR_INIT_RESETVALUE    (0x2EU)                                       /**<  (ESPI_IO_ESPI_BAR_INIT) eSPI BAR Init Register  Reset Value */

#define ESPI_IO_ESPI_BAR_INIT_BAR_INIT_Pos    (0)                                            /**< (ESPI_IO_ESPI_BAR_INIT) This field is loaded into the Base Address Register register for Logical Device Ch (eSPI, I/O Configuration Port) on RESET_SIO. Position */
#define ESPI_IO_ESPI_BAR_INIT_BAR_INIT_Msk    (0xFFFFU << ESPI_IO_ESPI_BAR_INIT_BAR_INIT_Pos)  /**< (ESPI_IO_ESPI_BAR_INIT) This field is loaded into the Base Address Register register for Logical Device Ch (eSPI, I/O Configuration Port) on RESET_SIO. Mask */
#define ESPI_IO_ESPI_BAR_INIT_BAR_INIT(value) (ESPI_IO_ESPI_BAR_INIT_BAR_INIT_Msk & ((value) << ESPI_IO_ESPI_BAR_INIT_BAR_INIT_Pos))
#define ESPI_IO_ESPI_BAR_INIT_Msk             (0x0000FFFFUL)                                 /**< (ESPI_IO_ESPI_BAR_INIT) Register Mask  */

/* -------- ESPI_IO_EC_IRQ : (ESPI_IO Offset: 0x12c) (R/W 32) EC IRQ Register -------- */

typedef union
{
  struct
  {
    uint32_t EC_IRQ:1;                  /**< bit:      0  This bit can be used as a firmware-controlled interrupt source for the EC. When the EC entry in the IRQ Assignment Table is set to a\n      valid IRQ number, changes in this bit will be transmitted to the Host over a Virtual Wire IRQ channel. */
    uint32_t :31;                       /**< bit:  1..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_EC_IRQ_bits_t;
#define ESPI_IO_EC_IRQ_RESETVALUE           (0x2EU)                                       /**<  (ESPI_IO_EC_IRQ) EC IRQ Register  Reset Value */

#define ESPI_IO_EC_IRQ_EC_IRQ_Pos             (0)                                            /**< (ESPI_IO_EC_IRQ) This bit can be used as a firmware-controlled interrupt source for the EC. When the EC entry in the IRQ Assignment Table is set to a\n      valid IRQ number, changes in this bit will be transmitted to the Host over a Virtual Wire IRQ channel. Position */
#define ESPI_IO_EC_IRQ_EC_IRQ_Msk             (0x1U << ESPI_IO_EC_IRQ_EC_IRQ_Pos)            /**< (ESPI_IO_EC_IRQ) This bit can be used as a firmware-controlled interrupt source for the EC. When the EC entry in the IRQ Assignment Table is set to a\n      valid IRQ number, changes in this bit will be transmitted to the Host over a Virtual Wire IRQ channel. Mask */
#define ESPI_IO_EC_IRQ_Msk                    (0x00000001UL)                                 /**< (ESPI_IO_EC_IRQ) Register Mask  */

/* -------- ESPI_IO_BASE_ADDRESS : (ESPI_IO Offset: 0x134) (R/W 32) eSPI I/O Base Address Register -------- */

typedef union
{
  struct
  {
    uint32_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint32_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t VIRTUALIZED:1;             /**< bit:     16  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_BASE_ADDRESS_bits_t;
#define ESPI_IO_BASE_ADDRESS_RESETVALUE     (0xD01U)                                      /**<  (ESPI_IO_BASE_ADDRESS) eSPI I/O Base Address Register  Reset Value */

#define ESPI_IO_BASE_ADDRESS_MASK_Pos         (0)                                            /**< (ESPI_IO_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_BASE_ADDRESS_MASK_Msk         (0xFFU << ESPI_IO_BASE_ADDRESS_MASK_Pos)       /**< (ESPI_IO_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_BASE_ADDRESS_MASK(value)      (ESPI_IO_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_IO_BASE_ADDRESS_MASK_Pos))
#define ESPI_IO_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_IO_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_IO_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_IO_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_IO_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_IO_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_IO_BASE_ADDRESS_VIRTUALIZED_Pos  (16)                                           /**< (ESPI_IO_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_BASE_ADDRESS_VIRTUALIZED_Msk  (0x1U << ESPI_IO_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_IO_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_BASE_ADDRESS_Msk              (0x00013FFFUL)                                 /**< (ESPI_IO_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_IO_ESPI_MEM_BASE_ADDRESS : (ESPI_IO Offset: 0x138) (R/W 32) eSPI Memory Base Address Register -------- */

typedef union
{
  struct
  {
    uint32_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint32_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t VIRTUALIZED:1;             /**< bit:     16  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_ESPI_MEM_BASE_ADDRESS_bits_t;
#define ESPI_IO_ESPI_MEM_BASE_ADDRESS_RESETVALUE (0xE00U)                                      /**<  (ESPI_IO_ESPI_MEM_BASE_ADDRESS) eSPI Memory Base Address Register  Reset Value */

#define ESPI_IO_ESPI_MEM_BASE_ADDRESS_MASK_Pos (0)                                            /**< (ESPI_IO_ESPI_MEM_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_ESPI_MEM_BASE_ADDRESS_MASK_Msk (0xFFU << ESPI_IO_ESPI_MEM_BASE_ADDRESS_MASK_Pos)  /**< (ESPI_IO_ESPI_MEM_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_ESPI_MEM_BASE_ADDRESS_MASK(value) (ESPI_IO_ESPI_MEM_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_IO_ESPI_MEM_BASE_ADDRESS_MASK_Pos))
#define ESPI_IO_ESPI_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_IO_ESPI_MEM_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_ESPI_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_IO_ESPI_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_IO_ESPI_MEM_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_ESPI_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_IO_ESPI_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_IO_ESPI_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_IO_ESPI_MEM_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_IO_ESPI_MEM_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_ESPI_MEM_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_IO_ESPI_MEM_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_IO_ESPI_MEM_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_ESPI_MEM_BASE_ADDRESS_Msk     (0x00013FFFUL)                                 /**< (ESPI_IO_ESPI_MEM_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_IO_MBX_BASE_ADDRESS : (ESPI_IO Offset: 0x13c) (R/W 32) Mailbox BAR  Register -------- */

typedef union
{
  struct
  {
    uint32_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint32_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t VIRTUALIZED:1;             /**< bit:     16  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_MBX_BASE_ADDRESS_bits_t;
#define ESPI_IO_MBX_BASE_ADDRESS_RESETVALUE (0x01U)                                       /**<  (ESPI_IO_MBX_BASE_ADDRESS) Mailbox BAR  Register  Reset Value */

#define ESPI_IO_MBX_BASE_ADDRESS_MASK_Pos     (0)                                            /**< (ESPI_IO_MBX_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_MBX_BASE_ADDRESS_MASK_Msk     (0xFFU << ESPI_IO_MBX_BASE_ADDRESS_MASK_Pos)   /**< (ESPI_IO_MBX_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_MBX_BASE_ADDRESS_MASK(value)  (ESPI_IO_MBX_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_IO_MBX_BASE_ADDRESS_MASK_Pos))
#define ESPI_IO_MBX_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_IO_MBX_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_MBX_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_IO_MBX_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_IO_MBX_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_MBX_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_IO_MBX_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_IO_MBX_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_IO_MBX_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_IO_MBX_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_MBX_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_IO_MBX_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_IO_MBX_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_MBX_BASE_ADDRESS_Msk          (0x00013FFFUL)                                 /**< (ESPI_IO_MBX_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_IO_EM8042_BASE_ADDRESS : (ESPI_IO Offset: 0x140) (R/W 32) 8042 Emulated Keyboard Controller BAR Register -------- */

typedef union
{
  struct
  {
    uint32_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint32_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t VIRTUALIZED:1;             /**< bit:     16  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_EM8042_BASE_ADDRESS_bits_t;
#define ESPI_IO_EM8042_BASE_ADDRESS_RESETVALUE (0x104U)                                      /**<  (ESPI_IO_EM8042_BASE_ADDRESS) 8042 Emulated Keyboard Controller BAR Register  Reset Value */

#define ESPI_IO_EM8042_BASE_ADDRESS_MASK_Pos  (0)                                            /**< (ESPI_IO_EM8042_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_EM8042_BASE_ADDRESS_MASK_Msk  (0xFFU << ESPI_IO_EM8042_BASE_ADDRESS_MASK_Pos)  /**< (ESPI_IO_EM8042_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_EM8042_BASE_ADDRESS_MASK(value) (ESPI_IO_EM8042_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_IO_EM8042_BASE_ADDRESS_MASK_Pos))
#define ESPI_IO_EM8042_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_IO_EM8042_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_EM8042_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_IO_EM8042_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_IO_EM8042_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_EM8042_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_IO_EM8042_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_IO_EM8042_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_IO_EM8042_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_IO_EM8042_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_EM8042_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_IO_EM8042_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_IO_EM8042_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_EM8042_BASE_ADDRESS_Msk       (0x00013FFFUL)                                 /**< (ESPI_IO_EM8042_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_IO_ACPI_EC_0_BASE_ADDRESS : (ESPI_IO Offset: 0x144) (R/W 32) ACPI EC Channel 0 Register -------- */

typedef union
{
  struct
  {
    uint32_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint32_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t VIRTUALIZED:1;             /**< bit:     16  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_ACPI_EC_0_BASE_ADDRESS_bits_t;
#define ESPI_IO_ACPI_EC_0_BASE_ADDRESS_RESETVALUE (0x204U)                                      /**<  (ESPI_IO_ACPI_EC_0_BASE_ADDRESS) ACPI EC Channel 0 Register  Reset Value */

#define ESPI_IO_ACPI_EC_0_BASE_ADDRESS_MASK_Pos (0)                                            /**< (ESPI_IO_ACPI_EC_0_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_ACPI_EC_0_BASE_ADDRESS_MASK_Msk (0xFFU << ESPI_IO_ACPI_EC_0_BASE_ADDRESS_MASK_Pos)  /**< (ESPI_IO_ACPI_EC_0_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_ACPI_EC_0_BASE_ADDRESS_MASK(value) (ESPI_IO_ACPI_EC_0_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_IO_ACPI_EC_0_BASE_ADDRESS_MASK_Pos))
#define ESPI_IO_ACPI_EC_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_IO_ACPI_EC_0_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_ACPI_EC_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_IO_ACPI_EC_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_IO_ACPI_EC_0_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_ACPI_EC_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_IO_ACPI_EC_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_IO_ACPI_EC_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_IO_ACPI_EC_0_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_IO_ACPI_EC_0_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_ACPI_EC_0_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_IO_ACPI_EC_0_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_IO_ACPI_EC_0_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_ACPI_EC_0_BASE_ADDRESS_Msk    (0x00013FFFUL)                                 /**< (ESPI_IO_ACPI_EC_0_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_IO_ACPI_EC_1_BASE_ADDRESS : (ESPI_IO Offset: 0x148) (R/W 32) ACPI EC Channel 1 BAR Register -------- */

typedef union
{
  struct
  {
    uint32_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint32_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t VIRTUALIZED:1;             /**< bit:     16  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_ACPI_EC_1_BASE_ADDRESS_bits_t;
#define ESPI_IO_ACPI_EC_1_BASE_ADDRESS_RESETVALUE (0x307U)                                      /**<  (ESPI_IO_ACPI_EC_1_BASE_ADDRESS) ACPI EC Channel 1 BAR Register  Reset Value */

#define ESPI_IO_ACPI_EC_1_BASE_ADDRESS_MASK_Pos (0)                                            /**< (ESPI_IO_ACPI_EC_1_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_ACPI_EC_1_BASE_ADDRESS_MASK_Msk (0xFFU << ESPI_IO_ACPI_EC_1_BASE_ADDRESS_MASK_Pos)  /**< (ESPI_IO_ACPI_EC_1_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_ACPI_EC_1_BASE_ADDRESS_MASK(value) (ESPI_IO_ACPI_EC_1_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_IO_ACPI_EC_1_BASE_ADDRESS_MASK_Pos))
#define ESPI_IO_ACPI_EC_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_IO_ACPI_EC_1_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_ACPI_EC_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_IO_ACPI_EC_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_IO_ACPI_EC_1_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_ACPI_EC_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_IO_ACPI_EC_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_IO_ACPI_EC_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_IO_ACPI_EC_1_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_IO_ACPI_EC_1_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_ACPI_EC_1_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_IO_ACPI_EC_1_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_IO_ACPI_EC_1_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_ACPI_EC_1_BASE_ADDRESS_Msk    (0x00013FFFUL)                                 /**< (ESPI_IO_ACPI_EC_1_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_IO_ACPI_EC_2_BASE_ADDRESS : (ESPI_IO Offset: 0x14c) (R/W 32) I/O Base Address Register -------- */

typedef union
{
  struct
  {
    uint32_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint32_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t VIRTUALIZED:1;             /**< bit:     16  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_ACPI_EC_2_BASE_ADDRESS_bits_t;
#define ESPI_IO_ACPI_EC_2_BASE_ADDRESS_RESETVALUE (0x407U)                                      /**<  (ESPI_IO_ACPI_EC_2_BASE_ADDRESS) I/O Base Address Register  Reset Value */

#define ESPI_IO_ACPI_EC_2_BASE_ADDRESS_MASK_Pos (0)                                            /**< (ESPI_IO_ACPI_EC_2_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_ACPI_EC_2_BASE_ADDRESS_MASK_Msk (0xFFU << ESPI_IO_ACPI_EC_2_BASE_ADDRESS_MASK_Pos)  /**< (ESPI_IO_ACPI_EC_2_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_ACPI_EC_2_BASE_ADDRESS_MASK(value) (ESPI_IO_ACPI_EC_2_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_IO_ACPI_EC_2_BASE_ADDRESS_MASK_Pos))
#define ESPI_IO_ACPI_EC_2_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_IO_ACPI_EC_2_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_ACPI_EC_2_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_IO_ACPI_EC_2_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_IO_ACPI_EC_2_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_ACPI_EC_2_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_IO_ACPI_EC_2_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_IO_ACPI_EC_2_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_IO_ACPI_EC_2_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_IO_ACPI_EC_2_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_ACPI_EC_2_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_IO_ACPI_EC_2_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_IO_ACPI_EC_2_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_ACPI_EC_2_BASE_ADDRESS_Msk    (0x00013FFFUL)                                 /**< (ESPI_IO_ACPI_EC_2_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_IO_ACPI_EC_3_BASE_ADDRESS : (ESPI_IO Offset: 0x150) (R/W 32) I/O Base Address Register -------- */

typedef union
{
  struct
  {
    uint32_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint32_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t VIRTUALIZED:1;             /**< bit:     16  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_ACPI_EC_3_BASE_ADDRESS_bits_t;
#define ESPI_IO_ACPI_EC_3_BASE_ADDRESS_RESETVALUE (0x507U)                                      /**<  (ESPI_IO_ACPI_EC_3_BASE_ADDRESS) I/O Base Address Register  Reset Value */

#define ESPI_IO_ACPI_EC_3_BASE_ADDRESS_MASK_Pos (0)                                            /**< (ESPI_IO_ACPI_EC_3_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_ACPI_EC_3_BASE_ADDRESS_MASK_Msk (0xFFU << ESPI_IO_ACPI_EC_3_BASE_ADDRESS_MASK_Pos)  /**< (ESPI_IO_ACPI_EC_3_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_ACPI_EC_3_BASE_ADDRESS_MASK(value) (ESPI_IO_ACPI_EC_3_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_IO_ACPI_EC_3_BASE_ADDRESS_MASK_Pos))
#define ESPI_IO_ACPI_EC_3_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_IO_ACPI_EC_3_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_ACPI_EC_3_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_IO_ACPI_EC_3_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_IO_ACPI_EC_3_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_ACPI_EC_3_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_IO_ACPI_EC_3_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_IO_ACPI_EC_3_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_IO_ACPI_EC_3_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_IO_ACPI_EC_3_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_ACPI_EC_3_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_IO_ACPI_EC_3_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_IO_ACPI_EC_3_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_ACPI_EC_3_BASE_ADDRESS_Msk    (0x00013FFFUL)                                 /**< (ESPI_IO_ACPI_EC_3_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_IO_ACPI_PM1_BASE_ADDRESS : (ESPI_IO Offset: 0x158) (R/W 32) I/O Base Address Register -------- */

typedef union
{
  struct
  {
    uint32_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint32_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t VIRTUALIZED:1;             /**< bit:     16  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_ACPI_PM1_BASE_ADDRESS_bits_t;
#define ESPI_IO_ACPI_PM1_BASE_ADDRESS_RESETVALUE (0x707U)                                      /**<  (ESPI_IO_ACPI_PM1_BASE_ADDRESS) I/O Base Address Register  Reset Value */

#define ESPI_IO_ACPI_PM1_BASE_ADDRESS_MASK_Pos (0)                                            /**< (ESPI_IO_ACPI_PM1_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_ACPI_PM1_BASE_ADDRESS_MASK_Msk (0xFFU << ESPI_IO_ACPI_PM1_BASE_ADDRESS_MASK_Pos)  /**< (ESPI_IO_ACPI_PM1_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_ACPI_PM1_BASE_ADDRESS_MASK(value) (ESPI_IO_ACPI_PM1_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_IO_ACPI_PM1_BASE_ADDRESS_MASK_Pos))
#define ESPI_IO_ACPI_PM1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_IO_ACPI_PM1_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_ACPI_PM1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_IO_ACPI_PM1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_IO_ACPI_PM1_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_ACPI_PM1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_IO_ACPI_PM1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_IO_ACPI_PM1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_IO_ACPI_PM1_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_IO_ACPI_PM1_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_ACPI_PM1_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_IO_ACPI_PM1_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_IO_ACPI_PM1_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_ACPI_PM1_BASE_ADDRESS_Msk     (0x00013FFFUL)                                 /**< (ESPI_IO_ACPI_PM1_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_IO_FAST_KDB_BASE_ADDRESS : (ESPI_IO Offset: 0x15c) (R/W 32) I/O Base Address Register -------- */

typedef union
{
  struct
  {
    uint32_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint32_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t VIRTUALIZED:1;             /**< bit:     16  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_FAST_KDB_BASE_ADDRESS_bits_t;
#define ESPI_IO_FAST_KDB_BASE_ADDRESS_RESETVALUE (0x800U)                                      /**<  (ESPI_IO_FAST_KDB_BASE_ADDRESS) I/O Base Address Register  Reset Value */

#define ESPI_IO_FAST_KDB_BASE_ADDRESS_MASK_Pos (0)                                            /**< (ESPI_IO_FAST_KDB_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_FAST_KDB_BASE_ADDRESS_MASK_Msk (0xFFU << ESPI_IO_FAST_KDB_BASE_ADDRESS_MASK_Pos)  /**< (ESPI_IO_FAST_KDB_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_FAST_KDB_BASE_ADDRESS_MASK(value) (ESPI_IO_FAST_KDB_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_IO_FAST_KDB_BASE_ADDRESS_MASK_Pos))
#define ESPI_IO_FAST_KDB_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_IO_FAST_KDB_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_FAST_KDB_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_IO_FAST_KDB_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_IO_FAST_KDB_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_FAST_KDB_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_IO_FAST_KDB_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_IO_FAST_KDB_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_IO_FAST_KDB_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_IO_FAST_KDB_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_FAST_KDB_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_IO_FAST_KDB_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_IO_FAST_KDB_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_FAST_KDB_BASE_ADDRESS_Msk     (0x00013FFFUL)                                 /**< (ESPI_IO_FAST_KDB_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_IO_UART_0_BASE_ADDRESS : (ESPI_IO Offset: 0x160) (R/W 32) I/O Base Address Register -------- */

typedef union
{
  struct
  {
    uint32_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint32_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t VIRTUALIZED:1;             /**< bit:     16  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_UART_0_BASE_ADDRESS_bits_t;
#define ESPI_IO_UART_0_BASE_ADDRESS_RESETVALUE (0x907U)                                      /**<  (ESPI_IO_UART_0_BASE_ADDRESS) I/O Base Address Register  Reset Value */

#define ESPI_IO_UART_0_BASE_ADDRESS_MASK_Pos  (0)                                            /**< (ESPI_IO_UART_0_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_UART_0_BASE_ADDRESS_MASK_Msk  (0xFFU << ESPI_IO_UART_0_BASE_ADDRESS_MASK_Pos)  /**< (ESPI_IO_UART_0_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_UART_0_BASE_ADDRESS_MASK(value) (ESPI_IO_UART_0_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_IO_UART_0_BASE_ADDRESS_MASK_Pos))
#define ESPI_IO_UART_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_IO_UART_0_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_UART_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_IO_UART_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_IO_UART_0_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_UART_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_IO_UART_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_IO_UART_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_IO_UART_0_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_IO_UART_0_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_UART_0_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_IO_UART_0_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_IO_UART_0_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_UART_0_BASE_ADDRESS_Msk       (0x00013FFFUL)                                 /**< (ESPI_IO_UART_0_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_IO_UART_1_BASE_ADDRESS : (ESPI_IO Offset: 0x164) (R/W 32) I/O Base Address Register -------- */

typedef union
{
  struct
  {
    uint32_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint32_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t VIRTUALIZED:1;             /**< bit:     16  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_UART_1_BASE_ADDRESS_bits_t;
#define ESPI_IO_UART_1_BASE_ADDRESS_RESETVALUE (0xA07U)                                      /**<  (ESPI_IO_UART_1_BASE_ADDRESS) I/O Base Address Register  Reset Value */

#define ESPI_IO_UART_1_BASE_ADDRESS_MASK_Pos  (0)                                            /**< (ESPI_IO_UART_1_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_UART_1_BASE_ADDRESS_MASK_Msk  (0xFFU << ESPI_IO_UART_1_BASE_ADDRESS_MASK_Pos)  /**< (ESPI_IO_UART_1_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_UART_1_BASE_ADDRESS_MASK(value) (ESPI_IO_UART_1_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_IO_UART_1_BASE_ADDRESS_MASK_Pos))
#define ESPI_IO_UART_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_IO_UART_1_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_UART_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_IO_UART_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_IO_UART_1_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_UART_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_IO_UART_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_IO_UART_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_IO_UART_1_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_IO_UART_1_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_UART_1_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_IO_UART_1_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_IO_UART_1_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_UART_1_BASE_ADDRESS_Msk       (0x00013FFFUL)                                 /**< (ESPI_IO_UART_1_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_IO_EMI_0_BASE_ADDRESS : (ESPI_IO Offset: 0x168) (R/W 32) I/O Base Address Register -------- */

typedef union
{
  struct
  {
    uint32_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint32_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t VIRTUALIZED:1;             /**< bit:     16  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_EMI_0_BASE_ADDRESS_bits_t;
#define ESPI_IO_EMI_0_BASE_ADDRESS_RESETVALUE (0x100FU)                                     /**<  (ESPI_IO_EMI_0_BASE_ADDRESS) I/O Base Address Register  Reset Value */

#define ESPI_IO_EMI_0_BASE_ADDRESS_MASK_Pos   (0)                                            /**< (ESPI_IO_EMI_0_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_EMI_0_BASE_ADDRESS_MASK_Msk   (0xFFU << ESPI_IO_EMI_0_BASE_ADDRESS_MASK_Pos)  /**< (ESPI_IO_EMI_0_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_EMI_0_BASE_ADDRESS_MASK(value) (ESPI_IO_EMI_0_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_IO_EMI_0_BASE_ADDRESS_MASK_Pos))
#define ESPI_IO_EMI_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_IO_EMI_0_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_EMI_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_IO_EMI_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_IO_EMI_0_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_EMI_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_IO_EMI_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_IO_EMI_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_IO_EMI_0_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_IO_EMI_0_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_EMI_0_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_IO_EMI_0_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_IO_EMI_0_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_EMI_0_BASE_ADDRESS_Msk        (0x00013FFFUL)                                 /**< (ESPI_IO_EMI_0_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_IO_EMI_1_BASE_ADDRESS : (ESPI_IO Offset: 0x16c) (R/W 32) I/O Base Address Register -------- */

typedef union
{
  struct
  {
    uint32_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint32_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t VIRTUALIZED:1;             /**< bit:     16  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_EMI_1_BASE_ADDRESS_bits_t;
#define ESPI_IO_EMI_1_BASE_ADDRESS_RESETVALUE (0x110FU)                                     /**<  (ESPI_IO_EMI_1_BASE_ADDRESS) I/O Base Address Register  Reset Value */

#define ESPI_IO_EMI_1_BASE_ADDRESS_MASK_Pos   (0)                                            /**< (ESPI_IO_EMI_1_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_EMI_1_BASE_ADDRESS_MASK_Msk   (0xFFU << ESPI_IO_EMI_1_BASE_ADDRESS_MASK_Pos)  /**< (ESPI_IO_EMI_1_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_EMI_1_BASE_ADDRESS_MASK(value) (ESPI_IO_EMI_1_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_IO_EMI_1_BASE_ADDRESS_MASK_Pos))
#define ESPI_IO_EMI_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_IO_EMI_1_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_EMI_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_IO_EMI_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_IO_EMI_1_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_EMI_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_IO_EMI_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_IO_EMI_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_IO_EMI_1_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_IO_EMI_1_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_EMI_1_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_IO_EMI_1_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_IO_EMI_1_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_EMI_1_BASE_ADDRESS_Msk        (0x00013FFFUL)                                 /**< (ESPI_IO_EMI_1_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_IO_PORT80_0_BASE_ADDRESS : (ESPI_IO Offset: 0x174) (R/W 32) I/O Base Address Register -------- */

typedef union
{
  struct
  {
    uint32_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint32_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t VIRTUALIZED:1;             /**< bit:     16  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_PORT80_0_BASE_ADDRESS_bits_t;
#define ESPI_IO_PORT80_0_BASE_ADDRESS_RESETVALUE (0x2000U)                                     /**<  (ESPI_IO_PORT80_0_BASE_ADDRESS) I/O Base Address Register  Reset Value */

#define ESPI_IO_PORT80_0_BASE_ADDRESS_MASK_Pos (0)                                            /**< (ESPI_IO_PORT80_0_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_PORT80_0_BASE_ADDRESS_MASK_Msk (0xFFU << ESPI_IO_PORT80_0_BASE_ADDRESS_MASK_Pos)  /**< (ESPI_IO_PORT80_0_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_PORT80_0_BASE_ADDRESS_MASK(value) (ESPI_IO_PORT80_0_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_IO_PORT80_0_BASE_ADDRESS_MASK_Pos))
#define ESPI_IO_PORT80_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_IO_PORT80_0_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_PORT80_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_IO_PORT80_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_IO_PORT80_0_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_PORT80_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_IO_PORT80_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_IO_PORT80_0_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_IO_PORT80_0_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_IO_PORT80_0_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_PORT80_0_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_IO_PORT80_0_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_IO_PORT80_0_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_PORT80_0_BASE_ADDRESS_Msk     (0x00013FFFUL)                                 /**< (ESPI_IO_PORT80_0_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_IO_PORT80_1_BASE_ADDRESS : (ESPI_IO Offset: 0x178) (R/W 32) I/O Base Address Register -------- */

typedef union
{
  struct
  {
    uint32_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint32_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t VIRTUALIZED:1;             /**< bit:     16  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_PORT80_1_BASE_ADDRESS_bits_t;
#define ESPI_IO_PORT80_1_BASE_ADDRESS_RESETVALUE (0x2100U)                                     /**<  (ESPI_IO_PORT80_1_BASE_ADDRESS) I/O Base Address Register  Reset Value */

#define ESPI_IO_PORT80_1_BASE_ADDRESS_MASK_Pos (0)                                            /**< (ESPI_IO_PORT80_1_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_PORT80_1_BASE_ADDRESS_MASK_Msk (0xFFU << ESPI_IO_PORT80_1_BASE_ADDRESS_MASK_Pos)  /**< (ESPI_IO_PORT80_1_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_PORT80_1_BASE_ADDRESS_MASK(value) (ESPI_IO_PORT80_1_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_IO_PORT80_1_BASE_ADDRESS_MASK_Pos))
#define ESPI_IO_PORT80_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_IO_PORT80_1_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_PORT80_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_IO_PORT80_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_IO_PORT80_1_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_PORT80_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_IO_PORT80_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_IO_PORT80_1_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_IO_PORT80_1_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_IO_PORT80_1_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_PORT80_1_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_IO_PORT80_1_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_IO_PORT80_1_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_PORT80_1_BASE_ADDRESS_Msk     (0x00013FFFUL)                                 /**< (ESPI_IO_PORT80_1_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_IO_RTC_BASE_ADDRESS : (ESPI_IO Offset: 0x17c) (R/W 32) I/O Base Address Register -------- */

typedef union
{
  struct
  {
    uint32_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint32_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t VIRTUALIZED:1;             /**< bit:     16  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_RTC_BASE_ADDRESS_bits_t;
#define ESPI_IO_RTC_BASE_ADDRESS_RESETVALUE (0x141FU)                                     /**<  (ESPI_IO_RTC_BASE_ADDRESS) I/O Base Address Register  Reset Value */

#define ESPI_IO_RTC_BASE_ADDRESS_MASK_Pos     (0)                                            /**< (ESPI_IO_RTC_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_RTC_BASE_ADDRESS_MASK_Msk     (0xFFU << ESPI_IO_RTC_BASE_ADDRESS_MASK_Pos)   /**< (ESPI_IO_RTC_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_RTC_BASE_ADDRESS_MASK(value)  (ESPI_IO_RTC_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_IO_RTC_BASE_ADDRESS_MASK_Pos))
#define ESPI_IO_RTC_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_IO_RTC_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_RTC_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_IO_RTC_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_IO_RTC_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_RTC_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_IO_RTC_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_IO_RTC_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_IO_RTC_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_IO_RTC_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_RTC_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_IO_RTC_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_IO_RTC_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_RTC_BASE_ADDRESS_Msk          (0x00013FFFUL)                                 /**< (ESPI_IO_RTC_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_IO_UART_2_BASE_ADDRESS : (ESPI_IO Offset: 0x188) (R/W 32) I/O Base Address Register -------- */

typedef union
{
  struct
  {
    uint32_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint32_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t VIRTUALIZED:1;             /**< bit:     16  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_UART_2_BASE_ADDRESS_bits_t;
#define ESPI_IO_UART_2_BASE_ADDRESS_RESETVALUE (0xB07U)                                      /**<  (ESPI_IO_UART_2_BASE_ADDRESS) I/O Base Address Register  Reset Value */

#define ESPI_IO_UART_2_BASE_ADDRESS_MASK_Pos  (0)                                            /**< (ESPI_IO_UART_2_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_UART_2_BASE_ADDRESS_MASK_Msk  (0xFFU << ESPI_IO_UART_2_BASE_ADDRESS_MASK_Pos)  /**< (ESPI_IO_UART_2_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_UART_2_BASE_ADDRESS_MASK(value) (ESPI_IO_UART_2_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_IO_UART_2_BASE_ADDRESS_MASK_Pos))
#define ESPI_IO_UART_2_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_IO_UART_2_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_UART_2_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_IO_UART_2_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_IO_UART_2_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_UART_2_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_IO_UART_2_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_IO_UART_2_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_IO_UART_2_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_IO_UART_2_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_UART_2_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_IO_UART_2_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_IO_UART_2_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_UART_2_BASE_ADDRESS_Msk       (0x00013FFFUL)                                 /**< (ESPI_IO_UART_2_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_IO_GLUE_BASE_ADDRESS : (ESPI_IO Offset: 0x18c) (R/W 32) I/O Base Address Register -------- */

typedef union
{
  struct
  {
    uint32_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint32_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint32_t :2;                        /**< bit: 14..15  Reserved                                      */
    uint32_t VIRTUALIZED:1;             /**< bit:     16  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_GLUE_BASE_ADDRESS_bits_t;
#define ESPI_IO_GLUE_BASE_ADDRESS_RESETVALUE (0xF1FU)                                      /**<  (ESPI_IO_GLUE_BASE_ADDRESS) I/O Base Address Register  Reset Value */

#define ESPI_IO_GLUE_BASE_ADDRESS_MASK_Pos    (0)                                            /**< (ESPI_IO_GLUE_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_IO_GLUE_BASE_ADDRESS_MASK_Msk    (0xFFU << ESPI_IO_GLUE_BASE_ADDRESS_MASK_Pos)  /**< (ESPI_IO_GLUE_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_IO_GLUE_BASE_ADDRESS_MASK(value) (ESPI_IO_GLUE_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_IO_GLUE_BASE_ADDRESS_MASK_Pos))
#define ESPI_IO_GLUE_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_IO_GLUE_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_IO_GLUE_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_IO_GLUE_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_IO_GLUE_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_IO_GLUE_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_IO_GLUE_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_IO_GLUE_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_IO_GLUE_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_IO_GLUE_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_IO_GLUE_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_IO_GLUE_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_IO_GLUE_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_IO_GLUE_BASE_ADDRESS_Msk         (0x00013FFFUL)                                 /**< (ESPI_IO_GLUE_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_IO_LTR_PERIPHERAL_STATUS : (ESPI_IO Offset: 0x220) (R/W 32) LTR Peripheral Status Register -------- */

typedef union
{
  struct
  {
    uint32_t TRANSMIT_DONE_STATUS:1;    /**< bit:      0  This bit is set to '1' whenever a Transmit operation terminates (the TRANSMIT_DONE bit in this register goes from 1 to 0). (R/WC) */
    uint32_t :2;                        /**< bit:   1..2  Reserved                                      */
    uint32_t START_OVERRUN_STATUS:1;    /**< bit:      3  A Start was attempted while the TRANSMIT_BUSY bit in this register was '1'. Any Transmit in progress is immediately terminated. (R/WC) */
    uint32_t DISABLED_BY_HOST_STATUS:1;  /**< bit:      4  A '1' in this bit indicates that the last requested Transmit operation was aborted because Bus Mastering has been disabled by the Host.\n      Bus Mastering is disabled whenever the Peripheral Channel Mastering Enable bit in that register is '0', or the Peripheral Channel Enable bit is '0'. */
    uint32_t :3;                        /**< bit:   5..7  Reserved                                      */
    uint32_t TRANSMIT_BUSY:1;           /**< bit:      8  This bit is set to '1' when firmware writes '1' to the LTR_START (ltr_initiate) bit in the LTR Peripheral Control Register. It is cleared\n      by hardware when the transfer is sufficiently complete so that another packet can be transmitted. If the LTR_START bit is written to '1' while this bit\n      is also '1', then START_OVERRUN_STATUS in this register will be set to '1' and the transfer will terminate immediately. */
    uint32_t :23;                       /**< bit:  9..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_LTR_PERIPHERAL_STATUS_bits_t;
#define ESPI_IO_LTR_PERIPHERAL_STATUS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_LTR_PERIPHERAL_STATUS) LTR Peripheral Status Register  Reset Value */

#define ESPI_IO_LTR_PERIPHERAL_STATUS_TRANSMIT_DONE_STATUS_Pos (0)                                            /**< (ESPI_IO_LTR_PERIPHERAL_STATUS) This bit is set to '1' whenever a Transmit operation terminates (the TRANSMIT_DONE bit in this register goes from 1 to 0). (R/WC) Position */
#define ESPI_IO_LTR_PERIPHERAL_STATUS_TRANSMIT_DONE_STATUS_Msk (0x1U << ESPI_IO_LTR_PERIPHERAL_STATUS_TRANSMIT_DONE_STATUS_Pos)  /**< (ESPI_IO_LTR_PERIPHERAL_STATUS) This bit is set to '1' whenever a Transmit operation terminates (the TRANSMIT_DONE bit in this register goes from 1 to 0). (R/WC) Mask */
#define ESPI_IO_LTR_PERIPHERAL_STATUS_START_OVERRUN_STATUS_Pos (3)                                            /**< (ESPI_IO_LTR_PERIPHERAL_STATUS) A Start was attempted while the TRANSMIT_BUSY bit in this register was '1'. Any Transmit in progress is immediately terminated. (R/WC) Position */
#define ESPI_IO_LTR_PERIPHERAL_STATUS_START_OVERRUN_STATUS_Msk (0x1U << ESPI_IO_LTR_PERIPHERAL_STATUS_START_OVERRUN_STATUS_Pos)  /**< (ESPI_IO_LTR_PERIPHERAL_STATUS) A Start was attempted while the TRANSMIT_BUSY bit in this register was '1'. Any Transmit in progress is immediately terminated. (R/WC) Mask */
#define ESPI_IO_LTR_PERIPHERAL_STATUS_DISABLED_BY_HOST_STATUS_Pos (4)                                            /**< (ESPI_IO_LTR_PERIPHERAL_STATUS) A '1' in this bit indicates that the last requested Transmit operation was aborted because Bus Mastering has been disabled by the Host.\n      Bus Mastering is disabled whenever the Peripheral Channel Mastering Enable bit in that register is '0', or the Peripheral Channel Enable bit is '0'. Position */
#define ESPI_IO_LTR_PERIPHERAL_STATUS_DISABLED_BY_HOST_STATUS_Msk (0x1U << ESPI_IO_LTR_PERIPHERAL_STATUS_DISABLED_BY_HOST_STATUS_Pos)  /**< (ESPI_IO_LTR_PERIPHERAL_STATUS) A '1' in this bit indicates that the last requested Transmit operation was aborted because Bus Mastering has been disabled by the Host.\n      Bus Mastering is disabled whenever the Peripheral Channel Mastering Enable bit in that register is '0', or the Peripheral Channel Enable bit is '0'. Mask */
#define ESPI_IO_LTR_PERIPHERAL_STATUS_TRANSMIT_BUSY_Pos (8)                                            /**< (ESPI_IO_LTR_PERIPHERAL_STATUS) This bit is set to '1' when firmware writes '1' to the LTR_START (ltr_initiate) bit in the LTR Peripheral Control Register. It is cleared\n      by hardware when the transfer is sufficiently complete so that another packet can be transmitted. If the LTR_START bit is written to '1' while this bit\n      is also '1', then START_OVERRUN_STATUS in this register will be set to '1' and the transfer will terminate immediately. Position */
#define ESPI_IO_LTR_PERIPHERAL_STATUS_TRANSMIT_BUSY_Msk (0x1U << ESPI_IO_LTR_PERIPHERAL_STATUS_TRANSMIT_BUSY_Pos)  /**< (ESPI_IO_LTR_PERIPHERAL_STATUS) This bit is set to '1' when firmware writes '1' to the LTR_START (ltr_initiate) bit in the LTR Peripheral Control Register. It is cleared\n      by hardware when the transfer is sufficiently complete so that another packet can be transmitted. If the LTR_START bit is written to '1' while this bit\n      is also '1', then START_OVERRUN_STATUS in this register will be set to '1' and the transfer will terminate immediately. Mask */
#define ESPI_IO_LTR_PERIPHERAL_STATUS_Msk     (0x00000119UL)                                 /**< (ESPI_IO_LTR_PERIPHERAL_STATUS) Register Mask  */

/* -------- ESPI_IO_LTR_PERIPHERAL_ENABLE : (ESPI_IO Offset: 0x224) (R/W 32) LTR Peripheral Enable Register -------- */

typedef union
{
  struct
  {
    uint32_t TRANSMIT_DONE_INT_ENABLE:1;  /**< bit:      0  When this bit is '1' an interrupt is generated when the bit TRANSMIT_DONE_STATUS in the LTR Peripheral Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. */
    uint32_t :31;                       /**< bit:  1..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_LTR_PERIPHERAL_ENABLE_bits_t;
#define ESPI_IO_LTR_PERIPHERAL_ENABLE_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_LTR_PERIPHERAL_ENABLE) LTR Peripheral Enable Register  Reset Value */

#define ESPI_IO_LTR_PERIPHERAL_ENABLE_TRANSMIT_DONE_INT_ENABLE_Pos (0)                                            /**< (ESPI_IO_LTR_PERIPHERAL_ENABLE) When this bit is '1' an interrupt is generated when the bit TRANSMIT_DONE_STATUS in the LTR Peripheral Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_LTR_PERIPHERAL_ENABLE_TRANSMIT_DONE_INT_ENABLE_Msk (0x1U << ESPI_IO_LTR_PERIPHERAL_ENABLE_TRANSMIT_DONE_INT_ENABLE_Pos)  /**< (ESPI_IO_LTR_PERIPHERAL_ENABLE) When this bit is '1' an interrupt is generated when the bit TRANSMIT_DONE_STATUS in the LTR Peripheral Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_LTR_PERIPHERAL_ENABLE_Msk     (0x00000001UL)                                 /**< (ESPI_IO_LTR_PERIPHERAL_ENABLE) Register Mask  */

/* -------- ESPI_IO_LTR_PERIPHERAL_CONTROL : (ESPI_IO Offset: 0x228) (R/W 32) LTR Peripheral Control Register -------- */

typedef union
{
  struct
  {
    uint32_t LTR_START:1;               /**< bit:      0  Writing '1' to this bit triggers the transmission of an LTR packet defined by the LTR Peripheral Message register. Writing '0' to this bit has no effect.\n      The transmission will be inhibited if the Peripheral channel is not Ready, as defined in the eSPI Peripheral Channel Ready Register. */
    uint32_t :7;                        /**< bit:   1..7  Reserved                                      */
    uint32_t OUTGOING_TAG:4;            /**< bit:  8..11  This 4-bit value will be inserted as the TAG number in the next transmitted LTR packet. According to current understanding of Intel\n      specs, this field should be kept zero by firmware. */
    uint32_t :20;                       /**< bit: 12..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_LTR_PERIPHERAL_CONTROL_bits_t;
#define ESPI_IO_LTR_PERIPHERAL_CONTROL_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_LTR_PERIPHERAL_CONTROL) LTR Peripheral Control Register  Reset Value */

#define ESPI_IO_LTR_PERIPHERAL_CONTROL_LTR_START_Pos (0)                                            /**< (ESPI_IO_LTR_PERIPHERAL_CONTROL) Writing '1' to this bit triggers the transmission of an LTR packet defined by the LTR Peripheral Message register. Writing '0' to this bit has no effect.\n      The transmission will be inhibited if the Peripheral channel is not Ready, as defined in the eSPI Peripheral Channel Ready Register. Position */
#define ESPI_IO_LTR_PERIPHERAL_CONTROL_LTR_START_Msk (0x1U << ESPI_IO_LTR_PERIPHERAL_CONTROL_LTR_START_Pos)  /**< (ESPI_IO_LTR_PERIPHERAL_CONTROL) Writing '1' to this bit triggers the transmission of an LTR packet defined by the LTR Peripheral Message register. Writing '0' to this bit has no effect.\n      The transmission will be inhibited if the Peripheral channel is not Ready, as defined in the eSPI Peripheral Channel Ready Register. Mask */
#define ESPI_IO_LTR_PERIPHERAL_CONTROL_OUTGOING_TAG_Pos (8)                                            /**< (ESPI_IO_LTR_PERIPHERAL_CONTROL) This 4-bit value will be inserted as the TAG number in the next transmitted LTR packet. According to current understanding of Intel\n      specs, this field should be kept zero by firmware. Position */
#define ESPI_IO_LTR_PERIPHERAL_CONTROL_OUTGOING_TAG_Msk (0xFU << ESPI_IO_LTR_PERIPHERAL_CONTROL_OUTGOING_TAG_Pos)  /**< (ESPI_IO_LTR_PERIPHERAL_CONTROL) This 4-bit value will be inserted as the TAG number in the next transmitted LTR packet. According to current understanding of Intel\n      specs, this field should be kept zero by firmware. Mask */
#define ESPI_IO_LTR_PERIPHERAL_CONTROL_OUTGOING_TAG(value) (ESPI_IO_LTR_PERIPHERAL_CONTROL_OUTGOING_TAG_Msk & ((value) << ESPI_IO_LTR_PERIPHERAL_CONTROL_OUTGOING_TAG_Pos))
#define ESPI_IO_LTR_PERIPHERAL_CONTROL_Msk    (0x00000F01UL)                                 /**< (ESPI_IO_LTR_PERIPHERAL_CONTROL) Register Mask  */

/* -------- ESPI_IO_LTR_PERIPHERAL_MESSAGE : (ESPI_IO Offset: 0x22c) (R/W 32) LTR Peripheral Message Register -------- */

typedef union
{
  struct
  {
    uint32_t VALUE:10;                  /**< bit:   0..9  This field declares a time, in units expressed by the Scale field. Zero in both this field and the Scale field (zero time) demands best\n      possible effort (minimal latency) by the chipset. */
    uint32_t SCALE:3;                   /**< bit: 10..12  This field declares the time unit expressed by each count of the Value field of this register. */
    uint32_t RESERVED_TRANSMITTED_BITS:2;  /**< bit: 13..14  These bits are Read/Write, but are undefined in the 16-bit LTR message format. These bits are transmitted, but according to current\n      specs they must always be kept as zeros when writing this register. */
    uint32_t REQUIRED_BIT:1;            /**< bit:     15  1 = Maximum latency tolerated is defined by the Scale and Length fields of this register. 0 = No Requirement. Infinite latency tolerated. (Default). */
    uint32_t :16;                       /**< bit: 16..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_LTR_PERIPHERAL_MESSAGE_bits_t;
#define ESPI_IO_LTR_PERIPHERAL_MESSAGE_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_LTR_PERIPHERAL_MESSAGE) LTR Peripheral Message Register  Reset Value */

#define ESPI_IO_LTR_PERIPHERAL_MESSAGE_VALUE_Pos (0)                                            /**< (ESPI_IO_LTR_PERIPHERAL_MESSAGE) This field declares a time, in units expressed by the Scale field. Zero in both this field and the Scale field (zero time) demands best\n      possible effort (minimal latency) by the chipset. Position */
#define ESPI_IO_LTR_PERIPHERAL_MESSAGE_VALUE_Msk (0x3FFU << ESPI_IO_LTR_PERIPHERAL_MESSAGE_VALUE_Pos)  /**< (ESPI_IO_LTR_PERIPHERAL_MESSAGE) This field declares a time, in units expressed by the Scale field. Zero in both this field and the Scale field (zero time) demands best\n      possible effort (minimal latency) by the chipset. Mask */
#define ESPI_IO_LTR_PERIPHERAL_MESSAGE_VALUE(value) (ESPI_IO_LTR_PERIPHERAL_MESSAGE_VALUE_Msk & ((value) << ESPI_IO_LTR_PERIPHERAL_MESSAGE_VALUE_Pos))
#define ESPI_IO_LTR_PERIPHERAL_MESSAGE_SCALE_Pos (10)                                           /**< (ESPI_IO_LTR_PERIPHERAL_MESSAGE) This field declares the time unit expressed by each count of the Value field of this register. Position */
#define ESPI_IO_LTR_PERIPHERAL_MESSAGE_SCALE_Msk (0x7U << ESPI_IO_LTR_PERIPHERAL_MESSAGE_SCALE_Pos)  /**< (ESPI_IO_LTR_PERIPHERAL_MESSAGE) This field declares the time unit expressed by each count of the Value field of this register. Mask */
#define ESPI_IO_LTR_PERIPHERAL_MESSAGE_SCALE(value) (ESPI_IO_LTR_PERIPHERAL_MESSAGE_SCALE_Msk & ((value) << ESPI_IO_LTR_PERIPHERAL_MESSAGE_SCALE_Pos))
#define ESPI_IO_LTR_PERIPHERAL_MESSAGE_RESERVED_TRANSMITTED_BITS_Pos (13)                                           /**< (ESPI_IO_LTR_PERIPHERAL_MESSAGE) These bits are Read/Write, but are undefined in the 16-bit LTR message format. These bits are transmitted, but according to current\n      specs they must always be kept as zeros when writing this register. Position */
#define ESPI_IO_LTR_PERIPHERAL_MESSAGE_RESERVED_TRANSMITTED_BITS_Msk (0x3U << ESPI_IO_LTR_PERIPHERAL_MESSAGE_RESERVED_TRANSMITTED_BITS_Pos)  /**< (ESPI_IO_LTR_PERIPHERAL_MESSAGE) These bits are Read/Write, but are undefined in the 16-bit LTR message format. These bits are transmitted, but according to current\n      specs they must always be kept as zeros when writing this register. Mask */
#define ESPI_IO_LTR_PERIPHERAL_MESSAGE_RESERVED_TRANSMITTED_BITS(value) (ESPI_IO_LTR_PERIPHERAL_MESSAGE_RESERVED_TRANSMITTED_BITS_Msk & ((value) << ESPI_IO_LTR_PERIPHERAL_MESSAGE_RESERVED_TRANSMITTED_BITS_Pos))
#define ESPI_IO_LTR_PERIPHERAL_MESSAGE_REQUIRED_BIT_Pos (15)                                           /**< (ESPI_IO_LTR_PERIPHERAL_MESSAGE) 1 = Maximum latency tolerated is defined by the Scale and Length fields of this register. 0 = No Requirement. Infinite latency tolerated. (Default). Position */
#define ESPI_IO_LTR_PERIPHERAL_MESSAGE_REQUIRED_BIT_Msk (0x1U << ESPI_IO_LTR_PERIPHERAL_MESSAGE_REQUIRED_BIT_Pos)  /**< (ESPI_IO_LTR_PERIPHERAL_MESSAGE) 1 = Maximum latency tolerated is defined by the Scale and Length fields of this register. 0 = No Requirement. Infinite latency tolerated. (Default). Mask */
#define ESPI_IO_LTR_PERIPHERAL_MESSAGE_Msk    (0x0000FFFFUL)                                 /**< (ESPI_IO_LTR_PERIPHERAL_MESSAGE) Register Mask  */

/* -------- ESPI_IO_OOB_RECEIVE_ADDRESS : (ESPI_IO Offset: 0x240) (R/W 32) OOB Channel Receive Address Register -------- */

typedef union
{
  struct
  {
    uint32_t :2;                        /**< bit:   0..1  Reserved                                      */
    uint32_t RECEIVE_BUFFER_ADDRESS:30;  /**< bit:  2..31  This field must be initialized to contain the Base Address for accepting the next OOB packet. */
  };
  uint32_t w;
} __ESPI_IO_OOB_RECEIVE_ADDRESS_bits_t;
#define ESPI_IO_OOB_RECEIVE_ADDRESS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_OOB_RECEIVE_ADDRESS) OOB Channel Receive Address Register  Reset Value */

#define ESPI_IO_OOB_RECEIVE_ADDRESS_RECEIVE_BUFFER_ADDRESS_Pos (2)                                            /**< (ESPI_IO_OOB_RECEIVE_ADDRESS) This field must be initialized to contain the Base Address for accepting the next OOB packet. Position */
#define ESPI_IO_OOB_RECEIVE_ADDRESS_RECEIVE_BUFFER_ADDRESS_Msk (0x3FFFFFFFU << ESPI_IO_OOB_RECEIVE_ADDRESS_RECEIVE_BUFFER_ADDRESS_Pos)  /**< (ESPI_IO_OOB_RECEIVE_ADDRESS) This field must be initialized to contain the Base Address for accepting the next OOB packet. Mask */
#define ESPI_IO_OOB_RECEIVE_ADDRESS_RECEIVE_BUFFER_ADDRESS(value) (ESPI_IO_OOB_RECEIVE_ADDRESS_RECEIVE_BUFFER_ADDRESS_Msk & ((value) << ESPI_IO_OOB_RECEIVE_ADDRESS_RECEIVE_BUFFER_ADDRESS_Pos))
#define ESPI_IO_OOB_RECEIVE_ADDRESS_Msk       (0xFFFFFFFCUL)                                 /**< (ESPI_IO_OOB_RECEIVE_ADDRESS) Register Mask  */

/* -------- ESPI_IO_OOB_TRANSMIT_ADDRESS : (ESPI_IO Offset: 0x248) (R/W 32) OOB Channel Transmit Address Register -------- */

typedef union
{
  struct
  {
    uint32_t :2;                        /**< bit:   0..1  Reserved                                      */
    uint32_t TRANSMIT_BUFFER_ADDRESS:30;  /**< bit:  2..31  Before starting an OOB Transmit, this field must be initialized to contain the Base Address of the buffer in SRAM.\n      The contents of the transmit buffer should not be modified while TRANSMIT_BUSY is asserted. */
  };
  uint32_t w;
} __ESPI_IO_OOB_TRANSMIT_ADDRESS_bits_t;
#define ESPI_IO_OOB_TRANSMIT_ADDRESS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_OOB_TRANSMIT_ADDRESS) OOB Channel Transmit Address Register  Reset Value */

#define ESPI_IO_OOB_TRANSMIT_ADDRESS_TRANSMIT_BUFFER_ADDRESS_Pos (2)                                            /**< (ESPI_IO_OOB_TRANSMIT_ADDRESS) Before starting an OOB Transmit, this field must be initialized to contain the Base Address of the buffer in SRAM.\n      The contents of the transmit buffer should not be modified while TRANSMIT_BUSY is asserted. Position */
#define ESPI_IO_OOB_TRANSMIT_ADDRESS_TRANSMIT_BUFFER_ADDRESS_Msk (0x3FFFFFFFU << ESPI_IO_OOB_TRANSMIT_ADDRESS_TRANSMIT_BUFFER_ADDRESS_Pos)  /**< (ESPI_IO_OOB_TRANSMIT_ADDRESS) Before starting an OOB Transmit, this field must be initialized to contain the Base Address of the buffer in SRAM.\n      The contents of the transmit buffer should not be modified while TRANSMIT_BUSY is asserted. Mask */
#define ESPI_IO_OOB_TRANSMIT_ADDRESS_TRANSMIT_BUFFER_ADDRESS(value) (ESPI_IO_OOB_TRANSMIT_ADDRESS_TRANSMIT_BUFFER_ADDRESS_Msk & ((value) << ESPI_IO_OOB_TRANSMIT_ADDRESS_TRANSMIT_BUFFER_ADDRESS_Pos))
#define ESPI_IO_OOB_TRANSMIT_ADDRESS_Msk      (0xFFFFFFFCUL)                                 /**< (ESPI_IO_OOB_TRANSMIT_ADDRESS) Register Mask  */

/* -------- ESPI_IO_OOB_RECEIVE_LENGTH : (ESPI_IO Offset: 0x250) (R/W 32) OOB Channel Receive Length Register -------- */

typedef union
{
  struct
  {
    uint32_t RECEIVED_MESSAGE_LENGTH:13;  /**< bit:  0..12  This 13-bit read-only field reports how many bytes were received into SRAM in the last packet. This is necessary, independent of\n      any 'byte count' in the packet itself to distinguish between an SMBus packet with or without a PEC byte. */
    uint32_t :3;                        /**< bit: 13..15  Reserved                                      */
    uint32_t RECEIVE_BUFFER_LENGTH:13;  /**< bit: 16..28  Before setting the Receive Enable bit to allow incoming traffic to the Receive Buffer area, this 13-bit field must be initialized to\n      contain the length in bytes of the receiving buffer in SRAM. This limits the number of bytes that can be received into SRAM. Any additional incoming\n      bytes must be discarded by hardware, posting the Data Overrun error flag. Practically, the maximum value that can be placed in this field is the\n      configured Max Packet Length. This limit, or anything higher, is legal, but will effectively disable the limit check. */
    uint32_t :3;                        /**< bit: 29..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_OOB_RECEIVE_LENGTH_bits_t;
#define ESPI_IO_OOB_RECEIVE_LENGTH_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_OOB_RECEIVE_LENGTH) OOB Channel Receive Length Register  Reset Value */

#define ESPI_IO_OOB_RECEIVE_LENGTH_RECEIVED_MESSAGE_LENGTH_Pos (0)                                            /**< (ESPI_IO_OOB_RECEIVE_LENGTH) This 13-bit read-only field reports how many bytes were received into SRAM in the last packet. This is necessary, independent of\n      any 'byte count' in the packet itself to distinguish between an SMBus packet with or without a PEC byte. Position */
#define ESPI_IO_OOB_RECEIVE_LENGTH_RECEIVED_MESSAGE_LENGTH_Msk (0x1FFFU << ESPI_IO_OOB_RECEIVE_LENGTH_RECEIVED_MESSAGE_LENGTH_Pos)  /**< (ESPI_IO_OOB_RECEIVE_LENGTH) This 13-bit read-only field reports how many bytes were received into SRAM in the last packet. This is necessary, independent of\n      any 'byte count' in the packet itself to distinguish between an SMBus packet with or without a PEC byte. Mask */
#define ESPI_IO_OOB_RECEIVE_LENGTH_RECEIVED_MESSAGE_LENGTH(value) (ESPI_IO_OOB_RECEIVE_LENGTH_RECEIVED_MESSAGE_LENGTH_Msk & ((value) << ESPI_IO_OOB_RECEIVE_LENGTH_RECEIVED_MESSAGE_LENGTH_Pos))
#define ESPI_IO_OOB_RECEIVE_LENGTH_RECEIVE_BUFFER_LENGTH_Pos (16)                                           /**< (ESPI_IO_OOB_RECEIVE_LENGTH) Before setting the Receive Enable bit to allow incoming traffic to the Receive Buffer area, this 13-bit field must be initialized to\n      contain the length in bytes of the receiving buffer in SRAM. This limits the number of bytes that can be received into SRAM. Any additional incoming\n      bytes must be discarded by hardware, posting the Data Overrun error flag. Practically, the maximum value that can be placed in this field is the\n      configured Max Packet Length. This limit, or anything higher, is legal, but will effectively disable the limit check. Position */
#define ESPI_IO_OOB_RECEIVE_LENGTH_RECEIVE_BUFFER_LENGTH_Msk (0x1FFFU << ESPI_IO_OOB_RECEIVE_LENGTH_RECEIVE_BUFFER_LENGTH_Pos)  /**< (ESPI_IO_OOB_RECEIVE_LENGTH) Before setting the Receive Enable bit to allow incoming traffic to the Receive Buffer area, this 13-bit field must be initialized to\n      contain the length in bytes of the receiving buffer in SRAM. This limits the number of bytes that can be received into SRAM. Any additional incoming\n      bytes must be discarded by hardware, posting the Data Overrun error flag. Practically, the maximum value that can be placed in this field is the\n      configured Max Packet Length. This limit, or anything higher, is legal, but will effectively disable the limit check. Mask */
#define ESPI_IO_OOB_RECEIVE_LENGTH_RECEIVE_BUFFER_LENGTH(value) (ESPI_IO_OOB_RECEIVE_LENGTH_RECEIVE_BUFFER_LENGTH_Msk & ((value) << ESPI_IO_OOB_RECEIVE_LENGTH_RECEIVE_BUFFER_LENGTH_Pos))
#define ESPI_IO_OOB_RECEIVE_LENGTH_Msk        (0x1FFF1FFFUL)                                 /**< (ESPI_IO_OOB_RECEIVE_LENGTH) Register Mask  */

/* -------- ESPI_IO_OOB_TRANSMIT_LENGTH : (ESPI_IO Offset: 0x254) (R/W 32) OOB Channel Transmit Length Register -------- */

typedef union
{
  struct
  {
    uint32_t TRANSMIT_MESSAGE_LENGTH:13;  /**< bit:  0..12  This 13-bit field declares how many bytes are to be transmitted from the Tramsit Buffer memory. A value of zero,\n      or a value greater than the defined Max Packet Size (73 decimal, or 4Dh, by default) is illegal, and will trigger Bad Request handling. */
    uint32_t :19;                       /**< bit: 13..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_OOB_TRANSMIT_LENGTH_bits_t;
#define ESPI_IO_OOB_TRANSMIT_LENGTH_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_OOB_TRANSMIT_LENGTH) OOB Channel Transmit Length Register  Reset Value */

#define ESPI_IO_OOB_TRANSMIT_LENGTH_TRANSMIT_MESSAGE_LENGTH_Pos (0)                                            /**< (ESPI_IO_OOB_TRANSMIT_LENGTH) This 13-bit field declares how many bytes are to be transmitted from the Tramsit Buffer memory. A value of zero,\n      or a value greater than the defined Max Packet Size (73 decimal, or 4Dh, by default) is illegal, and will trigger Bad Request handling. Position */
#define ESPI_IO_OOB_TRANSMIT_LENGTH_TRANSMIT_MESSAGE_LENGTH_Msk (0x1FFFU << ESPI_IO_OOB_TRANSMIT_LENGTH_TRANSMIT_MESSAGE_LENGTH_Pos)  /**< (ESPI_IO_OOB_TRANSMIT_LENGTH) This 13-bit field declares how many bytes are to be transmitted from the Tramsit Buffer memory. A value of zero,\n      or a value greater than the defined Max Packet Size (73 decimal, or 4Dh, by default) is illegal, and will trigger Bad Request handling. Mask */
#define ESPI_IO_OOB_TRANSMIT_LENGTH_TRANSMIT_MESSAGE_LENGTH(value) (ESPI_IO_OOB_TRANSMIT_LENGTH_TRANSMIT_MESSAGE_LENGTH_Msk & ((value) << ESPI_IO_OOB_TRANSMIT_LENGTH_TRANSMIT_MESSAGE_LENGTH_Pos))
#define ESPI_IO_OOB_TRANSMIT_LENGTH_Msk       (0x00001FFFUL)                                 /**< (ESPI_IO_OOB_TRANSMIT_LENGTH) Register Mask  */

/* -------- ESPI_IO_OOB_RECEIVE_CONTROL : (ESPI_IO Offset: 0x258) (R/W 32) OOB Channel Receive Control Register -------- */

typedef union
{
  struct
  {
    uint32_t SET_RECEIVE_AVAILABLE:1;   /**< bit:      0  Firmware sets this bit to '1' to indicate that an SRAM buffer is available to receive the next Down OOB packet. This\n      forces the bit RECEIVE_ENABLE bit in the OOB Channel Receive Status Register register to be set to '1'. The OOB Channel Receive\n      Address Register and OOB Channel Receive Length Register must have already been initialized before setting this bit. */
    uint32_t :8;                        /**< bit:   1..8  Reserved                                      */
    uint32_t OOB_CHANNEL_ENABLED:1;     /**< bit:      9  This allows firmware to read the OOB Message Channel Enabled field in the eSPI Configuration register. The Master\n      sets the bit to '1' to enable the OOB channel. */
    uint32_t :6;                        /**< bit: 10..15  Reserved                                      */
    uint32_t OOB_MAXIMUM_PAYLOAD_SIZE_SELECTED:3;  /**< bit: 16..18  This allows firmware to read the correspondingly-named field in the eSPI Configuration register. The 001b default\n      code selects 64-byte mode, which is actually a 73-byte max payload size for eSPI (64 bytes plus MCTP wrapper bytes). */
    uint32_t :13;                       /**< bit: 19..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_OOB_RECEIVE_CONTROL_bits_t;
#define ESPI_IO_OOB_RECEIVE_CONTROL_RESETVALUE (0x10000U)                                    /**<  (ESPI_IO_OOB_RECEIVE_CONTROL) OOB Channel Receive Control Register  Reset Value */

#define ESPI_IO_OOB_RECEIVE_CONTROL_SET_RECEIVE_AVAILABLE_Pos (0)                                            /**< (ESPI_IO_OOB_RECEIVE_CONTROL) Firmware sets this bit to '1' to indicate that an SRAM buffer is available to receive the next Down OOB packet. This\n      forces the bit RECEIVE_ENABLE bit in the OOB Channel Receive Status Register register to be set to '1'. The OOB Channel Receive\n      Address Register and OOB Channel Receive Length Register must have already been initialized before setting this bit. Position */
#define ESPI_IO_OOB_RECEIVE_CONTROL_SET_RECEIVE_AVAILABLE_Msk (0x1U << ESPI_IO_OOB_RECEIVE_CONTROL_SET_RECEIVE_AVAILABLE_Pos)  /**< (ESPI_IO_OOB_RECEIVE_CONTROL) Firmware sets this bit to '1' to indicate that an SRAM buffer is available to receive the next Down OOB packet. This\n      forces the bit RECEIVE_ENABLE bit in the OOB Channel Receive Status Register register to be set to '1'. The OOB Channel Receive\n      Address Register and OOB Channel Receive Length Register must have already been initialized before setting this bit. Mask */
#define ESPI_IO_OOB_RECEIVE_CONTROL_OOB_CHANNEL_ENABLED_Pos (9)                                            /**< (ESPI_IO_OOB_RECEIVE_CONTROL) This allows firmware to read the OOB Message Channel Enabled field in the eSPI Configuration register. The Master\n      sets the bit to '1' to enable the OOB channel. Position */
#define ESPI_IO_OOB_RECEIVE_CONTROL_OOB_CHANNEL_ENABLED_Msk (0x1U << ESPI_IO_OOB_RECEIVE_CONTROL_OOB_CHANNEL_ENABLED_Pos)  /**< (ESPI_IO_OOB_RECEIVE_CONTROL) This allows firmware to read the OOB Message Channel Enabled field in the eSPI Configuration register. The Master\n      sets the bit to '1' to enable the OOB channel. Mask */
#define ESPI_IO_OOB_RECEIVE_CONTROL_OOB_MAXIMUM_PAYLOAD_SIZE_SELECTED_Pos (16)                                           /**< (ESPI_IO_OOB_RECEIVE_CONTROL) This allows firmware to read the correspondingly-named field in the eSPI Configuration register. The 001b default\n      code selects 64-byte mode, which is actually a 73-byte max payload size for eSPI (64 bytes plus MCTP wrapper bytes). Position */
#define ESPI_IO_OOB_RECEIVE_CONTROL_OOB_MAXIMUM_PAYLOAD_SIZE_SELECTED_Msk (0x7U << ESPI_IO_OOB_RECEIVE_CONTROL_OOB_MAXIMUM_PAYLOAD_SIZE_SELECTED_Pos)  /**< (ESPI_IO_OOB_RECEIVE_CONTROL) This allows firmware to read the correspondingly-named field in the eSPI Configuration register. The 001b default\n      code selects 64-byte mode, which is actually a 73-byte max payload size for eSPI (64 bytes plus MCTP wrapper bytes). Mask */
#define ESPI_IO_OOB_RECEIVE_CONTROL_OOB_MAXIMUM_PAYLOAD_SIZE_SELECTED(value) (ESPI_IO_OOB_RECEIVE_CONTROL_OOB_MAXIMUM_PAYLOAD_SIZE_SELECTED_Msk & ((value) << ESPI_IO_OOB_RECEIVE_CONTROL_OOB_MAXIMUM_PAYLOAD_SIZE_SELECTED_Pos))
#define ESPI_IO_OOB_RECEIVE_CONTROL_Msk       (0x00070201UL)                                 /**< (ESPI_IO_OOB_RECEIVE_CONTROL) Register Mask  */

/* -------- ESPI_IO_OOB_RECEIVE_INT_ENABLE : (ESPI_IO Offset: 0x25c) (R/W 32) OOB Channel Receive Interrupt Enable Register -------- */

typedef union
{
  struct
  {
    uint32_t RECEIVE_INTERRUPT_ENABLE:1;  /**< bit:      0  When this bit is '1' an interrupt is generated when the bit RECEIVE_DONE_STATUS in the OOB Channel Receive Status\n      Register is 1. When this bit is '0', the status bit will not generate an interrupt. */
    uint32_t :31;                       /**< bit:  1..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_OOB_RECEIVE_INT_ENABLE_bits_t;
#define ESPI_IO_OOB_RECEIVE_INT_ENABLE_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_OOB_RECEIVE_INT_ENABLE) OOB Channel Receive Interrupt Enable Register  Reset Value */

#define ESPI_IO_OOB_RECEIVE_INT_ENABLE_RECEIVE_INTERRUPT_ENABLE_Pos (0)                                            /**< (ESPI_IO_OOB_RECEIVE_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit RECEIVE_DONE_STATUS in the OOB Channel Receive Status\n      Register is 1. When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_OOB_RECEIVE_INT_ENABLE_RECEIVE_INTERRUPT_ENABLE_Msk (0x1U << ESPI_IO_OOB_RECEIVE_INT_ENABLE_RECEIVE_INTERRUPT_ENABLE_Pos)  /**< (ESPI_IO_OOB_RECEIVE_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit RECEIVE_DONE_STATUS in the OOB Channel Receive Status\n      Register is 1. When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_OOB_RECEIVE_INT_ENABLE_Msk    (0x00000001UL)                                 /**< (ESPI_IO_OOB_RECEIVE_INT_ENABLE) Register Mask  */

/* -------- ESPI_IO_OOB_RECEIVE_STATUS : (ESPI_IO Offset: 0x260) (R/W 32) OOB Channel Receive Status Register -------- */

typedef union
{
  struct
  {
    uint32_t RECEIVE_DONE_STATUS:1;     /**< bit:      0  This bit is set to '1' whenever the RECEIVE_ENABLE bit in this register is cleared to '0' by hardware when an incoming\n      packet is completely transferred to SRAM. This bit is also set whenever either OVERRUN_STATUS or INTERNAL_BUS_ERROR_STATUS in\n      this register are set to '1'. (R/WC). */
    uint32_t INTERNAL_BUS_ERROR_STATUS:1;  /**< bit:      1  This bit is set to '1' whenever the channel tries to write an incoming byte into an invalid area of the internal\n      addressing space. This could happen if the OOB Channel Receive Address Register was set to something invalid by firmware. If\n      this error occurs mid-packet(crossing a boundary into an invalid space), then the remaining data is discarded. (R/WC). */
    uint32_t OVERRUN_STATUS:1;          /**< bit:      2  This bit is set to '1' whenever an incoming packet is truncated because it was longer than the RECEIVE_BUFFER_LENGTH\n      field. Incoming extra bytes are discarded when this error is triggered, but the buffer receives the data up to its limit, for\n      debugging purposes. (R/WC) */
    uint32_t RECEIVE_ENABLE:1;          /**< bit:      3  This bit is set to '1' when firmware sets the bit SET_RECEIVE_AVAILABLE in the OOB Channel Receive Control Register\n      to '1', to indicate that an SRAM buffer is available to receive the next Down OOB packet. The OOB Channel Receive Address\n      Register and OOB Channel Receive Length Register must have already been initialized before setting this bit.\n      This bit is cleared by hardware when the next packet is received. The RECEIVE_DONE_STATUS bit is set to '1' after this bit is\n      cleared. A '0' in this bit does not necessarily present 'Not Free' status to the eSPI Master. As long as FIFO space is available\n      for a complete OOB packet, the packet can be input and held in the FIFO until this bit is again set by firmware. */
    uint32_t :4;                        /**< bit:   4..7  Reserved                                      */
    uint32_t INCOMING_TAG:4;            /**< bit:  8..11  This field holds the 4-bit TAG in the last message received from the Master. */
    uint32_t :20;                       /**< bit: 12..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_OOB_RECEIVE_STATUS_bits_t;
#define ESPI_IO_OOB_RECEIVE_STATUS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_OOB_RECEIVE_STATUS) OOB Channel Receive Status Register  Reset Value */

#define ESPI_IO_OOB_RECEIVE_STATUS_RECEIVE_DONE_STATUS_Pos (0)                                            /**< (ESPI_IO_OOB_RECEIVE_STATUS) This bit is set to '1' whenever the RECEIVE_ENABLE bit in this register is cleared to '0' by hardware when an incoming\n      packet is completely transferred to SRAM. This bit is also set whenever either OVERRUN_STATUS or INTERNAL_BUS_ERROR_STATUS in\n      this register are set to '1'. (R/WC). Position */
#define ESPI_IO_OOB_RECEIVE_STATUS_RECEIVE_DONE_STATUS_Msk (0x1U << ESPI_IO_OOB_RECEIVE_STATUS_RECEIVE_DONE_STATUS_Pos)  /**< (ESPI_IO_OOB_RECEIVE_STATUS) This bit is set to '1' whenever the RECEIVE_ENABLE bit in this register is cleared to '0' by hardware when an incoming\n      packet is completely transferred to SRAM. This bit is also set whenever either OVERRUN_STATUS or INTERNAL_BUS_ERROR_STATUS in\n      this register are set to '1'. (R/WC). Mask */
#define ESPI_IO_OOB_RECEIVE_STATUS_INTERNAL_BUS_ERROR_STATUS_Pos (1)                                            /**< (ESPI_IO_OOB_RECEIVE_STATUS) This bit is set to '1' whenever the channel tries to write an incoming byte into an invalid area of the internal\n      addressing space. This could happen if the OOB Channel Receive Address Register was set to something invalid by firmware. If\n      this error occurs mid-packet(crossing a boundary into an invalid space), then the remaining data is discarded. (R/WC). Position */
#define ESPI_IO_OOB_RECEIVE_STATUS_INTERNAL_BUS_ERROR_STATUS_Msk (0x1U << ESPI_IO_OOB_RECEIVE_STATUS_INTERNAL_BUS_ERROR_STATUS_Pos)  /**< (ESPI_IO_OOB_RECEIVE_STATUS) This bit is set to '1' whenever the channel tries to write an incoming byte into an invalid area of the internal\n      addressing space. This could happen if the OOB Channel Receive Address Register was set to something invalid by firmware. If\n      this error occurs mid-packet(crossing a boundary into an invalid space), then the remaining data is discarded. (R/WC). Mask */
#define ESPI_IO_OOB_RECEIVE_STATUS_OVERRUN_STATUS_Pos (2)                                            /**< (ESPI_IO_OOB_RECEIVE_STATUS) This bit is set to '1' whenever an incoming packet is truncated because it was longer than the RECEIVE_BUFFER_LENGTH\n      field. Incoming extra bytes are discarded when this error is triggered, but the buffer receives the data up to its limit, for\n      debugging purposes. (R/WC) Position */
#define ESPI_IO_OOB_RECEIVE_STATUS_OVERRUN_STATUS_Msk (0x1U << ESPI_IO_OOB_RECEIVE_STATUS_OVERRUN_STATUS_Pos)  /**< (ESPI_IO_OOB_RECEIVE_STATUS) This bit is set to '1' whenever an incoming packet is truncated because it was longer than the RECEIVE_BUFFER_LENGTH\n      field. Incoming extra bytes are discarded when this error is triggered, but the buffer receives the data up to its limit, for\n      debugging purposes. (R/WC) Mask */
#define ESPI_IO_OOB_RECEIVE_STATUS_RECEIVE_ENABLE_Pos (3)                                            /**< (ESPI_IO_OOB_RECEIVE_STATUS) This bit is set to '1' when firmware sets the bit SET_RECEIVE_AVAILABLE in the OOB Channel Receive Control Register\n      to '1', to indicate that an SRAM buffer is available to receive the next Down OOB packet. The OOB Channel Receive Address\n      Register and OOB Channel Receive Length Register must have already been initialized before setting this bit.\n      This bit is cleared by hardware when the next packet is received. The RECEIVE_DONE_STATUS bit is set to '1' after this bit is\n      cleared. A '0' in this bit does not necessarily present 'Not Free' status to the eSPI Master. As long as FIFO space is available\n      for a complete OOB packet, the packet can be input and held in the FIFO until this bit is again set by firmware. Position */
#define ESPI_IO_OOB_RECEIVE_STATUS_RECEIVE_ENABLE_Msk (0x1U << ESPI_IO_OOB_RECEIVE_STATUS_RECEIVE_ENABLE_Pos)  /**< (ESPI_IO_OOB_RECEIVE_STATUS) This bit is set to '1' when firmware sets the bit SET_RECEIVE_AVAILABLE in the OOB Channel Receive Control Register\n      to '1', to indicate that an SRAM buffer is available to receive the next Down OOB packet. The OOB Channel Receive Address\n      Register and OOB Channel Receive Length Register must have already been initialized before setting this bit.\n      This bit is cleared by hardware when the next packet is received. The RECEIVE_DONE_STATUS bit is set to '1' after this bit is\n      cleared. A '0' in this bit does not necessarily present 'Not Free' status to the eSPI Master. As long as FIFO space is available\n      for a complete OOB packet, the packet can be input and held in the FIFO until this bit is again set by firmware. Mask */
#define ESPI_IO_OOB_RECEIVE_STATUS_INCOMING_TAG_Pos (8)                                            /**< (ESPI_IO_OOB_RECEIVE_STATUS) This field holds the 4-bit TAG in the last message received from the Master. Position */
#define ESPI_IO_OOB_RECEIVE_STATUS_INCOMING_TAG_Msk (0xFU << ESPI_IO_OOB_RECEIVE_STATUS_INCOMING_TAG_Pos)  /**< (ESPI_IO_OOB_RECEIVE_STATUS) This field holds the 4-bit TAG in the last message received from the Master. Mask */
#define ESPI_IO_OOB_RECEIVE_STATUS_INCOMING_TAG(value) (ESPI_IO_OOB_RECEIVE_STATUS_INCOMING_TAG_Msk & ((value) << ESPI_IO_OOB_RECEIVE_STATUS_INCOMING_TAG_Pos))
#define ESPI_IO_OOB_RECEIVE_STATUS_Msk        (0x00000F0FUL)                                 /**< (ESPI_IO_OOB_RECEIVE_STATUS) Register Mask  */

/* -------- ESPI_IO_OOB_TRANSMIT_CONTROL : (ESPI_IO Offset: 0x264) (R/W 32) OOB Channel Transmit Control Register -------- */

typedef union
{
  struct
  {
    uint32_t TRANSMIT_START:1;          /**< bit:      0  A write of '1' to this bit starts the transmission of an OOB packet defined by the OOB Channel Transmit Address Register and OOB\n      Channel Transmit Length Register registers. A write of '0' has no effect.\n      The transmission will be inhibited if the OOB channel is not Ready, as defined in the eSPI OOB Channel Ready Register. */
    uint32_t :7;                        /**< bit:   1..7  Reserved                                      */
    uint32_t OUTGOING_TAG:4;            /**< bit:  8..11  This 4-bit value will be inserted as the TAG number in the next transmitted OOB packet. This field must be 0. */
    uint32_t :20;                       /**< bit: 12..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_OOB_TRANSMIT_CONTROL_bits_t;
#define ESPI_IO_OOB_TRANSMIT_CONTROL_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_OOB_TRANSMIT_CONTROL) OOB Channel Transmit Control Register  Reset Value */

#define ESPI_IO_OOB_TRANSMIT_CONTROL_TRANSMIT_START_Pos (0)                                            /**< (ESPI_IO_OOB_TRANSMIT_CONTROL) A write of '1' to this bit starts the transmission of an OOB packet defined by the OOB Channel Transmit Address Register and OOB\n      Channel Transmit Length Register registers. A write of '0' has no effect.\n      The transmission will be inhibited if the OOB channel is not Ready, as defined in the eSPI OOB Channel Ready Register. Position */
#define ESPI_IO_OOB_TRANSMIT_CONTROL_TRANSMIT_START_Msk (0x1U << ESPI_IO_OOB_TRANSMIT_CONTROL_TRANSMIT_START_Pos)  /**< (ESPI_IO_OOB_TRANSMIT_CONTROL) A write of '1' to this bit starts the transmission of an OOB packet defined by the OOB Channel Transmit Address Register and OOB\n      Channel Transmit Length Register registers. A write of '0' has no effect.\n      The transmission will be inhibited if the OOB channel is not Ready, as defined in the eSPI OOB Channel Ready Register. Mask */
#define ESPI_IO_OOB_TRANSMIT_CONTROL_OUTGOING_TAG_Pos (8)                                            /**< (ESPI_IO_OOB_TRANSMIT_CONTROL) This 4-bit value will be inserted as the TAG number in the next transmitted OOB packet. This field must be 0. Position */
#define ESPI_IO_OOB_TRANSMIT_CONTROL_OUTGOING_TAG_Msk (0xFU << ESPI_IO_OOB_TRANSMIT_CONTROL_OUTGOING_TAG_Pos)  /**< (ESPI_IO_OOB_TRANSMIT_CONTROL) This 4-bit value will be inserted as the TAG number in the next transmitted OOB packet. This field must be 0. Mask */
#define ESPI_IO_OOB_TRANSMIT_CONTROL_OUTGOING_TAG(value) (ESPI_IO_OOB_TRANSMIT_CONTROL_OUTGOING_TAG_Msk & ((value) << ESPI_IO_OOB_TRANSMIT_CONTROL_OUTGOING_TAG_Pos))
#define ESPI_IO_OOB_TRANSMIT_CONTROL_Msk      (0x00000F01UL)                                 /**< (ESPI_IO_OOB_TRANSMIT_CONTROL) Register Mask  */

/* -------- ESPI_IO_OOB_TRANSMIT_INT_ENABLE : (ESPI_IO Offset: 0x268) (R/W 32) OOB Channel Transmit Interrupt Enable Register -------- */

typedef union
{
  struct
  {
    uint32_t TRANSMIT_DONE_INTERRUPT_ENABLE:1;  /**< bit:      0  When this bit is '1' an interrupt is generated when the bit TRANSMIT_DONE_STATUS in the OOB Channel Transmit Status\n      Register is 1. When this bit is '0', the status bit will not generate an interrupt. */
    uint32_t CHANNEL_ENABLE_CHANGE_INTERRUPT_ENABLE:1;  /**< bit:      1  When this bit is '1' an interrupt is generated when the bit CHANNEL_ENABLE_CHANGE_STATUS in the OOB Channel Transmit\n      Status Register is 1. When this bit is '0', the status bit will not generate an interrupt. */
    uint32_t :30;                       /**< bit:  2..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_OOB_TRANSMIT_INT_ENABLE_bits_t;
#define ESPI_IO_OOB_TRANSMIT_INT_ENABLE_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_OOB_TRANSMIT_INT_ENABLE) OOB Channel Transmit Interrupt Enable Register  Reset Value */

#define ESPI_IO_OOB_TRANSMIT_INT_ENABLE_TRANSMIT_DONE_INTERRUPT_ENABLE_Pos (0)                                            /**< (ESPI_IO_OOB_TRANSMIT_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit TRANSMIT_DONE_STATUS in the OOB Channel Transmit Status\n      Register is 1. When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_OOB_TRANSMIT_INT_ENABLE_TRANSMIT_DONE_INTERRUPT_ENABLE_Msk (0x1U << ESPI_IO_OOB_TRANSMIT_INT_ENABLE_TRANSMIT_DONE_INTERRUPT_ENABLE_Pos)  /**< (ESPI_IO_OOB_TRANSMIT_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit TRANSMIT_DONE_STATUS in the OOB Channel Transmit Status\n      Register is 1. When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_OOB_TRANSMIT_INT_ENABLE_CHANNEL_ENABLE_CHANGE_INTERRUPT_ENABLE_Pos (1)                                            /**< (ESPI_IO_OOB_TRANSMIT_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit CHANNEL_ENABLE_CHANGE_STATUS in the OOB Channel Transmit\n      Status Register is 1. When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_OOB_TRANSMIT_INT_ENABLE_CHANNEL_ENABLE_CHANGE_INTERRUPT_ENABLE_Msk (0x1U << ESPI_IO_OOB_TRANSMIT_INT_ENABLE_CHANNEL_ENABLE_CHANGE_INTERRUPT_ENABLE_Pos)  /**< (ESPI_IO_OOB_TRANSMIT_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit CHANNEL_ENABLE_CHANGE_STATUS in the OOB Channel Transmit\n      Status Register is 1. When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_OOB_TRANSMIT_INT_ENABLE_Msk   (0x00000003UL)                                 /**< (ESPI_IO_OOB_TRANSMIT_INT_ENABLE) Register Mask  */

/* -------- ESPI_IO_OOB_TRANSMIT_STATUS : (ESPI_IO Offset: 0x26c) (R/W 32) OOB Channel Transmit Status Register -------- */

typedef union
{
  struct
  {
    uint32_t TRANSMIT_DONE_STATUS:1;    /**< bit:      0  This bit is set to '1' whenever a Transmit operation terminates (TRANSMIT_BUSY in this register goes from '1' to '0'). (R/WC) */
    uint32_t CHANNEL_ENABLE_CHANGE_STATUS:1;  /**< bit:      1  This bit is set to '1' whenever the eSPI Master changes the state of the OOB Message Channel Enable bit in the OOB\n      Channel Capabilities and Configurations Master register. (R/WC). */
    uint32_t INTERNAL_BUS_ERROR_STATUS:1;  /**< bit:      2  This error flag indicates an internal bus violation occurred in trying to transmit. (R/WC) */
    uint32_t START_OVERRUN_STATUS:1;    /**< bit:      3  This error flag indicates a Start was attempted while the channel was Busy. Any Transmit in progress is\n      immediately halted. (R/WC) */
    uint32_t :1;                        /**< bit:      4  Reserved                                      */
    uint32_t BAD_REQUEST:1;             /**< bit:      5  This bit is intended for any situation where a firmware request cannot be started because it expresses\n      something impossible. This bit will be set for a request to Transmit 0 bytes or if a Transmit length is more than the\n      selected Max Payload Length. This condition brings the state machine to the Done state, as if something had actually\n      finished, with everything including the Done interrupt triggered. (R/WC) */
    uint32_t :2;                        /**< bit:   6..7  Reserved                                      */
    uint32_t TRANSMIT_BUSY:1;           /**< bit:      8  This bit is set to '1' when firmware writes '1' to the TRANSMIT_START bit. It is cleared by hardware when\n      the transfer is complete. If the TRANSMIT_START bit is written '1' while this bit is also '1', then this will set the\n      START_OVERRUN_STATUS bit to '1' and terminate the transfer attempt immediately (Transmit Done). */
    uint32_t OOB_CHANNEL_ENABLED_IMAGE:1;  /**< bit:      9  This bit is an image of the OOB Channel Enabled bit in the OOB Channel Receive Control Register register.\n      It is provided here so that it can be seen with the CHANNEL_ENABLE_CHANGE_STATUS Interrupt Status bit for efficiency. */
    uint32_t :22;                       /**< bit: 10..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_OOB_TRANSMIT_STATUS_bits_t;
#define ESPI_IO_OOB_TRANSMIT_STATUS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_OOB_TRANSMIT_STATUS) OOB Channel Transmit Status Register  Reset Value */

#define ESPI_IO_OOB_TRANSMIT_STATUS_TRANSMIT_DONE_STATUS_Pos (0)                                            /**< (ESPI_IO_OOB_TRANSMIT_STATUS) This bit is set to '1' whenever a Transmit operation terminates (TRANSMIT_BUSY in this register goes from '1' to '0'). (R/WC) Position */
#define ESPI_IO_OOB_TRANSMIT_STATUS_TRANSMIT_DONE_STATUS_Msk (0x1U << ESPI_IO_OOB_TRANSMIT_STATUS_TRANSMIT_DONE_STATUS_Pos)  /**< (ESPI_IO_OOB_TRANSMIT_STATUS) This bit is set to '1' whenever a Transmit operation terminates (TRANSMIT_BUSY in this register goes from '1' to '0'). (R/WC) Mask */
#define ESPI_IO_OOB_TRANSMIT_STATUS_CHANNEL_ENABLE_CHANGE_STATUS_Pos (1)                                            /**< (ESPI_IO_OOB_TRANSMIT_STATUS) This bit is set to '1' whenever the eSPI Master changes the state of the OOB Message Channel Enable bit in the OOB\n      Channel Capabilities and Configurations Master register. (R/WC). Position */
#define ESPI_IO_OOB_TRANSMIT_STATUS_CHANNEL_ENABLE_CHANGE_STATUS_Msk (0x1U << ESPI_IO_OOB_TRANSMIT_STATUS_CHANNEL_ENABLE_CHANGE_STATUS_Pos)  /**< (ESPI_IO_OOB_TRANSMIT_STATUS) This bit is set to '1' whenever the eSPI Master changes the state of the OOB Message Channel Enable bit in the OOB\n      Channel Capabilities and Configurations Master register. (R/WC). Mask */
#define ESPI_IO_OOB_TRANSMIT_STATUS_INTERNAL_BUS_ERROR_STATUS_Pos (2)                                            /**< (ESPI_IO_OOB_TRANSMIT_STATUS) This error flag indicates an internal bus violation occurred in trying to transmit. (R/WC) Position */
#define ESPI_IO_OOB_TRANSMIT_STATUS_INTERNAL_BUS_ERROR_STATUS_Msk (0x1U << ESPI_IO_OOB_TRANSMIT_STATUS_INTERNAL_BUS_ERROR_STATUS_Pos)  /**< (ESPI_IO_OOB_TRANSMIT_STATUS) This error flag indicates an internal bus violation occurred in trying to transmit. (R/WC) Mask */
#define ESPI_IO_OOB_TRANSMIT_STATUS_START_OVERRUN_STATUS_Pos (3)                                            /**< (ESPI_IO_OOB_TRANSMIT_STATUS) This error flag indicates a Start was attempted while the channel was Busy. Any Transmit in progress is\n      immediately halted. (R/WC) Position */
#define ESPI_IO_OOB_TRANSMIT_STATUS_START_OVERRUN_STATUS_Msk (0x1U << ESPI_IO_OOB_TRANSMIT_STATUS_START_OVERRUN_STATUS_Pos)  /**< (ESPI_IO_OOB_TRANSMIT_STATUS) This error flag indicates a Start was attempted while the channel was Busy. Any Transmit in progress is\n      immediately halted. (R/WC) Mask */
#define ESPI_IO_OOB_TRANSMIT_STATUS_BAD_REQUEST_Pos (5)                                            /**< (ESPI_IO_OOB_TRANSMIT_STATUS) This bit is intended for any situation where a firmware request cannot be started because it expresses\n      something impossible. This bit will be set for a request to Transmit 0 bytes or if a Transmit length is more than the\n      selected Max Payload Length. This condition brings the state machine to the Done state, as if something had actually\n      finished, with everything including the Done interrupt triggered. (R/WC) Position */
#define ESPI_IO_OOB_TRANSMIT_STATUS_BAD_REQUEST_Msk (0x1U << ESPI_IO_OOB_TRANSMIT_STATUS_BAD_REQUEST_Pos)  /**< (ESPI_IO_OOB_TRANSMIT_STATUS) This bit is intended for any situation where a firmware request cannot be started because it expresses\n      something impossible. This bit will be set for a request to Transmit 0 bytes or if a Transmit length is more than the\n      selected Max Payload Length. This condition brings the state machine to the Done state, as if something had actually\n      finished, with everything including the Done interrupt triggered. (R/WC) Mask */
#define ESPI_IO_OOB_TRANSMIT_STATUS_TRANSMIT_BUSY_Pos (8)                                            /**< (ESPI_IO_OOB_TRANSMIT_STATUS) This bit is set to '1' when firmware writes '1' to the TRANSMIT_START bit. It is cleared by hardware when\n      the transfer is complete. If the TRANSMIT_START bit is written '1' while this bit is also '1', then this will set the\n      START_OVERRUN_STATUS bit to '1' and terminate the transfer attempt immediately (Transmit Done). Position */
#define ESPI_IO_OOB_TRANSMIT_STATUS_TRANSMIT_BUSY_Msk (0x1U << ESPI_IO_OOB_TRANSMIT_STATUS_TRANSMIT_BUSY_Pos)  /**< (ESPI_IO_OOB_TRANSMIT_STATUS) This bit is set to '1' when firmware writes '1' to the TRANSMIT_START bit. It is cleared by hardware when\n      the transfer is complete. If the TRANSMIT_START bit is written '1' while this bit is also '1', then this will set the\n      START_OVERRUN_STATUS bit to '1' and terminate the transfer attempt immediately (Transmit Done). Mask */
#define ESPI_IO_OOB_TRANSMIT_STATUS_OOB_CHANNEL_ENABLED_IMAGE_Pos (9)                                            /**< (ESPI_IO_OOB_TRANSMIT_STATUS) This bit is an image of the OOB Channel Enabled bit in the OOB Channel Receive Control Register register.\n      It is provided here so that it can be seen with the CHANNEL_ENABLE_CHANGE_STATUS Interrupt Status bit for efficiency. Position */
#define ESPI_IO_OOB_TRANSMIT_STATUS_OOB_CHANNEL_ENABLED_IMAGE_Msk (0x1U << ESPI_IO_OOB_TRANSMIT_STATUS_OOB_CHANNEL_ENABLED_IMAGE_Pos)  /**< (ESPI_IO_OOB_TRANSMIT_STATUS) This bit is an image of the OOB Channel Enabled bit in the OOB Channel Receive Control Register register.\n      It is provided here so that it can be seen with the CHANNEL_ENABLE_CHANGE_STATUS Interrupt Status bit for efficiency. Mask */
#define ESPI_IO_OOB_TRANSMIT_STATUS_Msk       (0x0000032FUL)                                 /**< (ESPI_IO_OOB_TRANSMIT_STATUS) Register Mask  */

/* -------- ESPI_IO_FLASH_CH_FLASH_ADDRESS : (ESPI_IO Offset: 0x280) (R/W 32) Flash Access Channel Flash Address Register -------- */

typedef union
{
  struct
  {
    uint32_t FLASH_ADDRESS:32;          /**< bit:  0..31  Before starting a Flash access, this field must be initialized to contain the value used by eSPI for addressing the Flash contents. */
  };
  uint32_t w;
} __ESPI_IO_FLASH_CH_FLASH_ADDRESS_bits_t;
#define ESPI_IO_FLASH_CH_FLASH_ADDRESS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_FLASH_CH_FLASH_ADDRESS) Flash Access Channel Flash Address Register  Reset Value */

#define ESPI_IO_FLASH_CH_FLASH_ADDRESS_FLASH_ADDRESS_Pos (0)                                            /**< (ESPI_IO_FLASH_CH_FLASH_ADDRESS) Before starting a Flash access, this field must be initialized to contain the value used by eSPI for addressing the Flash contents. Position */
#define ESPI_IO_FLASH_CH_FLASH_ADDRESS_FLASH_ADDRESS_Msk (0xFFFFFFFFU << ESPI_IO_FLASH_CH_FLASH_ADDRESS_FLASH_ADDRESS_Pos)  /**< (ESPI_IO_FLASH_CH_FLASH_ADDRESS) Before starting a Flash access, this field must be initialized to contain the value used by eSPI for addressing the Flash contents. Mask */
#define ESPI_IO_FLASH_CH_FLASH_ADDRESS_FLASH_ADDRESS(value) (ESPI_IO_FLASH_CH_FLASH_ADDRESS_FLASH_ADDRESS_Msk & ((value) << ESPI_IO_FLASH_CH_FLASH_ADDRESS_FLASH_ADDRESS_Pos))
#define ESPI_IO_FLASH_CH_FLASH_ADDRESS_Msk    (0xFFFFFFFFUL)                                 /**< (ESPI_IO_FLASH_CH_FLASH_ADDRESS) Register Mask  */

/* -------- ESPI_IO_FLASH_CH_BUFFER_ADDRESS : (ESPI_IO Offset: 0x288) (R/W 32) Flash Access Channel Buffer Address Register -------- */

typedef union
{
  struct
  {
    uint32_t BUFFER_ADDRESS:32;         /**< bit:  0..31  Before starting a Flash access, this field must be initialized with the address of the data buffer in the EC's memory space. */
  };
  uint32_t w;
} __ESPI_IO_FLASH_CH_BUFFER_ADDRESS_bits_t;
#define ESPI_IO_FLASH_CH_BUFFER_ADDRESS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_FLASH_CH_BUFFER_ADDRESS) Flash Access Channel Buffer Address Register  Reset Value */

#define ESPI_IO_FLASH_CH_BUFFER_ADDRESS_BUFFER_ADDRESS_Pos (0)                                            /**< (ESPI_IO_FLASH_CH_BUFFER_ADDRESS) Before starting a Flash access, this field must be initialized with the address of the data buffer in the EC's memory space. Position */
#define ESPI_IO_FLASH_CH_BUFFER_ADDRESS_BUFFER_ADDRESS_Msk (0xFFFFFFFFU << ESPI_IO_FLASH_CH_BUFFER_ADDRESS_BUFFER_ADDRESS_Pos)  /**< (ESPI_IO_FLASH_CH_BUFFER_ADDRESS) Before starting a Flash access, this field must be initialized with the address of the data buffer in the EC's memory space. Mask */
#define ESPI_IO_FLASH_CH_BUFFER_ADDRESS_BUFFER_ADDRESS(value) (ESPI_IO_FLASH_CH_BUFFER_ADDRESS_BUFFER_ADDRESS_Msk & ((value) << ESPI_IO_FLASH_CH_BUFFER_ADDRESS_BUFFER_ADDRESS_Pos))
#define ESPI_IO_FLASH_CH_BUFFER_ADDRESS_Msk   (0xFFFFFFFFUL)                                 /**< (ESPI_IO_FLASH_CH_BUFFER_ADDRESS) Register Mask  */

/* -------- ESPI_IO_FLASH_CH_TRANSFER_LENGTH : (ESPI_IO Offset: 0x290) (R/W 32) Flash Access Channel Transfer Length Register -------- */

typedef union
{
  struct
  {
    uint32_t TRANSFER_LENGTH:32;        /**< bit:  0..31  Before starting a Flash access, this field must be initialized with the total number of bytes to be transferred in the\n      requested transaction sequence. If the Master attempts to transfer more bytes than this in Read Completions, the transfer is faulted\n      and the DATA_OVERRUN bit in the Flash Access Channel Status Register register is asserted. */
  };
  uint32_t w;
} __ESPI_IO_FLASH_CH_TRANSFER_LENGTH_bits_t;
#define ESPI_IO_FLASH_CH_TRANSFER_LENGTH_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_FLASH_CH_TRANSFER_LENGTH) Flash Access Channel Transfer Length Register  Reset Value */

#define ESPI_IO_FLASH_CH_TRANSFER_LENGTH_TRANSFER_LENGTH_Pos (0)                                            /**< (ESPI_IO_FLASH_CH_TRANSFER_LENGTH) Before starting a Flash access, this field must be initialized with the total number of bytes to be transferred in the\n      requested transaction sequence. If the Master attempts to transfer more bytes than this in Read Completions, the transfer is faulted\n      and the DATA_OVERRUN bit in the Flash Access Channel Status Register register is asserted. Position */
#define ESPI_IO_FLASH_CH_TRANSFER_LENGTH_TRANSFER_LENGTH_Msk (0xFFFFFFFFU << ESPI_IO_FLASH_CH_TRANSFER_LENGTH_TRANSFER_LENGTH_Pos)  /**< (ESPI_IO_FLASH_CH_TRANSFER_LENGTH) Before starting a Flash access, this field must be initialized with the total number of bytes to be transferred in the\n      requested transaction sequence. If the Master attempts to transfer more bytes than this in Read Completions, the transfer is faulted\n      and the DATA_OVERRUN bit in the Flash Access Channel Status Register register is asserted. Mask */
#define ESPI_IO_FLASH_CH_TRANSFER_LENGTH_TRANSFER_LENGTH(value) (ESPI_IO_FLASH_CH_TRANSFER_LENGTH_TRANSFER_LENGTH_Msk & ((value) << ESPI_IO_FLASH_CH_TRANSFER_LENGTH_TRANSFER_LENGTH_Pos))
#define ESPI_IO_FLASH_CH_TRANSFER_LENGTH_Msk  (0xFFFFFFFFUL)                                 /**< (ESPI_IO_FLASH_CH_TRANSFER_LENGTH) Register Mask  */

/* -------- ESPI_IO_FLASH_CH_CONTROL : (ESPI_IO Offset: 0x294) (R/W 32) Flash Access Channel Control Register -------- */

typedef union
{
  struct
  {
    uint32_t FLASH_START:1;             /**< bit:      0  A write of '1' to this bit starts the transmission and sets the Busy status bit. A write of '0' has no effect.\n      The transmission will be inhibited if the OOB channel is not Ready, as defined in the eSPI Flash Channel Ready Register. */
    uint32_t :1;                        /**< bit:      1  Reserved                                      */
    uint32_t FUNCTION:2;                /**< bit:   2..3  This bit selects the requested Flash function as follows:\n      11=Erase Flash Range=Larger of two ranges, if a choice exists\n      10=Erase Flash Range=Smaller of two ranges, if a choice exists\n      01=Write to Flash\n      00=Read from Flash. */
    uint32_t TAG:4;                     /**< bit:   4..7  This field should always be written to zero, which is the only expected Tag value for Flash Access traffic. It provides\n      the 4-bit TAG value in the eSPI Transaction Header sent by the EC. Completion traffic from the Master is required to match this field also. */
    uint32_t :8;                        /**< bit:  8..15  Reserved                                      */
    uint32_t ABORT_ACCESS:1;            /**< bit:     16  By writing '1' to this bit while Busy==1, the transaction sequence last triggered by the Start bit is terminated, and the\n      Busy bit is cleared, at the next protocol-compliant opportunity. The clearing of the Busy bit will set the DONE status bit and the\n      ABORTED_BY_SLAVE status bit is set to '1' to acknowledge this specific action as the cause. The action of writing '1' to this bit is\n      ignored while Busy==0. This bit reads as '0' always. */
    uint32_t :15;                       /**< bit: 17..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_FLASH_CH_CONTROL_bits_t;
#define ESPI_IO_FLASH_CH_CONTROL_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_FLASH_CH_CONTROL) Flash Access Channel Control Register  Reset Value */

#define ESPI_IO_FLASH_CH_CONTROL_FLASH_START_Pos (0)                                            /**< (ESPI_IO_FLASH_CH_CONTROL) A write of '1' to this bit starts the transmission and sets the Busy status bit. A write of '0' has no effect.\n      The transmission will be inhibited if the OOB channel is not Ready, as defined in the eSPI Flash Channel Ready Register. Position */
#define ESPI_IO_FLASH_CH_CONTROL_FLASH_START_Msk (0x1U << ESPI_IO_FLASH_CH_CONTROL_FLASH_START_Pos)  /**< (ESPI_IO_FLASH_CH_CONTROL) A write of '1' to this bit starts the transmission and sets the Busy status bit. A write of '0' has no effect.\n      The transmission will be inhibited if the OOB channel is not Ready, as defined in the eSPI Flash Channel Ready Register. Mask */
#define ESPI_IO_FLASH_CH_CONTROL_FUNCTION_Pos (2)                                            /**< (ESPI_IO_FLASH_CH_CONTROL) This bit selects the requested Flash function as follows:\n      11=Erase Flash Range=Larger of two ranges, if a choice exists\n      10=Erase Flash Range=Smaller of two ranges, if a choice exists\n      01=Write to Flash\n      00=Read from Flash. Position */
#define ESPI_IO_FLASH_CH_CONTROL_FUNCTION_Msk (0x3U << ESPI_IO_FLASH_CH_CONTROL_FUNCTION_Pos)  /**< (ESPI_IO_FLASH_CH_CONTROL) This bit selects the requested Flash function as follows:\n      11=Erase Flash Range=Larger of two ranges, if a choice exists\n      10=Erase Flash Range=Smaller of two ranges, if a choice exists\n      01=Write to Flash\n      00=Read from Flash. Mask */
#define ESPI_IO_FLASH_CH_CONTROL_FUNCTION(value) (ESPI_IO_FLASH_CH_CONTROL_FUNCTION_Msk & ((value) << ESPI_IO_FLASH_CH_CONTROL_FUNCTION_Pos))
#define ESPI_IO_FLASH_CH_CONTROL_TAG_Pos      (4)                                            /**< (ESPI_IO_FLASH_CH_CONTROL) This field should always be written to zero, which is the only expected Tag value for Flash Access traffic. It provides\n      the 4-bit TAG value in the eSPI Transaction Header sent by the EC. Completion traffic from the Master is required to match this field also. Position */
#define ESPI_IO_FLASH_CH_CONTROL_TAG_Msk      (0xFU << ESPI_IO_FLASH_CH_CONTROL_TAG_Pos)     /**< (ESPI_IO_FLASH_CH_CONTROL) This field should always be written to zero, which is the only expected Tag value for Flash Access traffic. It provides\n      the 4-bit TAG value in the eSPI Transaction Header sent by the EC. Completion traffic from the Master is required to match this field also. Mask */
#define ESPI_IO_FLASH_CH_CONTROL_TAG(value)   (ESPI_IO_FLASH_CH_CONTROL_TAG_Msk & ((value) << ESPI_IO_FLASH_CH_CONTROL_TAG_Pos))
#define ESPI_IO_FLASH_CH_CONTROL_ABORT_ACCESS_Pos (16)                                           /**< (ESPI_IO_FLASH_CH_CONTROL) By writing '1' to this bit while Busy==1, the transaction sequence last triggered by the Start bit is terminated, and the\n      Busy bit is cleared, at the next protocol-compliant opportunity. The clearing of the Busy bit will set the DONE status bit and the\n      ABORTED_BY_SLAVE status bit is set to '1' to acknowledge this specific action as the cause. The action of writing '1' to this bit is\n      ignored while Busy==0. This bit reads as '0' always. Position */
#define ESPI_IO_FLASH_CH_CONTROL_ABORT_ACCESS_Msk (0x1U << ESPI_IO_FLASH_CH_CONTROL_ABORT_ACCESS_Pos)  /**< (ESPI_IO_FLASH_CH_CONTROL) By writing '1' to this bit while Busy==1, the transaction sequence last triggered by the Start bit is terminated, and the\n      Busy bit is cleared, at the next protocol-compliant opportunity. The clearing of the Busy bit will set the DONE status bit and the\n      ABORTED_BY_SLAVE status bit is set to '1' to acknowledge this specific action as the cause. The action of writing '1' to this bit is\n      ignored while Busy==0. This bit reads as '0' always. Mask */
#define ESPI_IO_FLASH_CH_CONTROL_Msk          (0x000100FDUL)                                 /**< (ESPI_IO_FLASH_CH_CONTROL) Register Mask  */

/* -------- ESPI_IO_FLASH_CH_INT_ENABLE : (ESPI_IO Offset: 0x298) (R/W 32) Flash Access Channel Interrupt Enable Register -------- */

typedef union
{
  struct
  {
    uint32_t DONE_INTERRUPT_ENABLE:1;   /**< bit:      0  When this bit is '1' an interrupt is generated when the bit DONE in the Flash Access Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. */
    uint32_t FLASH_ENABLE_STATUS_CHANGE_INTERRUPT_ENABLE:1;  /**< bit:      1  When this bit is '1' an interrupt is generated when the bit CHANNEL_ENABLE_CHANGE_STATUS in the Flash Access Channel\n      Status Register is 1. When this bit is '0', the status bit will not generate an interrupt. */
    uint32_t :30;                       /**< bit:  2..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_FLASH_CH_INT_ENABLE_bits_t;
#define ESPI_IO_FLASH_CH_INT_ENABLE_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_FLASH_CH_INT_ENABLE) Flash Access Channel Interrupt Enable Register  Reset Value */

#define ESPI_IO_FLASH_CH_INT_ENABLE_DONE_INTERRUPT_ENABLE_Pos (0)                                            /**< (ESPI_IO_FLASH_CH_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit DONE in the Flash Access Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_FLASH_CH_INT_ENABLE_DONE_INTERRUPT_ENABLE_Msk (0x1U << ESPI_IO_FLASH_CH_INT_ENABLE_DONE_INTERRUPT_ENABLE_Pos)  /**< (ESPI_IO_FLASH_CH_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit DONE in the Flash Access Channel Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_FLASH_CH_INT_ENABLE_FLASH_ENABLE_STATUS_CHANGE_INTERRUPT_ENABLE_Pos (1)                                            /**< (ESPI_IO_FLASH_CH_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit CHANNEL_ENABLE_CHANGE_STATUS in the Flash Access Channel\n      Status Register is 1. When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_IO_FLASH_CH_INT_ENABLE_FLASH_ENABLE_STATUS_CHANGE_INTERRUPT_ENABLE_Msk (0x1U << ESPI_IO_FLASH_CH_INT_ENABLE_FLASH_ENABLE_STATUS_CHANGE_INTERRUPT_ENABLE_Pos)  /**< (ESPI_IO_FLASH_CH_INT_ENABLE) When this bit is '1' an interrupt is generated when the bit CHANNEL_ENABLE_CHANGE_STATUS in the Flash Access Channel\n      Status Register is 1. When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_IO_FLASH_CH_INT_ENABLE_Msk       (0x00000003UL)                                 /**< (ESPI_IO_FLASH_CH_INT_ENABLE) Register Mask  */

/* -------- ESPI_IO_FLASH_CH_CONFIG : (ESPI_IO Offset: 0x29c) (R/ 32) Flash Access Channel Configuration Register -------- */

typedef union
{
  struct
  {
    uint32_t BUSY:1;                    /**< bit:      0  This bit is set to '1' when a '1' is written to the FLASH_START bit, and cleared either by hardware completion of the\n      requested operation or by firmware writing '1' to the ABORT_ACCESS bit. 1=The Channel is busy. 0=The Channel is not busy. */
    uint32_t :1;                        /**< bit:      1  Reserved                                      */
    uint32_t ERASE_BLOCK_SIZE:3;        /**< bit:   2..4  This is a read-only image of the equivalent field of the eSPI Configuration register. This field is set by the Master to\n      define what the Erase block size is for the Flash being used, and whether there is a choice available to firmware.\n      111b = Reserved\n      110b = Reserved\n      101b = 256K\n      100b = 128K\n      010b = 64K\n      011b = Both 4K and 64K allowed (see FUNCTION field)\n      001b = 4K\n      000b = Reserved. */
    uint32_t :3;                        /**< bit:   5..7  Reserved                                      */
    uint32_t FLASH_MAXIMUM_PAYLOAD_SELECTED:3;  /**< bit:  8..10  This is a read-only image of the equivalent field of the eSPI Configuration register, set by the Master to declare the\n      maximum number of bytes that can be used in a single Flash payload, in either direction. It will never be set greater than the value\n      provided by the EC in the FLASH_MAXIMUM_PAYLOAD_SIZE_SUPPORTED field in the eSPI Flash Channel Capabilities Register.\n      100b -- 111b = Reserved\n      011b = 256 bytes\n      010b = 128 bytes\n      001b = 64 bytes\n      000b = Reserved. */
    uint32_t :1;                        /**< bit:     11  Reserved                                      */
    uint32_t FLASH_MAXIMUM_READ_REQUEST_SIZE:3;  /**< bit: 12..14  This comes read-only from the eSPI Configuration register, set by the Master to declare the maximum number of bytes\n      that can be requested by the EC in a single Flash Read request packet.\n      111b = 4K bytes\n      110b = 2K bytes\n      101b = 1K bytes\n      100b = 512 bytes\n      011b = 256 bytes\n      010b = 128 bytes\n      001b = 64 bytes\n      000b = Reserved. */
    uint32_t :17;                       /**< bit: 15..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_FLASH_CH_CONFIG_bits_t;
#define ESPI_IO_FLASH_CH_CONFIG_RESETVALUE  (0x00U)                                       /**<  (ESPI_IO_FLASH_CH_CONFIG) Flash Access Channel Configuration Register  Reset Value */

#define ESPI_IO_FLASH_CH_CONFIG_BUSY_Pos      (0)                                            /**< (ESPI_IO_FLASH_CH_CONFIG) This bit is set to '1' when a '1' is written to the FLASH_START bit, and cleared either by hardware completion of the\n      requested operation or by firmware writing '1' to the ABORT_ACCESS bit. 1=The Channel is busy. 0=The Channel is not busy. Position */
#define ESPI_IO_FLASH_CH_CONFIG_BUSY_Msk      (0x1U << ESPI_IO_FLASH_CH_CONFIG_BUSY_Pos)     /**< (ESPI_IO_FLASH_CH_CONFIG) This bit is set to '1' when a '1' is written to the FLASH_START bit, and cleared either by hardware completion of the\n      requested operation or by firmware writing '1' to the ABORT_ACCESS bit. 1=The Channel is busy. 0=The Channel is not busy. Mask */
#define ESPI_IO_FLASH_CH_CONFIG_ERASE_BLOCK_SIZE_Pos (2)                                            /**< (ESPI_IO_FLASH_CH_CONFIG) This is a read-only image of the equivalent field of the eSPI Configuration register. This field is set by the Master to\n      define what the Erase block size is for the Flash being used, and whether there is a choice available to firmware.\n      111b = Reserved\n      110b = Reserved\n      101b = 256K\n      100b = 128K\n      010b = 64K\n      011b = Both 4K and 64K allowed (see FUNCTION field)\n      001b = 4K\n      000b = Reserved. Position */
#define ESPI_IO_FLASH_CH_CONFIG_ERASE_BLOCK_SIZE_Msk (0x7U << ESPI_IO_FLASH_CH_CONFIG_ERASE_BLOCK_SIZE_Pos)  /**< (ESPI_IO_FLASH_CH_CONFIG) This is a read-only image of the equivalent field of the eSPI Configuration register. This field is set by the Master to\n      define what the Erase block size is for the Flash being used, and whether there is a choice available to firmware.\n      111b = Reserved\n      110b = Reserved\n      101b = 256K\n      100b = 128K\n      010b = 64K\n      011b = Both 4K and 64K allowed (see FUNCTION field)\n      001b = 4K\n      000b = Reserved. Mask */
#define ESPI_IO_FLASH_CH_CONFIG_ERASE_BLOCK_SIZE(value) (ESPI_IO_FLASH_CH_CONFIG_ERASE_BLOCK_SIZE_Msk & ((value) << ESPI_IO_FLASH_CH_CONFIG_ERASE_BLOCK_SIZE_Pos))
#define ESPI_IO_FLASH_CH_CONFIG_FLASH_MAXIMUM_PAYLOAD_SELECTED_Pos (8)                                            /**< (ESPI_IO_FLASH_CH_CONFIG) This is a read-only image of the equivalent field of the eSPI Configuration register, set by the Master to declare the\n      maximum number of bytes that can be used in a single Flash payload, in either direction. It will never be set greater than the value\n      provided by the EC in the FLASH_MAXIMUM_PAYLOAD_SIZE_SUPPORTED field in the eSPI Flash Channel Capabilities Register.\n      100b -- 111b = Reserved\n      011b = 256 bytes\n      010b = 128 bytes\n      001b = 64 bytes\n      000b = Reserved. Position */
#define ESPI_IO_FLASH_CH_CONFIG_FLASH_MAXIMUM_PAYLOAD_SELECTED_Msk (0x7U << ESPI_IO_FLASH_CH_CONFIG_FLASH_MAXIMUM_PAYLOAD_SELECTED_Pos)  /**< (ESPI_IO_FLASH_CH_CONFIG) This is a read-only image of the equivalent field of the eSPI Configuration register, set by the Master to declare the\n      maximum number of bytes that can be used in a single Flash payload, in either direction. It will never be set greater than the value\n      provided by the EC in the FLASH_MAXIMUM_PAYLOAD_SIZE_SUPPORTED field in the eSPI Flash Channel Capabilities Register.\n      100b -- 111b = Reserved\n      011b = 256 bytes\n      010b = 128 bytes\n      001b = 64 bytes\n      000b = Reserved. Mask */
#define ESPI_IO_FLASH_CH_CONFIG_FLASH_MAXIMUM_PAYLOAD_SELECTED(value) (ESPI_IO_FLASH_CH_CONFIG_FLASH_MAXIMUM_PAYLOAD_SELECTED_Msk & ((value) << ESPI_IO_FLASH_CH_CONFIG_FLASH_MAXIMUM_PAYLOAD_SELECTED_Pos))
#define ESPI_IO_FLASH_CH_CONFIG_FLASH_MAXIMUM_READ_REQUEST_SIZE_Pos (12)                                           /**< (ESPI_IO_FLASH_CH_CONFIG) This comes read-only from the eSPI Configuration register, set by the Master to declare the maximum number of bytes\n      that can be requested by the EC in a single Flash Read request packet.\n      111b = 4K bytes\n      110b = 2K bytes\n      101b = 1K bytes\n      100b = 512 bytes\n      011b = 256 bytes\n      010b = 128 bytes\n      001b = 64 bytes\n      000b = Reserved. Position */
#define ESPI_IO_FLASH_CH_CONFIG_FLASH_MAXIMUM_READ_REQUEST_SIZE_Msk (0x7U << ESPI_IO_FLASH_CH_CONFIG_FLASH_MAXIMUM_READ_REQUEST_SIZE_Pos)  /**< (ESPI_IO_FLASH_CH_CONFIG) This comes read-only from the eSPI Configuration register, set by the Master to declare the maximum number of bytes\n      that can be requested by the EC in a single Flash Read request packet.\n      111b = 4K bytes\n      110b = 2K bytes\n      101b = 1K bytes\n      100b = 512 bytes\n      011b = 256 bytes\n      010b = 128 bytes\n      001b = 64 bytes\n      000b = Reserved. Mask */
#define ESPI_IO_FLASH_CH_CONFIG_FLASH_MAXIMUM_READ_REQUEST_SIZE(value) (ESPI_IO_FLASH_CH_CONFIG_FLASH_MAXIMUM_READ_REQUEST_SIZE_Msk & ((value) << ESPI_IO_FLASH_CH_CONFIG_FLASH_MAXIMUM_READ_REQUEST_SIZE_Pos))
#define ESPI_IO_FLASH_CH_CONFIG_Msk           (0x0000771DUL)                                 /**< (ESPI_IO_FLASH_CH_CONFIG) Register Mask  */

/* -------- ESPI_IO_FLASH_CH_STATUS : (ESPI_IO Offset: 0x2a0) (R/W 32) Flash Access Channel Status Register -------- */

typedef union
{
  struct
  {
    uint32_t CHANNEL_ENABLE_STATUS:1;   /**< bit:      0  This bit is a Read-only image of the bit Flash Access Channel Enable in the eSPI Configuration space. Rising or\n      falling edges of this bit will set the CHANNEL_ENABLE_CHANGE_STATUS bit to 1, and may be used to trigger interrupts. A falling edge\n      on this bit, while Busy==1, will also clear the Busy bit and set the DONE bit, with DISABLED_BY_MASTER status.\n      1=Flash Access Channel Enable bit = 1. 0=Flash Access Channel Enable bit = 0. */
    uint32_t CHANNEL_ENABLE_CHANGE_STATUS:1;  /**< bit:      1  0=Flash Access Enable bit in eSPI Configuration space has not been changed since this bit was last cleared.\n      1=Flash Access Enable bit in eSPI Configuration space has been changed since this bit was last cleared.\n      The current state of the Flash Access Enable bit can be seen as the read-only bit CHANNEL_ENABLE_STATUS in this register.\n      This bit is cleared by writing '1'. (R/WC) */
    uint32_t DONE:1;                    /**< bit:      2  1=Channel is done=Busy bit has been cleared since this bit was last cleared. It is cleared by writing '1'. (R/WC)\n      0=Channel is not done=Busy bit has not been cleared since this bit was last cleared. */
    uint32_t DISABLED_BY_MASTER:1;      /**< bit:      3  This bit is set to '1' if the Flash Channel is disabled by the Master while the Busy bit is '1'. It is cleared by writing '1'. (R/WC)      1=The command finished because the Enable bit became 0. 0=The command finished without a change in the Enable bit. */
    uint32_t INTERNAL_BUS_ERROR:1;      /**< bit:      4  This bit is set to '1' if the internal bus master associated with the Flash Access Channel encounters a Bus Fault condition.\n      It is cleared by writing '1'. (R/WC)\n      1=Bus Error detected. 0=The command finished without a Bus Error. */
    uint32_t ABORTED_BY_SLAVE:1;        /**< bit:      5  This bit is set to '1' if the Abort bit is set to '1' by firmware while the Busy bit is '1', thereby clearing Busy status.\n      It is cleared by writing '1'. (R/WC)\n      1=The command finished because of the Abort bit. 0=The command finished without an Abort bit activation. */
    uint32_t DATA_OVERRUN:1;            /**< bit:      6  This bit is set to '1' by a SUCCESSFUL COMPLETION response by the eSPI Master to a Read sequence, but either without\n      indicating Final Completion when the requested byte count is reached or with too many bytes provided while indicating Final Completion.\n      It is cleared by writing '1'. (R/WC)\n      1=The eSPI Master finished with too much data. 0=The eSPI Master finished without too much data. */
    uint32_t INCOMPLETE:1;              /**< bit:      7  This bit is set to '1' by a SUCCESSFUL COMPLETION Read response from the eSPI Master, indicating a Final Completion, but\n      with too few bytes provided for the Transaction step that was issued by the eSPI Slave. It is cleared by writing '1'.\n      This bit is cleared by writing '1'. (R/WC)\n      1=The eSPI Master finished with too little data. 0=The eSPI Master finished with at least enough data. */
    uint32_t FAIL:1;                    /**< bit:      8  This bit is set to '1' by an explicit UNSUCCESSFUL COMPLETION response from the eSPI Master, which also terminates\n      the transaction sequence. This may occur if an invalid or illegal section of Flash memory is accessed, and only at Runtime (post-boot).\n      This bit is cleared by writing '1'. (R/WC)\n      1=The eSPI Master indicated unsuccessful completion.\n      0=The eSPI Master indicated successful completion. */
    uint32_t START_OVERFLOW:1;          /**< bit:      9  This bit is set if a command (initiated by setting the Start bit) has been ignored because the Busy bit was already on.\n      The transfer in progress is also brought to the Done state at the next opportunity allowed by the eSPI protocol, as if the Abort bit\n      had been set by the firmware, so that this bit will be present at a Done interrupt. This bit is cleared by writing '1'. (R/WC)\n      This flag represents a serious mis-communication between the firmware and hardware, and should be handled cautiously as a\n      special case by firmware.\n      1=Start Overflow. Firmware has attempted to trigger a transaction sequence before allowing the previous sequence to finish and\n      without using the Abort bit to terminate it first\n      0=No Start Overflow detected. */
    uint32_t :1;                        /**< bit:     10  Reserved                                      */
    uint32_t BAD_REQUEST:1;             /**< bit:     11  This bit is set to '1' when a firmware Flash Access request is invalid. For example, this bit is set for a request\n      to Read or Write 0 bytes. This bit is cleared by writing '1'. (R/WC) */
    uint32_t :20;                       /**< bit: 12..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_IO_FLASH_CH_STATUS_bits_t;
#define ESPI_IO_FLASH_CH_STATUS_RESETVALUE  (0x00U)                                       /**<  (ESPI_IO_FLASH_CH_STATUS) Flash Access Channel Status Register  Reset Value */

#define ESPI_IO_FLASH_CH_STATUS_CHANNEL_ENABLE_STATUS_Pos (0)                                            /**< (ESPI_IO_FLASH_CH_STATUS) This bit is a Read-only image of the bit Flash Access Channel Enable in the eSPI Configuration space. Rising or\n      falling edges of this bit will set the CHANNEL_ENABLE_CHANGE_STATUS bit to 1, and may be used to trigger interrupts. A falling edge\n      on this bit, while Busy==1, will also clear the Busy bit and set the DONE bit, with DISABLED_BY_MASTER status.\n      1=Flash Access Channel Enable bit = 1. 0=Flash Access Channel Enable bit = 0. Position */
#define ESPI_IO_FLASH_CH_STATUS_CHANNEL_ENABLE_STATUS_Msk (0x1U << ESPI_IO_FLASH_CH_STATUS_CHANNEL_ENABLE_STATUS_Pos)  /**< (ESPI_IO_FLASH_CH_STATUS) This bit is a Read-only image of the bit Flash Access Channel Enable in the eSPI Configuration space. Rising or\n      falling edges of this bit will set the CHANNEL_ENABLE_CHANGE_STATUS bit to 1, and may be used to trigger interrupts. A falling edge\n      on this bit, while Busy==1, will also clear the Busy bit and set the DONE bit, with DISABLED_BY_MASTER status.\n      1=Flash Access Channel Enable bit = 1. 0=Flash Access Channel Enable bit = 0. Mask */
#define ESPI_IO_FLASH_CH_STATUS_CHANNEL_ENABLE_CHANGE_STATUS_Pos (1)                                            /**< (ESPI_IO_FLASH_CH_STATUS) 0=Flash Access Enable bit in eSPI Configuration space has not been changed since this bit was last cleared.\n      1=Flash Access Enable bit in eSPI Configuration space has been changed since this bit was last cleared.\n      The current state of the Flash Access Enable bit can be seen as the read-only bit CHANNEL_ENABLE_STATUS in this register.\n      This bit is cleared by writing '1'. (R/WC) Position */
#define ESPI_IO_FLASH_CH_STATUS_CHANNEL_ENABLE_CHANGE_STATUS_Msk (0x1U << ESPI_IO_FLASH_CH_STATUS_CHANNEL_ENABLE_CHANGE_STATUS_Pos)  /**< (ESPI_IO_FLASH_CH_STATUS) 0=Flash Access Enable bit in eSPI Configuration space has not been changed since this bit was last cleared.\n      1=Flash Access Enable bit in eSPI Configuration space has been changed since this bit was last cleared.\n      The current state of the Flash Access Enable bit can be seen as the read-only bit CHANNEL_ENABLE_STATUS in this register.\n      This bit is cleared by writing '1'. (R/WC) Mask */
#define ESPI_IO_FLASH_CH_STATUS_DONE_Pos      (2)                                            /**< (ESPI_IO_FLASH_CH_STATUS) 1=Channel is done=Busy bit has been cleared since this bit was last cleared. It is cleared by writing '1'. (R/WC)\n      0=Channel is not done=Busy bit has not been cleared since this bit was last cleared. Position */
#define ESPI_IO_FLASH_CH_STATUS_DONE_Msk      (0x1U << ESPI_IO_FLASH_CH_STATUS_DONE_Pos)     /**< (ESPI_IO_FLASH_CH_STATUS) 1=Channel is done=Busy bit has been cleared since this bit was last cleared. It is cleared by writing '1'. (R/WC)\n      0=Channel is not done=Busy bit has not been cleared since this bit was last cleared. Mask */
#define ESPI_IO_FLASH_CH_STATUS_DISABLED_BY_MASTER_Pos (3)                                            /**< (ESPI_IO_FLASH_CH_STATUS) This bit is set to '1' if the Flash Channel is disabled by the Master while the Busy bit is '1'. It is cleared by writing '1'. (R/WC)      1=The command finished because the Enable bit became 0. 0=The command finished without a change in the Enable bit. Position */
#define ESPI_IO_FLASH_CH_STATUS_DISABLED_BY_MASTER_Msk (0x1U << ESPI_IO_FLASH_CH_STATUS_DISABLED_BY_MASTER_Pos)  /**< (ESPI_IO_FLASH_CH_STATUS) This bit is set to '1' if the Flash Channel is disabled by the Master while the Busy bit is '1'. It is cleared by writing '1'. (R/WC)      1=The command finished because the Enable bit became 0. 0=The command finished without a change in the Enable bit. Mask */
#define ESPI_IO_FLASH_CH_STATUS_INTERNAL_BUS_ERROR_Pos (4)                                            /**< (ESPI_IO_FLASH_CH_STATUS) This bit is set to '1' if the internal bus master associated with the Flash Access Channel encounters a Bus Fault condition.\n      It is cleared by writing '1'. (R/WC)\n      1=Bus Error detected. 0=The command finished without a Bus Error. Position */
#define ESPI_IO_FLASH_CH_STATUS_INTERNAL_BUS_ERROR_Msk (0x1U << ESPI_IO_FLASH_CH_STATUS_INTERNAL_BUS_ERROR_Pos)  /**< (ESPI_IO_FLASH_CH_STATUS) This bit is set to '1' if the internal bus master associated with the Flash Access Channel encounters a Bus Fault condition.\n      It is cleared by writing '1'. (R/WC)\n      1=Bus Error detected. 0=The command finished without a Bus Error. Mask */
#define ESPI_IO_FLASH_CH_STATUS_ABORTED_BY_SLAVE_Pos (5)                                            /**< (ESPI_IO_FLASH_CH_STATUS) This bit is set to '1' if the Abort bit is set to '1' by firmware while the Busy bit is '1', thereby clearing Busy status.\n      It is cleared by writing '1'. (R/WC)\n      1=The command finished because of the Abort bit. 0=The command finished without an Abort bit activation. Position */
#define ESPI_IO_FLASH_CH_STATUS_ABORTED_BY_SLAVE_Msk (0x1U << ESPI_IO_FLASH_CH_STATUS_ABORTED_BY_SLAVE_Pos)  /**< (ESPI_IO_FLASH_CH_STATUS) This bit is set to '1' if the Abort bit is set to '1' by firmware while the Busy bit is '1', thereby clearing Busy status.\n      It is cleared by writing '1'. (R/WC)\n      1=The command finished because of the Abort bit. 0=The command finished without an Abort bit activation. Mask */
#define ESPI_IO_FLASH_CH_STATUS_DATA_OVERRUN_Pos (6)                                            /**< (ESPI_IO_FLASH_CH_STATUS) This bit is set to '1' by a SUCCESSFUL COMPLETION response by the eSPI Master to a Read sequence, but either without\n      indicating Final Completion when the requested byte count is reached or with too many bytes provided while indicating Final Completion.\n      It is cleared by writing '1'. (R/WC)\n      1=The eSPI Master finished with too much data. 0=The eSPI Master finished without too much data. Position */
#define ESPI_IO_FLASH_CH_STATUS_DATA_OVERRUN_Msk (0x1U << ESPI_IO_FLASH_CH_STATUS_DATA_OVERRUN_Pos)  /**< (ESPI_IO_FLASH_CH_STATUS) This bit is set to '1' by a SUCCESSFUL COMPLETION response by the eSPI Master to a Read sequence, but either without\n      indicating Final Completion when the requested byte count is reached or with too many bytes provided while indicating Final Completion.\n      It is cleared by writing '1'. (R/WC)\n      1=The eSPI Master finished with too much data. 0=The eSPI Master finished without too much data. Mask */
#define ESPI_IO_FLASH_CH_STATUS_INCOMPLETE_Pos (7)                                            /**< (ESPI_IO_FLASH_CH_STATUS) This bit is set to '1' by a SUCCESSFUL COMPLETION Read response from the eSPI Master, indicating a Final Completion, but\n      with too few bytes provided for the Transaction step that was issued by the eSPI Slave. It is cleared by writing '1'.\n      This bit is cleared by writing '1'. (R/WC)\n      1=The eSPI Master finished with too little data. 0=The eSPI Master finished with at least enough data. Position */
#define ESPI_IO_FLASH_CH_STATUS_INCOMPLETE_Msk (0x1U << ESPI_IO_FLASH_CH_STATUS_INCOMPLETE_Pos)  /**< (ESPI_IO_FLASH_CH_STATUS) This bit is set to '1' by a SUCCESSFUL COMPLETION Read response from the eSPI Master, indicating a Final Completion, but\n      with too few bytes provided for the Transaction step that was issued by the eSPI Slave. It is cleared by writing '1'.\n      This bit is cleared by writing '1'. (R/WC)\n      1=The eSPI Master finished with too little data. 0=The eSPI Master finished with at least enough data. Mask */
#define ESPI_IO_FLASH_CH_STATUS_FAIL_Pos      (8)                                            /**< (ESPI_IO_FLASH_CH_STATUS) This bit is set to '1' by an explicit UNSUCCESSFUL COMPLETION response from the eSPI Master, which also terminates\n      the transaction sequence. This may occur if an invalid or illegal section of Flash memory is accessed, and only at Runtime (post-boot).\n      This bit is cleared by writing '1'. (R/WC)\n      1=The eSPI Master indicated unsuccessful completion.\n      0=The eSPI Master indicated successful completion. Position */
#define ESPI_IO_FLASH_CH_STATUS_FAIL_Msk      (0x1U << ESPI_IO_FLASH_CH_STATUS_FAIL_Pos)     /**< (ESPI_IO_FLASH_CH_STATUS) This bit is set to '1' by an explicit UNSUCCESSFUL COMPLETION response from the eSPI Master, which also terminates\n      the transaction sequence. This may occur if an invalid or illegal section of Flash memory is accessed, and only at Runtime (post-boot).\n      This bit is cleared by writing '1'. (R/WC)\n      1=The eSPI Master indicated unsuccessful completion.\n      0=The eSPI Master indicated successful completion. Mask */
#define ESPI_IO_FLASH_CH_STATUS_START_OVERFLOW_Pos (9)                                            /**< (ESPI_IO_FLASH_CH_STATUS) This bit is set if a command (initiated by setting the Start bit) has been ignored because the Busy bit was already on.\n      The transfer in progress is also brought to the Done state at the next opportunity allowed by the eSPI protocol, as if the Abort bit\n      had been set by the firmware, so that this bit will be present at a Done interrupt. This bit is cleared by writing '1'. (R/WC)\n      This flag represents a serious mis-communication between the firmware and hardware, and should be handled cautiously as a\n      special case by firmware.\n      1=Start Overflow. Firmware has attempted to trigger a transaction sequence before allowing the previous sequence to finish and\n      without using the Abort bit to terminate it first\n      0=No Start Overflow detected. Position */
#define ESPI_IO_FLASH_CH_STATUS_START_OVERFLOW_Msk (0x1U << ESPI_IO_FLASH_CH_STATUS_START_OVERFLOW_Pos)  /**< (ESPI_IO_FLASH_CH_STATUS) This bit is set if a command (initiated by setting the Start bit) has been ignored because the Busy bit was already on.\n      The transfer in progress is also brought to the Done state at the next opportunity allowed by the eSPI protocol, as if the Abort bit\n      had been set by the firmware, so that this bit will be present at a Done interrupt. This bit is cleared by writing '1'. (R/WC)\n      This flag represents a serious mis-communication between the firmware and hardware, and should be handled cautiously as a\n      special case by firmware.\n      1=Start Overflow. Firmware has attempted to trigger a transaction sequence before allowing the previous sequence to finish and\n      without using the Abort bit to terminate it first\n      0=No Start Overflow detected. Mask */
#define ESPI_IO_FLASH_CH_STATUS_BAD_REQUEST_Pos (11)                                           /**< (ESPI_IO_FLASH_CH_STATUS) This bit is set to '1' when a firmware Flash Access request is invalid. For example, this bit is set for a request\n      to Read or Write 0 bytes. This bit is cleared by writing '1'. (R/WC) Position */
#define ESPI_IO_FLASH_CH_STATUS_BAD_REQUEST_Msk (0x1U << ESPI_IO_FLASH_CH_STATUS_BAD_REQUEST_Pos)  /**< (ESPI_IO_FLASH_CH_STATUS) This bit is set to '1' when a firmware Flash Access request is invalid. For example, this bit is set for a request\n      to Read or Write 0 bytes. This bit is cleared by writing '1'. (R/WC) Mask */
#define ESPI_IO_FLASH_CH_STATUS_Msk           (0x00000BFFUL)                                 /**< (ESPI_IO_FLASH_CH_STATUS) Register Mask  */

/* -------- ESPI_IO_VWIRE_STATUS : (ESPI_IO Offset: 0x2b0) (R/ 8) Virtual Wire Status Register -------- */

typedef union
{
  struct
  {
    uint8_t  CHANNEL_ENABLE_STATUS:1;   /**< bit:      0  This bit is a Read-only image of the bit Virtual Wire Channel Enable in the eSPI Configuration space.\n      1=Virtual Wire Channel Enable bit = 1; 0=Virtual Wire Channel Enable bit = 0. */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __ESPI_IO_VWIRE_STATUS_bits_t;
#define ESPI_IO_VWIRE_STATUS_RESETVALUE     (0x00U)                                       /**<  (ESPI_IO_VWIRE_STATUS) Virtual Wire Status Register  Reset Value */

#define ESPI_IO_VWIRE_STATUS_CHANNEL_ENABLE_STATUS_Pos (0)                                            /**< (ESPI_IO_VWIRE_STATUS) This bit is a Read-only image of the bit Virtual Wire Channel Enable in the eSPI Configuration space.\n      1=Virtual Wire Channel Enable bit = 1; 0=Virtual Wire Channel Enable bit = 0. Position */
#define ESPI_IO_VWIRE_STATUS_CHANNEL_ENABLE_STATUS_Msk (0x1U << ESPI_IO_VWIRE_STATUS_CHANNEL_ENABLE_STATUS_Pos)  /**< (ESPI_IO_VWIRE_STATUS) This bit is a Read-only image of the bit Virtual Wire Channel Enable in the eSPI Configuration space.\n      1=Virtual Wire Channel Enable bit = 1; 0=Virtual Wire Channel Enable bit = 0. Mask */
#define ESPI_IO_VWIRE_STATUS_Msk              (0x00000001UL)                                 /**< (ESPI_IO_VWIRE_STATUS) Register Mask  */

/* -------- ESPI_IO_ESPI_CAPABILITIES_ID : (ESPI_IO Offset: 0x2e0) (R/W 8) eSPI Capabilities ID Register -------- */

typedef union
{
  struct
  {
    uint8_t  ESPI_DEVICE_ID:8;          /**< bit:   0..7  The default value should not be changed.      */
  };
  uint8_t  w;
} __ESPI_IO_ESPI_CAPABILITIES_ID_bits_t;
#define ESPI_IO_ESPI_CAPABILITIES_ID_RESETVALUE (0x01U)                                       /**<  (ESPI_IO_ESPI_CAPABILITIES_ID) eSPI Capabilities ID Register  Reset Value */

#define ESPI_IO_ESPI_CAPABILITIES_ID_ESPI_DEVICE_ID_Pos (0)                                            /**< (ESPI_IO_ESPI_CAPABILITIES_ID) The default value should not be changed. Position */
#define ESPI_IO_ESPI_CAPABILITIES_ID_ESPI_DEVICE_ID_Msk (0xFFU << ESPI_IO_ESPI_CAPABILITIES_ID_ESPI_DEVICE_ID_Pos)  /**< (ESPI_IO_ESPI_CAPABILITIES_ID) The default value should not be changed. Mask */
#define ESPI_IO_ESPI_CAPABILITIES_ID_ESPI_DEVICE_ID(value) (ESPI_IO_ESPI_CAPABILITIES_ID_ESPI_DEVICE_ID_Msk & ((value) << ESPI_IO_ESPI_CAPABILITIES_ID_ESPI_DEVICE_ID_Pos))
#define ESPI_IO_ESPI_CAPABILITIES_ID_Msk      (0x000000FFUL)                                 /**< (ESPI_IO_ESPI_CAPABILITIES_ID) Register Mask  */

/* -------- ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0 : (ESPI_IO Offset: 0x2e1) (R/W 8) eSPI Capabilities Global Capabilities 0 Register -------- */

typedef union
{
  struct
  {
    uint8_t  PERIPHERAL_CHANNEL_SUPPORTED:1;  /**< bit:      0  1=Peripheral Channel is supported by the slave; 0=Peripheral Channel not supported by the slave. */
    uint8_t  VIRTUAL_WIRE_CHANNEL_SUPPORTED:1;  /**< bit:      1  1=Virtual Wire Channel is supported by the slave; 0=Virtual Wire Channel Channel not supported by the slave. */
    uint8_t  OOB_MESSAGE_CHANNEL_SUPPORTED:1;  /**< bit:      2  1=OOB Message Channel is supported by the slave; 0=OOB Message Channel not supported by the slave. */
    uint8_t  FLASH_ACCESS_CHANNEL_SUPPORTED:1;  /**< bit:      3  1=Flash Access Channel is supported by the slave; 0=Flash Access Channel not supported by the slave. */
    uint8_t  :4;                        /**< bit:   4..7  Reserved                                      */
  };
  uint8_t  w;
} __ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0_bits_t;
#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0_RESETVALUE (0x0FU)                                       /**<  (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0) eSPI Capabilities Global Capabilities 0 Register  Reset Value */

#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0_PERIPHERAL_CHANNEL_SUPPORTED_Pos (0)                                            /**< (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0) 1=Peripheral Channel is supported by the slave; 0=Peripheral Channel not supported by the slave. Position */
#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0_PERIPHERAL_CHANNEL_SUPPORTED_Msk (0x1U << ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0_PERIPHERAL_CHANNEL_SUPPORTED_Pos)  /**< (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0) 1=Peripheral Channel is supported by the slave; 0=Peripheral Channel not supported by the slave. Mask */
#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0_VIRTUAL_WIRE_CHANNEL_SUPPORTED_Pos (1)                                            /**< (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0) 1=Virtual Wire Channel is supported by the slave; 0=Virtual Wire Channel Channel not supported by the slave. Position */
#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0_VIRTUAL_WIRE_CHANNEL_SUPPORTED_Msk (0x1U << ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0_VIRTUAL_WIRE_CHANNEL_SUPPORTED_Pos)  /**< (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0) 1=Virtual Wire Channel is supported by the slave; 0=Virtual Wire Channel Channel not supported by the slave. Mask */
#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0_OOB_MESSAGE_CHANNEL_SUPPORTED_Pos (2)                                            /**< (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0) 1=OOB Message Channel is supported by the slave; 0=OOB Message Channel not supported by the slave. Position */
#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0_OOB_MESSAGE_CHANNEL_SUPPORTED_Msk (0x1U << ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0_OOB_MESSAGE_CHANNEL_SUPPORTED_Pos)  /**< (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0) 1=OOB Message Channel is supported by the slave; 0=OOB Message Channel not supported by the slave. Mask */
#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0_FLASH_ACCESS_CHANNEL_SUPPORTED_Pos (3)                                            /**< (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0) 1=Flash Access Channel is supported by the slave; 0=Flash Access Channel not supported by the slave. Position */
#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0_FLASH_ACCESS_CHANNEL_SUPPORTED_Msk (0x1U << ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0_FLASH_ACCESS_CHANNEL_SUPPORTED_Pos)  /**< (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0) 1=Flash Access Channel is supported by the slave; 0=Flash Access Channel not supported by the slave. Mask */
#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0_Msk (0x0000000FUL)                                 /**< (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0) Register Mask  */

/* -------- ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1 : (ESPI_IO Offset: 0x2e2) (R/W 8) eSPI Capabilities Global Capabilities 1 Register -------- */

typedef union
{
  struct
  {
    uint8_t  MAXIMUM_FREQUENCY_SUPPORTED:3;  /**< bit:   0..2  This field identifies the maximum frequency of operation supported by the slave. It corresponds to the field\n      Maximum Frequency Supported, bits [18:16] of the eSPI General Capabilities and Configurations register.\n      111b - 101b=Reserved\n      100b=66 MHz\n      011b=50 MHz\n      010b=33 MHz\n      001b=25 MHz\n      000b=20 MHz (default). */
    uint8_t  ALERT_MODE:1;              /**< bit:      3  This field is a read-only copy of the ALERT Mode field, bit 28 of the Config Offset 8h=General Capabilities\n      and Configurations Register. */
    uint8_t  IO_MODE_SUPPORTED:2;       /**< bit:   4..5  This field identifies the I/O modes supported by the slave. It corresponds to the field I/O Mode Support,\n      bits [25:24] of the eSPI General Capabilities and Configurations register.\n      11b=Single, Dual and Quad I/O\n      10b=Single and Quad I/O\n      01b=Single and Dual I/O\n      00b=Single I/O (default). */
    uint8_t  :2;                        /**< bit:   6..7  Reserved                                      */
  };
  uint8_t  w;
} __ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1_bits_t;
#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1_RESETVALUE (0x0FU)                                       /**<  (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1) eSPI Capabilities Global Capabilities 1 Register  Reset Value */

#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1_MAXIMUM_FREQUENCY_SUPPORTED_Pos (0)                                            /**< (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1) This field identifies the maximum frequency of operation supported by the slave. It corresponds to the field\n      Maximum Frequency Supported, bits [18:16] of the eSPI General Capabilities and Configurations register.\n      111b - 101b=Reserved\n      100b=66 MHz\n      011b=50 MHz\n      010b=33 MHz\n      001b=25 MHz\n      000b=20 MHz (default). Position */
#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1_MAXIMUM_FREQUENCY_SUPPORTED_Msk (0x7U << ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1_MAXIMUM_FREQUENCY_SUPPORTED_Pos)  /**< (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1) This field identifies the maximum frequency of operation supported by the slave. It corresponds to the field\n      Maximum Frequency Supported, bits [18:16] of the eSPI General Capabilities and Configurations register.\n      111b - 101b=Reserved\n      100b=66 MHz\n      011b=50 MHz\n      010b=33 MHz\n      001b=25 MHz\n      000b=20 MHz (default). Mask */
#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1_MAXIMUM_FREQUENCY_SUPPORTED(value) (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1_MAXIMUM_FREQUENCY_SUPPORTED_Msk & ((value) << ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1_MAXIMUM_FREQUENCY_SUPPORTED_Pos))
#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1_ALERT_MODE_Pos (3)                                            /**< (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1) This field is a read-only copy of the ALERT Mode field, bit 28 of the Config Offset 8h=General Capabilities\n      and Configurations Register. Position */
#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1_ALERT_MODE_Msk (0x1U << ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1_ALERT_MODE_Pos)  /**< (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1) This field is a read-only copy of the ALERT Mode field, bit 28 of the Config Offset 8h=General Capabilities\n      and Configurations Register. Mask */
#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1_IO_MODE_SUPPORTED_Pos (4)                                            /**< (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1) This field identifies the I/O modes supported by the slave. It corresponds to the field I/O Mode Support,\n      bits [25:24] of the eSPI General Capabilities and Configurations register.\n      11b=Single, Dual and Quad I/O\n      10b=Single and Quad I/O\n      01b=Single and Dual I/O\n      00b=Single I/O (default). Position */
#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1_IO_MODE_SUPPORTED_Msk (0x3U << ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1_IO_MODE_SUPPORTED_Pos)  /**< (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1) This field identifies the I/O modes supported by the slave. It corresponds to the field I/O Mode Support,\n      bits [25:24] of the eSPI General Capabilities and Configurations register.\n      11b=Single, Dual and Quad I/O\n      10b=Single and Quad I/O\n      01b=Single and Dual I/O\n      00b=Single I/O (default). Mask */
#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1_IO_MODE_SUPPORTED(value) (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1_IO_MODE_SUPPORTED_Msk & ((value) << ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1_IO_MODE_SUPPORTED_Pos))
#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1_Msk (0x0000003FUL)                                 /**< (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1) Register Mask  */

/* -------- ESPI_IO_ESPI_PC_CAPABILITIES : (ESPI_IO Offset: 0x2e3) (R/W 8) eSPI Peripheral Channel Capabilities Register -------- */

typedef union
{
  struct
  {
    uint8_t  PC_MAXIMUM_PAYLOAD_SIZE_SUPPORTED:3;  /**< bit:   0..2  This field identifies the maximum payload size supported by the slave. It corresponds to the field\n      Peripheral Channel Maximum Payload Size Supported, bits [6:4] of the Peripheral Channel Capabilities and Configurations Register.\n      111b - 100b=Reserved\n      011b=256 bytes address aligned max payload size\n      010b=128 bytes address aligned max payload size\n      001b=64 bytes address aligned max payload size\n      000b=Reserved. */
    uint8_t  :5;                        /**< bit:   3..7  Reserved                                      */
  };
  uint8_t  w;
} __ESPI_IO_ESPI_PC_CAPABILITIES_bits_t;
#define ESPI_IO_ESPI_PC_CAPABILITIES_RESETVALUE (0x01U)                                       /**<  (ESPI_IO_ESPI_PC_CAPABILITIES) eSPI Peripheral Channel Capabilities Register  Reset Value */

#define ESPI_IO_ESPI_PC_CAPABILITIES_PC_MAXIMUM_PAYLOAD_SIZE_SUPPORTED_Pos (0)                                            /**< (ESPI_IO_ESPI_PC_CAPABILITIES) This field identifies the maximum payload size supported by the slave. It corresponds to the field\n      Peripheral Channel Maximum Payload Size Supported, bits [6:4] of the Peripheral Channel Capabilities and Configurations Register.\n      111b - 100b=Reserved\n      011b=256 bytes address aligned max payload size\n      010b=128 bytes address aligned max payload size\n      001b=64 bytes address aligned max payload size\n      000b=Reserved. Position */
#define ESPI_IO_ESPI_PC_CAPABILITIES_PC_MAXIMUM_PAYLOAD_SIZE_SUPPORTED_Msk (0x7U << ESPI_IO_ESPI_PC_CAPABILITIES_PC_MAXIMUM_PAYLOAD_SIZE_SUPPORTED_Pos)  /**< (ESPI_IO_ESPI_PC_CAPABILITIES) This field identifies the maximum payload size supported by the slave. It corresponds to the field\n      Peripheral Channel Maximum Payload Size Supported, bits [6:4] of the Peripheral Channel Capabilities and Configurations Register.\n      111b - 100b=Reserved\n      011b=256 bytes address aligned max payload size\n      010b=128 bytes address aligned max payload size\n      001b=64 bytes address aligned max payload size\n      000b=Reserved. Mask */
#define ESPI_IO_ESPI_PC_CAPABILITIES_PC_MAXIMUM_PAYLOAD_SIZE_SUPPORTED(value) (ESPI_IO_ESPI_PC_CAPABILITIES_PC_MAXIMUM_PAYLOAD_SIZE_SUPPORTED_Msk & ((value) << ESPI_IO_ESPI_PC_CAPABILITIES_PC_MAXIMUM_PAYLOAD_SIZE_SUPPORTED_Pos))
#define ESPI_IO_ESPI_PC_CAPABILITIES_Msk      (0x00000007UL)                                 /**< (ESPI_IO_ESPI_PC_CAPABILITIES) Register Mask  */

/* -------- ESPI_IO_ESPI_VWIRE_CAPABILITIES : (ESPI_IO Offset: 0x2e4) (R/W 8) eSPI Virtual Wire Channel Capabilities Register -------- */

typedef union
{
  struct
  {
    uint8_t  MAXIMUM_VIRTUAL_WIRE_COUNT_SUPPORTED:6;  /**< bit:   0..5  This field identifies the maximum Virtual Wire Count supported by the slave. It corresponds to the field\n      Maximum Virtual Wire Count Supported, bits [13:8] of the Virtual Wire Channel Capabilities and Configurations Register.\n      This field must be set to a number greater than or equal to 7h. */
    uint8_t  :2;                        /**< bit:   6..7  Reserved                                      */
  };
  uint8_t  w;
} __ESPI_IO_ESPI_VWIRE_CAPABILITIES_bits_t;
#define ESPI_IO_ESPI_VWIRE_CAPABILITIES_RESETVALUE (0x3FU)                                       /**<  (ESPI_IO_ESPI_VWIRE_CAPABILITIES) eSPI Virtual Wire Channel Capabilities Register  Reset Value */

#define ESPI_IO_ESPI_VWIRE_CAPABILITIES_MAXIMUM_VIRTUAL_WIRE_COUNT_SUPPORTED_Pos (0)                                            /**< (ESPI_IO_ESPI_VWIRE_CAPABILITIES) This field identifies the maximum Virtual Wire Count supported by the slave. It corresponds to the field\n      Maximum Virtual Wire Count Supported, bits [13:8] of the Virtual Wire Channel Capabilities and Configurations Register.\n      This field must be set to a number greater than or equal to 7h. Position */
#define ESPI_IO_ESPI_VWIRE_CAPABILITIES_MAXIMUM_VIRTUAL_WIRE_COUNT_SUPPORTED_Msk (0x3FU << ESPI_IO_ESPI_VWIRE_CAPABILITIES_MAXIMUM_VIRTUAL_WIRE_COUNT_SUPPORTED_Pos)  /**< (ESPI_IO_ESPI_VWIRE_CAPABILITIES) This field identifies the maximum Virtual Wire Count supported by the slave. It corresponds to the field\n      Maximum Virtual Wire Count Supported, bits [13:8] of the Virtual Wire Channel Capabilities and Configurations Register.\n      This field must be set to a number greater than or equal to 7h. Mask */
#define ESPI_IO_ESPI_VWIRE_CAPABILITIES_MAXIMUM_VIRTUAL_WIRE_COUNT_SUPPORTED(value) (ESPI_IO_ESPI_VWIRE_CAPABILITIES_MAXIMUM_VIRTUAL_WIRE_COUNT_SUPPORTED_Msk & ((value) << ESPI_IO_ESPI_VWIRE_CAPABILITIES_MAXIMUM_VIRTUAL_WIRE_COUNT_SUPPORTED_Pos))
#define ESPI_IO_ESPI_VWIRE_CAPABILITIES_Msk   (0x0000003FUL)                                 /**< (ESPI_IO_ESPI_VWIRE_CAPABILITIES) Register Mask  */

/* -------- ESPI_IO_ESPI_OOB_CAPABILITIES : (ESPI_IO Offset: 0x2e5) (R/W 8) eSPI OOB Channel Capabilities Register -------- */

typedef union
{
  struct
  {
    uint8_t  OOB_MAXIMUM_PAYLOAD_SIZE_SUPPORTED:3;  /**< bit:   0..2  This field identifies the maximum payload size supported by the slave. It corresponds to the field OOB Message\n      Channel Maximum Payload Size Supported, bits [6:4] of the OOB Channel Capabilities and Configurations Register.\n      111b - 100b=Reserved\n      011b=265 bytes address max payload size\n      010b=137 bytes address max payload size\n      001b=73 bytes address max payload size\n      000b=Reserved. */
    uint8_t  :5;                        /**< bit:   3..7  Reserved                                      */
  };
  uint8_t  w;
} __ESPI_IO_ESPI_OOB_CAPABILITIES_bits_t;
#define ESPI_IO_ESPI_OOB_CAPABILITIES_RESETVALUE (0x01U)                                       /**<  (ESPI_IO_ESPI_OOB_CAPABILITIES) eSPI OOB Channel Capabilities Register  Reset Value */

#define ESPI_IO_ESPI_OOB_CAPABILITIES_OOB_MAXIMUM_PAYLOAD_SIZE_SUPPORTED_Pos (0)                                            /**< (ESPI_IO_ESPI_OOB_CAPABILITIES) This field identifies the maximum payload size supported by the slave. It corresponds to the field OOB Message\n      Channel Maximum Payload Size Supported, bits [6:4] of the OOB Channel Capabilities and Configurations Register.\n      111b - 100b=Reserved\n      011b=265 bytes address max payload size\n      010b=137 bytes address max payload size\n      001b=73 bytes address max payload size\n      000b=Reserved. Position */
#define ESPI_IO_ESPI_OOB_CAPABILITIES_OOB_MAXIMUM_PAYLOAD_SIZE_SUPPORTED_Msk (0x7U << ESPI_IO_ESPI_OOB_CAPABILITIES_OOB_MAXIMUM_PAYLOAD_SIZE_SUPPORTED_Pos)  /**< (ESPI_IO_ESPI_OOB_CAPABILITIES) This field identifies the maximum payload size supported by the slave. It corresponds to the field OOB Message\n      Channel Maximum Payload Size Supported, bits [6:4] of the OOB Channel Capabilities and Configurations Register.\n      111b - 100b=Reserved\n      011b=265 bytes address max payload size\n      010b=137 bytes address max payload size\n      001b=73 bytes address max payload size\n      000b=Reserved. Mask */
#define ESPI_IO_ESPI_OOB_CAPABILITIES_OOB_MAXIMUM_PAYLOAD_SIZE_SUPPORTED(value) (ESPI_IO_ESPI_OOB_CAPABILITIES_OOB_MAXIMUM_PAYLOAD_SIZE_SUPPORTED_Msk & ((value) << ESPI_IO_ESPI_OOB_CAPABILITIES_OOB_MAXIMUM_PAYLOAD_SIZE_SUPPORTED_Pos))
#define ESPI_IO_ESPI_OOB_CAPABILITIES_Msk     (0x00000007UL)                                 /**< (ESPI_IO_ESPI_OOB_CAPABILITIES) Register Mask  */

/* -------- ESPI_IO_ESPI_FLASH_CAPABILITIES : (ESPI_IO Offset: 0x2e6) (R/W 8) eSPI Flash Channel Capabilities Register -------- */

typedef union
{
  struct
  {
    uint8_t  FLASH_MAXIMUM_PAYLOAD_SIZE_SUPPORTED:3;  /**< bit:   0..2  This field identifies the maximum payload size supported by the slave. It corresponds to the field Flash Access\n      Channel Maximum Payload Size Supported, bits [7:0] of the Flash Channel Capabilities and Configurations Register.\n      111b - 100b=Reserved\n      011b=256 bytes address aligned max payload size\n      010b=128 bytes address aligned max payload size\n      001b=64 bytes address aligned max payload size\n      000b=Reserved. */
    uint8_t  :1;                        /**< bit:      3  Reserved                                      */
    uint8_t  SHARING_MODE_SUPPORTED:1;  /**< bit:      4  This field identifies the flash sharing scheme supported by the slave. It corresponds to the field Flash Sharing Mode,\n      bit [11] of the Flash Channel Capabilities and Configurations Register.\n      1=Slave attached flash sharing\n      0=Master attached flash sharing */
    uint8_t  :3;                        /**< bit:   5..7  Reserved                                      */
  };
  uint8_t  w;
} __ESPI_IO_ESPI_FLASH_CAPABILITIES_bits_t;
#define ESPI_IO_ESPI_FLASH_CAPABILITIES_RESETVALUE (0x01U)                                       /**<  (ESPI_IO_ESPI_FLASH_CAPABILITIES) eSPI Flash Channel Capabilities Register  Reset Value */

#define ESPI_IO_ESPI_FLASH_CAPABILITIES_FLASH_MAXIMUM_PAYLOAD_SIZE_SUPPORTED_Pos (0)                                            /**< (ESPI_IO_ESPI_FLASH_CAPABILITIES) This field identifies the maximum payload size supported by the slave. It corresponds to the field Flash Access\n      Channel Maximum Payload Size Supported, bits [7:0] of the Flash Channel Capabilities and Configurations Register.\n      111b - 100b=Reserved\n      011b=256 bytes address aligned max payload size\n      010b=128 bytes address aligned max payload size\n      001b=64 bytes address aligned max payload size\n      000b=Reserved. Position */
#define ESPI_IO_ESPI_FLASH_CAPABILITIES_FLASH_MAXIMUM_PAYLOAD_SIZE_SUPPORTED_Msk (0x7U << ESPI_IO_ESPI_FLASH_CAPABILITIES_FLASH_MAXIMUM_PAYLOAD_SIZE_SUPPORTED_Pos)  /**< (ESPI_IO_ESPI_FLASH_CAPABILITIES) This field identifies the maximum payload size supported by the slave. It corresponds to the field Flash Access\n      Channel Maximum Payload Size Supported, bits [7:0] of the Flash Channel Capabilities and Configurations Register.\n      111b - 100b=Reserved\n      011b=256 bytes address aligned max payload size\n      010b=128 bytes address aligned max payload size\n      001b=64 bytes address aligned max payload size\n      000b=Reserved. Mask */
#define ESPI_IO_ESPI_FLASH_CAPABILITIES_FLASH_MAXIMUM_PAYLOAD_SIZE_SUPPORTED(value) (ESPI_IO_ESPI_FLASH_CAPABILITIES_FLASH_MAXIMUM_PAYLOAD_SIZE_SUPPORTED_Msk & ((value) << ESPI_IO_ESPI_FLASH_CAPABILITIES_FLASH_MAXIMUM_PAYLOAD_SIZE_SUPPORTED_Pos))
#define ESPI_IO_ESPI_FLASH_CAPABILITIES_SHARING_MODE_SUPPORTED_Pos (4)                                            /**< (ESPI_IO_ESPI_FLASH_CAPABILITIES) This field identifies the flash sharing scheme supported by the slave. It corresponds to the field Flash Sharing Mode,\n      bit [11] of the Flash Channel Capabilities and Configurations Register.\n      1=Slave attached flash sharing\n      0=Master attached flash sharing Position */
#define ESPI_IO_ESPI_FLASH_CAPABILITIES_SHARING_MODE_SUPPORTED_Msk (0x1U << ESPI_IO_ESPI_FLASH_CAPABILITIES_SHARING_MODE_SUPPORTED_Pos)  /**< (ESPI_IO_ESPI_FLASH_CAPABILITIES) This field identifies the flash sharing scheme supported by the slave. It corresponds to the field Flash Sharing Mode,\n      bit [11] of the Flash Channel Capabilities and Configurations Register.\n      1=Slave attached flash sharing\n      0=Master attached flash sharing Mask */
#define ESPI_IO_ESPI_FLASH_CAPABILITIES_Msk   (0x00000017UL)                                 /**< (ESPI_IO_ESPI_FLASH_CAPABILITIES) Register Mask  */

/* -------- ESPI_IO_ESPI_PERIPHERAL_READY : (ESPI_IO Offset: 0x2e7) (R/W 8) eSPI Peripheral Channel Ready Register -------- */

typedef union
{
  struct
  {
    uint8_t  PERIPHERAL_CHANNEL_READY:1;  /**< bit:      0  Firmware sets this bit to '1' to inform the Master than the Peripheral channel is ready for transactions. It corresponds to\n      the field Peripheral Channel Ready, bit 1 of the Config Offset 10h=Peripheral Channel Capabilities and Configurations Register. It is\n      forced to '0' while the Peripheral Channel Enabled bit in the Capabilities and Configurations register is 0. Once set to '1' it cannot\n      be set to '0' by firmware. It is only set to '0' by a reset, or when the Master changes the Enabled bit to '0'.\n      While this bit is '0' all Bus Master and LTR transactions initiated by the Slave are inhibited. */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __ESPI_IO_ESPI_PERIPHERAL_READY_bits_t;
#define ESPI_IO_ESPI_PERIPHERAL_READY_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_ESPI_PERIPHERAL_READY) eSPI Peripheral Channel Ready Register  Reset Value */

#define ESPI_IO_ESPI_PERIPHERAL_READY_PERIPHERAL_CHANNEL_READY_Pos (0)                                            /**< (ESPI_IO_ESPI_PERIPHERAL_READY) Firmware sets this bit to '1' to inform the Master than the Peripheral channel is ready for transactions. It corresponds to\n      the field Peripheral Channel Ready, bit 1 of the Config Offset 10h=Peripheral Channel Capabilities and Configurations Register. It is\n      forced to '0' while the Peripheral Channel Enabled bit in the Capabilities and Configurations register is 0. Once set to '1' it cannot\n      be set to '0' by firmware. It is only set to '0' by a reset, or when the Master changes the Enabled bit to '0'.\n      While this bit is '0' all Bus Master and LTR transactions initiated by the Slave are inhibited. Position */
#define ESPI_IO_ESPI_PERIPHERAL_READY_PERIPHERAL_CHANNEL_READY_Msk (0x1U << ESPI_IO_ESPI_PERIPHERAL_READY_PERIPHERAL_CHANNEL_READY_Pos)  /**< (ESPI_IO_ESPI_PERIPHERAL_READY) Firmware sets this bit to '1' to inform the Master than the Peripheral channel is ready for transactions. It corresponds to\n      the field Peripheral Channel Ready, bit 1 of the Config Offset 10h=Peripheral Channel Capabilities and Configurations Register. It is\n      forced to '0' while the Peripheral Channel Enabled bit in the Capabilities and Configurations register is 0. Once set to '1' it cannot\n      be set to '0' by firmware. It is only set to '0' by a reset, or when the Master changes the Enabled bit to '0'.\n      While this bit is '0' all Bus Master and LTR transactions initiated by the Slave are inhibited. Mask */
#define ESPI_IO_ESPI_PERIPHERAL_READY_Msk     (0x00000001UL)                                 /**< (ESPI_IO_ESPI_PERIPHERAL_READY) Register Mask  */

/* -------- ESPI_IO_ESPI_OOB_READY : (ESPI_IO Offset: 0x2e8) (R/W 8) eSPI OOB Channel Ready Register -------- */

typedef union
{
  struct
  {
    uint8_t  OOB_CHANNEL_READY:1;       /**< bit:      0  Firmware sets this bit to '1' to inform the Master that the OOB channel is ready for transactions. It corresponds to\n      the field OOB Message Channel Ready, bit 1 of Config Offset 30h=OOB ChannelCapabilities and Configurations Register. It is\n      forced to '0' while the OOB Message Channel Enabled bit in the Capabilities and Configurations register is 0. Once set to '1'\n      it cannot be set to '0' by firmware. It is only set to '0' by a reset, or when the Master changes the Enabled bit to '0'.\n      While this bit is '0' all OOB up transactions initiated by the Slave are inhibited. */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __ESPI_IO_ESPI_OOB_READY_bits_t;
#define ESPI_IO_ESPI_OOB_READY_RESETVALUE   (0x00U)                                       /**<  (ESPI_IO_ESPI_OOB_READY) eSPI OOB Channel Ready Register  Reset Value */

#define ESPI_IO_ESPI_OOB_READY_OOB_CHANNEL_READY_Pos (0)                                            /**< (ESPI_IO_ESPI_OOB_READY) Firmware sets this bit to '1' to inform the Master that the OOB channel is ready for transactions. It corresponds to\n      the field OOB Message Channel Ready, bit 1 of Config Offset 30h=OOB ChannelCapabilities and Configurations Register. It is\n      forced to '0' while the OOB Message Channel Enabled bit in the Capabilities and Configurations register is 0. Once set to '1'\n      it cannot be set to '0' by firmware. It is only set to '0' by a reset, or when the Master changes the Enabled bit to '0'.\n      While this bit is '0' all OOB up transactions initiated by the Slave are inhibited. Position */
#define ESPI_IO_ESPI_OOB_READY_OOB_CHANNEL_READY_Msk (0x1U << ESPI_IO_ESPI_OOB_READY_OOB_CHANNEL_READY_Pos)  /**< (ESPI_IO_ESPI_OOB_READY) Firmware sets this bit to '1' to inform the Master that the OOB channel is ready for transactions. It corresponds to\n      the field OOB Message Channel Ready, bit 1 of Config Offset 30h=OOB ChannelCapabilities and Configurations Register. It is\n      forced to '0' while the OOB Message Channel Enabled bit in the Capabilities and Configurations register is 0. Once set to '1'\n      it cannot be set to '0' by firmware. It is only set to '0' by a reset, or when the Master changes the Enabled bit to '0'.\n      While this bit is '0' all OOB up transactions initiated by the Slave are inhibited. Mask */
#define ESPI_IO_ESPI_OOB_READY_Msk            (0x00000001UL)                                 /**< (ESPI_IO_ESPI_OOB_READY) Register Mask  */

/* -------- ESPI_IO_ESPI_FLASH_READY : (ESPI_IO Offset: 0x2e9) (R/W 8) eSPI Flash Channel Ready Register -------- */

typedef union
{
  struct
  {
    uint8_t  FLASH_CHANNEL_READY:1;     /**< bit:      0  Firmware sets this bit to '1' to inform the Master that the Flash channel is ready for transactions. It corresponds to\n      the field Flash Channel Ready, bit 1 of Config Offset 40h=Flash Channel Capabilities and Configurations Register. It is\n      forced to '0' while the Flash Channel Enabled bit in the Capabilities and Configurations register is 0. Once set to '1'\n      it cannot be set to '0' by firmware. It is only set to '0'by a reset, or when the Master changes the Enabled bit to '0'.\n      While this bit is '0' all Flash transactions initiated by the Slave are inhibited. */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __ESPI_IO_ESPI_FLASH_READY_bits_t;
#define ESPI_IO_ESPI_FLASH_READY_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_ESPI_FLASH_READY) eSPI Flash Channel Ready Register  Reset Value */

#define ESPI_IO_ESPI_FLASH_READY_FLASH_CHANNEL_READY_Pos (0)                                            /**< (ESPI_IO_ESPI_FLASH_READY) Firmware sets this bit to '1' to inform the Master that the Flash channel is ready for transactions. It corresponds to\n      the field Flash Channel Ready, bit 1 of Config Offset 40h=Flash Channel Capabilities and Configurations Register. It is\n      forced to '0' while the Flash Channel Enabled bit in the Capabilities and Configurations register is 0. Once set to '1'\n      it cannot be set to '0' by firmware. It is only set to '0'by a reset, or when the Master changes the Enabled bit to '0'.\n      While this bit is '0' all Flash transactions initiated by the Slave are inhibited. Position */
#define ESPI_IO_ESPI_FLASH_READY_FLASH_CHANNEL_READY_Msk (0x1U << ESPI_IO_ESPI_FLASH_READY_FLASH_CHANNEL_READY_Pos)  /**< (ESPI_IO_ESPI_FLASH_READY) Firmware sets this bit to '1' to inform the Master that the Flash channel is ready for transactions. It corresponds to\n      the field Flash Channel Ready, bit 1 of Config Offset 40h=Flash Channel Capabilities and Configurations Register. It is\n      forced to '0' while the Flash Channel Enabled bit in the Capabilities and Configurations register is 0. Once set to '1'\n      it cannot be set to '0' by firmware. It is only set to '0'by a reset, or when the Master changes the Enabled bit to '0'.\n      While this bit is '0' all Flash transactions initiated by the Slave are inhibited. Mask */
#define ESPI_IO_ESPI_FLASH_READY_Msk          (0x00000001UL)                                 /**< (ESPI_IO_ESPI_FLASH_READY) Register Mask  */

/* -------- ESPI_IO_ESPI_RESET_INT_STATUS : (ESPI_IO Offset: 0x2ea) (R/W 8) eSPI Reset Interrupt Status Register -------- */

typedef union
{
  struct
  {
    uint8_t  ESPI_RESET_INTERRUPT_STATUS:1;  /**< bit:      0  This bit is set to '1' whenever the ESPI_RESET_PIN_STATE bit in this register changes state. It is cleared to\n      '0' whenever it is written with a '1'. Writes of a '0' have no effect. (R/WC) This bit is the source for the eSPI_RESET Interrupt.\n      The interrupt is asserted when both this bit and the ESPI_RESET_INTERRUPT_ENABLE bit in the eSPI Reset Interrupt Enable Register are '1'. */
    uint8_t  ESPI_RESET_PIN_STATE:1;    /**< bit:      1  This field reflects the current state of the eSPI_RESET# pin. */
    uint8_t  :6;                        /**< bit:   2..7  Reserved                                      */
  };
  uint8_t  w;
} __ESPI_IO_ESPI_RESET_INT_STATUS_bits_t;
#define ESPI_IO_ESPI_RESET_INT_STATUS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_ESPI_RESET_INT_STATUS) eSPI Reset Interrupt Status Register  Reset Value */

#define ESPI_IO_ESPI_RESET_INT_STATUS_ESPI_RESET_INTERRUPT_STATUS_Pos (0)                                            /**< (ESPI_IO_ESPI_RESET_INT_STATUS) This bit is set to '1' whenever the ESPI_RESET_PIN_STATE bit in this register changes state. It is cleared to\n      '0' whenever it is written with a '1'. Writes of a '0' have no effect. (R/WC) This bit is the source for the eSPI_RESET Interrupt.\n      The interrupt is asserted when both this bit and the ESPI_RESET_INTERRUPT_ENABLE bit in the eSPI Reset Interrupt Enable Register are '1'. Position */
#define ESPI_IO_ESPI_RESET_INT_STATUS_ESPI_RESET_INTERRUPT_STATUS_Msk (0x1U << ESPI_IO_ESPI_RESET_INT_STATUS_ESPI_RESET_INTERRUPT_STATUS_Pos)  /**< (ESPI_IO_ESPI_RESET_INT_STATUS) This bit is set to '1' whenever the ESPI_RESET_PIN_STATE bit in this register changes state. It is cleared to\n      '0' whenever it is written with a '1'. Writes of a '0' have no effect. (R/WC) This bit is the source for the eSPI_RESET Interrupt.\n      The interrupt is asserted when both this bit and the ESPI_RESET_INTERRUPT_ENABLE bit in the eSPI Reset Interrupt Enable Register are '1'. Mask */
#define ESPI_IO_ESPI_RESET_INT_STATUS_ESPI_RESET_PIN_STATE_Pos (1)                                            /**< (ESPI_IO_ESPI_RESET_INT_STATUS) This field reflects the current state of the eSPI_RESET# pin. Position */
#define ESPI_IO_ESPI_RESET_INT_STATUS_ESPI_RESET_PIN_STATE_Msk (0x1U << ESPI_IO_ESPI_RESET_INT_STATUS_ESPI_RESET_PIN_STATE_Pos)  /**< (ESPI_IO_ESPI_RESET_INT_STATUS) This field reflects the current state of the eSPI_RESET# pin. Mask */
#define ESPI_IO_ESPI_RESET_INT_STATUS_Msk     (0x00000003UL)                                 /**< (ESPI_IO_ESPI_RESET_INT_STATUS) Register Mask  */

/* -------- ESPI_IO_ESPI_RESET_INT_ENABLE : (ESPI_IO Offset: 0x2eb) (R/W 8) eSPI Reset Interrupt Enable Register -------- */

typedef union
{
  struct
  {
    uint8_t  ESPI_RESET_INTERRUPT_ENABLE:1;  /**< bit:      0  1=The RESET_ESPI Interrupt will be asserted when the ESPI_RESET_INTERRUPT_STATUS bit in the eSPI Reset Interrupt\n      Status Register register is '1'\n      0=The RESET_ESPI Interrupt will not be asserted. */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __ESPI_IO_ESPI_RESET_INT_ENABLE_bits_t;
#define ESPI_IO_ESPI_RESET_INT_ENABLE_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_ESPI_RESET_INT_ENABLE) eSPI Reset Interrupt Enable Register  Reset Value */

#define ESPI_IO_ESPI_RESET_INT_ENABLE_ESPI_RESET_INTERRUPT_ENABLE_Pos (0)                                            /**< (ESPI_IO_ESPI_RESET_INT_ENABLE) 1=The RESET_ESPI Interrupt will be asserted when the ESPI_RESET_INTERRUPT_STATUS bit in the eSPI Reset Interrupt\n      Status Register register is '1'\n      0=The RESET_ESPI Interrupt will not be asserted. Position */
#define ESPI_IO_ESPI_RESET_INT_ENABLE_ESPI_RESET_INTERRUPT_ENABLE_Msk (0x1U << ESPI_IO_ESPI_RESET_INT_ENABLE_ESPI_RESET_INTERRUPT_ENABLE_Pos)  /**< (ESPI_IO_ESPI_RESET_INT_ENABLE) 1=The RESET_ESPI Interrupt will be asserted when the ESPI_RESET_INTERRUPT_STATUS bit in the eSPI Reset Interrupt\n      Status Register register is '1'\n      0=The RESET_ESPI Interrupt will not be asserted. Mask */
#define ESPI_IO_ESPI_RESET_INT_ENABLE_Msk     (0x00000001UL)                                 /**< (ESPI_IO_ESPI_RESET_INT_ENABLE) Register Mask  */

/* -------- ESPI_IO_PLTRST_SOURCE : (ESPI_IO Offset: 0x2ec) (R/W 8) PLTRST Source Register -------- */

typedef union
{
  struct
  {
    uint8_t  PLTRST_SRC:1;              /**< bit:      0  1=The PLTRST reset signal is determined a signal external to the eSPI block. The PLTRST# virtual wire is ignored\n      0=The PLTRST reset signal is determined by the PLTRST# virtual wire. */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __ESPI_IO_PLTRST_SOURCE_bits_t;
#define ESPI_IO_PLTRST_SOURCE_RESETVALUE    (0x00U)                                       /**<  (ESPI_IO_PLTRST_SOURCE) PLTRST Source Register  Reset Value */

#define ESPI_IO_PLTRST_SOURCE_PLTRST_SRC_Pos  (0)                                            /**< (ESPI_IO_PLTRST_SOURCE) 1=The PLTRST reset signal is determined a signal external to the eSPI block. The PLTRST# virtual wire is ignored\n      0=The PLTRST reset signal is determined by the PLTRST# virtual wire. Position */
#define ESPI_IO_PLTRST_SOURCE_PLTRST_SRC_Msk  (0x1U << ESPI_IO_PLTRST_SOURCE_PLTRST_SRC_Pos)  /**< (ESPI_IO_PLTRST_SOURCE) 1=The PLTRST reset signal is determined a signal external to the eSPI block. The PLTRST# virtual wire is ignored\n      0=The PLTRST reset signal is determined by the PLTRST# virtual wire. Mask */
#define ESPI_IO_PLTRST_SOURCE_Msk             (0x00000001UL)                                 /**< (ESPI_IO_PLTRST_SOURCE) Register Mask  */

/* -------- ESPI_IO_ESPI_VWIRE_READY : (ESPI_IO Offset: 0x2ed) (R/W 8) eSPI Virtual Wire Channel Ready Register -------- */

typedef union
{
  struct
  {
    uint8_t  VWIRE_CHANNEL_READY:1;     /**< bit:      0  Firmware sets this bit to '1' to inform the Master than the Virtual Wire channel is ready for transactions. It corresponds to\n      the field Virtual Wire Channel Ready, bit 1 of the Config Offset 20h=Channel 1 Capabilities and Configurations Register. It is\n      forced to '0' while the Virtual Wire Channel Enable bit in the Capabilities and Configurations register is 0. Once set to '1' it cannot\n      be set to '0' by firmware. It is only set to '0' by a reset, or when the Master changes the Enabled bit to '0'.\n      While this bit is '0' all Virtual Wire transactions initiated by the Slave are inhibited. */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __ESPI_IO_ESPI_VWIRE_READY_bits_t;
#define ESPI_IO_ESPI_VWIRE_READY_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_ESPI_VWIRE_READY) eSPI Virtual Wire Channel Ready Register  Reset Value */

#define ESPI_IO_ESPI_VWIRE_READY_VWIRE_CHANNEL_READY_Pos (0)                                            /**< (ESPI_IO_ESPI_VWIRE_READY) Firmware sets this bit to '1' to inform the Master than the Virtual Wire channel is ready for transactions. It corresponds to\n      the field Virtual Wire Channel Ready, bit 1 of the Config Offset 20h=Channel 1 Capabilities and Configurations Register. It is\n      forced to '0' while the Virtual Wire Channel Enable bit in the Capabilities and Configurations register is 0. Once set to '1' it cannot\n      be set to '0' by firmware. It is only set to '0' by a reset, or when the Master changes the Enabled bit to '0'.\n      While this bit is '0' all Virtual Wire transactions initiated by the Slave are inhibited. Position */
#define ESPI_IO_ESPI_VWIRE_READY_VWIRE_CHANNEL_READY_Msk (0x1U << ESPI_IO_ESPI_VWIRE_READY_VWIRE_CHANNEL_READY_Pos)  /**< (ESPI_IO_ESPI_VWIRE_READY) Firmware sets this bit to '1' to inform the Master than the Virtual Wire channel is ready for transactions. It corresponds to\n      the field Virtual Wire Channel Ready, bit 1 of the Config Offset 20h=Channel 1 Capabilities and Configurations Register. It is\n      forced to '0' while the Virtual Wire Channel Enable bit in the Capabilities and Configurations register is 0. Once set to '1' it cannot\n      be set to '0' by firmware. It is only set to '0' by a reset, or when the Master changes the Enabled bit to '0'.\n      While this bit is '0' all Virtual Wire transactions initiated by the Slave are inhibited. Mask */
#define ESPI_IO_ESPI_VWIRE_READY_Msk          (0x00000001UL)                                 /**< (ESPI_IO_ESPI_VWIRE_READY) Register Mask  */

/* -------- ESPI_IO_ESPI_ACTIVATE : (ESPI_IO Offset: 0x330) (R/W 8) eSPI Activate Register -------- */

typedef union
{
  struct
  {
    uint8_t  ACTIVATE:1;                /**< bit:      0  1=Activate. When this bit is '1', the eSPI Logical Device is powered and functional.\n      0=Deactivate. When this bit is 0, the logical device is powered down and inactive.\n      Except for the eSPI Activate Register itself, clocks to the block are gated and the eSPI Logical Device will permit the\n      main oscillator to be shut down. */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __ESPI_IO_ESPI_ACTIVATE_bits_t;
#define ESPI_IO_ESPI_ACTIVATE_RESETVALUE    (0x00U)                                       /**<  (ESPI_IO_ESPI_ACTIVATE) eSPI Activate Register  Reset Value */

#define ESPI_IO_ESPI_ACTIVATE_ACTIVATE_Pos    (0)                                            /**< (ESPI_IO_ESPI_ACTIVATE) 1=Activate. When this bit is '1', the eSPI Logical Device is powered and functional.\n      0=Deactivate. When this bit is 0, the logical device is powered down and inactive.\n      Except for the eSPI Activate Register itself, clocks to the block are gated and the eSPI Logical Device will permit the\n      main oscillator to be shut down. Position */
#define ESPI_IO_ESPI_ACTIVATE_ACTIVATE_Msk    (0x1U << ESPI_IO_ESPI_ACTIVATE_ACTIVATE_Pos)   /**< (ESPI_IO_ESPI_ACTIVATE) 1=Activate. When this bit is '1', the eSPI Logical Device is powered and functional.\n      0=Deactivate. When this bit is 0, the logical device is powered down and inactive.\n      Except for the eSPI Activate Register itself, clocks to the block are gated and the eSPI Logical Device will permit the\n      main oscillator to be shut down. Mask */
#define ESPI_IO_ESPI_ACTIVATE_Msk             (0x00000001UL)                                 /**< (ESPI_IO_ESPI_ACTIVATE) Register Mask  */

/* -------- ESPI_IO_BAR_CONFIG_ADDRESS : (ESPI_IO Offset: 0x334) (R/W 32) eSPI I/O Base Address Configuration Register -------- */

typedef union
{
  struct
  {
    uint32_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint32_t :15;                       /**< bit:  1..15  Reserved                                      */
    uint32_t ESPI_HOST_ADDRESS:16;      /**< bit: 16..31  These 16 bits are used to match eSPI I/O addresses. */
  };
  uint32_t w;
} __ESPI_IO_BAR_CONFIG_ADDRESS_bits_t;
#define ESPI_IO_BAR_CONFIG_ADDRESS_RESETVALUE (0x2E0000U)                                   /**<  (ESPI_IO_BAR_CONFIG_ADDRESS) eSPI I/O Base Address Configuration Register  Reset Value */

#define ESPI_IO_BAR_CONFIG_ADDRESS_VALID_Pos  (0)                                            /**< (ESPI_IO_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_BAR_CONFIG_ADDRESS_VALID_Msk  (0x1U << ESPI_IO_BAR_CONFIG_ADDRESS_VALID_Pos)  /**< (ESPI_IO_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos (16)                                           /**< (ESPI_IO_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk (0xFFFFU << ESPI_IO_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos)  /**< (ESPI_IO_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS(value) (ESPI_IO_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk & ((value) << ESPI_IO_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos))
#define ESPI_IO_BAR_CONFIG_ADDRESS_Msk        (0xFFFF0001UL)                                 /**< (ESPI_IO_BAR_CONFIG_ADDRESS) Register Mask  */

/* -------- ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS : (ESPI_IO Offset: 0x338) (R/W 32) eSPI Memory Base Address Configuration Register -------- */

typedef union
{
  struct
  {
    uint32_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint32_t :15;                       /**< bit:  1..15  Reserved                                      */
    uint32_t ESPI_HOST_ADDRESS:16;      /**< bit: 16..31  These 16 bits are used to match eSPI I/O addresses. */
  };
  uint32_t w;
} __ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS_bits_t;
#define ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS) eSPI Memory Base Address Configuration Register  Reset Value */

#define ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS_VALID_Pos (0)                                            /**< (ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS_VALID_Msk (0x1U << ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS_VALID_Pos)  /**< (ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos (16)                                           /**< (ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk (0xFFFFU << ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos)  /**< (ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS(value) (ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk & ((value) << ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos))
#define ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS_Msk (0xFFFF0001UL)                                 /**< (ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS) Register Mask  */

/* -------- ESPI_IO_MBX_BAR_CONFIG_ADDRESS : (ESPI_IO Offset: 0x33c) (R/W 32) Mailbox Base Address Configuration Register -------- */

typedef union
{
  struct
  {
    uint32_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint32_t :15;                       /**< bit:  1..15  Reserved                                      */
    uint32_t ESPI_HOST_ADDRESS:16;      /**< bit: 16..31  These 16 bits are used to match eSPI I/O addresses. */
  };
  uint32_t w;
} __ESPI_IO_MBX_BAR_CONFIG_ADDRESS_bits_t;
#define ESPI_IO_MBX_BAR_CONFIG_ADDRESS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_MBX_BAR_CONFIG_ADDRESS) Mailbox Base Address Configuration Register  Reset Value */

#define ESPI_IO_MBX_BAR_CONFIG_ADDRESS_VALID_Pos (0)                                            /**< (ESPI_IO_MBX_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_MBX_BAR_CONFIG_ADDRESS_VALID_Msk (0x1U << ESPI_IO_MBX_BAR_CONFIG_ADDRESS_VALID_Pos)  /**< (ESPI_IO_MBX_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_MBX_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos (16)                                           /**< (ESPI_IO_MBX_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_MBX_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk (0xFFFFU << ESPI_IO_MBX_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos)  /**< (ESPI_IO_MBX_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_MBX_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS(value) (ESPI_IO_MBX_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk & ((value) << ESPI_IO_MBX_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos))
#define ESPI_IO_MBX_BAR_CONFIG_ADDRESS_Msk    (0xFFFF0001UL)                                 /**< (ESPI_IO_MBX_BAR_CONFIG_ADDRESS) Register Mask  */

/* -------- ESPI_IO_EM8042_BAR_CONFIG_ADDRESS : (ESPI_IO Offset: 0x340) (R/W 32) 8042 Emulated Keyboard Controller Base Address Configuration Register -------- */

typedef union
{
  struct
  {
    uint32_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint32_t :15;                       /**< bit:  1..15  Reserved                                      */
    uint32_t ESPI_HOST_ADDRESS:16;      /**< bit: 16..31  These 16 bits are used to match eSPI I/O addresses. */
  };
  uint32_t w;
} __ESPI_IO_EM8042_BAR_CONFIG_ADDRESS_bits_t;
#define ESPI_IO_EM8042_BAR_CONFIG_ADDRESS_RESETVALUE (0x600000U)                                   /**<  (ESPI_IO_EM8042_BAR_CONFIG_ADDRESS) 8042 Emulated Keyboard Controller Base Address Configuration Register  Reset Value */

#define ESPI_IO_EM8042_BAR_CONFIG_ADDRESS_VALID_Pos (0)                                            /**< (ESPI_IO_EM8042_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_EM8042_BAR_CONFIG_ADDRESS_VALID_Msk (0x1U << ESPI_IO_EM8042_BAR_CONFIG_ADDRESS_VALID_Pos)  /**< (ESPI_IO_EM8042_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_EM8042_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos (16)                                           /**< (ESPI_IO_EM8042_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_EM8042_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk (0xFFFFU << ESPI_IO_EM8042_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos)  /**< (ESPI_IO_EM8042_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_EM8042_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS(value) (ESPI_IO_EM8042_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk & ((value) << ESPI_IO_EM8042_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos))
#define ESPI_IO_EM8042_BAR_CONFIG_ADDRESS_Msk (0xFFFF0001UL)                                 /**< (ESPI_IO_EM8042_BAR_CONFIG_ADDRESS) Register Mask  */

/* -------- ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS : (ESPI_IO Offset: 0x344) (R/W 32) ACPI EC 0 Base Address Configuration Register -------- */

typedef union
{
  struct
  {
    uint32_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint32_t :15;                       /**< bit:  1..15  Reserved                                      */
    uint32_t ESPI_HOST_ADDRESS:16;      /**< bit: 16..31  These 16 bits are used to match eSPI I/O addresses. */
  };
  uint32_t w;
} __ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS_bits_t;
#define ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS_RESETVALUE (0x620000U)                                   /**<  (ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS) ACPI EC 0 Base Address Configuration Register  Reset Value */

#define ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS_VALID_Pos (0)                                            /**< (ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS_VALID_Msk (0x1U << ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS_VALID_Pos)  /**< (ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos (16)                                           /**< (ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk (0xFFFFU << ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos)  /**< (ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS(value) (ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk & ((value) << ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos))
#define ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS_Msk (0xFFFF0001UL)                                 /**< (ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS) Register Mask  */

/* -------- ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS : (ESPI_IO Offset: 0x348) (R/W 32) ACPI EC 1 Base Address Configuration Register -------- */

typedef union
{
  struct
  {
    uint32_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint32_t :15;                       /**< bit:  1..15  Reserved                                      */
    uint32_t ESPI_HOST_ADDRESS:16;      /**< bit: 16..31  These 16 bits are used to match eSPI I/O addresses. */
  };
  uint32_t w;
} __ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS_bits_t;
#define ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS) ACPI EC 1 Base Address Configuration Register  Reset Value */

#define ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS_VALID_Pos (0)                                            /**< (ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS_VALID_Msk (0x1U << ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS_VALID_Pos)  /**< (ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos (16)                                           /**< (ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk (0xFFFFU << ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos)  /**< (ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS(value) (ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk & ((value) << ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos))
#define ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS_Msk (0xFFFF0001UL)                                 /**< (ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS) Register Mask  */

/* -------- ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS : (ESPI_IO Offset: 0x34c) (R/W 32) ACPI EC 2 Base Address Configuration Register -------- */

typedef union
{
  struct
  {
    uint32_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint32_t :15;                       /**< bit:  1..15  Reserved                                      */
    uint32_t ESPI_HOST_ADDRESS:16;      /**< bit: 16..31  These 16 bits are used to match eSPI I/O addresses. */
  };
  uint32_t w;
} __ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS_bits_t;
#define ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS) ACPI EC 2 Base Address Configuration Register  Reset Value */

#define ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS_VALID_Pos (0)                                            /**< (ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS_VALID_Msk (0x1U << ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS_VALID_Pos)  /**< (ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos (16)                                           /**< (ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk (0xFFFFU << ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos)  /**< (ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS(value) (ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk & ((value) << ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos))
#define ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS_Msk (0xFFFF0001UL)                                 /**< (ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS) Register Mask  */

/* -------- ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS : (ESPI_IO Offset: 0x350) (R/W 32) ACPI EC 3 Base Address Configuration Register -------- */

typedef union
{
  struct
  {
    uint32_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint32_t :15;                       /**< bit:  1..15  Reserved                                      */
    uint32_t ESPI_HOST_ADDRESS:16;      /**< bit: 16..31  These 16 bits are used to match eSPI I/O addresses. */
  };
  uint32_t w;
} __ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS_bits_t;
#define ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS) ACPI EC 3 Base Address Configuration Register  Reset Value */

#define ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS_VALID_Pos (0)                                            /**< (ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS_VALID_Msk (0x1U << ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS_VALID_Pos)  /**< (ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos (16)                                           /**< (ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk (0xFFFFU << ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos)  /**< (ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS(value) (ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk & ((value) << ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos))
#define ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS_Msk (0xFFFF0001UL)                                 /**< (ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS) Register Mask  */

/* -------- ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS : (ESPI_IO Offset: 0x358) (R/W 32) ACPI PM1 Base Address Configuration Register -------- */

typedef union
{
  struct
  {
    uint32_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint32_t :15;                       /**< bit:  1..15  Reserved                                      */
    uint32_t ESPI_HOST_ADDRESS:16;      /**< bit: 16..31  These 16 bits are used to match eSPI I/O addresses. */
  };
  uint32_t w;
} __ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS_bits_t;
#define ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS) ACPI PM1 Base Address Configuration Register  Reset Value */

#define ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS_VALID_Pos (0)                                            /**< (ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS_VALID_Msk (0x1U << ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS_VALID_Pos)  /**< (ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos (16)                                           /**< (ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk (0xFFFFU << ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos)  /**< (ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS(value) (ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk & ((value) << ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos))
#define ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS_Msk (0xFFFF0001UL)                                 /**< (ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS) Register Mask  */

/* -------- ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS : (ESPI_IO Offset: 0x35c) (R/W 32) I/O Base Address Configuration Register -------- */

typedef union
{
  struct
  {
    uint32_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint32_t :15;                       /**< bit:  1..15  Reserved                                      */
    uint32_t ESPI_HOST_ADDRESS:16;      /**< bit: 16..31  These 16 bits are used to match eSPI I/O addresses. */
  };
  uint32_t w;
} __ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS_bits_t;
#define ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS_RESETVALUE (0x920000U)                                   /**<  (ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS) I/O Base Address Configuration Register  Reset Value */

#define ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS_VALID_Pos (0)                                            /**< (ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS_VALID_Msk (0x1U << ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS_VALID_Pos)  /**< (ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos (16)                                           /**< (ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk (0xFFFFU << ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos)  /**< (ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS(value) (ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk & ((value) << ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos))
#define ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS_Msk (0xFFFF0001UL)                                 /**< (ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS) Register Mask  */

/* -------- ESPI_IO_UART_0_BAR_CONFIG_ADDRESS : (ESPI_IO Offset: 0x360) (R/W 32) UART 0 Base Address Configuration Register -------- */

typedef union
{
  struct
  {
    uint32_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint32_t :15;                       /**< bit:  1..15  Reserved                                      */
    uint32_t ESPI_HOST_ADDRESS:16;      /**< bit: 16..31  These 16 bits are used to match eSPI I/O addresses. */
  };
  uint32_t w;
} __ESPI_IO_UART_0_BAR_CONFIG_ADDRESS_bits_t;
#define ESPI_IO_UART_0_BAR_CONFIG_ADDRESS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_UART_0_BAR_CONFIG_ADDRESS) UART 0 Base Address Configuration Register  Reset Value */

#define ESPI_IO_UART_0_BAR_CONFIG_ADDRESS_VALID_Pos (0)                                            /**< (ESPI_IO_UART_0_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_UART_0_BAR_CONFIG_ADDRESS_VALID_Msk (0x1U << ESPI_IO_UART_0_BAR_CONFIG_ADDRESS_VALID_Pos)  /**< (ESPI_IO_UART_0_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_UART_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos (16)                                           /**< (ESPI_IO_UART_0_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_UART_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk (0xFFFFU << ESPI_IO_UART_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos)  /**< (ESPI_IO_UART_0_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_UART_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS(value) (ESPI_IO_UART_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk & ((value) << ESPI_IO_UART_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos))
#define ESPI_IO_UART_0_BAR_CONFIG_ADDRESS_Msk (0xFFFF0001UL)                                 /**< (ESPI_IO_UART_0_BAR_CONFIG_ADDRESS) Register Mask  */

/* -------- ESPI_IO_UART_1_BAR_CONFIG_ADDRESS : (ESPI_IO Offset: 0x364) (R/W 32) UART 1 Base Address Configuration Register -------- */

typedef union
{
  struct
  {
    uint32_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint32_t :15;                       /**< bit:  1..15  Reserved                                      */
    uint32_t ESPI_HOST_ADDRESS:16;      /**< bit: 16..31  These 16 bits are used to match eSPI I/O addresses. */
  };
  uint32_t w;
} __ESPI_IO_UART_1_BAR_CONFIG_ADDRESS_bits_t;
#define ESPI_IO_UART_1_BAR_CONFIG_ADDRESS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_UART_1_BAR_CONFIG_ADDRESS) UART 1 Base Address Configuration Register  Reset Value */

#define ESPI_IO_UART_1_BAR_CONFIG_ADDRESS_VALID_Pos (0)                                            /**< (ESPI_IO_UART_1_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_UART_1_BAR_CONFIG_ADDRESS_VALID_Msk (0x1U << ESPI_IO_UART_1_BAR_CONFIG_ADDRESS_VALID_Pos)  /**< (ESPI_IO_UART_1_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_UART_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos (16)                                           /**< (ESPI_IO_UART_1_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_UART_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk (0xFFFFU << ESPI_IO_UART_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos)  /**< (ESPI_IO_UART_1_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_UART_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS(value) (ESPI_IO_UART_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk & ((value) << ESPI_IO_UART_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos))
#define ESPI_IO_UART_1_BAR_CONFIG_ADDRESS_Msk (0xFFFF0001UL)                                 /**< (ESPI_IO_UART_1_BAR_CONFIG_ADDRESS) Register Mask  */

/* -------- ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS : (ESPI_IO Offset: 0x368) (R/W 32) Embedded Memory Interface (EMI) 2 BAR Config Register -------- */

typedef union
{
  struct
  {
    uint32_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint32_t :15;                       /**< bit:  1..15  Reserved                                      */
    uint32_t ESPI_HOST_ADDRESS:16;      /**< bit: 16..31  These 16 bits are used to match eSPI I/O addresses. */
  };
  uint32_t w;
} __ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS_bits_t;
#define ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS) Embedded Memory Interface (EMI) 2 BAR Config Register  Reset Value */

#define ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS_VALID_Pos (0)                                            /**< (ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS_VALID_Msk (0x1U << ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS_VALID_Pos)  /**< (ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos (16)                                           /**< (ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk (0xFFFFU << ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos)  /**< (ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS(value) (ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk & ((value) << ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos))
#define ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS_Msk  (0xFFFF0001UL)                                 /**< (ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS) Register Mask  */

/* -------- ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS : (ESPI_IO Offset: 0x36c) (R/W 32) Embedded Memory Interface (EMI) 1 BAR Config Register -------- */

typedef union
{
  struct
  {
    uint32_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint32_t :15;                       /**< bit:  1..15  Reserved                                      */
    uint32_t ESPI_HOST_ADDRESS:16;      /**< bit: 16..31  These 16 bits are used to match eSPI I/O addresses. */
  };
  uint32_t w;
} __ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS_bits_t;
#define ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS) Embedded Memory Interface (EMI) 1 BAR Config Register  Reset Value */

#define ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS_VALID_Pos (0)                                            /**< (ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS_VALID_Msk (0x1U << ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS_VALID_Pos)  /**< (ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos (16)                                           /**< (ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk (0xFFFFU << ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos)  /**< (ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS(value) (ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk & ((value) << ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos))
#define ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS_Msk  (0xFFFF0001UL)                                 /**< (ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS) Register Mask  */

/* -------- ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS : (ESPI_IO Offset: 0x374) (R/W 32) BIOS Debug Port (Port 80) 0 BAR Config Register -------- */

typedef union
{
  struct
  {
    uint32_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint32_t :15;                       /**< bit:  1..15  Reserved                                      */
    uint32_t ESPI_HOST_ADDRESS:16;      /**< bit: 16..31  These 16 bits are used to match eSPI I/O addresses. */
  };
  uint32_t w;
} __ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS_bits_t;
#define ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS) BIOS Debug Port (Port 80) 0 BAR Config Register  Reset Value */

#define ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS_VALID_Pos (0)                                            /**< (ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS_VALID_Msk (0x1U << ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS_VALID_Pos)  /**< (ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos (16)                                           /**< (ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk (0xFFFFU << ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos)  /**< (ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS(value) (ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk & ((value) << ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos))
#define ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS_Msk (0xFFFF0001UL)                                 /**< (ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS) Register Mask  */

/* -------- ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS : (ESPI_IO Offset: 0x378) (R/W 32) BIOS Debug Port (Port 80) 1 BAR Config Register -------- */

typedef union
{
  struct
  {
    uint32_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint32_t :15;                       /**< bit:  1..15  Reserved                                      */
    uint32_t ESPI_HOST_ADDRESS:16;      /**< bit: 16..31  These 16 bits are used to match eSPI I/O addresses. */
  };
  uint32_t w;
} __ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS_bits_t;
#define ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS) BIOS Debug Port (Port 80) 1 BAR Config Register  Reset Value */

#define ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS_VALID_Pos (0)                                            /**< (ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS_VALID_Msk (0x1U << ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS_VALID_Pos)  /**< (ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos (16)                                           /**< (ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk (0xFFFFU << ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos)  /**< (ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS(value) (ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk & ((value) << ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos))
#define ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS_Msk (0xFFFF0001UL)                                 /**< (ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS) Register Mask  */

/* -------- ESPI_IO_RTC_BAR_CONFIG_ADDRESS : (ESPI_IO Offset: 0x37c) (R/W 32) RTC BAR Config Register -------- */

typedef union
{
  struct
  {
    uint32_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint32_t :15;                       /**< bit:  1..15  Reserved                                      */
    uint32_t ESPI_HOST_ADDRESS:16;      /**< bit: 16..31  These 16 bits are used to match eSPI I/O addresses. */
  };
  uint32_t w;
} __ESPI_IO_RTC_BAR_CONFIG_ADDRESS_bits_t;
#define ESPI_IO_RTC_BAR_CONFIG_ADDRESS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_RTC_BAR_CONFIG_ADDRESS) RTC BAR Config Register  Reset Value */

#define ESPI_IO_RTC_BAR_CONFIG_ADDRESS_VALID_Pos (0)                                            /**< (ESPI_IO_RTC_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_RTC_BAR_CONFIG_ADDRESS_VALID_Msk (0x1U << ESPI_IO_RTC_BAR_CONFIG_ADDRESS_VALID_Pos)  /**< (ESPI_IO_RTC_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_RTC_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos (16)                                           /**< (ESPI_IO_RTC_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_RTC_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk (0xFFFFU << ESPI_IO_RTC_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos)  /**< (ESPI_IO_RTC_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_RTC_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS(value) (ESPI_IO_RTC_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk & ((value) << ESPI_IO_RTC_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos))
#define ESPI_IO_RTC_BAR_CONFIG_ADDRESS_Msk    (0xFFFF0001UL)                                 /**< (ESPI_IO_RTC_BAR_CONFIG_ADDRESS) Register Mask  */

/* -------- ESPI_IO_UART_2_BAR_CONFIG_ADDRESS : (ESPI_IO Offset: 0x384) (R/W 32) UART 2 Base Address Configuration Register -------- */

typedef union
{
  struct
  {
    uint32_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint32_t :15;                       /**< bit:  1..15  Reserved                                      */
    uint32_t ESPI_HOST_ADDRESS:16;      /**< bit: 16..31  These 16 bits are used to match eSPI I/O addresses. */
  };
  uint32_t w;
} __ESPI_IO_UART_2_BAR_CONFIG_ADDRESS_bits_t;
#define ESPI_IO_UART_2_BAR_CONFIG_ADDRESS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_UART_2_BAR_CONFIG_ADDRESS) UART 2 Base Address Configuration Register  Reset Value */

#define ESPI_IO_UART_2_BAR_CONFIG_ADDRESS_VALID_Pos (0)                                            /**< (ESPI_IO_UART_2_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_UART_2_BAR_CONFIG_ADDRESS_VALID_Msk (0x1U << ESPI_IO_UART_2_BAR_CONFIG_ADDRESS_VALID_Pos)  /**< (ESPI_IO_UART_2_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_UART_2_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos (16)                                           /**< (ESPI_IO_UART_2_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_UART_2_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk (0xFFFFU << ESPI_IO_UART_2_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos)  /**< (ESPI_IO_UART_2_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_UART_2_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS(value) (ESPI_IO_UART_2_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk & ((value) << ESPI_IO_UART_2_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos))
#define ESPI_IO_UART_2_BAR_CONFIG_ADDRESS_Msk (0xFFFF0001UL)                                 /**< (ESPI_IO_UART_2_BAR_CONFIG_ADDRESS) Register Mask  */

/* -------- ESPI_IO_GLUE_BAR_CONFIG_ADDRESS : (ESPI_IO Offset: 0x38c) (R/W 32) GLUE Base Address Configuration Register -------- */

typedef union
{
  struct
  {
    uint32_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint32_t :15;                       /**< bit:  1..15  Reserved                                      */
    uint32_t ESPI_HOST_ADDRESS:16;      /**< bit: 16..31  These 16 bits are used to match eSPI I/O addresses. */
  };
  uint32_t w;
} __ESPI_IO_GLUE_BAR_CONFIG_ADDRESS_bits_t;
#define ESPI_IO_GLUE_BAR_CONFIG_ADDRESS_RESETVALUE (0x00U)                                       /**<  (ESPI_IO_GLUE_BAR_CONFIG_ADDRESS) GLUE Base Address Configuration Register  Reset Value */

#define ESPI_IO_GLUE_BAR_CONFIG_ADDRESS_VALID_Pos (0)                                            /**< (ESPI_IO_GLUE_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_IO_GLUE_BAR_CONFIG_ADDRESS_VALID_Msk (0x1U << ESPI_IO_GLUE_BAR_CONFIG_ADDRESS_VALID_Pos)  /**< (ESPI_IO_GLUE_BAR_CONFIG_ADDRESS) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_IO_GLUE_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos (16)                                           /**< (ESPI_IO_GLUE_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Position */
#define ESPI_IO_GLUE_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk (0xFFFFU << ESPI_IO_GLUE_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos)  /**< (ESPI_IO_GLUE_BAR_CONFIG_ADDRESS) These 16 bits are used to match eSPI I/O addresses. Mask */
#define ESPI_IO_GLUE_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS(value) (ESPI_IO_GLUE_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Msk & ((value) << ESPI_IO_GLUE_BAR_CONFIG_ADDRESS_ESPI_HOST_ADDRESS_Pos))
#define ESPI_IO_GLUE_BAR_CONFIG_ADDRESS_Msk   (0xFFFF0001UL)                                 /**< (ESPI_IO_GLUE_BAR_CONFIG_ADDRESS) Register Mask  */

/* -------- ESPI_IO_MBX_HOST_SIRQ_IRQ__SELECT : (ESPI_IO Offset: 0x3ac) (R/W 8) Mailbox (MBX_Host_SIRQ Interrupt) Selection Register -------- */

typedef union
{
  struct
  {
    uint8_t  IRQ:8;                     /**< bit:   0..7  FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. */
  };
  uint8_t  w;
} __ESPI_IO_MBX_HOST_SIRQ_IRQ__SELECT_bits_t;
#define ESPI_IO_MBX_HOST_SIRQ_IRQ__SELECT_RESETVALUE (0xFFU)                                       /**<  (ESPI_IO_MBX_HOST_SIRQ_IRQ__SELECT) Mailbox (MBX_Host_SIRQ Interrupt) Selection Register  Reset Value */

#define ESPI_IO_MBX_HOST_SIRQ_IRQ__SELECT_IRQ_Pos (0)                                            /**< (ESPI_IO_MBX_HOST_SIRQ_IRQ__SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_MBX_HOST_SIRQ_IRQ__SELECT_IRQ_Msk (0xFFU << ESPI_IO_MBX_HOST_SIRQ_IRQ__SELECT_IRQ_Pos)  /**< (ESPI_IO_MBX_HOST_SIRQ_IRQ__SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_MBX_HOST_SIRQ_IRQ__SELECT_IRQ(value) (ESPI_IO_MBX_HOST_SIRQ_IRQ__SELECT_IRQ_Msk & ((value) << ESPI_IO_MBX_HOST_SIRQ_IRQ__SELECT_IRQ_Pos))
#define ESPI_IO_MBX_HOST_SIRQ_IRQ__SELECT_Msk (0x000000FFUL)                                 /**< (ESPI_IO_MBX_HOST_SIRQ_IRQ__SELECT) Register Mask  */

/* -------- ESPI_IO_MBX_HOST_SMI_IRQ_SELECT : (ESPI_IO Offset: 0x3ad) (R/W 8) Mailbox (MBX_Host_SMI Interrupt) Selection Register -------- */

typedef union
{
  struct
  {
    uint8_t  IRQ:8;                     /**< bit:   0..7  FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. */
  };
  uint8_t  w;
} __ESPI_IO_MBX_HOST_SMI_IRQ_SELECT_bits_t;
#define ESPI_IO_MBX_HOST_SMI_IRQ_SELECT_RESETVALUE (0xFFU)                                       /**<  (ESPI_IO_MBX_HOST_SMI_IRQ_SELECT) Mailbox (MBX_Host_SMI Interrupt) Selection Register  Reset Value */

#define ESPI_IO_MBX_HOST_SMI_IRQ_SELECT_IRQ_Pos (0)                                            /**< (ESPI_IO_MBX_HOST_SMI_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_MBX_HOST_SMI_IRQ_SELECT_IRQ_Msk (0xFFU << ESPI_IO_MBX_HOST_SMI_IRQ_SELECT_IRQ_Pos)  /**< (ESPI_IO_MBX_HOST_SMI_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_MBX_HOST_SMI_IRQ_SELECT_IRQ(value) (ESPI_IO_MBX_HOST_SMI_IRQ_SELECT_IRQ_Msk & ((value) << ESPI_IO_MBX_HOST_SMI_IRQ_SELECT_IRQ_Pos))
#define ESPI_IO_MBX_HOST_SMI_IRQ_SELECT_Msk   (0x000000FFUL)                                 /**< (ESPI_IO_MBX_HOST_SMI_IRQ_SELECT) Register Mask  */

/* -------- ESPI_IO_KIRQ_8042_IRQ_SELECT : (ESPI_IO Offset: 0x3ae) (R/W 8) 8042 (KIRQ Interrupt) Selection Register -------- */

typedef union
{
  struct
  {
    uint8_t  IRQ:8;                     /**< bit:   0..7  FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. */
  };
  uint8_t  w;
} __ESPI_IO_KIRQ_8042_IRQ_SELECT_bits_t;
#define ESPI_IO_KIRQ_8042_IRQ_SELECT_RESETVALUE (0xFFU)                                       /**<  (ESPI_IO_KIRQ_8042_IRQ_SELECT) 8042 (KIRQ Interrupt) Selection Register  Reset Value */

#define ESPI_IO_KIRQ_8042_IRQ_SELECT_IRQ_Pos  (0)                                            /**< (ESPI_IO_KIRQ_8042_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_KIRQ_8042_IRQ_SELECT_IRQ_Msk  (0xFFU << ESPI_IO_KIRQ_8042_IRQ_SELECT_IRQ_Pos)  /**< (ESPI_IO_KIRQ_8042_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_KIRQ_8042_IRQ_SELECT_IRQ(value) (ESPI_IO_KIRQ_8042_IRQ_SELECT_IRQ_Msk & ((value) << ESPI_IO_KIRQ_8042_IRQ_SELECT_IRQ_Pos))
#define ESPI_IO_KIRQ_8042_IRQ_SELECT_Msk      (0x000000FFUL)                                 /**< (ESPI_IO_KIRQ_8042_IRQ_SELECT) Register Mask  */

/* -------- ESPI_IO_MIRQ_8042_IRQ_SELECT : (ESPI_IO Offset: 0x3af) (R/W 8) 8042 (MIRQ Interrupt) Selection Register -------- */

typedef union
{
  struct
  {
    uint8_t  IRQ:8;                     /**< bit:   0..7  FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. */
  };
  uint8_t  w;
} __ESPI_IO_MIRQ_8042_IRQ_SELECT_bits_t;
#define ESPI_IO_MIRQ_8042_IRQ_SELECT_RESETVALUE (0xFFU)                                       /**<  (ESPI_IO_MIRQ_8042_IRQ_SELECT) 8042 (MIRQ Interrupt) Selection Register  Reset Value */

#define ESPI_IO_MIRQ_8042_IRQ_SELECT_IRQ_Pos  (0)                                            /**< (ESPI_IO_MIRQ_8042_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_MIRQ_8042_IRQ_SELECT_IRQ_Msk  (0xFFU << ESPI_IO_MIRQ_8042_IRQ_SELECT_IRQ_Pos)  /**< (ESPI_IO_MIRQ_8042_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_MIRQ_8042_IRQ_SELECT_IRQ(value) (ESPI_IO_MIRQ_8042_IRQ_SELECT_IRQ_Msk & ((value) << ESPI_IO_MIRQ_8042_IRQ_SELECT_IRQ_Pos))
#define ESPI_IO_MIRQ_8042_IRQ_SELECT_Msk      (0x000000FFUL)                                 /**< (ESPI_IO_MIRQ_8042_IRQ_SELECT) Register Mask  */

/* -------- ESPI_IO_ACPI_EC_0_OBF_IRQ_SELECT : (ESPI_IO Offset: 0x3b0) (R/W 8) ACPI EC 0 (EC_OBF Interrupt) Selection Register -------- */

typedef union
{
  struct
  {
    uint8_t  IRQ:8;                     /**< bit:   0..7  FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. */
  };
  uint8_t  w;
} __ESPI_IO_ACPI_EC_0_OBF_IRQ_SELECT_bits_t;
#define ESPI_IO_ACPI_EC_0_OBF_IRQ_SELECT_RESETVALUE (0xFFU)                                       /**<  (ESPI_IO_ACPI_EC_0_OBF_IRQ_SELECT) ACPI EC 0 (EC_OBF Interrupt) Selection Register  Reset Value */

#define ESPI_IO_ACPI_EC_0_OBF_IRQ_SELECT_IRQ_Pos (0)                                            /**< (ESPI_IO_ACPI_EC_0_OBF_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_ACPI_EC_0_OBF_IRQ_SELECT_IRQ_Msk (0xFFU << ESPI_IO_ACPI_EC_0_OBF_IRQ_SELECT_IRQ_Pos)  /**< (ESPI_IO_ACPI_EC_0_OBF_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_ACPI_EC_0_OBF_IRQ_SELECT_IRQ(value) (ESPI_IO_ACPI_EC_0_OBF_IRQ_SELECT_IRQ_Msk & ((value) << ESPI_IO_ACPI_EC_0_OBF_IRQ_SELECT_IRQ_Pos))
#define ESPI_IO_ACPI_EC_0_OBF_IRQ_SELECT_Msk  (0x000000FFUL)                                 /**< (ESPI_IO_ACPI_EC_0_OBF_IRQ_SELECT) Register Mask  */

/* -------- ESPI_IO_ACPI_EC_1_OBF_IRQ_SELECT : (ESPI_IO Offset: 0x3b1) (R/W 8) ACPI EC 1 (EC_OBF Interrupt) Selection Register -------- */

typedef union
{
  struct
  {
    uint8_t  IRQ:8;                     /**< bit:   0..7  FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. */
  };
  uint8_t  w;
} __ESPI_IO_ACPI_EC_1_OBF_IRQ_SELECT_bits_t;
#define ESPI_IO_ACPI_EC_1_OBF_IRQ_SELECT_RESETVALUE (0xFFU)                                       /**<  (ESPI_IO_ACPI_EC_1_OBF_IRQ_SELECT) ACPI EC 1 (EC_OBF Interrupt) Selection Register  Reset Value */

#define ESPI_IO_ACPI_EC_1_OBF_IRQ_SELECT_IRQ_Pos (0)                                            /**< (ESPI_IO_ACPI_EC_1_OBF_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_ACPI_EC_1_OBF_IRQ_SELECT_IRQ_Msk (0xFFU << ESPI_IO_ACPI_EC_1_OBF_IRQ_SELECT_IRQ_Pos)  /**< (ESPI_IO_ACPI_EC_1_OBF_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_ACPI_EC_1_OBF_IRQ_SELECT_IRQ(value) (ESPI_IO_ACPI_EC_1_OBF_IRQ_SELECT_IRQ_Msk & ((value) << ESPI_IO_ACPI_EC_1_OBF_IRQ_SELECT_IRQ_Pos))
#define ESPI_IO_ACPI_EC_1_OBF_IRQ_SELECT_Msk  (0x000000FFUL)                                 /**< (ESPI_IO_ACPI_EC_1_OBF_IRQ_SELECT) Register Mask  */

/* -------- ESPI_IO_ACPI_EC_2_OBF_IRQ_SELECT : (ESPI_IO Offset: 0x3b2) (R/W 8) ACPI EC 2 (EC_OBF Interrupt) Selection Register -------- */

typedef union
{
  struct
  {
    uint8_t  IRQ:8;                     /**< bit:   0..7  FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. */
  };
  uint8_t  w;
} __ESPI_IO_ACPI_EC_2_OBF_IRQ_SELECT_bits_t;
#define ESPI_IO_ACPI_EC_2_OBF_IRQ_SELECT_RESETVALUE (0xFFU)                                       /**<  (ESPI_IO_ACPI_EC_2_OBF_IRQ_SELECT) ACPI EC 2 (EC_OBF Interrupt) Selection Register  Reset Value */

#define ESPI_IO_ACPI_EC_2_OBF_IRQ_SELECT_IRQ_Pos (0)                                            /**< (ESPI_IO_ACPI_EC_2_OBF_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_ACPI_EC_2_OBF_IRQ_SELECT_IRQ_Msk (0xFFU << ESPI_IO_ACPI_EC_2_OBF_IRQ_SELECT_IRQ_Pos)  /**< (ESPI_IO_ACPI_EC_2_OBF_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_ACPI_EC_2_OBF_IRQ_SELECT_IRQ(value) (ESPI_IO_ACPI_EC_2_OBF_IRQ_SELECT_IRQ_Msk & ((value) << ESPI_IO_ACPI_EC_2_OBF_IRQ_SELECT_IRQ_Pos))
#define ESPI_IO_ACPI_EC_2_OBF_IRQ_SELECT_Msk  (0x000000FFUL)                                 /**< (ESPI_IO_ACPI_EC_2_OBF_IRQ_SELECT) Register Mask  */

/* -------- ESPI_IO_ACPI_EC_3_OBF_IRQ_SELECT : (ESPI_IO Offset: 0x3b3) (R/W 8) ACPI EC 3 (EC_OBF Interrupt) Selection Register -------- */

typedef union
{
  struct
  {
    uint8_t  IRQ:8;                     /**< bit:   0..7  FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. */
  };
  uint8_t  w;
} __ESPI_IO_ACPI_EC_3_OBF_IRQ_SELECT_bits_t;
#define ESPI_IO_ACPI_EC_3_OBF_IRQ_SELECT_RESETVALUE (0xFFU)                                       /**<  (ESPI_IO_ACPI_EC_3_OBF_IRQ_SELECT) ACPI EC 3 (EC_OBF Interrupt) Selection Register  Reset Value */

#define ESPI_IO_ACPI_EC_3_OBF_IRQ_SELECT_IRQ_Pos (0)                                            /**< (ESPI_IO_ACPI_EC_3_OBF_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_ACPI_EC_3_OBF_IRQ_SELECT_IRQ_Msk (0xFFU << ESPI_IO_ACPI_EC_3_OBF_IRQ_SELECT_IRQ_Pos)  /**< (ESPI_IO_ACPI_EC_3_OBF_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_ACPI_EC_3_OBF_IRQ_SELECT_IRQ(value) (ESPI_IO_ACPI_EC_3_OBF_IRQ_SELECT_IRQ_Msk & ((value) << ESPI_IO_ACPI_EC_3_OBF_IRQ_SELECT_IRQ_Pos))
#define ESPI_IO_ACPI_EC_3_OBF_IRQ_SELECT_Msk  (0x000000FFUL)                                 /**< (ESPI_IO_ACPI_EC_3_OBF_IRQ_SELECT) Register Mask  */

/* -------- ESPI_IO_UART_0_IRQ_SELECT : (ESPI_IO Offset: 0x3b5) (R/W 8) UART 0 (UART Interrupt) Selection Register -------- */

typedef union
{
  struct
  {
    uint8_t  IRQ:8;                     /**< bit:   0..7  FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. */
  };
  uint8_t  w;
} __ESPI_IO_UART_0_IRQ_SELECT_bits_t;
#define ESPI_IO_UART_0_IRQ_SELECT_RESETVALUE (0xFFU)                                       /**<  (ESPI_IO_UART_0_IRQ_SELECT) UART 0 (UART Interrupt) Selection Register  Reset Value */

#define ESPI_IO_UART_0_IRQ_SELECT_IRQ_Pos     (0)                                            /**< (ESPI_IO_UART_0_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_UART_0_IRQ_SELECT_IRQ_Msk     (0xFFU << ESPI_IO_UART_0_IRQ_SELECT_IRQ_Pos)   /**< (ESPI_IO_UART_0_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_UART_0_IRQ_SELECT_IRQ(value)  (ESPI_IO_UART_0_IRQ_SELECT_IRQ_Msk & ((value) << ESPI_IO_UART_0_IRQ_SELECT_IRQ_Pos))
#define ESPI_IO_UART_0_IRQ_SELECT_Msk         (0x000000FFUL)                                 /**< (ESPI_IO_UART_0_IRQ_SELECT) Register Mask  */

/* -------- ESPI_IO_UART_1_IRQ_SELECT : (ESPI_IO Offset: 0x3b6) (R/W 8) UART 1 (UART Interrupt) Selection Register -------- */

typedef union
{
  struct
  {
    uint8_t  IRQ:8;                     /**< bit:   0..7  FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. */
  };
  uint8_t  w;
} __ESPI_IO_UART_1_IRQ_SELECT_bits_t;
#define ESPI_IO_UART_1_IRQ_SELECT_RESETVALUE (0xFFU)                                       /**<  (ESPI_IO_UART_1_IRQ_SELECT) UART 1 (UART Interrupt) Selection Register  Reset Value */

#define ESPI_IO_UART_1_IRQ_SELECT_IRQ_Pos     (0)                                            /**< (ESPI_IO_UART_1_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_UART_1_IRQ_SELECT_IRQ_Msk     (0xFFU << ESPI_IO_UART_1_IRQ_SELECT_IRQ_Pos)   /**< (ESPI_IO_UART_1_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_UART_1_IRQ_SELECT_IRQ(value)  (ESPI_IO_UART_1_IRQ_SELECT_IRQ_Msk & ((value) << ESPI_IO_UART_1_IRQ_SELECT_IRQ_Pos))
#define ESPI_IO_UART_1_IRQ_SELECT_Msk         (0x000000FFUL)                                 /**< (ESPI_IO_UART_1_IRQ_SELECT) Register Mask  */

/* -------- ESPI_IO_EMI_0_HOST_IRQ_SELECT : (ESPI_IO Offset: 0x3b7) (R/W 8) EMI 0 (Host Event Interrupt) Selection Register -------- */

typedef union
{
  struct
  {
    uint8_t  IRQ:8;                     /**< bit:   0..7  FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. */
  };
  uint8_t  w;
} __ESPI_IO_EMI_0_HOST_IRQ_SELECT_bits_t;
#define ESPI_IO_EMI_0_HOST_IRQ_SELECT_RESETVALUE (0xFFU)                                       /**<  (ESPI_IO_EMI_0_HOST_IRQ_SELECT) EMI 0 (Host Event Interrupt) Selection Register  Reset Value */

#define ESPI_IO_EMI_0_HOST_IRQ_SELECT_IRQ_Pos (0)                                            /**< (ESPI_IO_EMI_0_HOST_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_EMI_0_HOST_IRQ_SELECT_IRQ_Msk (0xFFU << ESPI_IO_EMI_0_HOST_IRQ_SELECT_IRQ_Pos)  /**< (ESPI_IO_EMI_0_HOST_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_EMI_0_HOST_IRQ_SELECT_IRQ(value) (ESPI_IO_EMI_0_HOST_IRQ_SELECT_IRQ_Msk & ((value) << ESPI_IO_EMI_0_HOST_IRQ_SELECT_IRQ_Pos))
#define ESPI_IO_EMI_0_HOST_IRQ_SELECT_Msk     (0x000000FFUL)                                 /**< (ESPI_IO_EMI_0_HOST_IRQ_SELECT) Register Mask  */

/* -------- ESPI_IO_EMI_0_EC_HOST_IRQ_SELECT : (ESPI_IO Offset: 0x3b8) (R/W 8) EMI 0 (EC-to-Host Interrupt) Selection Register -------- */

typedef union
{
  struct
  {
    uint8_t  IRQ:8;                     /**< bit:   0..7  FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. */
  };
  uint8_t  w;
} __ESPI_IO_EMI_0_EC_HOST_IRQ_SELECT_bits_t;
#define ESPI_IO_EMI_0_EC_HOST_IRQ_SELECT_RESETVALUE (0xFFU)                                       /**<  (ESPI_IO_EMI_0_EC_HOST_IRQ_SELECT) EMI 0 (EC-to-Host Interrupt) Selection Register  Reset Value */

#define ESPI_IO_EMI_0_EC_HOST_IRQ_SELECT_IRQ_Pos (0)                                            /**< (ESPI_IO_EMI_0_EC_HOST_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_EMI_0_EC_HOST_IRQ_SELECT_IRQ_Msk (0xFFU << ESPI_IO_EMI_0_EC_HOST_IRQ_SELECT_IRQ_Pos)  /**< (ESPI_IO_EMI_0_EC_HOST_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_EMI_0_EC_HOST_IRQ_SELECT_IRQ(value) (ESPI_IO_EMI_0_EC_HOST_IRQ_SELECT_IRQ_Msk & ((value) << ESPI_IO_EMI_0_EC_HOST_IRQ_SELECT_IRQ_Pos))
#define ESPI_IO_EMI_0_EC_HOST_IRQ_SELECT_Msk  (0x000000FFUL)                                 /**< (ESPI_IO_EMI_0_EC_HOST_IRQ_SELECT) Register Mask  */

/* -------- ESPI_IO_EMI_1_HOST_IRQ_SELECT : (ESPI_IO Offset: 0x3b9) (R/W 8) EMI 1 (Host Event Interrupt) Selection Register -------- */

typedef union
{
  struct
  {
    uint8_t  IRQ:8;                     /**< bit:   0..7  FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. */
  };
  uint8_t  w;
} __ESPI_IO_EMI_1_HOST_IRQ_SELECT_bits_t;
#define ESPI_IO_EMI_1_HOST_IRQ_SELECT_RESETVALUE (0xFFU)                                       /**<  (ESPI_IO_EMI_1_HOST_IRQ_SELECT) EMI 1 (Host Event Interrupt) Selection Register  Reset Value */

#define ESPI_IO_EMI_1_HOST_IRQ_SELECT_IRQ_Pos (0)                                            /**< (ESPI_IO_EMI_1_HOST_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_EMI_1_HOST_IRQ_SELECT_IRQ_Msk (0xFFU << ESPI_IO_EMI_1_HOST_IRQ_SELECT_IRQ_Pos)  /**< (ESPI_IO_EMI_1_HOST_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_EMI_1_HOST_IRQ_SELECT_IRQ(value) (ESPI_IO_EMI_1_HOST_IRQ_SELECT_IRQ_Msk & ((value) << ESPI_IO_EMI_1_HOST_IRQ_SELECT_IRQ_Pos))
#define ESPI_IO_EMI_1_HOST_IRQ_SELECT_Msk     (0x000000FFUL)                                 /**< (ESPI_IO_EMI_1_HOST_IRQ_SELECT) Register Mask  */

/* -------- ESPI_IO_EMI_1_EC_HOST_IRQ_SELECT : (ESPI_IO Offset: 0x3ba) (R/W 8) EMI 1 (EC-to-Host Interrupt) Selection Register -------- */

typedef union
{
  struct
  {
    uint8_t  IRQ:8;                     /**< bit:   0..7  FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. */
  };
  uint8_t  w;
} __ESPI_IO_EMI_1_EC_HOST_IRQ_SELECT_bits_t;
#define ESPI_IO_EMI_1_EC_HOST_IRQ_SELECT_RESETVALUE (0xFFU)                                       /**<  (ESPI_IO_EMI_1_EC_HOST_IRQ_SELECT) EMI 1 (EC-to-Host Interrupt) Selection Register  Reset Value */

#define ESPI_IO_EMI_1_EC_HOST_IRQ_SELECT_IRQ_Pos (0)                                            /**< (ESPI_IO_EMI_1_EC_HOST_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_EMI_1_EC_HOST_IRQ_SELECT_IRQ_Msk (0xFFU << ESPI_IO_EMI_1_EC_HOST_IRQ_SELECT_IRQ_Pos)  /**< (ESPI_IO_EMI_1_EC_HOST_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_EMI_1_EC_HOST_IRQ_SELECT_IRQ(value) (ESPI_IO_EMI_1_EC_HOST_IRQ_SELECT_IRQ_Msk & ((value) << ESPI_IO_EMI_1_EC_HOST_IRQ_SELECT_IRQ_Pos))
#define ESPI_IO_EMI_1_EC_HOST_IRQ_SELECT_Msk  (0x000000FFUL)                                 /**< (ESPI_IO_EMI_1_EC_HOST_IRQ_SELECT) Register Mask  */

/* -------- ESPI_IO_RTC_IRQ_SELECT : (ESPI_IO Offset: 0x3bd) (R/W 8) RTC (RTC Interrupt) Selection Register -------- */

typedef union
{
  struct
  {
    uint8_t  IRQ:8;                     /**< bit:   0..7  FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. */
  };
  uint8_t  w;
} __ESPI_IO_RTC_IRQ_SELECT_bits_t;
#define ESPI_IO_RTC_IRQ_SELECT_RESETVALUE   (0xFFU)                                       /**<  (ESPI_IO_RTC_IRQ_SELECT) RTC (RTC Interrupt) Selection Register  Reset Value */

#define ESPI_IO_RTC_IRQ_SELECT_IRQ_Pos        (0)                                            /**< (ESPI_IO_RTC_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_RTC_IRQ_SELECT_IRQ_Msk        (0xFFU << ESPI_IO_RTC_IRQ_SELECT_IRQ_Pos)      /**< (ESPI_IO_RTC_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_RTC_IRQ_SELECT_IRQ(value)     (ESPI_IO_RTC_IRQ_SELECT_IRQ_Msk & ((value) << ESPI_IO_RTC_IRQ_SELECT_IRQ_Pos))
#define ESPI_IO_RTC_IRQ_SELECT_Msk            (0x000000FFUL)                                 /**< (ESPI_IO_RTC_IRQ_SELECT) Register Mask  */

/* -------- ESPI_IO_EC_IRQ_SELECT : (ESPI_IO Offset: 0x3be) (R/W 8) EC (EC_IRQ Interrupt) Selection Register -------- */

typedef union
{
  struct
  {
    uint8_t  IRQ:8;                     /**< bit:   0..7  FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. */
  };
  uint8_t  w;
} __ESPI_IO_EC_IRQ_SELECT_bits_t;
#define ESPI_IO_EC_IRQ_SELECT_RESETVALUE    (0xFFU)                                       /**<  (ESPI_IO_EC_IRQ_SELECT) EC (EC_IRQ Interrupt) Selection Register  Reset Value */

#define ESPI_IO_EC_IRQ_SELECT_IRQ_Pos         (0)                                            /**< (ESPI_IO_EC_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_EC_IRQ_SELECT_IRQ_Msk         (0xFFU << ESPI_IO_EC_IRQ_SELECT_IRQ_Pos)       /**< (ESPI_IO_EC_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_EC_IRQ_SELECT_IRQ(value)      (ESPI_IO_EC_IRQ_SELECT_IRQ_Msk & ((value) << ESPI_IO_EC_IRQ_SELECT_IRQ_Pos))
#define ESPI_IO_EC_IRQ_SELECT_Msk             (0x000000FFUL)                                 /**< (ESPI_IO_EC_IRQ_SELECT) Register Mask  */

/* -------- ESPI_IO_UART_2_IRQ_SELECT : (ESPI_IO Offset: 0x3bf) (R/W 8) UART 2 (UART Interrupt) Selection Register -------- */

typedef union
{
  struct
  {
    uint8_t  IRQ:8;                     /**< bit:   0..7  FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. */
  };
  uint8_t  w;
} __ESPI_IO_UART_2_IRQ_SELECT_bits_t;
#define ESPI_IO_UART_2_IRQ_SELECT_RESETVALUE (0xFFU)                                       /**<  (ESPI_IO_UART_2_IRQ_SELECT) UART 2 (UART Interrupt) Selection Register  Reset Value */

#define ESPI_IO_UART_2_IRQ_SELECT_IRQ_Pos     (0)                                            /**< (ESPI_IO_UART_2_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Position */
#define ESPI_IO_UART_2_IRQ_SELECT_IRQ_Msk     (0xFFU << ESPI_IO_UART_2_IRQ_SELECT_IRQ_Pos)   /**< (ESPI_IO_UART_2_IRQ_SELECT) FFh= IRQ generation from this device is disabled.\n      FEh-0=Changes in the value of the signal associated with this register are sent as a Virtual Wire transaction to the Master.\n      The Virtual Wire index is 0 for IRQ values 7Fh to 0h, and the index is 1 for IRQ values FEh to 80h. Mask */
#define ESPI_IO_UART_2_IRQ_SELECT_IRQ(value)  (ESPI_IO_UART_2_IRQ_SELECT_IRQ_Msk & ((value) << ESPI_IO_UART_2_IRQ_SELECT_IRQ_Pos))
#define ESPI_IO_UART_2_IRQ_SELECT_Msk         (0x000000FFUL)                                 /**< (ESPI_IO_UART_2_IRQ_SELECT) Register Mask  */

/* -------- ESPI_IO_ESPI_VWIRE_ERRORS : (ESPI_IO Offset: 0x3f0) (R/W 8) eSPI Virtual Wire Errors Register -------- */

typedef union
{
  struct
  {
    uint8_t  ERROR_FATAL_STATUS:1;      /**< bit:      0  This bit is a Master-readable copy of the Virtual Wire ERROR_FATAL (bit 1 in Slave-to-Master Virtual Wire Index 5h). */
    uint8_t  CLEAR_FATAL_ERROR_STATUS:1;  /**< bit:      1  When this field is written with a 1 the Virtual Wire ERROR_FATAL (bit 1 in Slave-to-Master Virtual Wire Index 5h)\n      is cleared to 0. Because clearing the status bit changes its state, a Virtual Wire packet reporting the new state will be sent\n      to the Master. Writes of 0 to this bit have no effect. Reads of this bit always return '0'. */
    uint8_t  :2;                        /**< bit:   2..3  Reserved                                      */
    uint8_t  ERROR_NON_FATAL_STATUS:1;  /**< bit:      4  This bit is a Master-readable copy of the Virtual Wire ERROR_NON_FATAL (bit 2 in Slave-to-Master Virtual Wire Index 5h). */
    uint8_t  CLEAR_NON_FATAL_ERROR_STATUS:1;  /**< bit:      5  When this field is written with a 1 the Virtual Wire ERROR_NON_- FATAL (bit 2 in Slave-to-Master Virtual Wire Index 5h)\n      is cleared to 0. Because clearing the status bit changes its state, a Virtual Wire packet reporting the new state will be sent to\n      the Master. Writes of 0 to this bit have no effect. Reads of this bit always return '0'. */
    uint8_t  :2;                        /**< bit:   6..7  Reserved                                      */
  };
  uint8_t  w;
} __ESPI_IO_ESPI_VWIRE_ERRORS_bits_t;
#define ESPI_IO_ESPI_VWIRE_ERRORS_RESETVALUE (0xFFU)                                       /**<  (ESPI_IO_ESPI_VWIRE_ERRORS) eSPI Virtual Wire Errors Register  Reset Value */

#define ESPI_IO_ESPI_VWIRE_ERRORS_ERROR_FATAL_STATUS_Pos (0)                                            /**< (ESPI_IO_ESPI_VWIRE_ERRORS) This bit is a Master-readable copy of the Virtual Wire ERROR_FATAL (bit 1 in Slave-to-Master Virtual Wire Index 5h). Position */
#define ESPI_IO_ESPI_VWIRE_ERRORS_ERROR_FATAL_STATUS_Msk (0x1U << ESPI_IO_ESPI_VWIRE_ERRORS_ERROR_FATAL_STATUS_Pos)  /**< (ESPI_IO_ESPI_VWIRE_ERRORS) This bit is a Master-readable copy of the Virtual Wire ERROR_FATAL (bit 1 in Slave-to-Master Virtual Wire Index 5h). Mask */
#define ESPI_IO_ESPI_VWIRE_ERRORS_CLEAR_FATAL_ERROR_STATUS_Pos (1)                                            /**< (ESPI_IO_ESPI_VWIRE_ERRORS) When this field is written with a 1 the Virtual Wire ERROR_FATAL (bit 1 in Slave-to-Master Virtual Wire Index 5h)\n      is cleared to 0. Because clearing the status bit changes its state, a Virtual Wire packet reporting the new state will be sent\n      to the Master. Writes of 0 to this bit have no effect. Reads of this bit always return '0'. Position */
#define ESPI_IO_ESPI_VWIRE_ERRORS_CLEAR_FATAL_ERROR_STATUS_Msk (0x1U << ESPI_IO_ESPI_VWIRE_ERRORS_CLEAR_FATAL_ERROR_STATUS_Pos)  /**< (ESPI_IO_ESPI_VWIRE_ERRORS) When this field is written with a 1 the Virtual Wire ERROR_FATAL (bit 1 in Slave-to-Master Virtual Wire Index 5h)\n      is cleared to 0. Because clearing the status bit changes its state, a Virtual Wire packet reporting the new state will be sent\n      to the Master. Writes of 0 to this bit have no effect. Reads of this bit always return '0'. Mask */
#define ESPI_IO_ESPI_VWIRE_ERRORS_ERROR_NON_FATAL_STATUS_Pos (4)                                            /**< (ESPI_IO_ESPI_VWIRE_ERRORS) This bit is a Master-readable copy of the Virtual Wire ERROR_NON_FATAL (bit 2 in Slave-to-Master Virtual Wire Index 5h). Position */
#define ESPI_IO_ESPI_VWIRE_ERRORS_ERROR_NON_FATAL_STATUS_Msk (0x1U << ESPI_IO_ESPI_VWIRE_ERRORS_ERROR_NON_FATAL_STATUS_Pos)  /**< (ESPI_IO_ESPI_VWIRE_ERRORS) This bit is a Master-readable copy of the Virtual Wire ERROR_NON_FATAL (bit 2 in Slave-to-Master Virtual Wire Index 5h). Mask */
#define ESPI_IO_ESPI_VWIRE_ERRORS_CLEAR_NON_FATAL_ERROR_STATUS_Pos (5)                                            /**< (ESPI_IO_ESPI_VWIRE_ERRORS) When this field is written with a 1 the Virtual Wire ERROR_NON_- FATAL (bit 2 in Slave-to-Master Virtual Wire Index 5h)\n      is cleared to 0. Because clearing the status bit changes its state, a Virtual Wire packet reporting the new state will be sent to\n      the Master. Writes of 0 to this bit have no effect. Reads of this bit always return '0'. Position */
#define ESPI_IO_ESPI_VWIRE_ERRORS_CLEAR_NON_FATAL_ERROR_STATUS_Msk (0x1U << ESPI_IO_ESPI_VWIRE_ERRORS_CLEAR_NON_FATAL_ERROR_STATUS_Pos)  /**< (ESPI_IO_ESPI_VWIRE_ERRORS) When this field is written with a 1 the Virtual Wire ERROR_NON_- FATAL (bit 2 in Slave-to-Master Virtual Wire Index 5h)\n      is cleared to 0. Because clearing the status bit changes its state, a Virtual Wire packet reporting the new state will be sent to\n      the Master. Writes of 0 to this bit have no effect. Reads of this bit always return '0'. Mask */
#define ESPI_IO_ESPI_VWIRE_ERRORS_Msk         (0x00000033UL)                                 /**< (ESPI_IO_ESPI_VWIRE_ERRORS) Register Mask  */

/** \brief ESPI_IO register offsets definitions */
#define ESPI_IO_INDEX_OFFSET         (0x00)         /**< (ESPI_IO_INDEX) The INDEX register, which is part of the Configuration Port, is used as a pointer to a Configuration Register Address. Offset */
#define ESPI_IO_DATA_REG_OFFSET      (0x01)         /**< (ESPI_IO_DATA_REG) The DATA register, which is part of the Configuration Port, is used to read or write data to the register currently being selected by the INDEX Register. Offset */
#define ESPI_IO_PC_LAST_CYCLE_DW0_OFFSET (0x100)        /**< (ESPI_IO_PC_LAST_CYCLE_DW0) Peripheral Channel Last Cycle Register (DWord 0) Offset */
#define ESPI_IO_PC_LAST_CYCLE_DW1_OFFSET (0x104)        /**< (ESPI_IO_PC_LAST_CYCLE_DW1) Peripheral Channel Last Cycle Register (DWord 1) Offset */
#define ESPI_IO_PC_LAST_CYCLE_DW2_OFFSET (0x108)        /**< (ESPI_IO_PC_LAST_CYCLE_DW2) Peripheral Channel Last Cycle Register (DWord 2) Offset */
#define ESPI_IO_PC_ERROR_ADDRESS_DW0_OFFSET (0x10C)        /**< (ESPI_IO_PC_ERROR_ADDRESS_DW0) Peripheral Channel Error Address Register (DWord 0) Offset */
#define ESPI_IO_PC_ERROR_ADDRESS_DW1_OFFSET (0x110)        /**< (ESPI_IO_PC_ERROR_ADDRESS_DW1) Peripheral Channel Error Address Register (DWord 1) Offset */
#define ESPI_IO_PC_STATUS_OFFSET     (0x114)        /**< (ESPI_IO_PC_STATUS) Peripheral Channel Status Register Offset */
#define ESPI_IO_PC_INT_ENABLE_OFFSET (0x118)        /**< (ESPI_IO_PC_INT_ENABLE) Peripheral Channel Interrupt Enable Register Offset */
#define ESPI_IO_BAR_INHIBIT_DW0_OFFSET (0x120)        /**< (ESPI_IO_BAR_INHIBIT_DW0) BAR Inhibit Register (DWord 0) Offset */
#define ESPI_IO_BAR_INHIBIT_DW1_OFFSET (0x124)        /**< (ESPI_IO_BAR_INHIBIT_DW1) BAR Inhibit Register (DWord 1) Offset */
#define ESPI_IO_ESPI_BAR_INIT_OFFSET (0x128)        /**< (ESPI_IO_ESPI_BAR_INIT) eSPI BAR Init Register Offset */
#define ESPI_IO_EC_IRQ_OFFSET        (0x12C)        /**< (ESPI_IO_EC_IRQ) EC IRQ Register Offset */
#define ESPI_IO_BASE_ADDRESS_OFFSET  (0x134)        /**< (ESPI_IO_BASE_ADDRESS) eSPI I/O Base Address Register Offset */
#define ESPI_IO_ESPI_MEM_BASE_ADDRESS_OFFSET (0x138)        /**< (ESPI_IO_ESPI_MEM_BASE_ADDRESS) eSPI Memory Base Address Register Offset */
#define ESPI_IO_MBX_BASE_ADDRESS_OFFSET (0x13C)        /**< (ESPI_IO_MBX_BASE_ADDRESS) Mailbox BAR  Register Offset */
#define ESPI_IO_EM8042_BASE_ADDRESS_OFFSET (0x140)        /**< (ESPI_IO_EM8042_BASE_ADDRESS) 8042 Emulated Keyboard Controller BAR Register Offset */
#define ESPI_IO_ACPI_EC_0_BASE_ADDRESS_OFFSET (0x144)        /**< (ESPI_IO_ACPI_EC_0_BASE_ADDRESS) ACPI EC Channel 0 Register Offset */
#define ESPI_IO_ACPI_EC_1_BASE_ADDRESS_OFFSET (0x148)        /**< (ESPI_IO_ACPI_EC_1_BASE_ADDRESS) ACPI EC Channel 1 BAR Register Offset */
#define ESPI_IO_ACPI_EC_2_BASE_ADDRESS_OFFSET (0x14C)        /**< (ESPI_IO_ACPI_EC_2_BASE_ADDRESS) I/O Base Address Register Offset */
#define ESPI_IO_ACPI_EC_3_BASE_ADDRESS_OFFSET (0x150)        /**< (ESPI_IO_ACPI_EC_3_BASE_ADDRESS) I/O Base Address Register Offset */
#define ESPI_IO_ACPI_PM1_BASE_ADDRESS_OFFSET (0x158)        /**< (ESPI_IO_ACPI_PM1_BASE_ADDRESS) I/O Base Address Register Offset */
#define ESPI_IO_FAST_KDB_BASE_ADDRESS_OFFSET (0x15C)        /**< (ESPI_IO_FAST_KDB_BASE_ADDRESS) I/O Base Address Register Offset */
#define ESPI_IO_UART_0_BASE_ADDRESS_OFFSET (0x160)        /**< (ESPI_IO_UART_0_BASE_ADDRESS) I/O Base Address Register Offset */
#define ESPI_IO_UART_1_BASE_ADDRESS_OFFSET (0x164)        /**< (ESPI_IO_UART_1_BASE_ADDRESS) I/O Base Address Register Offset */
#define ESPI_IO_EMI_0_BASE_ADDRESS_OFFSET (0x168)        /**< (ESPI_IO_EMI_0_BASE_ADDRESS) I/O Base Address Register Offset */
#define ESPI_IO_EMI_1_BASE_ADDRESS_OFFSET (0x16C)        /**< (ESPI_IO_EMI_1_BASE_ADDRESS) I/O Base Address Register Offset */
#define ESPI_IO_PORT80_0_BASE_ADDRESS_OFFSET (0x174)        /**< (ESPI_IO_PORT80_0_BASE_ADDRESS) I/O Base Address Register Offset */
#define ESPI_IO_PORT80_1_BASE_ADDRESS_OFFSET (0x178)        /**< (ESPI_IO_PORT80_1_BASE_ADDRESS) I/O Base Address Register Offset */
#define ESPI_IO_RTC_BASE_ADDRESS_OFFSET (0x17C)        /**< (ESPI_IO_RTC_BASE_ADDRESS) I/O Base Address Register Offset */
#define ESPI_IO_UART_2_BASE_ADDRESS_OFFSET (0x188)        /**< (ESPI_IO_UART_2_BASE_ADDRESS) I/O Base Address Register Offset */
#define ESPI_IO_GLUE_BASE_ADDRESS_OFFSET (0x18C)        /**< (ESPI_IO_GLUE_BASE_ADDRESS) I/O Base Address Register Offset */
#define ESPI_IO_LTR_PERIPHERAL_STATUS_OFFSET (0x220)        /**< (ESPI_IO_LTR_PERIPHERAL_STATUS) LTR Peripheral Status Register Offset */
#define ESPI_IO_LTR_PERIPHERAL_ENABLE_OFFSET (0x224)        /**< (ESPI_IO_LTR_PERIPHERAL_ENABLE) LTR Peripheral Enable Register Offset */
#define ESPI_IO_LTR_PERIPHERAL_CONTROL_OFFSET (0x228)        /**< (ESPI_IO_LTR_PERIPHERAL_CONTROL) LTR Peripheral Control Register Offset */
#define ESPI_IO_LTR_PERIPHERAL_MESSAGE_OFFSET (0x22C)        /**< (ESPI_IO_LTR_PERIPHERAL_MESSAGE) LTR Peripheral Message Register Offset */
#define ESPI_IO_OOB_RECEIVE_ADDRESS_OFFSET (0x240)        /**< (ESPI_IO_OOB_RECEIVE_ADDRESS) OOB Channel Receive Address Register Offset */
#define ESPI_IO_OOB_TRANSMIT_ADDRESS_OFFSET (0x248)        /**< (ESPI_IO_OOB_TRANSMIT_ADDRESS) OOB Channel Transmit Address Register Offset */
#define ESPI_IO_OOB_RECEIVE_LENGTH_OFFSET (0x250)        /**< (ESPI_IO_OOB_RECEIVE_LENGTH) OOB Channel Receive Length Register Offset */
#define ESPI_IO_OOB_TRANSMIT_LENGTH_OFFSET (0x254)        /**< (ESPI_IO_OOB_TRANSMIT_LENGTH) OOB Channel Transmit Length Register Offset */
#define ESPI_IO_OOB_RECEIVE_CONTROL_OFFSET (0x258)        /**< (ESPI_IO_OOB_RECEIVE_CONTROL) OOB Channel Receive Control Register Offset */
#define ESPI_IO_OOB_RECEIVE_INT_ENABLE_OFFSET (0x25C)        /**< (ESPI_IO_OOB_RECEIVE_INT_ENABLE) OOB Channel Receive Interrupt Enable Register Offset */
#define ESPI_IO_OOB_RECEIVE_STATUS_OFFSET (0x260)        /**< (ESPI_IO_OOB_RECEIVE_STATUS) OOB Channel Receive Status Register Offset */
#define ESPI_IO_OOB_TRANSMIT_CONTROL_OFFSET (0x264)        /**< (ESPI_IO_OOB_TRANSMIT_CONTROL) OOB Channel Transmit Control Register Offset */
#define ESPI_IO_OOB_TRANSMIT_INT_ENABLE_OFFSET (0x268)        /**< (ESPI_IO_OOB_TRANSMIT_INT_ENABLE) OOB Channel Transmit Interrupt Enable Register Offset */
#define ESPI_IO_OOB_TRANSMIT_STATUS_OFFSET (0x26C)        /**< (ESPI_IO_OOB_TRANSMIT_STATUS) OOB Channel Transmit Status Register Offset */
#define ESPI_IO_FLASH_CH_FLASH_ADDRESS_OFFSET (0x280)        /**< (ESPI_IO_FLASH_CH_FLASH_ADDRESS) Flash Access Channel Flash Address Register Offset */
#define ESPI_IO_FLASH_CH_BUFFER_ADDRESS_OFFSET (0x288)        /**< (ESPI_IO_FLASH_CH_BUFFER_ADDRESS) Flash Access Channel Buffer Address Register Offset */
#define ESPI_IO_FLASH_CH_TRANSFER_LENGTH_OFFSET (0x290)        /**< (ESPI_IO_FLASH_CH_TRANSFER_LENGTH) Flash Access Channel Transfer Length Register Offset */
#define ESPI_IO_FLASH_CH_CONTROL_OFFSET (0x294)        /**< (ESPI_IO_FLASH_CH_CONTROL) Flash Access Channel Control Register Offset */
#define ESPI_IO_FLASH_CH_INT_ENABLE_OFFSET (0x298)        /**< (ESPI_IO_FLASH_CH_INT_ENABLE) Flash Access Channel Interrupt Enable Register Offset */
#define ESPI_IO_FLASH_CH_CONFIG_OFFSET (0x29C)        /**< (ESPI_IO_FLASH_CH_CONFIG) Flash Access Channel Configuration Register Offset */
#define ESPI_IO_FLASH_CH_STATUS_OFFSET (0x2A0)        /**< (ESPI_IO_FLASH_CH_STATUS) Flash Access Channel Status Register Offset */
#define ESPI_IO_VWIRE_STATUS_OFFSET  (0x2B0)        /**< (ESPI_IO_VWIRE_STATUS) Virtual Wire Status Register Offset */
#define ESPI_IO_ESPI_CAPABILITIES_ID_OFFSET (0x2E0)        /**< (ESPI_IO_ESPI_CAPABILITIES_ID) eSPI Capabilities ID Register Offset */
#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0_OFFSET (0x2E1)        /**< (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0) eSPI Capabilities Global Capabilities 0 Register Offset */
#define ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1_OFFSET (0x2E2)        /**< (ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1) eSPI Capabilities Global Capabilities 1 Register Offset */
#define ESPI_IO_ESPI_PC_CAPABILITIES_OFFSET (0x2E3)        /**< (ESPI_IO_ESPI_PC_CAPABILITIES) eSPI Peripheral Channel Capabilities Register Offset */
#define ESPI_IO_ESPI_VWIRE_CAPABILITIES_OFFSET (0x2E4)        /**< (ESPI_IO_ESPI_VWIRE_CAPABILITIES) eSPI Virtual Wire Channel Capabilities Register Offset */
#define ESPI_IO_ESPI_OOB_CAPABILITIES_OFFSET (0x2E5)        /**< (ESPI_IO_ESPI_OOB_CAPABILITIES) eSPI OOB Channel Capabilities Register Offset */
#define ESPI_IO_ESPI_FLASH_CAPABILITIES_OFFSET (0x2E6)        /**< (ESPI_IO_ESPI_FLASH_CAPABILITIES) eSPI Flash Channel Capabilities Register Offset */
#define ESPI_IO_ESPI_PERIPHERAL_READY_OFFSET (0x2E7)        /**< (ESPI_IO_ESPI_PERIPHERAL_READY) eSPI Peripheral Channel Ready Register Offset */
#define ESPI_IO_ESPI_OOB_READY_OFFSET (0x2E8)        /**< (ESPI_IO_ESPI_OOB_READY) eSPI OOB Channel Ready Register Offset */
#define ESPI_IO_ESPI_FLASH_READY_OFFSET (0x2E9)        /**< (ESPI_IO_ESPI_FLASH_READY) eSPI Flash Channel Ready Register Offset */
#define ESPI_IO_ESPI_RESET_INT_STATUS_OFFSET (0x2EA)        /**< (ESPI_IO_ESPI_RESET_INT_STATUS) eSPI Reset Interrupt Status Register Offset */
#define ESPI_IO_ESPI_RESET_INT_ENABLE_OFFSET (0x2EB)        /**< (ESPI_IO_ESPI_RESET_INT_ENABLE) eSPI Reset Interrupt Enable Register Offset */
#define ESPI_IO_PLTRST_SOURCE_OFFSET (0x2EC)        /**< (ESPI_IO_PLTRST_SOURCE) PLTRST Source Register Offset */
#define ESPI_IO_ESPI_VWIRE_READY_OFFSET (0x2ED)        /**< (ESPI_IO_ESPI_VWIRE_READY) eSPI Virtual Wire Channel Ready Register Offset */
#define ESPI_IO_ESPI_ACTIVATE_OFFSET (0x330)        /**< (ESPI_IO_ESPI_ACTIVATE) eSPI Activate Register Offset */
#define ESPI_IO_BAR_CONFIG_ADDRESS_OFFSET (0x334)        /**< (ESPI_IO_BAR_CONFIG_ADDRESS) eSPI I/O Base Address Configuration Register Offset */
#define ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS_OFFSET (0x338)        /**< (ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS) eSPI Memory Base Address Configuration Register Offset */
#define ESPI_IO_MBX_BAR_CONFIG_ADDRESS_OFFSET (0x33C)        /**< (ESPI_IO_MBX_BAR_CONFIG_ADDRESS) Mailbox Base Address Configuration Register Offset */
#define ESPI_IO_EM8042_BAR_CONFIG_ADDRESS_OFFSET (0x340)        /**< (ESPI_IO_EM8042_BAR_CONFIG_ADDRESS) 8042 Emulated Keyboard Controller Base Address Configuration Register Offset */
#define ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS_OFFSET (0x344)        /**< (ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS) ACPI EC 0 Base Address Configuration Register Offset */
#define ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS_OFFSET (0x348)        /**< (ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS) ACPI EC 1 Base Address Configuration Register Offset */
#define ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS_OFFSET (0x34C)        /**< (ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS) ACPI EC 2 Base Address Configuration Register Offset */
#define ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS_OFFSET (0x350)        /**< (ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS) ACPI EC 3 Base Address Configuration Register Offset */
#define ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS_OFFSET (0x358)        /**< (ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS) ACPI PM1 Base Address Configuration Register Offset */
#define ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS_OFFSET (0x35C)        /**< (ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS) I/O Base Address Configuration Register Offset */
#define ESPI_IO_UART_0_BAR_CONFIG_ADDRESS_OFFSET (0x360)        /**< (ESPI_IO_UART_0_BAR_CONFIG_ADDRESS) UART 0 Base Address Configuration Register Offset */
#define ESPI_IO_UART_1_BAR_CONFIG_ADDRESS_OFFSET (0x364)        /**< (ESPI_IO_UART_1_BAR_CONFIG_ADDRESS) UART 1 Base Address Configuration Register Offset */
#define ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS_OFFSET (0x368)        /**< (ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS) Embedded Memory Interface (EMI) 2 BAR Config Register Offset */
#define ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS_OFFSET (0x36C)        /**< (ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS) Embedded Memory Interface (EMI) 1 BAR Config Register Offset */
#define ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS_OFFSET (0x374)        /**< (ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS) BIOS Debug Port (Port 80) 0 BAR Config Register Offset */
#define ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS_OFFSET (0x378)        /**< (ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS) BIOS Debug Port (Port 80) 1 BAR Config Register Offset */
#define ESPI_IO_RTC_BAR_CONFIG_ADDRESS_OFFSET (0x37C)        /**< (ESPI_IO_RTC_BAR_CONFIG_ADDRESS) RTC BAR Config Register Offset */
#define ESPI_IO_UART_2_BAR_CONFIG_ADDRESS_OFFSET (0x384)        /**< (ESPI_IO_UART_2_BAR_CONFIG_ADDRESS) UART 2 Base Address Configuration Register Offset */
#define ESPI_IO_GLUE_BAR_CONFIG_ADDRESS_OFFSET (0x38C)        /**< (ESPI_IO_GLUE_BAR_CONFIG_ADDRESS) GLUE Base Address Configuration Register Offset */
#define ESPI_IO_MBX_HOST_SIRQ_IRQ__SELECT_OFFSET (0x3AC)        /**< (ESPI_IO_MBX_HOST_SIRQ_IRQ__SELECT) Mailbox (MBX_Host_SIRQ Interrupt) Selection Register Offset */
#define ESPI_IO_MBX_HOST_SMI_IRQ_SELECT_OFFSET (0x3AD)        /**< (ESPI_IO_MBX_HOST_SMI_IRQ_SELECT) Mailbox (MBX_Host_SMI Interrupt) Selection Register Offset */
#define ESPI_IO_KIRQ_8042_IRQ_SELECT_OFFSET (0x3AE)        /**< (ESPI_IO_KIRQ_8042_IRQ_SELECT) 8042 (KIRQ Interrupt) Selection Register Offset */
#define ESPI_IO_MIRQ_8042_IRQ_SELECT_OFFSET (0x3AF)        /**< (ESPI_IO_MIRQ_8042_IRQ_SELECT) 8042 (MIRQ Interrupt) Selection Register Offset */
#define ESPI_IO_ACPI_EC_0_OBF_IRQ_SELECT_OFFSET (0x3B0)        /**< (ESPI_IO_ACPI_EC_0_OBF_IRQ_SELECT) ACPI EC 0 (EC_OBF Interrupt) Selection Register Offset */
#define ESPI_IO_ACPI_EC_1_OBF_IRQ_SELECT_OFFSET (0x3B1)        /**< (ESPI_IO_ACPI_EC_1_OBF_IRQ_SELECT) ACPI EC 1 (EC_OBF Interrupt) Selection Register Offset */
#define ESPI_IO_ACPI_EC_2_OBF_IRQ_SELECT_OFFSET (0x3B2)        /**< (ESPI_IO_ACPI_EC_2_OBF_IRQ_SELECT) ACPI EC 2 (EC_OBF Interrupt) Selection Register Offset */
#define ESPI_IO_ACPI_EC_3_OBF_IRQ_SELECT_OFFSET (0x3B3)        /**< (ESPI_IO_ACPI_EC_3_OBF_IRQ_SELECT) ACPI EC 3 (EC_OBF Interrupt) Selection Register Offset */
#define ESPI_IO_UART_0_IRQ_SELECT_OFFSET (0x3B5)        /**< (ESPI_IO_UART_0_IRQ_SELECT) UART 0 (UART Interrupt) Selection Register Offset */
#define ESPI_IO_UART_1_IRQ_SELECT_OFFSET (0x3B6)        /**< (ESPI_IO_UART_1_IRQ_SELECT) UART 1 (UART Interrupt) Selection Register Offset */
#define ESPI_IO_EMI_0_HOST_IRQ_SELECT_OFFSET (0x3B7)        /**< (ESPI_IO_EMI_0_HOST_IRQ_SELECT) EMI 0 (Host Event Interrupt) Selection Register Offset */
#define ESPI_IO_EMI_0_EC_HOST_IRQ_SELECT_OFFSET (0x3B8)        /**< (ESPI_IO_EMI_0_EC_HOST_IRQ_SELECT) EMI 0 (EC-to-Host Interrupt) Selection Register Offset */
#define ESPI_IO_EMI_1_HOST_IRQ_SELECT_OFFSET (0x3B9)        /**< (ESPI_IO_EMI_1_HOST_IRQ_SELECT) EMI 1 (Host Event Interrupt) Selection Register Offset */
#define ESPI_IO_EMI_1_EC_HOST_IRQ_SELECT_OFFSET (0x3BA)        /**< (ESPI_IO_EMI_1_EC_HOST_IRQ_SELECT) EMI 1 (EC-to-Host Interrupt) Selection Register Offset */
#define ESPI_IO_RTC_IRQ_SELECT_OFFSET (0x3BD)        /**< (ESPI_IO_RTC_IRQ_SELECT) RTC (RTC Interrupt) Selection Register Offset */
#define ESPI_IO_EC_IRQ_SELECT_OFFSET (0x3BE)        /**< (ESPI_IO_EC_IRQ_SELECT) EC (EC_IRQ Interrupt) Selection Register Offset */
#define ESPI_IO_UART_2_IRQ_SELECT_OFFSET (0x3BF)        /**< (ESPI_IO_UART_2_IRQ_SELECT) UART 2 (UART Interrupt) Selection Register Offset */
#define ESPI_IO_ESPI_VWIRE_ERRORS_OFFSET (0x3F0)        /**< (ESPI_IO_ESPI_VWIRE_ERRORS) eSPI Virtual Wire Errors Register Offset */

/** \brief ESPI_IO register API structure */
typedef struct
{  /* The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. */
  __IO  __ESPI_IO_INDEX_bits_t         INDEX;         /**< Offset: 0x00 (R/W   8) The INDEX register, which is part of the Configuration Port, is used as a pointer to a Configuration Register Address. */
  __IO  __ESPI_IO_DATA_REG_bits_t      DATA_REG;      /**< Offset: 0x01 (R/W   8) The DATA register, which is part of the Configuration Port, is used to read or write data to the register currently being selected by the INDEX Register. */
  __I   __ESPI_IO_PC_LAST_CYCLE_DW0_bits_t PC_LAST_CYCLE_DW0; /**< Offset: 0x100 (R/   32) Peripheral Channel Last Cycle Register (DWord 0) */
  __I   __ESPI_IO_PC_LAST_CYCLE_DW1_bits_t PC_LAST_CYCLE_DW1; /**< Offset: 0x104 (R/   32) Peripheral Channel Last Cycle Register (DWord 1) */
  __I   __ESPI_IO_PC_LAST_CYCLE_DW2_bits_t PC_LAST_CYCLE_DW2; /**< Offset: 0x108 (R/   32) Peripheral Channel Last Cycle Register (DWord 2) */
  __I   __ESPI_IO_PC_ERROR_ADDRESS_DW0_bits_t PC_ERROR_ADDRESS_DW0; /**< Offset: 0x10C (R/   32) Peripheral Channel Error Address Register (DWord 0) */
  __I   __ESPI_IO_PC_ERROR_ADDRESS_DW1_bits_t PC_ERROR_ADDRESS_DW1; /**< Offset: 0x110 (R/   32) Peripheral Channel Error Address Register (DWord 1) */
  __IO  __ESPI_IO_PC_STATUS_bits_t     PC_STATUS;     /**< Offset: 0x114 (R/W  32) Peripheral Channel Status Register */
  __IO  __ESPI_IO_PC_INT_ENABLE_bits_t PC_INT_ENABLE; /**< Offset: 0x118 (R/W  32) Peripheral Channel Interrupt Enable Register */
  __IO  __ESPI_IO_BAR_INHIBIT_DW0_bits_t BAR_INHIBIT_DW0; /**< Offset: 0x120 (R/W  32) BAR Inhibit Register (DWord 0) */
  __IO  __ESPI_IO_BAR_INHIBIT_DW1_bits_t BAR_INHIBIT_DW1; /**< Offset: 0x124 (R/W  32) BAR Inhibit Register (DWord 1) */
  __IO  __ESPI_IO_ESPI_BAR_INIT_bits_t ESPI_BAR_INIT; /**< Offset: 0x128 (R/W  32) eSPI BAR Init Register */
  __IO  __ESPI_IO_EC_IRQ_bits_t        EC_IRQ;        /**< Offset: 0x12C (R/W  32) EC IRQ Register */
  __IO  __ESPI_IO_BASE_ADDRESS_bits_t  ESPI_IO_BASE_ADDRESS; /**< Offset: 0x134 (R/W  32) eSPI I/O Base Address Register */
  __IO  __ESPI_IO_ESPI_MEM_BASE_ADDRESS_bits_t ESPI_MEM_BASE_ADDRESS; /**< Offset: 0x138 (R/W  32) eSPI Memory Base Address Register */
  __IO  __ESPI_IO_MBX_BASE_ADDRESS_bits_t MBX_BASE_ADDRESS; /**< Offset: 0x13C (R/W  32) Mailbox BAR  Register */
  __IO  __ESPI_IO_EM8042_BASE_ADDRESS_bits_t EM8042_BASE_ADDRESS; /**< Offset: 0x140 (R/W  32) 8042 Emulated Keyboard Controller BAR Register */
  __IO  __ESPI_IO_ACPI_EC_0_BASE_ADDRESS_bits_t ACPI_EC_0_BASE_ADDRESS; /**< Offset: 0x144 (R/W  32) ACPI EC Channel 0 Register */
  __IO  __ESPI_IO_ACPI_EC_1_BASE_ADDRESS_bits_t ACPI_EC_1_BASE_ADDRESS; /**< Offset: 0x148 (R/W  32) ACPI EC Channel 1 BAR Register */
  __IO  __ESPI_IO_ACPI_EC_2_BASE_ADDRESS_bits_t ACPI_EC_2_BASE_ADDRESS; /**< Offset: 0x14C (R/W  32) I/O Base Address Register */
  __IO  __ESPI_IO_ACPI_EC_3_BASE_ADDRESS_bits_t ACPI_EC_3_BASE_ADDRESS; /**< Offset: 0x150 (R/W  32) I/O Base Address Register */
  __IO  __ESPI_IO_ACPI_PM1_BASE_ADDRESS_bits_t ACPI_PM1_BASE_ADDRESS; /**< Offset: 0x158 (R/W  32) I/O Base Address Register */
  __IO  __ESPI_IO_FAST_KDB_BASE_ADDRESS_bits_t FAST_KDB_BASE_ADDRESS; /**< Offset: 0x15C (R/W  32) I/O Base Address Register */
  __IO  __ESPI_IO_UART_0_BASE_ADDRESS_bits_t UART_0_BASE_ADDRESS; /**< Offset: 0x160 (R/W  32) I/O Base Address Register */
  __IO  __ESPI_IO_UART_1_BASE_ADDRESS_bits_t UART_1_BASE_ADDRESS; /**< Offset: 0x164 (R/W  32) I/O Base Address Register */
  __IO  __ESPI_IO_EMI_0_BASE_ADDRESS_bits_t EMI_0_BASE_ADDRESS; /**< Offset: 0x168 (R/W  32) I/O Base Address Register */
  __IO  __ESPI_IO_EMI_1_BASE_ADDRESS_bits_t EMI_1_BASE_ADDRESS; /**< Offset: 0x16C (R/W  32) I/O Base Address Register */
  __IO  __ESPI_IO_PORT80_0_BASE_ADDRESS_bits_t PORT80_0_BASE_ADDRESS; /**< Offset: 0x174 (R/W  32) I/O Base Address Register */
  __IO  __ESPI_IO_PORT80_1_BASE_ADDRESS_bits_t PORT80_1_BASE_ADDRESS; /**< Offset: 0x178 (R/W  32) I/O Base Address Register */
  __IO  __ESPI_IO_RTC_BASE_ADDRESS_bits_t RTC_BASE_ADDRESS; /**< Offset: 0x17C (R/W  32) I/O Base Address Register */
  __IO  __ESPI_IO_UART_2_BASE_ADDRESS_bits_t UART_2_BASE_ADDRESS; /**< Offset: 0x188 (R/W  32) I/O Base Address Register */
  __IO  __ESPI_IO_GLUE_BASE_ADDRESS_bits_t GLUE_BASE_ADDRESS; /**< Offset: 0x18C (R/W  32) I/O Base Address Register */
  __IO  __ESPI_IO_LTR_PERIPHERAL_STATUS_bits_t LTR_PERIPHERAL_STATUS; /**< Offset: 0x220 (R/W  32) LTR Peripheral Status Register */
  __IO  __ESPI_IO_LTR_PERIPHERAL_ENABLE_bits_t LTR_PERIPHERAL_ENABLE; /**< Offset: 0x224 (R/W  32) LTR Peripheral Enable Register */
  __IO  __ESPI_IO_LTR_PERIPHERAL_CONTROL_bits_t LTR_PERIPHERAL_CONTROL; /**< Offset: 0x228 (R/W  32) LTR Peripheral Control Register */
  __IO  __ESPI_IO_LTR_PERIPHERAL_MESSAGE_bits_t LTR_PERIPHERAL_MESSAGE; /**< Offset: 0x22C (R/W  32) LTR Peripheral Message Register */
  __IO  __ESPI_IO_OOB_RECEIVE_ADDRESS_bits_t OOB_RECEIVE_ADDRESS; /**< Offset: 0x240 (R/W  32) OOB Channel Receive Address Register */
  __IO  __ESPI_IO_OOB_TRANSMIT_ADDRESS_bits_t OOB_TRANSMIT_ADDRESS; /**< Offset: 0x248 (R/W  32) OOB Channel Transmit Address Register */
  __IO  __ESPI_IO_OOB_RECEIVE_LENGTH_bits_t OOB_RECEIVE_LENGTH; /**< Offset: 0x250 (R/W  32) OOB Channel Receive Length Register */
  __IO  __ESPI_IO_OOB_TRANSMIT_LENGTH_bits_t OOB_TRANSMIT_LENGTH; /**< Offset: 0x254 (R/W  32) OOB Channel Transmit Length Register */
  __IO  __ESPI_IO_OOB_RECEIVE_CONTROL_bits_t OOB_RECEIVE_CONTROL; /**< Offset: 0x258 (R/W  32) OOB Channel Receive Control Register */
  __IO  __ESPI_IO_OOB_RECEIVE_INT_ENABLE_bits_t OOB_RECEIVE_INT_ENABLE; /**< Offset: 0x25C (R/W  32) OOB Channel Receive Interrupt Enable Register */
  __IO  __ESPI_IO_OOB_RECEIVE_STATUS_bits_t OOB_RECEIVE_STATUS; /**< Offset: 0x260 (R/W  32) OOB Channel Receive Status Register */
  __IO  __ESPI_IO_OOB_TRANSMIT_CONTROL_bits_t OOB_TRANSMIT_CONTROL; /**< Offset: 0x264 (R/W  32) OOB Channel Transmit Control Register */
  __IO  __ESPI_IO_OOB_TRANSMIT_INT_ENABLE_bits_t OOB_TRANSMIT_INT_ENABLE; /**< Offset: 0x268 (R/W  32) OOB Channel Transmit Interrupt Enable Register */
  __IO  __ESPI_IO_OOB_TRANSMIT_STATUS_bits_t OOB_TRANSMIT_STATUS; /**< Offset: 0x26C (R/W  32) OOB Channel Transmit Status Register */
  __IO  __ESPI_IO_FLASH_CH_FLASH_ADDRESS_bits_t FLASH_CH_FLASH_ADDRESS; /**< Offset: 0x280 (R/W  32) Flash Access Channel Flash Address Register */
  __IO  __ESPI_IO_FLASH_CH_BUFFER_ADDRESS_bits_t FLASH_CH_BUFFER_ADDRESS; /**< Offset: 0x288 (R/W  32) Flash Access Channel Buffer Address Register */
  __IO  __ESPI_IO_FLASH_CH_TRANSFER_LENGTH_bits_t FLASH_CH_TRANSFER_LENGTH; /**< Offset: 0x290 (R/W  32) Flash Access Channel Transfer Length Register */
  __IO  __ESPI_IO_FLASH_CH_CONTROL_bits_t FLASH_CH_CONTROL; /**< Offset: 0x294 (R/W  32) Flash Access Channel Control Register */
  __IO  __ESPI_IO_FLASH_CH_INT_ENABLE_bits_t FLASH_CH_INT_ENABLE; /**< Offset: 0x298 (R/W  32) Flash Access Channel Interrupt Enable Register */
  __I   __ESPI_IO_FLASH_CH_CONFIG_bits_t FLASH_CH_CONFIG; /**< Offset: 0x29C (R/   32) Flash Access Channel Configuration Register */
  __IO  __ESPI_IO_FLASH_CH_STATUS_bits_t FLASH_CH_STATUS; /**< Offset: 0x2A0 (R/W  32) Flash Access Channel Status Register */
  __I   __ESPI_IO_VWIRE_STATUS_bits_t  VWIRE_STATUS;  /**< Offset: 0x2B0 (R/    8) Virtual Wire Status Register */
  __IO  __ESPI_IO_ESPI_CAPABILITIES_ID_bits_t ESPI_CAPABILITIES_ID; /**< Offset: 0x2E0 (R/W   8) eSPI Capabilities ID Register */
  __IO  __ESPI_IO_ESPI_GLOBAL_CAPABILITIES_0_bits_t ESPI_GLOBAL_CAPABILITIES_0; /**< Offset: 0x2E1 (R/W   8) eSPI Capabilities Global Capabilities 0 Register */
  __IO  __ESPI_IO_ESPI_GLOBAL_CAPABILITIES_1_bits_t ESPI_GLOBAL_CAPABILITIES_1; /**< Offset: 0x2E2 (R/W   8) eSPI Capabilities Global Capabilities 1 Register */
  __IO  __ESPI_IO_ESPI_PC_CAPABILITIES_bits_t ESPI_PC_CAPABILITIES; /**< Offset: 0x2E3 (R/W   8) eSPI Peripheral Channel Capabilities Register */
  __IO  __ESPI_IO_ESPI_VWIRE_CAPABILITIES_bits_t ESPI_VWIRE_CAPABILITIES; /**< Offset: 0x2E4 (R/W   8) eSPI Virtual Wire Channel Capabilities Register */
  __IO  __ESPI_IO_ESPI_OOB_CAPABILITIES_bits_t ESPI_OOB_CAPABILITIES; /**< Offset: 0x2E5 (R/W   8) eSPI OOB Channel Capabilities Register */
  __IO  __ESPI_IO_ESPI_FLASH_CAPABILITIES_bits_t ESPI_FLASH_CAPABILITIES; /**< Offset: 0x2E6 (R/W   8) eSPI Flash Channel Capabilities Register */
  __IO  __ESPI_IO_ESPI_PERIPHERAL_READY_bits_t ESPI_PERIPHERAL_READY; /**< Offset: 0x2E7 (R/W   8) eSPI Peripheral Channel Ready Register */
  __IO  __ESPI_IO_ESPI_OOB_READY_bits_t ESPI_OOB_READY; /**< Offset: 0x2E8 (R/W   8) eSPI OOB Channel Ready Register */
  __IO  __ESPI_IO_ESPI_FLASH_READY_bits_t ESPI_FLASH_READY; /**< Offset: 0x2E9 (R/W   8) eSPI Flash Channel Ready Register */
  __IO  __ESPI_IO_ESPI_RESET_INT_STATUS_bits_t ESPI_RESET_INT_STATUS; /**< Offset: 0x2EA (R/W   8) eSPI Reset Interrupt Status Register */
  __IO  __ESPI_IO_ESPI_RESET_INT_ENABLE_bits_t ESPI_RESET_INT_ENABLE; /**< Offset: 0x2EB (R/W   8) eSPI Reset Interrupt Enable Register */
  __IO  __ESPI_IO_PLTRST_SOURCE_bits_t PLTRST_SOURCE; /**< Offset: 0x2EC (R/W   8) PLTRST Source Register */
  __IO  __ESPI_IO_ESPI_VWIRE_READY_bits_t ESPI_VWIRE_READY; /**< Offset: 0x2ED (R/W   8) eSPI Virtual Wire Channel Ready Register */
  __IO  __ESPI_IO_ESPI_ACTIVATE_bits_t ESPI_ACTIVATE; /**< Offset: 0x330 (R/W   8) eSPI Activate Register */
  __IO  __ESPI_IO_BAR_CONFIG_ADDRESS_bits_t ESPI_IO_BAR_CONFIG_ADDRESS; /**< Offset: 0x334 (R/W  32) eSPI I/O Base Address Configuration Register */
  __IO  __ESPI_IO_ESPI_MEM_BAR_CONFIG_ADDRESS_bits_t ESPI_MEM_BAR_CONFIG_ADDRESS; /**< Offset: 0x338 (R/W  32) eSPI Memory Base Address Configuration Register */
  __IO  __ESPI_IO_MBX_BAR_CONFIG_ADDRESS_bits_t MBX_BAR_CONFIG_ADDRESS; /**< Offset: 0x33C (R/W  32) Mailbox Base Address Configuration Register */
  __IO  __ESPI_IO_EM8042_BAR_CONFIG_ADDRESS_bits_t EM8042_BAR_CONFIG_ADDRESS; /**< Offset: 0x340 (R/W  32) 8042 Emulated Keyboard Controller Base Address Configuration Register */
  __IO  __ESPI_IO_ACPI_EC_0_BAR_CONFIG_ADDRESS_bits_t ACPI_EC_0_BAR_CONFIG_ADDRESS; /**< Offset: 0x344 (R/W  32) ACPI EC 0 Base Address Configuration Register */
  __IO  __ESPI_IO_ACPI_EC_1_BAR_CONFIG_ADDRESS_bits_t ACPI_EC_1_BAR_CONFIG_ADDRESS; /**< Offset: 0x348 (R/W  32) ACPI EC 1 Base Address Configuration Register */
  __IO  __ESPI_IO_ACPI_EC_2_BAR_CONFIG_ADDRESS_bits_t ACPI_EC_2_BAR_CONFIG_ADDRESS; /**< Offset: 0x34C (R/W  32) ACPI EC 2 Base Address Configuration Register */
  __IO  __ESPI_IO_ACPI_EC_3_BAR_CONFIG_ADDRESS_bits_t ACPI_EC_3_BAR_CONFIG_ADDRESS; /**< Offset: 0x350 (R/W  32) ACPI EC 3 Base Address Configuration Register */
  __IO  __ESPI_IO_ACPI_PM1_BAR_CONFIG_ADDRESS_bits_t ACPI_PM1_BAR_CONFIG_ADDRESS; /**< Offset: 0x358 (R/W  32) ACPI PM1 Base Address Configuration Register */
  __IO  __ESPI_IO_FAST_KBD_BAR_CONFIG_ADDRESS_bits_t FAST_KBD_BAR_CONFIG_ADDRESS; /**< Offset: 0x35C (R/W  32) I/O Base Address Configuration Register */
  __IO  __ESPI_IO_UART_0_BAR_CONFIG_ADDRESS_bits_t UART_0_BAR_CONFIG_ADDRESS; /**< Offset: 0x360 (R/W  32) UART 0 Base Address Configuration Register */
  __IO  __ESPI_IO_UART_1_BAR_CONFIG_ADDRESS_bits_t UART_1_BAR_CONFIG_ADDRESS; /**< Offset: 0x364 (R/W  32) UART 1 Base Address Configuration Register */
  __IO  __ESPI_IO_EMI_0_BAR_CONFIG_ADDRESS_bits_t EMI_0_BAR_CONFIG_ADDRESS; /**< Offset: 0x368 (R/W  32) Embedded Memory Interface (EMI) 2 BAR Config Register */
  __IO  __ESPI_IO_EMI_1_BAR_CONFIG_ADDRESS_bits_t EMI_1_BAR_CONFIG_ADDRESS; /**< Offset: 0x36C (R/W  32) Embedded Memory Interface (EMI) 1 BAR Config Register */
  __IO  __ESPI_IO_PORT80_0_BAR_CONFIG_ADDRESS_bits_t PORT80_0_BAR_CONFIG_ADDRESS; /**< Offset: 0x374 (R/W  32) BIOS Debug Port (Port 80) 0 BAR Config Register */
  __IO  __ESPI_IO_PORT80_1_BAR_CONFIG_ADDRESS_bits_t PORT80_1_BAR_CONFIG_ADDRESS; /**< Offset: 0x378 (R/W  32) BIOS Debug Port (Port 80) 1 BAR Config Register */
  __IO  __ESPI_IO_RTC_BAR_CONFIG_ADDRESS_bits_t RTC_BAR_CONFIG_ADDRESS; /**< Offset: 0x37C (R/W  32) RTC BAR Config Register */
  __IO  __ESPI_IO_UART_2_BAR_CONFIG_ADDRESS_bits_t UART_2_BAR_CONFIG_ADDRESS; /**< Offset: 0x384 (R/W  32) UART 2 Base Address Configuration Register */
  __IO  __ESPI_IO_GLUE_BAR_CONFIG_ADDRESS_bits_t GLUE_BAR_CONFIG_ADDRESS; /**< Offset: 0x38C (R/W  32) GLUE Base Address Configuration Register */
  __IO  __ESPI_IO_MBX_HOST_SIRQ_IRQ__SELECT_bits_t MBX_HOST_SIRQ_IRQ__SELECT; /**< Offset: 0x3AC (R/W   8) Mailbox (MBX_Host_SIRQ Interrupt) Selection Register */
  __IO  __ESPI_IO_MBX_HOST_SMI_IRQ_SELECT_bits_t MBX_HOST_SMI_IRQ_SELECT; /**< Offset: 0x3AD (R/W   8) Mailbox (MBX_Host_SMI Interrupt) Selection Register */
  __IO  __ESPI_IO_KIRQ_8042_IRQ_SELECT_bits_t KIRQ_8042_IRQ_SELECT; /**< Offset: 0x3AE (R/W   8) 8042 (KIRQ Interrupt) Selection Register */
  __IO  __ESPI_IO_MIRQ_8042_IRQ_SELECT_bits_t MIRQ_8042_IRQ_SELECT; /**< Offset: 0x3AF (R/W   8) 8042 (MIRQ Interrupt) Selection Register */
  __IO  __ESPI_IO_ACPI_EC_0_OBF_IRQ_SELECT_bits_t ACPI_EC_0_OBF_IRQ_SELECT; /**< Offset: 0x3B0 (R/W   8) ACPI EC 0 (EC_OBF Interrupt) Selection Register */
  __IO  __ESPI_IO_ACPI_EC_1_OBF_IRQ_SELECT_bits_t ACPI_EC_1_OBF_IRQ_SELECT; /**< Offset: 0x3B1 (R/W   8) ACPI EC 1 (EC_OBF Interrupt) Selection Register */
  __IO  __ESPI_IO_ACPI_EC_2_OBF_IRQ_SELECT_bits_t ACPI_EC_2_OBF_IRQ_SELECT; /**< Offset: 0x3B2 (R/W   8) ACPI EC 2 (EC_OBF Interrupt) Selection Register */
  __IO  __ESPI_IO_ACPI_EC_3_OBF_IRQ_SELECT_bits_t ACPI_EC_3_OBF_IRQ_SELECT; /**< Offset: 0x3B3 (R/W   8) ACPI EC 3 (EC_OBF Interrupt) Selection Register */
  __IO  __ESPI_IO_UART_0_IRQ_SELECT_bits_t UART_0_IRQ_SELECT; /**< Offset: 0x3B5 (R/W   8) UART 0 (UART Interrupt) Selection Register */
  __IO  __ESPI_IO_UART_1_IRQ_SELECT_bits_t UART_1_IRQ_SELECT; /**< Offset: 0x3B6 (R/W   8) UART 1 (UART Interrupt) Selection Register */
  __IO  __ESPI_IO_EMI_0_HOST_IRQ_SELECT_bits_t EMI_0_HOST_IRQ_SELECT; /**< Offset: 0x3B7 (R/W   8) EMI 0 (Host Event Interrupt) Selection Register */
  __IO  __ESPI_IO_EMI_0_EC_HOST_IRQ_SELECT_bits_t EMI_0_EC_HOST_IRQ_SELECT; /**< Offset: 0x3B8 (R/W   8) EMI 0 (EC-to-Host Interrupt) Selection Register */
  __IO  __ESPI_IO_EMI_1_HOST_IRQ_SELECT_bits_t EMI_1_HOST_IRQ_SELECT; /**< Offset: 0x3B9 (R/W   8) EMI 1 (Host Event Interrupt) Selection Register */
  __IO  __ESPI_IO_EMI_1_EC_HOST_IRQ_SELECT_bits_t EMI_1_EC_HOST_IRQ_SELECT; /**< Offset: 0x3BA (R/W   8) EMI 1 (EC-to-Host Interrupt) Selection Register */
  __IO  __ESPI_IO_RTC_IRQ_SELECT_bits_t RTC_IRQ_SELECT; /**< Offset: 0x3BD (R/W   8) RTC (RTC Interrupt) Selection Register */
  __IO  __ESPI_IO_EC_IRQ_SELECT_bits_t EC_IRQ_SELECT; /**< Offset: 0x3BE (R/W   8) EC (EC_IRQ Interrupt) Selection Register */
  __IO  __ESPI_IO_UART_2_IRQ_SELECT_bits_t UART_2_IRQ_SELECT; /**< Offset: 0x3BF (R/W   8) UART 2 (UART Interrupt) Selection Register */
  __IO  __ESPI_IO_ESPI_VWIRE_ERRORS_bits_t ESPI_VWIRE_ERRORS; /**< Offset: 0x3F0 (R/W   8) eSPI Virtual Wire Errors Register */
} espiio_registers_t;
/** @}  end of The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. */

#endif /* _PIC32CX_0525SG12_ESPI_IO_COMPONENT_H_ */
