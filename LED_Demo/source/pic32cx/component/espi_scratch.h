/**
 * \brief Component description for PIC32CX/0525SG12 ESPI_SCRATCH
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
#ifndef _PIC32CX_0525SG12_ESPI_SCRATCH_COMPONENT_H_
#define _PIC32CX_0525SG12_ESPI_SCRATCH_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_ESPI_SCRATCH 32 Byte ESPI Test Register
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR ESPI_SCRATCH */
/* ========================================================================== */

/* -------- ESPI_SCRATCH_SCRATCH0 : (ESPI_SCRATCH Offset: 0x00) (R/W 32) Scratch 0 Register -------- */

typedef union
{
  struct
  {
    uint32_t SCRATCH0:32;               /**< bit:  0..31  This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. */
  };
  uint32_t w;
} __ESPI_SCRATCH_SCRATCH0_bits_t;
#define ESPI_SCRATCH_SCRATCH0_RESETVALUE    (0x00U)                                       /**<  (ESPI_SCRATCH_SCRATCH0) Scratch 0 Register  Reset Value */

#define ESPI_SCRATCH_SCRATCH0_SCRATCH0_Pos    (0)                                            /**< (ESPI_SCRATCH_SCRATCH0) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define ESPI_SCRATCH_SCRATCH0_SCRATCH0_Msk    (0xFFFFFFFFU << ESPI_SCRATCH_SCRATCH0_SCRATCH0_Pos)  /**< (ESPI_SCRATCH_SCRATCH0) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define ESPI_SCRATCH_SCRATCH0_SCRATCH0(value) (ESPI_SCRATCH_SCRATCH0_SCRATCH0_Msk & ((value) << ESPI_SCRATCH_SCRATCH0_SCRATCH0_Pos))
#define ESPI_SCRATCH_SCRATCH0_Msk             (0xFFFFFFFFUL)                                 /**< (ESPI_SCRATCH_SCRATCH0) Register Mask  */

/* -------- ESPI_SCRATCH_SCRATCH1 : (ESPI_SCRATCH Offset: 0x04) (R/W 32) Scratch 1 Register -------- */

typedef union
{
  struct
  {
    uint32_t SCRATCH0:32;               /**< bit:  0..31  This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. */
  };
  uint32_t w;
} __ESPI_SCRATCH_SCRATCH1_bits_t;
#define ESPI_SCRATCH_SCRATCH1_RESETVALUE    (0x00U)                                       /**<  (ESPI_SCRATCH_SCRATCH1) Scratch 1 Register  Reset Value */

#define ESPI_SCRATCH_SCRATCH1_SCRATCH0_Pos    (0)                                            /**< (ESPI_SCRATCH_SCRATCH1) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define ESPI_SCRATCH_SCRATCH1_SCRATCH0_Msk    (0xFFFFFFFFU << ESPI_SCRATCH_SCRATCH1_SCRATCH0_Pos)  /**< (ESPI_SCRATCH_SCRATCH1) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define ESPI_SCRATCH_SCRATCH1_SCRATCH0(value) (ESPI_SCRATCH_SCRATCH1_SCRATCH0_Msk & ((value) << ESPI_SCRATCH_SCRATCH1_SCRATCH0_Pos))
#define ESPI_SCRATCH_SCRATCH1_Msk             (0xFFFFFFFFUL)                                 /**< (ESPI_SCRATCH_SCRATCH1) Register Mask  */

/* -------- ESPI_SCRATCH_SCRATCH2 : (ESPI_SCRATCH Offset: 0x08) (R/W 32) Scratch 2 Register -------- */

typedef union
{
  struct
  {
    uint32_t SCRATCH2:32;               /**< bit:  0..31  This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. */
  };
  uint32_t w;
} __ESPI_SCRATCH_SCRATCH2_bits_t;
#define ESPI_SCRATCH_SCRATCH2_RESETVALUE    (0x00U)                                       /**<  (ESPI_SCRATCH_SCRATCH2) Scratch 2 Register  Reset Value */

