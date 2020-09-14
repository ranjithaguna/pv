/**
 * \brief Component description for PIC32CX/0525SG12 SGPIO
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
#ifndef _PIC32CX_0525SG12_SGPIO_COMPONENT_H_
#define _PIC32CX_0525SG12_SGPIO_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_SGPIO This is Serial General Purpous Input Output block
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SGPIO */
/* ========================================================================== */

/* -------- SGPIO_CFG : (SGPIO Offset: 0x00) (R/ 8) SGPIO Configuration Register. -------- */

typedef union
{
  struct
  {
    uint8_t  DRIVCNT:4;                 /**< bit:   0..3  This field indicates the number of drives supported in each packet by the         SGPIO_TARGET_SPB block. The number of bits shifted in and out is three times         the value of this field, since there are three LEDs per drive.           This field is hard-coded to 04h. */
    uint8_t  :4;                        /**< bit:   4..7  Reserved                                      */
  };
  uint8_t  w;
} __SGPIO_CFG_bits_t;
#define SGPIO_CFG_RESETVALUE                (0x04U)                                       /**<  (SGPIO_CFG) SGPIO Configuration Register.  Reset Value */

#define SGPIO_CFG_DRIVCNT_Pos                 (0)                                            /**< (SGPIO_CFG) This field indicates the number of drives supported in each packet by the         SGPIO_TARGET_SPB block. The number of bits shifted in and out is three times         the value of this field, since there are three LEDs per drive.           This field is hard-coded to 04h. Position */
#define SGPIO_CFG_DRIVCNT_Msk                 (0xFU << SGPIO_CFG_DRIVCNT_Pos)                /**< (SGPIO_CFG) This field indicates the number of drives supported in each packet by the         SGPIO_TARGET_SPB block. The number of bits shifted in and out is three times         the value of this field, since there are three LEDs per drive.           This field is hard-coded to 04h. Mask */
#define SGPIO_CFG_DRIVCNT(value)              (SGPIO_CFG_DRIVCNT_Msk & ((value) << SGPIO_CFG_DRIVCNT_Pos))
#define SGPIO_CFG_Msk                         (0x0000000FUL)                                 /**< (SGPIO_CFG) Register Mask  */

/* -------- SGPIO_RXOTLD : (SGPIO Offset: 0x04) (R/ 32) This register contains the values received during the last SGPIO transaction. -------- */

typedef union
{
  struct
  {
    uint32_t SGPIO_OUT:12;              /**< bit:  0..11  This field contains the values shifted in from the SGPIO_OUT pin. This field         clears to zero when a link-reset is detected. */
    uint32_t :4;                        /**< bit: 12..15  Reserved                                      */
    uint32_t SGPIO_LOAD:4;              /**< bit: 16..19  This field contains the values shifted in from the SGPIO_LD pin. This field         clears to zero when a link-reset is detected. */
    uint32_t :12;                       /**< bit: 20..31  Reserved                                      */
  };
  uint32_t w;
} __SGPIO_RXOTLD_bits_t;
#define SGPIO_RXOTLD_RESETVALUE             (0x00U)                                       /**<  (SGPIO_RXOTLD) This register contains the values received during the last SGPIO transaction.  Reset Value */

