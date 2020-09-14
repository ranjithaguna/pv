/**
 * \brief Component description for PIC32CX/0525SG12 EMI
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
#ifndef _PIC32CX_0525SG12_EMI_COMPONENT_H_
#define _PIC32CX_0525SG12_EMI_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_EMI The Embedded Memory Interface (EMI) provides a standard run-time mechanism\n        for the system host to communicate with the Embedded Controller (EC) and other logical components.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR EMI */
/* ========================================================================== */

/* -------- EMI_HOST_EC_MBX : (EMI Offset: 0x00) (R/W 8) Host-to-EC Mailbox Register -------- */

typedef union
{
  uint8_t  w;
} __EMI_HOST_EC_MBX_bits_t;
#define EMI_HOST_EC_MBX_RESETVALUE          (0x00U)                                       /**<  (EMI_HOST_EC_MBX) Host-to-EC Mailbox Register  Reset Value */

#define EMI_HOST_EC_MBX_Msk                   (0x00000000UL)                                 /**< (EMI_HOST_EC_MBX) Register Mask  */

/* -------- EMI_EC_HOST_MBX : (EMI Offset: 0x01) (R/W 8) EC-to-Host Mailbox Register -------- */

typedef union
{
  uint8_t  w;
} __EMI_EC_HOST_MBX_bits_t;
#define EMI_EC_HOST_MBX_RESETVALUE          (0x00U)                                       /**<  (EMI_EC_HOST_MBX) EC-to-Host Mailbox Register  Reset Value */

#define EMI_EC_HOST_MBX_Msk                   (0x00000000UL)                                 /**< (EMI_EC_HOST_MBX) Register Mask  */

/* -------- EMI_EC_ADDRESS_LSB : (EMI Offset: 0x02) (R/W 8) EC Address Access Control Register -------- */

typedef union
{
  struct
  {
    uint8_t  ACCESS_TYPE:2;             /**< bit:   0..1  This field defines the type of access that occurs when the EC Data Register is read or written.\n                11b=Auto-increment 32-bit access. 10b=32-bit access. 01b=16-bit access. 00b=8-bit access. */
    uint8_t  EC_ADDRESS_LSB:6;          /**< bit:   2..7  This field defines bits[7:2] of EC_Address [15:0]. Bits[1:0] of the EC_Address are always forced to 00b.\n      The EC_Address is aligned on a DWord boundary. It is the address of the memory being accessed by EC Data Byte 0 Register, which is\n      an offset from the programmed base address of the selected REGION. */
  };
  uint8_t  w;
} __EMI_EC_ADDRESS_LSB_bits_t;
#define EMI_EC_ADDRESS_LSB_RESETVALUE       (0x00U)                                       /**<  (EMI_EC_ADDRESS_LSB) EC Address Access Control Register  Reset Value */

#define EMI_EC_ADDRESS_LSB_ACCESS_TYPE_Pos    (0)                                            /**< (EMI_EC_ADDRESS_LSB) This field defines the type of access that occurs when the EC Data Register is read or written.\n                11b=Auto-increment 32-bit access. 10b=32-bit access. 01b=16-bit access. 00b=8-bit access. Position */
#define EMI_EC_ADDRESS_LSB_ACCESS_TYPE_Msk    (0x3U << EMI_EC_ADDRESS_LSB_ACCESS_TYPE_Pos)   /**< (EMI_EC_ADDRESS_LSB) This field defines the type of access that occurs when the EC Data Register is read or written.\n                11b=Auto-increment 32-bit access. 10b=32-bit access. 01b=16-bit access. 00b=8-bit access. Mask */
#define EMI_EC_ADDRESS_LSB_ACCESS_TYPE(value) (EMI_EC_ADDRESS_LSB_ACCESS_TYPE_Msk & ((value) << EMI_EC_ADDRESS_LSB_ACCESS_TYPE_Pos))
#define EMI_EC_ADDRESS_LSB_EC_ADDRESS_LSB_Pos (2)                                            /**< (EMI_EC_ADDRESS_LSB) This field defines bits[7:2] of EC_Address [15:0]. Bits[1:0] of the EC_Address are always forced to 00b.\n      The EC_Address is aligned on a DWord boundary. It is the address of the memory being accessed by EC Data Byte 0 Register, which is\n      an offset from the programmed base address of the selected REGION. Position */
#define EMI_EC_ADDRESS_LSB_EC_ADDRESS_LSB_Msk (0x3FU << EMI_EC_ADDRESS_LSB_EC_ADDRESS_LSB_Pos)  /**< (EMI_EC_ADDRESS_LSB) This field defines bits[7:2] of EC_Address [15:0]. Bits[1:0] of the EC_Address are always forced to 00b.\n      The EC_Address is aligned on a DWord boundary. It is the address of the memory being accessed by EC Data Byte 0 Register, which is\n      an offset from the programmed base address of the selected REGION. Mask */
#define EMI_EC_ADDRESS_LSB_EC_ADDRESS_LSB(value) (EMI_EC_ADDRESS_LSB_EC_ADDRESS_LSB_Msk & ((value) << EMI_EC_ADDRESS_LSB_EC_ADDRESS_LSB_Pos))
#define EMI_EC_ADDRESS_LSB_Msk                (0x000000FFUL)                                 /**< (EMI_EC_ADDRESS_LSB) Register Mask  */

/* -------- EMI_EC_ADDRESS_MSB : (EMI Offset: 0x03) (R/W 8) EC Address Access Control Register -------- */

typedef union
{
  struct
  {
    uint8_t  :2;                        /**< bit:   0..1  Reserved                                      */
    uint8_t  EC_ADDRESS_MSB:5;          /**< bit:   2..6  This field defines bits[14:8] of EC_Address. Bits[1:0] of the EC_Address are always forced to 00b.\n      The EC_Address is aligned on a DWord boundary. It is the address of the memory being accessed by EC Data Byte 0 Register, which is\n      an offset from the programmed base address of the selected REGION. */
    uint8_t  REGION:1;                  /**< bit:      7  The field specifies which of two segments in the 32-bit internal address space is to be accessed by the EC_Address[14:2]\n      to generate accesses to the memory.\n      1=The address defined by EC_Address[14:2] is relative to the base address specified by the Memory Base Address 1 Register.\n      0=The address defined by EC_Address[14:2] is relative to the base address specified by the Memory Base Address 0 Register. */
  };
  uint8_t  w;
} __EMI_EC_ADDRESS_MSB_bits_t;
#define EMI_EC_ADDRESS_MSB_RESETVALUE       (0x00U)                                       /**<  (EMI_EC_ADDRESS_MSB) EC Address Access Control Register  Reset Value */

