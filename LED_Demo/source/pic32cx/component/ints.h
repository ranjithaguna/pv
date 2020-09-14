/**
 * \brief Component description for PIC32CX/0525SG12 INTS
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
#ifndef _PIC32CX_0525SG12_INTS_COMPONENT_H_
#define _PIC32CX_0525SG12_INTS_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_INTS The interrupt generation logic is made of 16 groups of signals, each of which\n        consist of a Status register, a Enable register and a Result register. The Status and Enable are\n        latched registers. The Result register is a bit by bit AND function of the Source and Enable registers.\n        All the bits of the Result register are OR'ed together and AND'ed with the corresponding bit in the Block\n        Select register to form the interrupt signal that is routed to the ARM interrupt controller.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR INTS */
/* ========================================================================== */

/* -------- INTS_GIRQ08_SRC : (INTS Offset: 0x00) (R/W 32) Status R/W1C -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ08_SRC_bits_t;
#define INTS_GIRQ08_SRC_RESETVALUE          (0x00U)                                       /**<  (INTS_GIRQ08_SRC) Status R/W1C  Reset Value */

#define INTS_GIRQ08_SRC_Msk                   (0x00000000UL)                                 /**< (INTS_GIRQ08_SRC) Register Mask  */

/* -------- INTS_GIRQ08_EN_SET : (INTS Offset: 0x04) (R/W 32) Write to set source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ08_EN_SET_bits_t;
#define INTS_GIRQ08_EN_SET_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ08_EN_SET) Write to set source enables  Reset Value */

#define INTS_GIRQ08_EN_SET_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ08_EN_SET) Register Mask  */

/* -------- INTS_GIRQ08_RESULT : (INTS Offset: 0x08) (R/ 32) Read-only bitwise OR of Source and Enable -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ08_RESULT_bits_t;
#define INTS_GIRQ08_RESULT_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ08_RESULT) Read-only bitwise OR of Source and Enable  Reset Value */

#define INTS_GIRQ08_RESULT_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ08_RESULT) Register Mask  */

/* -------- INTS_GIRQ08_EN_CLR : (INTS Offset: 0x0c) (R/W 32) Write to clear source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ08_EN_CLR_bits_t;
#define INTS_GIRQ08_EN_CLR_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ08_EN_CLR) Write to clear source enables  Reset Value */

#define INTS_GIRQ08_EN_CLR_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ08_EN_CLR) Register Mask  */

/* -------- INTS_GIRQ09_SRC : (INTS Offset: 0x14) (R/W 32) Status R/W1C -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ09_SRC_bits_t;
#define INTS_GIRQ09_SRC_RESETVALUE          (0x00U)                                       /**<  (INTS_GIRQ09_SRC) Status R/W1C  Reset Value */

#define INTS_GIRQ09_SRC_Msk                   (0x00000000UL)                                 /**< (INTS_GIRQ09_SRC) Register Mask  */

/* -------- INTS_GIRQ09_EN_SET : (INTS Offset: 0x18) (R/W 32) Write to set source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ09_EN_SET_bits_t;
#define INTS_GIRQ09_EN_SET_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ09_EN_SET) Write to set source enables  Reset Value */

#define INTS_GIRQ09_EN_SET_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ09_EN_SET) Register Mask  */

/* -------- INTS_GIRQ09_RESULT : (INTS Offset: 0x1c) (R/ 32) Read-only bitwise OR of Source and Enable -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ09_RESULT_bits_t;
#define INTS_GIRQ09_RESULT_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ09_RESULT) Read-only bitwise OR of Source and Enable  Reset Value */

#define INTS_GIRQ09_RESULT_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ09_RESULT) Register Mask  */

/* -------- INTS_GIRQ09_EN_CLR : (INTS Offset: 0x20) (R/W 32) Write to clear source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ09_EN_CLR_bits_t;
#define INTS_GIRQ09_EN_CLR_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ09_EN_CLR) Write to clear source enables  Reset Value */

#define INTS_GIRQ09_EN_CLR_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ09_EN_CLR) Register Mask  */

/* -------- INTS_GIRQ10_SRC : (INTS Offset: 0x28) (R/W 32) Status R/W1C -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ10_SRC_bits_t;
#define INTS_GIRQ10_SRC_RESETVALUE          (0x00U)                                       /**<  (INTS_GIRQ10_SRC) Status R/W1C  Reset Value */

#define INTS_GIRQ10_SRC_Msk                   (0x00000000UL)                                 /**< (INTS_GIRQ10_SRC) Register Mask  */

/* -------- INTS_GIRQ10_EN_SET : (INTS Offset: 0x2c) (R/W 32) Write to set source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ10_EN_SET_bits_t;
#define INTS_GIRQ10_EN_SET_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ10_EN_SET) Write to set source enables  Reset Value */

#define INTS_GIRQ10_EN_SET_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ10_EN_SET) Register Mask  */

/* -------- INTS_GIRQ10_RESULT : (INTS Offset: 0x30) (R/ 32) Read-only bitwise OR of Source and Enable -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ10_RESULT_bits_t;
#define INTS_GIRQ10_RESULT_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ10_RESULT) Read-only bitwise OR of Source and Enable  Reset Value */

#define INTS_GIRQ10_RESULT_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ10_RESULT) Register Mask  */

/* -------- INTS_GIRQ10_EN_CLR : (INTS Offset: 0x34) (R/W 32) Write to clear source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ10_EN_CLR_bits_t;
#define INTS_GIRQ10_EN_CLR_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ10_EN_CLR) Write to clear source enables  Reset Value */

#define INTS_GIRQ10_EN_CLR_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ10_EN_CLR) Register Mask  */

/* -------- INTS_GIRQ11_SRC : (INTS Offset: 0x3c) (R/W 32) Status R/W1C -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ11_SRC_bits_t;
#define INTS_GIRQ11_SRC_RESETVALUE          (0x00U)                                       /**<  (INTS_GIRQ11_SRC) Status R/W1C  Reset Value */

#define INTS_GIRQ11_SRC_Msk                   (0x00000000UL)                                 /**< (INTS_GIRQ11_SRC) Register Mask  */

/* -------- INTS_GIRQ11_EN_SET : (INTS Offset: 0x40) (R/W 32) Write to set source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ11_EN_SET_bits_t;
#define INTS_GIRQ11_EN_SET_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ11_EN_SET) Write to set source enables  Reset Value */

#define INTS_GIRQ11_EN_SET_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ11_EN_SET) Register Mask  */

/* -------- INTS_GIRQ11_RESULT : (INTS Offset: 0x44) (R/ 32) Read-only bitwise OR of Source and Enable -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ11_RESULT_bits_t;
#define INTS_GIRQ11_RESULT_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ11_RESULT) Read-only bitwise OR of Source and Enable  Reset Value */

#define INTS_GIRQ11_RESULT_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ11_RESULT) Register Mask  */

/* -------- INTS_GIRQ11_EN_CLR : (INTS Offset: 0x48) (R/W 32) Write to clear source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ11_EN_CLR_bits_t;
#define INTS_GIRQ11_EN_CLR_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ11_EN_CLR) Write to clear source enables  Reset Value */

#define INTS_GIRQ11_EN_CLR_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ11_EN_CLR) Register Mask  */

/* -------- INTS_GIRQ12_SRC : (INTS Offset: 0x50) (R/W 32) Status R/W1C -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ12_SRC_bits_t;
#define INTS_GIRQ12_SRC_RESETVALUE          (0x00U)                                       /**<  (INTS_GIRQ12_SRC) Status R/W1C  Reset Value */

#define INTS_GIRQ12_SRC_Msk                   (0x00000000UL)                                 /**< (INTS_GIRQ12_SRC) Register Mask  */

/* -------- INTS_GIRQ12_EN_SET : (INTS Offset: 0x54) (R/W 32) Write to set source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ12_EN_SET_bits_t;
#define INTS_GIRQ12_EN_SET_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ12_EN_SET) Write to set source enables  Reset Value */

#define INTS_GIRQ12_EN_SET_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ12_EN_SET) Register Mask  */

/* -------- INTS_GIRQ12_RESULT : (INTS Offset: 0x58) (R/ 32) Read-only bitwise OR of Source and Enable -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ12_RESULT_bits_t;
#define INTS_GIRQ12_RESULT_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ12_RESULT) Read-only bitwise OR of Source and Enable  Reset Value */

#define INTS_GIRQ12_RESULT_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ12_RESULT) Register Mask  */

