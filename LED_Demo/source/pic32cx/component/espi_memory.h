/**
 * \brief Component description for PIC32CX/0525SG12 ESPI_MEMORY
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
#ifndef _PIC32CX_0525SG12_ESPI_MEMORY_COMPONENT_H_
#define _PIC32CX_0525SG12_ESPI_MEMORY_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_ESPI_MEMORY The eSPI Memory Component is one of two Logical Devices (along with the I/O Component) that provide access to all the\n    registers in the device.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR ESPI_MEMORY */
/* ========================================================================== */

/* -------- ESPI_MEMORY_MBX_MEM_BASE_ADDRESS : (ESPI_MEMORY Offset: 0x130) (R/W 32) Mailbox Memory Base Address -------- */

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
} __ESPI_MEMORY_MBX_MEM_BASE_ADDRESS_bits_t;
#define ESPI_MEMORY_MBX_MEM_BASE_ADDRESS_RESETVALUE (0x01U)                                       /**<  (ESPI_MEMORY_MBX_MEM_BASE_ADDRESS) Mailbox Memory Base Address  Reset Value */

#define ESPI_MEMORY_MBX_MEM_BASE_ADDRESS_MASK_Pos (0)                                            /**< (ESPI_MEMORY_MBX_MEM_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_MEMORY_MBX_MEM_BASE_ADDRESS_MASK_Msk (0xFFU << ESPI_MEMORY_MBX_MEM_BASE_ADDRESS_MASK_Pos)  /**< (ESPI_MEMORY_MBX_MEM_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_MEMORY_MBX_MEM_BASE_ADDRESS_MASK(value) (ESPI_MEMORY_MBX_MEM_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_MEMORY_MBX_MEM_BASE_ADDRESS_MASK_Pos))
#define ESPI_MEMORY_MBX_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_MEMORY_MBX_MEM_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_MEMORY_MBX_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_MEMORY_MBX_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_MEMORY_MBX_MEM_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_MEMORY_MBX_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_MEMORY_MBX_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_MEMORY_MBX_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_MEMORY_MBX_MEM_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_MEMORY_MBX_MEM_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_MEMORY_MBX_MEM_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_MEMORY_MBX_MEM_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_MEMORY_MBX_MEM_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_MEMORY_MBX_MEM_BASE_ADDRESS_Msk  (0x00013FFFUL)                                 /**< (ESPI_MEMORY_MBX_MEM_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB : (ESPI_MEMORY Offset: 0x13a) (R/W 16) ACPI EC Channel 0 Memory BAR (LSB) -------- */