#define EMI_EC_ADDRESS_MSB_EC_ADDRESS_MSB_Pos (2)                                            /**< (EMI_EC_ADDRESS_MSB) This field defines bits[14:8] of EC_Address. Bits[1:0] of the EC_Address are always forced to 00b.\n      The EC_Address is aligned on a DWord boundary. It is the address of the memory being accessed by EC Data Byte 0 Register, which is\n      an offset from the programmed base address of the selected REGION. Position */
#define EMI_EC_ADDRESS_MSB_EC_ADDRESS_MSB_Msk (0x1FU << EMI_EC_ADDRESS_MSB_EC_ADDRESS_MSB_Pos)  /**< (EMI_EC_ADDRESS_MSB) This field defines bits[14:8] of EC_Address. Bits[1:0] of the EC_Address are always forced to 00b.\n      The EC_Address is aligned on a DWord boundary. It is the address of the memory being accessed by EC Data Byte 0 Register, which is\n      an offset from the programmed base address of the selected REGION. Mask */
#define EMI_EC_ADDRESS_MSB_EC_ADDRESS_MSB(value) (EMI_EC_ADDRESS_MSB_EC_ADDRESS_MSB_Msk & ((value) << EMI_EC_ADDRESS_MSB_EC_ADDRESS_MSB_Pos))
#define EMI_EC_ADDRESS_MSB_REGION_Pos         (7)                                            /**< (EMI_EC_ADDRESS_MSB) The field specifies which of two segments in the 32-bit internal address space is to be accessed by the EC_Address[14:2]\n      to generate accesses to the memory.\n      1=The address defined by EC_Address[14:2] is relative to the base address specified by the Memory Base Address 1 Register.\n      0=The address defined by EC_Address[14:2] is relative to the base address specified by the Memory Base Address 0 Register. Position */
#define EMI_EC_ADDRESS_MSB_REGION_Msk         (0x1U << EMI_EC_ADDRESS_MSB_REGION_Pos)        /**< (EMI_EC_ADDRESS_MSB) The field specifies which of two segments in the 32-bit internal address space is to be accessed by the EC_Address[14:2]\n      to generate accesses to the memory.\n      1=The address defined by EC_Address[14:2] is relative to the base address specified by the Memory Base Address 1 Register.\n      0=The address defined by EC_Address[14:2] is relative to the base address specified by the Memory Base Address 0 Register. Mask */
#define EMI_EC_ADDRESS_MSB_Msk                (0x000000FCUL)                                 /**< (EMI_EC_ADDRESS_MSB) Register Mask  */

/* -------- EMI_EC_DATA_BYTE : (EMI Offset: 0x04) (R/W 8) EC Data Byte Register -------- */

typedef union
{
  uint8_t  w;
} __EMI_EC_DATA_BYTE_bits_t;
#define EMI_EC_DATA_BYTE_RESETVALUE         (0x00U)                                       /**<  (EMI_EC_DATA_BYTE) EC Data Byte Register  Reset Value */

#define EMI_EC_DATA_BYTE_Msk                  (0x00000000UL)                                 /**< (EMI_EC_DATA_BYTE) Register Mask  */

/* -------- EMI_EC_INT_SOURCE_LSB : (EMI Offset: 0x08) (R/W 8) Interrupt Source LSB Register -------- */

typedef union
{
  struct
  {
    uint8_t  EC_WR:1;                   /**< bit:      0  EC Mailbox Write. This bit is set when the EC-to-HOST Mailbox Register has been written by the EC at offset 01h\n      of the EC-Only registers. Note: there is no corresponding mask bit in the Interrupt Mask LSB Register. */
    uint8_t  EC_SWI_LSB:7;              /**< bit:   1..7  EC Software Interrupt Least Significant Bits. These bits are software interrupt bits that may be set by the EC to\n      notify the host of an event. The meaning of these bits is dependent on the firmware implementation. Each bit in this field is cleared\n      when written with a '1b'. The ability to clear the bit can be disabled by the EC if the corresponding bit in the Host Clear Enable\n      Register is set to '0b'. This may be used by firmware for events that cannot be cleared while the event is still active. */
  };
  uint8_t  w;
} __EMI_EC_INT_SOURCE_LSB_bits_t;
#define EMI_EC_INT_SOURCE_LSB_RESETVALUE    (0x00U)                                       /**<  (EMI_EC_INT_SOURCE_LSB) Interrupt Source LSB Register  Reset Value */

