/**
 * \brief Component description for PIC32CX/0525SG12 KBC
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
#ifndef _PIC32CX_0525SG12_KBC_COMPONENT_H_
#define _PIC32CX_0525SG12_KBC_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_KBC The keyboard controller uses the EC to produce a superset of the features provided by the\n        industry-standard 8042 keyboard controller. The 8042 Emulated Keyboard Controller is a Host/EC\n     Message Interface with hardware assists to emulate 8042 behavior and provide Legacy GATEA20 support.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR KBC */
/* ========================================================================== */

/* -------- KBC_EC_HOST_DATA_AUX_DATA : (KBC Offset: 0x00) (R/ 8) READ_DATA. This 8-bit register is read-only. When read by the Host, the PCOBF and/or AUXOBF interrupts are cleared and the\n     OBF flag in the status register is cleared. -------- */

typedef union
{
  uint8_t  w;
} __KBC_EC_HOST_DATA_AUX_DATA_bits_t;
#define KBC_EC_HOST_DATA_AUX_DATA_RESETVALUE (0x00U)                                       /**<  (KBC_EC_HOST_DATA_AUX_DATA) READ_DATA. This 8-bit register is read-only. When read by the Host, the PCOBF and/or AUXOBF interrupts are cleared and the\n     OBF flag in the status register is cleared.  Reset Value */

#define KBC_EC_HOST_DATA_AUX_DATA_Msk         (0x00000000UL)                                 /**< (KBC_EC_HOST_DATA_AUX_DATA) Register Mask  */

/* -------- KBC_HOST_EC_DATA : (KBC Offset: 0x00) (/W 8) WRITE_DATA. This 8-bit register is write-only. When written, the C/D bit in the Keyboard Status Read Register is cleared\n     to '0', signifying data, and the IBF in the same register is set to '1'. When the Runtime Register at offset 0h is read by the Host,\n     it functions as the EC_HOST Data / AUX Data Register. -------- */

typedef union
{
  uint8_t  w;
} __KBC_HOST_EC_DATA_bits_t;
#define KBC_HOST_EC_DATA_RESETVALUE         (0x00U)                                       /**<  (KBC_HOST_EC_DATA) WRITE_DATA. This 8-bit register is write-only. When written, the C/D bit in the Keyboard Status Read Register is cleared\n     to '0', signifying data, and the IBF in the same register is set to '1'. When the Runtime Register at offset 0h is read by the Host,\n     it functions as the EC_HOST Data / AUX Data Register.  Reset Value */

#define KBC_HOST_EC_DATA_Msk                  (0x00000000UL)                                 /**< (KBC_HOST_EC_DATA) Register Mask  */

/* -------- KBC_HOST_EC_CMD : (KBC Offset: 0x04) (/W 8) WRITE_CMD. This 8-bit register is write-only and is an alias of the register at offset 0h. When written, the C/D bit in the\n     Keyboard Status Read Register is set to '1', signifying a command, and the IBF in the same register is set to '1'. When the Runtime\n     Register at offset 4h is read by the Host, it functions as the Keyboard Status Read Register. -------- */

typedef union
{
  uint8_t  w;
} __KBC_HOST_EC_CMD_bits_t;
#define KBC_HOST_EC_CMD_RESETVALUE          (0x00U)                                       /**<  (KBC_HOST_EC_CMD) WRITE_CMD. This 8-bit register is write-only and is an alias of the register at offset 0h. When written, the C/D bit in the\n     Keyboard Status Read Register is set to '1', signifying a command, and the IBF in the same register is set to '1'. When the Runtime\n     Register at offset 4h is read by the Host, it functions as the Keyboard Status Read Register.  Reset Value */

#define KBC_HOST_EC_CMD_Msk                   (0x00000000UL)                                 /**< (KBC_HOST_EC_CMD) Register Mask  */

/* -------- KBC_KBD_STATUS : (KBC Offset: 0x04) (R/ 8) Keyboard Status Read Register. This register is a read-only alias of the EC Keyboard Status Register. -------- */

