/**
 * \brief Component description for PIC32CX/0525SG12 PM1
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
#ifndef _PIC32CX_0525SG12_PM1_COMPONENT_H_
#define _PIC32CX_0525SG12_PM1_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_PM1 The device implements the ACPI fixed registers but includes only those bits\n that apply to the power button\n    sleep button and RTC alarm events. The ACPI WAK_STS, SLP_TYP and SLP_EN bits are also supported.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PM1 */
/* ========================================================================== */

/* -------- PM1_STS2 : (PM1 Offset: 0x01) (R/W 8) PM1 Status 2 -------- */

typedef union
{
  struct
  {
    uint8_t  PWRBTN_STS:1;              /**< bit:      0  This bit can be set or cleared by the EC to simulate a Power button status if the power is controlled by the EC.\n      The Host writing a one to this bit can also clear this bit. The EC must generate the associated SCI interrupt under software control. (R/WC) */
    uint8_t  SLPBTN_STS:1;              /**< bit:      1  This bit can be set or cleared by the EC to simulate a Sleep button status if the sleep state is controlled by\n      the EC. The Host writing a one to this bit can also clear this bit. The EC must generate the associated SCI interrupt under software\n      control.(R/WC) */
    uint8_t  RTC_STS:1;                 /**< bit:      2  This bit can be set or cleared by the EC to simulate a RTC status. The Host writing a one to this bit can also\n      clear this bit. The EC must generate the associated SCI interrupt under software control. (R/WC) */
    uint8_t  PWRBTNOR_STS:1;            /**< bit:      3  This bit can be set or cleared by the EC to simulate a Power button override event status if the power\n      is controlled by the EC. The Host writing a one to this bit can also clear this bit. The EC must generate the associated hardware\n      event under software control.(R/WC) */
    uint8_t  :3;                        /**< bit:   4..6  Reserved                                      */
    uint8_t  WAK_STS:1;                 /**< bit:      7  This bit can be set or cleared by the EC. The Host writing a one to this bit can also clear this bit. (R/WC) */
  };
  uint8_t  w;
} __PM1_STS2_bits_t;
#define PM1_STS2_RESETVALUE                 (0x00U)                                       /**<  (PM1_STS2) PM1 Status 2  Reset Value */

#define PM1_STS2_PWRBTN_STS_Pos               (0)                                            /**< (PM1_STS2) This bit can be set or cleared by the EC to simulate a Power button status if the power is controlled by the EC.\n      The Host writing a one to this bit can also clear this bit. The EC must generate the associated SCI interrupt under software control. (R/WC) Position */
#define PM1_STS2_PWRBTN_STS_Msk               (0x1U << PM1_STS2_PWRBTN_STS_Pos)              /**< (PM1_STS2) This bit can be set or cleared by the EC to simulate a Power button status if the power is controlled by the EC.\n      The Host writing a one to this bit can also clear this bit. The EC must generate the associated SCI interrupt under software control. (R/WC) Mask */
#define PM1_STS2_SLPBTN_STS_Pos               (1)                                            /**< (PM1_STS2) This bit can be set or cleared by the EC to simulate a Sleep button status if the sleep state is controlled by\n      the EC. The Host writing a one to this bit can also clear this bit. The EC must generate the associated SCI interrupt under software\n      control.(R/WC) Position */
#define PM1_STS2_SLPBTN_STS_Msk               (0x1U << PM1_STS2_SLPBTN_STS_Pos)              /**< (PM1_STS2) This bit can be set or cleared by the EC to simulate a Sleep button status if the sleep state is controlled by\n      the EC. The Host writing a one to this bit can also clear this bit. The EC must generate the associated SCI interrupt under software\n      control.(R/WC) Mask */
#define PM1_STS2_RTC_STS_Pos                  (2)                                            /**< (PM1_STS2) This bit can be set or cleared by the EC to simulate a RTC status. The Host writing a one to this bit can also\n      clear this bit. The EC must generate the associated SCI interrupt under software control. (R/WC) Position */
#define PM1_STS2_RTC_STS_Msk                  (0x1U << PM1_STS2_RTC_STS_Pos)                 /**< (PM1_STS2) This bit can be set or cleared by the EC to simulate a RTC status. The Host writing a one to this bit can also\n      clear this bit. The EC must generate the associated SCI interrupt under software control. (R/WC) Mask */
#define PM1_STS2_PWRBTNOR_STS_Pos             (3)                                            /**< (PM1_STS2) This bit can be set or cleared by the EC to simulate a Power button override event status if the power\n      is controlled by the EC. The Host writing a one to this bit can also clear this bit. The EC must generate the associated hardware\n      event under software control.(R/WC) Position */
#define PM1_STS2_PWRBTNOR_STS_Msk             (0x1U << PM1_STS2_PWRBTNOR_STS_Pos)            /**< (PM1_STS2) This bit can be set or cleared by the EC to simulate a Power button override event status if the power\n      is controlled by the EC. The Host writing a one to this bit can also clear this bit. The EC must generate the associated hardware\n      event under software control.(R/WC) Mask */
#define PM1_STS2_WAK_STS_Pos                  (7)                                            /**< (PM1_STS2) This bit can be set or cleared by the EC. The Host writing a one to this bit can also clear this bit. (R/WC) Position */
#define PM1_STS2_WAK_STS_Msk                  (0x1U << PM1_STS2_WAK_STS_Pos)                 /**< (PM1_STS2) This bit can be set or cleared by the EC. The Host writing a one to this bit can also clear this bit. (R/WC) Mask */
#define PM1_STS2_Msk                          (0x0000008FUL)                                 /**< (PM1_STS2) Register Mask  */

