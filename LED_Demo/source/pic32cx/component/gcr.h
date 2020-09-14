/**
 * \brief Component description for PIC32CX/0525SG12 GCR
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
#ifndef _PIC32CX_0525SG12_GCR_COMPONENT_H_
#define _PIC32CX_0525SG12_GCR_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_GCR The Logical Device Configuration registers support motherboard designs in\n        which the resources required by their components are known and assigned by the BIOS\n        at POST.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR GCR */
/* ========================================================================== */

/* -------- GCR_LOGICAL_DEVICE_NUMBER : (GCR Offset: 0x07) (R/W 8) A write to this register selects the current logical device. This allows access to the control and configuration\n     registers for each logical device. Note: The Activate command operates only on the selected logical device. -------- */

typedef union
{
  uint8_t  w;
} __GCR_LOGICAL_DEVICE_NUMBER_bits_t;
#define GCR_LOGICAL_DEVICE_NUMBER_RESETVALUE (0x00U)                                       /**<  (GCR_LOGICAL_DEVICE_NUMBER) A write to this register selects the current logical device. This allows access to the control and configuration\n     registers for each logical device. Note: The Activate command operates only on the selected logical device.  Reset Value */

#define GCR_LOGICAL_DEVICE_NUMBER_Msk         (0x00000000UL)                                 /**< (GCR_LOGICAL_DEVICE_NUMBER) Register Mask  */

/* -------- GCR_DEVICE_REV_REG : (GCR Offset: 0x1c) (R/ 8) A read-only register which provides device revision information. -------- */

typedef union
{
  uint8_t  w;
} __GCR_DEVICE_REV_REG_bits_t;
#define GCR_DEVICE_REV_REG_RESETVALUE       (0x00U)                                       /**<  (GCR_DEVICE_REV_REG) A read-only register which provides device revision information.  Reset Value */

#define GCR_DEVICE_REV_REG_Msk                (0x00000000UL)                                 /**< (GCR_DEVICE_REV_REG) Register Mask  */

/* -------- GCR_DEVICE_SUBID_REG : (GCR Offset: 0x1d) (R/ 8) A read-only register which provides device sub ID information. -------- */

typedef union
{
  uint8_t  w;
} __GCR_DEVICE_SUBID_REG_bits_t;
#define GCR_DEVICE_SUBID_REG_RESETVALUE     (0x24U)                                       /**<  (GCR_DEVICE_SUBID_REG) A read-only register which provides device sub ID information.  Reset Value */

#define GCR_DEVICE_SUBID_REG_Msk              (0x00000000UL)                                 /**< (GCR_DEVICE_SUBID_REG) Register Mask  */

/* -------- GCR_DEVICE_ID : (GCR Offset: 0x1e) (R/ 16) A read-only register which provides device identification LSB. -------- */

typedef union
{
  uint16_t w;
} __GCR_DEVICE_ID_bits_t;
#define GCR_DEVICE_ID_RESETVALUE            (0x20U)                                       /**<  (GCR_DEVICE_ID) A read-only register which provides device identification LSB.  Reset Value */

#define GCR_DEVICE_ID_Msk                     (0x00000000UL)                                 /**< (GCR_DEVICE_ID) Register Mask  */

/* -------- GCR_LEGACY_DEV_ID : (GCR Offset: 0x20) (R/ 8) A read-only register which provides legacy device identification. -------- */

typedef union
{
  uint8_t  w;
} __GCR_LEGACY_DEV_ID_bits_t;
#define GCR_LEGACY_DEV_ID_RESETVALUE        (0xFEU)                                       /**<  (GCR_LEGACY_DEV_ID) A read-only register which provides legacy device identification.  Reset Value */

#define GCR_LEGACY_DEV_ID_Msk                 (0x00000000UL)                                 /**< (GCR_LEGACY_DEV_ID) Register Mask  */

/* -------- GCR_LEGACY_DEV_REVISION : (GCR Offset: 0x21) (R/ 8) A read-only register which provides legacy device revision information. -------- */

typedef union
{
  uint8_t  w;
} __GCR_LEGACY_DEV_REVISION_bits_t;
#define GCR_LEGACY_DEV_REVISION_RESETVALUE  (0xA0U)                                       /**<  (GCR_LEGACY_DEV_REVISION) A read-only register which provides legacy device revision information.  Reset Value */

#define GCR_LEGACY_DEV_REVISION_Msk           (0x00000000UL)                                 /**< (GCR_LEGACY_DEV_REVISION) Register Mask  */

/** \brief GCR register offsets definitions */
#define GCR_LOGICAL_DEVICE_NUMBER_OFFSET (0x07)         /**< (GCR_LOGICAL_DEVICE_NUMBER) A write to this register selects the current logical device. This allows access to the control and configuration\n     registers for each logical device. Note: The Activate command operates only on the selected logical device. Offset */
#define GCR_DEVICE_REV_REG_OFFSET    (0x1C)         /**< (GCR_DEVICE_REV_REG) A read-only register which provides device revision information. Offset */
#define GCR_DEVICE_SUBID_REG_OFFSET  (0x1D)         /**< (GCR_DEVICE_SUBID_REG) A read-only register which provides device sub ID information. Offset */
#define GCR_DEVICE_ID_OFFSET         (0x1E)         /**< (GCR_DEVICE_ID) A read-only register which provides device identification LSB. Offset */
#define GCR_LEGACY_DEV_ID_OFFSET     (0x20)         /**< (GCR_LEGACY_DEV_ID) A read-only register which provides legacy device identification. Offset */
#define GCR_LEGACY_DEV_REVISION_OFFSET (0x21)         /**< (GCR_LEGACY_DEV_REVISION) A read-only register which provides legacy device revision information. Offset */

/** \brief GCR register API structure */
typedef struct
{  /* The Logical Device Configuration registers support motherboard designs in\n        which the resources required by their components are known and assigned by the BIOS\n        at POST. */
  __IO  __GCR_LOGICAL_DEVICE_NUMBER_bits_t LOGICAL_DEVICE_NUMBER; /**< Offset: 0x07 (R/W   8) A write to this register selects the current logical device. This allows access to the control and configuration\n     registers for each logical device. Note: The Activate command operates only on the selected logical device. */
  __I   __GCR_DEVICE_REV_REG_bits_t    DEVICE_REV_REG; /**< Offset: 0x1C (R/    8) A read-only register which provides device revision information. */
  __I   __GCR_DEVICE_SUBID_REG_bits_t  DEVICE_SUBID_REG; /**< Offset: 0x1D (R/    8) A read-only register which provides device sub ID information. */
  __I   __GCR_DEVICE_ID_bits_t         DEVICE_ID;     /**< Offset: 0x1E (R/   16) A read-only register which provides device identification LSB. */
  __I   __GCR_LEGACY_DEV_ID_bits_t     LEGACY_DEV_ID; /**< Offset: 0x20 (R/    8) A read-only register which provides legacy device identification. */
  __I   __GCR_LEGACY_DEV_REVISION_bits_t LEGACY_DEV_REVISION; /**< Offset: 0x21 (R/    8) A read-only register which provides legacy device revision information. */
} gcr_registers_t;
/** @}  end of The Logical Device Configuration registers support motherboard designs in\n        which the resources required by their components are known and assigned by the BIOS\n        at POST. */

#endif /* _PIC32CX_0525SG12_GCR_COMPONENT_H_ */