typedef union
{
  struct
  {
    uint8_t  OBF:1;                     /**< bit:      0  Output Buffer Full.                           */
    uint8_t  IBF:1;                     /**< bit:      1  Input Buffer Full.                            */
    uint8_t  UD0:1;                     /**< bit:      2  User-defined data.                            */
    uint8_t  CMD_DATA:1;                /**< bit:      3  Command Data. This bit specifies whether the input data register contains data or a command ('0' = data, '1' = command). */
    uint8_t  UD1:1;                     /**< bit:      4  User-defined data.                            */
    uint8_t  AUXOBF:1;                  /**< bit:      5  Auxiliary Output Buffer Full.                 */
    uint8_t  UD2:2;                     /**< bit:   6..7  User-defined data.                            */
  };
  uint8_t  w;
} __KBC_KBD_STATUS_bits_t;
#define KBC_KBD_STATUS_RESETVALUE           (0x00U)                                       /**<  (KBC_KBD_STATUS) Keyboard Status Read Register. This register is a read-only alias of the EC Keyboard Status Register.  Reset Value */

#define KBC_KBD_STATUS_OBF_Pos                (0)                                            /**< (KBC_KBD_STATUS) Output Buffer Full. Position */
#define KBC_KBD_STATUS_OBF_Msk                (0x1U << KBC_KBD_STATUS_OBF_Pos)               /**< (KBC_KBD_STATUS) Output Buffer Full. Mask */
#define KBC_KBD_STATUS_IBF_Pos                (1)                                            /**< (KBC_KBD_STATUS) Input Buffer Full. Position */
#define KBC_KBD_STATUS_IBF_Msk                (0x1U << KBC_KBD_STATUS_IBF_Pos)               /**< (KBC_KBD_STATUS) Input Buffer Full. Mask */
#define KBC_KBD_STATUS_UD0_Pos                (2)                                            /**< (KBC_KBD_STATUS) User-defined data. Position */
#define KBC_KBD_STATUS_UD0_Msk                (0x1U << KBC_KBD_STATUS_UD0_Pos)               /**< (KBC_KBD_STATUS) User-defined data. Mask */
#define KBC_KBD_STATUS_CMD_DATA_Pos           (3)                                            /**< (KBC_KBD_STATUS) Command Data. This bit specifies whether the input data register contains data or a command ('0' = data, '1' = command). Position */
#define KBC_KBD_STATUS_CMD_DATA_Msk           (0x1U << KBC_KBD_STATUS_CMD_DATA_Pos)          /**< (KBC_KBD_STATUS) Command Data. This bit specifies whether the input data register contains data or a command ('0' = data, '1' = command). Mask */
#define KBC_KBD_STATUS_UD1_Pos                (4)                                            /**< (KBC_KBD_STATUS) User-defined data. Position */
#define KBC_KBD_STATUS_UD1_Msk                (0x1U << KBC_KBD_STATUS_UD1_Pos)               /**< (KBC_KBD_STATUS) User-defined data. Mask */
#define KBC_KBD_STATUS_AUXOBF_Pos             (5)                                            /**< (KBC_KBD_STATUS) Auxiliary Output Buffer Full. Position */
#define KBC_KBD_STATUS_AUXOBF_Msk             (0x1U << KBC_KBD_STATUS_AUXOBF_Pos)            /**< (KBC_KBD_STATUS) Auxiliary Output Buffer Full. Mask */
#define KBC_KBD_STATUS_UD2_Pos                (6)                                            /**< (KBC_KBD_STATUS) User-defined data. Position */
#define KBC_KBD_STATUS_UD2_Msk                (0x3U << KBC_KBD_STATUS_UD2_Pos)               /**< (KBC_KBD_STATUS) User-defined data. Mask */
#define KBC_KBD_STATUS_UD2(value)             (KBC_KBD_STATUS_UD2_Msk & ((value) << KBC_KBD_STATUS_UD2_Pos))
#define KBC_KBD_STATUS_Msk                    (0x000000FFUL)                                 /**< (KBC_KBD_STATUS) Register Mask  */

/* -------- KBC_HOST2EC_DATA : (KBC Offset: 0x100) (R/ 8) Host_EC Data/Cmd Register  This register is an alias of the HOST_EC Data / CMD Register. When read at the EC-Only offset\n     of 0h, it returns the data written by the Host to either Runtime Register offset 0h or Runtime Register offset 04h. -------- */