/* -------- PM1_EN2 : (PM1 Offset: 0x03) (R/W 8) PM1 Enable 2 -------- */

typedef union
{
  struct
  {
    uint8_t  PWRBTN_EN:1;               /**< bit:      0  This bit can be read or written by the Host. It can be read by the EC. */
    uint8_t  SLPBTN_EN:1;               /**< bit:      1  This bit can be read or written by the Host. It can be read by the EC. */
    uint8_t  RTC_EN:1;                  /**< bit:      2  This bit can be read or written by the Host. It can be read by the EC. */
    uint8_t  :5;                        /**< bit:   3..7  Reserved                                      */
  };
  uint8_t  w;
} __PM1_EN2_bits_t;
#define PM1_EN2_RESETVALUE                  (0x00U)                                       /**<  (PM1_EN2) PM1 Enable 2  Reset Value */

#define PM1_EN2_PWRBTN_EN_Pos                 (0)                                            /**< (PM1_EN2) This bit can be read or written by the Host. It can be read by the EC. Position */
#define PM1_EN2_PWRBTN_EN_Msk                 (0x1U << PM1_EN2_PWRBTN_EN_Pos)                /**< (PM1_EN2) This bit can be read or written by the Host. It can be read by the EC. Mask */
#define PM1_EN2_SLPBTN_EN_Pos                 (1)                                            /**< (PM1_EN2) This bit can be read or written by the Host. It can be read by the EC. Position */
#define PM1_EN2_SLPBTN_EN_Msk                 (0x1U << PM1_EN2_SLPBTN_EN_Pos)                /**< (PM1_EN2) This bit can be read or written by the Host. It can be read by the EC. Mask */
#define PM1_EN2_RTC_EN_Pos                    (2)                                            /**< (PM1_EN2) This bit can be read or written by the Host. It can be read by the EC. Position */
#define PM1_EN2_RTC_EN_Msk                    (0x1U << PM1_EN2_RTC_EN_Pos)                   /**< (PM1_EN2) This bit can be read or written by the Host. It can be read by the EC. Mask */
#define PM1_EN2_Msk                           (0x00000007UL)                                 /**< (PM1_EN2) Register Mask  */

/* -------- PM1_CTRL2 : (PM1 Offset: 0x05) (R/W 8) PM1 Control 2 -------- */