/* -------- INTS_GIRQ12_EN_CLR : (INTS Offset: 0x5c) (R/W 32) Write to clear source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ12_EN_CLR_bits_t;
#define INTS_GIRQ12_EN_CLR_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ12_EN_CLR) Write to clear source enables  Reset Value */

#define INTS_GIRQ12_EN_CLR_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ12_EN_CLR) Register Mask  */

/* -------- INTS_GIRQ13_SRC : (INTS Offset: 0x64) (R/W 32) Status R/W1C -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ13_SRC_bits_t;
#define INTS_GIRQ13_SRC_RESETVALUE          (0x00U)                                       /**<  (INTS_GIRQ13_SRC) Status R/W1C  Reset Value */

#define INTS_GIRQ13_SRC_Msk                   (0x00000000UL)                                 /**< (INTS_GIRQ13_SRC) Register Mask  */

/* -------- INTS_GIRQ13_EN_SET : (INTS Offset: 0x68) (R/W 32) Write to set source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ13_EN_SET_bits_t;
#define INTS_GIRQ13_EN_SET_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ13_EN_SET) Write to set source enables  Reset Value */

#define INTS_GIRQ13_EN_SET_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ13_EN_SET) Register Mask  */

/* -------- INTS_GIRQ13_RESULT : (INTS Offset: 0x6c) (R/ 32) Read-only bitwise OR of Source and Enable -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ13_RESULT_bits_t;
#define INTS_GIRQ13_RESULT_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ13_RESULT) Read-only bitwise OR of Source and Enable  Reset Value */

#define INTS_GIRQ13_RESULT_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ13_RESULT) Register Mask  */

/* -------- INTS_GIRQ13_EN_CLR : (INTS Offset: 0x70) (R/W 32) Write to clear source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ13_EN_CLR_bits_t;
#define INTS_GIRQ13_EN_CLR_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ13_EN_CLR) Write to clear source enables  Reset Value */

#define INTS_GIRQ13_EN_CLR_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ13_EN_CLR) Register Mask  */

/* -------- INTS_GIRQ14_SRC : (INTS Offset: 0x78) (R/W 32) Status R/W1C -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ14_SRC_bits_t;
#define INTS_GIRQ14_SRC_RESETVALUE          (0x00U)                                       /**<  (INTS_GIRQ14_SRC) Status R/W1C  Reset Value */

#define INTS_GIRQ14_SRC_Msk                   (0x00000000UL)                                 /**< (INTS_GIRQ14_SRC) Register Mask  */

/* -------- INTS_GIRQ14_EN_SET : (INTS Offset: 0x7c) (R/W 32) Write to set source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ14_EN_SET_bits_t;
#define INTS_GIRQ14_EN_SET_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ14_EN_SET) Write to set source enables  Reset Value */

#define INTS_GIRQ14_EN_SET_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ14_EN_SET) Register Mask  */

/* -------- INTS_GIRQ14_RESULT : (INTS Offset: 0x80) (R/ 32) Read-only bitwise OR of Source and Enable -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ14_RESULT_bits_t;
#define INTS_GIRQ14_RESULT_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ14_RESULT) Read-only bitwise OR of Source and Enable  Reset Value */

#define INTS_GIRQ14_RESULT_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ14_RESULT) Register Mask  */

/* -------- INTS_GIRQ14_EN_CLR : (INTS Offset: 0x84) (R/W 32) Write to clear source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ14_EN_CLR_bits_t;
#define INTS_GIRQ14_EN_CLR_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ14_EN_CLR) Write to clear source enables  Reset Value */

#define INTS_GIRQ14_EN_CLR_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ14_EN_CLR) Register Mask  */

/* -------- INTS_GIRQ15_SRC : (INTS Offset: 0x8c) (R/W 32) Status R/W1C -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ15_SRC_bits_t;
#define INTS_GIRQ15_SRC_RESETVALUE          (0x00U)                                       /**<  (INTS_GIRQ15_SRC) Status R/W1C  Reset Value */

#define INTS_GIRQ15_SRC_Msk                   (0x00000000UL)                                 /**< (INTS_GIRQ15_SRC) Register Mask  */

/* -------- INTS_GIRQ15_EN_SET : (INTS Offset: 0x90) (R/W 32) Write to set source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ15_EN_SET_bits_t;
#define INTS_GIRQ15_EN_SET_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ15_EN_SET) Write to set source enables  Reset Value */

#define INTS_GIRQ15_EN_SET_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ15_EN_SET) Register Mask  */

/* -------- INTS_GIRQ15_RESULT : (INTS Offset: 0x94) (R/ 32) Read-only bitwise OR of Source and Enable -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ15_RESULT_bits_t;
#define INTS_GIRQ15_RESULT_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ15_RESULT) Read-only bitwise OR of Source and Enable  Reset Value */

#define INTS_GIRQ15_RESULT_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ15_RESULT) Register Mask  */

/* -------- INTS_GIRQ15_EN_CLR : (INTS Offset: 0x98) (R/W 32) Write to clear source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ15_EN_CLR_bits_t;
#define INTS_GIRQ15_EN_CLR_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ15_EN_CLR) Write to clear source enables  Reset Value */

#define INTS_GIRQ15_EN_CLR_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ15_EN_CLR) Register Mask  */

/* -------- INTS_GIRQ16_SRC : (INTS Offset: 0xa0) (R/W 32) Status R/W1C -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ16_SRC_bits_t;
#define INTS_GIRQ16_SRC_RESETVALUE          (0x00U)                                       /**<  (INTS_GIRQ16_SRC) Status R/W1C  Reset Value */

#define INTS_GIRQ16_SRC_Msk                   (0x00000000UL)                                 /**< (INTS_GIRQ16_SRC) Register Mask  */

/* -------- INTS_GIRQ16_EN_SET : (INTS Offset: 0xa4) (R/W 32) Write to set source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ16_EN_SET_bits_t;
#define INTS_GIRQ16_EN_SET_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ16_EN_SET) Write to set source enables  Reset Value */

#define INTS_GIRQ16_EN_SET_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ16_EN_SET) Register Mask  */

/* -------- INTS_GIRQ16_RESULT : (INTS Offset: 0xa8) (R/ 32) Read-only bitwise OR of Source and Enable -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ16_RESULT_bits_t;
#define INTS_GIRQ16_RESULT_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ16_RESULT) Read-only bitwise OR of Source and Enable  Reset Value */

#define INTS_GIRQ16_RESULT_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ16_RESULT) Register Mask  */

/* -------- INTS_GIRQ16_EN_CLR : (INTS Offset: 0xac) (R/W 32) Write to clear source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ16_EN_CLR_bits_t;
#define INTS_GIRQ16_EN_CLR_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ16_EN_CLR) Write to clear source enables  Reset Value */

#define INTS_GIRQ16_EN_CLR_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ16_EN_CLR) Register Mask  */

/* -------- INTS_GIRQ17_SRC : (INTS Offset: 0xb4) (R/W 32) Status R/W1C -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ17_SRC_bits_t;
#define INTS_GIRQ17_SRC_RESETVALUE          (0x00U)                                       /**<  (INTS_GIRQ17_SRC) Status R/W1C  Reset Value */

#define INTS_GIRQ17_SRC_Msk                   (0x00000000UL)                                 /**< (INTS_GIRQ17_SRC) Register Mask  */

/* -------- INTS_GIRQ17_EN_SET : (INTS Offset: 0xb8) (R/W 32) Write to set source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ17_EN_SET_bits_t;
#define INTS_GIRQ17_EN_SET_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ17_EN_SET) Write to set source enables  Reset Value */

#define INTS_GIRQ17_EN_SET_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ17_EN_SET) Register Mask  */

/* -------- INTS_GIRQ17_RESULT : (INTS Offset: 0xbc) (R/ 32) Read-only bitwise OR of Source and Enable -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ17_RESULT_bits_t;
#define INTS_GIRQ17_RESULT_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ17_RESULT) Read-only bitwise OR of Source and Enable  Reset Value */

#define INTS_GIRQ17_RESULT_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ17_RESULT) Register Mask  */

/* -------- INTS_GIRQ17_EN_CLR : (INTS Offset: 0xc0) (R/W 32) Write to clear source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ17_EN_CLR_bits_t;
#define INTS_GIRQ17_EN_CLR_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ17_EN_CLR) Write to clear source enables  Reset Value */

#define INTS_GIRQ17_EN_CLR_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ17_EN_CLR) Register Mask  */

/* -------- INTS_GIRQ18_SRC : (INTS Offset: 0xc8) (R/W 32) Status R/W1C -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ18_SRC_bits_t;
#define INTS_GIRQ18_SRC_RESETVALUE          (0x00U)                                       /**<  (INTS_GIRQ18_SRC) Status R/W1C  Reset Value */