typedef union
{
  uint8_t  w;
} __KBC_HOST2EC_DATA_bits_t;
#define KBC_HOST2EC_DATA_RESETVALUE         (0x00U)                                       /**<  (KBC_HOST2EC_DATA) Host_EC Data/Cmd Register  This register is an alias of the HOST_EC Data / CMD Register. When read at the EC-Only offset\n     of 0h, it returns the data written by the Host to either Runtime Register offset 0h or Runtime Register offset 04h.  Reset Value */

#define KBC_HOST2EC_DATA_Msk                  (0x00000000UL)                                 /**< (KBC_HOST2EC_DATA) Register Mask  */

/* -------- KBC_EC_DATA : (KBC Offset: 0x100) (/W 8) EC_Host Data Register -------- */

typedef union
{
  uint8_t  w;
} __KBC_EC_DATA_bits_t;
#define KBC_EC_DATA_RESETVALUE              (0x00U)                                       /**<  (KBC_EC_DATA) EC_Host Data Register  Reset Value */

#define KBC_EC_DATA_Msk                       (0x00000000UL)                                 /**< (KBC_EC_DATA) Register Mask  */

/* -------- KBC_EC_KBD_STATUS : (KBC Offset: 0x104) (R/W 8) Keyboard Status Register -------- */

typedef union
{
  struct
  {
    uint8_t  OBF:1;                     /**< bit:      0  Output Buffer Full.                           */
    uint8_t  IBF:1;                     /**< bit:      1  Input Buffer Full.                            */
    uint8_t  UD0:1;                     /**< bit:      2  User-defined data.                            */
    uint8_t  CMD_DATA:1;                /**< bit:      3  Command Data. This bit specifies whether the input data register contains data or a command ('0' = data, '1' = command). */
    uint8_t  UD1:1;                     /**< bit:      4  User-defined data.                            */
    uint8_t  AUXOBF:1;                  /**< bit:      5  Auxiliary Output Buffer Full.                 */
    uint8_t  UD2:2;                     /**< bit:   6..7  User-defined data.                            */
  };
  uint8_t  w;
} __KBC_EC_KBD_STATUS_bits_t;
#define KBC_EC_KBD_STATUS_RESETVALUE        (0x00U)                                       /**<  (KBC_EC_KBD_STATUS) Keyboard Status Register  Reset Value */

#define KBC_EC_KBD_STATUS_OBF_Pos             (0)                                            /**< (KBC_EC_KBD_STATUS) Output Buffer Full. Position */
#define KBC_EC_KBD_STATUS_OBF_Msk             (0x1U << KBC_EC_KBD_STATUS_OBF_Pos)            /**< (KBC_EC_KBD_STATUS) Output Buffer Full. Mask */
#define KBC_EC_KBD_STATUS_IBF_Pos             (1)                                            /**< (KBC_EC_KBD_STATUS) Input Buffer Full. Position */
#define KBC_EC_KBD_STATUS_IBF_Msk             (0x1U << KBC_EC_KBD_STATUS_IBF_Pos)            /**< (KBC_EC_KBD_STATUS) Input Buffer Full. Mask */
#define KBC_EC_KBD_STATUS_UD0_Pos             (2)                                            /**< (KBC_EC_KBD_STATUS) User-defined data. Position */
#define KBC_EC_KBD_STATUS_UD0_Msk             (0x1U << KBC_EC_KBD_STATUS_UD0_Pos)            /**< (KBC_EC_KBD_STATUS) User-defined data. Mask */
#define KBC_EC_KBD_STATUS_CMD_DATA_Pos        (3)                                            /**< (KBC_EC_KBD_STATUS) Command Data. This bit specifies whether the input data register contains data or a command ('0' = data, '1' = command). Position */
#define KBC_EC_KBD_STATUS_CMD_DATA_Msk        (0x1U << KBC_EC_KBD_STATUS_CMD_DATA_Pos)       /**< (KBC_EC_KBD_STATUS) Command Data. This bit specifies whether the input data register contains data or a command ('0' = data, '1' = command). Mask */
#define KBC_EC_KBD_STATUS_UD1_Pos             (4)                                            /**< (KBC_EC_KBD_STATUS) User-defined data. Position */
#define KBC_EC_KBD_STATUS_UD1_Msk             (0x1U << KBC_EC_KBD_STATUS_UD1_Pos)            /**< (KBC_EC_KBD_STATUS) User-defined data. Mask */
#define KBC_EC_KBD_STATUS_AUXOBF_Pos          (5)                                            /**< (KBC_EC_KBD_STATUS) Auxiliary Output Buffer Full. Position */
#define KBC_EC_KBD_STATUS_AUXOBF_Msk          (0x1U << KBC_EC_KBD_STATUS_AUXOBF_Pos)         /**< (KBC_EC_KBD_STATUS) Auxiliary Output Buffer Full. Mask */
#define KBC_EC_KBD_STATUS_UD2_Pos             (6)                                            /**< (KBC_EC_KBD_STATUS) User-defined data. Position */
#define KBC_EC_KBD_STATUS_UD2_Msk             (0x3U << KBC_EC_KBD_STATUS_UD2_Pos)            /**< (KBC_EC_KBD_STATUS) User-defined data. Mask */
#define KBC_EC_KBD_STATUS_UD2(value)          (KBC_EC_KBD_STATUS_UD2_Msk & ((value) << KBC_EC_KBD_STATUS_UD2_Pos))
#define KBC_EC_KBD_STATUS_Msk                 (0x000000FFUL)                                 /**< (KBC_EC_KBD_STATUS) Register Mask  */