#define EMI_EC_INT_SOURCE_LSB_EC_WR_Pos       (0)                                            /**< (EMI_EC_INT_SOURCE_LSB) EC Mailbox Write. This bit is set when the EC-to-HOST Mailbox Register has been written by the EC at offset 01h\n      of the EC-Only registers. Note: there is no corresponding mask bit in the Interrupt Mask LSB Register. Position */
#define EMI_EC_INT_SOURCE_LSB_EC_WR_Msk       (0x1U << EMI_EC_INT_SOURCE_LSB_EC_WR_Pos)      /**< (EMI_EC_INT_SOURCE_LSB) EC Mailbox Write. This bit is set when the EC-to-HOST Mailbox Register has been written by the EC at offset 01h\n      of the EC-Only registers. Note: there is no corresponding mask bit in the Interrupt Mask LSB Register. Mask */
#define EMI_EC_INT_SOURCE_LSB_EC_SWI_LSB_Pos  (1)                                            /**< (EMI_EC_INT_SOURCE_LSB) EC Software Interrupt Least Significant Bits. These bits are software interrupt bits that may be set by the EC to\n      notify the host of an event. The meaning of these bits is dependent on the firmware implementation. Each bit in this field is cleared\n      when written with a '1b'. The ability to clear the bit can be disabled by the EC if the corresponding bit in the Host Clear Enable\n      Register is set to '0b'. This may be used by firmware for events that cannot be cleared while the event is still active. Position */
#define EMI_EC_INT_SOURCE_LSB_EC_SWI_LSB_Msk  (0x7FU << EMI_EC_INT_SOURCE_LSB_EC_SWI_LSB_Pos)  /**< (EMI_EC_INT_SOURCE_LSB) EC Software Interrupt Least Significant Bits. These bits are software interrupt bits that may be set by the EC to\n      notify the host of an event. The meaning of these bits is dependent on the firmware implementation. Each bit in this field is cleared\n      when written with a '1b'. The ability to clear the bit can be disabled by the EC if the corresponding bit in the Host Clear Enable\n      Register is set to '0b'. This may be used by firmware for events that cannot be cleared while the event is still active. Mask */
#define EMI_EC_INT_SOURCE_LSB_EC_SWI_LSB(value) (EMI_EC_INT_SOURCE_LSB_EC_SWI_LSB_Msk & ((value) << EMI_EC_INT_SOURCE_LSB_EC_SWI_LSB_Pos))
#define EMI_EC_INT_SOURCE_LSB_Msk             (0x000000FFUL)                                 /**< (EMI_EC_INT_SOURCE_LSB) Register Mask  */

/* -------- EMI_EC_INT_SOURCE_MSB : (EMI Offset: 0x09) (R/W 8) Interrupt Source MSB Register -------- */

typedef union
{
  struct
  {
    uint8_t  EC_SWI_MSB:8;              /**< bit:   0..7  EC Software Interrupt Most Significant Bits. These bits are software interrupt bits that may be set by the EC to\n      notify the host of an event. The meaning of these bits is dependent on the firmware implementation. Each bit in this field is cleared\n      when written with a '1b'. The ability to clear the bit can be disabled by the EC if the corresponding bit in the Host Clear Enable\n      Register is set to '0b'. This may be used by firmware for events that cannot be cleared while the event is still active. */
  };
  uint8_t  w;
} __EMI_EC_INT_SOURCE_MSB_bits_t;
#define EMI_EC_INT_SOURCE_MSB_RESETVALUE    (0x00U)                                       /**<  (EMI_EC_INT_SOURCE_MSB) Interrupt Source MSB Register  Reset Value */

#define EMI_EC_INT_SOURCE_MSB_EC_SWI_MSB_Pos  (0)                                            /**< (EMI_EC_INT_SOURCE_MSB) EC Software Interrupt Most Significant Bits. These bits are software interrupt bits that may be set by the EC to\n      notify the host of an event. The meaning of these bits is dependent on the firmware implementation. Each bit in this field is cleared\n      when written with a '1b'. The ability to clear the bit can be disabled by the EC if the corresponding bit in the Host Clear Enable\n      Register is set to '0b'. This may be used by firmware for events that cannot be cleared while the event is still active. Position */
#define EMI_EC_INT_SOURCE_MSB_EC_SWI_MSB_Msk  (0xFFU << EMI_EC_INT_SOURCE_MSB_EC_SWI_MSB_Pos)  /**< (EMI_EC_INT_SOURCE_MSB) EC Software Interrupt Most Significant Bits. These bits are software interrupt bits that may be set by the EC to\n      notify the host of an event. The meaning of these bits is dependent on the firmware implementation. Each bit in this field is cleared\n      when written with a '1b'. The ability to clear the bit can be disabled by the EC if the corresponding bit in the Host Clear Enable\n      Register is set to '0b'. This may be used by firmware for events that cannot be cleared while the event is still active. Mask */
#define EMI_EC_INT_SOURCE_MSB_EC_SWI_MSB(value) (EMI_EC_INT_SOURCE_MSB_EC_SWI_MSB_Msk & ((value) << EMI_EC_INT_SOURCE_MSB_EC_SWI_MSB_Pos))
#define EMI_EC_INT_SOURCE_MSB_Msk             (0x000000FFUL)                                 /**< (EMI_EC_INT_SOURCE_MSB) Register Mask  */

/* -------- EMI_EC_INT_MASK_LSB : (EMI Offset: 0x0a) (R/W 8) Interrupt Mask LSB Register -------- */

typedef union
{
  struct
  {
    uint8_t  TEST:1;                    /**< bit:      0  Test Bit.                                     */
    uint8_t  EC_SWI_EN_LSB:7;           /**< bit:   1..7  EC Software Interrupt Enable Least Significant Bits. Each bit that is set to '1b' in this field enables the generation\n      of a Host Event interrupt by the corresponding bit in the EC_SWI field in the Interrupt Source LSB Register. */
  };
  uint8_t  w;
} __EMI_EC_INT_MASK_LSB_bits_t;
#define EMI_EC_INT_MASK_LSB_RESETVALUE      (0x00U)                                       /**<  (EMI_EC_INT_MASK_LSB) Interrupt Mask LSB Register  Reset Value */

#define EMI_EC_INT_MASK_LSB_TEST_Pos          (0)                                            /**< (EMI_EC_INT_MASK_LSB) Test Bit. Position */
#define EMI_EC_INT_MASK_LSB_TEST_Msk          (0x1U << EMI_EC_INT_MASK_LSB_TEST_Pos)         /**< (EMI_EC_INT_MASK_LSB) Test Bit. Mask */
#define EMI_EC_INT_MASK_LSB_EC_SWI_EN_LSB_Pos (1)                                            /**< (EMI_EC_INT_MASK_LSB) EC Software Interrupt Enable Least Significant Bits. Each bit that is set to '1b' in this field enables the generation\n      of a Host Event interrupt by the corresponding bit in the EC_SWI field in the Interrupt Source LSB Register. Position */
#define EMI_EC_INT_MASK_LSB_EC_SWI_EN_LSB_Msk (0x7FU << EMI_EC_INT_MASK_LSB_EC_SWI_EN_LSB_Pos)  /**< (EMI_EC_INT_MASK_LSB) EC Software Interrupt Enable Least Significant Bits. Each bit that is set to '1b' in this field enables the generation\n      of a Host Event interrupt by the corresponding bit in the EC_SWI field in the Interrupt Source LSB Register. Mask */
#define EMI_EC_INT_MASK_LSB_EC_SWI_EN_LSB(value) (EMI_EC_INT_MASK_LSB_EC_SWI_EN_LSB_Msk & ((value) << EMI_EC_INT_MASK_LSB_EC_SWI_EN_LSB_Pos))
#define EMI_EC_INT_MASK_LSB_Msk               (0x000000FFUL)                                 /**< (EMI_EC_INT_MASK_LSB) Register Mask  */

