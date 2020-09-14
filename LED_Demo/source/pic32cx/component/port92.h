/**
 * \brief Component description for PIC32CX/0525SG12 PORT92
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
#ifndef _PIC32CX_0525SG12_PORT92_COMPONENT_H_
#define _PIC32CX_0525SG12_PORT92_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_PORT92 The registers listed in the Configuration Register Summary table are for a single instance of the Legacy Port92/GATEA20 logic.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PORT92 */
/* ========================================================================== */

/* -------- PORT92_REG : (PORT92 Offset: 0x00) (R/W 8) PORT92 Register: The registers listed in the Runtime Register Summary table are for a single instance of the Legacy Port92/GATEA20 logic. -------- */

typedef union
{
  struct
  {
    uint8_t  ALT_CPU_RESET:1;           /**< bit:      0  This bit provides an alternate means to generate a CPU_RESET pulse. */
    uint8_t  ALT_GATE_A20:1;            /**< bit:      1  This bit provides an alternate means for system control of the GATEA20 pin. ALT_A20 low drives GATEA20 low, if A20 from the\n      keyboard controller is also low. When Port 92 is enabled, writing a 1 to this bit forces ALT_A20 high. ALT_A20 high drives GATEA20\n      high regardless of the state of A20 from the keyboard controller. 0=ALT_A20 is driven low; 1=ALT_A20 is driven high */
    uint8_t  :6;                        /**< bit:   2..7  Reserved                                      */
  };
  uint8_t  w;
} __PORT92_REG_bits_t;
#define PORT92_REG_RESETVALUE               (0x00U)                                       /**<  (PORT92_REG) PORT92 Register: The registers listed in the Runtime Register Summary table are for a single instance of the Legacy Port92/GATEA20 logic.  Reset Value */

#define PORT92_REG_ALT_CPU_RESET_Pos          (0)                                            /**< (PORT92_REG) This bit provides an alternate means to generate a CPU_RESET pulse. Position */
#define PORT92_REG_ALT_CPU_RESET_Msk          (0x1U << PORT92_REG_ALT_CPU_RESET_Pos)         /**< (PORT92_REG) This bit provides an alternate means to generate a CPU_RESET pulse. Mask */
#define PORT92_REG_ALT_GATE_A20_Pos           (1)                                            /**< (PORT92_REG) This bit provides an alternate means for system control of the GATEA20 pin. ALT_A20 low drives GATEA20 low, if A20 from the\n      keyboard controller is also low. When Port 92 is enabled, writing a 1 to this bit forces ALT_A20 high. ALT_A20 high drives GATEA20\n      high regardless of the state of A20 from the keyboard controller. 0=ALT_A20 is driven low; 1=ALT_A20 is driven high Position */
#define PORT92_REG_ALT_GATE_A20_Msk           (0x1U << PORT92_REG_ALT_GATE_A20_Pos)          /**< (PORT92_REG) This bit provides an alternate means for system control of the GATEA20 pin. ALT_A20 low drives GATEA20 low, if A20 from the\n      keyboard controller is also low. When Port 92 is enabled, writing a 1 to this bit forces ALT_A20 high. ALT_A20 high drives GATEA20\n      high regardless of the state of A20 from the keyboard controller. 0=ALT_A20 is driven low; 1=ALT_A20 is driven high Mask */
#define PORT92_REG_Msk                        (0x00000003UL)                                 /**< (PORT92_REG) Register Mask  */

/* -------- PORT92_GATEA20 : (PORT92 Offset: 0x100) (R/W 8) GATEA20 Control Register -------- */