#define INTS_GIRQ18_SRC_Msk                   (0x00000000UL)                                 /**< (INTS_GIRQ18_SRC) Register Mask  */

/* -------- INTS_GIRQ18_EN_SET : (INTS Offset: 0xcc) (R/W 32) Write to set source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ18_EN_SET_bits_t;
#define INTS_GIRQ18_EN_SET_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ18_EN_SET) Write to set source enables  Reset Value */

#define INTS_GIRQ18_EN_SET_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ18_EN_SET) Register Mask  */

/* -------- INTS_GIRQ18_RESULT : (INTS Offset: 0xd0) (R/ 32) Read-only bitwise OR of Source and Enable -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ18_RESULT_bits_t;
#define INTS_GIRQ18_RESULT_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ18_RESULT) Read-only bitwise OR of Source and Enable  Reset Value */

#define INTS_GIRQ18_RESULT_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ18_RESULT) Register Mask  */

/* -------- INTS_GIRQ18_EN_CLR : (INTS Offset: 0xd4) (R/W 32) Write to clear source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ18_EN_CLR_bits_t;
#define INTS_GIRQ18_EN_CLR_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ18_EN_CLR) Write to clear source enables  Reset Value */

#define INTS_GIRQ18_EN_CLR_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ18_EN_CLR) Register Mask  */

/* -------- INTS_GIRQ19_SRC : (INTS Offset: 0xdc) (R/W 32) Status R/W1C -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ19_SRC_bits_t;
#define INTS_GIRQ19_SRC_RESETVALUE          (0x00U)                                       /**<  (INTS_GIRQ19_SRC) Status R/W1C  Reset Value */

#define INTS_GIRQ19_SRC_Msk                   (0x00000000UL)                                 /**< (INTS_GIRQ19_SRC) Register Mask  */

/* -------- INTS_GIRQ19_EN_SET : (INTS Offset: 0xe0) (R/W 32) Write to set source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ19_EN_SET_bits_t;
#define INTS_GIRQ19_EN_SET_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ19_EN_SET) Write to set source enables  Reset Value */

#define INTS_GIRQ19_EN_SET_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ19_EN_SET) Register Mask  */

/* -------- INTS_GIRQ19_RESULT : (INTS Offset: 0xe4) (R/ 32) Read-only bitwise OR of Source and Enable -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ19_RESULT_bits_t;
#define INTS_GIRQ19_RESULT_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ19_RESULT) Read-only bitwise OR of Source and Enable  Reset Value */

#define INTS_GIRQ19_RESULT_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ19_RESULT) Register Mask  */

/* -------- INTS_GIRQ19_EN_CLR : (INTS Offset: 0xe8) (R/W 32) Write to clear source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ19_EN_CLR_bits_t;
#define INTS_GIRQ19_EN_CLR_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ19_EN_CLR) Write to clear source enables  Reset Value */

#define INTS_GIRQ19_EN_CLR_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ19_EN_CLR) Register Mask  */

/* -------- INTS_GIRQ20_SRC : (INTS Offset: 0xf0) (R/W 32) Status R/W1C -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ20_SRC_bits_t;
#define INTS_GIRQ20_SRC_RESETVALUE          (0x00U)                                       /**<  (INTS_GIRQ20_SRC) Status R/W1C  Reset Value */

#define INTS_GIRQ20_SRC_Msk                   (0x00000000UL)                                 /**< (INTS_GIRQ20_SRC) Register Mask  */

/* -------- INTS_GIRQ20_EN_SET : (INTS Offset: 0xf4) (R/W 32) Write to set source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ20_EN_SET_bits_t;
#define INTS_GIRQ20_EN_SET_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ20_EN_SET) Write to set source enables  Reset Value */

#define INTS_GIRQ20_EN_SET_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ20_EN_SET) Register Mask  */

/* -------- INTS_GIRQ20_RESULT : (INTS Offset: 0xf8) (R/ 32) Read-only bitwise OR of Source and Enable -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ20_RESULT_bits_t;
#define INTS_GIRQ20_RESULT_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ20_RESULT) Read-only bitwise OR of Source and Enable  Reset Value */

#define INTS_GIRQ20_RESULT_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ20_RESULT) Register Mask  */

/* -------- INTS_GIRQ20_EN_CLR : (INTS Offset: 0xfc) (R/W 32) Write to clear source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ20_EN_CLR_bits_t;
#define INTS_GIRQ20_EN_CLR_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ20_EN_CLR) Write to clear source enables  Reset Value */

#define INTS_GIRQ20_EN_CLR_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ20_EN_CLR) Register Mask  */

/* -------- INTS_GIRQ21_SRC : (INTS Offset: 0x104) (R/W 32) Status R/W1C -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ21_SRC_bits_t;
#define INTS_GIRQ21_SRC_RESETVALUE          (0x00U)                                       /**<  (INTS_GIRQ21_SRC) Status R/W1C  Reset Value */

#define INTS_GIRQ21_SRC_Msk                   (0x00000000UL)                                 /**< (INTS_GIRQ21_SRC) Register Mask  */

/* -------- INTS_GIRQ21_EN_SET : (INTS Offset: 0x108) (R/W 32) Write to set source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ21_EN_SET_bits_t;
#define INTS_GIRQ21_EN_SET_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ21_EN_SET) Write to set source enables  Reset Value */

#define INTS_GIRQ21_EN_SET_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ21_EN_SET) Register Mask  */

/* -------- INTS_GIRQ21_RESULT : (INTS Offset: 0x10c) (R/ 32) Read-only bitwise OR of Source and Enable -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ21_RESULT_bits_t;
#define INTS_GIRQ21_RESULT_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ21_RESULT) Read-only bitwise OR of Source and Enable  Reset Value */

#define INTS_GIRQ21_RESULT_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ21_RESULT) Register Mask  */

/* -------- INTS_GIRQ21_EN_CLR : (INTS Offset: 0x110) (R/W 32) Write to clear source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ21_EN_CLR_bits_t;
#define INTS_GIRQ21_EN_CLR_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ21_EN_CLR) Write to clear source enables  Reset Value */

#define INTS_GIRQ21_EN_CLR_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ21_EN_CLR) Register Mask  */

/* -------- INTS_GIRQ22_SRC : (INTS Offset: 0x118) (R/W 32) Status R/W1C -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ22_SRC_bits_t;
#define INTS_GIRQ22_SRC_RESETVALUE          (0x00U)                                       /**<  (INTS_GIRQ22_SRC) Status R/W1C  Reset Value */

#define INTS_GIRQ22_SRC_Msk                   (0x00000000UL)                                 /**< (INTS_GIRQ22_SRC) Register Mask  */

/* -------- INTS_GIRQ22_EN_SET : (INTS Offset: 0x11c) (R/W 32) Write to set source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ22_EN_SET_bits_t;
#define INTS_GIRQ22_EN_SET_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ22_EN_SET) Write to set source enables  Reset Value */

#define INTS_GIRQ22_EN_SET_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ22_EN_SET) Register Mask  */

/* -------- INTS_GIRQ22_RESULT : (INTS Offset: 0x120) (R/ 32) Read-only bitwise OR of Source and Enable -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ22_RESULT_bits_t;
#define INTS_GIRQ22_RESULT_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ22_RESULT) Read-only bitwise OR of Source and Enable  Reset Value */

#define INTS_GIRQ22_RESULT_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ22_RESULT) Register Mask  */

/* -------- INTS_GIRQ22_EN_CLR : (INTS Offset: 0x124) (R/W 32) Write to clear source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ22_EN_CLR_bits_t;
#define INTS_GIRQ22_EN_CLR_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ22_EN_CLR) Write to clear source enables  Reset Value */

#define INTS_GIRQ22_EN_CLR_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ22_EN_CLR) Register Mask  */

/* -------- INTS_GIRQ23_SRC : (INTS Offset: 0x12c) (R/W 32) Status R/W1C -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ23_SRC_bits_t;
#define INTS_GIRQ23_SRC_RESETVALUE          (0x00U)                                       /**<  (INTS_GIRQ23_SRC) Status R/W1C  Reset Value */

#define INTS_GIRQ23_SRC_Msk                   (0x00000000UL)                                 /**< (INTS_GIRQ23_SRC) Register Mask  */

/* -------- INTS_GIRQ23_EN_SET : (INTS Offset: 0x130) (R/W 32) Write to set source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ23_EN_SET_bits_t;
#define INTS_GIRQ23_EN_SET_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ23_EN_SET) Write to set source enables  Reset Value */