/* -------- KBC_CONTROL : (KBC Offset: 0x108) (R/W 8) Keyboard Control Register -------- */

typedef union
{
  struct
  {
    uint8_t  UD3:1;                     /**< bit:      0  User-defined data.                            */
    uint8_t  SAEN:1;                    /**< bit:      1  Software-assist enable. 1=This bit allows control of the GATEA20 signal via firmware\n      0=GATEA20 corresponds to either the last Host-initiated control of GATEA20 or the firmware write to the Keyboard Control Register or the EC AUX Data Register. */
    uint8_t  PCOBFEN:1;                 /**< bit:      2  1= reflects the value written to the PCOBF Register, 0=PCOBF reflects the status of writes to the EC Data Register */
    uint8_t  UD4:2;                     /**< bit:   3..4  User-defined data.                            */
    uint8_t  OBFEN:1;                   /**< bit:      5  When this bit is '1', the system interrupt signal KIRQ is driven by the bit PCOBF and MIRQ is driven by AUXOBF. When this\n      bit is '0', KIRQ and MIRQ are driven low. This bit must not be changed when OBF of the status register is equal to '1'. */
    uint8_t  UD5:1;                     /**< bit:      6  User-defined data.                            */
    uint8_t  AUXH:1;                    /**< bit:      7  AUX in Hardware. 1=AUXOBF of the Keyboard Status Read Register is set in hardware by a write to the EC AUX Data Register\n                0=AUXOBF is not modified in hardware, but can be read and written by the EC using the EC-Only alias of the EC Keyboard Status Register */
  };
  uint8_t  w;
} __KBC_CONTROL_bits_t;
#define KBC_CONTROL_RESETVALUE              (0x00U)                                       /**<  (KBC_CONTROL) Keyboard Control Register  Reset Value */