typedef union
{
  struct
  {
    uint8_t  GATEA20:1;                 /**< bit:      0  0=The GATEA20 output is driven low, 1=The GATEA20 output is driven high. */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __PORT92_GATEA20_bits_t;
#define PORT92_GATEA20_RESETVALUE           (0x00U)                                       /**<  (PORT92_GATEA20) GATEA20 Control Register  Reset Value */

#define PORT92_GATEA20_GATEA20_Pos            (0)                                            /**< (PORT92_GATEA20) 0=The GATEA20 output is driven low, 1=The GATEA20 output is driven high. Position */
#define PORT92_GATEA20_GATEA20_Msk            (0x1U << PORT92_GATEA20_GATEA20_Pos)           /**< (PORT92_GATEA20) 0=The GATEA20 output is driven low, 1=The GATEA20 output is driven high. Mask */
#define PORT92_GATEA20_Msk                    (0x00000001UL)                                 /**< (PORT92_GATEA20) Register Mask  */

/* -------- PORT92_SETGA20L : (PORT92 Offset: 0x108) (/W 8) SETGA20L Register. A write to this register sets GATEA20 in the GATEA20 Control Register. -------- */

typedef union
{
  uint8_t  w;
} __PORT92_SETGA20L_bits_t;
#define PORT92_SETGA20L_RESETVALUE          (0x00U)                                       /**<  (PORT92_SETGA20L) SETGA20L Register. A write to this register sets GATEA20 in the GATEA20 Control Register.  Reset Value */

#define PORT92_SETGA20L_Msk                   (0x00000000UL)                                 /**< (PORT92_SETGA20L) Register Mask  */

/* -------- PORT92_RSTGA20L : (PORT92 Offset: 0x10c) (R/W 8) RSTGA20L Register. A write to this register sets GATEA20 in the GATEA20 Control Register. -------- */

typedef union
{
  uint8_t  w;
} __PORT92_RSTGA20L_bits_t;
#define PORT92_RSTGA20L_RESETVALUE          (0x00U)                                       /**<  (PORT92_RSTGA20L) RSTGA20L Register. A write to this register sets GATEA20 in the GATEA20 Control Register.  Reset Value */

#define PORT92_RSTGA20L_Msk                   (0x00000000UL)                                 /**< (PORT92_RSTGA20L) Register Mask  */

/* -------- PORT92_ENABLE : (PORT92 Offset: 0x330) (R/W 8) PORT92 Enable Register -------- */

typedef union
{
  struct
  {
    uint8_t  P92_EN:1;                  /**< bit:      0  When this bit is '1', the Port92h Register is enabled. When this bit is '0', the Port92h Register is disabled, and Host\n      writes to Host address 92h are ignored. */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __PORT92_ENABLE_bits_t;
#define PORT92_ENABLE_RESETVALUE            (0x00U)                                       /**<  (PORT92_ENABLE) PORT92 Enable Register  Reset Value */

#define PORT92_ENABLE_P92_EN_Pos              (0)                                            /**< (PORT92_ENABLE) When this bit is '1', the Port92h Register is enabled. When this bit is '0', the Port92h Register is disabled, and Host\n      writes to Host address 92h are ignored. Position */
#define PORT92_ENABLE_P92_EN_Msk              (0x1U << PORT92_ENABLE_P92_EN_Pos)             /**< (PORT92_ENABLE) When this bit is '1', the Port92h Register is enabled. When this bit is '0', the Port92h Register is disabled, and Host\n      writes to Host address 92h are ignored. Mask */
#define PORT92_ENABLE_Msk                     (0x00000001UL)                                 /**< (PORT92_ENABLE) Register Mask  */

/** \brief PORT92 register offsets definitions */
#define PORT92_REG_OFFSET            (0x00)         /**< (PORT92_REG) PORT92 Register: The registers listed in the Runtime Register Summary table are for a single instance of the Legacy Port92/GATEA20 logic. Offset */
#define PORT92_GATEA20_OFFSET        (0x100)        /**< (PORT92_GATEA20) GATEA20 Control Register Offset */
#define PORT92_SETGA20L_OFFSET       (0x108)        /**< (PORT92_SETGA20L) SETGA20L Register. A write to this register sets GATEA20 in the GATEA20 Control Register. Offset */
#define PORT92_RSTGA20L_OFFSET       (0x10C)        /**< (PORT92_RSTGA20L) RSTGA20L Register. A write to this register sets GATEA20 in the GATEA20 Control Register. Offset */
#define PORT92_ENABLE_OFFSET         (0x330)        /**< (PORT92_ENABLE) PORT92 Enable Register Offset */

/** \brief PORT92 register API structure */
typedef struct
{  /* The registers listed in the Configuration Register Summary table are for a single instance of the Legacy Port92/GATEA20 logic. */
  __IO  __PORT92_REG_bits_t            PORT92_REG;    /**< Offset: 0x00 (R/W   8) PORT92 Register: The registers listed in the Runtime Register Summary table are for a single instance of the Legacy Port92/GATEA20 logic. */
  __IO  __PORT92_GATEA20_bits_t        GATEA20;       /**< Offset: 0x100 (R/W   8) GATEA20 Control Register */
  __O   __PORT92_SETGA20L_bits_t       SETGA20L;      /**< Offset: 0x108 ( /W   8) SETGA20L Register. A write to this register sets GATEA20 in the GATEA20 Control Register. */
  __IO  __PORT92_RSTGA20L_bits_t       RSTGA20L;      /**< Offset: 0x10C (R/W   8) RSTGA20L Register. A write to this register sets GATEA20 in the GATEA20 Control Register. */
  __IO  __PORT92_ENABLE_bits_t         PORT92_ENABLE; /**< Offset: 0x330 (R/W   8) PORT92 Enable Register */
} port92_registers_t;
/** @}  end of The registers listed in the Configuration Register Summary table are for a single instance of the Legacy Port92/GATEA20 logic. */

#endif /* _PIC32CX_0525SG12_PORT92_COMPONENT_H_ */
