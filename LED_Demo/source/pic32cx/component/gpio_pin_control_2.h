/**
 * \brief Component description for PIC32CX/0525SG12 GPIO_PIN_CONTROL_2
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
#ifndef _PIC32CX_0525SG12_GPIO_PIN_CONTROL_2_COMPONENT_H_
#define _PIC32CX_0525SG12_GPIO_PIN_CONTROL_2_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_GPIO_PIN_CONTROL_2 GPIO Pin Control 2 Registers
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR GPIO_PIN_CONTROL_2 */
/* ========================================================================== */

/* -------- GPIO_PIN_CONTROL_2_GPIO_000_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x00) (R/W 32) GPIO 000 PIN CONTROL REGISTER 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_000_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_000_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_000_PIN_CONTROL_2) GPIO 000 PIN CONTROL REGISTER 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_000_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_000_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_000_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_000_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_000_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_000_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_000_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_000_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_000_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_000_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_002_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x08) (R/W 32) GPIO 002 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_002_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_002_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_002_PIN_CONTROL_2) GPIO 002 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_002_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_002_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_002_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_002_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_002_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_002_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_002_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_002_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_002_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_002_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_003_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x0c) (R/W 32) GPIO 003 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_003_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_003_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_003_PIN_CONTROL_2) GPIO 003 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_003_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_003_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_003_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_003_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_003_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_003_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_003_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_003_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_003_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_003_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_004_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x10) (R/W 32) GPIO 004 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_004_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_004_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_004_PIN_CONTROL_2) GPIO 004 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_004_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_004_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_004_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_004_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_004_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_004_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_004_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_004_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_004_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_004_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_007_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x1c) (R/W 32) GPIO 007 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_007_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_007_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_007_PIN_CONTROL_2) GPIO 007 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_007_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_007_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_007_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_007_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_007_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_007_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_007_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_007_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_007_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_007_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_010_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x20) (R/W 32) GPIO 010 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_010_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_010_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_010_PIN_CONTROL_2) GPIO 010 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_010_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_010_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_010_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_010_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_010_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_010_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_010_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_010_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_010_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_010_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_011_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x24) (R/W 32) GPIO 011 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_011_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_011_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_011_PIN_CONTROL_2) GPIO 011 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_011_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_011_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_011_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_011_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_011_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_011_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_011_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_011_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_011_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_011_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_012_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x28) (R/W 32) GPIO 012 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_012_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_012_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_012_PIN_CONTROL_2) GPIO 012 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_012_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_012_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_012_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_012_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_012_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_012_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_012_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_012_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_012_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_012_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_013_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x2c) (R/W 32) GPIO 013 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_013_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_013_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_013_PIN_CONTROL_2) GPIO 013 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_013_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_013_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_013_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_013_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_013_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_013_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_013_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_013_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_013_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_013_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_014_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x30) (R/W 32) GPIO 014 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_014_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_014_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_014_PIN_CONTROL_2) GPIO 014 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_014_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_014_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_014_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_014_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_014_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_014_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_014_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_014_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_014_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_014_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_015_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x34) (R/W 32) GPIO 015 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_015_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_015_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_015_PIN_CONTROL_2) GPIO 015 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_015_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_015_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_015_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_015_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_015_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_015_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_015_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_015_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_015_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_015_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_016_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x38) (R/W 32) GPIO 016 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_016_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_016_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_016_PIN_CONTROL_2) GPIO 016 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_016_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_016_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_016_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_016_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_016_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_016_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_016_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_016_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_016_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_016_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_017_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x3c) (R/W 32) GPIO 017 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_017_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_017_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_017_PIN_CONTROL_2) GPIO 017 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_017_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_017_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_017_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_017_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_017_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_017_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_017_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_017_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_017_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_017_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_020_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x40) (R/W 32) GPIO 020 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_020_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_020_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_020_PIN_CONTROL_2) GPIO 020 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_020_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_020_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_020_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_020_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_020_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_020_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_020_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_020_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_020_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_020_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_021_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x44) (R/W 32) GPIO 021 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_021_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_021_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_021_PIN_CONTROL_2) GPIO 021 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_021_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_021_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_021_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_021_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_021_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_021_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_021_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_021_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_021_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_021_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_022_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x48) (R/W 32) GPIO 022 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_022_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_022_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_022_PIN_CONTROL_2) GPIO 022 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_022_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_022_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_022_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_022_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_022_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_022_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_022_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_022_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_022_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_022_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_023_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x4c) (R/W 32) GPIO 023 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_023_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_023_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_023_PIN_CONTROL_2) GPIO 023 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_023_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_023_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_023_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_023_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_023_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_023_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_023_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_023_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_023_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_023_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_024_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x50) (R/W 32) GPIO 024 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_024_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_024_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_024_PIN_CONTROL_2) GPIO 024 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_024_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_024_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_024_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_024_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_024_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_024_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_024_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_024_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_024_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_024_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_025_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x54) (R/W 32) GPIO 025 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_025_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_025_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_025_PIN_CONTROL_2) GPIO 025 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_025_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_025_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_025_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_025_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_025_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_025_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_025_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_025_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_025_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_025_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_026_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x58) (R/W 32) GPIO 026 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_026_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_026_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_026_PIN_CONTROL_2) GPIO 026 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_026_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_026_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_026_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_026_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_026_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_026_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_026_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_026_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_026_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_026_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_027_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x5c) (R/W 32) GPIO 027 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_027_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_027_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_027_PIN_CONTROL_2) GPIO 027 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_027_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_027_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_027_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_027_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_027_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_027_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_027_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_027_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_027_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_027_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_030_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x60) (R/W 32) GPIO 030 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_030_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_030_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_030_PIN_CONTROL_2) GPIO 030 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_030_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_030_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_030_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_030_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_030_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_030_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_030_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_030_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_030_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_030_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_031_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x64) (R/W 32) GPIO 031 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_031_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_031_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_031_PIN_CONTROL_2) GPIO 031 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_031_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_031_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_031_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_031_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_031_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_031_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_031_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_031_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_031_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_031_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_032_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x68) (R/W 32) GPIO 032 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_032_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_032_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_032_PIN_CONTROL_2) GPIO 032 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_032_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_032_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_032_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_032_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_032_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_032_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_032_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_032_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_032_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_032_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_033_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x6c) (R/W 32) GPIO 033 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_033_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_033_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_033_PIN_CONTROL_2) GPIO 033 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_033_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_033_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_033_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_033_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_033_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_033_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_033_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_033_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_033_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_033_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_034_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x70) (R/W 32) GPIO 034 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_034_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_034_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_034_PIN_CONTROL_2) GPIO 034 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_034_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_034_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_034_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_034_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_034_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_034_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_034_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_034_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_034_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_034_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_035_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x74) (R/W 32) GPIO 035 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_035_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_035_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_035_PIN_CONTROL_2) GPIO 035 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_035_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_035_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_035_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_035_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_035_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_035_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_035_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_035_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_035_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_035_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_036_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x78) (R/W 32) GPIO 036 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_036_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_036_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_036_PIN_CONTROL_2) GPIO 036 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_036_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_036_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_036_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_036_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_036_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_036_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_036_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_036_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_036_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_036_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_040_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x80) (R/W 32) GPIO 040 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_040_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_040_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_040_PIN_CONTROL_2) GPIO 040 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_040_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_040_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_040_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_040_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_040_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_040_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_040_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_040_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_040_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_040_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_042_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x88) (R/W 32) GPIO 042 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_042_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_042_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_042_PIN_CONTROL_2) GPIO 042 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_042_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_042_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_042_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_042_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_042_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_042_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_042_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_042_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_042_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_042_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_043_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x8c) (R/W 32) GPIO 043 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_043_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_043_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_043_PIN_CONTROL_2) GPIO 043 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_043_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_043_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_043_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_043_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_043_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_043_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_043_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_043_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_043_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_043_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_044_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x90) (R/W 32) GPIO 044 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_044_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_044_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_044_PIN_CONTROL_2) GPIO 044 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_044_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_044_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_044_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_044_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_044_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_044_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_044_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_044_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_044_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_044_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_045_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x94) (R/W 32) GPIO 045 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_045_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_045_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_045_PIN_CONTROL_2) GPIO 045 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_045_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_045_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_045_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_045_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_045_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_045_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_045_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_045_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_045_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_045_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_046_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x98) (R/W 32) GPIO 046 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_046_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_046_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_046_PIN_CONTROL_2) GPIO 046 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_046_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_046_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_046_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_046_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_046_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_046_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_046_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_046_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_046_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_046_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_047_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x9c) (R/W 32) GPIO 047 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_047_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_047_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_047_PIN_CONTROL_2) GPIO 047 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_047_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_047_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_047_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_047_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_047_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_047_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_047_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_047_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_047_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_047_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_050_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xa0) (R/W 32) GPIO 050 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_050_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_050_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_050_PIN_CONTROL_2) GPIO 050 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_050_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_050_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_050_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_050_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_050_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_050_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_050_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_050_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_050_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_050_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_051_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xa4) (R/W 32) GPIO 051 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_051_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_051_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_051_PIN_CONTROL_2) GPIO 051 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_051_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_051_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_051_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_051_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_051_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_051_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_051_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_051_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_051_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_051_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_052_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xa8) (R/W 32) GPIO 052 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_052_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_052_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_052_PIN_CONTROL_2) GPIO 052 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_052_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_052_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_052_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_052_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_052_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_052_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_052_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_052_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_052_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_052_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_053_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xac) (R/W 32) GPIO 053 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_053_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_053_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_053_PIN_CONTROL_2) GPIO 053 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_053_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_053_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_053_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_053_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_053_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_053_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_053_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_053_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_053_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_053_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_054_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xb0) (R/W 32) GPIO 054 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_054_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_054_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_054_PIN_CONTROL_2) GPIO 054 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_054_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_054_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_054_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_054_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_054_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_054_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_054_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_054_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_054_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_054_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_055_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xb4) (R/W 32) GPIO 055 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_055_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_055_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_055_PIN_CONTROL_2) GPIO 055 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_055_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_055_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_055_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_055_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_055_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_055_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_055_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_055_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_055_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_055_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_056_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xb8) (R/W 32) GPIO 056 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_056_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_056_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_056_PIN_CONTROL_2) GPIO 056 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_056_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_056_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_056_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_056_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_056_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_056_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_056_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_056_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_056_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_056_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_057_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xbc) (R/W 32) GPIO 057 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_057_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_057_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_057_PIN_CONTROL_2) GPIO 057 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_057_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_057_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_057_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_057_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_057_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_057_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_057_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_057_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_057_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_057_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_060_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xc0) (R/W 32) GPIO 060 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_060_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_060_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_060_PIN_CONTROL_2) GPIO 060 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_060_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_060_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_060_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_060_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_060_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_060_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_060_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_060_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_060_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_060_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_061_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xc4) (R/W 32) GPIO 061 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_061_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_061_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_061_PIN_CONTROL_2) GPIO 061 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_061_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_061_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_061_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_061_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_061_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_061_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_061_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_061_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_061_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_061_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_062_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xc8) (R/W 32) GPIO 062 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_062_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_062_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_062_PIN_CONTROL_2) GPIO 062 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_062_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_062_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_062_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_062_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_062_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_062_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_062_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_062_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_062_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_062_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_063_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xcc) (R/W 32) GPIO 063 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_063_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_063_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_063_PIN_CONTROL_2) GPIO 063 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_063_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_063_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_063_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_063_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_063_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_063_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_063_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_063_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_063_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_063_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_064_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xd0) (R/W 32) GPIO 064 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_064_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_064_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_064_PIN_CONTROL_2) GPIO 064 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_064_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_064_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_064_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_064_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_064_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_064_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_064_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_064_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_064_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_064_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_065_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xd4) (R/W 32) GPIO 065 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_065_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_065_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_065_PIN_CONTROL_2) GPIO 065 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_065_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_065_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_065_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_065_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_065_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_065_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_065_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_065_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_065_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_065_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_066_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xd8) (R/W 32) GPIO 066 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_066_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_066_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_066_PIN_CONTROL_2) GPIO 066 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_066_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_066_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_066_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_066_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_066_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_066_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_066_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_066_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_066_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_066_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_067_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xdc) (R/W 32) GPIO 067 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_067_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_067_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_067_PIN_CONTROL_2) GPIO 067 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_067_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_067_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_067_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_067_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_067_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_067_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_067_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_067_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_067_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_067_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_070_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xe0) (R/W 32) GPIO 070 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_070_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_070_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_070_PIN_CONTROL_2) GPIO 070 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_070_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_070_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_070_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_070_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_070_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_070_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_070_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_070_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_070_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_070_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_071_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xe4) (R/W 32) GPIO 071 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_071_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_071_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_071_PIN_CONTROL_2) GPIO 071 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_071_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_071_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_071_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_071_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_071_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_071_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_071_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_071_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_071_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_071_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_072_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xe8) (R/W 32) GPIO 072 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_072_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_072_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_072_PIN_CONTROL_2) GPIO 072 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_072_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_072_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_072_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_072_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_072_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_072_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_072_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_072_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_072_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_072_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_073_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xec) (R/W 32) GPIO 073 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_073_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_073_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_073_PIN_CONTROL_2) GPIO 073 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_073_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_073_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_073_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_073_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_073_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_073_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_073_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_073_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_073_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_073_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_074_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xf0) (R/W 32) GPIO 074 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_074_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_074_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_074_PIN_CONTROL_2) GPIO 074 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_074_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_074_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_074_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_074_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_074_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_074_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_074_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_074_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_074_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_074_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_075_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xf4) (R/W 32) GPIO 075 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_075_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_075_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_075_PIN_CONTROL_2) GPIO 075 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_075_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_075_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_075_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_075_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_075_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_075_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_075_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_075_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_075_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_075_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_076_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0xf8) (R/W 32) GPIO 076 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_076_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_076_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_076_PIN_CONTROL_2) GPIO 076 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_076_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_076_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_076_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_076_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_076_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_076_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_076_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_076_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_076_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_076_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_100_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x100) (R/W 32) GPIO 100 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_100_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_100_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_100_PIN_CONTROL_2) GPIO 100 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_100_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_100_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_100_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_100_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_100_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_100_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_100_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_100_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_100_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_100_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_101_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x104) (R/W 32) GPIO 101 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_101_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_101_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_101_PIN_CONTROL_2) GPIO 101 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_101_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_101_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_101_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_101_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_101_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_101_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_101_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_101_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_101_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_101_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_102_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x108) (R/W 32) GPIO 102 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_102_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_102_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_102_PIN_CONTROL_2) GPIO 102 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_102_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_102_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_102_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_102_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_102_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_102_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_102_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_102_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_102_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_102_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_104_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x110) (R/W 32) GPIO 104 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_104_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_104_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_104_PIN_CONTROL_2) GPIO 104 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_104_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_104_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_104_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_104_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_104_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_104_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_104_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_104_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_104_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_104_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_105_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x114) (R/W 32) GPIO 105 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_105_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_105_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_105_PIN_CONTROL_2) GPIO 105 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_105_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_105_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_105_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_105_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_105_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_105_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_105_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_105_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_105_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_105_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_106_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x118) (R/W 32) GPIO 106 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_106_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_106_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_106_PIN_CONTROL_2) GPIO 106 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_106_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_106_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_106_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_106_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_106_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_106_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_106_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_106_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_106_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_106_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_107_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x11c) (R/W 32) GPIO 107 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_107_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_107_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_107_PIN_CONTROL_2) GPIO 107 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_107_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_107_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_107_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_107_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_107_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_107_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_107_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_107_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_107_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_107_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_112_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x128) (R/W 32) GPIO 112 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_112_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_112_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_112_PIN_CONTROL_2) GPIO 112 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_112_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_112_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_112_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_112_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_112_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_112_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_112_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_112_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_112_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_112_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_113_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x12c) (R/W 32) GPIO 113 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_113_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_113_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_113_PIN_CONTROL_2) GPIO 113 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_113_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_113_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_113_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_113_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_113_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_113_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_113_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_113_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_113_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_113_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_114_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x130) (R/W 32) GPIO 114 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_114_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_114_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_114_PIN_CONTROL_2) GPIO 114 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_114_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_114_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_114_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_114_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_114_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_114_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_114_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_114_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_114_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_114_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_115_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x134) (R/W 32) GPIO 115 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_115_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_115_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_115_PIN_CONTROL_2) GPIO 115 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_115_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_115_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_115_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_115_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_115_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_115_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_115_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_115_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_115_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_115_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_116_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x138) (R/W 32) GPIO 116 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_116_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_116_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_116_PIN_CONTROL_2) GPIO 116 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_116_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_116_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_116_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_116_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_116_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_116_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_116_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_116_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_116_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_116_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_117_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x13c) (R/W 32) GPIO 117 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_117_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_117_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_117_PIN_CONTROL_2) GPIO 117 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_117_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_117_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_117_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_117_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_117_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_117_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_117_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_117_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_117_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_117_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_120_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x140) (R/W 32) GPIO 120 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_120_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_120_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_120_PIN_CONTROL_2) GPIO 120 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_120_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_120_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_120_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_120_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_120_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_120_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_120_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_120_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_120_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_120_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_121_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x144) (R/W 32) GPIO 121 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_121_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_121_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_121_PIN_CONTROL_2) GPIO 121 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_121_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_121_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_121_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_121_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_121_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_121_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_121_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_121_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_121_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_121_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_122_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x148) (R/W 32) GPIO 122 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_122_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_122_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_122_PIN_CONTROL_2) GPIO 122 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_122_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_122_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_122_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_122_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_122_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_122_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_122_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_122_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_122_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_122_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_123_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x14c) (R/W 32) GPIO 123 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_123_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_123_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_123_PIN_CONTROL_2) GPIO 123 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_123_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_123_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_123_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_123_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_123_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_123_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_123_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_123_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_123_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_123_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_124_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x150) (R/W 32) GPIO 124 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_124_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_124_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_124_PIN_CONTROL_2) GPIO 124 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_124_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_124_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_124_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_124_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_124_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_124_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_124_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_124_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_124_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_124_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_125_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x154) (R/W 32) GPIO 125 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_125_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_125_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_125_PIN_CONTROL_2) GPIO 125 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_125_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_125_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_125_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_125_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_125_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_125_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_125_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_125_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_125_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_125_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_126_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x158) (R/W 32) GPIO 126 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_126_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_126_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_126_PIN_CONTROL_2) GPIO 126 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_126_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_126_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_126_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_126_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_126_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_126_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_126_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_126_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_126_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_126_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_127_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x15c) (R/W 32) GPIO 127 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_127_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_127_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_127_PIN_CONTROL_2) GPIO 127 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_127_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_127_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_127_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_127_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_127_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_127_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_127_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_127_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_127_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_127_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_130_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x160) (R/W 32) GPIO 130 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_130_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_130_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_130_PIN_CONTROL_2) GPIO 130 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_130_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_130_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_130_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_130_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_130_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_130_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_130_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_130_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_130_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_130_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_131_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x164) (R/W 32) GPIO 131 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_131_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_131_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_131_PIN_CONTROL_2) GPIO 131 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_131_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_131_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_131_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_131_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_131_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_131_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_131_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_131_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_131_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_131_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_132_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x168) (R/W 32) GPIO 132 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_132_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_132_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_132_PIN_CONTROL_2) GPIO 132 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_132_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_132_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_132_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_132_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_132_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_132_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_132_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_132_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_132_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_132_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_140_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x180) (R/W 32) GPIO 140 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_140_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_140_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_140_PIN_CONTROL_2) GPIO 140 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_140_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_140_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_140_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_140_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_140_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_140_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_140_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_140_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_140_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_140_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_141_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x184) (R/W 32) GPIO 141 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_141_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_141_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_141_PIN_CONTROL_2) GPIO 141 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_141_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_141_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_141_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_141_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_141_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_141_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_141_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_141_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_141_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_141_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_142_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x188) (R/W 32) GPIO 142 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_142_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_142_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_142_PIN_CONTROL_2) GPIO 142 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_142_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_142_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_142_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_142_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_142_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_142_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_142_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_142_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_142_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_142_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_143_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x18c) (R/W 32) GPIO 143 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_143_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_143_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_143_PIN_CONTROL_2) GPIO 143 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_143_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_143_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_143_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_143_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_143_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_143_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_143_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_143_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_143_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_143_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_144_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x190) (R/W 32) GPIO 144 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_144_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_144_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_144_PIN_CONTROL_2) GPIO 144 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_144_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_144_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_144_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_144_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_144_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_144_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_144_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_144_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_144_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_144_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_145_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x194) (R/W 32) GPIO 145 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_145_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_145_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_145_PIN_CONTROL_2) GPIO 145 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_145_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_145_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_145_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_145_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_145_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_145_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_145_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_145_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_145_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_145_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_146_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x198) (R/W 32) GPIO 146 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_146_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_146_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_146_PIN_CONTROL_2) GPIO 146 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_146_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_146_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_146_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_146_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_146_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_146_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_146_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_146_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_146_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_146_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_147_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x19c) (R/W 32) GPIO 147 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_147_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_147_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_147_PIN_CONTROL_2) GPIO 147 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_147_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_147_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_147_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_147_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_147_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_147_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_147_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_147_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_147_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_147_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_150_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x1a0) (R/W 32) GPIO 150 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_150_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_150_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_150_PIN_CONTROL_2) GPIO 150 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_150_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_150_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_150_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_150_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_150_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_150_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_150_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_150_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_150_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_150_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_151_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x1a4) (R/W 32) GPIO 151 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_151_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_151_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_151_PIN_CONTROL_2) GPIO 151 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_151_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_151_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_151_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_151_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_151_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_151_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_151_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_151_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_151_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_151_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_152_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x1a8) (R/W 32) GPIO 152 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_152_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_152_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_152_PIN_CONTROL_2) GPIO 152 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_152_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_152_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_152_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_152_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_152_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_152_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_152_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_152_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_152_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_152_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_153_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x1ac) (R/W 32) GPIO 153 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_153_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_153_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_153_PIN_CONTROL_2) GPIO 153 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_153_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_153_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_153_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_153_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_153_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_153_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_153_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_153_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_153_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_153_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_154_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x1b0) (R/W 32) GPIO 154 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_154_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_154_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_154_PIN_CONTROL_2) GPIO 154 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_154_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_154_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_154_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_154_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_154_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_154_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_154_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_154_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_154_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_154_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_155_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x1b4) (R/W 32) GPIO 155 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_155_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_155_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_155_PIN_CONTROL_2) GPIO 155 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_155_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_155_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_155_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_155_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_155_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_155_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_155_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_155_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_155_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_155_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_156_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x1b8) (R/W 32) GPIO 156 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_156_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_156_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_156_PIN_CONTROL_2) GPIO 156 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_156_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_156_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_156_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_156_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_156_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_156_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_156_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_156_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_156_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_156_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_157_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x1bc) (R/W 32) GPIO 157 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_157_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_157_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_157_PIN_CONTROL_2) GPIO 157 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_157_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_157_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_157_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_157_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_157_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_157_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_157_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_157_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_157_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_157_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_161_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x1c4) (R/W 32) GPIO 161 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_161_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_161_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_161_PIN_CONTROL_2) GPIO 161 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_161_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_161_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_161_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_161_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_161_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_161_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_161_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_161_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_161_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_161_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_162_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x1c8) (R/W 32) GPIO 162 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_162_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_162_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_162_PIN_CONTROL_2) GPIO 162 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_162_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_162_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_162_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_162_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_162_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_162_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_162_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_162_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_162_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_162_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_163_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x1cc) (R/W 32) GPIO 163 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_163_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_163_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_163_PIN_CONTROL_2) GPIO 163 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_163_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_163_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_163_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_163_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_163_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_163_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_163_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_163_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_163_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_163_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_165_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x1d4) (R/W 32) GPIO 165 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_165_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_165_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_165_PIN_CONTROL_2) GPIO 165 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_165_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_165_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_165_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_165_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_165_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_165_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_165_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_165_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_165_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_165_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_170_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x1e0) (R/W 32) GPIO 170 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_170_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_170_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_170_PIN_CONTROL_2) GPIO 170 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_170_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_170_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_170_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_170_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_170_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_170_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_170_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_170_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_170_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_170_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_171_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x1e4) (R/W 32) GPIO 171 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_171_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_171_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_171_PIN_CONTROL_2) GPIO 171 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_171_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_171_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_171_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_171_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_171_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_171_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_171_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_171_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_171_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_171_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_172_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x1e8) (R/W 32) GPIO 172 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_172_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_172_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_172_PIN_CONTROL_2) GPIO 172 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_172_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_172_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_172_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_172_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_172_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_172_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_172_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_172_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_172_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_172_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_175_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x1f4) (R/W 32) GPIO 175 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_175_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_175_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_175_PIN_CONTROL_2) GPIO 175 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_175_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_175_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_175_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_175_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_175_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_175_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_175_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_175_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_175_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_175_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_200_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x200) (R/W 32) GPIO 200 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_200_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_200_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_200_PIN_CONTROL_2) GPIO 200 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_200_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_200_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_200_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_200_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_200_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_200_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_200_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_200_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_200_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_200_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_201_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x204) (R/W 32) GPIO 201 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_201_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_201_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_201_PIN_CONTROL_2) GPIO 201 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_201_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_201_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_201_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_201_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_201_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_201_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_201_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_201_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_201_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_201_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_202_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x208) (R/W 32) GPIO 202 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_202_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_202_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_202_PIN_CONTROL_2) GPIO 202 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_202_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_202_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_202_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_202_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_202_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_202_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_202_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_202_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_202_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_202_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_203_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x20c) (R/W 32) GPIO 203 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_203_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_203_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_203_PIN_CONTROL_2) GPIO 203 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_203_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_203_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_203_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_203_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_203_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_203_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_203_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_203_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_203_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_203_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_204_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x210) (R/W 32) GPIO 204 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_204_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_204_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_204_PIN_CONTROL_2) GPIO 204 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_204_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_204_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_204_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_204_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_204_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_204_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_204_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_204_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_204_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_204_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_205_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x214) (R/W 32) GPIO 205 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_205_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_205_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_205_PIN_CONTROL_2) GPIO 205 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_205_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_205_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_205_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_205_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_205_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_205_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_205_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_205_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_205_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_205_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_206_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x218) (R/W 32) GPIO 206 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_206_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_206_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_206_PIN_CONTROL_2) GPIO 206 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_206_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_206_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_206_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_206_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_206_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_206_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_206_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_206_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_206_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_206_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_207_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x21c) (R/W 32) GPIO 207 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_207_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_207_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_207_PIN_CONTROL_2) GPIO 207 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_207_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_207_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_207_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_207_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_207_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_207_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_207_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_207_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_207_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_207_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_210_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x220) (R/W 32) GPIO 210 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_210_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_210_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_210_PIN_CONTROL_2) GPIO 210 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_210_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_210_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_210_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_210_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_210_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_210_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_210_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_210_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_210_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_210_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_211_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x224) (R/W 32) GPIO 211 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_211_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_211_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_211_PIN_CONTROL_2) GPIO 211 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_211_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_211_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_211_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_211_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_211_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_211_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_211_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_211_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_211_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_211_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_212_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x228) (R/W 32) GPIO 212 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_212_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_212_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_212_PIN_CONTROL_2) GPIO 212 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_212_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_212_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_212_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_212_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_212_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_212_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_212_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_212_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_212_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_212_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_213_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x22c) (R/W 32) GPIO 213 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_213_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_213_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_213_PIN_CONTROL_2) GPIO 213 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_213_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_213_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_213_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_213_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_213_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_213_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_213_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_213_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_213_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_213_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_221_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x244) (R/W 32) GPIO 221 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_221_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_221_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_221_PIN_CONTROL_2) GPIO 221 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_221_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_221_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_221_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_221_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_221_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_221_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_221_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_221_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_221_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_221_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_222_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x248) (R/W 32) GPIO 222 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_222_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_222_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_222_PIN_CONTROL_2) GPIO 222 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_222_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_222_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_222_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_222_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_222_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_222_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_222_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_222_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_222_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_222_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_223_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x24c) (R/W 32) GPIO 223 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_223_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_223_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_223_PIN_CONTROL_2) GPIO 223 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_223_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_223_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_223_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_223_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_223_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_223_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_223_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_223_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_223_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_223_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_224_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x250) (R/W 32) GPIO 224 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_224_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_224_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_224_PIN_CONTROL_2) GPIO 224 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_224_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_224_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_224_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_224_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_224_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_224_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_224_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_224_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_224_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_224_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_226_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x258) (R/W 32) GPIO 226 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_226_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_226_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_226_PIN_CONTROL_2) GPIO 226 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_226_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_226_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_226_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_226_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_226_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_226_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_226_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_226_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_226_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_226_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_227_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x25c) (R/W 32) GPIO 227 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_227_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_227_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_227_PIN_CONTROL_2) GPIO 227 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_227_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_227_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_227_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_227_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_227_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_227_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_227_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_227_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_227_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_227_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_240_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x280) (R/W 32) GPIO 240 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_240_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_240_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_240_PIN_CONTROL_2) GPIO 240 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_240_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_240_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_240_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_240_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_240_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_240_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_240_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_240_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_240_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_240_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_241_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x284) (R/W 32) GPIO 241 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_241_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_241_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_241_PIN_CONTROL_2) GPIO 241 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_241_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_241_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_241_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_241_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_241_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_241_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_241_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_241_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_241_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_241_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_242_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x288) (R/W 32) GPIO 242 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_242_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_242_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_242_PIN_CONTROL_2) GPIO 242 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_242_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_242_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_242_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_242_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_242_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_242_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_242_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_242_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_242_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_242_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_243_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x28c) (R/W 32) GPIO 243 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_243_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_243_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_243_PIN_CONTROL_2) GPIO 243 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_243_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_243_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_243_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_243_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_243_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_243_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_243_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_243_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_243_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_243_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_244_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x290) (R/W 32) GPIO 244 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_244_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_244_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_244_PIN_CONTROL_2) GPIO 244 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_244_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_244_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_244_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_244_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_244_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_244_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_244_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_244_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_244_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_244_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_245_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x294) (R/W 32) GPIO 245 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_245_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_245_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_245_PIN_CONTROL_2) GPIO 245 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_245_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_245_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_245_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_245_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_245_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_245_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_245_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_245_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_245_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_245_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_246_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x298) (R/W 32) GPIO 246 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_246_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_246_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_246_PIN_CONTROL_2) GPIO 246 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_246_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_246_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_246_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_246_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_246_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_246_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_246_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_246_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_246_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_246_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_250_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x2a0) (R/W 32) GPIO 250 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_250_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_250_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_250_PIN_CONTROL_2) GPIO 250 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_250_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_250_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_250_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_250_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_250_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_250_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_250_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_250_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_250_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_250_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_253_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x2ac) (R/W 32) GPIO 253 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_253_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_253_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_253_PIN_CONTROL_2) GPIO 253 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_253_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_253_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_253_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_253_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_253_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_253_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_253_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_253_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_253_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_253_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_254_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x2b0) (R/W 32) GPIO 254 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_254_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_254_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_254_PIN_CONTROL_2) GPIO 254 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_254_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_254_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_254_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_254_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_254_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_254_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_254_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_254_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_254_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_254_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_255_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x2b4) (R/W 32) GPIO 255 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_255_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_255_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_255_PIN_CONTROL_2) GPIO 255 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_255_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_255_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_255_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_255_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_255_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_255_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_255_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_255_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_255_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_255_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_256_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x2b8) (R/W 32) GPIO 256 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_256_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_256_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_256_PIN_CONTROL_2) GPIO 256 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_256_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_256_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_256_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_256_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_256_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_256_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_256_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_256_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_256_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_256_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_257_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x2bc) (R/W 32) GPIO 257 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_257_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_257_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_257_PIN_CONTROL_2) GPIO 257 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_257_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_257_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_257_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_257_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_257_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_257_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_257_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_257_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_257_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_257_PIN_CONTROL_2) Register Mask  */