#define INTS_GIRQ23_EN_SET_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ23_EN_SET) Register Mask  */

/* -------- INTS_GIRQ23_RESULT : (INTS Offset: 0x134) (R/ 32) Read-only bitwise OR of Source and Enable -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ23_RESULT_bits_t;
#define INTS_GIRQ23_RESULT_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ23_RESULT) Read-only bitwise OR of Source and Enable  Reset Value */

#define INTS_GIRQ23_RESULT_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ23_RESULT) Register Mask  */

/* -------- INTS_GIRQ23_EN_CLR : (INTS Offset: 0x138) (R/W 32) Write to clear source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ23_EN_CLR_bits_t;
#define INTS_GIRQ23_EN_CLR_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ23_EN_CLR) Write to clear source enables  Reset Value */

#define INTS_GIRQ23_EN_CLR_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ23_EN_CLR) Register Mask  */

/* -------- INTS_GIRQ24_SRC : (INTS Offset: 0x140) (R/W 32) Status R/W1C -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ24_SRC_bits_t;
#define INTS_GIRQ24_SRC_RESETVALUE          (0x00U)                                       /**<  (INTS_GIRQ24_SRC) Status R/W1C  Reset Value */

#define INTS_GIRQ24_SRC_Msk                   (0x00000000UL)                                 /**< (INTS_GIRQ24_SRC) Register Mask  */

/* -------- INTS_GIRQ24_EN_SET : (INTS Offset: 0x144) (R/W 32) Write to set source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ24_EN_SET_bits_t;
#define INTS_GIRQ24_EN_SET_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ24_EN_SET) Write to set source enables  Reset Value */

#define INTS_GIRQ24_EN_SET_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ24_EN_SET) Register Mask  */

/* -------- INTS_GIRQ24_RESULT : (INTS Offset: 0x148) (R/ 32) Read-only bitwise OR of Source and Enable -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ24_RESULT_bits_t;
#define INTS_GIRQ24_RESULT_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ24_RESULT) Read-only bitwise OR of Source and Enable  Reset Value */

#define INTS_GIRQ24_RESULT_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ24_RESULT) Register Mask  */

/* -------- INTS_GIRQ24_EN_CLR : (INTS Offset: 0x14c) (R/W 32) Write to clear source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ24_EN_CLR_bits_t;
#define INTS_GIRQ24_EN_CLR_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ24_EN_CLR) Write to clear source enables  Reset Value */

#define INTS_GIRQ24_EN_CLR_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ24_EN_CLR) Register Mask  */

/* -------- INTS_GIRQ25_SRC : (INTS Offset: 0x154) (R/W 32) Status R/W1C -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ25_SRC_bits_t;
#define INTS_GIRQ25_SRC_RESETVALUE          (0x00U)                                       /**<  (INTS_GIRQ25_SRC) Status R/W1C  Reset Value */

#define INTS_GIRQ25_SRC_Msk                   (0x00000000UL)                                 /**< (INTS_GIRQ25_SRC) Register Mask  */

/* -------- INTS_GIRQ25_EN_SET : (INTS Offset: 0x158) (R/W 32) Write to set source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ25_EN_SET_bits_t;
#define INTS_GIRQ25_EN_SET_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ25_EN_SET) Write to set source enables  Reset Value */

#define INTS_GIRQ25_EN_SET_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ25_EN_SET) Register Mask  */

/* -------- INTS_GIRQ25_RESULT : (INTS Offset: 0x15c) (R/ 32) Read-only bitwise OR of Source and Enable -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ25_RESULT_bits_t;
#define INTS_GIRQ25_RESULT_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ25_RESULT) Read-only bitwise OR of Source and Enable  Reset Value */

#define INTS_GIRQ25_RESULT_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ25_RESULT) Register Mask  */

/* -------- INTS_GIRQ25_EN_CLR : (INTS Offset: 0x160) (R/W 32) Write to clear source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ25_EN_CLR_bits_t;
#define INTS_GIRQ25_EN_CLR_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ25_EN_CLR) Write to clear source enables  Reset Value */

#define INTS_GIRQ25_EN_CLR_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ25_EN_CLR) Register Mask  */

/* -------- INTS_GIRQ26_SRC : (INTS Offset: 0x168) (R/W 32) Status R/W1C -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ26_SRC_bits_t;
#define INTS_GIRQ26_SRC_RESETVALUE          (0x00U)                                       /**<  (INTS_GIRQ26_SRC) Status R/W1C  Reset Value */

#define INTS_GIRQ26_SRC_Msk                   (0x00000000UL)                                 /**< (INTS_GIRQ26_SRC) Register Mask  */

/* -------- INTS_GIRQ26_EN_SET : (INTS Offset: 0x16c) (R/W 32) Write to set source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ26_EN_SET_bits_t;
#define INTS_GIRQ26_EN_SET_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ26_EN_SET) Write to set source enables  Reset Value */

#define INTS_GIRQ26_EN_SET_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ26_EN_SET) Register Mask  */

/* -------- INTS_GIRQ26_RESULT : (INTS Offset: 0x170) (R/ 32) Read-only bitwise OR of Source and Enable -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ26_RESULT_bits_t;
#define INTS_GIRQ26_RESULT_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ26_RESULT) Read-only bitwise OR of Source and Enable  Reset Value */

#define INTS_GIRQ26_RESULT_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ26_RESULT) Register Mask  */

/* -------- INTS_GIRQ26_EN_CLR : (INTS Offset: 0x174) (R/W 32) Write to clear source enables -------- */

typedef union
{
  uint32_t w;
} __INTS_GIRQ26_EN_CLR_bits_t;
#define INTS_GIRQ26_EN_CLR_RESETVALUE       (0x00U)                                       /**<  (INTS_GIRQ26_EN_CLR) Write to clear source enables  Reset Value */

#define INTS_GIRQ26_EN_CLR_Msk                (0x00000000UL)                                 /**< (INTS_GIRQ26_EN_CLR) Register Mask  */

/* -------- INTS_BLOCK_ENABLE_SET : (INTS Offset: 0x200) (R/W 32) Block Enable Set Register -------- */

typedef union
{
  struct
  {
    uint32_t IRQ_VECTOR_ENABLE_SET:31;  /**< bit:  0..30  Each GIRQx bit can be individually enabled to assert an interrupt event.\n      Reads always return the current value of the internal GIRQX_ENABLE bit. The state of the GIRQX_ENABLE bit is determined by\n      the corresponding GIRQX_ENABLE_SET bit and the GIRQX_ENABLE_CLEAR bit. (0=disabled, 1=enabled) (R/WS)\n      1=Interrupts in the GIRQx Source Register may be enabled\n      0=No effect. */
    uint32_t :1;                        /**< bit:     31  Reserved                                      */
  };
  uint32_t w;
} __INTS_BLOCK_ENABLE_SET_bits_t;
#define INTS_BLOCK_ENABLE_SET_RESETVALUE    (0x00U)                                       /**<  (INTS_BLOCK_ENABLE_SET) Block Enable Set Register  Reset Value */

#define INTS_BLOCK_ENABLE_SET_IRQ_VECTOR_ENABLE_SET_Pos (0)                                            /**< (INTS_BLOCK_ENABLE_SET) Each GIRQx bit can be individually enabled to assert an interrupt event.\n      Reads always return the current value of the internal GIRQX_ENABLE bit. The state of the GIRQX_ENABLE bit is determined by\n      the corresponding GIRQX_ENABLE_SET bit and the GIRQX_ENABLE_CLEAR bit. (0=disabled, 1=enabled) (R/WS)\n      1=Interrupts in the GIRQx Source Register may be enabled\n      0=No effect. Position */
#define INTS_BLOCK_ENABLE_SET_IRQ_VECTOR_ENABLE_SET_Msk (0x7FFFFFFFU << INTS_BLOCK_ENABLE_SET_IRQ_VECTOR_ENABLE_SET_Pos)  /**< (INTS_BLOCK_ENABLE_SET) Each GIRQx bit can be individually enabled to assert an interrupt event.\n      Reads always return the current value of the internal GIRQX_ENABLE bit. The state of the GIRQX_ENABLE bit is determined by\n      the corresponding GIRQX_ENABLE_SET bit and the GIRQX_ENABLE_CLEAR bit. (0=disabled, 1=enabled) (R/WS)\n      1=Interrupts in the GIRQx Source Register may be enabled\n      0=No effect. Mask */
#define INTS_BLOCK_ENABLE_SET_IRQ_VECTOR_ENABLE_SET(value) (INTS_BLOCK_ENABLE_SET_IRQ_VECTOR_ENABLE_SET_Msk & ((value) << INTS_BLOCK_ENABLE_SET_IRQ_VECTOR_ENABLE_SET_Pos))
#define INTS_BLOCK_ENABLE_SET_Msk             (0x7FFFFFFFUL)                                 /**< (INTS_BLOCK_ENABLE_SET) Register Mask  */

