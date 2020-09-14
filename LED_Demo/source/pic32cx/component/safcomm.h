/**
 * \brief Component description for PIC32CX/0525SG12 SAFCOMM
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
#ifndef _PIC32CX_0525SG12_SAFCOMM_COMPONENT_H_
#define _PIC32CX_0525SG12_SAFCOMM_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_SAFCOMM This register contains one bit PREFETCH_EN that should be set to '1' during initialization, to        enable Prefetch Mode operation in SAFS Mode. Prefetch Mode allows overlapped anticipatory reading of        information from Flash during the eSPI delivery of previously-read data to the Host Chipset. If        enabled, Prefetching is invoked during consecutive Reads that are 64 bytes in length and from        consecutive 64-byte aligned Flash addresses. With roughly equal clock rates on eSPI and SPI, these        features together can approximately double the effective bandwidth of consecutive Flash reads        performed over eSPI.  In SAFS operation (SAF_MODE_ENABLE bit = 1) attempted accesses by EC firmware        to this register are blocked.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SAFCOMM */
/* ========================================================================== */

/* -------- SAFCOMM_SAF_MODE : (SAFCOMM Offset: 0x2b8) (R/W 32) This register contains one bit PREFETCH_EN that should be set to '1' during initialization, to enable Prefetch Mode operation in SAFS Mode. -------- */

typedef union
{
  struct
  {
    uint32_t PREFETCH_EN:1;             /**< bit:      0  1= Allow Prefetching from Flash devices, and use the bits CS0_PREFETCH_OPT_EN and         CS1_PREFETCH_OPT_EN to select any additional optimization.         0= Do not perform Prefetches from Flash devices */
    uint32_t :31;                       /**< bit:  1..31  Reserved                                      */
  };
  uint32_t w;
} __SAFCOMM_SAF_MODE_bits_t;
#define SAFCOMM_SAF_MODE_RESETVALUE         (0x00U)                                       /**<  (SAFCOMM_SAF_MODE) This register contains one bit PREFETCH_EN that should be set to '1' during initialization, to enable Prefetch Mode operation in SAFS Mode.  Reset Value */

#define SAFCOMM_SAF_MODE_PREFETCH_EN_Pos      (0)                                            /**< (SAFCOMM_SAF_MODE) 1= Allow Prefetching from Flash devices, and use the bits CS0_PREFETCH_OPT_EN and         CS1_PREFETCH_OPT_EN to select any additional optimization.         0= Do not perform Prefetches from Flash devices Position */
#define SAFCOMM_SAF_MODE_PREFETCH_EN_Msk      (0x1U << SAFCOMM_SAF_MODE_PREFETCH_EN_Pos)     /**< (SAFCOMM_SAF_MODE) 1= Allow Prefetching from Flash devices, and use the bits CS0_PREFETCH_OPT_EN and         CS1_PREFETCH_OPT_EN to select any additional optimization.         0= Do not perform Prefetches from Flash devices Mask */
#define SAFCOMM_SAF_MODE_Msk                  (0x00000001UL)                                 /**< (SAFCOMM_SAF_MODE) Register Mask  */

/** \brief SAFCOMM register offsets definitions */
#define SAFCOMM_SAF_MODE_OFFSET      (0x2B8)        /**< (SAFCOMM_SAF_MODE) This register contains one bit PREFETCH_EN that should be set to '1' during initialization, to enable Prefetch Mode operation in SAFS Mode. Offset */

/** \brief SAFCOMM register API structure */
typedef struct
{  /* This register contains one bit PREFETCH_EN that should be set to '1' during initialization, to        enable Prefetch Mode operation in SAFS Mode. Prefetch Mode allows overlapped anticipatory reading of        information from Flash during the eSPI delivery of previously-read data to the Host Chipset. If        enabled, Prefetching is invoked during consecutive Reads that are 64 bytes in length and from        consecutive 64-byte aligned Flash addresses. With roughly equal clock rates on eSPI and SPI, these        features together can approximately double the effective bandwidth of consecutive Flash reads        performed over eSPI.  In SAFS operation (SAF_MODE_ENABLE bit = 1) attempted accesses by EC firmware        to this register are blocked. */
  __IO  __SAFCOMM_SAF_MODE_bits_t      SAF_MODE;      /**< Offset: 0x2B8 (R/W  32) This register contains one bit PREFETCH_EN that should be set to '1' during initialization, to enable Prefetch Mode operation in SAFS Mode. */
} safcomm_registers_t;
/** @}  end of This register contains one bit PREFETCH_EN that should be set to '1' during initialization, to        enable Prefetch Mode operation in SAFS Mode. Prefetch Mode allows overlapped anticipatory reading of        information from Flash during the eSPI delivery of previously-read data to the Host Chipset. If        enabled, Prefetching is invoked during consecutive Reads that are 64 bytes in length and from        consecutive 64-byte aligned Flash addresses. With roughly equal clock rates on eSPI and SPI, these        features together can approximately double the effective bandwidth of consecutive Flash reads        performed over eSPI.  In SAFS operation (SAF_MODE_ENABLE bit = 1) attempted accesses by EC firmware        to this register are blocked. */

#endif /* _PIC32CX_0525SG12_SAFCOMM_COMPONENT_H_ */