#define SGPIO_RXOTLD_SGPIO_OUT_Pos            (0)                                            /**< (SGPIO_RXOTLD) This field contains the values shifted in from the SGPIO_OUT pin. This field         clears to zero when a link-reset is detected. Position */
#define SGPIO_RXOTLD_SGPIO_OUT_Msk            (0xFFFU << SGPIO_RXOTLD_SGPIO_OUT_Pos)         /**< (SGPIO_RXOTLD) This field contains the values shifted in from the SGPIO_OUT pin. This field         clears to zero when a link-reset is detected. Mask */
#define SGPIO_RXOTLD_SGPIO_OUT(value)         (SGPIO_RXOTLD_SGPIO_OUT_Msk & ((value) << SGPIO_RXOTLD_SGPIO_OUT_Pos))
#define SGPIO_RXOTLD_SGPIO_LOAD_Pos           (16)                                           /**< (SGPIO_RXOTLD) This field contains the values shifted in from the SGPIO_LD pin. This field         clears to zero when a link-reset is detected. Position */
#define SGPIO_RXOTLD_SGPIO_LOAD_Msk           (0xFU << SGPIO_RXOTLD_SGPIO_LOAD_Pos)          /**< (SGPIO_RXOTLD) This field contains the values shifted in from the SGPIO_LD pin. This field         clears to zero when a link-reset is detected. Mask */
#define SGPIO_RXOTLD_SGPIO_LOAD(value)        (SGPIO_RXOTLD_SGPIO_LOAD_Msk & ((value) << SGPIO_RXOTLD_SGPIO_LOAD_Pos))
#define SGPIO_RXOTLD_Msk                      (0x000F0FFFUL)                                 /**< (SGPIO_RXOTLD) Register Mask  */

/* -------- SGPIO_TXIN : (SGPIO Offset: 0x08) (R/W 32) This register contains the values to be transmitted during the next SGPIO transaction. -------- */

typedef union
{
  struct
  {
    uint32_t TXIN:12;                   /**< bit:  0..11  This register contains the values to be transmitted during the next SGPIO transaction. */
    uint32_t :20;                       /**< bit: 12..31  Reserved                                      */
  };
  uint32_t w;
} __SGPIO_TXIN_bits_t;
#define SGPIO_TXIN_RESETVALUE               (0x00U)                                       /**<  (SGPIO_TXIN) This register contains the values to be transmitted during the next SGPIO transaction.  Reset Value */

#define SGPIO_TXIN_TXIN_Pos                   (0)                                            /**< (SGPIO_TXIN) This register contains the values to be transmitted during the next SGPIO transaction. Position */
#define SGPIO_TXIN_TXIN_Msk                   (0xFFFU << SGPIO_TXIN_TXIN_Pos)                /**< (SGPIO_TXIN) This register contains the values to be transmitted during the next SGPIO transaction. Mask */
#define SGPIO_TXIN_TXIN(value)                (SGPIO_TXIN_TXIN_Msk & ((value) << SGPIO_TXIN_TXIN_Pos))
#define SGPIO_TXIN_Msk                        (0x00000FFFUL)                                 /**< (SGPIO_TXIN) Register Mask  */

/* -------- SGPIO_STAT : (SGPIO Offset: 0x0c) (R/W 8) This register contains the SPIO status. -------- */

typedef union
{
  struct
  {
    uint8_t  EOF_STATUS:1;              /**< bit:      0  This field is set by the hardware whenever a SGPIO frame has finished shifting on the         bus. This field is cleared by F/W writing a 1. This is R/WC */
    uint8_t  LNKRST_STATUS:1;           /**< bit:      1  This field is set by the hardware whenever the SGPIO pins have been detected high for         atleast 64ms. This field is cleared by F/W writing a 1. This is R/WC */
    uint8_t  :6;                        /**< bit:   2..7  Reserved                                      */
  };
  uint8_t  w;
} __SGPIO_STAT_bits_t;
#define SGPIO_STAT_RESETVALUE               (0x00U)                                       /**<  (SGPIO_STAT) This register contains the SPIO status.  Reset Value */