/* -------- EMI_EC_INT_MASK_MSB : (EMI Offset: 0x0b) (R/W 8) Interrupt Mask MSB Register -------- */

typedef union
{
  struct
  {
    uint8_t  :1;                        /**< bit:      0  Reserved                                      */
    uint8_t  EC_SWI_EN_MSB:7;           /**< bit:   1..7  EC Software Interrupt Enable Most Significant Bits. Each bit that is set to '1b' in this field enables the generation\n      of a Host Event interrupt by the corresponding bit in the EC_SWI field in the Interrupt Source MSB Register. */
  };
  uint8_t  w;
} __EMI_EC_INT_MASK_MSB_bits_t;
#define EMI_EC_INT_MASK_MSB_RESETVALUE      (0x00U)                                       /**<  (EMI_EC_INT_MASK_MSB) Interrupt Mask MSB Register  Reset Value */

#define EMI_EC_INT_MASK_MSB_EC_SWI_EN_MSB_Pos (1)                                            /**< (EMI_EC_INT_MASK_MSB) EC Software Interrupt Enable Most Significant Bits. Each bit that is set to '1b' in this field enables the generation\n      of a Host Event interrupt by the corresponding bit in the EC_SWI field in the Interrupt Source MSB Register. Position */
#define EMI_EC_INT_MASK_MSB_EC_SWI_EN_MSB_Msk (0x7FU << EMI_EC_INT_MASK_MSB_EC_SWI_EN_MSB_Pos)  /**< (EMI_EC_INT_MASK_MSB) EC Software Interrupt Enable Most Significant Bits. Each bit that is set to '1b' in this field enables the generation\n      of a Host Event interrupt by the corresponding bit in the EC_SWI field in the Interrupt Source MSB Register. Mask */
#define EMI_EC_INT_MASK_MSB_EC_SWI_EN_MSB(value) (EMI_EC_INT_MASK_MSB_EC_SWI_EN_MSB_Msk & ((value) << EMI_EC_INT_MASK_MSB_EC_SWI_EN_MSB_Pos))
#define EMI_EC_INT_MASK_MSB_Msk               (0x000000FEUL)                                 /**< (EMI_EC_INT_MASK_MSB) Register Mask  */

/* -------- EMI_APPLICATION_ID : (EMI Offset: 0x0c) (R/W 8) Application ID Register, APPLICATION_ID When this field is 00h it can be written with any value. When set to a non-zero value, writing that value will clear this register to 00h. When set to a non-zero value, writing any value other than the current contents will have no effect. -------- */

typedef union
{
  uint8_t  w;
} __EMI_APPLICATION_ID_bits_t;
#define EMI_APPLICATION_ID_RESETVALUE       (0x00U)                                       /**<  (EMI_APPLICATION_ID) Application ID Register, APPLICATION_ID When this field is 00h it can be written with any value. When set to a non-zero value, writing that value will clear this register to 00h. When set to a non-zero value, writing any value other than the current contents will have no effect.  Reset Value */

#define EMI_APPLICATION_ID_Msk                (0x00000000UL)                                 /**< (EMI_APPLICATION_ID) Register Mask  */

/* -------- EMI_HOST2EC_MBX : (EMI Offset: 0x100) (R/W 8) Host-to-EC Mailbox Register, 8-bit mailbox used communicate information from the system host to the embedded controller. Writing this register generates an event to notify the embedded controller. (R/WC) -------- */

typedef union
{
  uint8_t  w;
} __EMI_HOST2EC_MBX_bits_t;
#define EMI_HOST2EC_MBX_RESETVALUE          (0x00U)                                       /**<  (EMI_HOST2EC_MBX) Host-to-EC Mailbox Register, 8-bit mailbox used communicate information from the system host to the embedded controller. Writing this register generates an event to notify the embedded controller. (R/WC)  Reset Value */

#define EMI_HOST2EC_MBX_Msk                   (0x00000000UL)                                 /**< (EMI_HOST2EC_MBX) Register Mask  */

/* -------- EMI_EC2HOST_MBX : (EMI Offset: 0x101) (R/W 8) EC-to-Host Mailbox Register, 8-bit mailbox used communicate information from the embedded controller to the system host. Writing this register generates an event to notify the system host. -------- */

typedef union
{
  uint8_t  w;
} __EMI_EC2HOST_MBX_bits_t;
#define EMI_EC2HOST_MBX_RESETVALUE          (0x00U)                                       /**<  (EMI_EC2HOST_MBX) EC-to-Host Mailbox Register, 8-bit mailbox used communicate information from the embedded controller to the system host. Writing this register generates an event to notify the system host.  Reset Value */

#define EMI_EC2HOST_MBX_Msk                   (0x00000000UL)                                 /**< (EMI_EC2HOST_MBX) Register Mask  */

/* -------- EMI_MEMORY_BASE_ADDRESS_0 : (EMI Offset: 0x104) (R/W 32) Memory Base Address 0 Register [31:2] This memory base address defines the beginning of region 0 in the Embedded Controller's 32-bit internal address space. Memory allocated to region 0 is intended to be shared between the Host and the EC. The region defined by this base register is used when bit 15 of the EC Address Register is 0. The access will be to a memory location at an offset defined by the EC_Address relative to the beginning of the region defined by this register. Therefore, a read or write to the memory that is triggered by the EC Data Register will occur at Memory_Base_Address_0 + EC_Address. -------- */