#define ESPI_SCRATCH_SCRATCH2_SCRATCH2_Pos    (0)                                            /**< (ESPI_SCRATCH_SCRATCH2) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define ESPI_SCRATCH_SCRATCH2_SCRATCH2_Msk    (0xFFFFFFFFU << ESPI_SCRATCH_SCRATCH2_SCRATCH2_Pos)  /**< (ESPI_SCRATCH_SCRATCH2) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define ESPI_SCRATCH_SCRATCH2_SCRATCH2(value) (ESPI_SCRATCH_SCRATCH2_SCRATCH2_Msk & ((value) << ESPI_SCRATCH_SCRATCH2_SCRATCH2_Pos))
#define ESPI_SCRATCH_SCRATCH2_Msk             (0xFFFFFFFFUL)                                 /**< (ESPI_SCRATCH_SCRATCH2) Register Mask  */

/* -------- ESPI_SCRATCH_SCRATCH3 : (ESPI_SCRATCH Offset: 0x0c) (R/W 32) Scratch 3 Register -------- */

typedef union
{
  struct
  {
    uint32_t SCRATCH3:32;               /**< bit:  0..31  This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. */
  };
  uint32_t w;
} __ESPI_SCRATCH_SCRATCH3_bits_t;
#define ESPI_SCRATCH_SCRATCH3_RESETVALUE    (0x00U)                                       /**<  (ESPI_SCRATCH_SCRATCH3) Scratch 3 Register  Reset Value */

#define ESPI_SCRATCH_SCRATCH3_SCRATCH3_Pos    (0)                                            /**< (ESPI_SCRATCH_SCRATCH3) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define ESPI_SCRATCH_SCRATCH3_SCRATCH3_Msk    (0xFFFFFFFFU << ESPI_SCRATCH_SCRATCH3_SCRATCH3_Pos)  /**< (ESPI_SCRATCH_SCRATCH3) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define ESPI_SCRATCH_SCRATCH3_SCRATCH3(value) (ESPI_SCRATCH_SCRATCH3_SCRATCH3_Msk & ((value) << ESPI_SCRATCH_SCRATCH3_SCRATCH3_Pos))
#define ESPI_SCRATCH_SCRATCH3_Msk             (0xFFFFFFFFUL)                                 /**< (ESPI_SCRATCH_SCRATCH3) Register Mask  */

/* -------- ESPI_SCRATCH_SCRATCH4 : (ESPI_SCRATCH Offset: 0x10) (R/W 32) Scratch 4 Register -------- */

typedef union
{
  struct
  {
    uint32_t SCRATCH4:32;               /**< bit:  0..31  This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. */
  };
  uint32_t w;
} __ESPI_SCRATCH_SCRATCH4_bits_t;
#define ESPI_SCRATCH_SCRATCH4_RESETVALUE    (0x00U)                                       /**<  (ESPI_SCRATCH_SCRATCH4) Scratch 4 Register  Reset Value */

#define ESPI_SCRATCH_SCRATCH4_SCRATCH4_Pos    (0)                                            /**< (ESPI_SCRATCH_SCRATCH4) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define ESPI_SCRATCH_SCRATCH4_SCRATCH4_Msk    (0xFFFFFFFFU << ESPI_SCRATCH_SCRATCH4_SCRATCH4_Pos)  /**< (ESPI_SCRATCH_SCRATCH4) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define ESPI_SCRATCH_SCRATCH4_SCRATCH4(value) (ESPI_SCRATCH_SCRATCH4_SCRATCH4_Msk & ((value) << ESPI_SCRATCH_SCRATCH4_SCRATCH4_Pos))
#define ESPI_SCRATCH_SCRATCH4_Msk             (0xFFFFFFFFUL)                                 /**< (ESPI_SCRATCH_SCRATCH4) Register Mask  */

