/**
 * \brief Component description for PIC32CX/0525SG12 VBAT_RAM
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
#ifndef _PIC32CX_0525SG12_VBAT_RAM_COMPONENT_H_
#define _PIC32CX_0525SG12_VBAT_RAM_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_VBAT_RAM The VBAT Powered RAM provides a 128 Byte Random Accessed Memory that is operational while the main \n        power rail is operational, and will retain its values powered by battery power while the main rail is unpowered.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR VBAT_RAM */
/* ========================================================================== */

/* -------- VBAT_RAM_DW : (VBAT_RAM Offset: 0x00) (R/W 32) 32-bits of VBAT powered RAM. -------- */

typedef union
{
  uint32_t w;
} __VBAT_RAM_DW_bits_t;
#define VBAT_RAM_DW_RESETVALUE              (0x00U)                                       /**<  (VBAT_RAM_DW) 32-bits of VBAT powered RAM.  Reset Value */

#define VBAT_RAM_DW_Msk                       (0x00000000UL)                                 /**< (VBAT_RAM_DW) Register Mask  */

/** \brief VBAT_RAM register offsets definitions */
#define VBAT_RAM_DW_OFFSET           (0x00)         /**< (VBAT_RAM_DW) 32-bits of VBAT powered RAM. Offset */

/** \brief VBAT_RAM register API structure */
typedef struct
{  /* The VBAT Powered RAM provides a 128 Byte Random Accessed Memory that is operational while the main \n        power rail is operational, and will retain its values powered by battery power while the main rail is unpowered. */
  __IO  __VBAT_RAM_DW_bits_t           VBAT_RAM_DW[32]; /**< Offset: 0x00 (R/W  32) 32-bits of VBAT powered RAM. */
} vbatram_registers_t;
/** @}  end of The VBAT Powered RAM provides a 128 Byte Random Accessed Memory that is operational while the main \n        power rail is operational, and will retain its values powered by battery power while the main rail is unpowered. */

#endif /* _PIC32CX_0525SG12_VBAT_RAM_COMPONENT_H_ */