typedef union
{
  uint32_t w;
} __EMI_MEMORY_BASE_ADDRESS_0_bits_t;
#define EMI_MEMORY_BASE_ADDRESS_0_RESETVALUE (0x00U)                                       /**<  (EMI_MEMORY_BASE_ADDRESS_0) Memory Base Address 0 Register [31:2] This memory base address defines the beginning of region 0 in the Embedded Controller's 32-bit internal address space. Memory allocated to region 0 is intended to be shared between the Host and the EC. The region defined by this base register is used when bit 15 of the EC Address Register is 0. The access will be to a memory location at an offset defined by the EC_Address relative to the beginning of the region defined by this register. Therefore, a read or write to the memory that is triggered by the EC Data Register will occur at Memory_Base_Address_0 + EC_Address.  Reset Value */

#define EMI_MEMORY_BASE_ADDRESS_0_Msk         (0x00000000UL)                                 /**< (EMI_MEMORY_BASE_ADDRESS_0) Register Mask  */

/* -------- EMI_MEMORY_READ_LIMIT_0 : (EMI Offset: 0x108) (R/W 16) Memory Read Limit 0 Register [14:2] Whenever a read of any byte in the EC Data Register is attempted, and bit 15 of EC_Address is 0, the field EC_Address[14:2] in the EC_Address_Register is compared to this field. As long as EC_Address[14:2] is less than this field the EC_Data_Register will be loaded from the 24-bit internal address space. -------- */

typedef union
{
  uint16_t w;
} __EMI_MEMORY_READ_LIMIT_0_bits_t;
#define EMI_MEMORY_READ_LIMIT_0_RESETVALUE  (0x00U)                                       /**<  (EMI_MEMORY_READ_LIMIT_0) Memory Read Limit 0 Register [14:2] Whenever a read of any byte in the EC Data Register is attempted, and bit 15 of EC_Address is 0, the field EC_Address[14:2] in the EC_Address_Register is compared to this field. As long as EC_Address[14:2] is less than this field the EC_Data_Register will be loaded from the 24-bit internal address space.  Reset Value */

#define EMI_MEMORY_READ_LIMIT_0_Msk           (0x00000000UL)                                 /**< (EMI_MEMORY_READ_LIMIT_0) Register Mask  */

/* -------- EMI_MEMORY_WRITE_LIMIT_0 : (EMI Offset: 0x10a) (R/W 16) Memory Write Limit 0 Register [14:2] Whenever a write of any byte in EC DATA Register is attempted and bit 15 of EC_Address is 0, the field EC_ADDRESS_MSB in the EC_Address Register is compared to this field. As long as EC_Address[14:2] is less than Memory_Write_Limit_0[14:2] the addressed bytes in the EC DATA Register will be written into the internal 24-bit address space. If EC_Address[14:2] is greater than or equal to the Memory_Write_Limit_0[14:2] no writes will take place. -------- */

typedef union
{
  uint16_t w;
} __EMI_MEMORY_WRITE_LIMIT_0_bits_t;
#define EMI_MEMORY_WRITE_LIMIT_0_RESETVALUE (0x00U)                                       /**<  (EMI_MEMORY_WRITE_LIMIT_0) Memory Write Limit 0 Register [14:2] Whenever a write of any byte in EC DATA Register is attempted and bit 15 of EC_Address is 0, the field EC_ADDRESS_MSB in the EC_Address Register is compared to this field. As long as EC_Address[14:2] is less than Memory_Write_Limit_0[14:2] the addressed bytes in the EC DATA Register will be written into the internal 24-bit address space. If EC_Address[14:2] is greater than or equal to the Memory_Write_Limit_0[14:2] no writes will take place.  Reset Value */

#define EMI_MEMORY_WRITE_LIMIT_0_Msk          (0x00000000UL)                                 /**< (EMI_MEMORY_WRITE_LIMIT_0) Register Mask  */

/* -------- EMI_MEMORY_BASE_ADDRESS_1 : (EMI Offset: 0x10c) (R/W 32) Memory Base Address 1 Register. [31:2] This memory base address defines the beginning of region 1 in the Embedded Controller's 32-bit internal address space. Memory allocated to region 1 is intended to be shared between the Host and the EC. The region defined by this base register is used when bit 15 of the EC Address Register is 1. The access will be to a memory location at an offset defined by the EC_Address relative to the beginning of the region defined by this register. Therefore, a read or write to the memory that is triggered by the EC Data Register will occur at Memory_Base_Address_1 + EC_Address. -------- */

typedef union
{
  uint32_t w;
} __EMI_MEMORY_BASE_ADDRESS_1_bits_t;
#define EMI_MEMORY_BASE_ADDRESS_1_RESETVALUE (0x00U)                                       /**<  (EMI_MEMORY_BASE_ADDRESS_1) Memory Base Address 1 Register. [31:2] This memory base address defines the beginning of region 1 in the Embedded Controller's 32-bit internal address space. Memory allocated to region 1 is intended to be shared between the Host and the EC. The region defined by this base register is used when bit 15 of the EC Address Register is 1. The access will be to a memory location at an offset defined by the EC_Address relative to the beginning of the region defined by this register. Therefore, a read or write to the memory that is triggered by the EC Data Register will occur at Memory_Base_Address_1 + EC_Address.  Reset Value */

#define EMI_MEMORY_BASE_ADDRESS_1_Msk         (0x00000000UL)                                 /**< (EMI_MEMORY_BASE_ADDRESS_1) Register Mask  */

/* -------- EMI_MEMORY_READ_LIMIT_1 : (EMI Offset: 0x110) (R/W 16) Memory Read Limit 1 Register, [14:2]: Whenever a read of any byte in the EC Data Register is attempted, and bit 15 of EC_ADDRESS is 1, the field EC_ADDRESS in the EC_Address_Register is compared to this field. As long as EC_ADDRESS is less than this value, the EC_Data_Register will be loaded from the 24-bit internal address space. -------- */

typedef union
{
  uint16_t w;
} __EMI_MEMORY_READ_LIMIT_1_bits_t;
#define EMI_MEMORY_READ_LIMIT_1_RESETVALUE  (0x00U)                                       /**<  (EMI_MEMORY_READ_LIMIT_1) Memory Read Limit 1 Register, [14:2]: Whenever a read of any byte in the EC Data Register is attempted, and bit 15 of EC_ADDRESS is 1, the field EC_ADDRESS in the EC_Address_Register is compared to this field. As long as EC_ADDRESS is less than this value, the EC_Data_Register will be loaded from the 24-bit internal address space.  Reset Value */