/* -------- ESPI_SCRATCH_SCRATCH5 : (ESPI_SCRATCH Offset: 0x14) (R/W 32) Scratch 5 Register -------- */

typedef union
{
  struct
  {
    uint32_t SCRATCH5:32;               /**< bit:  0..31  This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. */
  };
  uint32_t w;
} __ESPI_SCRATCH_SCRATCH5_bits_t;
#define ESPI_SCRATCH_SCRATCH5_RESETVALUE    (0x00U)                                       /**<  (ESPI_SCRATCH_SCRATCH5) Scratch 5 Register  Reset Value */

#define ESPI_SCRATCH_SCRATCH5_SCRATCH5_Pos    (0)                                            /**< (ESPI_SCRATCH_SCRATCH5) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define ESPI_SCRATCH_SCRATCH5_SCRATCH5_Msk    (0xFFFFFFFFU << ESPI_SCRATCH_SCRATCH5_SCRATCH5_Pos)  /**< (ESPI_SCRATCH_SCRATCH5) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define ESPI_SCRATCH_SCRATCH5_SCRATCH5(value) (ESPI_SCRATCH_SCRATCH5_SCRATCH5_Msk & ((value) << ESPI_SCRATCH_SCRATCH5_SCRATCH5_Pos))
#define ESPI_SCRATCH_SCRATCH5_Msk             (0xFFFFFFFFUL)                                 /**< (ESPI_SCRATCH_SCRATCH5) Register Mask  */

/* -------- ESPI_SCRATCH_SCRATCH6 : (ESPI_SCRATCH Offset: 0x18) (R/W 32) Scratch 6 Register -------- */

typedef union
{
  struct
  {
    uint32_t SCRATCH6:32;               /**< bit:  0..31  This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. */
  };
  uint32_t w;
} __ESPI_SCRATCH_SCRATCH6_bits_t;
#define ESPI_SCRATCH_SCRATCH6_RESETVALUE    (0x00U)                                       /**<  (ESPI_SCRATCH_SCRATCH6) Scratch 6 Register  Reset Value */

#define ESPI_SCRATCH_SCRATCH6_SCRATCH6_Pos    (0)                                            /**< (ESPI_SCRATCH_SCRATCH6) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define ESPI_SCRATCH_SCRATCH6_SCRATCH6_Msk    (0xFFFFFFFFU << ESPI_SCRATCH_SCRATCH6_SCRATCH6_Pos)  /**< (ESPI_SCRATCH_SCRATCH6) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define ESPI_SCRATCH_SCRATCH6_SCRATCH6(value) (ESPI_SCRATCH_SCRATCH6_SCRATCH6_Msk & ((value) << ESPI_SCRATCH_SCRATCH6_SCRATCH6_Pos))
#define ESPI_SCRATCH_SCRATCH6_Msk             (0xFFFFFFFFUL)                                 /**< (ESPI_SCRATCH_SCRATCH6) Register Mask  */

/* -------- ESPI_SCRATCH_SCRATCH7 : (ESPI_SCRATCH Offset: 0x1c) (R/W 32) Scratch 7 Register -------- */

typedef union
{
  struct
  {
    uint32_t SCRATCH7:32;               /**< bit:  0..31  This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. */
  };
  uint32_t w;
} __ESPI_SCRATCH_SCRATCH7_bits_t;
#define ESPI_SCRATCH_SCRATCH7_RESETVALUE    (0x00U)                                       /**<  (ESPI_SCRATCH_SCRATCH7) Scratch 7 Register  Reset Value */