#define SGPIO_STAT_EOF_STATUS_Pos             (0)                                            /**< (SGPIO_STAT) This field is set by the hardware whenever a SGPIO frame has finished shifting on the         bus. This field is cleared by F/W writing a 1. This is R/WC Position */
#define SGPIO_STAT_EOF_STATUS_Msk             (0x1U << SGPIO_STAT_EOF_STATUS_Pos)            /**< (SGPIO_STAT) This field is set by the hardware whenever a SGPIO frame has finished shifting on the         bus. This field is cleared by F/W writing a 1. This is R/WC Mask */
#define SGPIO_STAT_LNKRST_STATUS_Pos          (1)                                            /**< (SGPIO_STAT) This field is set by the hardware whenever the SGPIO pins have been detected high for         atleast 64ms. This field is cleared by F/W writing a 1. This is R/WC Position */
#define SGPIO_STAT_LNKRST_STATUS_Msk          (0x1U << SGPIO_STAT_LNKRST_STATUS_Pos)         /**< (SGPIO_STAT) This field is set by the hardware whenever the SGPIO pins have been detected high for         atleast 64ms. This field is cleared by F/W writing a 1. This is R/WC Mask */
#define SGPIO_STAT_Msk                        (0x00000003UL)                                 /**< (SGPIO_STAT) Register Mask  */

/* -------- SGPIO_EN : (SGPIO Offset: 0x10) (R/W 8) This is register SPIO Enable Register. -------- */

typedef union
{
  struct
  {
    uint8_t  SGPIO_EOF:1;               /**< bit:      0  When this bit is set and sts_eof is asserted by the h/w, an interrupt is thrown to         the processor. */
    uint8_t  SGPIO_LNKRST:1;            /**< bit:      1  When this bit is set and sts_link_reset is asserted by the h/w, an interrupt is         thrown to the processor. */
    uint8_t  :6;                        /**< bit:   2..7  Reserved                                      */
  };
  uint8_t  w;
} __SGPIO_EN_bits_t;
#define SGPIO_EN_RESETVALUE                 (0x00U)                                       /**<  (SGPIO_EN) This is register SPIO Enable Register.  Reset Value */

#define SGPIO_EN_SGPIO_EOF_Pos                (0)                                            /**< (SGPIO_EN) When this bit is set and sts_eof is asserted by the h/w, an interrupt is thrown to         the processor. Position */
#define SGPIO_EN_SGPIO_EOF_Msk                (0x1U << SGPIO_EN_SGPIO_EOF_Pos)               /**< (SGPIO_EN) When this bit is set and sts_eof is asserted by the h/w, an interrupt is thrown to         the processor. Mask */
#define SGPIO_EN_SGPIO_LNKRST_Pos             (1)                                            /**< (SGPIO_EN) When this bit is set and sts_link_reset is asserted by the h/w, an interrupt is         thrown to the processor. Position */
#define SGPIO_EN_SGPIO_LNKRST_Msk             (0x1U << SGPIO_EN_SGPIO_LNKRST_Pos)            /**< (SGPIO_EN) When this bit is set and sts_link_reset is asserted by the h/w, an interrupt is         thrown to the processor. Mask */
#define SGPIO_EN_Msk                          (0x00000003UL)                                 /**< (SGPIO_EN) Register Mask  */

/* -------- SGPIO_CTRL : (SGPIO Offset: 0x14) (R/W 8) This is the SPIO Control Register. -------- */

typedef union
{
  struct
  {
    uint8_t  SGPIOEN:1;                 /**< bit:      0  When this bit is set to one, the SGPIO_TARGET_SPB block will be enabled. */
    uint8_t  SGPIO_SFTRST:1;            /**< bit:      1  When this bit is set to one, the SGPIO_TARGET_SPB block will reset. This         bit is self clearing. This field is auto cleared by hardware. */
    uint8_t  SGPIO_FLTREN:1;            /**< bit:      2  When this bit is set to one, analog filters will be used to remove up to         50ns glitches on SGPIO_CLK, SGPIO_DOUT, and SGPIO_LD. */
    uint8_t  :5;                        /**< bit:   3..7  Reserved                                      */
  };
  uint8_t  w;
} __SGPIO_CTRL_bits_t;
#define SGPIO_CTRL_RESETVALUE               (0x00U)                                       /**<  (SGPIO_CTRL) This is the SPIO Control Register.  Reset Value */