#define KBC_CONTROL_UD3_Pos                   (0)                                            /**< (KBC_CONTROL) User-defined data. Position */
#define KBC_CONTROL_UD3_Msk                   (0x1U << KBC_CONTROL_UD3_Pos)                  /**< (KBC_CONTROL) User-defined data. Mask */
#define KBC_CONTROL_SAEN_Pos                  (1)                                            /**< (KBC_CONTROL) Software-assist enable. 1=This bit allows control of the GATEA20 signal via firmware\n      0=GATEA20 corresponds to either the last Host-initiated control of GATEA20 or the firmware write to the Keyboard Control Register or the EC AUX Data Register. Position */
#define KBC_CONTROL_SAEN_Msk                  (0x1U << KBC_CONTROL_SAEN_Pos)                 /**< (KBC_CONTROL) Software-assist enable. 1=This bit allows control of the GATEA20 signal via firmware\n      0=GATEA20 corresponds to either the last Host-initiated control of GATEA20 or the firmware write to the Keyboard Control Register or the EC AUX Data Register. Mask */
#define KBC_CONTROL_PCOBFEN_Pos               (2)                                            /**< (KBC_CONTROL) 1= reflects the value written to the PCOBF Register, 0=PCOBF reflects the status of writes to the EC Data Register Position */
#define KBC_CONTROL_PCOBFEN_Msk               (0x1U << KBC_CONTROL_PCOBFEN_Pos)              /**< (KBC_CONTROL) 1= reflects the value written to the PCOBF Register, 0=PCOBF reflects the status of writes to the EC Data Register Mask */
#define KBC_CONTROL_UD4_Pos                   (3)                                            /**< (KBC_CONTROL) User-defined data. Position */
#define KBC_CONTROL_UD4_Msk                   (0x3U << KBC_CONTROL_UD4_Pos)                  /**< (KBC_CONTROL) User-defined data. Mask */
#define KBC_CONTROL_UD4(value)                (KBC_CONTROL_UD4_Msk & ((value) << KBC_CONTROL_UD4_Pos))
#define KBC_CONTROL_OBFEN_Pos                 (5)                                            /**< (KBC_CONTROL) When this bit is '1', the system interrupt signal KIRQ is driven by the bit PCOBF and MIRQ is driven by AUXOBF. When this\n      bit is '0', KIRQ and MIRQ are driven low. This bit must not be changed when OBF of the status register is equal to '1'. Position */
#define KBC_CONTROL_OBFEN_Msk                 (0x1U << KBC_CONTROL_OBFEN_Pos)                /**< (KBC_CONTROL) When this bit is '1', the system interrupt signal KIRQ is driven by the bit PCOBF and MIRQ is driven by AUXOBF. When this\n      bit is '0', KIRQ and MIRQ are driven low. This bit must not be changed when OBF of the status register is equal to '1'. Mask */
#define KBC_CONTROL_UD5_Pos                   (6)                                            /**< (KBC_CONTROL) User-defined data. Position */
#define KBC_CONTROL_UD5_Msk                   (0x1U << KBC_CONTROL_UD5_Pos)                  /**< (KBC_CONTROL) User-defined data. Mask */
#define KBC_CONTROL_AUXH_Pos                  (7)                                            /**< (KBC_CONTROL) AUX in Hardware. 1=AUXOBF of the Keyboard Status Read Register is set in hardware by a write to the EC AUX Data Register\n                0=AUXOBF is not modified in hardware, but can be read and written by the EC using the EC-Only alias of the EC Keyboard Status Register Position */
#define KBC_CONTROL_AUXH_Msk                  (0x1U << KBC_CONTROL_AUXH_Pos)                 /**< (KBC_CONTROL) AUX in Hardware. 1=AUXOBF of the Keyboard Status Read Register is set in hardware by a write to the EC AUX Data Register\n                0=AUXOBF is not modified in hardware, but can be read and written by the EC using the EC-Only alias of the EC Keyboard Status Register Mask */
#define KBC_CONTROL_Msk                       (0x000000FFUL)                                 /**< (KBC_CONTROL) Register Mask  */

/* -------- KBC_EC_AUX_DATA : (KBC Offset: 0x10c) (/W 8) EC_Host Aux Register. This 8-bit register is write-only. When written, the C/D in the Keyboard Status Read Register is cleared\n     to '0', signifying data, and the IBF in the same register is set to '1'. When the Runtime Register at offset 0h is read by the Host, it\n     functions as the EC_HOST Data / AUX Data Register. -------- */

typedef union
{
  uint8_t  w;
} __KBC_EC_AUX_DATA_bits_t;
#define KBC_EC_AUX_DATA_RESETVALUE          (0x00U)                                       /**<  (KBC_EC_AUX_DATA) EC_Host Aux Register. This 8-bit register is write-only. When written, the C/D in the Keyboard Status Read Register is cleared\n     to '0', signifying data, and the IBF in the same register is set to '1'. When the Runtime Register at offset 0h is read by the Host, it\n     functions as the EC_HOST Data / AUX Data Register.  Reset Value */

#define KBC_EC_AUX_DATA_Msk                   (0x00000000UL)                                 /**< (KBC_EC_AUX_DATA) Register Mask  */

/* -------- KBC_PCOBF : (KBC Offset: 0x114) (R/W 8) 8042 Emulated Keyboard Controller PCOBF Register -------- */