/* -------- INTS_BLOCK_ENABLE_CLEAR : (INTS Offset: 0x204) (R/W 32) Block Enable Clear Register. -------- */

typedef union
{
  struct
  {
    uint32_t IRQ_VECTOR_ENABLE_CLEAR:31;  /**< bit:  0..30  Each GIRQx bit can be individually disabled to inhibit an interrupt event.\n      Reads always return the current value of the internal GIRQX_ENABLE bit. The state of the GIRQX_ENABLE bit is determined by\n      the corresponding GIRQX_ENABLE_SET bit and the GIRQX_ENABLE_CLEAR bit. (0=disabled, 1=enabled) (R/WC)\n      1=All interrupts in the GIRQx Source Register are disabled\n      0=No effect. */
    uint32_t :1;                        /**< bit:     31  Reserved                                      */
  };
  uint32_t w;
} __INTS_BLOCK_ENABLE_CLEAR_bits_t;
#define INTS_BLOCK_ENABLE_CLEAR_RESETVALUE  (0x00U)                                       /**<  (INTS_BLOCK_ENABLE_CLEAR) Block Enable Clear Register.  Reset Value */

#define INTS_BLOCK_ENABLE_CLEAR_IRQ_VECTOR_ENABLE_CLEAR_Pos (0)                                            /**< (INTS_BLOCK_ENABLE_CLEAR) Each GIRQx bit can be individually disabled to inhibit an interrupt event.\n      Reads always return the current value of the internal GIRQX_ENABLE bit. The state of the GIRQX_ENABLE bit is determined by\n      the corresponding GIRQX_ENABLE_SET bit and the GIRQX_ENABLE_CLEAR bit. (0=disabled, 1=enabled) (R/WC)\n      1=All interrupts in the GIRQx Source Register are disabled\n      0=No effect. Position */
#define INTS_BLOCK_ENABLE_CLEAR_IRQ_VECTOR_ENABLE_CLEAR_Msk (0x7FFFFFFFU << INTS_BLOCK_ENABLE_CLEAR_IRQ_VECTOR_ENABLE_CLEAR_Pos)  /**< (INTS_BLOCK_ENABLE_CLEAR) Each GIRQx bit can be individually disabled to inhibit an interrupt event.\n      Reads always return the current value of the internal GIRQX_ENABLE bit. The state of the GIRQX_ENABLE bit is determined by\n      the corresponding GIRQX_ENABLE_SET bit and the GIRQX_ENABLE_CLEAR bit. (0=disabled, 1=enabled) (R/WC)\n      1=All interrupts in the GIRQx Source Register are disabled\n      0=No effect. Mask */
#define INTS_BLOCK_ENABLE_CLEAR_IRQ_VECTOR_ENABLE_CLEAR(value) (INTS_BLOCK_ENABLE_CLEAR_IRQ_VECTOR_ENABLE_CLEAR_Msk & ((value) << INTS_BLOCK_ENABLE_CLEAR_IRQ_VECTOR_ENABLE_CLEAR_Pos))
#define INTS_BLOCK_ENABLE_CLEAR_Msk           (0x7FFFFFFFUL)                                 /**< (INTS_BLOCK_ENABLE_CLEAR) Register Mask  */

/* -------- INTS_BLOCK_IRQ_VECTOR : (INTS Offset: 0x208) (R/ 32) Block IRQ Vector Register -------- */

typedef union
{
  struct
  {
    uint32_t IRQ_VECTOR:25;             /**< bit:  0..24  Each bit in this field reports the status of the group GIRQ interrupt assertion to the NVIC. If the GIRQx interrupt\n      is disabled as a group, by the Block Enable Clear Register, then the corresponding bit will be '0'b and no interrupt will be asserted. */
    uint32_t :7;                        /**< bit: 25..31  Reserved                                      */
  };
  uint32_t w;
} __INTS_BLOCK_IRQ_VECTOR_bits_t;
#define INTS_BLOCK_IRQ_VECTOR_RESETVALUE    (0x00U)                                       /**<  (INTS_BLOCK_IRQ_VECTOR) Block IRQ Vector Register  Reset Value */

#define INTS_BLOCK_IRQ_VECTOR_IRQ_VECTOR_Pos  (0)                                            /**< (INTS_BLOCK_IRQ_VECTOR) Each bit in this field reports the status of the group GIRQ interrupt assertion to the NVIC. If the GIRQx interrupt\n      is disabled as a group, by the Block Enable Clear Register, then the corresponding bit will be '0'b and no interrupt will be asserted. Position */
#define INTS_BLOCK_IRQ_VECTOR_IRQ_VECTOR_Msk  (0x1FFFFFFU << INTS_BLOCK_IRQ_VECTOR_IRQ_VECTOR_Pos)  /**< (INTS_BLOCK_IRQ_VECTOR) Each bit in this field reports the status of the group GIRQ interrupt assertion to the NVIC. If the GIRQx interrupt\n      is disabled as a group, by the Block Enable Clear Register, then the corresponding bit will be '0'b and no interrupt will be asserted. Mask */
#define INTS_BLOCK_IRQ_VECTOR_IRQ_VECTOR(value) (INTS_BLOCK_IRQ_VECTOR_IRQ_VECTOR_Msk & ((value) << INTS_BLOCK_IRQ_VECTOR_IRQ_VECTOR_Pos))
#define INTS_BLOCK_IRQ_VECTOR_Msk             (0x01FFFFFFUL)                                 /**< (INTS_BLOCK_IRQ_VECTOR) Register Mask  */