typedef union
{
  struct
  {
    uint16_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint16_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint16_t :2;                        /**< bit: 14..15  Reserved                                      */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB_bits_t;
#define ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB_RESETVALUE (0x204U)                                      /**<  (ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB) ACPI EC Channel 0 Memory BAR (LSB)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB_MASK_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB_MASK_Msk (0xFFU << ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB_MASK_Pos)  /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB_MASK(value) (ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB_MASK_Msk & ((value) << ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB_MASK_Pos))
#define ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB_LOGICAL_DEVICE_NUMBER(value) (ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB_Msk (0x00003FFFUL)                                 /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_MSB : (ESPI_MEMORY Offset: 0x13c) (R/W 16) ACPI EC Channel 0 Memory BAR (MSB) -------- */

typedef union
{
  struct
  {
    uint16_t VIRTUALIZED:1;             /**< bit:      0  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint16_t :15;                       /**< bit:  1..15  Reserved                                      */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_MSB_bits_t;
#define ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_MSB_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_MSB) ACPI EC Channel 0 Memory BAR (MSB)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_MSB_VIRTUALIZED_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_MSB) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_MSB_VIRTUALIZED_Msk (0x1U << ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_MSB_VIRTUALIZED_Pos)  /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_MSB) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_MSB_Msk (0x00000001UL)                                 /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_MSB) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS : (ESPI_MEMORY Offset: 0x144) (R/W 32) ACPI EC Channel 1 Memory BAR -------- */

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
} __ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS_bits_t;
#define ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS_RESETVALUE (0x307U)                                      /**<  (ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS) ACPI EC Channel 1 Memory BAR  Reset Value */

#define ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS_MASK_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS_MASK_Msk (0xFFU << ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS_MASK_Pos)  /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS_MASK(value) (ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS_MASK_Pos))
#define ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS_Msk (0x00013FFFUL)                                 /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB : (ESPI_MEMORY Offset: 0x14e) (R/W 16) ACPI EC Channel 2 Memory BAR (LSB) -------- */

typedef union
{
  struct
  {
    uint16_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint16_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint16_t :2;                        /**< bit: 14..15  Reserved                                      */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB_bits_t;
#define ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB_RESETVALUE (0x407U)                                      /**<  (ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB) ACPI EC Channel 2 Memory BAR (LSB)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB_MASK_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB_MASK_Msk (0xFFU << ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB_MASK_Pos)  /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB_MASK(value) (ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB_MASK_Msk & ((value) << ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB_MASK_Pos))
#define ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB_LOGICAL_DEVICE_NUMBER(value) (ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB_Msk (0x00003FFFUL)                                 /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_MSB : (ESPI_MEMORY Offset: 0x150) (R/W 16) ACPI EC Channel 2 Memory BAR (MSB) -------- */

typedef union
{
  struct
  {
    uint16_t VIRTUALIZED:1;             /**< bit:      0  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint16_t :15;                       /**< bit:  1..15  Reserved                                      */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_MSB_bits_t;
#define ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_MSB_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_MSB) ACPI EC Channel 2 Memory BAR (MSB)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_MSB_VIRTUALIZED_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_MSB) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_MSB_VIRTUALIZED_Msk (0x1U << ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_MSB_VIRTUALIZED_Pos)  /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_MSB) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_MSB_Msk (0x00000001UL)                                 /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_MSB) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS : (ESPI_MEMORY Offset: 0x158) (R/W 32) ACPI EC Channel 3 Memory BAR -------- */

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
} __ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS_bits_t;
#define ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS_RESETVALUE (0x507U)                                      /**<  (ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS) ACPI EC Channel 3 Memory BAR  Reset Value */

#define ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS_MASK_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS_MASK_Msk (0xFFU << ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS_MASK_Pos)  /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS_MASK(value) (ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS_MASK_Pos))
#define ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS_Msk (0x00013FFFUL)                                 /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS : (ESPI_MEMORY Offset: 0x16c) (R/W 32) Embedded Memory Interface (EMI) 0 Memory Base Address -------- */

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
} __ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS_bits_t;
#define ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS_RESETVALUE (0x100FU)                                     /**<  (ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS) Embedded Memory Interface (EMI) 0 Memory Base Address  Reset Value */

#define ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS_MASK_Pos (0)                                            /**< (ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS_MASK_Msk (0xFFU << ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS_MASK_Pos)  /**< (ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS_MASK(value) (ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS_MASK_Msk & ((value) << ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS_MASK_Pos))
#define ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER(value) (ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS_VIRTUALIZED_Pos (16)                                           /**< (ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS_VIRTUALIZED_Msk (0x1U << ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS_VIRTUALIZED_Pos)  /**< (ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS_Msk (0x00013FFFUL)                                 /**< (ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS) Register Mask  */

/* -------- ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB : (ESPI_MEMORY Offset: 0x176) (R/W 16) Embedded Memory Interface (EMI) 1 Memory Base Address (LSB) -------- */

typedef union
{
  struct
  {
    uint16_t MASK:8;                    /**< bit:   0..7  These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. */
    uint16_t LOGICAL_DEVICE_NUMBER:6;   /**< bit:  8..13  These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. */
    uint16_t :2;                        /**< bit: 14..15  Reserved                                      */
  };
  uint16_t w;
} __ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB_bits_t;
#define ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB_RESETVALUE (0x110FU)                                     /**<  (ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB) Embedded Memory Interface (EMI) 1 Memory Base Address (LSB)  Reset Value */

#define ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB_MASK_Pos (0)                                            /**< (ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Position */
#define ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB_MASK_Msk (0xFFU << ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB_MASK_Pos)  /**< (ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB) These 8 bits are used to mask off address bits in the address match between an eSPI I/O address and the Host Address field of the BARs.\n      A block of up to 256 8-bit registers can be assigned to one base address. Mask */
#define ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB_MASK(value) (ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB_MASK_Msk & ((value) << ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB_MASK_Pos))
#define ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB_LOGICAL_DEVICE_NUMBER_Pos (8)                                            /**< (ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Position */
#define ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB_LOGICAL_DEVICE_NUMBER_Msk (0x3FU << ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB_LOGICAL_DEVICE_NUMBER_Pos)  /**< (ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB) These 6 bits are used to specify a logical device number within a bus. This field is multiplied by 400h to provide the address within the\n      peripheral bus address. Logical Device Numbers that do not corresponding to logical devices that are present on the device are invalid. Mask */
#define ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB_LOGICAL_DEVICE_NUMBER(value) (ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB_LOGICAL_DEVICE_NUMBER_Msk & ((value) << ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB_LOGICAL_DEVICE_NUMBER_Pos))
#define ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB_Msk (0x00003FFFUL)                                 /**< (ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB) Register Mask  */

/* -------- ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_MSB : (ESPI_MEMORY Offset: 0x178) (R/W 16) Embedded Memory Interface (EMI) 1 Memory Base Address (MSB) -------- */

typedef union
{
  struct
  {
    uint16_t VIRTUALIZED:1;             /**< bit:      0  1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. */
    uint16_t :15;                       /**< bit:  1..15  Reserved                                      */
  };
  uint16_t w;
} __ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_MSB_bits_t;
#define ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_MSB_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_MSB) Embedded Memory Interface (EMI) 1 Memory Base Address (MSB)  Reset Value */

#define ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_MSB_VIRTUALIZED_Pos (0)                                            /**< (ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_MSB) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Position */
#define ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_MSB_VIRTUALIZED_Msk (0x1U << ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_MSB_VIRTUALIZED_Pos)  /**< (ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_MSB) 1=Peripheral Channel I/O for this device is virtualized, and reads and writes are handled in firmware\n      0=All Peripheral Channel I/O Reads and Writes for this device are completed by hardware. Mask */
#define ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_MSB_Msk (0x00000001UL)                                 /**< (ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_MSB) Register Mask  */

/* -------- ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF : (ESPI_MEMORY Offset: 0x1ac) (R/W 16) SRAM 0 Memory Base Address Config -------- */

typedef union
{
  struct
  {
    uint16_t RAM_VALID:1;               /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint16_t RAM_ACCESS:2;              /**< bit:   1..2  These 2 bits define the access type of access to this SRAM region.\n      3=Host has Read/write access to the region\n      2=Host has Write-only access to the region\n      1=Host has Read-only access to the region\n      0=Host has no access to this region */
    uint16_t :1;                        /**< bit:      3  Reserved                                      */
    uint16_t RAM_SIZE:4;                /**< bit:   4..7  This field defines the size of the region mapped from Host Memory address space into the internal address space, in powers of 2.\n      15=The region is 64KB in extent\n      14=The region is 32KB in extent\n      ...\n      1=The region is 2B in extent\n      0=The region is 1B in extent. */
    uint16_t :8;                        /**< bit:  8..15  Reserved                                      */
  };
  uint16_t w;
} __ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF_bits_t;
#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF) SRAM 0 Memory Base Address Config  Reset Value */

#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF_RAM_VALID_Pos (0)                                            /**< (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF_RAM_VALID_Msk (0x1U << ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF_RAM_VALID_Pos)  /**< (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF_RAM_ACCESS_Pos (1)                                            /**< (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF) These 2 bits define the access type of access to this SRAM region.\n      3=Host has Read/write access to the region\n      2=Host has Write-only access to the region\n      1=Host has Read-only access to the region\n      0=Host has no access to this region Position */
#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF_RAM_ACCESS_Msk (0x3U << ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF_RAM_ACCESS_Pos)  /**< (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF) These 2 bits define the access type of access to this SRAM region.\n      3=Host has Read/write access to the region\n      2=Host has Write-only access to the region\n      1=Host has Read-only access to the region\n      0=Host has no access to this region Mask */
#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF_RAM_ACCESS(value) (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF_RAM_ACCESS_Msk & ((value) << ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF_RAM_ACCESS_Pos))
#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF_RAM_SIZE_Pos (4)                                            /**< (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF) This field defines the size of the region mapped from Host Memory address space into the internal address space, in powers of 2.\n      15=The region is 64KB in extent\n      14=The region is 32KB in extent\n      ...\n      1=The region is 2B in extent\n      0=The region is 1B in extent. Position */
#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF_RAM_SIZE_Msk (0xFU << ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF_RAM_SIZE_Pos)  /**< (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF) This field defines the size of the region mapped from Host Memory address space into the internal address space, in powers of 2.\n      15=The region is 64KB in extent\n      14=The region is 32KB in extent\n      ...\n      1=The region is 2B in extent\n      0=The region is 1B in extent. Mask */
#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF_RAM_SIZE(value) (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF_RAM_SIZE_Msk & ((value) << ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF_RAM_SIZE_Pos))
#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF_Msk (0x000000F7UL)                                 /**< (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF) Register Mask  */

/* -------- ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_LSB : (ESPI_MEMORY Offset: 0x1ae) (R/W 16) SRAM 0 Memory Base Address LSB -------- */

typedef union
{
  struct
  {
    uint16_t RAM_ADDRESS:16;            /**< bit:  0..15  This is the LSB of the 32-bit field that defines the base address of the internal memory region to which Host accesses\n      to the region starting at RAM eSPI Host Address are mapped. The least significant 2**RAM SIZE bits are ignored. */
  };
  uint16_t w;
} __ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_LSB_bits_t;
#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_LSB_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_LSB) SRAM 0 Memory Base Address LSB  Reset Value */

#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_LSB_RAM_ADDRESS_Pos (0)                                            /**< (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_LSB) This is the LSB of the 32-bit field that defines the base address of the internal memory region to which Host accesses\n      to the region starting at RAM eSPI Host Address are mapped. The least significant 2**RAM SIZE bits are ignored. Position */
#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_LSB_RAM_ADDRESS_Msk (0xFFFFU << ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_LSB_RAM_ADDRESS_Pos)  /**< (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_LSB) This is the LSB of the 32-bit field that defines the base address of the internal memory region to which Host accesses\n      to the region starting at RAM eSPI Host Address are mapped. The least significant 2**RAM SIZE bits are ignored. Mask */
#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_LSB_RAM_ADDRESS(value) (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_LSB_RAM_ADDRESS_Msk & ((value) << ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_LSB_RAM_ADDRESS_Pos))
#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_LSB_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_LSB) Register Mask  */

/* -------- ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_MSB : (ESPI_MEMORY Offset: 0x1b0) (R/W 32) SRAM 0 Memory Base Address MSB -------- */

typedef union
{
  struct
  {
    uint32_t RAM_ADDRESS:16;            /**< bit:  0..15  This is the MSB of the 32-bit field that defines the base address of the internal memory region to which Host accesses\n      to the region starting at RAM eSPI Host Address are mapped. The least significant 2**RAM SIZE bits are ignored. */
    uint32_t :16;                       /**< bit: 16..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_MSB_bits_t;
#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_MSB_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_MSB) SRAM 0 Memory Base Address MSB  Reset Value */

#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_MSB_RAM_ADDRESS_Pos (0)                                            /**< (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_MSB) This is the MSB of the 32-bit field that defines the base address of the internal memory region to which Host accesses\n      to the region starting at RAM eSPI Host Address are mapped. The least significant 2**RAM SIZE bits are ignored. Position */
#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_MSB_RAM_ADDRESS_Msk (0xFFFFU << ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_MSB_RAM_ADDRESS_Pos)  /**< (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_MSB) This is the MSB of the 32-bit field that defines the base address of the internal memory region to which Host accesses\n      to the region starting at RAM eSPI Host Address are mapped. The least significant 2**RAM SIZE bits are ignored. Mask */
#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_MSB_RAM_ADDRESS(value) (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_MSB_RAM_ADDRESS_Msk & ((value) << ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_MSB_RAM_ADDRESS_Pos))
#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_MSB_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_MSB) Register Mask  */

/* -------- ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF : (ESPI_MEMORY Offset: 0x1b6) (R/W 16) SRAM 1 Memory Base Address Config -------- */

typedef union
{
  struct
  {
    uint16_t RAM_VALID:1;               /**< bit:      0  1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. */
    uint16_t RAM_ACCESS:2;              /**< bit:   1..2  These 2 bits define the access type of access to this SRAM region.\n      3=Host has Read/write access to the region\n      2=Host has Write-only access to the region\n      1=Host has Read-only access to the region\n      0=Host has no access to this region */
    uint16_t :1;                        /**< bit:      3  Reserved                                      */
    uint16_t RAM_SIZE:4;                /**< bit:   4..7  This field defines the size of the region mapped from Host Memory address space into the internal address space, in powers of 2.\n      15=The region is 64KB in extent\n      14=The region is 32KB in extent\n      ...\n      1=The region is 2B in extent\n      0=The region is 1B in extent. */
    uint16_t :8;                        /**< bit:  8..15  Reserved                                      */
  };
  uint16_t w;
} __ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF_bits_t;
#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF) SRAM 1 Memory Base Address Config  Reset Value */

#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF_RAM_VALID_Pos (0)                                            /**< (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Position */
#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF_RAM_VALID_Msk (0x1U << ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF_RAM_VALID_Pos)  /**< (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF) 1=The BAR is valid and will participate in eSPI matches.\n      0=The BAR is ignored. Mask */
#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF_RAM_ACCESS_Pos (1)                                            /**< (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF) These 2 bits define the access type of access to this SRAM region.\n      3=Host has Read/write access to the region\n      2=Host has Write-only access to the region\n      1=Host has Read-only access to the region\n      0=Host has no access to this region Position */
#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF_RAM_ACCESS_Msk (0x3U << ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF_RAM_ACCESS_Pos)  /**< (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF) These 2 bits define the access type of access to this SRAM region.\n      3=Host has Read/write access to the region\n      2=Host has Write-only access to the region\n      1=Host has Read-only access to the region\n      0=Host has no access to this region Mask */
#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF_RAM_ACCESS(value) (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF_RAM_ACCESS_Msk & ((value) << ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF_RAM_ACCESS_Pos))
#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF_RAM_SIZE_Pos (4)                                            /**< (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF) This field defines the size of the region mapped from Host Memory address space into the internal address space, in powers of 2.\n      15=The region is 64KB in extent\n      14=The region is 32KB in extent\n      ...\n      1=The region is 2B in extent\n      0=The region is 1B in extent. Position */
#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF_RAM_SIZE_Msk (0xFU << ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF_RAM_SIZE_Pos)  /**< (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF) This field defines the size of the region mapped from Host Memory address space into the internal address space, in powers of 2.\n      15=The region is 64KB in extent\n      14=The region is 32KB in extent\n      ...\n      1=The region is 2B in extent\n      0=The region is 1B in extent. Mask */
#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF_RAM_SIZE(value) (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF_RAM_SIZE_Msk & ((value) << ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF_RAM_SIZE_Pos))
#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF_Msk (0x000000F7UL)                                 /**< (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF) Register Mask  */

/* -------- ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_LSB : (ESPI_MEMORY Offset: 0x1b8) (R/W 16) SRAM 1 Memory Base Address LSB -------- */

typedef union
{
  struct
  {
    uint16_t RAM_ADDRESS:16;            /**< bit:  0..15  This is the LSB of the 32-bit field that defines the base address of the internal memory region to which Host accesses\n      to the region starting at RAM eSPI Host Address are mapped. The least significant 2**RAM SIZE bits are ignored. */
  };
  uint16_t w;
} __ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_LSB_bits_t;
#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_LSB_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_LSB) SRAM 1 Memory Base Address LSB  Reset Value */

#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_LSB_RAM_ADDRESS_Pos (0)                                            /**< (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_LSB) This is the LSB of the 32-bit field that defines the base address of the internal memory region to which Host accesses\n      to the region starting at RAM eSPI Host Address are mapped. The least significant 2**RAM SIZE bits are ignored. Position */
#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_LSB_RAM_ADDRESS_Msk (0xFFFFU << ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_LSB_RAM_ADDRESS_Pos)  /**< (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_LSB) This is the LSB of the 32-bit field that defines the base address of the internal memory region to which Host accesses\n      to the region starting at RAM eSPI Host Address are mapped. The least significant 2**RAM SIZE bits are ignored. Mask */
#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_LSB_RAM_ADDRESS(value) (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_LSB_RAM_ADDRESS_Msk & ((value) << ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_LSB_RAM_ADDRESS_Pos))
#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_LSB_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_LSB) Register Mask  */

/* -------- ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_MSB : (ESPI_MEMORY Offset: 0x1ba) (R/W 16) SRAM 1 Memory Base Address MSB -------- */

typedef union
{
  struct
  {
    uint16_t RAM_ADDRESS:16;            /**< bit:  0..15  This the MSB of the 32-bit field that defines the base address of the internal memory region to which Host accesses\n      to the region starting at RAM eSPI Host Address are mapped. The least significant 2**RAM SIZE bits are ignored. */
  };
  uint16_t w;
} __ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_MSB_bits_t;
#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_MSB_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_MSB) SRAM 1 Memory Base Address MSB  Reset Value */

#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_MSB_RAM_ADDRESS_Pos (0)                                            /**< (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_MSB) This the MSB of the 32-bit field that defines the base address of the internal memory region to which Host accesses\n      to the region starting at RAM eSPI Host Address are mapped. The least significant 2**RAM SIZE bits are ignored. Position */
#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_MSB_RAM_ADDRESS_Msk (0xFFFFU << ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_MSB_RAM_ADDRESS_Pos)  /**< (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_MSB) This the MSB of the 32-bit field that defines the base address of the internal memory region to which Host accesses\n      to the region starting at RAM eSPI Host Address are mapped. The least significant 2**RAM SIZE bits are ignored. Mask */
#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_MSB_RAM_ADDRESS(value) (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_MSB_RAM_ADDRESS_Msk & ((value) << ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_MSB_RAM_ADDRESS_Pos))
#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_MSB_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_MSB) Register Mask  */

/* -------- ESPI_MEMORY_BUS_MASTER_STATUS : (ESPI_MEMORY Offset: 0x200) (R/W 32) Bus Master Status Register -------- */

typedef union
{
  struct
  {
    uint32_t BM1_TRANSFER_DONE:1;       /**< bit:      0  This bit is set to '1' when a START transfer on Bus Master Channel 1 has completed, and occurs simultaneously with\n      the clearing of the BM1_BUSY bit. This may happen normally, but it is also guaranteed to happen if any of the Error bits in this\n      register section (bits[11:2]) is set by an error condition. At the time that this bit is set to '1', the Error bits are guaranteed\n      to be in their final states, and can be examined. Firmware is required to clear this bit, by writing '1' to this bit position, before\n      altering any BM1 registers or making a new START request, otherwise interrupts from this block will be unreliable. (R/WC) */
    uint32_t BM1_BUSY:1;                /**< bit:      1  Hardware sets this bit to 1 when the control bit BM1_START in the Bus Master 1 Control Register is written with a 1.\n      This bit is cleared when the transfer completes. This may happen normally, but it is guaranteed to happen also if any of the Error bits\n      in this register section (bits[11:2]) is set by an error condition. */
    uint32_t BM1_ABORTED_BY_EC:1;       /**< bit:      2  This bit is set when the control bit BM1_ABORT in the Bus Master 1 Control Register is written with a 1 during an active\n      transfer. (R/WC) */
    uint32_t BM1_ABORTED_BY_HOST:1;     /**< bit:      3  A '1' in this bit indicates that the last requested Mastering operation was aborted because Bus Mastering has been\n      disabled by the Host. Bus Mastering is disabled whenever the Peripheral Channel Mastering Enable bit in that register is '0', or the\n      Peripheral Channel Enable bit is '0'. (R/WC) */
    uint32_t BM1_ABORTED_BY_CH2_ERROR:1;  /**< bit:      4  This bit is set if an error occurs on Bus Master Channel 2 while a Channel 1 transfer is in progress, if the two channels\n      are linked. Linkage occurs when bit BM1_WAIT_BM2_NOT_BUSY in register Bus Master 1 Control Register is set to '1'. No traffic will occur\n      from this channel before the error is posted and the BM1_TRANSFER_DONE bit is set. (R/WC) */
    uint32_t BM1_START_OVERFLOW:1;      /**< bit:      5  This bit is set if the bit BM1_START in the Bus Master 1 Control Register is written with a 1 while the bit BM1_BUSY is 1.\n      This condition immediately halts the transfer in progress also (BM1_TRANSFER_DONE=1). (R/WC) */
    uint32_t BM1_DATA_OVERRUN:1;        /**< bit:      6  This bit is set if the transfer on Bus Master Channel 1 completed but too many bytes were delivered by the eSPI Host.\n      Some of the data will not be delivered on the internal bus. (R/WC) */
    uint32_t BM1_INCOMPLETE:1;          /**< bit:      7  This bit is set if the transfer on Bus Master Channel 1 completed but an insufficient number of bytes were transferred.\n      Some of the data will not be delivered on the internal bus. (R/WC) */
    uint32_t BM1_FAIL:1;                /**< bit:      8  This bit is set if a Layer 3 transaction from Bus Master Channel 1 completes with an Unsuccessful Completion packet from\n      the eSPI Host. For example, this will happen if the START request attempts to read from a forbidden or unmapped address in System Memory.\n      Bad Writes, however, cannot be flagged this way, and will be silently dropped by the eSPI Host without setting this bit. (R/WC) */
    uint32_t BM1_INTERNAL_BUS_ERROR:1;  /**< bit:      9  This bit is set if a transfer on Bus Master Channel 1 is terminated due to a bus error internal to the EC. This can happen\n      if an invalid address is provided in the Bus Master 1 internal Address register. (R/WC) */
    uint32_t :1;                        /**< bit:     10  Reserved                                      */
    uint32_t BM1_BAD_REQUEST:1;         /**< bit:     11  This bit is set, and the START request is terminated immediately (BM1_TRANSFER_DONE=1) without triggering traffic, if\n      register contents are invalid at the time the BM1_START bit is written to '1' by firmware.  (R/WC)\n      Examples of a Bad Request are:\n      Length of zero\n      Length greater than 4K (1000h)\n      Host Address and Length together specifying a request that crosses a 4KByte boundary. This might violate the Scatter/Gather structure\n      of the Host memory, so is not allowed. */
    uint32_t :4;                        /**< bit: 12..15  Reserved                                      */
    uint32_t BM2_TRANSFER_DONE:1;       /**< bit:     16  This bit is set to '1' when a START transfer on Bus Master Channel 2 has completed, and occurs simultaneously with the\n      clearing of the BM2_BUSY bit. This may happen normally, but it is guaranteed to happen also if any of the Error bits in this register\n      section (bits[27:18]) is set by an error condition. At the time that this bit is set to '1', the Error bits are guaranteed to be in their\n      final states, and can be examined. (R/WC) */
    uint32_t BM2_BUSY:1;                /**< bit:     17  Hardware sets this bit to 1 when the control bit BM2_START in the Bus Master 2 Control Register is written with a 1.\n      This bit is cleared when the transfer completes. This may happen normally, but it is guaranteed to happen also if any of the Error bits\n      in this register section (bits[27:18]) is set by an error condition. */
    uint32_t BM2_ABORTED_BY_EC:1;       /**< bit:     18  This bit is set when the control bit BM2_ABORT in the Bus Master 2 Control Register is written with a 1 during an active transfer. (R/WC) */
    uint32_t BM2_ABORTED_BY_HOST:1;     /**< bit:     19  A '1' in this bit indicates that the last requested Mastering operation was aborted because Bus Mastering has been disabled\n      by the Host. Bus Mastering is disabled whenever the Peripheral Channel Mastering Enable bit in that register is '0', or the Peripheral\n      Channel Enable bit is '0'. (R/WC) */
    uint32_t BM2_ABORTED_BY_CH1_ERROR:1;  /**< bit:     20  This bit is set if an error occurs on Bus Master Channel 1 while a Channel 2 transfer is in progress, if the two channels\n      are linked. Linkage occurs when bit BM2_WAIT_BM1_NOT_BUSY in register Bus Master 2 Control Register is set to '1'. No traffic will occur\n      from this channel before the error is posted and the BM2_TRANSFER_DONE bit is set. (R/WC) */
    uint32_t BM2_START_OVERFLOW:1;      /**< bit:     21  This bit is set if the bit BM2_START in the Bus Master 2 Control Register is written with a 1 while the bit BM2_BUSY is 1.\n      This condition immediately halts the transfer in progress also (BM2_TRANSFER_DONE=1). (R/WC) */
    uint32_t BM2_DATA_OVERRUN:1;        /**< bit:     22  This bit is set if the transfer on Bus Master Channel 2 completed but too many bytes were delivered by the eSPI Host.\n      Some of the data will not be delivered on the internal bus. (R/WC) */
    uint32_t BM2_INCOMPLETE:1;          /**< bit:     23  This bit is set if the transfer on Bus Master Channel 2 completed but an insufficient number of bytes were transferred.\n      Some of the data will not be delivered on the internal bus. (R/WC) */
    uint32_t BM2_FAIL:1;                /**< bit:     24  This bit is set if a Layer 3 transaction from Bus Master Channel 2 completes with an Unsuccessful Completion packet from the\n      eSPI Host. For example, this will happen if the START request attempts to read from a forbidden or unmapped address in System Memory.\n      Bad Writes, however, cannot be flagged this way, and will be silently dropped by the eSPI Host without setting this bit. (R/WC) */
    uint32_t BM2_INTERNAL_BUS_ERROR:1;  /**< bit:     25  This bit is set if a transfer on Bus Master Channel 2 is terminated due to a bus error internal to the EC. This can happen\n      if an invalid address is provided in the Bus Master 2 internal Address register. (R/WC) */
    uint32_t :1;                        /**< bit:     26  Reserved                                      */
    uint32_t BM2_BAD_REQUEST:1;         /**< bit:     27  This bit is set, and the START request is terminated immediately (BM2_TRANSFER_DONE=1) without triggering traffic, if\n      register contents are invalid at the time the BM2_START bit is written to '1' by firmware. (R/WC)\n      Examples of a Bad Request are:\n      Length of zero, or Length greater than 4K (1000h)\n      Host Address and Length together specifying a request that crosses a 4KByte boundary. This might violate the Scatter/Gather\n      structure of the Host memory, so is not allowed. */
    uint32_t :4;                        /**< bit: 28..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_MEMORY_BUS_MASTER_STATUS_bits_t;
#define ESPI_MEMORY_BUS_MASTER_STATUS_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_BUS_MASTER_STATUS) Bus Master Status Register  Reset Value */

#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_TRANSFER_DONE_Pos (0)                                            /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set to '1' when a START transfer on Bus Master Channel 1 has completed, and occurs simultaneously with\n      the clearing of the BM1_BUSY bit. This may happen normally, but it is also guaranteed to happen if any of the Error bits in this\n      register section (bits[11:2]) is set by an error condition. At the time that this bit is set to '1', the Error bits are guaranteed\n      to be in their final states, and can be examined. Firmware is required to clear this bit, by writing '1' to this bit position, before\n      altering any BM1 registers or making a new START request, otherwise interrupts from this block will be unreliable. (R/WC) Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_TRANSFER_DONE_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM1_TRANSFER_DONE_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set to '1' when a START transfer on Bus Master Channel 1 has completed, and occurs simultaneously with\n      the clearing of the BM1_BUSY bit. This may happen normally, but it is also guaranteed to happen if any of the Error bits in this\n      register section (bits[11:2]) is set by an error condition. At the time that this bit is set to '1', the Error bits are guaranteed\n      to be in their final states, and can be examined. Firmware is required to clear this bit, by writing '1' to this bit position, before\n      altering any BM1 registers or making a new START request, otherwise interrupts from this block will be unreliable. (R/WC) Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_BUSY_Pos (1)                                            /**< (ESPI_MEMORY_BUS_MASTER_STATUS) Hardware sets this bit to 1 when the control bit BM1_START in the Bus Master 1 Control Register is written with a 1.\n      This bit is cleared when the transfer completes. This may happen normally, but it is guaranteed to happen also if any of the Error bits\n      in this register section (bits[11:2]) is set by an error condition. Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_BUSY_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM1_BUSY_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) Hardware sets this bit to 1 when the control bit BM1_START in the Bus Master 1 Control Register is written with a 1.\n      This bit is cleared when the transfer completes. This may happen normally, but it is guaranteed to happen also if any of the Error bits\n      in this register section (bits[11:2]) is set by an error condition. Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_ABORTED_BY_EC_Pos (2)                                            /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set when the control bit BM1_ABORT in the Bus Master 1 Control Register is written with a 1 during an active\n      transfer. (R/WC) Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_ABORTED_BY_EC_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM1_ABORTED_BY_EC_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set when the control bit BM1_ABORT in the Bus Master 1 Control Register is written with a 1 during an active\n      transfer. (R/WC) Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_ABORTED_BY_HOST_Pos (3)                                            /**< (ESPI_MEMORY_BUS_MASTER_STATUS) A '1' in this bit indicates that the last requested Mastering operation was aborted because Bus Mastering has been\n      disabled by the Host. Bus Mastering is disabled whenever the Peripheral Channel Mastering Enable bit in that register is '0', or the\n      Peripheral Channel Enable bit is '0'. (R/WC) Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_ABORTED_BY_HOST_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM1_ABORTED_BY_HOST_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) A '1' in this bit indicates that the last requested Mastering operation was aborted because Bus Mastering has been\n      disabled by the Host. Bus Mastering is disabled whenever the Peripheral Channel Mastering Enable bit in that register is '0', or the\n      Peripheral Channel Enable bit is '0'. (R/WC) Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_ABORTED_BY_CH2_ERROR_Pos (4)                                            /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if an error occurs on Bus Master Channel 2 while a Channel 1 transfer is in progress, if the two channels\n      are linked. Linkage occurs when bit BM1_WAIT_BM2_NOT_BUSY in register Bus Master 1 Control Register is set to '1'. No traffic will occur\n      from this channel before the error is posted and the BM1_TRANSFER_DONE bit is set. (R/WC) Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_ABORTED_BY_CH2_ERROR_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM1_ABORTED_BY_CH2_ERROR_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if an error occurs on Bus Master Channel 2 while a Channel 1 transfer is in progress, if the two channels\n      are linked. Linkage occurs when bit BM1_WAIT_BM2_NOT_BUSY in register Bus Master 1 Control Register is set to '1'. No traffic will occur\n      from this channel before the error is posted and the BM1_TRANSFER_DONE bit is set. (R/WC) Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_START_OVERFLOW_Pos (5)                                            /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if the bit BM1_START in the Bus Master 1 Control Register is written with a 1 while the bit BM1_BUSY is 1.\n      This condition immediately halts the transfer in progress also (BM1_TRANSFER_DONE=1). (R/WC) Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_START_OVERFLOW_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM1_START_OVERFLOW_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if the bit BM1_START in the Bus Master 1 Control Register is written with a 1 while the bit BM1_BUSY is 1.\n      This condition immediately halts the transfer in progress also (BM1_TRANSFER_DONE=1). (R/WC) Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_DATA_OVERRUN_Pos (6)                                            /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if the transfer on Bus Master Channel 1 completed but too many bytes were delivered by the eSPI Host.\n      Some of the data will not be delivered on the internal bus. (R/WC) Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_DATA_OVERRUN_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM1_DATA_OVERRUN_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if the transfer on Bus Master Channel 1 completed but too many bytes were delivered by the eSPI Host.\n      Some of the data will not be delivered on the internal bus. (R/WC) Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_INCOMPLETE_Pos (7)                                            /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if the transfer on Bus Master Channel 1 completed but an insufficient number of bytes were transferred.\n      Some of the data will not be delivered on the internal bus. (R/WC) Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_INCOMPLETE_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM1_INCOMPLETE_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if the transfer on Bus Master Channel 1 completed but an insufficient number of bytes were transferred.\n      Some of the data will not be delivered on the internal bus. (R/WC) Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_FAIL_Pos (8)                                            /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if a Layer 3 transaction from Bus Master Channel 1 completes with an Unsuccessful Completion packet from\n      the eSPI Host. For example, this will happen if the START request attempts to read from a forbidden or unmapped address in System Memory.\n      Bad Writes, however, cannot be flagged this way, and will be silently dropped by the eSPI Host without setting this bit. (R/WC) Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_FAIL_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM1_FAIL_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if a Layer 3 transaction from Bus Master Channel 1 completes with an Unsuccessful Completion packet from\n      the eSPI Host. For example, this will happen if the START request attempts to read from a forbidden or unmapped address in System Memory.\n      Bad Writes, however, cannot be flagged this way, and will be silently dropped by the eSPI Host without setting this bit. (R/WC) Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_INTERNAL_BUS_ERROR_Pos (9)                                            /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if a transfer on Bus Master Channel 1 is terminated due to a bus error internal to the EC. This can happen\n      if an invalid address is provided in the Bus Master 1 internal Address register. (R/WC) Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_INTERNAL_BUS_ERROR_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM1_INTERNAL_BUS_ERROR_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if a transfer on Bus Master Channel 1 is terminated due to a bus error internal to the EC. This can happen\n      if an invalid address is provided in the Bus Master 1 internal Address register. (R/WC) Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_BAD_REQUEST_Pos (11)                                           /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set, and the START request is terminated immediately (BM1_TRANSFER_DONE=1) without triggering traffic, if\n      register contents are invalid at the time the BM1_START bit is written to '1' by firmware.  (R/WC)\n      Examples of a Bad Request are:\n      Length of zero\n      Length greater than 4K (1000h)\n      Host Address and Length together specifying a request that crosses a 4KByte boundary. This might violate the Scatter/Gather structure\n      of the Host memory, so is not allowed. Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM1_BAD_REQUEST_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM1_BAD_REQUEST_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set, and the START request is terminated immediately (BM1_TRANSFER_DONE=1) without triggering traffic, if\n      register contents are invalid at the time the BM1_START bit is written to '1' by firmware.  (R/WC)\n      Examples of a Bad Request are:\n      Length of zero\n      Length greater than 4K (1000h)\n      Host Address and Length together specifying a request that crosses a 4KByte boundary. This might violate the Scatter/Gather structure\n      of the Host memory, so is not allowed. Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_TRANSFER_DONE_Pos (16)                                           /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set to '1' when a START transfer on Bus Master Channel 2 has completed, and occurs simultaneously with the\n      clearing of the BM2_BUSY bit. This may happen normally, but it is guaranteed to happen also if any of the Error bits in this register\n      section (bits[27:18]) is set by an error condition. At the time that this bit is set to '1', the Error bits are guaranteed to be in their\n      final states, and can be examined. (R/WC) Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_TRANSFER_DONE_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM2_TRANSFER_DONE_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set to '1' when a START transfer on Bus Master Channel 2 has completed, and occurs simultaneously with the\n      clearing of the BM2_BUSY bit. This may happen normally, but it is guaranteed to happen also if any of the Error bits in this register\n      section (bits[27:18]) is set by an error condition. At the time that this bit is set to '1', the Error bits are guaranteed to be in their\n      final states, and can be examined. (R/WC) Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_BUSY_Pos (17)                                           /**< (ESPI_MEMORY_BUS_MASTER_STATUS) Hardware sets this bit to 1 when the control bit BM2_START in the Bus Master 2 Control Register is written with a 1.\n      This bit is cleared when the transfer completes. This may happen normally, but it is guaranteed to happen also if any of the Error bits\n      in this register section (bits[27:18]) is set by an error condition. Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_BUSY_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM2_BUSY_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) Hardware sets this bit to 1 when the control bit BM2_START in the Bus Master 2 Control Register is written with a 1.\n      This bit is cleared when the transfer completes. This may happen normally, but it is guaranteed to happen also if any of the Error bits\n      in this register section (bits[27:18]) is set by an error condition. Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_ABORTED_BY_EC_Pos (18)                                           /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set when the control bit BM2_ABORT in the Bus Master 2 Control Register is written with a 1 during an active transfer. (R/WC) Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_ABORTED_BY_EC_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM2_ABORTED_BY_EC_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set when the control bit BM2_ABORT in the Bus Master 2 Control Register is written with a 1 during an active transfer. (R/WC) Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_ABORTED_BY_HOST_Pos (19)                                           /**< (ESPI_MEMORY_BUS_MASTER_STATUS) A '1' in this bit indicates that the last requested Mastering operation was aborted because Bus Mastering has been disabled\n      by the Host. Bus Mastering is disabled whenever the Peripheral Channel Mastering Enable bit in that register is '0', or the Peripheral\n      Channel Enable bit is '0'. (R/WC) Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_ABORTED_BY_HOST_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM2_ABORTED_BY_HOST_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) A '1' in this bit indicates that the last requested Mastering operation was aborted because Bus Mastering has been disabled\n      by the Host. Bus Mastering is disabled whenever the Peripheral Channel Mastering Enable bit in that register is '0', or the Peripheral\n      Channel Enable bit is '0'. (R/WC) Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_ABORTED_BY_CH1_ERROR_Pos (20)                                           /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if an error occurs on Bus Master Channel 1 while a Channel 2 transfer is in progress, if the two channels\n      are linked. Linkage occurs when bit BM2_WAIT_BM1_NOT_BUSY in register Bus Master 2 Control Register is set to '1'. No traffic will occur\n      from this channel before the error is posted and the BM2_TRANSFER_DONE bit is set. (R/WC) Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_ABORTED_BY_CH1_ERROR_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM2_ABORTED_BY_CH1_ERROR_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if an error occurs on Bus Master Channel 1 while a Channel 2 transfer is in progress, if the two channels\n      are linked. Linkage occurs when bit BM2_WAIT_BM1_NOT_BUSY in register Bus Master 2 Control Register is set to '1'. No traffic will occur\n      from this channel before the error is posted and the BM2_TRANSFER_DONE bit is set. (R/WC) Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_START_OVERFLOW_Pos (21)                                           /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if the bit BM2_START in the Bus Master 2 Control Register is written with a 1 while the bit BM2_BUSY is 1.\n      This condition immediately halts the transfer in progress also (BM2_TRANSFER_DONE=1). (R/WC) Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_START_OVERFLOW_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM2_START_OVERFLOW_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if the bit BM2_START in the Bus Master 2 Control Register is written with a 1 while the bit BM2_BUSY is 1.\n      This condition immediately halts the transfer in progress also (BM2_TRANSFER_DONE=1). (R/WC) Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_DATA_OVERRUN_Pos (22)                                           /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if the transfer on Bus Master Channel 2 completed but too many bytes were delivered by the eSPI Host.\n      Some of the data will not be delivered on the internal bus. (R/WC) Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_DATA_OVERRUN_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM2_DATA_OVERRUN_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if the transfer on Bus Master Channel 2 completed but too many bytes were delivered by the eSPI Host.\n      Some of the data will not be delivered on the internal bus. (R/WC) Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_INCOMPLETE_Pos (23)                                           /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if the transfer on Bus Master Channel 2 completed but an insufficient number of bytes were transferred.\n      Some of the data will not be delivered on the internal bus. (R/WC) Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_INCOMPLETE_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM2_INCOMPLETE_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if the transfer on Bus Master Channel 2 completed but an insufficient number of bytes were transferred.\n      Some of the data will not be delivered on the internal bus. (R/WC) Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_FAIL_Pos (24)                                           /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if a Layer 3 transaction from Bus Master Channel 2 completes with an Unsuccessful Completion packet from the\n      eSPI Host. For example, this will happen if the START request attempts to read from a forbidden or unmapped address in System Memory.\n      Bad Writes, however, cannot be flagged this way, and will be silently dropped by the eSPI Host without setting this bit. (R/WC) Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_FAIL_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM2_FAIL_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if a Layer 3 transaction from Bus Master Channel 2 completes with an Unsuccessful Completion packet from the\n      eSPI Host. For example, this will happen if the START request attempts to read from a forbidden or unmapped address in System Memory.\n      Bad Writes, however, cannot be flagged this way, and will be silently dropped by the eSPI Host without setting this bit. (R/WC) Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_INTERNAL_BUS_ERROR_Pos (25)                                           /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if a transfer on Bus Master Channel 2 is terminated due to a bus error internal to the EC. This can happen\n      if an invalid address is provided in the Bus Master 2 internal Address register. (R/WC) Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_INTERNAL_BUS_ERROR_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM2_INTERNAL_BUS_ERROR_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set if a transfer on Bus Master Channel 2 is terminated due to a bus error internal to the EC. This can happen\n      if an invalid address is provided in the Bus Master 2 internal Address register. (R/WC) Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_BAD_REQUEST_Pos (27)                                           /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set, and the START request is terminated immediately (BM2_TRANSFER_DONE=1) without triggering traffic, if\n      register contents are invalid at the time the BM2_START bit is written to '1' by firmware. (R/WC)\n      Examples of a Bad Request are:\n      Length of zero, or Length greater than 4K (1000h)\n      Host Address and Length together specifying a request that crosses a 4KByte boundary. This might violate the Scatter/Gather\n      structure of the Host memory, so is not allowed. Position */
#define ESPI_MEMORY_BUS_MASTER_STATUS_BM2_BAD_REQUEST_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_STATUS_BM2_BAD_REQUEST_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_STATUS) This bit is set, and the START request is terminated immediately (BM2_TRANSFER_DONE=1) without triggering traffic, if\n      register contents are invalid at the time the BM2_START bit is written to '1' by firmware. (R/WC)\n      Examples of a Bad Request are:\n      Length of zero, or Length greater than 4K (1000h)\n      Host Address and Length together specifying a request that crosses a 4KByte boundary. This might violate the Scatter/Gather\n      structure of the Host memory, so is not allowed. Mask */
#define ESPI_MEMORY_BUS_MASTER_STATUS_Msk     (0x0BFF0BFFUL)                                 /**< (ESPI_MEMORY_BUS_MASTER_STATUS) Register Mask  */

/* -------- ESPI_MEMORY_BUS_MASTER_INT_EN : (ESPI_MEMORY Offset: 0x204) (R/W 32) Bus Master Interrupt Enable Register -------- */

typedef union
{
  struct
  {
    uint32_t BM1_TRANSFER_DONE_EN:1;    /**< bit:      0  When this bit is '1' an interrupt is generated when the bit BM1_TRANSFER_DONE in the Bus Master Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. */
    uint32_t BM2_TRANSFER_DONE_EN:1;    /**< bit:      1  When this bit is '1' an interrupt is generated when the bit BM2_TRANSFER_DONE in the Bus Master Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. */
    uint32_t :30;                       /**< bit:  2..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_MEMORY_BUS_MASTER_INT_EN_bits_t;
#define ESPI_MEMORY_BUS_MASTER_INT_EN_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_BUS_MASTER_INT_EN) Bus Master Interrupt Enable Register  Reset Value */

#define ESPI_MEMORY_BUS_MASTER_INT_EN_BM1_TRANSFER_DONE_EN_Pos (0)                                            /**< (ESPI_MEMORY_BUS_MASTER_INT_EN) When this bit is '1' an interrupt is generated when the bit BM1_TRANSFER_DONE in the Bus Master Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_MEMORY_BUS_MASTER_INT_EN_BM1_TRANSFER_DONE_EN_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_INT_EN_BM1_TRANSFER_DONE_EN_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_INT_EN) When this bit is '1' an interrupt is generated when the bit BM1_TRANSFER_DONE in the Bus Master Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_MEMORY_BUS_MASTER_INT_EN_BM2_TRANSFER_DONE_EN_Pos (1)                                            /**< (ESPI_MEMORY_BUS_MASTER_INT_EN) When this bit is '1' an interrupt is generated when the bit BM2_TRANSFER_DONE in the Bus Master Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Position */
#define ESPI_MEMORY_BUS_MASTER_INT_EN_BM2_TRANSFER_DONE_EN_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_INT_EN_BM2_TRANSFER_DONE_EN_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_INT_EN) When this bit is '1' an interrupt is generated when the bit BM2_TRANSFER_DONE in the Bus Master Status Register is 1.\n      When this bit is '0', the status bit will not generate an interrupt. Mask */
#define ESPI_MEMORY_BUS_MASTER_INT_EN_Msk     (0x00000003UL)                                 /**< (ESPI_MEMORY_BUS_MASTER_INT_EN) Register Mask  */

/* -------- ESPI_MEMORY_BUS_MASTER_CONFIG : (ESPI_MEMORY Offset: 0x208) (R/W 32) Bus Master Configuration Register -------- */

typedef union
{
  struct
  {
    uint32_t BM1_TAG:4;                 /**< bit:   0..3  This 4-bit Tag value is included in all eSPI traffic originating from the BM1 Bus Master instance.\n      This bit should not be modified while the bit BM1_BUSY in the Bus Master Status Register is '1'. */
    uint32_t :12;                       /**< bit:  4..15  Reserved                                      */
    uint32_t BM2_TAG:4;                 /**< bit: 16..19  This 4-bit Tag value is included in all eSPI traffic originating from the BM2 Bus Master instance.\n      This bit should not be modified while the bit BM2_BUSY in the Bus Master Status Register is '1'. */
    uint32_t :12;                       /**< bit: 20..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_MEMORY_BUS_MASTER_CONFIG_bits_t;
#define ESPI_MEMORY_BUS_MASTER_CONFIG_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_BUS_MASTER_CONFIG) Bus Master Configuration Register  Reset Value */

#define ESPI_MEMORY_BUS_MASTER_CONFIG_BM1_TAG_Pos (0)                                            /**< (ESPI_MEMORY_BUS_MASTER_CONFIG) This 4-bit Tag value is included in all eSPI traffic originating from the BM1 Bus Master instance.\n      This bit should not be modified while the bit BM1_BUSY in the Bus Master Status Register is '1'. Position */
#define ESPI_MEMORY_BUS_MASTER_CONFIG_BM1_TAG_Msk (0xFU << ESPI_MEMORY_BUS_MASTER_CONFIG_BM1_TAG_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_CONFIG) This 4-bit Tag value is included in all eSPI traffic originating from the BM1 Bus Master instance.\n      This bit should not be modified while the bit BM1_BUSY in the Bus Master Status Register is '1'. Mask */
#define ESPI_MEMORY_BUS_MASTER_CONFIG_BM1_TAG(value) (ESPI_MEMORY_BUS_MASTER_CONFIG_BM1_TAG_Msk & ((value) << ESPI_MEMORY_BUS_MASTER_CONFIG_BM1_TAG_Pos))
#define ESPI_MEMORY_BUS_MASTER_CONFIG_BM2_TAG_Pos (16)                                           /**< (ESPI_MEMORY_BUS_MASTER_CONFIG) This 4-bit Tag value is included in all eSPI traffic originating from the BM2 Bus Master instance.\n      This bit should not be modified while the bit BM2_BUSY in the Bus Master Status Register is '1'. Position */
#define ESPI_MEMORY_BUS_MASTER_CONFIG_BM2_TAG_Msk (0xFU << ESPI_MEMORY_BUS_MASTER_CONFIG_BM2_TAG_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_CONFIG) This 4-bit Tag value is included in all eSPI traffic originating from the BM2 Bus Master instance.\n      This bit should not be modified while the bit BM2_BUSY in the Bus Master Status Register is '1'. Mask */
#define ESPI_MEMORY_BUS_MASTER_CONFIG_BM2_TAG(value) (ESPI_MEMORY_BUS_MASTER_CONFIG_BM2_TAG_Msk & ((value) << ESPI_MEMORY_BUS_MASTER_CONFIG_BM2_TAG_Pos))
#define ESPI_MEMORY_BUS_MASTER_CONFIG_Msk     (0x000F000FUL)                                 /**< (ESPI_MEMORY_BUS_MASTER_CONFIG) Register Mask  */

/* -------- ESPI_MEMORY_BUS_MASTER_1_CONTROL : (ESPI_MEMORY Offset: 0x210) (R/W 32) Bus Master 1 Control Register -------- */

typedef union
{
  struct
  {
    uint32_t BM1_START:1;               /**< bit:      0  A write of '1' to this bit starts a Bus Master transfer on Bus Master Channel 1. A write of 0 has no effect. Reads of this bit \n      return 0. The transmission will be inhibited if the Peripheral channel is not Ready, as defined in the eSPI Peripheral Channel Ready Register. */
    uint32_t BM1_ABORT:1;               /**< bit:      1  A write of '1' to this bit will cause an active transfer on Bus Master Channel 1 to terminate at the next point allowed by\n      the eSPI protocol. A write of 0 has no effect. Reads of this bit return 0. If this bit is written to 1 by firmware, there is no guarantee\n      that any data will have been transferred. */
    uint32_t BM1_ENABLE_INTERNAL_INCR:1;  /**< bit:      2  1=The internal address will be incremented after each transfer to eSPI\n      0=The internal address will remain fixed for the entire Bus Master transfer. This may be used to transfer data to or from an on-chip\n      FIFO instead of a region of memory, or to fill a region of Host memory from a single byte value. */
    uint32_t BM1_WAIT_BM2_NOT_BUSY:1;   /**< bit:      3  1=The transfer on Bus Master Channel 1 will be held until a transfer in progress on Bus Master Channel 2 has completed.\n      If that transfer completes unsuccessfully, then this transfer will also terminate, before generating any traffic, with the\n      BM1_ABORTED_BY_CH2_ERROR flag set.\n      0=The transfer on Bus Master Channel 1 will proceed independently of the status of Bus Master Channel 2. */
    uint32_t :4;                        /**< bit:   4..7  Reserved                                      */
    uint32_t BM1_CYCLE_TYPE:2;          /**< bit:   8..9  This field provides the cycle type to use inside the eSPI transaction header:\n      11b=Memory Write, 64-bit addressing\n      10b=Memory Read, 64-bit addressing\n      01b=Memory Write, 32-bit addressing\n      00b=Memory Read, 32-bit addressing. */
    uint32_t :6;                        /**< bit: 10..15  Reserved                                      */
    uint32_t BM1_LENGTH:13;             /**< bit: 16..28  This field sets the length in bytes of a transfer on Bus Master Channel 1. A value of zero, or a value greater than exactly\n      4K (0x1000) is illegal. Any length which, in combination with the Bus Master 1 Host Address register, will cause the transfer to cross\n      a 4K-byte boundary in System Memory is also illegal. These illegal settings will cause a request to terminate immediately, with no\n      traffic, and with Bad Request error status posted. */
    uint32_t :3;                        /**< bit: 29..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_MEMORY_BUS_MASTER_1_CONTROL_bits_t;
#define ESPI_MEMORY_BUS_MASTER_1_CONTROL_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_BUS_MASTER_1_CONTROL) Bus Master 1 Control Register  Reset Value */

#define ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_START_Pos (0)                                            /**< (ESPI_MEMORY_BUS_MASTER_1_CONTROL) A write of '1' to this bit starts a Bus Master transfer on Bus Master Channel 1. A write of 0 has no effect. Reads of this bit \n      return 0. The transmission will be inhibited if the Peripheral channel is not Ready, as defined in the eSPI Peripheral Channel Ready Register. Position */
#define ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_START_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_START_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_1_CONTROL) A write of '1' to this bit starts a Bus Master transfer on Bus Master Channel 1. A write of 0 has no effect. Reads of this bit \n      return 0. The transmission will be inhibited if the Peripheral channel is not Ready, as defined in the eSPI Peripheral Channel Ready Register. Mask */
#define ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_ABORT_Pos (1)                                            /**< (ESPI_MEMORY_BUS_MASTER_1_CONTROL) A write of '1' to this bit will cause an active transfer on Bus Master Channel 1 to terminate at the next point allowed by\n      the eSPI protocol. A write of 0 has no effect. Reads of this bit return 0. If this bit is written to 1 by firmware, there is no guarantee\n      that any data will have been transferred. Position */
#define ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_ABORT_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_ABORT_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_1_CONTROL) A write of '1' to this bit will cause an active transfer on Bus Master Channel 1 to terminate at the next point allowed by\n      the eSPI protocol. A write of 0 has no effect. Reads of this bit return 0. If this bit is written to 1 by firmware, there is no guarantee\n      that any data will have been transferred. Mask */
#define ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_ENABLE_INTERNAL_INCR_Pos (2)                                            /**< (ESPI_MEMORY_BUS_MASTER_1_CONTROL) 1=The internal address will be incremented after each transfer to eSPI\n      0=The internal address will remain fixed for the entire Bus Master transfer. This may be used to transfer data to or from an on-chip\n      FIFO instead of a region of memory, or to fill a region of Host memory from a single byte value. Position */
#define ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_ENABLE_INTERNAL_INCR_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_ENABLE_INTERNAL_INCR_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_1_CONTROL) 1=The internal address will be incremented after each transfer to eSPI\n      0=The internal address will remain fixed for the entire Bus Master transfer. This may be used to transfer data to or from an on-chip\n      FIFO instead of a region of memory, or to fill a region of Host memory from a single byte value. Mask */
#define ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_WAIT_BM2_NOT_BUSY_Pos (3)                                            /**< (ESPI_MEMORY_BUS_MASTER_1_CONTROL) 1=The transfer on Bus Master Channel 1 will be held until a transfer in progress on Bus Master Channel 2 has completed.\n      If that transfer completes unsuccessfully, then this transfer will also terminate, before generating any traffic, with the\n      BM1_ABORTED_BY_CH2_ERROR flag set.\n      0=The transfer on Bus Master Channel 1 will proceed independently of the status of Bus Master Channel 2. Position */
#define ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_WAIT_BM2_NOT_BUSY_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_WAIT_BM2_NOT_BUSY_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_1_CONTROL) 1=The transfer on Bus Master Channel 1 will be held until a transfer in progress on Bus Master Channel 2 has completed.\n      If that transfer completes unsuccessfully, then this transfer will also terminate, before generating any traffic, with the\n      BM1_ABORTED_BY_CH2_ERROR flag set.\n      0=The transfer on Bus Master Channel 1 will proceed independently of the status of Bus Master Channel 2. Mask */
#define ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_CYCLE_TYPE_Pos (8)                                            /**< (ESPI_MEMORY_BUS_MASTER_1_CONTROL) This field provides the cycle type to use inside the eSPI transaction header:\n      11b=Memory Write, 64-bit addressing\n      10b=Memory Read, 64-bit addressing\n      01b=Memory Write, 32-bit addressing\n      00b=Memory Read, 32-bit addressing. Position */
#define ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_CYCLE_TYPE_Msk (0x3U << ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_CYCLE_TYPE_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_1_CONTROL) This field provides the cycle type to use inside the eSPI transaction header:\n      11b=Memory Write, 64-bit addressing\n      10b=Memory Read, 64-bit addressing\n      01b=Memory Write, 32-bit addressing\n      00b=Memory Read, 32-bit addressing. Mask */
#define ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_CYCLE_TYPE(value) (ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_CYCLE_TYPE_Msk & ((value) << ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_CYCLE_TYPE_Pos))
#define ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_LENGTH_Pos (16)                                           /**< (ESPI_MEMORY_BUS_MASTER_1_CONTROL) This field sets the length in bytes of a transfer on Bus Master Channel 1. A value of zero, or a value greater than exactly\n      4K (0x1000) is illegal. Any length which, in combination with the Bus Master 1 Host Address register, will cause the transfer to cross\n      a 4K-byte boundary in System Memory is also illegal. These illegal settings will cause a request to terminate immediately, with no\n      traffic, and with Bad Request error status posted. Position */
#define ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_LENGTH_Msk (0x1FFFU << ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_LENGTH_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_1_CONTROL) This field sets the length in bytes of a transfer on Bus Master Channel 1. A value of zero, or a value greater than exactly\n      4K (0x1000) is illegal. Any length which, in combination with the Bus Master 1 Host Address register, will cause the transfer to cross\n      a 4K-byte boundary in System Memory is also illegal. These illegal settings will cause a request to terminate immediately, with no\n      traffic, and with Bad Request error status posted. Mask */
#define ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_LENGTH(value) (ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_LENGTH_Msk & ((value) << ESPI_MEMORY_BUS_MASTER_1_CONTROL_BM1_LENGTH_Pos))
#define ESPI_MEMORY_BUS_MASTER_1_CONTROL_Msk  (0x1FFF030FUL)                                 /**< (ESPI_MEMORY_BUS_MASTER_1_CONTROL) Register Mask  */

/* -------- ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW0 : (ESPI_MEMORY Offset: 0x214) (R/W 32) Bus Master 1 Host Address Register (DWord 0) -------- */

typedef union
{
  struct
  {
    uint32_t BM1_HOST_ADDRESS_LSDW:32;  /**< bit:  0..31  This register sets bits [31:0] of the Host address used for a transfer on Bus Master Channel 1. This address, combined with\n      the Length, must not cross a 4K boundary, or else the START request will terminate without traffic, posting the Bad Request error status. */
  };
  uint32_t w;
} __ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW0_bits_t;
#define ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW0_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW0) Bus Master 1 Host Address Register (DWord 0)  Reset Value */

#define ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW0_BM1_HOST_ADDRESS_LSDW_Pos (0)                                            /**< (ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW0) This register sets bits [31:0] of the Host address used for a transfer on Bus Master Channel 1. This address, combined with\n      the Length, must not cross a 4K boundary, or else the START request will terminate without traffic, posting the Bad Request error status. Position */
#define ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW0_BM1_HOST_ADDRESS_LSDW_Msk (0xFFFFFFFFU << ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW0_BM1_HOST_ADDRESS_LSDW_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW0) This register sets bits [31:0] of the Host address used for a transfer on Bus Master Channel 1. This address, combined with\n      the Length, must not cross a 4K boundary, or else the START request will terminate without traffic, posting the Bad Request error status. Mask */
#define ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW0_BM1_HOST_ADDRESS_LSDW(value) (ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW0_BM1_HOST_ADDRESS_LSDW_Msk & ((value) << ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW0_BM1_HOST_ADDRESS_LSDW_Pos))
#define ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW0_Msk (0xFFFFFFFFUL)                                 /**< (ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW0) Register Mask  */

/* -------- ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW1 : (ESPI_MEMORY Offset: 0x218) (R/W 32) Bus Master 1 Host Address Register (DWord 1) -------- */

typedef union
{
  struct
  {
    uint32_t BM1_HOST_ADDRESS_MSDW:32;  /**< bit:  0..31  This register sets bits [63:32] of the Host address used for a transfer on Bus Master Channel 1. This address, combined with\n      the Length, must not cross a 4K boundary, or else the START request will terminate without traffic, posting the Bad Request error status. */
  };
  uint32_t w;
} __ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW1_bits_t;
#define ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW1_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW1) Bus Master 1 Host Address Register (DWord 1)  Reset Value */

#define ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW1_BM1_HOST_ADDRESS_MSDW_Pos (0)                                            /**< (ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW1) This register sets bits [63:32] of the Host address used for a transfer on Bus Master Channel 1. This address, combined with\n      the Length, must not cross a 4K boundary, or else the START request will terminate without traffic, posting the Bad Request error status. Position */
#define ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW1_BM1_HOST_ADDRESS_MSDW_Msk (0xFFFFFFFFU << ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW1_BM1_HOST_ADDRESS_MSDW_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW1) This register sets bits [63:32] of the Host address used for a transfer on Bus Master Channel 1. This address, combined with\n      the Length, must not cross a 4K boundary, or else the START request will terminate without traffic, posting the Bad Request error status. Mask */
#define ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW1_BM1_HOST_ADDRESS_MSDW(value) (ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW1_BM1_HOST_ADDRESS_MSDW_Msk & ((value) << ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW1_BM1_HOST_ADDRESS_MSDW_Pos))
#define ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW1_Msk (0xFFFFFFFFUL)                                 /**< (ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW1) Register Mask  */

/* -------- ESPI_MEMORY_BUS_MASTER_1_INTERNAL_ADDR : (ESPI_MEMORY Offset: 0x21c) (R/W 32) Bus Master 1 Internal Address Register -------- */

typedef union
{
  struct
  {
    uint32_t :2;                        /**< bit:   0..1  Reserved                                      */
    uint32_t BM1_INTERNAL_ADDRESS:30;   /**< bit:  2..31  This register sets the internal address to be used for a transfer on Bus Master Channel 1. */
  };
  uint32_t w;
} __ESPI_MEMORY_BUS_MASTER_1_INTERNAL_ADDR_bits_t;
#define ESPI_MEMORY_BUS_MASTER_1_INTERNAL_ADDR_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_BUS_MASTER_1_INTERNAL_ADDR) Bus Master 1 Internal Address Register  Reset Value */

#define ESPI_MEMORY_BUS_MASTER_1_INTERNAL_ADDR_BM1_INTERNAL_ADDRESS_Pos (2)                                            /**< (ESPI_MEMORY_BUS_MASTER_1_INTERNAL_ADDR) This register sets the internal address to be used for a transfer on Bus Master Channel 1. Position */
#define ESPI_MEMORY_BUS_MASTER_1_INTERNAL_ADDR_BM1_INTERNAL_ADDRESS_Msk (0x3FFFFFFFU << ESPI_MEMORY_BUS_MASTER_1_INTERNAL_ADDR_BM1_INTERNAL_ADDRESS_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_1_INTERNAL_ADDR) This register sets the internal address to be used for a transfer on Bus Master Channel 1. Mask */
#define ESPI_MEMORY_BUS_MASTER_1_INTERNAL_ADDR_BM1_INTERNAL_ADDRESS(value) (ESPI_MEMORY_BUS_MASTER_1_INTERNAL_ADDR_BM1_INTERNAL_ADDRESS_Msk & ((value) << ESPI_MEMORY_BUS_MASTER_1_INTERNAL_ADDR_BM1_INTERNAL_ADDRESS_Pos))
#define ESPI_MEMORY_BUS_MASTER_1_INTERNAL_ADDR_Msk (0xFFFFFFFCUL)                                 /**< (ESPI_MEMORY_BUS_MASTER_1_INTERNAL_ADDR) Register Mask  */

/* -------- ESPI_MEMORY_BUS_MASTER_2_CONTROL : (ESPI_MEMORY Offset: 0x224) (R/W 32) Bus Master 2 Control Register -------- */

typedef union
{
  struct
  {
    uint32_t BM2_START:1;               /**< bit:      0  A write of '1' to this bit starts a Bus Master transfer on Bus Master Channel 2. A write of 0 has no effect. Reads of this bit \n      return 0. The transmission will be inhibited if the Peripheral channel is not Ready, as defined in the eSPI Peripheral Channel Ready Register. */
    uint32_t BM2_ABORT:1;               /**< bit:      1  A write of '1' to this bit will cause an active transfer on Bus Master Channel 2 to terminate at the next point allowed by\n      the eSPI protocol. A write of 0 has no effect. Reads of this bit return 0. If this bit is written to 1 by firmware, there is no guarantee\n      that any data will have been transferred. */
    uint32_t BM2_ENABLE_INTERNAL_INCR:1;  /**< bit:      2  1=The internal address will be incremented after each transfer to eSPI\n      0=The internal address will remain fixed for the entire Bus Master transfer. This may be used to transfer data to or from an on-chip\n      FIFO instead of a region of memory, or to fill a region of Host memory from a single byte value. */
    uint32_t BM2_WAIT_BM1_NOT_BUSY:1;   /**< bit:      3  1=The transfer on Bus Master Channel 2 will be held until a transfer in progress on Bus Master Channel 1 has completed.\n      If that transfer completes unsuccessfully, then this transfer will also terminate, before generating any traffic, with the\n      BM2_ABORTED_BY_CH1_ERROR flag set.\n      0=The transfer on Bus Master Channel 2 will proceed independently of the status of Bus Master Channel 1. */
    uint32_t :4;                        /**< bit:   4..7  Reserved                                      */
    uint32_t BM2_CYCLE_TYPE:2;          /**< bit:   8..9  This field provides the cycle type to use inside the eSPI transaction header:\n      11b=Memory Write, 64-bit addressing\n      10b=Memory Read, 64-bit addressing\n      01b=Memory Write, 32-bit addressing\n      00b=Memory Read, 32-bit addressing. */
    uint32_t :6;                        /**< bit: 10..15  Reserved                                      */
    uint32_t BM2_LENGTH:13;             /**< bit: 16..28  This field sets the length in bytes of a transfer on Bus Master Channel 2. A value of zero, or a value greater than exactly\n      4K (0x1000) is illegal. Any length which, in combination with the Bus Master 2 Host Address register, will cause the transfer to cross\n      a 4K-byte boundary in System Memory is also illegal. These illegal settings will cause a request to terminate immediately, with no\n      traffic, and with Bad Request error status posted. */
    uint32_t :3;                        /**< bit: 29..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_MEMORY_BUS_MASTER_2_CONTROL_bits_t;
#define ESPI_MEMORY_BUS_MASTER_2_CONTROL_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_BUS_MASTER_2_CONTROL) Bus Master 2 Control Register  Reset Value */

#define ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_START_Pos (0)                                            /**< (ESPI_MEMORY_BUS_MASTER_2_CONTROL) A write of '1' to this bit starts a Bus Master transfer on Bus Master Channel 2. A write of 0 has no effect. Reads of this bit \n      return 0. The transmission will be inhibited if the Peripheral channel is not Ready, as defined in the eSPI Peripheral Channel Ready Register. Position */
#define ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_START_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_START_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_2_CONTROL) A write of '1' to this bit starts a Bus Master transfer on Bus Master Channel 2. A write of 0 has no effect. Reads of this bit \n      return 0. The transmission will be inhibited if the Peripheral channel is not Ready, as defined in the eSPI Peripheral Channel Ready Register. Mask */
#define ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_ABORT_Pos (1)                                            /**< (ESPI_MEMORY_BUS_MASTER_2_CONTROL) A write of '1' to this bit will cause an active transfer on Bus Master Channel 2 to terminate at the next point allowed by\n      the eSPI protocol. A write of 0 has no effect. Reads of this bit return 0. If this bit is written to 1 by firmware, there is no guarantee\n      that any data will have been transferred. Position */
#define ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_ABORT_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_ABORT_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_2_CONTROL) A write of '1' to this bit will cause an active transfer on Bus Master Channel 2 to terminate at the next point allowed by\n      the eSPI protocol. A write of 0 has no effect. Reads of this bit return 0. If this bit is written to 1 by firmware, there is no guarantee\n      that any data will have been transferred. Mask */
#define ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_ENABLE_INTERNAL_INCR_Pos (2)                                            /**< (ESPI_MEMORY_BUS_MASTER_2_CONTROL) 1=The internal address will be incremented after each transfer to eSPI\n      0=The internal address will remain fixed for the entire Bus Master transfer. This may be used to transfer data to or from an on-chip\n      FIFO instead of a region of memory, or to fill a region of Host memory from a single byte value. Position */
#define ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_ENABLE_INTERNAL_INCR_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_ENABLE_INTERNAL_INCR_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_2_CONTROL) 1=The internal address will be incremented after each transfer to eSPI\n      0=The internal address will remain fixed for the entire Bus Master transfer. This may be used to transfer data to or from an on-chip\n      FIFO instead of a region of memory, or to fill a region of Host memory from a single byte value. Mask */
#define ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_WAIT_BM1_NOT_BUSY_Pos (3)                                            /**< (ESPI_MEMORY_BUS_MASTER_2_CONTROL) 1=The transfer on Bus Master Channel 2 will be held until a transfer in progress on Bus Master Channel 1 has completed.\n      If that transfer completes unsuccessfully, then this transfer will also terminate, before generating any traffic, with the\n      BM2_ABORTED_BY_CH1_ERROR flag set.\n      0=The transfer on Bus Master Channel 2 will proceed independently of the status of Bus Master Channel 1. Position */
#define ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_WAIT_BM1_NOT_BUSY_Msk (0x1U << ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_WAIT_BM1_NOT_BUSY_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_2_CONTROL) 1=The transfer on Bus Master Channel 2 will be held until a transfer in progress on Bus Master Channel 1 has completed.\n      If that transfer completes unsuccessfully, then this transfer will also terminate, before generating any traffic, with the\n      BM2_ABORTED_BY_CH1_ERROR flag set.\n      0=The transfer on Bus Master Channel 2 will proceed independently of the status of Bus Master Channel 1. Mask */
#define ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_CYCLE_TYPE_Pos (8)                                            /**< (ESPI_MEMORY_BUS_MASTER_2_CONTROL) This field provides the cycle type to use inside the eSPI transaction header:\n      11b=Memory Write, 64-bit addressing\n      10b=Memory Read, 64-bit addressing\n      01b=Memory Write, 32-bit addressing\n      00b=Memory Read, 32-bit addressing. Position */
#define ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_CYCLE_TYPE_Msk (0x3U << ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_CYCLE_TYPE_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_2_CONTROL) This field provides the cycle type to use inside the eSPI transaction header:\n      11b=Memory Write, 64-bit addressing\n      10b=Memory Read, 64-bit addressing\n      01b=Memory Write, 32-bit addressing\n      00b=Memory Read, 32-bit addressing. Mask */
#define ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_CYCLE_TYPE(value) (ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_CYCLE_TYPE_Msk & ((value) << ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_CYCLE_TYPE_Pos))
#define ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_LENGTH_Pos (16)                                           /**< (ESPI_MEMORY_BUS_MASTER_2_CONTROL) This field sets the length in bytes of a transfer on Bus Master Channel 2. A value of zero, or a value greater than exactly\n      4K (0x1000) is illegal. Any length which, in combination with the Bus Master 2 Host Address register, will cause the transfer to cross\n      a 4K-byte boundary in System Memory is also illegal. These illegal settings will cause a request to terminate immediately, with no\n      traffic, and with Bad Request error status posted. Position */
#define ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_LENGTH_Msk (0x1FFFU << ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_LENGTH_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_2_CONTROL) This field sets the length in bytes of a transfer on Bus Master Channel 2. A value of zero, or a value greater than exactly\n      4K (0x1000) is illegal. Any length which, in combination with the Bus Master 2 Host Address register, will cause the transfer to cross\n      a 4K-byte boundary in System Memory is also illegal. These illegal settings will cause a request to terminate immediately, with no\n      traffic, and with Bad Request error status posted. Mask */
#define ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_LENGTH(value) (ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_LENGTH_Msk & ((value) << ESPI_MEMORY_BUS_MASTER_2_CONTROL_BM2_LENGTH_Pos))
#define ESPI_MEMORY_BUS_MASTER_2_CONTROL_Msk  (0x1FFF030FUL)                                 /**< (ESPI_MEMORY_BUS_MASTER_2_CONTROL) Register Mask  */

/* -------- ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW0 : (ESPI_MEMORY Offset: 0x228) (R/W 32) Bus Master 2 Host Address Register (DWord 0) -------- */

typedef union
{
  struct
  {
    uint32_t BM2_HOST_ADDRESS_LSDW:32;  /**< bit:  0..31  This register sets bits [31:0] of the Host address used for a transfer on Bus Master Channel 2. This address, combined with\n      the Length, must not cross a 4K boundary, or else the START request will terminate without traffic, posting the Bad Request error status. */
  };
  uint32_t w;
} __ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW0_bits_t;
#define ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW0_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW0) Bus Master 2 Host Address Register (DWord 0)  Reset Value */

#define ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW0_BM2_HOST_ADDRESS_LSDW_Pos (0)                                            /**< (ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW0) This register sets bits [31:0] of the Host address used for a transfer on Bus Master Channel 2. This address, combined with\n      the Length, must not cross a 4K boundary, or else the START request will terminate without traffic, posting the Bad Request error status. Position */
#define ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW0_BM2_HOST_ADDRESS_LSDW_Msk (0xFFFFFFFFU << ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW0_BM2_HOST_ADDRESS_LSDW_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW0) This register sets bits [31:0] of the Host address used for a transfer on Bus Master Channel 2. This address, combined with\n      the Length, must not cross a 4K boundary, or else the START request will terminate without traffic, posting the Bad Request error status. Mask */
#define ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW0_BM2_HOST_ADDRESS_LSDW(value) (ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW0_BM2_HOST_ADDRESS_LSDW_Msk & ((value) << ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW0_BM2_HOST_ADDRESS_LSDW_Pos))
#define ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW0_Msk (0xFFFFFFFFUL)                                 /**< (ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW0) Register Mask  */

/* -------- ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW1 : (ESPI_MEMORY Offset: 0x22c) (R/W 32) Bus Master 2 Host Address Register (DWord 1) -------- */

typedef union
{
  struct
  {
    uint32_t BM2_HOST_ADDRESS_MSDW:32;  /**< bit:  0..31  This register sets bits [63:32] of the Host address used for a transfer on Bus Master Channel 2. This address, combined with\n      the Length, must not cross a 4K boundary, or else the START request will terminate without traffic, posting the Bad Request error status. */
  };
  uint32_t w;
} __ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW1_bits_t;
#define ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW1_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW1) Bus Master 2 Host Address Register (DWord 1)  Reset Value */

#define ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW1_BM2_HOST_ADDRESS_MSDW_Pos (0)                                            /**< (ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW1) This register sets bits [63:32] of the Host address used for a transfer on Bus Master Channel 2. This address, combined with\n      the Length, must not cross a 4K boundary, or else the START request will terminate without traffic, posting the Bad Request error status. Position */
#define ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW1_BM2_HOST_ADDRESS_MSDW_Msk (0xFFFFFFFFU << ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW1_BM2_HOST_ADDRESS_MSDW_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW1) This register sets bits [63:32] of the Host address used for a transfer on Bus Master Channel 2. This address, combined with\n      the Length, must not cross a 4K boundary, or else the START request will terminate without traffic, posting the Bad Request error status. Mask */
#define ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW1_BM2_HOST_ADDRESS_MSDW(value) (ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW1_BM2_HOST_ADDRESS_MSDW_Msk & ((value) << ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW1_BM2_HOST_ADDRESS_MSDW_Pos))
#define ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW1_Msk (0xFFFFFFFFUL)                                 /**< (ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW1) Register Mask  */

/* -------- ESPI_MEMORY_BUS_MASTER_2_INTERNAL_ADDR : (ESPI_MEMORY Offset: 0x230) (R/W 32) Bus Master 2 Internal Address Register -------- */

typedef union
{
  struct
  {
    uint32_t :2;                        /**< bit:   0..1  Reserved                                      */
    uint32_t BM2_INTERNAL_ADDRESS:30;   /**< bit:  2..31  This register sets the internal address to be used for a transfer on Bus Master Channel 2. */
  };
  uint32_t w;
} __ESPI_MEMORY_BUS_MASTER_2_INTERNAL_ADDR_bits_t;
#define ESPI_MEMORY_BUS_MASTER_2_INTERNAL_ADDR_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_BUS_MASTER_2_INTERNAL_ADDR) Bus Master 2 Internal Address Register  Reset Value */

#define ESPI_MEMORY_BUS_MASTER_2_INTERNAL_ADDR_BM2_INTERNAL_ADDRESS_Pos (2)                                            /**< (ESPI_MEMORY_BUS_MASTER_2_INTERNAL_ADDR) This register sets the internal address to be used for a transfer on Bus Master Channel 2. Position */
#define ESPI_MEMORY_BUS_MASTER_2_INTERNAL_ADDR_BM2_INTERNAL_ADDRESS_Msk (0x3FFFFFFFU << ESPI_MEMORY_BUS_MASTER_2_INTERNAL_ADDR_BM2_INTERNAL_ADDRESS_Pos)  /**< (ESPI_MEMORY_BUS_MASTER_2_INTERNAL_ADDR) This register sets the internal address to be used for a transfer on Bus Master Channel 2. Mask */
#define ESPI_MEMORY_BUS_MASTER_2_INTERNAL_ADDR_BM2_INTERNAL_ADDRESS(value) (ESPI_MEMORY_BUS_MASTER_2_INTERNAL_ADDR_BM2_INTERNAL_ADDRESS_Msk & ((value) << ESPI_MEMORY_BUS_MASTER_2_INTERNAL_ADDR_BM2_INTERNAL_ADDRESS_Pos))
#define ESPI_MEMORY_BUS_MASTER_2_INTERNAL_ADDR_Msk (0xFFFFFFFCUL)                                 /**< (ESPI_MEMORY_BUS_MASTER_2_INTERNAL_ADDR) Register Mask  */

/* -------- ESPI_MEMORY_MBX_MEM_BAR_CFG_W0 : (ESPI_MEMORY Offset: 0x330) (R/W 16) Mailbox Memory BAR Configuration Register (Word 0) -------- */

typedef union
{
  struct
  {
    uint16_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. */
    uint16_t :15;                       /**< bit:  1..15  Reserved                                      */
  };
  uint16_t w;
} __ESPI_MEMORY_MBX_MEM_BAR_CFG_W0_bits_t;
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W0_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_MBX_MEM_BAR_CFG_W0) Mailbox Memory BAR Configuration Register (Word 0)  Reset Value */

#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W0_VALID_Pos (0)                                            /**< (ESPI_MEMORY_MBX_MEM_BAR_CFG_W0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Position */
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W0_VALID_Msk (0x1U << ESPI_MEMORY_MBX_MEM_BAR_CFG_W0_VALID_Pos)  /**< (ESPI_MEMORY_MBX_MEM_BAR_CFG_W0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Mask */
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W0_Msk    (0x00000001UL)                                 /**< (ESPI_MEMORY_MBX_MEM_BAR_CFG_W0) Register Mask  */

/* -------- ESPI_MEMORY_MBX_MEM_BAR_CFG_W1 : (ESPI_MEMORY Offset: 0x332) (R/W 16) Mailbox Memory BAR Configuration Register (Word 1) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W0:16;   /**< bit:  0..15  Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_MBX_MEM_BAR_CFG_W1_bits_t;
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W1_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_MBX_MEM_BAR_CFG_W1) Mailbox Memory BAR Configuration Register (Word 1)  Reset Value */

#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos (0)                                            /**< (ESPI_MEMORY_MBX_MEM_BAR_CFG_W1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Msk (0xFFFFU << ESPI_MEMORY_MBX_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos)  /**< (ESPI_MEMORY_MBX_MEM_BAR_CFG_W1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0(value) (ESPI_MEMORY_MBX_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Msk & ((value) << ESPI_MEMORY_MBX_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos))
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W1_Msk    (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_MBX_MEM_BAR_CFG_W1) Register Mask  */

/* -------- ESPI_MEMORY_MBX_MEM_BAR_CFG_W2 : (ESPI_MEMORY Offset: 0x334) (R/W 16) Mailbox Memory BAR Configuration Register (Word 2) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W1:16;   /**< bit:  0..15  Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_MBX_MEM_BAR_CFG_W2_bits_t;
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W2_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_MBX_MEM_BAR_CFG_W2) Mailbox Memory BAR Configuration Register (Word 2)  Reset Value */

#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos (0)                                            /**< (ESPI_MEMORY_MBX_MEM_BAR_CFG_W2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Msk (0xFFFFU << ESPI_MEMORY_MBX_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos)  /**< (ESPI_MEMORY_MBX_MEM_BAR_CFG_W2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1(value) (ESPI_MEMORY_MBX_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Msk & ((value) << ESPI_MEMORY_MBX_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos))
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W2_Msk    (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_MBX_MEM_BAR_CFG_W2) Register Mask  */

/* -------- ESPI_MEMORY_MBX_MEM_BAR_CFG_W3 : (ESPI_MEMORY Offset: 0x336) (R/W 16) Mailbox Memory BAR Configuration Register (Word 3) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W2:16;   /**< bit:  0..15  Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_MBX_MEM_BAR_CFG_W3_bits_t;
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W3_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_MBX_MEM_BAR_CFG_W3) Mailbox Memory BAR Configuration Register (Word 3)  Reset Value */

#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos (0)                                            /**< (ESPI_MEMORY_MBX_MEM_BAR_CFG_W3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Msk (0xFFFFU << ESPI_MEMORY_MBX_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos)  /**< (ESPI_MEMORY_MBX_MEM_BAR_CFG_W3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2(value) (ESPI_MEMORY_MBX_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Msk & ((value) << ESPI_MEMORY_MBX_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos))
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W3_Msk    (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_MBX_MEM_BAR_CFG_W3) Register Mask  */

/* -------- ESPI_MEMORY_MBX_MEM_BAR_CFG_W4 : (ESPI_MEMORY Offset: 0x338) (R/W 16) Mailbox Memory BAR Configuration Register (Word 4) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W3:16;   /**< bit:  0..15  Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_MBX_MEM_BAR_CFG_W4_bits_t;
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W4_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_MBX_MEM_BAR_CFG_W4) Mailbox Memory BAR Configuration Register (Word 4)  Reset Value */

#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos (0)                                            /**< (ESPI_MEMORY_MBX_MEM_BAR_CFG_W4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Msk (0xFFFFU << ESPI_MEMORY_MBX_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos)  /**< (ESPI_MEMORY_MBX_MEM_BAR_CFG_W4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3(value) (ESPI_MEMORY_MBX_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Msk & ((value) << ESPI_MEMORY_MBX_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos))
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W4_Msk    (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_MBX_MEM_BAR_CFG_W4) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W0 : (ESPI_MEMORY Offset: 0x33a) (R/W 16) ACPI EC Channel 0 Memory BAR Configuration Register (Word 0) -------- */

typedef union
{
  struct
  {
    uint16_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. */
    uint16_t :15;                       /**< bit:  1..15  Reserved                                      */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W0_bits_t;
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W0_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W0) ACPI EC Channel 0 Memory BAR Configuration Register (Word 0)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W0_VALID_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Position */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W0_VALID_Msk (0x1U << ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W0_VALID_Pos)  /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Mask */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W0_Msk (0x00000001UL)                                 /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W0) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W1 : (ESPI_MEMORY Offset: 0x33c) (R/W 16) ACPI EC Channel 0 Memory BAR Configuration Register (Word 1) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W0:16;   /**< bit:  0..15  Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W1_bits_t;
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W1_RESETVALUE (0x62U)                                       /**<  (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W1) ACPI EC Channel 0 Memory BAR Configuration Register (Word 1)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Msk (0xFFFFU << ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos)  /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0(value) (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Msk & ((value) << ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos))
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W1_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W1) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W2 : (ESPI_MEMORY Offset: 0x33e) (R/W 16) ACPI EC Channel 0 Memory BAR Configuration Register (Word 2) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W1:16;   /**< bit:  0..15  Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W2_bits_t;
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W2_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W2) ACPI EC Channel 0 Memory BAR Configuration Register (Word 2)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Msk (0xFFFFU << ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos)  /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1(value) (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Msk & ((value) << ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos))
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W2_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W2) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W3 : (ESPI_MEMORY Offset: 0x340) (R/W 16) ACPI EC Channel 0 Memory BAR Configuration Register (Word 3) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W2:16;   /**< bit:  0..15  Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W3_bits_t;
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W3_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W3) ACPI EC Channel 0 Memory BAR Configuration Register (Word 3)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Msk (0xFFFFU << ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos)  /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2(value) (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Msk & ((value) << ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos))
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W3_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W3) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W4 : (ESPI_MEMORY Offset: 0x342) (R/W 16) ACPI EC Channel 0 Memory BAR Configuration Register (Word 4) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W3:16;   /**< bit:  0..15  Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W4_bits_t;
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W4_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W4) ACPI EC Channel 0 Memory BAR Configuration Register (Word 4)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Msk (0xFFFFU << ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos)  /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3(value) (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Msk & ((value) << ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos))
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W4_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W4) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W0 : (ESPI_MEMORY Offset: 0x344) (R/W 16) ACPI EC Channel 1 Memory BAR Configuration Register (Word 0) -------- */

typedef union
{
  struct
  {
    uint16_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. */
    uint16_t :15;                       /**< bit:  1..15  Reserved                                      */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W0_bits_t;
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W0_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W0) ACPI EC Channel 1 Memory BAR Configuration Register (Word 0)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W0_VALID_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Position */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W0_VALID_Msk (0x1U << ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W0_VALID_Pos)  /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Mask */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W0_Msk (0x00000001UL)                                 /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W0) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W1 : (ESPI_MEMORY Offset: 0x346) (R/W 16) ACPI EC Channel 1 Memory BAR Configuration Register (Word 1) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W0:16;   /**< bit:  0..15  Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W1_bits_t;
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W1_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W1) ACPI EC Channel 1 Memory BAR Configuration Register (Word 1)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Msk (0xFFFFU << ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos)  /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0(value) (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Msk & ((value) << ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos))
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W1_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W1) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W2 : (ESPI_MEMORY Offset: 0x348) (R/W 16) ACPI EC Channel 1 Memory BAR Configuration Register (Word 2) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W1:16;   /**< bit:  0..15  Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W2_bits_t;
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W2_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W2) ACPI EC Channel 1 Memory BAR Configuration Register (Word 2)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Msk (0xFFFFU << ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos)  /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1(value) (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Msk & ((value) << ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos))
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W2_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W2) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W3 : (ESPI_MEMORY Offset: 0x34a) (R/W 16) ACPI EC Channel 1 Memory BAR Configuration Register (Word 3) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W2:16;   /**< bit:  0..15  Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W3_bits_t;
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W3_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W3) ACPI EC Channel 1 Memory BAR Configuration Register (Word 3)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Msk (0xFFFFU << ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos)  /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2(value) (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Msk & ((value) << ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos))
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W3_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W3) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W4 : (ESPI_MEMORY Offset: 0x34c) (R/W 16) ACPI EC Channel 1 Memory BAR Configuration Register (Word 4) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W3:16;   /**< bit:  0..15  Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W4_bits_t;
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W4_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W4) ACPI EC Channel 1 Memory BAR Configuration Register (Word 4)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Msk (0xFFFFU << ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos)  /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3(value) (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Msk & ((value) << ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos))
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W4_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W4) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W0 : (ESPI_MEMORY Offset: 0x34e) (R/W 16) ACPI EC Channel 2 Memory BAR Configuration Register (Word 0) -------- */

typedef union
{
  struct
  {
    uint16_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. */
    uint16_t :15;                       /**< bit:  1..15  Reserved                                      */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W0_bits_t;
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W0_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W0) ACPI EC Channel 2 Memory BAR Configuration Register (Word 0)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W0_VALID_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Position */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W0_VALID_Msk (0x1U << ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W0_VALID_Pos)  /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Mask */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W0_Msk (0x00000001UL)                                 /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W0) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W1 : (ESPI_MEMORY Offset: 0x350) (R/W 16) ACPI EC Channel 2 Memory BAR Configuration Register (Word 1) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W0:16;   /**< bit:  0..15  Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W1_bits_t;
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W1_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W1) ACPI EC Channel 2 Memory BAR Configuration Register (Word 1)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Msk (0xFFFFU << ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos)  /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0(value) (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Msk & ((value) << ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos))
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W1_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W1) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W2 : (ESPI_MEMORY Offset: 0x352) (R/W 16) ACPI EC Channel 2 Memory BAR Configuration Register (Word 2) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W1:16;   /**< bit:  0..15  Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W2_bits_t;
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W2_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W2) ACPI EC Channel 2 Memory BAR Configuration Register (Word 2)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Msk (0xFFFFU << ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos)  /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1(value) (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Msk & ((value) << ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos))
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W2_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W2) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W3 : (ESPI_MEMORY Offset: 0x354) (R/W 16) ACPI EC Channel 2 Memory BAR Configuration Register (Word 3) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W2:16;   /**< bit:  0..15  Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W3_bits_t;
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W3_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W3) ACPI EC Channel 2 Memory BAR Configuration Register (Word 3)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Msk (0xFFFFU << ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos)  /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2(value) (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Msk & ((value) << ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos))
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W3_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W3) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W4 : (ESPI_MEMORY Offset: 0x356) (R/W 16) ACPI EC Channel 2 Memory BAR Configuration Register (Word 4) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W3:16;   /**< bit:  0..15  Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W4_bits_t;
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W4_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W4) ACPI EC Channel 2 Memory BAR Configuration Register (Word 4)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Msk (0xFFFFU << ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos)  /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3(value) (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Msk & ((value) << ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos))
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W4_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W4) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W0 : (ESPI_MEMORY Offset: 0x358) (R/W 16) ACPI EC Channel 3 Memory BAR Configuration Register (Word 0) -------- */

typedef union
{
  struct
  {
    uint16_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. */
    uint16_t :15;                       /**< bit:  1..15  Reserved                                      */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W0_bits_t;
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W0_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W0) ACPI EC Channel 3 Memory BAR Configuration Register (Word 0)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W0_VALID_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Position */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W0_VALID_Msk (0x1U << ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W0_VALID_Pos)  /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Mask */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W0_Msk (0x00000001UL)                                 /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W0) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W1 : (ESPI_MEMORY Offset: 0x35a) (R/W 16) ACPI EC Channel 3 Memory BAR Configuration Register (Word 1) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W0:16;   /**< bit:  0..15  Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W1_bits_t;
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W1_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W1) ACPI EC Channel 3 Memory BAR Configuration Register (Word 1)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Msk (0xFFFFU << ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos)  /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0(value) (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Msk & ((value) << ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos))
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W1_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W1) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W2 : (ESPI_MEMORY Offset: 0x35c) (R/W 16) ACPI EC Channel 3 Memory BAR Configuration Register (Word 2) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W1:16;   /**< bit:  0..15  Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W2_bits_t;
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W2_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W2) ACPI EC Channel 3 Memory BAR Configuration Register (Word 2)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Msk (0xFFFFU << ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos)  /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1(value) (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Msk & ((value) << ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos))
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W2_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W2) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W3 : (ESPI_MEMORY Offset: 0x35e) (R/W 16) ACPI EC Channel 3 Memory BAR Configuration Register (Word 3) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W2:16;   /**< bit:  0..15  Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W3_bits_t;
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W3_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W3) ACPI EC Channel 3 Memory BAR Configuration Register (Word 3)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Msk (0xFFFFU << ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos)  /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2(value) (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Msk & ((value) << ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos))
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W3_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W3) Register Mask  */

/* -------- ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W4 : (ESPI_MEMORY Offset: 0x360) (R/W 16) ACPI EC Channel 3 Memory BAR Configuration Register (Word 4) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W3:16;   /**< bit:  0..15  Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W4_bits_t;
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W4_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W4) ACPI EC Channel 3 Memory BAR Configuration Register (Word 4)  Reset Value */

#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos (0)                                            /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Msk (0xFFFFU << ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos)  /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3(value) (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Msk & ((value) << ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos))
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W4_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W4) Register Mask  */

/* -------- ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W0 : (ESPI_MEMORY Offset: 0x36c) (R/W 16) EMI 0 Memory BAR Configuration Register (Word 0) -------- */

typedef union
{
  struct
  {
    uint16_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. */
    uint16_t :15;                       /**< bit:  1..15  Reserved                                      */
  };
  uint16_t w;
} __ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W0_bits_t;
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W0_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W0) EMI 0 Memory BAR Configuration Register (Word 0)  Reset Value */

#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W0_VALID_Pos (0)                                            /**< (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Position */
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W0_VALID_Msk (0x1U << ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W0_VALID_Pos)  /**< (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Mask */
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W0_Msk  (0x00000001UL)                                 /**< (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W0) Register Mask  */

/* -------- ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W1 : (ESPI_MEMORY Offset: 0x36e) (R/W 16) EMI 0 Memory BAR Configuration Address Register  (Word 1) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W0:16;   /**< bit:  0..15  Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W1_bits_t;
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W1_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W1) EMI 0 Memory BAR Configuration Address Register  (Word 1)  Reset Value */

#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos (0)                                            /**< (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Msk (0xFFFFU << ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos)  /**< (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0(value) (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Msk & ((value) << ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos))
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W1_Msk  (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W1) Register Mask  */

/* -------- ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W2 : (ESPI_MEMORY Offset: 0x370) (R/W 16) EMI 0 Memory BAR Configuration Address Register  (Word 2) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W1:16;   /**< bit:  0..15  Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W2_bits_t;
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W2_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W2) EMI 0 Memory BAR Configuration Address Register  (Word 2)  Reset Value */

#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos (0)                                            /**< (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Msk (0xFFFFU << ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos)  /**< (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1(value) (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Msk & ((value) << ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos))
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W2_Msk  (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W2) Register Mask  */

/* -------- ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W3 : (ESPI_MEMORY Offset: 0x372) (R/W 16) EMI 0 Memory BAR Configuration Address Register  (Word 3) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W2:16;   /**< bit:  0..15  Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W3_bits_t;
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W3_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W3) EMI 0 Memory BAR Configuration Address Register  (Word 3)  Reset Value */

#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos (0)                                            /**< (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Msk (0xFFFFU << ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos)  /**< (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2(value) (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Msk & ((value) << ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos))
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W3_Msk  (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W3) Register Mask  */

/* -------- ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W4 : (ESPI_MEMORY Offset: 0x374) (R/W 16) EMI 0 Memory BAR Configuration Address Register  (Word 4) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W3:16;   /**< bit:  0..15  Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W4_bits_t;
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W4_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W4) EMI 0 Memory BAR Configuration Address Register  (Word 4)  Reset Value */

#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos (0)                                            /**< (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Msk (0xFFFFU << ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos)  /**< (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3(value) (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Msk & ((value) << ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos))
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W4_Msk  (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W4) Register Mask  */

/* -------- ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W0 : (ESPI_MEMORY Offset: 0x376) (R/W 16) EMI 1 Memory BAR Configuration Register (Word 0) ) -------- */

typedef union
{
  struct
  {
    uint16_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. */
    uint16_t :15;                       /**< bit:  1..15  Reserved                                      */
  };
  uint16_t w;
} __ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W0_bits_t;
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W0_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W0) EMI 1 Memory BAR Configuration Register (Word 0) )  Reset Value */

#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W0_VALID_Pos (0)                                            /**< (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Position */
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W0_VALID_Msk (0x1U << ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W0_VALID_Pos)  /**< (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Mask */
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W0_Msk  (0x00000001UL)                                 /**< (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W0) Register Mask  */

/* -------- ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W1 : (ESPI_MEMORY Offset: 0x378) (R/W 16) EMI 1 Memory BAR Configuration Register (Word 1) ) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W0:16;   /**< bit:  0..15  Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W1_bits_t;
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W1_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W1) EMI 1 Memory BAR Configuration Register (Word 1) )  Reset Value */

#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos (0)                                            /**< (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Msk (0xFFFFU << ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos)  /**< (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0(value) (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Msk & ((value) << ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos))
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W1_Msk  (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W1) Register Mask  */

/* -------- ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W2 : (ESPI_MEMORY Offset: 0x37a) (R/W 16) EMI 1 Memory BAR Configuration Register (Word 2) ) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W1:16;   /**< bit:  0..15  Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W2_bits_t;
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W2_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W2) EMI 1 Memory BAR Configuration Register (Word 2) )  Reset Value */

#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos (0)                                            /**< (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Msk (0xFFFFU << ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos)  /**< (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1(value) (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Msk & ((value) << ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos))
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W2_Msk  (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W2) Register Mask  */

/* -------- ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W3 : (ESPI_MEMORY Offset: 0x37c) (R/W 16) EMI 1 Memory BAR Configuration Register (Word 3) ) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W2:16;   /**< bit:  0..15  Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W3_bits_t;
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W3_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W3) EMI 1 Memory BAR Configuration Register (Word 3) )  Reset Value */

#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos (0)                                            /**< (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Msk (0xFFFFU << ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos)  /**< (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2(value) (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Msk & ((value) << ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos))
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W3_Msk  (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W3) Register Mask  */

/* -------- ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W4 : (ESPI_MEMORY Offset: 0x37e) (R/W 16) EMI 1 Memory BAR Configuration Register (Word 4) ) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W3:16;   /**< bit:  0..15  Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W4_bits_t;
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W4_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W4) EMI 1 Memory BAR Configuration Register (Word 4) )  Reset Value */

#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos (0)                                            /**< (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Msk (0xFFFFU << ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos)  /**< (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3(value) (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Msk & ((value) << ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos))
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W4_Msk  (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W4) Register Mask  */

/* -------- ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W0 : (ESPI_MEMORY Offset: 0x3ac) (R/W 16) SRAM BAR 0 Configuration Register (Word 0) ) -------- */

typedef union
{
  struct
  {
    uint16_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. */
    uint16_t :15;                       /**< bit:  1..15  Reserved                                      */
  };
  uint16_t w;
} __ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W0_bits_t;
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W0_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W0) SRAM BAR 0 Configuration Register (Word 0) )  Reset Value */

#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W0_VALID_Pos (0)                                            /**< (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Position */
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W0_VALID_Msk (0x1U << ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W0_VALID_Pos)  /**< (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Mask */
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W0_Msk (0x00000001UL)                                 /**< (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W0) Register Mask  */

/* -------- ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W1 : (ESPI_MEMORY Offset: 0x3ae) (R/W 16) SRAM BAR 0 Configuration Register (Word 1) ) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W0:16;   /**< bit:  0..15  Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W1_bits_t;
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W1_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W1) SRAM BAR 0 Configuration Register (Word 1) )  Reset Value */

#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos (0)                                            /**< (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Msk (0xFFFFU << ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos)  /**< (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0(value) (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Msk & ((value) << ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos))
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W1_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W1) Register Mask  */

/* -------- ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W2 : (ESPI_MEMORY Offset: 0x3b0) (R/W 16) SRAM BAR 0 Configuration Register (Word 2) ) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W1:16;   /**< bit:  0..15  Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W2_bits_t;
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W2_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W2) SRAM BAR 0 Configuration Register (Word 2) )  Reset Value */

#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos (0)                                            /**< (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Msk (0xFFFFU << ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos)  /**< (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1(value) (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Msk & ((value) << ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos))
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W2_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W2) Register Mask  */

/* -------- ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W3 : (ESPI_MEMORY Offset: 0x3b2) (R/W 16) SRAM BAR 0 Configuration Register (Word 3) ) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W2:16;   /**< bit:  0..15  Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W3_bits_t;
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W3_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W3) SRAM BAR 0 Configuration Register (Word 3) )  Reset Value */

#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos (0)                                            /**< (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Msk (0xFFFFU << ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos)  /**< (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2(value) (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Msk & ((value) << ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos))
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W3_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W3) Register Mask  */

/* -------- ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W4 : (ESPI_MEMORY Offset: 0x3b4) (R/W 16) SRAM BAR 0 Configuration Register (Word 4) ) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W3:16;   /**< bit:  0..15  Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W4_bits_t;
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W4_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W4) SRAM BAR 0 Configuration Register (Word 4) )  Reset Value */

#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos (0)                                            /**< (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Msk (0xFFFFU << ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos)  /**< (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3(value) (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Msk & ((value) << ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos))
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W4_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W4) Register Mask  */

/* -------- ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W0 : (ESPI_MEMORY Offset: 0x3b6) (R/W 16) SRAM BAR 1 Configuration Register (Word 0) ) -------- */

typedef union
{
  struct
  {
    uint16_t VALID:1;                   /**< bit:      0  1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. */
    uint16_t :15;                       /**< bit:  1..15  Reserved                                      */
  };
  uint16_t w;
} __ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W0_bits_t;
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W0_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W0) SRAM BAR 1 Configuration Register (Word 0) )  Reset Value */

#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W0_VALID_Pos (0)                                            /**< (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Position */
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W0_VALID_Msk (0x1U << ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W0_VALID_Pos)  /**< (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W0) 1=The BAR is valid and will participate in eSPI matches. 0=The BAR is ignored. Mask */
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W0_Msk (0x00000001UL)                                 /**< (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W0) Register Mask  */

/* -------- ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W1 : (ESPI_MEMORY Offset: 0x3b8) (R/W 16) SRAM BAR 1 Configuration Register (Word 1) ) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W0:16;   /**< bit:  0..15  Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W1_bits_t;
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W1_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W1) SRAM BAR 1 Configuration Register (Word 1) )  Reset Value */

#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos (0)                                            /**< (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Msk (0xFFFFU << ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos)  /**< (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W1) Bits[15:0] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0(value) (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Msk & ((value) << ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W1_ESPI_HOST_ADDRESS_W0_Pos))
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W1_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W1) Register Mask  */

/* -------- ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W2 : (ESPI_MEMORY Offset: 0x3ba) (R/W 16) SRAM BAR 1 Configuration Register (Word 2) ) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W1:16;   /**< bit:  0..15  Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W2_bits_t;
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W2_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W2) SRAM BAR 1 Configuration Register (Word 2) )  Reset Value */

#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos (0)                                            /**< (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Msk (0xFFFFU << ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos)  /**< (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W2) Bits[31:16] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1(value) (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Msk & ((value) << ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W2_ESPI_HOST_ADDRESS_W1_Pos))
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W2_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W2) Register Mask  */

/* -------- ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W3 : (ESPI_MEMORY Offset: 0x3bc) (R/W 16) SRAM BAR 1 Configuration Register (Word 3) ) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W2:16;   /**< bit:  0..15  Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W3_bits_t;
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W3_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W3) SRAM BAR 1 Configuration Register (Word 3) )  Reset Value */

#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos (0)                                            /**< (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Msk (0xFFFFU << ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos)  /**< (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W3) Bits[47:32] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2(value) (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Msk & ((value) << ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W3_ESPI_HOST_ADDRESS_W2_Pos))
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W3_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W3) Register Mask  */

/* -------- ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W4 : (ESPI_MEMORY Offset: 0x3be) (R/W 16) SRAM BAR 1 Configuration Register (Word 4) ) -------- */

typedef union
{
  struct
  {
    uint16_t ESPI_HOST_ADDRESS_W3:16;   /**< bit:  0..15  Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. */
  };
  uint16_t w;
} __ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W4_bits_t;
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W4_RESETVALUE (0x00U)                                       /**<  (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W4) SRAM BAR 1 Configuration Register (Word 4) )  Reset Value */

#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos (0)                                            /**< (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Position */
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Msk (0xFFFFU << ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos)  /**< (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W4) Bits[63:48] of the 64 bits that are used to match eSPI memory addresses. Mask */
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3(value) (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Msk & ((value) << ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W4_ESPI_HOST_ADDRESS_W3_Pos))
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W4_Msk (0x0000FFFFUL)                                 /**< (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W4) Register Mask  */

/** \brief ESPI_MEMORY register offsets definitions */
#define ESPI_MEMORY_MBX_MEM_BASE_ADDRESS_OFFSET (0x130)        /**< (ESPI_MEMORY_MBX_MEM_BASE_ADDRESS) Mailbox Memory Base Address Offset */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB_OFFSET (0x13A)        /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB) ACPI EC Channel 0 Memory BAR (LSB) Offset */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_MSB_OFFSET (0x13C)        /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_MSB) ACPI EC Channel 0 Memory BAR (MSB) Offset */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS_OFFSET (0x144)        /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS) ACPI EC Channel 1 Memory BAR Offset */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB_OFFSET (0x14E)        /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB) ACPI EC Channel 2 Memory BAR (LSB) Offset */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_MSB_OFFSET (0x150)        /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_MSB) ACPI EC Channel 2 Memory BAR (MSB) Offset */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS_OFFSET (0x158)        /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS) ACPI EC Channel 3 Memory BAR Offset */
#define ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS_OFFSET (0x16C)        /**< (ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS) Embedded Memory Interface (EMI) 0 Memory Base Address Offset */
#define ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB_OFFSET (0x176)        /**< (ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB) Embedded Memory Interface (EMI) 1 Memory Base Address (LSB) Offset */
#define ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_MSB_OFFSET (0x178)        /**< (ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_MSB) Embedded Memory Interface (EMI) 1 Memory Base Address (MSB) Offset */
#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF_OFFSET (0x1AC)        /**< (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF) SRAM 0 Memory Base Address Config Offset */
#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_LSB_OFFSET (0x1AE)        /**< (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_LSB) SRAM 0 Memory Base Address LSB Offset */
#define ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_MSB_OFFSET (0x1B0)        /**< (ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_MSB) SRAM 0 Memory Base Address MSB Offset */
#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF_OFFSET (0x1B6)        /**< (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF) SRAM 1 Memory Base Address Config Offset */
#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_LSB_OFFSET (0x1B8)        /**< (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_LSB) SRAM 1 Memory Base Address LSB Offset */
#define ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_MSB_OFFSET (0x1BA)        /**< (ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_MSB) SRAM 1 Memory Base Address MSB Offset */
#define ESPI_MEMORY_BUS_MASTER_STATUS_OFFSET (0x200)        /**< (ESPI_MEMORY_BUS_MASTER_STATUS) Bus Master Status Register Offset */
#define ESPI_MEMORY_BUS_MASTER_INT_EN_OFFSET (0x204)        /**< (ESPI_MEMORY_BUS_MASTER_INT_EN) Bus Master Interrupt Enable Register Offset */
#define ESPI_MEMORY_BUS_MASTER_CONFIG_OFFSET (0x208)        /**< (ESPI_MEMORY_BUS_MASTER_CONFIG) Bus Master Configuration Register Offset */
#define ESPI_MEMORY_BUS_MASTER_1_CONTROL_OFFSET (0x210)        /**< (ESPI_MEMORY_BUS_MASTER_1_CONTROL) Bus Master 1 Control Register Offset */
#define ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW0_OFFSET (0x214)        /**< (ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW0) Bus Master 1 Host Address Register (DWord 0) Offset */
#define ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW1_OFFSET (0x218)        /**< (ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW1) Bus Master 1 Host Address Register (DWord 1) Offset */
#define ESPI_MEMORY_BUS_MASTER_1_INTERNAL_ADDR_OFFSET (0x21C)        /**< (ESPI_MEMORY_BUS_MASTER_1_INTERNAL_ADDR) Bus Master 1 Internal Address Register Offset */
#define ESPI_MEMORY_BUS_MASTER_2_CONTROL_OFFSET (0x224)        /**< (ESPI_MEMORY_BUS_MASTER_2_CONTROL) Bus Master 2 Control Register Offset */
#define ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW0_OFFSET (0x228)        /**< (ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW0) Bus Master 2 Host Address Register (DWord 0) Offset */
#define ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW1_OFFSET (0x22C)        /**< (ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW1) Bus Master 2 Host Address Register (DWord 1) Offset */
#define ESPI_MEMORY_BUS_MASTER_2_INTERNAL_ADDR_OFFSET (0x230)        /**< (ESPI_MEMORY_BUS_MASTER_2_INTERNAL_ADDR) Bus Master 2 Internal Address Register Offset */
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W0_OFFSET (0x330)        /**< (ESPI_MEMORY_MBX_MEM_BAR_CFG_W0) Mailbox Memory BAR Configuration Register (Word 0) Offset */
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W1_OFFSET (0x332)        /**< (ESPI_MEMORY_MBX_MEM_BAR_CFG_W1) Mailbox Memory BAR Configuration Register (Word 1) Offset */
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W2_OFFSET (0x334)        /**< (ESPI_MEMORY_MBX_MEM_BAR_CFG_W2) Mailbox Memory BAR Configuration Register (Word 2) Offset */
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W3_OFFSET (0x336)        /**< (ESPI_MEMORY_MBX_MEM_BAR_CFG_W3) Mailbox Memory BAR Configuration Register (Word 3) Offset */
#define ESPI_MEMORY_MBX_MEM_BAR_CFG_W4_OFFSET (0x338)        /**< (ESPI_MEMORY_MBX_MEM_BAR_CFG_W4) Mailbox Memory BAR Configuration Register (Word 4) Offset */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W0_OFFSET (0x33A)        /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W0) ACPI EC Channel 0 Memory BAR Configuration Register (Word 0) Offset */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W1_OFFSET (0x33C)        /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W1) ACPI EC Channel 0 Memory BAR Configuration Register (Word 1) Offset */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W2_OFFSET (0x33E)        /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W2) ACPI EC Channel 0 Memory BAR Configuration Register (Word 2) Offset */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W3_OFFSET (0x340)        /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W3) ACPI EC Channel 0 Memory BAR Configuration Register (Word 3) Offset */
#define ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W4_OFFSET (0x342)        /**< (ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W4) ACPI EC Channel 0 Memory BAR Configuration Register (Word 4) Offset */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W0_OFFSET (0x344)        /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W0) ACPI EC Channel 1 Memory BAR Configuration Register (Word 0) Offset */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W1_OFFSET (0x346)        /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W1) ACPI EC Channel 1 Memory BAR Configuration Register (Word 1) Offset */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W2_OFFSET (0x348)        /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W2) ACPI EC Channel 1 Memory BAR Configuration Register (Word 2) Offset */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W3_OFFSET (0x34A)        /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W3) ACPI EC Channel 1 Memory BAR Configuration Register (Word 3) Offset */
#define ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W4_OFFSET (0x34C)        /**< (ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W4) ACPI EC Channel 1 Memory BAR Configuration Register (Word 4) Offset */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W0_OFFSET (0x34E)        /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W0) ACPI EC Channel 2 Memory BAR Configuration Register (Word 0) Offset */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W1_OFFSET (0x350)        /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W1) ACPI EC Channel 2 Memory BAR Configuration Register (Word 1) Offset */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W2_OFFSET (0x352)        /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W2) ACPI EC Channel 2 Memory BAR Configuration Register (Word 2) Offset */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W3_OFFSET (0x354)        /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W3) ACPI EC Channel 2 Memory BAR Configuration Register (Word 3) Offset */
#define ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W4_OFFSET (0x356)        /**< (ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W4) ACPI EC Channel 2 Memory BAR Configuration Register (Word 4) Offset */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W0_OFFSET (0x358)        /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W0) ACPI EC Channel 3 Memory BAR Configuration Register (Word 0) Offset */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W1_OFFSET (0x35A)        /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W1) ACPI EC Channel 3 Memory BAR Configuration Register (Word 1) Offset */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W2_OFFSET (0x35C)        /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W2) ACPI EC Channel 3 Memory BAR Configuration Register (Word 2) Offset */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W3_OFFSET (0x35E)        /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W3) ACPI EC Channel 3 Memory BAR Configuration Register (Word 3) Offset */
#define ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W4_OFFSET (0x360)        /**< (ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W4) ACPI EC Channel 3 Memory BAR Configuration Register (Word 4) Offset */
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W0_OFFSET (0x36C)        /**< (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W0) EMI 0 Memory BAR Configuration Register (Word 0) Offset */
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W1_OFFSET (0x36E)        /**< (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W1) EMI 0 Memory BAR Configuration Address Register  (Word 1) Offset */
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W2_OFFSET (0x370)        /**< (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W2) EMI 0 Memory BAR Configuration Address Register  (Word 2) Offset */
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W3_OFFSET (0x372)        /**< (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W3) EMI 0 Memory BAR Configuration Address Register  (Word 3) Offset */
#define ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W4_OFFSET (0x374)        /**< (ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W4) EMI 0 Memory BAR Configuration Address Register  (Word 4) Offset */
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W0_OFFSET (0x376)        /**< (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W0) EMI 1 Memory BAR Configuration Register (Word 0) ) Offset */
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W1_OFFSET (0x378)        /**< (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W1) EMI 1 Memory BAR Configuration Register (Word 1) ) Offset */
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W2_OFFSET (0x37A)        /**< (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W2) EMI 1 Memory BAR Configuration Register (Word 2) ) Offset */
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W3_OFFSET (0x37C)        /**< (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W3) EMI 1 Memory BAR Configuration Register (Word 3) ) Offset */
#define ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W4_OFFSET (0x37E)        /**< (ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W4) EMI 1 Memory BAR Configuration Register (Word 4) ) Offset */
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W0_OFFSET (0x3AC)        /**< (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W0) SRAM BAR 0 Configuration Register (Word 0) ) Offset */
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W1_OFFSET (0x3AE)        /**< (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W1) SRAM BAR 0 Configuration Register (Word 1) ) Offset */
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W2_OFFSET (0x3B0)        /**< (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W2) SRAM BAR 0 Configuration Register (Word 2) ) Offset */
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W3_OFFSET (0x3B2)        /**< (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W3) SRAM BAR 0 Configuration Register (Word 3) ) Offset */
#define ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W4_OFFSET (0x3B4)        /**< (ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W4) SRAM BAR 0 Configuration Register (Word 4) ) Offset */
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W0_OFFSET (0x3B6)        /**< (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W0) SRAM BAR 1 Configuration Register (Word 0) ) Offset */
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W1_OFFSET (0x3B8)        /**< (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W1) SRAM BAR 1 Configuration Register (Word 1) ) Offset */
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W2_OFFSET (0x3BA)        /**< (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W2) SRAM BAR 1 Configuration Register (Word 2) ) Offset */
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W3_OFFSET (0x3BC)        /**< (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W3) SRAM BAR 1 Configuration Register (Word 3) ) Offset */
#define ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W4_OFFSET (0x3BE)        /**< (ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W4) SRAM BAR 1 Configuration Register (Word 4) ) Offset */

/** \brief ESPI_MEMORY register API structure */
typedef struct
{  /* The eSPI Memory Component is one of two Logical Devices (along with the I/O Component) that provide access to all the\n    registers in the device. */
  __IO  __ESPI_MEMORY_MBX_MEM_BASE_ADDRESS_bits_t MBX_MEM_BASE_ADDRESS; /**< Offset: 0x130 (R/W  32) Mailbox Memory Base Address */
  __IO  __ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_LSB_bits_t ACPI_EC_0_MEM_BASE_ADDRESS_LSB; /**< Offset: 0x13A (R/W  16) ACPI EC Channel 0 Memory BAR (LSB) */
  __IO  __ESPI_MEMORY_ACPI_EC_0_MEM_BASE_ADDRESS_MSB_bits_t ACPI_EC_0_MEM_BASE_ADDRESS_MSB; /**< Offset: 0x13C (R/W  16) ACPI EC Channel 0 Memory BAR (MSB) */
  __IO  __ESPI_MEMORY_ACPI_EC_1_MEM_BASE_ADDRESS_bits_t ACPI_EC_1_MEM_BASE_ADDRESS; /**< Offset: 0x144 (R/W  32) ACPI EC Channel 1 Memory BAR */
  __IO  __ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_LSB_bits_t ACPI_EC_2_MEM_BASE_ADDRESS_LSB; /**< Offset: 0x14E (R/W  16) ACPI EC Channel 2 Memory BAR (LSB) */
  __IO  __ESPI_MEMORY_ACPI_EC_2_MEM_BASE_ADDRESS_MSB_bits_t ACPI_EC_2_MEM_BASE_ADDRESS_MSB; /**< Offset: 0x150 (R/W  16) ACPI EC Channel 2 Memory BAR (MSB) */
  __IO  __ESPI_MEMORY_ACPI_EC_3_MEM_BASE_ADDRESS_bits_t ACPI_EC_3_MEM_BASE_ADDRESS; /**< Offset: 0x158 (R/W  32) ACPI EC Channel 3 Memory BAR */
  __IO  __ESPI_MEMORY_EMI_0_MEM_BASE_ADDRESS_bits_t EMI_0_MEM_BASE_ADDRESS; /**< Offset: 0x16C (R/W  32) Embedded Memory Interface (EMI) 0 Memory Base Address */
  __IO  __ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_LSB_bits_t EMI_1_MEM_BASE_ADDRESS_LSB; /**< Offset: 0x176 (R/W  16) Embedded Memory Interface (EMI) 1 Memory Base Address (LSB) */
  __IO  __ESPI_MEMORY_EMI_1_MEM_BASE_ADDRESS_MSB_bits_t EMI_1_MEM_BASE_ADDRESS_MSB; /**< Offset: 0x178 (R/W  16) Embedded Memory Interface (EMI) 1 Memory Base Address (MSB) */
  __IO  __ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_CONF_bits_t SRAM_0_MEM_BASE_ADDRESS_CONF; /**< Offset: 0x1AC (R/W  16) SRAM 0 Memory Base Address Config */
  __IO  __ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_LSB_bits_t SRAM_0_MEM_BASE_ADDRESS_LSB; /**< Offset: 0x1AE (R/W  16) SRAM 0 Memory Base Address LSB */
  __IO  __ESPI_MEMORY_SRAM_0_MEM_BASE_ADDRESS_MSB_bits_t SRAM_0_MEM_BASE_ADDRESS_MSB; /**< Offset: 0x1B0 (R/W  32) SRAM 0 Memory Base Address MSB */
  __IO  __ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_CONF_bits_t SRAM_1_MEM_BASE_ADDRESS_CONF; /**< Offset: 0x1B6 (R/W  16) SRAM 1 Memory Base Address Config */
  __IO  __ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_LSB_bits_t SRAM_1_MEM_BASE_ADDRESS_LSB; /**< Offset: 0x1B8 (R/W  16) SRAM 1 Memory Base Address LSB */
  __IO  __ESPI_MEMORY_SRAM_1_MEM_BASE_ADDRESS_MSB_bits_t SRAM_1_MEM_BASE_ADDRESS_MSB; /**< Offset: 0x1BA (R/W  16) SRAM 1 Memory Base Address MSB */
  __IO  __ESPI_MEMORY_BUS_MASTER_STATUS_bits_t BUS_MASTER_STATUS; /**< Offset: 0x200 (R/W  32) Bus Master Status Register */
  __IO  __ESPI_MEMORY_BUS_MASTER_INT_EN_bits_t BUS_MASTER_INT_EN; /**< Offset: 0x204 (R/W  32) Bus Master Interrupt Enable Register */
  __IO  __ESPI_MEMORY_BUS_MASTER_CONFIG_bits_t BUS_MASTER_CONFIG; /**< Offset: 0x208 (R/W  32) Bus Master Configuration Register */
  __IO  __ESPI_MEMORY_BUS_MASTER_1_CONTROL_bits_t BUS_MASTER_1_CONTROL; /**< Offset: 0x210 (R/W  32) Bus Master 1 Control Register */
  __IO  __ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW0_bits_t BUS_MASTER_1_HOST_ADDR_DW0; /**< Offset: 0x214 (R/W  32) Bus Master 1 Host Address Register (DWord 0) */
  __IO  __ESPI_MEMORY_BUS_MASTER_1_HOST_ADDR_DW1_bits_t BUS_MASTER_1_HOST_ADDR_DW1; /**< Offset: 0x218 (R/W  32) Bus Master 1 Host Address Register (DWord 1) */
  __IO  __ESPI_MEMORY_BUS_MASTER_1_INTERNAL_ADDR_bits_t BUS_MASTER_1_INTERNAL_ADDR; /**< Offset: 0x21C (R/W  32) Bus Master 1 Internal Address Register */
  __IO  __ESPI_MEMORY_BUS_MASTER_2_CONTROL_bits_t BUS_MASTER_2_CONTROL; /**< Offset: 0x224 (R/W  32) Bus Master 2 Control Register */
  __IO  __ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW0_bits_t BUS_MASTER_2_HOST_ADDR_DW0; /**< Offset: 0x228 (R/W  32) Bus Master 2 Host Address Register (DWord 0) */
  __IO  __ESPI_MEMORY_BUS_MASTER_2_HOST_ADDR_DW1_bits_t BUS_MASTER_2_HOST_ADDR_DW1; /**< Offset: 0x22C (R/W  32) Bus Master 2 Host Address Register (DWord 1) */
  __IO  __ESPI_MEMORY_BUS_MASTER_2_INTERNAL_ADDR_bits_t BUS_MASTER_2_INTERNAL_ADDR; /**< Offset: 0x230 (R/W  32) Bus Master 2 Internal Address Register */
  __IO  __ESPI_MEMORY_MBX_MEM_BAR_CFG_W0_bits_t MBX_MEM_BAR_CFG_W0; /**< Offset: 0x330 (R/W  16) Mailbox Memory BAR Configuration Register (Word 0) */
  __IO  __ESPI_MEMORY_MBX_MEM_BAR_CFG_W1_bits_t MBX_MEM_BAR_CFG_W1; /**< Offset: 0x332 (R/W  16) Mailbox Memory BAR Configuration Register (Word 1) */
  __IO  __ESPI_MEMORY_MBX_MEM_BAR_CFG_W2_bits_t MBX_MEM_BAR_CFG_W2; /**< Offset: 0x334 (R/W  16) Mailbox Memory BAR Configuration Register (Word 2) */
  __IO  __ESPI_MEMORY_MBX_MEM_BAR_CFG_W3_bits_t MBX_MEM_BAR_CFG_W3; /**< Offset: 0x336 (R/W  16) Mailbox Memory BAR Configuration Register (Word 3) */
  __IO  __ESPI_MEMORY_MBX_MEM_BAR_CFG_W4_bits_t MBX_MEM_BAR_CFG_W4; /**< Offset: 0x338 (R/W  16) Mailbox Memory BAR Configuration Register (Word 4) */
  __IO  __ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W0_bits_t ACPI_EC_0_MEM_BAR_CFG_W0; /**< Offset: 0x33A (R/W  16) ACPI EC Channel 0 Memory BAR Configuration Register (Word 0) */
  __IO  __ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W1_bits_t ACPI_EC_0_MEM_BAR_CFG_W1; /**< Offset: 0x33C (R/W  16) ACPI EC Channel 0 Memory BAR Configuration Register (Word 1) */
  __IO  __ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W2_bits_t ACPI_EC_0_MEM_BAR_CFG_W2; /**< Offset: 0x33E (R/W  16) ACPI EC Channel 0 Memory BAR Configuration Register (Word 2) */
  __IO  __ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W3_bits_t ACPI_EC_0_MEM_BAR_CFG_W3; /**< Offset: 0x340 (R/W  16) ACPI EC Channel 0 Memory BAR Configuration Register (Word 3) */
  __IO  __ESPI_MEMORY_ACPI_EC_0_MEM_BAR_CFG_W4_bits_t ACPI_EC_0_MEM_BAR_CFG_W4; /**< Offset: 0x342 (R/W  16) ACPI EC Channel 0 Memory BAR Configuration Register (Word 4) */
  __IO  __ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W0_bits_t ACPI_EC_1_MEM_BAR_CFG_W0; /**< Offset: 0x344 (R/W  16) ACPI EC Channel 1 Memory BAR Configuration Register (Word 0) */
  __IO  __ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W1_bits_t ACPI_EC_1_MEM_BAR_CFG_W1; /**< Offset: 0x346 (R/W  16) ACPI EC Channel 1 Memory BAR Configuration Register (Word 1) */
  __IO  __ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W2_bits_t ACPI_EC_1_MEM_BAR_CFG_W2; /**< Offset: 0x348 (R/W  16) ACPI EC Channel 1 Memory BAR Configuration Register (Word 2) */
  __IO  __ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W3_bits_t ACPI_EC_1_MEM_BAR_CFG_W3; /**< Offset: 0x34A (R/W  16) ACPI EC Channel 1 Memory BAR Configuration Register (Word 3) */
  __IO  __ESPI_MEMORY_ACPI_EC_1_MEM_BAR_CFG_W4_bits_t ACPI_EC_1_MEM_BAR_CFG_W4; /**< Offset: 0x34C (R/W  16) ACPI EC Channel 1 Memory BAR Configuration Register (Word 4) */
  __IO  __ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W0_bits_t ACPI_EC_2_MEM_BAR_CFG_W0; /**< Offset: 0x34E (R/W  16) ACPI EC Channel 2 Memory BAR Configuration Register (Word 0) */
  __IO  __ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W1_bits_t ACPI_EC_2_MEM_BAR_CFG_W1; /**< Offset: 0x350 (R/W  16) ACPI EC Channel 2 Memory BAR Configuration Register (Word 1) */
  __IO  __ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W2_bits_t ACPI_EC_2_MEM_BAR_CFG_W2; /**< Offset: 0x352 (R/W  16) ACPI EC Channel 2 Memory BAR Configuration Register (Word 2) */
  __IO  __ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W3_bits_t ACPI_EC_2_MEM_BAR_CFG_W3; /**< Offset: 0x354 (R/W  16) ACPI EC Channel 2 Memory BAR Configuration Register (Word 3) */
  __IO  __ESPI_MEMORY_ACPI_EC_2_MEM_BAR_CFG_W4_bits_t ACPI_EC_2_MEM_BAR_CFG_W4; /**< Offset: 0x356 (R/W  16) ACPI EC Channel 2 Memory BAR Configuration Register (Word 4) */
  __IO  __ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W0_bits_t ACPI_EC_3_MEM_BAR_CFG_W0; /**< Offset: 0x358 (R/W  16) ACPI EC Channel 3 Memory BAR Configuration Register (Word 0) */
  __IO  __ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W1_bits_t ACPI_EC_3_MEM_BAR_CFG_W1; /**< Offset: 0x35A (R/W  16) ACPI EC Channel 3 Memory BAR Configuration Register (Word 1) */
  __IO  __ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W2_bits_t ACPI_EC_3_MEM_BAR_CFG_W2; /**< Offset: 0x35C (R/W  16) ACPI EC Channel 3 Memory BAR Configuration Register (Word 2) */
  __IO  __ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W3_bits_t ACPI_EC_3_MEM_BAR_CFG_W3; /**< Offset: 0x35E (R/W  16) ACPI EC Channel 3 Memory BAR Configuration Register (Word 3) */
  __IO  __ESPI_MEMORY_ACPI_EC_3_MEM_BAR_CFG_W4_bits_t ACPI_EC_3_MEM_BAR_CFG_W4; /**< Offset: 0x360 (R/W  16) ACPI EC Channel 3 Memory BAR Configuration Register (Word 4) */
  __IO  __ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W0_bits_t EMI_0_MEM_BAR_CFG_W0; /**< Offset: 0x36C (R/W  16) EMI 0 Memory BAR Configuration Register (Word 0) */
  __IO  __ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W1_bits_t EMI_0_MEM_BAR_CFG_W1; /**< Offset: 0x36E (R/W  16) EMI 0 Memory BAR Configuration Address Register  (Word 1) */
  __IO  __ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W2_bits_t EMI_0_MEM_BAR_CFG_W2; /**< Offset: 0x370 (R/W  16) EMI 0 Memory BAR Configuration Address Register  (Word 2) */
  __IO  __ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W3_bits_t EMI_0_MEM_BAR_CFG_W3; /**< Offset: 0x372 (R/W  16) EMI 0 Memory BAR Configuration Address Register  (Word 3) */
  __IO  __ESPI_MEMORY_EMI_0_MEM_BAR_CFG_W4_bits_t EMI_0_MEM_BAR_CFG_W4; /**< Offset: 0x374 (R/W  16) EMI 0 Memory BAR Configuration Address Register  (Word 4) */
  __IO  __ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W0_bits_t EMI_1_MEM_BAR_CFG_W0; /**< Offset: 0x376 (R/W  16) EMI 1 Memory BAR Configuration Register (Word 0) ) */
  __IO  __ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W1_bits_t EMI_1_MEM_BAR_CFG_W1; /**< Offset: 0x378 (R/W  16) EMI 1 Memory BAR Configuration Register (Word 1) ) */
  __IO  __ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W2_bits_t EMI_1_MEM_BAR_CFG_W2; /**< Offset: 0x37A (R/W  16) EMI 1 Memory BAR Configuration Register (Word 2) ) */
  __IO  __ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W3_bits_t EMI_1_MEM_BAR_CFG_W3; /**< Offset: 0x37C (R/W  16) EMI 1 Memory BAR Configuration Register (Word 3) ) */
  __IO  __ESPI_MEMORY_EMI_1_MEM_BAR_CFG_W4_bits_t EMI_1_MEM_BAR_CFG_W4; /**< Offset: 0x37E (R/W  16) EMI 1 Memory BAR Configuration Register (Word 4) ) */
  __IO  __ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W0_bits_t SRAM_0_MEM_BAR_CFG_W0; /**< Offset: 0x3AC (R/W  16) SRAM BAR 0 Configuration Register (Word 0) ) */
  __IO  __ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W1_bits_t SRAM_0_MEM_BAR_CFG_W1; /**< Offset: 0x3AE (R/W  16) SRAM BAR 0 Configuration Register (Word 1) ) */
  __IO  __ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W2_bits_t SRAM_0_MEM_BAR_CFG_W2; /**< Offset: 0x3B0 (R/W  16) SRAM BAR 0 Configuration Register (Word 2) ) */
  __IO  __ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W3_bits_t SRAM_0_MEM_BAR_CFG_W3; /**< Offset: 0x3B2 (R/W  16) SRAM BAR 0 Configuration Register (Word 3) ) */
  __IO  __ESPI_MEMORY_SRAM_0_MEM_BAR_CFG_W4_bits_t SRAM_0_MEM_BAR_CFG_W4; /**< Offset: 0x3B4 (R/W  16) SRAM BAR 0 Configuration Register (Word 4) ) */
  __IO  __ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W0_bits_t SRAM_1_MEM_BAR_CFG_W0; /**< Offset: 0x3B6 (R/W  16) SRAM BAR 1 Configuration Register (Word 0) ) */
  __IO  __ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W1_bits_t SRAM_1_MEM_BAR_CFG_W1; /**< Offset: 0x3B8 (R/W  16) SRAM BAR 1 Configuration Register (Word 1) ) */
  __IO  __ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W2_bits_t SRAM_1_MEM_BAR_CFG_W2; /**< Offset: 0x3BA (R/W  16) SRAM BAR 1 Configuration Register (Word 2) ) */
  __IO  __ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W3_bits_t SRAM_1_MEM_BAR_CFG_W3; /**< Offset: 0x3BC (R/W  16) SRAM BAR 1 Configuration Register (Word 3) ) */
  __IO  __ESPI_MEMORY_SRAM_1_MEM_BAR_CFG_W4_bits_t SRAM_1_MEM_BAR_CFG_W4; /**< Offset: 0x3BE (R/W  16) SRAM BAR 1 Configuration Register (Word 4) ) */
} espimemory_registers_t;
/** @}  end of The eSPI Memory Component is one of two Logical Devices (along with the I/O Component) that provide access to all the\n    registers in the device. */

#endif /* _PIC32CX_0525SG12_ESPI_MEMORY_COMPONENT_H_ */