#define ESPI_SCRATCH_SCRATCH7_SCRATCH7_Pos    (0)                                            /**< (ESPI_SCRATCH_SCRATCH7) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Position */
#define ESPI_SCRATCH_SCRATCH7_SCRATCH7_Msk    (0xFFFFFFFFU << ESPI_SCRATCH_SCRATCH7_SCRATCH7_Pos)  /**< (ESPI_SCRATCH_SCRATCH7) This field has no functionality other than storage. This register is aliased to  ESPI Config Scratch Register. Mask */
#define ESPI_SCRATCH_SCRATCH7_SCRATCH7(value) (ESPI_SCRATCH_SCRATCH7_SCRATCH7_Msk & ((value) << ESPI_SCRATCH_SCRATCH7_SCRATCH7_Pos))
#define ESPI_SCRATCH_SCRATCH7_Msk             (0xFFFFFFFFUL)                                 /**< (ESPI_SCRATCH_SCRATCH7) Register Mask  */

/** \brief ESPI_SCRATCH register offsets definitions */
#define ESPI_SCRATCH_SCRATCH0_OFFSET (0x00)         /**< (ESPI_SCRATCH_SCRATCH0) Scratch 0 Register Offset */
#define ESPI_SCRATCH_SCRATCH1_OFFSET (0x04)         /**< (ESPI_SCRATCH_SCRATCH1) Scratch 1 Register Offset */
#define ESPI_SCRATCH_SCRATCH2_OFFSET (0x08)         /**< (ESPI_SCRATCH_SCRATCH2) Scratch 2 Register Offset */
#define ESPI_SCRATCH_SCRATCH3_OFFSET (0x0C)         /**< (ESPI_SCRATCH_SCRATCH3) Scratch 3 Register Offset */
#define ESPI_SCRATCH_SCRATCH4_OFFSET (0x10)         /**< (ESPI_SCRATCH_SCRATCH4) Scratch 4 Register Offset */
#define ESPI_SCRATCH_SCRATCH5_OFFSET (0x14)         /**< (ESPI_SCRATCH_SCRATCH5) Scratch 5 Register Offset */
#define ESPI_SCRATCH_SCRATCH6_OFFSET (0x18)         /**< (ESPI_SCRATCH_SCRATCH6) Scratch 6 Register Offset */
#define ESPI_SCRATCH_SCRATCH7_OFFSET (0x1C)         /**< (ESPI_SCRATCH_SCRATCH7) Scratch 7 Register Offset */

/** \brief ESPI_SCRATCH register API structure */
typedef struct
{  /* 32 Byte ESPI Test Register */
  __IO  __ESPI_SCRATCH_SCRATCH0_bits_t SCRATCH0;      /**< Offset: 0x00 (R/W  32) Scratch 0 Register */
  __IO  __ESPI_SCRATCH_SCRATCH1_bits_t SCRATCH1;      /**< Offset: 0x04 (R/W  32) Scratch 1 Register */
  __IO  __ESPI_SCRATCH_SCRATCH2_bits_t SCRATCH2;      /**< Offset: 0x08 (R/W  32) Scratch 2 Register */
  __IO  __ESPI_SCRATCH_SCRATCH3_bits_t SCRATCH3;      /**< Offset: 0x0C (R/W  32) Scratch 3 Register */
  __IO  __ESPI_SCRATCH_SCRATCH4_bits_t SCRATCH4;      /**< Offset: 0x10 (R/W  32) Scratch 4 Register */
  __IO  __ESPI_SCRATCH_SCRATCH5_bits_t SCRATCH5;      /**< Offset: 0x14 (R/W  32) Scratch 5 Register */
  __IO  __ESPI_SCRATCH_SCRATCH6_bits_t SCRATCH6;      /**< Offset: 0x18 (R/W  32) Scratch 6 Register */
  __IO  __ESPI_SCRATCH_SCRATCH7_bits_t SCRATCH7;      /**< Offset: 0x1C (R/W  32) Scratch 7 Register */
} espiscratch_registers_t;
/** @}  end of 32 Byte ESPI Test Register */

#endif /* _PIC32CX_0525SG12_ESPI_SCRATCH_COMPONENT_H_ */