/** \brief INTS register offsets definitions */
#define INTS_GIRQ08_SRC_OFFSET       (0x00)         /**< (INTS_GIRQ08_SRC) Status R/W1C Offset */
#define INTS_GIRQ08_EN_SET_OFFSET    (0x04)         /**< (INTS_GIRQ08_EN_SET) Write to set source enables Offset */
#define INTS_GIRQ08_RESULT_OFFSET    (0x08)         /**< (INTS_GIRQ08_RESULT) Read-only bitwise OR of Source and Enable Offset */
#define INTS_GIRQ08_EN_CLR_OFFSET    (0x0C)         /**< (INTS_GIRQ08_EN_CLR) Write to clear source enables Offset */
#define INTS_GIRQ09_SRC_OFFSET       (0x14)         /**< (INTS_GIRQ09_SRC) Status R/W1C Offset */
#define INTS_GIRQ09_EN_SET_OFFSET    (0x18)         /**< (INTS_GIRQ09_EN_SET) Write to set source enables Offset */
#define INTS_GIRQ09_RESULT_OFFSET    (0x1C)         /**< (INTS_GIRQ09_RESULT) Read-only bitwise OR of Source and Enable Offset */
#define INTS_GIRQ09_EN_CLR_OFFSET    (0x20)         /**< (INTS_GIRQ09_EN_CLR) Write to clear source enables Offset */
#define INTS_GIRQ10_SRC_OFFSET       (0x28)         /**< (INTS_GIRQ10_SRC) Status R/W1C Offset */
#define INTS_GIRQ10_EN_SET_OFFSET    (0x2C)         /**< (INTS_GIRQ10_EN_SET) Write to set source enables Offset */
#define INTS_GIRQ10_RESULT_OFFSET    (0x30)         /**< (INTS_GIRQ10_RESULT) Read-only bitwise OR of Source and Enable Offset */
#define INTS_GIRQ10_EN_CLR_OFFSET    (0x34)         /**< (INTS_GIRQ10_EN_CLR) Write to clear source enables Offset */
#define INTS_GIRQ11_SRC_OFFSET       (0x3C)         /**< (INTS_GIRQ11_SRC) Status R/W1C Offset */
#define INTS_GIRQ11_EN_SET_OFFSET    (0x40)         /**< (INTS_GIRQ11_EN_SET) Write to set source enables Offset */
#define INTS_GIRQ11_RESULT_OFFSET    (0x44)         /**< (INTS_GIRQ11_RESULT) Read-only bitwise OR of Source and Enable Offset */
#define INTS_GIRQ11_EN_CLR_OFFSET    (0x48)         /**< (INTS_GIRQ11_EN_CLR) Write to clear source enables Offset */
#define INTS_GIRQ12_SRC_OFFSET       (0x50)         /**< (INTS_GIRQ12_SRC) Status R/W1C Offset */
#define INTS_GIRQ12_EN_SET_OFFSET    (0x54)         /**< (INTS_GIRQ12_EN_SET) Write to set source enables Offset */
#define INTS_GIRQ12_RESULT_OFFSET    (0x58)         /**< (INTS_GIRQ12_RESULT) Read-only bitwise OR of Source and Enable Offset */
#define INTS_GIRQ12_EN_CLR_OFFSET    (0x5C)         /**< (INTS_GIRQ12_EN_CLR) Write to clear source enables Offset */
#define INTS_GIRQ13_SRC_OFFSET       (0x64)         /**< (INTS_GIRQ13_SRC) Status R/W1C Offset */
#define INTS_GIRQ13_EN_SET_OFFSET    (0x68)         /**< (INTS_GIRQ13_EN_SET) Write to set source enables Offset */
#define INTS_GIRQ13_RESULT_OFFSET    (0x6C)         /**< (INTS_GIRQ13_RESULT) Read-only bitwise OR of Source and Enable Offset */
#define INTS_GIRQ13_EN_CLR_OFFSET    (0x70)         /**< (INTS_GIRQ13_EN_CLR) Write to clear source enables Offset */
#define INTS_GIRQ14_SRC_OFFSET       (0x78)         /**< (INTS_GIRQ14_SRC) Status R/W1C Offset */
#define INTS_GIRQ14_EN_SET_OFFSET    (0x7C)         /**< (INTS_GIRQ14_EN_SET) Write to set source enables Offset */
#define INTS_GIRQ14_RESULT_OFFSET    (0x80)         /**< (INTS_GIRQ14_RESULT) Read-only bitwise OR of Source and Enable Offset */
#define INTS_GIRQ14_EN_CLR_OFFSET    (0x84)         /**< (INTS_GIRQ14_EN_CLR) Write to clear source enables Offset */
#define INTS_GIRQ15_SRC_OFFSET       (0x8C)         /**< (INTS_GIRQ15_SRC) Status R/W1C Offset */
#define INTS_GIRQ15_EN_SET_OFFSET    (0x90)         /**< (INTS_GIRQ15_EN_SET) Write to set source enables Offset */
#define INTS_GIRQ15_RESULT_OFFSET    (0x94)         /**< (INTS_GIRQ15_RESULT) Read-only bitwise OR of Source and Enable Offset */
#define INTS_GIRQ15_EN_CLR_OFFSET    (0x98)         /**< (INTS_GIRQ15_EN_CLR) Write to clear source enables Offset */
#define INTS_GIRQ16_SRC_OFFSET       (0xA0)         /**< (INTS_GIRQ16_SRC) Status R/W1C Offset */
#define INTS_GIRQ16_EN_SET_OFFSET    (0xA4)         /**< (INTS_GIRQ16_EN_SET) Write to set source enables Offset */
#define INTS_GIRQ16_RESULT_OFFSET    (0xA8)         /**< (INTS_GIRQ16_RESULT) Read-only bitwise OR of Source and Enable Offset */
#define INTS_GIRQ16_EN_CLR_OFFSET    (0xAC)         /**< (INTS_GIRQ16_EN_CLR) Write to clear source enables Offset */
#define INTS_GIRQ17_SRC_OFFSET       (0xB4)         /**< (INTS_GIRQ17_SRC) Status R/W1C Offset */
#define INTS_GIRQ17_EN_SET_OFFSET    (0xB8)         /**< (INTS_GIRQ17_EN_SET) Write to set source enables Offset */
#define INTS_GIRQ17_RESULT_OFFSET    (0xBC)         /**< (INTS_GIRQ17_RESULT) Read-only bitwise OR of Source and Enable Offset */
#define INTS_GIRQ17_EN_CLR_OFFSET    (0xC0)         /**< (INTS_GIRQ17_EN_CLR) Write to clear source enables Offset */
#define INTS_GIRQ18_SRC_OFFSET       (0xC8)         /**< (INTS_GIRQ18_SRC) Status R/W1C Offset */
#define INTS_GIRQ18_EN_SET_OFFSET    (0xCC)         /**< (INTS_GIRQ18_EN_SET) Write to set source enables Offset */
#define INTS_GIRQ18_RESULT_OFFSET    (0xD0)         /**< (INTS_GIRQ18_RESULT) Read-only bitwise OR of Source and Enable Offset */
#define INTS_GIRQ18_EN_CLR_OFFSET    (0xD4)         /**< (INTS_GIRQ18_EN_CLR) Write to clear source enables Offset */
#define INTS_GIRQ19_SRC_OFFSET       (0xDC)         /**< (INTS_GIRQ19_SRC) Status R/W1C Offset */
#define INTS_GIRQ19_EN_SET_OFFSET    (0xE0)         /**< (INTS_GIRQ19_EN_SET) Write to set source enables Offset */
#define INTS_GIRQ19_RESULT_OFFSET    (0xE4)         /**< (INTS_GIRQ19_RESULT) Read-only bitwise OR of Source and Enable Offset */
#define INTS_GIRQ19_EN_CLR_OFFSET    (0xE8)         /**< (INTS_GIRQ19_EN_CLR) Write to clear source enables Offset */
#define INTS_GIRQ20_SRC_OFFSET       (0xF0)         /**< (INTS_GIRQ20_SRC) Status R/W1C Offset */
#define INTS_GIRQ20_EN_SET_OFFSET    (0xF4)         /**< (INTS_GIRQ20_EN_SET) Write to set source enables Offset */
#define INTS_GIRQ20_RESULT_OFFSET    (0xF8)         /**< (INTS_GIRQ20_RESULT) Read-only bitwise OR of Source and Enable Offset */
#define INTS_GIRQ20_EN_CLR_OFFSET    (0xFC)         /**< (INTS_GIRQ20_EN_CLR) Write to clear source enables Offset */
#define INTS_GIRQ21_SRC_OFFSET       (0x104)        /**< (INTS_GIRQ21_SRC) Status R/W1C Offset */
#define INTS_GIRQ21_EN_SET_OFFSET    (0x108)        /**< (INTS_GIRQ21_EN_SET) Write to set source enables Offset */
#define INTS_GIRQ21_RESULT_OFFSET    (0x10C)        /**< (INTS_GIRQ21_RESULT) Read-only bitwise OR of Source and Enable Offset */
#define INTS_GIRQ21_EN_CLR_OFFSET    (0x110)        /**< (INTS_GIRQ21_EN_CLR) Write to clear source enables Offset */
#define INTS_GIRQ22_SRC_OFFSET       (0x118)        /**< (INTS_GIRQ22_SRC) Status R/W1C Offset */
#define INTS_GIRQ22_EN_SET_OFFSET    (0x11C)        /**< (INTS_GIRQ22_EN_SET) Write to set source enables Offset */
#define INTS_GIRQ22_RESULT_OFFSET    (0x120)        /**< (INTS_GIRQ22_RESULT) Read-only bitwise OR of Source and Enable Offset */
#define INTS_GIRQ22_EN_CLR_OFFSET    (0x124)        /**< (INTS_GIRQ22_EN_CLR) Write to clear source enables Offset */
#define INTS_GIRQ23_SRC_OFFSET       (0x12C)        /**< (INTS_GIRQ23_SRC) Status R/W1C Offset */
#define INTS_GIRQ23_EN_SET_OFFSET    (0x130)        /**< (INTS_GIRQ23_EN_SET) Write to set source enables Offset */
#define INTS_GIRQ23_RESULT_OFFSET    (0x134)        /**< (INTS_GIRQ23_RESULT) Read-only bitwise OR of Source and Enable Offset */
#define INTS_GIRQ23_EN_CLR_OFFSET    (0x138)        /**< (INTS_GIRQ23_EN_CLR) Write to clear source enables Offset */
#define INTS_GIRQ24_SRC_OFFSET       (0x140)        /**< (INTS_GIRQ24_SRC) Status R/W1C Offset */
#define INTS_GIRQ24_EN_SET_OFFSET    (0x144)        /**< (INTS_GIRQ24_EN_SET) Write to set source enables Offset */
#define INTS_GIRQ24_RESULT_OFFSET    (0x148)        /**< (INTS_GIRQ24_RESULT) Read-only bitwise OR of Source and Enable Offset */
#define INTS_GIRQ24_EN_CLR_OFFSET    (0x14C)        /**< (INTS_GIRQ24_EN_CLR) Write to clear source enables Offset */
#define INTS_GIRQ25_SRC_OFFSET       (0x154)        /**< (INTS_GIRQ25_SRC) Status R/W1C Offset */
#define INTS_GIRQ25_EN_SET_OFFSET    (0x158)        /**< (INTS_GIRQ25_EN_SET) Write to set source enables Offset */
#define INTS_GIRQ25_RESULT_OFFSET    (0x15C)        /**< (INTS_GIRQ25_RESULT) Read-only bitwise OR of Source and Enable Offset */
#define INTS_GIRQ25_EN_CLR_OFFSET    (0x160)        /**< (INTS_GIRQ25_EN_CLR) Write to clear source enables Offset */
#define INTS_GIRQ26_SRC_OFFSET       (0x168)        /**< (INTS_GIRQ26_SRC) Status R/W1C Offset */
#define INTS_GIRQ26_EN_SET_OFFSET    (0x16C)        /**< (INTS_GIRQ26_EN_SET) Write to set source enables Offset */
#define INTS_GIRQ26_RESULT_OFFSET    (0x170)        /**< (INTS_GIRQ26_RESULT) Read-only bitwise OR of Source and Enable Offset */
#define INTS_GIRQ26_EN_CLR_OFFSET    (0x174)        /**< (INTS_GIRQ26_EN_CLR) Write to clear source enables Offset */
#define INTS_BLOCK_ENABLE_SET_OFFSET (0x200)        /**< (INTS_BLOCK_ENABLE_SET) Block Enable Set Register Offset */
#define INTS_BLOCK_ENABLE_CLEAR_OFFSET (0x204)        /**< (INTS_BLOCK_ENABLE_CLEAR) Block Enable Clear Register. Offset */
#define INTS_BLOCK_IRQ_VECTOR_OFFSET (0x208)        /**< (INTS_BLOCK_IRQ_VECTOR) Block IRQ Vector Register Offset */