/* -------- GPIO_PIN_CONTROL_2_GPIO_260_PIN_CONTROL_2 : (GPIO_PIN_CONTROL_2 Offset: 0x2c0) (R/W 32) GPIO 260 Pin Control 2 -------- */

typedef union
{
  struct
  {
    uint32_t :4;                        /**< bit:   0..3  Reserved                                      */
    uint32_t DRIVE_STRENGTH:2;          /**< bit:   4..5  These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA */
    uint32_t :26;                       /**< bit:  6..31  Reserved                                      */
  };
  uint32_t w;
} __GPIO_PIN_CONTROL_2_GPIO_260_PIN_CONTROL_2_bits_t;
#define GPIO_PIN_CONTROL_2_GPIO_260_PIN_CONTROL_2_RESETVALUE (0x00U)                                       /**<  (GPIO_PIN_CONTROL_2_GPIO_260_PIN_CONTROL_2) GPIO 260 Pin Control 2  Reset Value */

#define GPIO_PIN_CONTROL_2_GPIO_260_PIN_CONTROL_2_DRIVE_STRENGTH_Pos (4)                                            /**< (GPIO_PIN_CONTROL_2_GPIO_260_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Position */
#define GPIO_PIN_CONTROL_2_GPIO_260_PIN_CONTROL_2_DRIVE_STRENGTH_Msk (0x3U << GPIO_PIN_CONTROL_2_GPIO_260_PIN_CONTROL_2_DRIVE_STRENGTH_Pos)  /**< (GPIO_PIN_CONTROL_2_GPIO_260_PIN_CONTROL_2) These bits are used to select the drive strength on the pin. The drive strength is the same whether the pin is\n   powered by 3.3V or 1.8V. 00 = 2mA, 01 = 4mA, 10 = 8mA, 11 = 12mA Mask */
#define GPIO_PIN_CONTROL_2_GPIO_260_PIN_CONTROL_2_DRIVE_STRENGTH(value) (GPIO_PIN_CONTROL_2_GPIO_260_PIN_CONTROL_2_DRIVE_STRENGTH_Msk & ((value) << GPIO_PIN_CONTROL_2_GPIO_260_PIN_CONTROL_2_DRIVE_STRENGTH_Pos))
#define GPIO_PIN_CONTROL_2_GPIO_260_PIN_CONTROL_2_Msk (0x00000030UL)                                 /**< (GPIO_PIN_CONTROL_2_GPIO_260_PIN_CONTROL_2) Register Mask  */