typedef union
{
  struct
  {
    uint8_t  :1;                        /**< bit:      0  Reserved                                      */
    uint8_t  PWRBTNOR_EN:1;             /**< bit:      1  This bit can be set or cleared by the Host, read by the EC. */
    uint8_t  SLP_TYP:3;                 /**< bit:   2..4  These bits can be set or cleared by the Host, read by the EC. */
    uint8_t  SLP_EN:1;                  /**< bit:      5  SLP_EN                                        */
    uint8_t  :2;                        /**< bit:   6..7  Reserved                                      */
  };
  uint8_t  w;
} __PM1_CTRL2_bits_t;
#define PM1_CTRL2_RESETVALUE                (0x00U)                                       /**<  (PM1_CTRL2) PM1 Control 2  Reset Value */

#define PM1_CTRL2_PWRBTNOR_EN_Pos             (1)                                            /**< (PM1_CTRL2) This bit can be set or cleared by the Host, read by the EC. Position */
#define PM1_CTRL2_PWRBTNOR_EN_Msk             (0x1U << PM1_CTRL2_PWRBTNOR_EN_Pos)            /**< (PM1_CTRL2) This bit can be set or cleared by the Host, read by the EC. Mask */
#define PM1_CTRL2_SLP_TYP_Pos                 (2)                                            /**< (PM1_CTRL2) These bits can be set or cleared by the Host, read by the EC. Position */
#define PM1_CTRL2_SLP_TYP_Msk                 (0x7U << PM1_CTRL2_SLP_TYP_Pos)                /**< (PM1_CTRL2) These bits can be set or cleared by the Host, read by the EC. Mask */
#define PM1_CTRL2_SLP_TYP(value)              (PM1_CTRL2_SLP_TYP_Msk & ((value) << PM1_CTRL2_SLP_TYP_Pos))
#define PM1_CTRL2_SLP_EN_Pos                  (5)                                            /**< (PM1_CTRL2) SLP_EN Position */
#define PM1_CTRL2_SLP_EN_Msk                  (0x1U << PM1_CTRL2_SLP_EN_Pos)                 /**< (PM1_CTRL2) SLP_EN Mask */
#define PM1_CTRL2_Msk                         (0x0000003EUL)                                 /**< (PM1_CTRL2) Register Mask  */

/* -------- PM1_STS_2 : (PM1 Offset: 0x101) (R/W 8) PM1 Status 2 -------- */

typedef union
{
  struct
  {
    uint8_t  PWRBTN_STS:1;              /**< bit:      0  This bit can be set or cleared by the EC to simulate a Power button status if the power is controlled by the EC.\n      The Host writing a one to this bit can also clear this bit. The EC must generate the associated SCI interrupt under software control. (R/WC) */
    uint8_t  SLPBTN_STS:1;              /**< bit:      1  This bit can be set or cleared by the EC to simulate a Sleep button status if the sleep state is controlled by\n      the EC. The Host writing a one to this bit can also clear this bit. The EC must generate the associated SCI interrupt under software\n      control.(R/WC) */
    uint8_t  RTC_STS:1;                 /**< bit:      2  This bit can be set or cleared by the EC to simulate a RTC status. The Host writing a one to this bit can also\n      clear this bit. The EC must generate the associated SCI interrupt under software control. (R/WC) */
    uint8_t  PWRBTNOR_STS:1;            /**< bit:      3  This bit can be set or cleared by the EC to simulate a Power button override event status if the power\n      is controlled by the EC. The Host writing a one to this bit can also clear this bit. The EC must generate the associated hardware\n      event under software control.(R/WC) */
    uint8_t  :3;                        /**< bit:   4..6  Reserved                                      */
    uint8_t  WAK_STS:1;                 /**< bit:      7  This bit can be set or cleared by the EC. The Host writing a one to this bit can also clear this bit. (R/WC) */
  };
  uint8_t  w;
} __PM1_STS_2_bits_t;
#define PM1_STS_2_RESETVALUE                (0x00U)                                       /**<  (PM1_STS_2) PM1 Status 2  Reset Value */