/** \brief INTS register API structure */
typedef struct
{  /* The interrupt generation logic is made of 16 groups of signals, each of which\n        consist of a Status register, a Enable register and a Result register. The Status and Enable are\n        latched registers. The Result register is a bit by bit AND function of the Source and Enable registers.\n        All the bits of the Result register are OR'ed together and AND'ed with the corresponding bit in the Block\n        Select register to form the interrupt signal that is routed to the ARM interrupt controller. */
  __IO  __INTS_GIRQ08_SRC_bits_t       GIRQ08_SRC;    /**< Offset: 0x00 (R/W  32) Status R/W1C */
  __IO  __INTS_GIRQ08_EN_SET_bits_t    GIRQ08_EN_SET; /**< Offset: 0x04 (R/W  32) Write to set source enables */
  __I   __INTS_GIRQ08_RESULT_bits_t    GIRQ08_RESULT; /**< Offset: 0x08 (R/   32) Read-only bitwise OR of Source and Enable */
  __IO  __INTS_GIRQ08_EN_CLR_bits_t    GIRQ08_EN_CLR; /**< Offset: 0x0C (R/W  32) Write to clear source enables */
  __IO  __INTS_GIRQ09_SRC_bits_t       GIRQ09_SRC;    /**< Offset: 0x14 (R/W  32) Status R/W1C */
  __IO  __INTS_GIRQ09_EN_SET_bits_t    GIRQ09_EN_SET; /**< Offset: 0x18 (R/W  32) Write to set source enables */
  __I   __INTS_GIRQ09_RESULT_bits_t    GIRQ09_RESULT; /**< Offset: 0x1C (R/   32) Read-only bitwise OR of Source and Enable */
  __IO  __INTS_GIRQ09_EN_CLR_bits_t    GIRQ09_EN_CLR; /**< Offset: 0x20 (R/W  32) Write to clear source enables */
  __IO  __INTS_GIRQ10_SRC_bits_t       GIRQ10_SRC;    /**< Offset: 0x28 (R/W  32) Status R/W1C */
  __IO  __INTS_GIRQ10_EN_SET_bits_t    GIRQ10_EN_SET; /**< Offset: 0x2C (R/W  32) Write to set source enables */
  __I   __INTS_GIRQ10_RESULT_bits_t    GIRQ10_RESULT; /**< Offset: 0x30 (R/   32) Read-only bitwise OR of Source and Enable */
  __IO  __INTS_GIRQ10_EN_CLR_bits_t    GIRQ10_EN_CLR; /**< Offset: 0x34 (R/W  32) Write to clear source enables */
  __IO  __INTS_GIRQ11_SRC_bits_t       GIRQ11_SRC;    /**< Offset: 0x3C (R/W  32) Status R/W1C */
  __IO  __INTS_GIRQ11_EN_SET_bits_t    GIRQ11_EN_SET; /**< Offset: 0x40 (R/W  32) Write to set source enables */
  __I   __INTS_GIRQ11_RESULT_bits_t    GIRQ11_RESULT; /**< Offset: 0x44 (R/   32) Read-only bitwise OR of Source and Enable */
  __IO  __INTS_GIRQ11_EN_CLR_bits_t    GIRQ11_EN_CLR; /**< Offset: 0x48 (R/W  32) Write to clear source enables */
  __IO  __INTS_GIRQ12_SRC_bits_t       GIRQ12_SRC;    /**< Offset: 0x50 (R/W  32) Status R/W1C */
  __IO  __INTS_GIRQ12_EN_SET_bits_t    GIRQ12_EN_SET; /**< Offset: 0x54 (R/W  32) Write to set source enables */
  __I   __INTS_GIRQ12_RESULT_bits_t    GIRQ12_RESULT; /**< Offset: 0x58 (R/   32) Read-only bitwise OR of Source and Enable */
  __IO  __INTS_GIRQ12_EN_CLR_bits_t    GIRQ12_EN_CLR; /**< Offset: 0x5C (R/W  32) Write to clear source enables */
  __IO  __INTS_GIRQ13_SRC_bits_t       GIRQ13_SRC;    /**< Offset: 0x64 (R/W  32) Status R/W1C */
  __IO  __INTS_GIRQ13_EN_SET_bits_t    GIRQ13_EN_SET; /**< Offset: 0x68 (R/W  32) Write to set source enables */
  __I   __INTS_GIRQ13_RESULT_bits_t    GIRQ13_RESULT; /**< Offset: 0x6C (R/   32) Read-only bitwise OR of Source and Enable */
  __IO  __INTS_GIRQ13_EN_CLR_bits_t    GIRQ13_EN_CLR; /**< Offset: 0x70 (R/W  32) Write to clear source enables */
  __IO  __INTS_GIRQ14_SRC_bits_t       GIRQ14_SRC;    /**< Offset: 0x78 (R/W  32) Status R/W1C */
  __IO  __INTS_GIRQ14_EN_SET_bits_t    GIRQ14_EN_SET; /**< Offset: 0x7C (R/W  32) Write to set source enables */
  __I   __INTS_GIRQ14_RESULT_bits_t    GIRQ14_RESULT; /**< Offset: 0x80 (R/   32) Read-only bitwise OR of Source and Enable */
  __IO  __INTS_GIRQ14_EN_CLR_bits_t    GIRQ14_EN_CLR; /**< Offset: 0x84 (R/W  32) Write to clear source enables */
  __IO  __INTS_GIRQ15_SRC_bits_t       GIRQ15_SRC;    /**< Offset: 0x8C (R/W  32) Status R/W1C */
  __IO  __INTS_GIRQ15_EN_SET_bits_t    GIRQ15_EN_SET; /**< Offset: 0x90 (R/W  32) Write to set source enables */
  __I   __INTS_GIRQ15_RESULT_bits_t    GIRQ15_RESULT; /**< Offset: 0x94 (R/   32) Read-only bitwise OR of Source and Enable */
  __IO  __INTS_GIRQ15_EN_CLR_bits_t    GIRQ15_EN_CLR; /**< Offset: 0x98 (R/W  32) Write to clear source enables */
  __IO  __INTS_GIRQ16_SRC_bits_t       GIRQ16_SRC;    /**< Offset: 0xA0 (R/W  32) Status R/W1C */
  __IO  __INTS_GIRQ16_EN_SET_bits_t    GIRQ16_EN_SET; /**< Offset: 0xA4 (R/W  32) Write to set source enables */
  __I   __INTS_GIRQ16_RESULT_bits_t    GIRQ16_RESULT; /**< Offset: 0xA8 (R/   32) Read-only bitwise OR of Source and Enable */
  __IO  __INTS_GIRQ16_EN_CLR_bits_t    GIRQ16_EN_CLR; /**< Offset: 0xAC (R/W  32) Write to clear source enables */
  __IO  __INTS_GIRQ17_SRC_bits_t       GIRQ17_SRC;    /**< Offset: 0xB4 (R/W  32) Status R/W1C */
  __IO  __INTS_GIRQ17_EN_SET_bits_t    GIRQ17_EN_SET; /**< Offset: 0xB8 (R/W  32) Write to set source enables */
  __I   __INTS_GIRQ17_RESULT_bits_t    GIRQ17_RESULT; /**< Offset: 0xBC (R/   32) Read-only bitwise OR of Source and Enable */
  __IO  __INTS_GIRQ17_EN_CLR_bits_t    GIRQ17_EN_CLR; /**< Offset: 0xC0 (R/W  32) Write to clear source enables */
  __IO  __INTS_GIRQ18_SRC_bits_t       GIRQ18_SRC;    /**< Offset: 0xC8 (R/W  32) Status R/W1C */
  __IO  __INTS_GIRQ18_EN_SET_bits_t    GIRQ18_EN_SET; /**< Offset: 0xCC (R/W  32) Write to set source enables */
  __I   __INTS_GIRQ18_RESULT_bits_t    GIRQ18_RESULT; /**< Offset: 0xD0 (R/   32) Read-only bitwise OR of Source and Enable */
  __IO  __INTS_GIRQ18_EN_CLR_bits_t    GIRQ18_EN_CLR; /**< Offset: 0xD4 (R/W  32) Write to clear source enables */
  __IO  __INTS_GIRQ19_SRC_bits_t       GIRQ19_SRC;    /**< Offset: 0xDC (R/W  32) Status R/W1C */
  __IO  __INTS_GIRQ19_EN_SET_bits_t    GIRQ19_EN_SET; /**< Offset: 0xE0 (R/W  32) Write to set source enables */
  __I   __INTS_GIRQ19_RESULT_bits_t    GIRQ19_RESULT; /**< Offset: 0xE4 (R/   32) Read-only bitwise OR of Source and Enable */
  __IO  __INTS_GIRQ19_EN_CLR_bits_t    GIRQ19_EN_CLR; /**< Offset: 0xE8 (R/W  32) Write to clear source enables */
  __IO  __INTS_GIRQ20_SRC_bits_t       GIRQ20_SRC;    /**< Offset: 0xF0 (R/W  32) Status R/W1C */
  __IO  __INTS_GIRQ20_EN_SET_bits_t    GIRQ20_EN_SET; /**< Offset: 0xF4 (R/W  32) Write to set source enables */
  __I   __INTS_GIRQ20_RESULT_bits_t    GIRQ20_RESULT; /**< Offset: 0xF8 (R/   32) Read-only bitwise OR of Source and Enable */
  __IO  __INTS_GIRQ20_EN_CLR_bits_t    GIRQ20_EN_CLR; /**< Offset: 0xFC (R/W  32) Write to clear source enables */
  __IO  __INTS_GIRQ21_SRC_bits_t       GIRQ21_SRC;    /**< Offset: 0x104 (R/W  32) Status R/W1C */
  __IO  __INTS_GIRQ21_EN_SET_bits_t    GIRQ21_EN_SET; /**< Offset: 0x108 (R/W  32) Write to set source enables */
  __I   __INTS_GIRQ21_RESULT_bits_t    GIRQ21_RESULT; /**< Offset: 0x10C (R/   32) Read-only bitwise OR of Source and Enable */
  __IO  __INTS_GIRQ21_EN_CLR_bits_t    GIRQ21_EN_CLR; /**< Offset: 0x110 (R/W  32) Write to clear source enables */
  __IO  __INTS_GIRQ22_SRC_bits_t       GIRQ22_SRC;    /**< Offset: 0x118 (R/W  32) Status R/W1C */
  __IO  __INTS_GIRQ22_EN_SET_bits_t    GIRQ22_EN_SET; /**< Offset: 0x11C (R/W  32) Write to set source enables */
  __I   __INTS_GIRQ22_RESULT_bits_t    GIRQ22_RESULT; /**< Offset: 0x120 (R/   32) Read-only bitwise OR of Source and Enable */
  __IO  __INTS_GIRQ22_EN_CLR_bits_t    GIRQ22_EN_CLR; /**< Offset: 0x124 (R/W  32) Write to clear source enables */
  __IO  __INTS_GIRQ23_SRC_bits_t       GIRQ23_SRC;    /**< Offset: 0x12C (R/W  32) Status R/W1C */
  __IO  __INTS_GIRQ23_EN_SET_bits_t    GIRQ23_EN_SET; /**< Offset: 0x130 (R/W  32) Write to set source enables */
  __I   __INTS_GIRQ23_RESULT_bits_t    GIRQ23_RESULT; /**< Offset: 0x134 (R/   32) Read-only bitwise OR of Source and Enable */
  __IO  __INTS_GIRQ23_EN_CLR_bits_t    GIRQ23_EN_CLR; /**< Offset: 0x138 (R/W  32) Write to clear source enables */
  __IO  __INTS_GIRQ24_SRC_bits_t       GIRQ24_SRC;    /**< Offset: 0x140 (R/W  32) Status R/W1C */
  __IO  __INTS_GIRQ24_EN_SET_bits_t    GIRQ24_EN_SET; /**< Offset: 0x144 (R/W  32) Write to set source enables */
  __I   __INTS_GIRQ24_RESULT_bits_t    GIRQ24_RESULT; /**< Offset: 0x148 (R/   32) Read-only bitwise OR of Source and Enable */
  __IO  __INTS_GIRQ24_EN_CLR_bits_t    GIRQ24_EN_CLR; /**< Offset: 0x14C (R/W  32) Write to clear source enables */
  __IO  __INTS_GIRQ25_SRC_bits_t       GIRQ25_SRC;    /**< Offset: 0x154 (R/W  32) Status R/W1C */
  __IO  __INTS_GIRQ25_EN_SET_bits_t    GIRQ25_EN_SET; /**< Offset: 0x158 (R/W  32) Write to set source enables */
  __I   __INTS_GIRQ25_RESULT_bits_t    GIRQ25_RESULT; /**< Offset: 0x15C (R/   32) Read-only bitwise OR of Source and Enable */
  __IO  __INTS_GIRQ25_EN_CLR_bits_t    GIRQ25_EN_CLR; /**< Offset: 0x160 (R/W  32) Write to clear source enables */
  __IO  __INTS_GIRQ26_SRC_bits_t       GIRQ26_SRC;    /**< Offset: 0x168 (R/W  32) Status R/W1C */
  __IO  __INTS_GIRQ26_EN_SET_bits_t    GIRQ26_EN_SET; /**< Offset: 0x16C (R/W  32) Write to set source enables */
  __I   __INTS_GIRQ26_RESULT_bits_t    GIRQ26_RESULT; /**< Offset: 0x170 (R/   32) Read-only bitwise OR of Source and Enable */
  __IO  __INTS_GIRQ26_EN_CLR_bits_t    GIRQ26_EN_CLR; /**< Offset: 0x174 (R/W  32) Write to clear source enables */
  __IO  __INTS_BLOCK_ENABLE_SET_bits_t BLOCK_ENABLE_SET; /**< Offset: 0x200 (R/W  32) Block Enable Set Register */
  __IO  __INTS_BLOCK_ENABLE_CLEAR_bits_t BLOCK_ENABLE_CLEAR; /**< Offset: 0x204 (R/W  32) Block Enable Clear Register. */
  __I   __INTS_BLOCK_IRQ_VECTOR_bits_t BLOCK_IRQ_VECTOR; /**< Offset: 0x208 (R/   32) Block IRQ Vector Register */
} ints_registers_t;
/** @}  end of The interrupt generation logic is made of 16 groups of signals, each of which\n        consist of a Status register, a Enable register and a Result register. The Status and Enable are\n        latched registers. The Result register is a bit by bit AND function of the Source and Enable registers.\n        All the bits of the Result register are OR'ed together and AND'ed with the corresponding bit in the Block\n        Select register to form the interrupt signal that is routed to the ARM interrupt controller. */

#endif /* _PIC32CX_0525SG12_INTS_COMPONENT_H_ */