/** \brief GPIO_PIN_CONTROL_2 register offsets definitions */
#define GPIO_PIN_CONTROL_2_GPIO_000_PIN_CONTROL_2_OFFSET (0x00)         /**< (GPIO_PIN_CONTROL_2_GPIO_000_PIN_CONTROL_2) GPIO 000 PIN CONTROL REGISTER 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_002_PIN_CONTROL_2_OFFSET (0x08)         /**< (GPIO_PIN_CONTROL_2_GPIO_002_PIN_CONTROL_2) GPIO 002 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_003_PIN_CONTROL_2_OFFSET (0x0C)         /**< (GPIO_PIN_CONTROL_2_GPIO_003_PIN_CONTROL_2) GPIO 003 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_004_PIN_CONTROL_2_OFFSET (0x10)         /**< (GPIO_PIN_CONTROL_2_GPIO_004_PIN_CONTROL_2) GPIO 004 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_007_PIN_CONTROL_2_OFFSET (0x1C)         /**< (GPIO_PIN_CONTROL_2_GPIO_007_PIN_CONTROL_2) GPIO 007 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_010_PIN_CONTROL_2_OFFSET (0x20)         /**< (GPIO_PIN_CONTROL_2_GPIO_010_PIN_CONTROL_2) GPIO 010 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_011_PIN_CONTROL_2_OFFSET (0x24)         /**< (GPIO_PIN_CONTROL_2_GPIO_011_PIN_CONTROL_2) GPIO 011 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_012_PIN_CONTROL_2_OFFSET (0x28)         /**< (GPIO_PIN_CONTROL_2_GPIO_012_PIN_CONTROL_2) GPIO 012 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_013_PIN_CONTROL_2_OFFSET (0x2C)         /**< (GPIO_PIN_CONTROL_2_GPIO_013_PIN_CONTROL_2) GPIO 013 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_014_PIN_CONTROL_2_OFFSET (0x30)         /**< (GPIO_PIN_CONTROL_2_GPIO_014_PIN_CONTROL_2) GPIO 014 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_015_PIN_CONTROL_2_OFFSET (0x34)         /**< (GPIO_PIN_CONTROL_2_GPIO_015_PIN_CONTROL_2) GPIO 015 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_016_PIN_CONTROL_2_OFFSET (0x38)         /**< (GPIO_PIN_CONTROL_2_GPIO_016_PIN_CONTROL_2) GPIO 016 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_017_PIN_CONTROL_2_OFFSET (0x3C)         /**< (GPIO_PIN_CONTROL_2_GPIO_017_PIN_CONTROL_2) GPIO 017 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_020_PIN_CONTROL_2_OFFSET (0x40)         /**< (GPIO_PIN_CONTROL_2_GPIO_020_PIN_CONTROL_2) GPIO 020 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_021_PIN_CONTROL_2_OFFSET (0x44)         /**< (GPIO_PIN_CONTROL_2_GPIO_021_PIN_CONTROL_2) GPIO 021 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_022_PIN_CONTROL_2_OFFSET (0x48)         /**< (GPIO_PIN_CONTROL_2_GPIO_022_PIN_CONTROL_2) GPIO 022 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_023_PIN_CONTROL_2_OFFSET (0x4C)         /**< (GPIO_PIN_CONTROL_2_GPIO_023_PIN_CONTROL_2) GPIO 023 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_024_PIN_CONTROL_2_OFFSET (0x50)         /**< (GPIO_PIN_CONTROL_2_GPIO_024_PIN_CONTROL_2) GPIO 024 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_025_PIN_CONTROL_2_OFFSET (0x54)         /**< (GPIO_PIN_CONTROL_2_GPIO_025_PIN_CONTROL_2) GPIO 025 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_026_PIN_CONTROL_2_OFFSET (0x58)         /**< (GPIO_PIN_CONTROL_2_GPIO_026_PIN_CONTROL_2) GPIO 026 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_027_PIN_CONTROL_2_OFFSET (0x5C)         /**< (GPIO_PIN_CONTROL_2_GPIO_027_PIN_CONTROL_2) GPIO 027 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_030_PIN_CONTROL_2_OFFSET (0x60)         /**< (GPIO_PIN_CONTROL_2_GPIO_030_PIN_CONTROL_2) GPIO 030 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_031_PIN_CONTROL_2_OFFSET (0x64)         /**< (GPIO_PIN_CONTROL_2_GPIO_031_PIN_CONTROL_2) GPIO 031 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_032_PIN_CONTROL_2_OFFSET (0x68)         /**< (GPIO_PIN_CONTROL_2_GPIO_032_PIN_CONTROL_2) GPIO 032 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_033_PIN_CONTROL_2_OFFSET (0x6C)         /**< (GPIO_PIN_CONTROL_2_GPIO_033_PIN_CONTROL_2) GPIO 033 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_034_PIN_CONTROL_2_OFFSET (0x70)         /**< (GPIO_PIN_CONTROL_2_GPIO_034_PIN_CONTROL_2) GPIO 034 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_035_PIN_CONTROL_2_OFFSET (0x74)         /**< (GPIO_PIN_CONTROL_2_GPIO_035_PIN_CONTROL_2) GPIO 035 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_036_PIN_CONTROL_2_OFFSET (0x78)         /**< (GPIO_PIN_CONTROL_2_GPIO_036_PIN_CONTROL_2) GPIO 036 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_040_PIN_CONTROL_2_OFFSET (0x80)         /**< (GPIO_PIN_CONTROL_2_GPIO_040_PIN_CONTROL_2) GPIO 040 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_042_PIN_CONTROL_2_OFFSET (0x88)         /**< (GPIO_PIN_CONTROL_2_GPIO_042_PIN_CONTROL_2) GPIO 042 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_043_PIN_CONTROL_2_OFFSET (0x8C)         /**< (GPIO_PIN_CONTROL_2_GPIO_043_PIN_CONTROL_2) GPIO 043 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_044_PIN_CONTROL_2_OFFSET (0x90)         /**< (GPIO_PIN_CONTROL_2_GPIO_044_PIN_CONTROL_2) GPIO 044 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_045_PIN_CONTROL_2_OFFSET (0x94)         /**< (GPIO_PIN_CONTROL_2_GPIO_045_PIN_CONTROL_2) GPIO 045 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_046_PIN_CONTROL_2_OFFSET (0x98)         /**< (GPIO_PIN_CONTROL_2_GPIO_046_PIN_CONTROL_2) GPIO 046 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_047_PIN_CONTROL_2_OFFSET (0x9C)         /**< (GPIO_PIN_CONTROL_2_GPIO_047_PIN_CONTROL_2) GPIO 047 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_050_PIN_CONTROL_2_OFFSET (0xA0)         /**< (GPIO_PIN_CONTROL_2_GPIO_050_PIN_CONTROL_2) GPIO 050 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_051_PIN_CONTROL_2_OFFSET (0xA4)         /**< (GPIO_PIN_CONTROL_2_GPIO_051_PIN_CONTROL_2) GPIO 051 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_052_PIN_CONTROL_2_OFFSET (0xA8)         /**< (GPIO_PIN_CONTROL_2_GPIO_052_PIN_CONTROL_2) GPIO 052 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_053_PIN_CONTROL_2_OFFSET (0xAC)         /**< (GPIO_PIN_CONTROL_2_GPIO_053_PIN_CONTROL_2) GPIO 053 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_054_PIN_CONTROL_2_OFFSET (0xB0)         /**< (GPIO_PIN_CONTROL_2_GPIO_054_PIN_CONTROL_2) GPIO 054 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_055_PIN_CONTROL_2_OFFSET (0xB4)         /**< (GPIO_PIN_CONTROL_2_GPIO_055_PIN_CONTROL_2) GPIO 055 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_056_PIN_CONTROL_2_OFFSET (0xB8)         /**< (GPIO_PIN_CONTROL_2_GPIO_056_PIN_CONTROL_2) GPIO 056 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_057_PIN_CONTROL_2_OFFSET (0xBC)         /**< (GPIO_PIN_CONTROL_2_GPIO_057_PIN_CONTROL_2) GPIO 057 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_060_PIN_CONTROL_2_OFFSET (0xC0)         /**< (GPIO_PIN_CONTROL_2_GPIO_060_PIN_CONTROL_2) GPIO 060 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_061_PIN_CONTROL_2_OFFSET (0xC4)         /**< (GPIO_PIN_CONTROL_2_GPIO_061_PIN_CONTROL_2) GPIO 061 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_062_PIN_CONTROL_2_OFFSET (0xC8)         /**< (GPIO_PIN_CONTROL_2_GPIO_062_PIN_CONTROL_2) GPIO 062 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_063_PIN_CONTROL_2_OFFSET (0xCC)         /**< (GPIO_PIN_CONTROL_2_GPIO_063_PIN_CONTROL_2) GPIO 063 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_064_PIN_CONTROL_2_OFFSET (0xD0)         /**< (GPIO_PIN_CONTROL_2_GPIO_064_PIN_CONTROL_2) GPIO 064 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_065_PIN_CONTROL_2_OFFSET (0xD4)         /**< (GPIO_PIN_CONTROL_2_GPIO_065_PIN_CONTROL_2) GPIO 065 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_066_PIN_CONTROL_2_OFFSET (0xD8)         /**< (GPIO_PIN_CONTROL_2_GPIO_066_PIN_CONTROL_2) GPIO 066 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_067_PIN_CONTROL_2_OFFSET (0xDC)         /**< (GPIO_PIN_CONTROL_2_GPIO_067_PIN_CONTROL_2) GPIO 067 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_070_PIN_CONTROL_2_OFFSET (0xE0)         /**< (GPIO_PIN_CONTROL_2_GPIO_070_PIN_CONTROL_2) GPIO 070 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_071_PIN_CONTROL_2_OFFSET (0xE4)         /**< (GPIO_PIN_CONTROL_2_GPIO_071_PIN_CONTROL_2) GPIO 071 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_072_PIN_CONTROL_2_OFFSET (0xE8)         /**< (GPIO_PIN_CONTROL_2_GPIO_072_PIN_CONTROL_2) GPIO 072 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_073_PIN_CONTROL_2_OFFSET (0xEC)         /**< (GPIO_PIN_CONTROL_2_GPIO_073_PIN_CONTROL_2) GPIO 073 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_074_PIN_CONTROL_2_OFFSET (0xF0)         /**< (GPIO_PIN_CONTROL_2_GPIO_074_PIN_CONTROL_2) GPIO 074 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_075_PIN_CONTROL_2_OFFSET (0xF4)         /**< (GPIO_PIN_CONTROL_2_GPIO_075_PIN_CONTROL_2) GPIO 075 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_076_PIN_CONTROL_2_OFFSET (0xF8)         /**< (GPIO_PIN_CONTROL_2_GPIO_076_PIN_CONTROL_2) GPIO 076 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_100_PIN_CONTROL_2_OFFSET (0x100)        /**< (GPIO_PIN_CONTROL_2_GPIO_100_PIN_CONTROL_2) GPIO 100 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_101_PIN_CONTROL_2_OFFSET (0x104)        /**< (GPIO_PIN_CONTROL_2_GPIO_101_PIN_CONTROL_2) GPIO 101 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_102_PIN_CONTROL_2_OFFSET (0x108)        /**< (GPIO_PIN_CONTROL_2_GPIO_102_PIN_CONTROL_2) GPIO 102 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_104_PIN_CONTROL_2_OFFSET (0x110)        /**< (GPIO_PIN_CONTROL_2_GPIO_104_PIN_CONTROL_2) GPIO 104 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_105_PIN_CONTROL_2_OFFSET (0x114)        /**< (GPIO_PIN_CONTROL_2_GPIO_105_PIN_CONTROL_2) GPIO 105 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_106_PIN_CONTROL_2_OFFSET (0x118)        /**< (GPIO_PIN_CONTROL_2_GPIO_106_PIN_CONTROL_2) GPIO 106 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_107_PIN_CONTROL_2_OFFSET (0x11C)        /**< (GPIO_PIN_CONTROL_2_GPIO_107_PIN_CONTROL_2) GPIO 107 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_112_PIN_CONTROL_2_OFFSET (0x128)        /**< (GPIO_PIN_CONTROL_2_GPIO_112_PIN_CONTROL_2) GPIO 112 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_113_PIN_CONTROL_2_OFFSET (0x12C)        /**< (GPIO_PIN_CONTROL_2_GPIO_113_PIN_CONTROL_2) GPIO 113 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_114_PIN_CONTROL_2_OFFSET (0x130)        /**< (GPIO_PIN_CONTROL_2_GPIO_114_PIN_CONTROL_2) GPIO 114 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_115_PIN_CONTROL_2_OFFSET (0x134)        /**< (GPIO_PIN_CONTROL_2_GPIO_115_PIN_CONTROL_2) GPIO 115 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_116_PIN_CONTROL_2_OFFSET (0x138)        /**< (GPIO_PIN_CONTROL_2_GPIO_116_PIN_CONTROL_2) GPIO 116 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_117_PIN_CONTROL_2_OFFSET (0x13C)        /**< (GPIO_PIN_CONTROL_2_GPIO_117_PIN_CONTROL_2) GPIO 117 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_120_PIN_CONTROL_2_OFFSET (0x140)        /**< (GPIO_PIN_CONTROL_2_GPIO_120_PIN_CONTROL_2) GPIO 120 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_121_PIN_CONTROL_2_OFFSET (0x144)        /**< (GPIO_PIN_CONTROL_2_GPIO_121_PIN_CONTROL_2) GPIO 121 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_122_PIN_CONTROL_2_OFFSET (0x148)        /**< (GPIO_PIN_CONTROL_2_GPIO_122_PIN_CONTROL_2) GPIO 122 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_123_PIN_CONTROL_2_OFFSET (0x14C)        /**< (GPIO_PIN_CONTROL_2_GPIO_123_PIN_CONTROL_2) GPIO 123 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_124_PIN_CONTROL_2_OFFSET (0x150)        /**< (GPIO_PIN_CONTROL_2_GPIO_124_PIN_CONTROL_2) GPIO 124 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_125_PIN_CONTROL_2_OFFSET (0x154)        /**< (GPIO_PIN_CONTROL_2_GPIO_125_PIN_CONTROL_2) GPIO 125 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_126_PIN_CONTROL_2_OFFSET (0x158)        /**< (GPIO_PIN_CONTROL_2_GPIO_126_PIN_CONTROL_2) GPIO 126 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_127_PIN_CONTROL_2_OFFSET (0x15C)        /**< (GPIO_PIN_CONTROL_2_GPIO_127_PIN_CONTROL_2) GPIO 127 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_130_PIN_CONTROL_2_OFFSET (0x160)        /**< (GPIO_PIN_CONTROL_2_GPIO_130_PIN_CONTROL_2) GPIO 130 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_131_PIN_CONTROL_2_OFFSET (0x164)        /**< (GPIO_PIN_CONTROL_2_GPIO_131_PIN_CONTROL_2) GPIO 131 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_132_PIN_CONTROL_2_OFFSET (0x168)        /**< (GPIO_PIN_CONTROL_2_GPIO_132_PIN_CONTROL_2) GPIO 132 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_140_PIN_CONTROL_2_OFFSET (0x180)        /**< (GPIO_PIN_CONTROL_2_GPIO_140_PIN_CONTROL_2) GPIO 140 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_141_PIN_CONTROL_2_OFFSET (0x184)        /**< (GPIO_PIN_CONTROL_2_GPIO_141_PIN_CONTROL_2) GPIO 141 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_142_PIN_CONTROL_2_OFFSET (0x188)        /**< (GPIO_PIN_CONTROL_2_GPIO_142_PIN_CONTROL_2) GPIO 142 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_143_PIN_CONTROL_2_OFFSET (0x18C)        /**< (GPIO_PIN_CONTROL_2_GPIO_143_PIN_CONTROL_2) GPIO 143 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_144_PIN_CONTROL_2_OFFSET (0x190)        /**< (GPIO_PIN_CONTROL_2_GPIO_144_PIN_CONTROL_2) GPIO 144 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_145_PIN_CONTROL_2_OFFSET (0x194)        /**< (GPIO_PIN_CONTROL_2_GPIO_145_PIN_CONTROL_2) GPIO 145 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_146_PIN_CONTROL_2_OFFSET (0x198)        /**< (GPIO_PIN_CONTROL_2_GPIO_146_PIN_CONTROL_2) GPIO 146 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_147_PIN_CONTROL_2_OFFSET (0x19C)        /**< (GPIO_PIN_CONTROL_2_GPIO_147_PIN_CONTROL_2) GPIO 147 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_150_PIN_CONTROL_2_OFFSET (0x1A0)        /**< (GPIO_PIN_CONTROL_2_GPIO_150_PIN_CONTROL_2) GPIO 150 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_151_PIN_CONTROL_2_OFFSET (0x1A4)        /**< (GPIO_PIN_CONTROL_2_GPIO_151_PIN_CONTROL_2) GPIO 151 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_152_PIN_CONTROL_2_OFFSET (0x1A8)        /**< (GPIO_PIN_CONTROL_2_GPIO_152_PIN_CONTROL_2) GPIO 152 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_153_PIN_CONTROL_2_OFFSET (0x1AC)        /**< (GPIO_PIN_CONTROL_2_GPIO_153_PIN_CONTROL_2) GPIO 153 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_154_PIN_CONTROL_2_OFFSET (0x1B0)        /**< (GPIO_PIN_CONTROL_2_GPIO_154_PIN_CONTROL_2) GPIO 154 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_155_PIN_CONTROL_2_OFFSET (0x1B4)        /**< (GPIO_PIN_CONTROL_2_GPIO_155_PIN_CONTROL_2) GPIO 155 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_156_PIN_CONTROL_2_OFFSET (0x1B8)        /**< (GPIO_PIN_CONTROL_2_GPIO_156_PIN_CONTROL_2) GPIO 156 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_157_PIN_CONTROL_2_OFFSET (0x1BC)        /**< (GPIO_PIN_CONTROL_2_GPIO_157_PIN_CONTROL_2) GPIO 157 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_161_PIN_CONTROL_2_OFFSET (0x1C4)        /**< (GPIO_PIN_CONTROL_2_GPIO_161_PIN_CONTROL_2) GPIO 161 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_162_PIN_CONTROL_2_OFFSET (0x1C8)        /**< (GPIO_PIN_CONTROL_2_GPIO_162_PIN_CONTROL_2) GPIO 162 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_163_PIN_CONTROL_2_OFFSET (0x1CC)        /**< (GPIO_PIN_CONTROL_2_GPIO_163_PIN_CONTROL_2) GPIO 163 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_165_PIN_CONTROL_2_OFFSET (0x1D4)        /**< (GPIO_PIN_CONTROL_2_GPIO_165_PIN_CONTROL_2) GPIO 165 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_170_PIN_CONTROL_2_OFFSET (0x1E0)        /**< (GPIO_PIN_CONTROL_2_GPIO_170_PIN_CONTROL_2) GPIO 170 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_171_PIN_CONTROL_2_OFFSET (0x1E4)        /**< (GPIO_PIN_CONTROL_2_GPIO_171_PIN_CONTROL_2) GPIO 171 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_172_PIN_CONTROL_2_OFFSET (0x1E8)        /**< (GPIO_PIN_CONTROL_2_GPIO_172_PIN_CONTROL_2) GPIO 172 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_175_PIN_CONTROL_2_OFFSET (0x1F4)        /**< (GPIO_PIN_CONTROL_2_GPIO_175_PIN_CONTROL_2) GPIO 175 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_200_PIN_CONTROL_2_OFFSET (0x200)        /**< (GPIO_PIN_CONTROL_2_GPIO_200_PIN_CONTROL_2) GPIO 200 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_201_PIN_CONTROL_2_OFFSET (0x204)        /**< (GPIO_PIN_CONTROL_2_GPIO_201_PIN_CONTROL_2) GPIO 201 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_202_PIN_CONTROL_2_OFFSET (0x208)        /**< (GPIO_PIN_CONTROL_2_GPIO_202_PIN_CONTROL_2) GPIO 202 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_203_PIN_CONTROL_2_OFFSET (0x20C)        /**< (GPIO_PIN_CONTROL_2_GPIO_203_PIN_CONTROL_2) GPIO 203 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_204_PIN_CONTROL_2_OFFSET (0x210)        /**< (GPIO_PIN_CONTROL_2_GPIO_204_PIN_CONTROL_2) GPIO 204 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_205_PIN_CONTROL_2_OFFSET (0x214)        /**< (GPIO_PIN_CONTROL_2_GPIO_205_PIN_CONTROL_2) GPIO 205 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_206_PIN_CONTROL_2_OFFSET (0x218)        /**< (GPIO_PIN_CONTROL_2_GPIO_206_PIN_CONTROL_2) GPIO 206 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_207_PIN_CONTROL_2_OFFSET (0x21C)        /**< (GPIO_PIN_CONTROL_2_GPIO_207_PIN_CONTROL_2) GPIO 207 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_210_PIN_CONTROL_2_OFFSET (0x220)        /**< (GPIO_PIN_CONTROL_2_GPIO_210_PIN_CONTROL_2) GPIO 210 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_211_PIN_CONTROL_2_OFFSET (0x224)        /**< (GPIO_PIN_CONTROL_2_GPIO_211_PIN_CONTROL_2) GPIO 211 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_212_PIN_CONTROL_2_OFFSET (0x228)        /**< (GPIO_PIN_CONTROL_2_GPIO_212_PIN_CONTROL_2) GPIO 212 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_213_PIN_CONTROL_2_OFFSET (0x22C)        /**< (GPIO_PIN_CONTROL_2_GPIO_213_PIN_CONTROL_2) GPIO 213 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_221_PIN_CONTROL_2_OFFSET (0x244)        /**< (GPIO_PIN_CONTROL_2_GPIO_221_PIN_CONTROL_2) GPIO 221 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_222_PIN_CONTROL_2_OFFSET (0x248)        /**< (GPIO_PIN_CONTROL_2_GPIO_222_PIN_CONTROL_2) GPIO 222 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_223_PIN_CONTROL_2_OFFSET (0x24C)        /**< (GPIO_PIN_CONTROL_2_GPIO_223_PIN_CONTROL_2) GPIO 223 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_224_PIN_CONTROL_2_OFFSET (0x250)        /**< (GPIO_PIN_CONTROL_2_GPIO_224_PIN_CONTROL_2) GPIO 224 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_226_PIN_CONTROL_2_OFFSET (0x258)        /**< (GPIO_PIN_CONTROL_2_GPIO_226_PIN_CONTROL_2) GPIO 226 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_227_PIN_CONTROL_2_OFFSET (0x25C)        /**< (GPIO_PIN_CONTROL_2_GPIO_227_PIN_CONTROL_2) GPIO 227 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_240_PIN_CONTROL_2_OFFSET (0x280)        /**< (GPIO_PIN_CONTROL_2_GPIO_240_PIN_CONTROL_2) GPIO 240 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_241_PIN_CONTROL_2_OFFSET (0x284)        /**< (GPIO_PIN_CONTROL_2_GPIO_241_PIN_CONTROL_2) GPIO 241 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_242_PIN_CONTROL_2_OFFSET (0x288)        /**< (GPIO_PIN_CONTROL_2_GPIO_242_PIN_CONTROL_2) GPIO 242 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_243_PIN_CONTROL_2_OFFSET (0x28C)        /**< (GPIO_PIN_CONTROL_2_GPIO_243_PIN_CONTROL_2) GPIO 243 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_244_PIN_CONTROL_2_OFFSET (0x290)        /**< (GPIO_PIN_CONTROL_2_GPIO_244_PIN_CONTROL_2) GPIO 244 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_245_PIN_CONTROL_2_OFFSET (0x294)        /**< (GPIO_PIN_CONTROL_2_GPIO_245_PIN_CONTROL_2) GPIO 245 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_246_PIN_CONTROL_2_OFFSET (0x298)        /**< (GPIO_PIN_CONTROL_2_GPIO_246_PIN_CONTROL_2) GPIO 246 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_250_PIN_CONTROL_2_OFFSET (0x2A0)        /**< (GPIO_PIN_CONTROL_2_GPIO_250_PIN_CONTROL_2) GPIO 250 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_253_PIN_CONTROL_2_OFFSET (0x2AC)        /**< (GPIO_PIN_CONTROL_2_GPIO_253_PIN_CONTROL_2) GPIO 253 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_254_PIN_CONTROL_2_OFFSET (0x2B0)        /**< (GPIO_PIN_CONTROL_2_GPIO_254_PIN_CONTROL_2) GPIO 254 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_255_PIN_CONTROL_2_OFFSET (0x2B4)        /**< (GPIO_PIN_CONTROL_2_GPIO_255_PIN_CONTROL_2) GPIO 255 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_256_PIN_CONTROL_2_OFFSET (0x2B8)        /**< (GPIO_PIN_CONTROL_2_GPIO_256_PIN_CONTROL_2) GPIO 256 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_257_PIN_CONTROL_2_OFFSET (0x2BC)        /**< (GPIO_PIN_CONTROL_2_GPIO_257_PIN_CONTROL_2) GPIO 257 Pin Control 2 Offset */
#define GPIO_PIN_CONTROL_2_GPIO_260_PIN_CONTROL_2_OFFSET (0x2C0)        /**< (GPIO_PIN_CONTROL_2_GPIO_260_PIN_CONTROL_2) GPIO 260 Pin Control 2 Offset */