#define EMI_MEMORY_READ_LIMIT_1_Msk           (0x00000000UL)                                 /**< (EMI_MEMORY_READ_LIMIT_1) Register Mask  */

/* -------- EMI_MEMORY_WRITE_LIMIT_1 : (EMI Offset: 0x112) (R/W 16) Memory Write Limit 1 Register, [14:2]: Whenever a write of any byte in EC DATA Register is attempted and bit 15 of EC_Address is 1, the field EC_Address[14:2] in the EC_Address Register is compared to this field. As long as EC_Address[14:2] is less than Memory_Write_Limit_1[14:2] the addressed bytes in the EC DATA Register will be written into the internal 24-bit address space. If EC_Address[14:2] is greater than or equal to the Memory_Write_Limit_1[14:2] no writes will take place. -------- */

typedef union
{
  uint16_t w;
} __EMI_MEMORY_WRITE_LIMIT_1_bits_t;
#define EMI_MEMORY_WRITE_LIMIT_1_RESETVALUE (0x00U)                                       /**<  (EMI_MEMORY_WRITE_LIMIT_1) Memory Write Limit 1 Register, [14:2]: Whenever a write of any byte in EC DATA Register is attempted and bit 15 of EC_Address is 1, the field EC_Address[14:2] in the EC_Address Register is compared to this field. As long as EC_Address[14:2] is less than Memory_Write_Limit_1[14:2] the addressed bytes in the EC DATA Register will be written into the internal 24-bit address space. If EC_Address[14:2] is greater than or equal to the Memory_Write_Limit_1[14:2] no writes will take place.  Reset Value */

#define EMI_MEMORY_WRITE_LIMIT_1_Msk          (0x00000000UL)                                 /**< (EMI_MEMORY_WRITE_LIMIT_1) Register Mask  */

/* -------- EMI_EC_SWI_SET : (EMI Offset: 0x114) (R/W 16) [15:1] Interrupt Set Register, Writing a bit in this field with a '1b' sets the corresponding bit in the Interrupt Source Register to '1b'. Writing a bit in this field with a '0b' has no effect. Reading this field returns the current contents of the Interrupt Source Register. -------- */

typedef union
{
  uint16_t w;
} __EMI_EC_SWI_SET_bits_t;
#define EMI_EC_SWI_SET_RESETVALUE           (0x00U)                                       /**<  (EMI_EC_SWI_SET) [15:1] Interrupt Set Register, Writing a bit in this field with a '1b' sets the corresponding bit in the Interrupt Source Register to '1b'. Writing a bit in this field with a '0b' has no effect. Reading this field returns the current contents of the Interrupt Source Register.  Reset Value */

#define EMI_EC_SWI_SET_Msk                    (0x00000000UL)                                 /**< (EMI_EC_SWI_SET) Register Mask  */

/* -------- EMI_CLEAR_ENABLE : (EMI Offset: 0x116) (R/W 16) [15:1] Host Clear Enable Register, When a bit in this field is '0b', the corresponding bit in the Interrupt Source Register cannot be cleared by writes to the Interrupt Source Register. When a bit in this field is '1b', the corresponding bit in the Interrupt Source Register can be cleared when that register bit is written with a '1b'. -------- */

typedef union
{
  uint16_t w;
} __EMI_CLEAR_ENABLE_bits_t;
#define EMI_CLEAR_ENABLE_RESETVALUE         (0x00U)                                       /**<  (EMI_CLEAR_ENABLE) [15:1] Host Clear Enable Register, When a bit in this field is '0b', the corresponding bit in the Interrupt Source Register cannot be cleared by writes to the Interrupt Source Register. When a bit in this field is '1b', the corresponding bit in the Interrupt Source Register can be cleared when that register bit is written with a '1b'.  Reset Value */

#define EMI_CLEAR_ENABLE_Msk                  (0x00000000UL)                                 /**< (EMI_CLEAR_ENABLE) Register Mask  */