#define PM1_STS_2_PWRBTN_STS_Pos              (0)                                            /**< (PM1_STS_2) This bit can be set or cleared by the EC to simulate a Power button status if the power is controlled by the EC.\n      The Host writing a one to this bit can also clear this bit. The EC must generate the associated SCI interrupt under software control. (R/WC) Position */
#define PM1_STS_2_PWRBTN_STS_Msk              (0x1U << PM1_STS_2_PWRBTN_STS_Pos)             /**< (PM1_STS_2) This bit can be set or cleared by the EC to simulate a Power button status if the power is controlled by the EC.\n      The Host writing a one to this bit can also clear this bit. The EC must generate the associated SCI interrupt under software control. (R/WC) Mask */
#define PM1_STS_2_SLPBTN_STS_Pos              (1)                                            /**< (PM1_STS_2) This bit can be set or cleared by the EC to simulate a Sleep button status if the sleep state is controlled by\n      the EC. The Host writing a one to this bit can also clear this bit. The EC must generate the associated SCI interrupt under software\n      control.(R/WC) Position */
#define PM1_STS_2_SLPBTN_STS_Msk              (0x1U << PM1_STS_2_SLPBTN_STS_Pos)             /**< (PM1_STS_2) This bit can be set or cleared by the EC to simulate a Sleep button status if the sleep state is controlled by\n      the EC. The Host writing a one to this bit can also clear this bit. The EC must generate the associated SCI interrupt under software\n      control.(R/WC) Mask */
#define PM1_STS_2_RTC_STS_Pos                 (2)                                            /**< (PM1_STS_2) This bit can be set or cleared by the EC to simulate a RTC status. The Host writing a one to this bit can also\n      clear this bit. The EC must generate the associated SCI interrupt under software control. (R/WC) Position */
#define PM1_STS_2_RTC_STS_Msk                 (0x1U << PM1_STS_2_RTC_STS_Pos)                /**< (PM1_STS_2) This bit can be set or cleared by the EC to simulate a RTC status. The Host writing a one to this bit can also\n      clear this bit. The EC must generate the associated SCI interrupt under software control. (R/WC) Mask */
#define PM1_STS_2_PWRBTNOR_STS_Pos            (3)                                            /**< (PM1_STS_2) This bit can be set or cleared by the EC to simulate a Power button override event status if the power\n      is controlled by the EC. The Host writing a one to this bit can also clear this bit. The EC must generate the associated hardware\n      event under software control.(R/WC) Position */
#define PM1_STS_2_PWRBTNOR_STS_Msk            (0x1U << PM1_STS_2_PWRBTNOR_STS_Pos)           /**< (PM1_STS_2) This bit can be set or cleared by the EC to simulate a Power button override event status if the power\n      is controlled by the EC. The Host writing a one to this bit can also clear this bit. The EC must generate the associated hardware\n      event under software control.(R/WC) Mask */
#define PM1_STS_2_WAK_STS_Pos                 (7)                                            /**< (PM1_STS_2) This bit can be set or cleared by the EC. The Host writing a one to this bit can also clear this bit. (R/WC) Position */
#define PM1_STS_2_WAK_STS_Msk                 (0x1U << PM1_STS_2_WAK_STS_Pos)                /**< (PM1_STS_2) This bit can be set or cleared by the EC. The Host writing a one to this bit can also clear this bit. (R/WC) Mask */
#define PM1_STS_2_Msk                         (0x0000008FUL)                                 /**< (PM1_STS_2) Register Mask  */

/* -------- PM1_EN_2 : (PM1 Offset: 0x103) (R/W 8) PM1 Enable 2 -------- */

typedef union
{
  struct
  {
    uint8_t  PWRBTN_EN:1;               /**< bit:      0  This bit can be read or written by the Host. It can be read by the EC. */
    uint8_t  SLPBTN_EN:1;               /**< bit:      1  This bit can be read or written by the Host. It can be read by the EC. */
    uint8_t  RTC_EN:1;                  /**< bit:      2  This bit can be read or written by the Host. It can be read by the EC. */
    uint8_t  :5;                        /**< bit:   3..7  Reserved                                      */
  };
  uint8_t  w;
} __PM1_EN_2_bits_t;
#define PM1_EN_2_RESETVALUE                 (0x00U)                                       /**<  (PM1_EN_2) PM1 Enable 2  Reset Value */