/** \brief GPIO_PIN_CONTROL_2 register API structure */
typedef struct
{  /* GPIO Pin Control 2 Registers */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_000_PIN_CONTROL_2_bits_t GPIO_000_PIN_CONTROL_2; /**< Offset: 0x00 (R/W  32) GPIO 000 PIN CONTROL REGISTER 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_002_PIN_CONTROL_2_bits_t GPIO_002_PIN_CONTROL_2; /**< Offset: 0x08 (R/W  32) GPIO 002 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_003_PIN_CONTROL_2_bits_t GPIO_003_PIN_CONTROL_2; /**< Offset: 0x0C (R/W  32) GPIO 003 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_004_PIN_CONTROL_2_bits_t GPIO_004_PIN_CONTROL_2; /**< Offset: 0x10 (R/W  32) GPIO 004 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_007_PIN_CONTROL_2_bits_t GPIO_007_PIN_CONTROL_2; /**< Offset: 0x1C (R/W  32) GPIO 007 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_010_PIN_CONTROL_2_bits_t GPIO_010_PIN_CONTROL_2; /**< Offset: 0x20 (R/W  32) GPIO 010 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_011_PIN_CONTROL_2_bits_t GPIO_011_PIN_CONTROL_2; /**< Offset: 0x24 (R/W  32) GPIO 011 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_012_PIN_CONTROL_2_bits_t GPIO_012_PIN_CONTROL_2; /**< Offset: 0x28 (R/W  32) GPIO 012 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_013_PIN_CONTROL_2_bits_t GPIO_013_PIN_CONTROL_2; /**< Offset: 0x2C (R/W  32) GPIO 013 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_014_PIN_CONTROL_2_bits_t GPIO_014_PIN_CONTROL_2; /**< Offset: 0x30 (R/W  32) GPIO 014 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_015_PIN_CONTROL_2_bits_t GPIO_015_PIN_CONTROL_2; /**< Offset: 0x34 (R/W  32) GPIO 015 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_016_PIN_CONTROL_2_bits_t GPIO_016_PIN_CONTROL_2; /**< Offset: 0x38 (R/W  32) GPIO 016 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_017_PIN_CONTROL_2_bits_t GPIO_017_PIN_CONTROL_2; /**< Offset: 0x3C (R/W  32) GPIO 017 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_020_PIN_CONTROL_2_bits_t GPIO_020_PIN_CONTROL_2; /**< Offset: 0x40 (R/W  32) GPIO 020 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_021_PIN_CONTROL_2_bits_t GPIO_021_PIN_CONTROL_2; /**< Offset: 0x44 (R/W  32) GPIO 021 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_022_PIN_CONTROL_2_bits_t GPIO_022_PIN_CONTROL_2; /**< Offset: 0x48 (R/W  32) GPIO 022 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_023_PIN_CONTROL_2_bits_t GPIO_023_PIN_CONTROL_2; /**< Offset: 0x4C (R/W  32) GPIO 023 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_024_PIN_CONTROL_2_bits_t GPIO_024_PIN_CONTROL_2; /**< Offset: 0x50 (R/W  32) GPIO 024 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_025_PIN_CONTROL_2_bits_t GPIO_025_PIN_CONTROL_2; /**< Offset: 0x54 (R/W  32) GPIO 025 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_026_PIN_CONTROL_2_bits_t GPIO_026_PIN_CONTROL_2; /**< Offset: 0x58 (R/W  32) GPIO 026 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_027_PIN_CONTROL_2_bits_t GPIO_027_PIN_CONTROL_2; /**< Offset: 0x5C (R/W  32) GPIO 027 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_030_PIN_CONTROL_2_bits_t GPIO_030_PIN_CONTROL_2; /**< Offset: 0x60 (R/W  32) GPIO 030 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_031_PIN_CONTROL_2_bits_t GPIO_031_PIN_CONTROL_2; /**< Offset: 0x64 (R/W  32) GPIO 031 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_032_PIN_CONTROL_2_bits_t GPIO_032_PIN_CONTROL_2; /**< Offset: 0x68 (R/W  32) GPIO 032 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_033_PIN_CONTROL_2_bits_t GPIO_033_PIN_CONTROL_2; /**< Offset: 0x6C (R/W  32) GPIO 033 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_034_PIN_CONTROL_2_bits_t GPIO_034_PIN_CONTROL_2; /**< Offset: 0x70 (R/W  32) GPIO 034 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_035_PIN_CONTROL_2_bits_t GPIO_035_PIN_CONTROL_2; /**< Offset: 0x74 (R/W  32) GPIO 035 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_036_PIN_CONTROL_2_bits_t GPIO_036_PIN_CONTROL_2; /**< Offset: 0x78 (R/W  32) GPIO 036 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_040_PIN_CONTROL_2_bits_t GPIO_040_PIN_CONTROL_2; /**< Offset: 0x80 (R/W  32) GPIO 040 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_042_PIN_CONTROL_2_bits_t GPIO_042_PIN_CONTROL_2; /**< Offset: 0x88 (R/W  32) GPIO 042 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_043_PIN_CONTROL_2_bits_t GPIO_043_PIN_CONTROL_2; /**< Offset: 0x8C (R/W  32) GPIO 043 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_044_PIN_CONTROL_2_bits_t GPIO_044_PIN_CONTROL_2; /**< Offset: 0x90 (R/W  32) GPIO 044 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_045_PIN_CONTROL_2_bits_t GPIO_045_PIN_CONTROL_2; /**< Offset: 0x94 (R/W  32) GPIO 045 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_046_PIN_CONTROL_2_bits_t GPIO_046_PIN_CONTROL_2; /**< Offset: 0x98 (R/W  32) GPIO 046 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_047_PIN_CONTROL_2_bits_t GPIO_047_PIN_CONTROL_2; /**< Offset: 0x9C (R/W  32) GPIO 047 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_050_PIN_CONTROL_2_bits_t GPIO_050_PIN_CONTROL_2; /**< Offset: 0xA0 (R/W  32) GPIO 050 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_051_PIN_CONTROL_2_bits_t GPIO_051_PIN_CONTROL_2; /**< Offset: 0xA4 (R/W  32) GPIO 051 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_052_PIN_CONTROL_2_bits_t GPIO_052_PIN_CONTROL_2; /**< Offset: 0xA8 (R/W  32) GPIO 052 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_053_PIN_CONTROL_2_bits_t GPIO_053_PIN_CONTROL_2; /**< Offset: 0xAC (R/W  32) GPIO 053 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_054_PIN_CONTROL_2_bits_t GPIO_054_PIN_CONTROL_2; /**< Offset: 0xB0 (R/W  32) GPIO 054 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_055_PIN_CONTROL_2_bits_t GPIO_055_PIN_CONTROL_2; /**< Offset: 0xB4 (R/W  32) GPIO 055 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_056_PIN_CONTROL_2_bits_t GPIO_056_PIN_CONTROL_2; /**< Offset: 0xB8 (R/W  32) GPIO 056 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_057_PIN_CONTROL_2_bits_t GPIO_057_PIN_CONTROL_2; /**< Offset: 0xBC (R/W  32) GPIO 057 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_060_PIN_CONTROL_2_bits_t GPIO_060_PIN_CONTROL_2; /**< Offset: 0xC0 (R/W  32) GPIO 060 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_061_PIN_CONTROL_2_bits_t GPIO_061_PIN_CONTROL_2; /**< Offset: 0xC4 (R/W  32) GPIO 061 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_062_PIN_CONTROL_2_bits_t GPIO_062_PIN_CONTROL_2; /**< Offset: 0xC8 (R/W  32) GPIO 062 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_063_PIN_CONTROL_2_bits_t GPIO_063_PIN_CONTROL_2; /**< Offset: 0xCC (R/W  32) GPIO 063 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_064_PIN_CONTROL_2_bits_t GPIO_064_PIN_CONTROL_2; /**< Offset: 0xD0 (R/W  32) GPIO 064 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_065_PIN_CONTROL_2_bits_t GPIO_065_PIN_CONTROL_2; /**< Offset: 0xD4 (R/W  32) GPIO 065 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_066_PIN_CONTROL_2_bits_t GPIO_066_PIN_CONTROL_2; /**< Offset: 0xD8 (R/W  32) GPIO 066 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_067_PIN_CONTROL_2_bits_t GPIO_067_PIN_CONTROL_2; /**< Offset: 0xDC (R/W  32) GPIO 067 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_070_PIN_CONTROL_2_bits_t GPIO_070_PIN_CONTROL_2; /**< Offset: 0xE0 (R/W  32) GPIO 070 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_071_PIN_CONTROL_2_bits_t GPIO_071_PIN_CONTROL_2; /**< Offset: 0xE4 (R/W  32) GPIO 071 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_072_PIN_CONTROL_2_bits_t GPIO_072_PIN_CONTROL_2; /**< Offset: 0xE8 (R/W  32) GPIO 072 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_073_PIN_CONTROL_2_bits_t GPIO_073_PIN_CONTROL_2; /**< Offset: 0xEC (R/W  32) GPIO 073 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_074_PIN_CONTROL_2_bits_t GPIO_074_PIN_CONTROL_2; /**< Offset: 0xF0 (R/W  32) GPIO 074 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_075_PIN_CONTROL_2_bits_t GPIO_075_PIN_CONTROL_2; /**< Offset: 0xF4 (R/W  32) GPIO 075 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_076_PIN_CONTROL_2_bits_t GPIO_076_PIN_CONTROL_2; /**< Offset: 0xF8 (R/W  32) GPIO 076 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_100_PIN_CONTROL_2_bits_t GPIO_100_PIN_CONTROL_2; /**< Offset: 0x100 (R/W  32) GPIO 100 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_101_PIN_CONTROL_2_bits_t GPIO_101_PIN_CONTROL_2; /**< Offset: 0x104 (R/W  32) GPIO 101 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_102_PIN_CONTROL_2_bits_t GPIO_102_PIN_CONTROL_2; /**< Offset: 0x108 (R/W  32) GPIO 102 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_104_PIN_CONTROL_2_bits_t GPIO_104_PIN_CONTROL_2; /**< Offset: 0x110 (R/W  32) GPIO 104 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_105_PIN_CONTROL_2_bits_t GPIO_105_PIN_CONTROL_2; /**< Offset: 0x114 (R/W  32) GPIO 105 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_106_PIN_CONTROL_2_bits_t GPIO_106_PIN_CONTROL_2; /**< Offset: 0x118 (R/W  32) GPIO 106 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_107_PIN_CONTROL_2_bits_t GPIO_107_PIN_CONTROL_2; /**< Offset: 0x11C (R/W  32) GPIO 107 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_112_PIN_CONTROL_2_bits_t GPIO_112_PIN_CONTROL_2; /**< Offset: 0x128 (R/W  32) GPIO 112 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_113_PIN_CONTROL_2_bits_t GPIO_113_PIN_CONTROL_2; /**< Offset: 0x12C (R/W  32) GPIO 113 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_114_PIN_CONTROL_2_bits_t GPIO_114_PIN_CONTROL_2; /**< Offset: 0x130 (R/W  32) GPIO 114 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_115_PIN_CONTROL_2_bits_t GPIO_115_PIN_CONTROL_2; /**< Offset: 0x134 (R/W  32) GPIO 115 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_116_PIN_CONTROL_2_bits_t GPIO_116_PIN_CONTROL_2; /**< Offset: 0x138 (R/W  32) GPIO 116 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_117_PIN_CONTROL_2_bits_t GPIO_117_PIN_CONTROL_2; /**< Offset: 0x13C (R/W  32) GPIO 117 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_120_PIN_CONTROL_2_bits_t GPIO_120_PIN_CONTROL_2; /**< Offset: 0x140 (R/W  32) GPIO 120 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_121_PIN_CONTROL_2_bits_t GPIO_121_PIN_CONTROL_2; /**< Offset: 0x144 (R/W  32) GPIO 121 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_122_PIN_CONTROL_2_bits_t GPIO_122_PIN_CONTROL_2; /**< Offset: 0x148 (R/W  32) GPIO 122 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_123_PIN_CONTROL_2_bits_t GPIO_123_PIN_CONTROL_2; /**< Offset: 0x14C (R/W  32) GPIO 123 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_124_PIN_CONTROL_2_bits_t GPIO_124_PIN_CONTROL_2; /**< Offset: 0x150 (R/W  32) GPIO 124 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_125_PIN_CONTROL_2_bits_t GPIO_125_PIN_CONTROL_2; /**< Offset: 0x154 (R/W  32) GPIO 125 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_126_PIN_CONTROL_2_bits_t GPIO_126_PIN_CONTROL_2; /**< Offset: 0x158 (R/W  32) GPIO 126 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_127_PIN_CONTROL_2_bits_t GPIO_127_PIN_CONTROL_2; /**< Offset: 0x15C (R/W  32) GPIO 127 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_130_PIN_CONTROL_2_bits_t GPIO_130_PIN_CONTROL_2; /**< Offset: 0x160 (R/W  32) GPIO 130 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_131_PIN_CONTROL_2_bits_t GPIO_131_PIN_CONTROL_2; /**< Offset: 0x164 (R/W  32) GPIO 131 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_132_PIN_CONTROL_2_bits_t GPIO_132_PIN_CONTROL_2; /**< Offset: 0x168 (R/W  32) GPIO 132 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_140_PIN_CONTROL_2_bits_t GPIO_140_PIN_CONTROL_2; /**< Offset: 0x180 (R/W  32) GPIO 140 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_141_PIN_CONTROL_2_bits_t GPIO_141_PIN_CONTROL_2; /**< Offset: 0x184 (R/W  32) GPIO 141 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_142_PIN_CONTROL_2_bits_t GPIO_142_PIN_CONTROL_2; /**< Offset: 0x188 (R/W  32) GPIO 142 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_143_PIN_CONTROL_2_bits_t GPIO_143_PIN_CONTROL_2; /**< Offset: 0x18C (R/W  32) GPIO 143 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_144_PIN_CONTROL_2_bits_t GPIO_144_PIN_CONTROL_2; /**< Offset: 0x190 (R/W  32) GPIO 144 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_145_PIN_CONTROL_2_bits_t GPIO_145_PIN_CONTROL_2; /**< Offset: 0x194 (R/W  32) GPIO 145 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_146_PIN_CONTROL_2_bits_t GPIO_146_PIN_CONTROL_2; /**< Offset: 0x198 (R/W  32) GPIO 146 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_147_PIN_CONTROL_2_bits_t GPIO_147_PIN_CONTROL_2; /**< Offset: 0x19C (R/W  32) GPIO 147 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_150_PIN_CONTROL_2_bits_t GPIO_150_PIN_CONTROL_2; /**< Offset: 0x1A0 (R/W  32) GPIO 150 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_151_PIN_CONTROL_2_bits_t GPIO_151_PIN_CONTROL_2; /**< Offset: 0x1A4 (R/W  32) GPIO 151 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_152_PIN_CONTROL_2_bits_t GPIO_152_PIN_CONTROL_2; /**< Offset: 0x1A8 (R/W  32) GPIO 152 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_153_PIN_CONTROL_2_bits_t GPIO_153_PIN_CONTROL_2; /**< Offset: 0x1AC (R/W  32) GPIO 153 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_154_PIN_CONTROL_2_bits_t GPIO_154_PIN_CONTROL_2; /**< Offset: 0x1B0 (R/W  32) GPIO 154 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_155_PIN_CONTROL_2_bits_t GPIO_155_PIN_CONTROL_2; /**< Offset: 0x1B4 (R/W  32) GPIO 155 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_156_PIN_CONTROL_2_bits_t GPIO_156_PIN_CONTROL_2; /**< Offset: 0x1B8 (R/W  32) GPIO 156 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_157_PIN_CONTROL_2_bits_t GPIO_157_PIN_CONTROL_2; /**< Offset: 0x1BC (R/W  32) GPIO 157 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_161_PIN_CONTROL_2_bits_t GPIO_161_PIN_CONTROL_2; /**< Offset: 0x1C4 (R/W  32) GPIO 161 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_162_PIN_CONTROL_2_bits_t GPIO_162_PIN_CONTROL_2; /**< Offset: 0x1C8 (R/W  32) GPIO 162 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_163_PIN_CONTROL_2_bits_t GPIO_163_PIN_CONTROL_2; /**< Offset: 0x1CC (R/W  32) GPIO 163 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_165_PIN_CONTROL_2_bits_t GPIO_165_PIN_CONTROL_2; /**< Offset: 0x1D4 (R/W  32) GPIO 165 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_170_PIN_CONTROL_2_bits_t GPIO_170_PIN_CONTROL_2; /**< Offset: 0x1E0 (R/W  32) GPIO 170 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_171_PIN_CONTROL_2_bits_t GPIO_171_PIN_CONTROL_2; /**< Offset: 0x1E4 (R/W  32) GPIO 171 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_172_PIN_CONTROL_2_bits_t GPIO_172_PIN_CONTROL_2; /**< Offset: 0x1E8 (R/W  32) GPIO 172 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_175_PIN_CONTROL_2_bits_t GPIO_175_PIN_CONTROL_2; /**< Offset: 0x1F4 (R/W  32) GPIO 175 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_200_PIN_CONTROL_2_bits_t GPIO_200_PIN_CONTROL_2; /**< Offset: 0x200 (R/W  32) GPIO 200 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_201_PIN_CONTROL_2_bits_t GPIO_201_PIN_CONTROL_2; /**< Offset: 0x204 (R/W  32) GPIO 201 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_202_PIN_CONTROL_2_bits_t GPIO_202_PIN_CONTROL_2; /**< Offset: 0x208 (R/W  32) GPIO 202 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_203_PIN_CONTROL_2_bits_t GPIO_203_PIN_CONTROL_2; /**< Offset: 0x20C (R/W  32) GPIO 203 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_204_PIN_CONTROL_2_bits_t GPIO_204_PIN_CONTROL_2; /**< Offset: 0x210 (R/W  32) GPIO 204 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_205_PIN_CONTROL_2_bits_t GPIO_205_PIN_CONTROL_2; /**< Offset: 0x214 (R/W  32) GPIO 205 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_206_PIN_CONTROL_2_bits_t GPIO_206_PIN_CONTROL_2; /**< Offset: 0x218 (R/W  32) GPIO 206 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_207_PIN_CONTROL_2_bits_t GPIO_207_PIN_CONTROL_2; /**< Offset: 0x21C (R/W  32) GPIO 207 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_210_PIN_CONTROL_2_bits_t GPIO_210_PIN_CONTROL_2; /**< Offset: 0x220 (R/W  32) GPIO 210 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_211_PIN_CONTROL_2_bits_t GPIO_211_PIN_CONTROL_2; /**< Offset: 0x224 (R/W  32) GPIO 211 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_212_PIN_CONTROL_2_bits_t GPIO_212_PIN_CONTROL_2; /**< Offset: 0x228 (R/W  32) GPIO 212 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_213_PIN_CONTROL_2_bits_t GPIO_213_PIN_CONTROL_2; /**< Offset: 0x22C (R/W  32) GPIO 213 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_221_PIN_CONTROL_2_bits_t GPIO_221_PIN_CONTROL_2; /**< Offset: 0x244 (R/W  32) GPIO 221 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_222_PIN_CONTROL_2_bits_t GPIO_222_PIN_CONTROL_2; /**< Offset: 0x248 (R/W  32) GPIO 222 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_223_PIN_CONTROL_2_bits_t GPIO_223_PIN_CONTROL_2; /**< Offset: 0x24C (R/W  32) GPIO 223 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_224_PIN_CONTROL_2_bits_t GPIO_224_PIN_CONTROL_2; /**< Offset: 0x250 (R/W  32) GPIO 224 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_226_PIN_CONTROL_2_bits_t GPIO_226_PIN_CONTROL_2; /**< Offset: 0x258 (R/W  32) GPIO 226 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_227_PIN_CONTROL_2_bits_t GPIO_227_PIN_CONTROL_2; /**< Offset: 0x25C (R/W  32) GPIO 227 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_240_PIN_CONTROL_2_bits_t GPIO_240_PIN_CONTROL_2; /**< Offset: 0x280 (R/W  32) GPIO 240 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_241_PIN_CONTROL_2_bits_t GPIO_241_PIN_CONTROL_2; /**< Offset: 0x284 (R/W  32) GPIO 241 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_242_PIN_CONTROL_2_bits_t GPIO_242_PIN_CONTROL_2; /**< Offset: 0x288 (R/W  32) GPIO 242 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_243_PIN_CONTROL_2_bits_t GPIO_243_PIN_CONTROL_2; /**< Offset: 0x28C (R/W  32) GPIO 243 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_244_PIN_CONTROL_2_bits_t GPIO_244_PIN_CONTROL_2; /**< Offset: 0x290 (R/W  32) GPIO 244 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_245_PIN_CONTROL_2_bits_t GPIO_245_PIN_CONTROL_2; /**< Offset: 0x294 (R/W  32) GPIO 245 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_246_PIN_CONTROL_2_bits_t GPIO_246_PIN_CONTROL_2; /**< Offset: 0x298 (R/W  32) GPIO 246 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_250_PIN_CONTROL_2_bits_t GPIO_250_PIN_CONTROL_2; /**< Offset: 0x2A0 (R/W  32) GPIO 250 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_253_PIN_CONTROL_2_bits_t GPIO_253_PIN_CONTROL_2; /**< Offset: 0x2AC (R/W  32) GPIO 253 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_254_PIN_CONTROL_2_bits_t GPIO_254_PIN_CONTROL_2; /**< Offset: 0x2B0 (R/W  32) GPIO 254 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_255_PIN_CONTROL_2_bits_t GPIO_255_PIN_CONTROL_2; /**< Offset: 0x2B4 (R/W  32) GPIO 255 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_256_PIN_CONTROL_2_bits_t GPIO_256_PIN_CONTROL_2; /**< Offset: 0x2B8 (R/W  32) GPIO 256 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_257_PIN_CONTROL_2_bits_t GPIO_257_PIN_CONTROL_2; /**< Offset: 0x2BC (R/W  32) GPIO 257 Pin Control 2 */
  __IO  __GPIO_PIN_CONTROL_2_GPIO_260_PIN_CONTROL_2_bits_t GPIO_260_PIN_CONTROL_2; /**< Offset: 0x2C0 (R/W  32) GPIO 260 Pin Control 2 */
} gpiopincontrol2_registers_t;
/** @}  end of GPIO Pin Control 2 Registers */

#endif /* _PIC32CX_0525SG12_GPIO_PIN_CONTROL_2_COMPONENT_H_ */
