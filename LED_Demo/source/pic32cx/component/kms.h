/**
 * \brief Component description for PIC32CX/0525SG12 KMS
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
#ifndef _PIC32CX_0525SG12_KMS_COMPONENT_H_
#define _PIC32CX_0525SG12_KMS_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_KMS The Keyboard Scan Interface block provides a register interface to the EC\n        to directly scan an external keyboard matrix of size up to 18x8.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR KMS */
/* ========================================================================== */

/* -------- KMS_KSO_CONTROL : (KMS Offset: 0x04) (R/W 32) KSO Select and control -------- */

typedef union
{
  struct
  {
    uint32_t SELECT:5;                  /**< bit:   0..4  This field selects a KSO line (00000b = KSO[0] etc.) for output according to the value off KSO_INVERT in this register. */
    uint32_t ALL:1;                     /**< bit:      5  0=When key scan is enabled, KSO output controlled by the KSO_SELECT field.\n                1=KSO[x] driven high when selected. */
    uint32_t KSEN:1;                    /**< bit:      6  0= Keyboard scan enabled, 1= Keyboard scan disabled. All KSO output buffers disabled. */
    uint32_t INVERT:1;                  /**< bit:      7  0= KSO[x] driven low when selected, 1= KSO[x] driven high when selected. */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __KMS_KSO_CONTROL_bits_t;
#define KMS_KSO_CONTROL_RESETVALUE          (0x00U)                                       /**<  (KMS_KSO_CONTROL) KSO Select and control  Reset Value */

#define KMS_KSO_CONTROL_SELECT_Pos            (0)                                            /**< (KMS_KSO_CONTROL) This field selects a KSO line (00000b = KSO[0] etc.) for output according to the value off KSO_INVERT in this register. Position */
#define KMS_KSO_CONTROL_SELECT_Msk            (0x1FU << KMS_KSO_CONTROL_SELECT_Pos)          /**< (KMS_KSO_CONTROL) This field selects a KSO line (00000b = KSO[0] etc.) for output according to the value off KSO_INVERT in this register. Mask */
#define KMS_KSO_CONTROL_SELECT(value)         (KMS_KSO_CONTROL_SELECT_Msk & ((value) << KMS_KSO_CONTROL_SELECT_Pos))
#define KMS_KSO_CONTROL_ALL_Pos               (5)                                            /**< (KMS_KSO_CONTROL) 0=When key scan is enabled, KSO output controlled by the KSO_SELECT field.\n                1=KSO[x] driven high when selected. Position */
#define KMS_KSO_CONTROL_ALL_Msk               (0x1U << KMS_KSO_CONTROL_ALL_Pos)              /**< (KMS_KSO_CONTROL) 0=When key scan is enabled, KSO output controlled by the KSO_SELECT field.\n                1=KSO[x] driven high when selected. Mask */
#define KMS_KSO_CONTROL_KSEN_Pos              (6)                                            /**< (KMS_KSO_CONTROL) 0= Keyboard scan enabled, 1= Keyboard scan disabled. All KSO output buffers disabled. Position */
#define KMS_KSO_CONTROL_KSEN_Msk              (0x1U << KMS_KSO_CONTROL_KSEN_Pos)             /**< (KMS_KSO_CONTROL) 0= Keyboard scan enabled, 1= Keyboard scan disabled. All KSO output buffers disabled. Mask */
#define KMS_KSO_CONTROL_INVERT_Pos            (7)                                            /**< (KMS_KSO_CONTROL) 0= KSO[x] driven low when selected, 1= KSO[x] driven high when selected. Position */
#define KMS_KSO_CONTROL_INVERT_Msk            (0x1U << KMS_KSO_CONTROL_INVERT_Pos)           /**< (KMS_KSO_CONTROL) 0= KSO[x] driven low when selected, 1= KSO[x] driven high when selected. Mask */
#define KMS_KSO_CONTROL_Msk                   (0x000000FFUL)                                 /**< (KMS_KSO_CONTROL) Register Mask  */

/* -------- KMS_KSI : (KMS Offset: 0x08) (R/ 32) [7:0] This field returns the current state of the KSI pins. -------- */

typedef union
{
  uint32_t w;
} __KMS_KSI_bits_t;
#define KMS_KSI_RESETVALUE                  (0x00U)                                       /**<  (KMS_KSI) [7:0] This field returns the current state of the KSI pins.  Reset Value */

#define KMS_KSI_Msk                           (0x00000000UL)                                 /**< (KMS_KSI) Register Mask  */

/* -------- KMS_KSI_STATUS : (KMS Offset: 0x0c) (R/W 32) [7:0] Each bit in this field is set on the falling edge of the corresponding KSI input pin.\n            A KSI interrupt is generated when its corresponding status bit and interrupt enable bit are both set. KSI interrupts are logically ORed together to produce KSC_INT and KSC_INT_WAKE.\n            Writing a '1' to a bit will clear it. Writing a '0' to a bit has no effect. -------- */

typedef union
{
  uint32_t w;
} __KMS_KSI_STATUS_bits_t;
#define KMS_KSI_STATUS_RESETVALUE           (0x00U)                                       /**<  (KMS_KSI_STATUS) [7:0] Each bit in this field is set on the falling edge of the corresponding KSI input pin.\n            A KSI interrupt is generated when its corresponding status bit and interrupt enable bit are both set. KSI interrupts are logically ORed together to produce KSC_INT and KSC_INT_WAKE.\n            Writing a '1' to a bit will clear it. Writing a '0' to a bit has no effect.  Reset Value */

#define KMS_KSI_STATUS_Msk                    (0x00000000UL)                                 /**< (KMS_KSI_STATUS) Register Mask  */

/* -------- KMS_KSI_INT_EN : (KMS Offset: 0x10) (R/W 32) [7:0] Each bit in KSI_INT_EN enables interrupt generation due to highto-low transition on a KSI input. An interrupt is generated when the corresponding bits in KSI_STATUS and KSI_INT_EN are both set. -------- */

typedef union
{
  uint32_t w;
} __KMS_KSI_INT_EN_bits_t;
#define KMS_KSI_INT_EN_RESETVALUE           (0x00U)                                       /**<  (KMS_KSI_INT_EN) [7:0] Each bit in KSI_INT_EN enables interrupt generation due to highto-low transition on a KSI input. An interrupt is generated when the corresponding bits in KSI_STATUS and KSI_INT_EN are both set.  Reset Value */

#define KMS_KSI_INT_EN_Msk                    (0x00000000UL)                                 /**< (KMS_KSI_INT_EN) Register Mask  */

/* -------- KMS_EXTENDED_CONTROL : (KMS Offset: 0x14) (R/W 32) [0:0] PREDRIVE_ENABLE enables the PREDRIVE mode to actively drive the KSO pins high for approximately 100ns before switching to open-drain operation.\n            0=Disable predrive on KSO pins\n            1=Enable predrive on KSO pins. -------- */

typedef union
{
  uint32_t w;
} __KMS_EXTENDED_CONTROL_bits_t;
#define KMS_EXTENDED_CONTROL_RESETVALUE     (0x00U)                                       /**<  (KMS_EXTENDED_CONTROL) [0:0] PREDRIVE_ENABLE enables the PREDRIVE mode to actively drive the KSO pins high for approximately 100ns before switching to open-drain operation.\n            0=Disable predrive on KSO pins\n            1=Enable predrive on KSO pins.  Reset Value */

#define KMS_EXTENDED_CONTROL_Msk              (0x00000000UL)                                 /**< (KMS_EXTENDED_CONTROL) Register Mask  */

/** \brief KMS register offsets definitions */
#define KMS_KSO_CONTROL_OFFSET       (0x04)         /**< (KMS_KSO_CONTROL) KSO Select and control Offset */
#define KMS_KSI_OFFSET               (0x08)         /**< (KMS_KSI) [7:0] This field returns the current state of the KSI pins. Offset */
#define KMS_KSI_STATUS_OFFSET        (0x0C)         /**< (KMS_KSI_STATUS) [7:0] Each bit in this field is set on the falling edge of the corresponding KSI input pin.\n            A KSI interrupt is generated when its corresponding status bit and interrupt enable bit are both set. KSI interrupts are logically ORed together to produce KSC_INT and KSC_INT_WAKE.\n            Writing a '1' to a bit will clear it. Writing a '0' to a bit has no effect. Offset */
#define KMS_KSI_INT_EN_OFFSET        (0x10)         /**< (KMS_KSI_INT_EN) [7:0] Each bit in KSI_INT_EN enables interrupt generation due to highto-low transition on a KSI input. An interrupt is generated when the corresponding bits in KSI_STATUS and KSI_INT_EN are both set. Offset */
#define KMS_EXTENDED_CONTROL_OFFSET  (0x14)         /**< (KMS_EXTENDED_CONTROL) [0:0] PREDRIVE_ENABLE enables the PREDRIVE mode to actively drive the KSO pins high for approximately 100ns before switching to open-drain operation.\n            0=Disable predrive on KSO pins\n            1=Enable predrive on KSO pins. Offset */

/** \brief KMS register API structure */
typedef struct
{  /* The Keyboard Scan Interface block provides a register interface to the EC\n        to directly scan an external keyboard matrix of size up to 18x8. */
  __IO  __KMS_KSO_CONTROL_bits_t       KSO_CONTROL;   /**< Offset: 0x04 (R/W  32) KSO Select and control */
  __I   __KMS_KSI_bits_t               KSI;           /**< Offset: 0x08 (R/   32) [7:0] This field returns the current state of the KSI pins. */
  __IO  __KMS_KSI_STATUS_bits_t        KSI_STATUS;    /**< Offset: 0x0C (R/W  32) [7:0] Each bit in this field is set on the falling edge of the corresponding KSI input pin.\n            A KSI interrupt is generated when its corresponding status bit and interrupt enable bit are both set. KSI interrupts are logically ORed together to produce KSC_INT and KSC_INT_WAKE.\n            Writing a '1' to a bit will clear it. Writing a '0' to a bit has no effect. */
  __IO  __KMS_KSI_INT_EN_bits_t        KSI_INT_EN;    /**< Offset: 0x10 (R/W  32) [7:0] Each bit in KSI_INT_EN enables interrupt generation due to highto-low transition on a KSI input. An interrupt is generated when the corresponding bits in KSI_STATUS and KSI_INT_EN are both set. */
  __IO  __KMS_EXTENDED_CONTROL_bits_t  EXTENDED_CONTROL; /**< Offset: 0x14 (R/W  32) [0:0] PREDRIVE_ENABLE enables the PREDRIVE mode to actively drive the KSO pins high for approximately 100ns before switching to open-drain operation.\n            0=Disable predrive on KSO pins\n            1=Enable predrive on KSO pins. */
} kms_registers_t;
/** @}  end of The Keyboard Scan Interface block provides a register interface to the EC\n        to directly scan an external keyboard matrix of size up to 18x8. */

#endif /* _PIC32CX_0525SG12_KMS_COMPONENT_H_ */