#define SGPIO_CTRL_SGPIOEN_Pos                (0)                                            /**< (SGPIO_CTRL) When this bit is set to one, the SGPIO_TARGET_SPB block will be enabled. Position */
#define SGPIO_CTRL_SGPIOEN_Msk                (0x1U << SGPIO_CTRL_SGPIOEN_Pos)               /**< (SGPIO_CTRL) When this bit is set to one, the SGPIO_TARGET_SPB block will be enabled. Mask */
#define SGPIO_CTRL_SGPIO_SFTRST_Pos           (1)                                            /**< (SGPIO_CTRL) When this bit is set to one, the SGPIO_TARGET_SPB block will reset. This         bit is self clearing. This field is auto cleared by hardware. Position */
#define SGPIO_CTRL_SGPIO_SFTRST_Msk           (0x1U << SGPIO_CTRL_SGPIO_SFTRST_Pos)          /**< (SGPIO_CTRL) When this bit is set to one, the SGPIO_TARGET_SPB block will reset. This         bit is self clearing. This field is auto cleared by hardware. Mask */
#define SGPIO_CTRL_SGPIO_FLTREN_Pos           (2)                                            /**< (SGPIO_CTRL) When this bit is set to one, analog filters will be used to remove up to         50ns glitches on SGPIO_CLK, SGPIO_DOUT, and SGPIO_LD. Position */
#define SGPIO_CTRL_SGPIO_FLTREN_Msk           (0x1U << SGPIO_CTRL_SGPIO_FLTREN_Pos)          /**< (SGPIO_CTRL) When this bit is set to one, analog filters will be used to remove up to         50ns glitches on SGPIO_CLK, SGPIO_DOUT, and SGPIO_LD. Mask */
#define SGPIO_CTRL_Msk                        (0x00000007UL)                                 /**< (SGPIO_CTRL) Register Mask  */

/** \brief SGPIO register offsets definitions */
#define SGPIO_CFG_OFFSET             (0x00)         /**< (SGPIO_CFG) SGPIO Configuration Register. Offset */
#define SGPIO_RXOTLD_OFFSET          (0x04)         /**< (SGPIO_RXOTLD) This register contains the values received during the last SGPIO transaction. Offset */
#define SGPIO_TXIN_OFFSET            (0x08)         /**< (SGPIO_TXIN) This register contains the values to be transmitted during the next SGPIO transaction. Offset */
#define SGPIO_STAT_OFFSET            (0x0C)         /**< (SGPIO_STAT) This register contains the SPIO status. Offset */
#define SGPIO_EN_OFFSET              (0x10)         /**< (SGPIO_EN) This is register SPIO Enable Register. Offset */
#define SGPIO_CTRL_OFFSET            (0x14)         /**< (SGPIO_CTRL) This is the SPIO Control Register. Offset */

/** \brief SGPIO register API structure */
typedef struct
{  /* This is Serial General Purpous Input Output block */
  __I   __SGPIO_CFG_bits_t             SGPIO_CFG;     /**< Offset: 0x00 (R/    8) SGPIO Configuration Register. */
  __I   __SGPIO_RXOTLD_bits_t          SGPIO_RXOTLD;  /**< Offset: 0x04 (R/   32) This register contains the values received during the last SGPIO transaction. */
  __IO  __SGPIO_TXIN_bits_t            SGPIO_TXIN;    /**< Offset: 0x08 (R/W  32) This register contains the values to be transmitted during the next SGPIO transaction. */
  __IO  __SGPIO_STAT_bits_t            SGPIO_STAT;    /**< Offset: 0x0C (R/W   8) This register contains the SPIO status. */
  __IO  __SGPIO_EN_bits_t              SGPIO_EN;      /**< Offset: 0x10 (R/W   8) This is register SPIO Enable Register. */
  __IO  __SGPIO_CTRL_bits_t            SGPIO_CTRL;    /**< Offset: 0x14 (R/W   8) This is the SPIO Control Register. */
} sgpio_registers_t;
/** @}  end of This is Serial General Purpous Input Output block */

#endif /* _PIC32CX_0525SG12_SGPIO_COMPONENT_H_ */