/** \brief EMI register offsets definitions */
#define EMI_HOST_EC_MBX_OFFSET       (0x00)         /**< (EMI_HOST_EC_MBX) Host-to-EC Mailbox Register Offset */
#define EMI_EC_HOST_MBX_OFFSET       (0x01)         /**< (EMI_EC_HOST_MBX) EC-to-Host Mailbox Register Offset */
#define EMI_EC_ADDRESS_LSB_OFFSET    (0x02)         /**< (EMI_EC_ADDRESS_LSB) EC Address Access Control Register Offset */
#define EMI_EC_ADDRESS_MSB_OFFSET    (0x03)         /**< (EMI_EC_ADDRESS_MSB) EC Address Access Control Register Offset */
#define EMI_EC_DATA_BYTE_OFFSET      (0x04)         /**< (EMI_EC_DATA_BYTE) EC Data Byte Register Offset */
#define EMI_EC_INT_SOURCE_LSB_OFFSET (0x08)         /**< (EMI_EC_INT_SOURCE_LSB) Interrupt Source LSB Register Offset */
#define EMI_EC_INT_SOURCE_MSB_OFFSET (0x09)         /**< (EMI_EC_INT_SOURCE_MSB) Interrupt Source MSB Register Offset */
#define EMI_EC_INT_MASK_LSB_OFFSET   (0x0A)         /**< (EMI_EC_INT_MASK_LSB) Interrupt Mask LSB Register Offset */
#define EMI_EC_INT_MASK_MSB_OFFSET   (0x0B)         /**< (EMI_EC_INT_MASK_MSB) Interrupt Mask MSB Register Offset */
#define EMI_APPLICATION_ID_OFFSET    (0x0C)         /**< (EMI_APPLICATION_ID) Application ID Register, APPLICATION_ID When this field is 00h it can be written with any value. When set to a non-zero value, writing that value will clear this register to 00h. When set to a non-zero value, writing any value other than the current contents will have no effect. Offset */
#define EMI_HOST2EC_MBX_OFFSET       (0x100)        /**< (EMI_HOST2EC_MBX) Host-to-EC Mailbox Register, 8-bit mailbox used communicate information from the system host to the embedded controller. Writing this register generates an event to notify the embedded controller. (R/WC) Offset */
#define EMI_EC2HOST_MBX_OFFSET       (0x101)        /**< (EMI_EC2HOST_MBX) EC-to-Host Mailbox Register, 8-bit mailbox used communicate information from the embedded controller to the system host. Writing this register generates an event to notify the system host. Offset */
#define EMI_MEMORY_BASE_ADDRESS_0_OFFSET (0x104)        /**< (EMI_MEMORY_BASE_ADDRESS_0) Memory Base Address 0 Register [31:2] This memory base address defines the beginning of region 0 in the Embedded Controller's 32-bit internal address space. Memory allocated to region 0 is intended to be shared between the Host and the EC. The region defined by this base register is used when bit 15 of the EC Address Register is 0. The access will be to a memory location at an offset defined by the EC_Address relative to the beginning of the region defined by this register. Therefore, a read or write to the memory that is triggered by the EC Data Register will occur at Memory_Base_Address_0 + EC_Address. Offset */
#define EMI_MEMORY_READ_LIMIT_0_OFFSET (0x108)        /**< (EMI_MEMORY_READ_LIMIT_0) Memory Read Limit 0 Register [14:2] Whenever a read of any byte in the EC Data Register is attempted, and bit 15 of EC_Address is 0, the field EC_Address[14:2] in the EC_Address_Register is compared to this field. As long as EC_Address[14:2] is less than this field the EC_Data_Register will be loaded from the 24-bit internal address space. Offset */
#define EMI_MEMORY_WRITE_LIMIT_0_OFFSET (0x10A)        /**< (EMI_MEMORY_WRITE_LIMIT_0) Memory Write Limit 0 Register [14:2] Whenever a write of any byte in EC DATA Register is attempted and bit 15 of EC_Address is 0, the field EC_ADDRESS_MSB in the EC_Address Register is compared to this field. As long as EC_Address[14:2] is less than Memory_Write_Limit_0[14:2] the addressed bytes in the EC DATA Register will be written into the internal 24-bit address space. If EC_Address[14:2] is greater than or equal to the Memory_Write_Limit_0[14:2] no writes will take place. Offset */
#define EMI_MEMORY_BASE_ADDRESS_1_OFFSET (0x10C)        /**< (EMI_MEMORY_BASE_ADDRESS_1) Memory Base Address 1 Register. [31:2] This memory base address defines the beginning of region 1 in the Embedded Controller's 32-bit internal address space. Memory allocated to region 1 is intended to be shared between the Host and the EC. The region defined by this base register is used when bit 15 of the EC Address Register is 1. The access will be to a memory location at an offset defined by the EC_Address relative to the beginning of the region defined by this register. Therefore, a read or write to the memory that is triggered by the EC Data Register will occur at Memory_Base_Address_1 + EC_Address. Offset */
#define EMI_MEMORY_READ_LIMIT_1_OFFSET (0x110)        /**< (EMI_MEMORY_READ_LIMIT_1) Memory Read Limit 1 Register, [14:2]: Whenever a read of any byte in the EC Data Register is attempted, and bit 15 of EC_ADDRESS is 1, the field EC_ADDRESS in the EC_Address_Register is compared to this field. As long as EC_ADDRESS is less than this value, the EC_Data_Register will be loaded from the 24-bit internal address space. Offset */
#define EMI_MEMORY_WRITE_LIMIT_1_OFFSET (0x112)        /**< (EMI_MEMORY_WRITE_LIMIT_1) Memory Write Limit 1 Register, [14:2]: Whenever a write of any byte in EC DATA Register is attempted and bit 15 of EC_Address is 1, the field EC_Address[14:2] in the EC_Address Register is compared to this field. As long as EC_Address[14:2] is less than Memory_Write_Limit_1[14:2] the addressed bytes in the EC DATA Register will be written into the internal 24-bit address space. If EC_Address[14:2] is greater than or equal to the Memory_Write_Limit_1[14:2] no writes will take place. Offset */
#define EMI_EC_SWI_SET_OFFSET        (0x114)        /**< (EMI_EC_SWI_SET) [15:1] Interrupt Set Register, Writing a bit in this field with a '1b' sets the corresponding bit in the Interrupt Source Register to '1b'. Writing a bit in this field with a '0b' has no effect. Reading this field returns the current contents of the Interrupt Source Register. Offset */
#define EMI_CLEAR_ENABLE_OFFSET      (0x116)        /**< (EMI_CLEAR_ENABLE) [15:1] Host Clear Enable Register, When a bit in this field is '0b', the corresponding bit in the Interrupt Source Register cannot be cleared by writes to the Interrupt Source Register. When a bit in this field is '1b', the corresponding bit in the Interrupt Source Register can be cleared when that register bit is written with a '1b'. Offset */