#define PM1_EN_2_PWRBTN_EN_Pos                (0)                                            /**< (PM1_EN_2) This bit can be read or written by the Host. It can be read by the EC. Position */
#define PM1_EN_2_PWRBTN_EN_Msk                (0x1U << PM1_EN_2_PWRBTN_EN_Pos)               /**< (PM1_EN_2) This bit can be read or written by the Host. It can be read by the EC. Mask */
#define PM1_EN_2_SLPBTN_EN_Pos                (1)                                            /**< (PM1_EN_2) This bit can be read or written by the Host. It can be read by the EC. Position */
#define PM1_EN_2_SLPBTN_EN_Msk                (0x1U << PM1_EN_2_SLPBTN_EN_Pos)               /**< (PM1_EN_2) This bit can be read or written by the Host. It can be read by the EC. Mask */
#define PM1_EN_2_RTC_EN_Pos                   (2)                                            /**< (PM1_EN_2) This bit can be read or written by the Host. It can be read by the EC. Position */
#define PM1_EN_2_RTC_EN_Msk                   (0x1U << PM1_EN_2_RTC_EN_Pos)                  /**< (PM1_EN_2) This bit can be read or written by the Host. It can be read by the EC. Mask */
#define PM1_EN_2_Msk                          (0x00000007UL)                                 /**< (PM1_EN_2) Register Mask  */

/* -------- PM1_CTRL_2 : (PM1 Offset: 0x105) (R/W 8) PM1 Control 2 -------- */

typedef union
{
  struct
  {
    uint8_t  :1;                        /**< bit:      0  Reserved                                      */
    uint8_t  PWRBTNOR_EN:1;             /**< bit:      1  This bit can be set or cleared by the Host, read by the EC. */
    uint8_t  SLP_TYP:3;                 /**< bit:   2..4  These bits can be set or cleared by the Host, read by the EC. */
    uint8_t  SLP_EN:1;                  /**< bit:      5  SLP_EN                                        */
    uint8_t  :2;                        /**< bit:   6..7  Reserved                                      */
  };
  uint8_t  w;
} __PM1_CTRL_2_bits_t;
#define PM1_CTRL_2_RESETVALUE               (0x00U)                                       /**<  (PM1_CTRL_2) PM1 Control 2  Reset Value */

#define PM1_CTRL_2_PWRBTNOR_EN_Pos            (1)                                            /**< (PM1_CTRL_2) This bit can be set or cleared by the Host, read by the EC. Position */
#define PM1_CTRL_2_PWRBTNOR_EN_Msk            (0x1U << PM1_CTRL_2_PWRBTNOR_EN_Pos)           /**< (PM1_CTRL_2) This bit can be set or cleared by the Host, read by the EC. Mask */
#define PM1_CTRL_2_SLP_TYP_Pos                (2)                                            /**< (PM1_CTRL_2) These bits can be set or cleared by the Host, read by the EC. Position */
#define PM1_CTRL_2_SLP_TYP_Msk                (0x7U << PM1_CTRL_2_SLP_TYP_Pos)               /**< (PM1_CTRL_2) These bits can be set or cleared by the Host, read by the EC. Mask */
#define PM1_CTRL_2_SLP_TYP(value)             (PM1_CTRL_2_SLP_TYP_Msk & ((value) << PM1_CTRL_2_SLP_TYP_Pos))
#define PM1_CTRL_2_SLP_EN_Pos                 (5)                                            /**< (PM1_CTRL_2) SLP_EN Position */
#define PM1_CTRL_2_SLP_EN_Msk                 (0x1U << PM1_CTRL_2_SLP_EN_Pos)                /**< (PM1_CTRL_2) SLP_EN Mask */
#define PM1_CTRL_2_Msk                        (0x0000003EUL)                                 /**< (PM1_CTRL_2) Register Mask  */

/* -------- PM1_PM_STS : (PM1 Offset: 0x110) (R/W 8) PM1 EC PM Status -------- */

