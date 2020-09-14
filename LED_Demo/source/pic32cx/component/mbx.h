/**
 * \brief Component description for PIC32CX/0525SG12 MBX
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
#ifndef _PIC32CX_0525SG12_MBX_COMPONENT_H_
#define _PIC32CX_0525SG12_MBX_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_MBX The Mailbox provides a standard run-time mechanism for the host to communicate with the Embedded Controller (EC).
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR MBX */
/* ========================================================================== */

/* -------- MBX_INDEX : (MBX Offset: 0x00) (R/W 8) MBX_Index Register -------- */

typedef union
{
  uint8_t  w;
} __MBX_INDEX_bits_t;
#define MBX_INDEX_RESETVALUE                (0x00U)                                       /**<  (MBX_INDEX) MBX_Index Register  Reset Value */

#define MBX_INDEX_Msk                         (0x00000000UL)                                 /**< (MBX_INDEX) Register Mask  */

/* -------- MBX_DATA_REG : (MBX Offset: 0x01) (R/W 8) MBX_Data_Register -------- */

typedef union
{
  uint8_t  w;
} __MBX_DATA_REG_bits_t;
#define MBX_DATA_REG_RESETVALUE             (0x00U)                                       /**<  (MBX_DATA_REG) MBX_Data_Register  Reset Value */

#define MBX_DATA_REG_Msk                      (0x00000000UL)                                 /**< (MBX_DATA_REG) Register Mask  */

/* -------- MBX_HOST_TO_EC : (MBX Offset: 0x100) (R/W 32) If enabled, an interrupt to the EC marked by the MBX_DATA bit in the Interrupt Aggregator will be generated whenever the Host writes this register. This register is cleared when written with FFh. -------- */

typedef union
{
  uint32_t w;
} __MBX_HOST_TO_EC_bits_t;
#define MBX_HOST_TO_EC_RESETVALUE           (0x00U)                                       /**<  (MBX_HOST_TO_EC) If enabled, an interrupt to the EC marked by the MBX_DATA bit in the Interrupt Aggregator will be generated whenever the Host writes this register. This register is cleared when written with FFh.  Reset Value */

#define MBX_HOST_TO_EC_Msk                    (0x00000000UL)                                 /**< (MBX_HOST_TO_EC) Register Mask  */

/* -------- MBX_EC_TO_HOST : (MBX Offset: 0x104) (R/W 8) An EC write to this register will set bit EC_WR in the SMI Interrupt Source Register to '1b'. If enabled, this will generate a Host SMI. This register is cleared when written with FFh. -------- */

typedef union
{
  uint8_t  w;
} __MBX_EC_TO_HOST_bits_t;
#define MBX_EC_TO_HOST_RESETVALUE           (0x00U)                                       /**<  (MBX_EC_TO_HOST) An EC write to this register will set bit EC_WR in the SMI Interrupt Source Register to '1b'. If enabled, this will generate a Host SMI. This register is cleared when written with FFh.  Reset Value */

#define MBX_EC_TO_HOST_Msk                    (0x00000000UL)                                 /**< (MBX_EC_TO_HOST) Register Mask  */

/* -------- MBX_SMI_SOURCE : (MBX Offset: 0x108) (R/W 32) SMI Interrupt Source Register -------- */