typedef union
{
  struct
  {
    uint8_t  PCOBF:1;                   /**< bit:      0  PCOBF Register: If enabled by the bit OBFEN, the bit PCOBF is gated onto KIRQ. The KIRQ signal is a system interrupt\n      which signifies that the EC has written to the HOST2EC Data Register (EC-Only offset 0h). */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __KBC_PCOBF_bits_t;
#define KBC_PCOBF_RESETVALUE                (0x00U)                                       /**<  (KBC_PCOBF) 8042 Emulated Keyboard Controller PCOBF Register  Reset Value */

#define KBC_PCOBF_PCOBF_Pos                   (0)                                            /**< (KBC_PCOBF) PCOBF Register: If enabled by the bit OBFEN, the bit PCOBF is gated onto KIRQ. The KIRQ signal is a system interrupt\n      which signifies that the EC has written to the HOST2EC Data Register (EC-Only offset 0h). Position */
#define KBC_PCOBF_PCOBF_Msk                   (0x1U << KBC_PCOBF_PCOBF_Pos)                  /**< (KBC_PCOBF) PCOBF Register: If enabled by the bit OBFEN, the bit PCOBF is gated onto KIRQ. The KIRQ signal is a system interrupt\n      which signifies that the EC has written to the HOST2EC Data Register (EC-Only offset 0h). Mask */
#define KBC_PCOBF_Msk                         (0x00000001UL)                                 /**< (KBC_PCOBF) Register Mask  */

/* -------- KBC_ACTIVATE : (KBC Offset: 0x330) (R/W 8) Activate Register -------- */

typedef union
{
  struct
  {
    uint8_t  ACTIVATE:1;                /**< bit:      0  1=The 8042 Interface is powered and functional. 0=The 8042 Interface is powered down and inactive. */
    uint8_t  :7;                        /**< bit:   1..7  Reserved                                      */
  };
  uint8_t  w;
} __KBC_ACTIVATE_bits_t;
#define KBC_ACTIVATE_RESETVALUE             (0x00U)                                       /**<  (KBC_ACTIVATE) Activate Register  Reset Value */

#define KBC_ACTIVATE_ACTIVATE_Pos             (0)                                            /**< (KBC_ACTIVATE) 1=The 8042 Interface is powered and functional. 0=The 8042 Interface is powered down and inactive. Position */
#define KBC_ACTIVATE_ACTIVATE_Msk             (0x1U << KBC_ACTIVATE_ACTIVATE_Pos)            /**< (KBC_ACTIVATE) 1=The 8042 Interface is powered and functional. 0=The 8042 Interface is powered down and inactive. Mask */
#define KBC_ACTIVATE_Msk                      (0x00000001UL)                                 /**< (KBC_ACTIVATE) Register Mask  */

/** \brief KBC register offsets definitions */
#define KBC_EC_HOST_DATA_AUX_DATA_OFFSET (0x00)         /**< (KBC_EC_HOST_DATA_AUX_DATA) READ_DATA. This 8-bit register is read-only. When read by the Host, the PCOBF and/or AUXOBF interrupts are cleared and the\n     OBF flag in the status register is cleared. Offset */
#define KBC_HOST_EC_CMD_OFFSET       (0x04)         /**< (KBC_HOST_EC_CMD) WRITE_CMD. This 8-bit register is write-only and is an alias of the register at offset 0h. When written, the C/D bit in the\n     Keyboard Status Read Register is set to '1', signifying a command, and the IBF in the same register is set to '1'. When the Runtime\n     Register at offset 4h is read by the Host, it functions as the Keyboard Status Read Register. Offset */
#define KBC_HOST2EC_DATA_OFFSET      (0x100)        /**< (KBC_HOST2EC_DATA) Host_EC Data/Cmd Register  This register is an alias of the HOST_EC Data / CMD Register. When read at the EC-Only offset\n     of 0h, it returns the data written by the Host to either Runtime Register offset 0h or Runtime Register offset 04h. Offset */
#define KBC_EC_KBD_STATUS_OFFSET     (0x104)        /**< (KBC_EC_KBD_STATUS) Keyboard Status Register Offset */
#define KBC_CONTROL_OFFSET           (0x108)        /**< (KBC_CONTROL) Keyboard Control Register Offset */
#define KBC_EC_AUX_DATA_OFFSET       (0x10C)        /**< (KBC_EC_AUX_DATA) EC_Host Aux Register. This 8-bit register is write-only. When written, the C/D in the Keyboard Status Read Register is cleared\n     to '0', signifying data, and the IBF in the same register is set to '1'. When the Runtime Register at offset 0h is read by the Host, it\n     functions as the EC_HOST Data / AUX Data Register. Offset */
#define KBC_PCOBF_OFFSET             (0x114)        /**< (KBC_PCOBF) 8042 Emulated Keyboard Controller PCOBF Register Offset */
#define KBC_ACTIVATE_OFFSET          (0x330)        /**< (KBC_ACTIVATE) Activate Register Offset */

/** \brief KBC register API structure */
typedef struct
{  /* The keyboard controller uses the EC to produce a superset of the features provided by the\n        industry-standard 8042 keyboard controller. The 8042 Emulated Keyboard Controller is a Host/EC\n     Message Interface with hardware assists to emulate 8042 behavior and provide Legacy GATEA20 support. */
  __I   __KBC_EC_HOST_DATA_AUX_DATA_bits_t EC_HOST_DATA_AUX_DATA; /**< Offset: 0x00 (R/    8) READ_DATA. This 8-bit register is read-only. When read by the Host, the PCOBF and/or AUXOBF interrupts are cleared and the\n     OBF flag in the status register is cleared. */
  __O   __KBC_HOST_EC_DATA_bits_t      HOST_EC_DATA;  /**< Offset: 0x00 ( /W   8) WRITE_DATA. This 8-bit register is write-only. When written, the C/D bit in the Keyboard Status Read Register is cleared\n     to '0', signifying data, and the IBF in the same register is set to '1'. When the Runtime Register at offset 0h is read by the Host,\n     it functions as the EC_HOST Data / AUX Data Register. */
  __O   __KBC_HOST_EC_CMD_bits_t       HOST_EC_CMD;   /**< Offset: 0x04 ( /W   8) WRITE_CMD. This 8-bit register is write-only and is an alias of the register at offset 0h. When written, the C/D bit in the\n     Keyboard Status Read Register is set to '1', signifying a command, and the IBF in the same register is set to '1'. When the Runtime\n     Register at offset 4h is read by the Host, it functions as the Keyboard Status Read Register. */
  __I   __KBC_KBD_STATUS_bits_t        KBD_STATUS;    /**< Offset: 0x04 (R/    8) Keyboard Status Read Register. This register is a read-only alias of the EC Keyboard Status Register. */
  __I   __KBC_HOST2EC_DATA_bits_t      HOST2EC_DATA;  /**< Offset: 0x100 (R/    8) Host_EC Data/Cmd Register  This register is an alias of the HOST_EC Data / CMD Register. When read at the EC-Only offset\n     of 0h, it returns the data written by the Host to either Runtime Register offset 0h or Runtime Register offset 04h. */
  __O   __KBC_EC_DATA_bits_t           EC_DATA;       /**< Offset: 0x100 ( /W   8) EC_Host Data Register */
  __IO  __KBC_EC_KBD_STATUS_bits_t     EC_KBD_STATUS; /**< Offset: 0x104 (R/W   8) Keyboard Status Register */
  __IO  __KBC_CONTROL_bits_t           CONTROL;       /**< Offset: 0x108 (R/W   8) Keyboard Control Register */
  __O   __KBC_EC_AUX_DATA_bits_t       EC_AUX_DATA;   /**< Offset: 0x10C ( /W   8) EC_Host Aux Register. This 8-bit register is write-only. When written, the C/D in the Keyboard Status Read Register is cleared\n     to '0', signifying data, and the IBF in the same register is set to '1'. When the Runtime Register at offset 0h is read by the Host, it\n     functions as the EC_HOST Data / AUX Data Register. */
  __IO  __KBC_PCOBF_bits_t             PCOBF;         /**< Offset: 0x114 (R/W   8) 8042 Emulated Keyboard Controller PCOBF Register */
  __IO  __KBC_ACTIVATE_bits_t          ACTIVATE;      /**< Offset: 0x330 (R/W   8) Activate Register */
} kbc_registers_t;
/** @}  end of The keyboard controller uses the EC to produce a superset of the features provided by the\n        industry-standard 8042 keyboard controller. The 8042 Emulated Keyboard Controller is a Host/EC\n     Message Interface with hardware assists to emulate 8042 behavior and provide Legacy GATEA20 support. */

#endif /* _PIC32CX_0525SG12_KBC_COMPONENT_H_ */