/** \brief EMI register API structure */
typedef struct
{  /* The Embedded Memory Interface (EMI) provides a standard run-time mechanism\n        for the system host to communicate with the Embedded Controller (EC) and other logical components. */
  __IO  __EMI_HOST_EC_MBX_bits_t       HOST_EC_MBX;   /**< Offset: 0x00 (R/W   8) Host-to-EC Mailbox Register */
  __IO  __EMI_EC_HOST_MBX_bits_t       EC_HOST_MBX;   /**< Offset: 0x01 (R/W   8) EC-to-Host Mailbox Register */
  __IO  __EMI_EC_ADDRESS_LSB_bits_t    EC_ADDRESS_LSB; /**< Offset: 0x02 (R/W   8) EC Address Access Control Register */
  __IO  __EMI_EC_ADDRESS_MSB_bits_t    EC_ADDRESS_MSB; /**< Offset: 0x03 (R/W   8) EC Address Access Control Register */
  __IO  __EMI_EC_DATA_BYTE_bits_t      EC_DATA_BYTE[4]; /**< Offset: 0x04 (R/W   8) EC Data Byte Register */
  __IO  __EMI_EC_INT_SOURCE_LSB_bits_t EC_INT_SOURCE_LSB; /**< Offset: 0x08 (R/W   8) Interrupt Source LSB Register */
  __IO  __EMI_EC_INT_SOURCE_MSB_bits_t EC_INT_SOURCE_MSB; /**< Offset: 0x09 (R/W   8) Interrupt Source MSB Register */
  __IO  __EMI_EC_INT_MASK_LSB_bits_t   EC_INT_MASK_LSB; /**< Offset: 0x0A (R/W   8) Interrupt Mask LSB Register */
  __IO  __EMI_EC_INT_MASK_MSB_bits_t   EC_INT_MASK_MSB; /**< Offset: 0x0B (R/W   8) Interrupt Mask MSB Register */
  __IO  __EMI_APPLICATION_ID_bits_t    APPLICATION_ID; /**< Offset: 0x0C (R/W   8) Application ID Register, APPLICATION_ID When this field is 00h it can be written with any value. When set to a non-zero value, writing that value will clear this register to 00h. When set to a non-zero value, writing any value other than the current contents will have no effect. */
  __IO  __EMI_HOST2EC_MBX_bits_t       HOST2EC_MBX;   /**< Offset: 0x100 (R/W   8) Host-to-EC Mailbox Register, 8-bit mailbox used communicate information from the system host to the embedded controller. Writing this register generates an event to notify the embedded controller. (R/WC) */
  __IO  __EMI_EC2HOST_MBX_bits_t       EC2HOST_MBX;   /**< Offset: 0x101 (R/W   8) EC-to-Host Mailbox Register, 8-bit mailbox used communicate information from the embedded controller to the system host. Writing this register generates an event to notify the system host. */
  __IO  __EMI_MEMORY_BASE_ADDRESS_0_bits_t MEMORY_BASE_ADDRESS_0; /**< Offset: 0x104 (R/W  32) Memory Base Address 0 Register [31:2] This memory base address defines the beginning of region 0 in the Embedded Controller's 32-bit internal address space. Memory allocated to region 0 is intended to be shared between the Host and the EC. The region defined by this base register is used when bit 15 of the EC Address Register is 0. The access will be to a memory location at an offset defined by the EC_Address relative to the beginning of the region defined by this register. Therefore, a read or write to the memory that is triggered by the EC Data Register will occur at Memory_Base_Address_0 + EC_Address. */
  __IO  __EMI_MEMORY_READ_LIMIT_0_bits_t MEMORY_READ_LIMIT_0; /**< Offset: 0x108 (R/W  16) Memory Read Limit 0 Register [14:2] Whenever a read of any byte in the EC Data Register is attempted, and bit 15 of EC_Address is 0, the field EC_Address[14:2] in the EC_Address_Register is compared to this field. As long as EC_Address[14:2] is less than this field the EC_Data_Register will be loaded from the 24-bit internal address space. */
  __IO  __EMI_MEMORY_WRITE_LIMIT_0_bits_t MEMORY_WRITE_LIMIT_0; /**< Offset: 0x10A (R/W  16) Memory Write Limit 0 Register [14:2] Whenever a write of any byte in EC DATA Register is attempted and bit 15 of EC_Address is 0, the field EC_ADDRESS_MSB in the EC_Address Register is compared to this field. As long as EC_Address[14:2] is less than Memory_Write_Limit_0[14:2] the addressed bytes in the EC DATA Register will be written into the internal 24-bit address space. If EC_Address[14:2] is greater than or equal to the Memory_Write_Limit_0[14:2] no writes will take place. */
  __IO  __EMI_MEMORY_BASE_ADDRESS_1_bits_t MEMORY_BASE_ADDRESS_1; /**< Offset: 0x10C (R/W  32) Memory Base Address 1 Register. [31:2] This memory base address defines the beginning of region 1 in the Embedded Controller's 32-bit internal address space. Memory allocated to region 1 is intended to be shared between the Host and the EC. The region defined by this base register is used when bit 15 of the EC Address Register is 1. The access will be to a memory location at an offset defined by the EC_Address relative to the beginning of the region defined by this register. Therefore, a read or write to the memory that is triggered by the EC Data Register will occur at Memory_Base_Address_1 + EC_Address. */
  __IO  __EMI_MEMORY_READ_LIMIT_1_bits_t MEMORY_READ_LIMIT_1; /**< Offset: 0x110 (R/W  16) Memory Read Limit 1 Register, [14:2]: Whenever a read of any byte in the EC Data Register is attempted, and bit 15 of EC_ADDRESS is 1, the field EC_ADDRESS in the EC_Address_Register is compared to this field. As long as EC_ADDRESS is less than this value, the EC_Data_Register will be loaded from the 24-bit internal address space. */
  __IO  __EMI_MEMORY_WRITE_LIMIT_1_bits_t MEMORY_WRITE_LIMIT_1; /**< Offset: 0x112 (R/W  16) Memory Write Limit 1 Register, [14:2]: Whenever a write of any byte in EC DATA Register is attempted and bit 15 of EC_Address is 1, the field EC_Address[14:2] in the EC_Address Register is compared to this field. As long as EC_Address[14:2] is less than Memory_Write_Limit_1[14:2] the addressed bytes in the EC DATA Register will be written into the internal 24-bit address space. If EC_Address[14:2] is greater than or equal to the Memory_Write_Limit_1[14:2] no writes will take place. */
  __IO  __EMI_EC_SWI_SET_bits_t        EC_SWI_SET;    /**< Offset: 0x114 (R/W  16) [15:1] Interrupt Set Register, Writing a bit in this field with a '1b' sets the corresponding bit in the Interrupt Source Register to '1b'. Writing a bit in this field with a '0b' has no effect. Reading this field returns the current contents of the Interrupt Source Register. */
  __IO  __EMI_CLEAR_ENABLE_bits_t      CLEAR_ENABLE;  /**< Offset: 0x116 (R/W  16) [15:1] Host Clear Enable Register, When a bit in this field is '0b', the corresponding bit in the Interrupt Source Register cannot be cleared by writes to the Interrupt Source Register. When a bit in this field is '1b', the corresponding bit in the Interrupt Source Register can be cleared when that register bit is written with a '1b'. */
} emi_registers_t;
/** @}  end of The Embedded Memory Interface (EMI) provides a standard run-time mechanism\n        for the system host to communicate with the Embedded Controller (EC) and other logical components. */

#endif /* _PIC32CX_0525SG12_EMI_COMPONENT_H_ */