typedef union
{
  struct
  {
    uint8_t  EC_SCI_STS:1;              /**< bit:      0  If the EC_SCI_STS bit is '1', an interrupt is generated on the EC_SCI# pin. */
    uint8_t  UD:7;                      /**< bit:   1..7  User Defined                                  */
  };
  uint8_t  w;
} __PM1_PM_STS_bits_t;
#define PM1_PM_STS_RESETVALUE               (0x00U)                                       /**<  (PM1_PM_STS) PM1 EC PM Status  Reset Value */

#define PM1_PM_STS_EC_SCI_STS_Pos             (0)                                            /**< (PM1_PM_STS) If the EC_SCI_STS bit is '1', an interrupt is generated on the EC_SCI# pin. Position */
#define PM1_PM_STS_EC_SCI_STS_Msk             (0x1U << PM1_PM_STS_EC_SCI_STS_Pos)            /**< (PM1_PM_STS) If the EC_SCI_STS bit is '1', an interrupt is generated on the EC_SCI# pin. Mask */
#define PM1_PM_STS_UD_Pos                     (1)                                            /**< (PM1_PM_STS) User Defined Position */
#define PM1_PM_STS_UD_Msk                     (0x7FU << PM1_PM_STS_UD_Pos)                   /**< (PM1_PM_STS) User Defined Mask */
#define PM1_PM_STS_UD(value)                  (PM1_PM_STS_UD_Msk & ((value) << PM1_PM_STS_UD_Pos))
#define PM1_PM_STS_Msk                        (0x000000FFUL)                                 /**< (PM1_PM_STS) Register Mask  */

/** \brief PM1 register offsets definitions */
#define PM1_STS2_OFFSET              (0x01)         /**< (PM1_STS2) PM1 Status 2 Offset */
#define PM1_EN2_OFFSET               (0x03)         /**< (PM1_EN2) PM1 Enable 2 Offset */
#define PM1_CTRL2_OFFSET             (0x05)         /**< (PM1_CTRL2) PM1 Control 2 Offset */
#define PM1_STS_2_OFFSET             (0x101)        /**< (PM1_STS_2) PM1 Status 2 Offset */
#define PM1_EN_2_OFFSET              (0x103)        /**< (PM1_EN_2) PM1 Enable 2 Offset */
#define PM1_CTRL_2_OFFSET            (0x105)        /**< (PM1_CTRL_2) PM1 Control 2 Offset */
#define PM1_PM_STS_OFFSET            (0x110)        /**< (PM1_PM_STS) PM1 EC PM Status Offset */

/** \brief PM1 register API structure */
typedef struct
{  /* The device implements the ACPI fixed registers but includes only those bits\n that apply to the power button\n    sleep button and RTC alarm events. The ACPI WAK_STS, SLP_TYP and SLP_EN bits are also supported. */
  __IO  __PM1_STS2_bits_t              PM1_STS2;      /**< Offset: 0x01 (R/W   8) PM1 Status 2 */
  __IO  __PM1_EN2_bits_t               PM1_EN2;       /**< Offset: 0x03 (R/W   8) PM1 Enable 2 */
  __IO  __PM1_CTRL2_bits_t             PM1_CTRL2;     /**< Offset: 0x05 (R/W   8) PM1 Control 2 */
  __IO  __PM1_STS_2_bits_t             PM1_STS_2;     /**< Offset: 0x101 (R/W   8) PM1 Status 2 */
  __IO  __PM1_EN_2_bits_t              PM1_EN_2;      /**< Offset: 0x103 (R/W   8) PM1 Enable 2 */
  __IO  __PM1_CTRL_2_bits_t            PM1_CTRL_2;    /**< Offset: 0x105 (R/W   8) PM1 Control 2 */
  __IO  __PM1_PM_STS_bits_t            PM_STS;        /**< Offset: 0x110 (R/W   8) PM1 EC PM Status */
} pm1_registers_t;
/** @}  end of The device implements the ACPI fixed registers but includes only those bits\n that apply to the power button\n    sleep button and RTC alarm events. The ACPI WAK_STS, SLP_TYP and SLP_EN bits are also supported. */

#endif /* _PIC32CX_0525SG12_PM1_COMPONENT_H_ */