typedef union
{
  struct
  {
    uint32_t EC_WR:1;                   /**< bit:      0  EC Mailbox Write. This bit is set automatically when the EC-to-Host Mailbox Register has been written. An SMI or SIRQ\n      to the Host is generated when n this bit is '1b' and the corresponding bit in the SMI Interrupt Mask Register register is '1b'.\n      This bit is automatically cleared by a read of the EC-to-Host Mailbox Register through the Host Access Port. */
    uint32_t EC_SWI:7;                  /**< bit:   1..7  EC Software Interrupt. An SIRQ to the Host is generated when any bit in this register when this bit is set to '1b' and\n      the corresponding bit in the SMI Interrupt Mask Register register is '1b'. */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __MBX_SMI_SOURCE_bits_t;
#define MBX_SMI_SOURCE_RESETVALUE           (0x00U)                                       /**<  (MBX_SMI_SOURCE) SMI Interrupt Source Register  Reset Value */

#define MBX_SMI_SOURCE_EC_WR_Pos              (0)                                            /**< (MBX_SMI_SOURCE) EC Mailbox Write. This bit is set automatically when the EC-to-Host Mailbox Register has been written. An SMI or SIRQ\n      to the Host is generated when n this bit is '1b' and the corresponding bit in the SMI Interrupt Mask Register register is '1b'.\n      This bit is automatically cleared by a read of the EC-to-Host Mailbox Register through the Host Access Port. Position */
#define MBX_SMI_SOURCE_EC_WR_Msk              (0x1U << MBX_SMI_SOURCE_EC_WR_Pos)             /**< (MBX_SMI_SOURCE) EC Mailbox Write. This bit is set automatically when the EC-to-Host Mailbox Register has been written. An SMI or SIRQ\n      to the Host is generated when n this bit is '1b' and the corresponding bit in the SMI Interrupt Mask Register register is '1b'.\n      This bit is automatically cleared by a read of the EC-to-Host Mailbox Register through the Host Access Port. Mask */
#define MBX_SMI_SOURCE_EC_SWI_Pos             (1)                                            /**< (MBX_SMI_SOURCE) EC Software Interrupt. An SIRQ to the Host is generated when any bit in this register when this bit is set to '1b' and\n      the corresponding bit in the SMI Interrupt Mask Register register is '1b'. Position */
#define MBX_SMI_SOURCE_EC_SWI_Msk             (0x7FU << MBX_SMI_SOURCE_EC_SWI_Pos)           /**< (MBX_SMI_SOURCE) EC Software Interrupt. An SIRQ to the Host is generated when any bit in this register when this bit is set to '1b' and\n      the corresponding bit in the SMI Interrupt Mask Register register is '1b'. Mask */
#define MBX_SMI_SOURCE_EC_SWI(value)          (MBX_SMI_SOURCE_EC_SWI_Msk & ((value) << MBX_SMI_SOURCE_EC_SWI_Pos))
#define MBX_SMI_SOURCE_Msk                    (0x000000FFUL)                                 /**< (MBX_SMI_SOURCE) Register Mask  */

/* -------- MBX_SMI_MASK : (MBX Offset: 0x10c) (R/W 32) SMI Interrupt Mask Register -------- */

typedef union
{
  struct
  {
    uint32_t EC_WR_EN:1;                /**< bit:      0  EC Mailbox Write.Interrupt Enable. Each bit in this field that is '1b' enables the generation of SIRQ interrupts when the\n      corresponding bit in the EC_SWI field in the SMI Interrupt Source Register is '1b'. */
    uint32_t EC_SWI_EN:7;               /**< bit:   1..7  EC Software Interrupt Enable. If this bit is '1b', the bit EC_WR in the SMI Interrupt Source Register is enabled for the\n      generation of SIRQ or nSMI events. */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __MBX_SMI_MASK_bits_t;
#define MBX_SMI_MASK_RESETVALUE             (0x00U)                                       /**<  (MBX_SMI_MASK) SMI Interrupt Mask Register  Reset Value */

#define MBX_SMI_MASK_EC_WR_EN_Pos             (0)                                            /**< (MBX_SMI_MASK) EC Mailbox Write.Interrupt Enable. Each bit in this field that is '1b' enables the generation of SIRQ interrupts when the\n      corresponding bit in the EC_SWI field in the SMI Interrupt Source Register is '1b'. Position */
#define MBX_SMI_MASK_EC_WR_EN_Msk             (0x1U << MBX_SMI_MASK_EC_WR_EN_Pos)            /**< (MBX_SMI_MASK) EC Mailbox Write.Interrupt Enable. Each bit in this field that is '1b' enables the generation of SIRQ interrupts when the\n      corresponding bit in the EC_SWI field in the SMI Interrupt Source Register is '1b'. Mask */
#define MBX_SMI_MASK_EC_SWI_EN_Pos            (1)                                            /**< (MBX_SMI_MASK) EC Software Interrupt Enable. If this bit is '1b', the bit EC_WR in the SMI Interrupt Source Register is enabled for the\n      generation of SIRQ or nSMI events. Position */
#define MBX_SMI_MASK_EC_SWI_EN_Msk            (0x7FU << MBX_SMI_MASK_EC_SWI_EN_Pos)          /**< (MBX_SMI_MASK) EC Software Interrupt Enable. If this bit is '1b', the bit EC_WR in the SMI Interrupt Source Register is enabled for the\n      generation of SIRQ or nSMI events. Mask */
#define MBX_SMI_MASK_EC_SWI_EN(value)         (MBX_SMI_MASK_EC_SWI_EN_Msk & ((value) << MBX_SMI_MASK_EC_SWI_EN_Pos))
#define MBX_SMI_MASK_Msk                      (0x000000FFUL)                                 /**< (MBX_SMI_MASK) Register Mask  */

/* -------- MBX_REG : (MBX Offset: 0x110) (R/W 32) Mailbox Register -------- */

typedef union
{
  uint32_t w;
} __MBX_REG_bits_t;
#define MBX_REG_RESETVALUE                  (0x00U)                                       /**<  (MBX_REG) Mailbox Register  Reset Value */

#define MBX_REG_Msk                           (0x00000000UL)                                 /**< (MBX_REG) Register Mask  */

/** \brief MBX register offsets definitions */
#define MBX_INDEX_OFFSET             (0x00)         /**< (MBX_INDEX) MBX_Index Register Offset */
#define MBX_DATA_REG_OFFSET          (0x01)         /**< (MBX_DATA_REG) MBX_Data_Register Offset */
#define MBX_HOST_TO_EC_OFFSET        (0x100)        /**< (MBX_HOST_TO_EC) If enabled, an interrupt to the EC marked by the MBX_DATA bit in the Interrupt Aggregator will be generated whenever the Host writes this register. This register is cleared when written with FFh. Offset */
#define MBX_EC_TO_HOST_OFFSET        (0x104)        /**< (MBX_EC_TO_HOST) An EC write to this register will set bit EC_WR in the SMI Interrupt Source Register to '1b'. If enabled, this will generate a Host SMI. This register is cleared when written with FFh. Offset */
#define MBX_SMI_SOURCE_OFFSET        (0x108)        /**< (MBX_SMI_SOURCE) SMI Interrupt Source Register Offset */
#define MBX_SMI_MASK_OFFSET          (0x10C)        /**< (MBX_SMI_MASK) SMI Interrupt Mask Register Offset */
#define MBX_REG_OFFSET               (0x110)        /**< (MBX_REG) Mailbox Register Offset */

/** \brief MBX register API structure */
typedef struct
{  /* The Mailbox provides a standard run-time mechanism for the host to communicate with the Embedded Controller (EC). */
  __IO  __MBX_INDEX_bits_t             INDEX;         /**< Offset: 0x00 (R/W   8) MBX_Index Register */
  __IO  __MBX_DATA_REG_bits_t          DATA_REG;      /**< Offset: 0x01 (R/W   8) MBX_Data_Register */
  __IO  __MBX_HOST_TO_EC_bits_t        HOST_TO_EC;    /**< Offset: 0x100 (R/W  32) If enabled, an interrupt to the EC marked by the MBX_DATA bit in the Interrupt Aggregator will be generated whenever the Host writes this register. This register is cleared when written with FFh. */
  __IO  __MBX_EC_TO_HOST_bits_t        EC_TO_HOST;    /**< Offset: 0x104 (R/W   8) An EC write to this register will set bit EC_WR in the SMI Interrupt Source Register to '1b'. If enabled, this will generate a Host SMI. This register is cleared when written with FFh. */
  __IO  __MBX_SMI_SOURCE_bits_t        SMI_SOURCE;    /**< Offset: 0x108 (R/W  32) SMI Interrupt Source Register */
  __IO  __MBX_SMI_MASK_bits_t          SMI_MASK;      /**< Offset: 0x10C (R/W  32) SMI Interrupt Mask Register */
  __IO  __MBX_REG_bits_t               MBX_REG[8];    /**< Offset: 0x110 (R/W  32) Mailbox Register */
} mbx_registers_t;
/** @}  end of The Mailbox provides a standard run-time mechanism for the host to communicate with the Embedded Controller (EC). */

#endif /* _PIC32CX_0525SG12_MBX_COMPONENT_H_ */
