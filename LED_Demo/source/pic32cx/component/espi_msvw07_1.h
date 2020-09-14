/**
 * \brief Component description for PIC32CX/0525SG12 ESPI_MSVW07_1
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
#ifndef _PIC32CX_0525SG12_ESPI_MSVW07_1_COMPONENT_H_
#define _PIC32CX_0525SG12_ESPI_MSVW07_1_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_ESPI_MSVW07_1 The Virtual Wire Channel permits the System to emulate a set of wires that interconnect the system Core Logic with the EC.
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR ESPI_MSVW07_1 */
/* ========================================================================== */

/* -------- ESPI_MSVW07_1_MSVW07_DW0 : (ESPI_MSVW07_1 Offset: 0x00) (R/W 32) Master-to-Slave Virtual Wire 7 Register (DW 0) -------- */

typedef union
{
  struct
  {
    uint32_t INDEX:8;                   /**< bit:   0..7  The Index for SRC0, SRC1, SRC2 and SRC3. When the Index field of an incoming Master-to-Slave Virtual Wire transaction\n      matches this value, the fields SRC0, SRC1, SRC2 and SRC3 are updated by the data contained in the respective bit positions in the\n      transaction. Setting the INDEX field to 0 disables the register from accepting any Virtual Wire traffic from the Master. Setting the\n      INDEX field to 1 is illegal, since INDEX=1 is reserved for Serial IRQ. */
    uint32_t MTOS_SRC:2;                /**< bit:   8..9  This field determines which reset signal in addition to RESET_SYS resets SRC[3:0] in this register:\n      3=PLTRST\n      2=RESET_SIO\n      1=RESET_SYS. This is the only reset signal that will reset the SRC fields.\n      0=RESET_ESPI. */
    uint32_t :2;                        /**< bit: 10..11  Reserved                                      */
    uint32_t MTOS_R_STATE:4;            /**< bit: 12..15  The four bits in this field are loaded into SRC0, SRC1, SRC2 and SRC3 when the reset signal selected by M2S RESET SRC is\n      asserted. If MTOS_SRC is set for RESET_SYS, the SRC bits are set to the default value of this field, rather than its programmed value,\n      since this field is also reset on RESET_SYS. */
    uint32_t :16;                       /**< bit: 16..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_MSVW07_1_MSVW07_DW0_bits_t;
#define ESPI_MSVW07_1_MSVW07_DW0_RESETVALUE (0x347U)                                      /**<  (ESPI_MSVW07_1_MSVW07_DW0) Master-to-Slave Virtual Wire 7 Register (DW 0)  Reset Value */

#define ESPI_MSVW07_1_MSVW07_DW0_INDEX_Pos    (0)                                            /**< (ESPI_MSVW07_1_MSVW07_DW0) The Index for SRC0, SRC1, SRC2 and SRC3. When the Index field of an incoming Master-to-Slave Virtual Wire transaction\n      matches this value, the fields SRC0, SRC1, SRC2 and SRC3 are updated by the data contained in the respective bit positions in the\n      transaction. Setting the INDEX field to 0 disables the register from accepting any Virtual Wire traffic from the Master. Setting the\n      INDEX field to 1 is illegal, since INDEX=1 is reserved for Serial IRQ. Position */
#define ESPI_MSVW07_1_MSVW07_DW0_INDEX_Msk    (0xFFU << ESPI_MSVW07_1_MSVW07_DW0_INDEX_Pos)  /**< (ESPI_MSVW07_1_MSVW07_DW0) The Index for SRC0, SRC1, SRC2 and SRC3. When the Index field of an incoming Master-to-Slave Virtual Wire transaction\n      matches this value, the fields SRC0, SRC1, SRC2 and SRC3 are updated by the data contained in the respective bit positions in the\n      transaction. Setting the INDEX field to 0 disables the register from accepting any Virtual Wire traffic from the Master. Setting the\n      INDEX field to 1 is illegal, since INDEX=1 is reserved for Serial IRQ. Mask */
#define ESPI_MSVW07_1_MSVW07_DW0_INDEX(value) (ESPI_MSVW07_1_MSVW07_DW0_INDEX_Msk & ((value) << ESPI_MSVW07_1_MSVW07_DW0_INDEX_Pos))
#define ESPI_MSVW07_1_MSVW07_DW0_MTOS_SRC_Pos (8)                                            /**< (ESPI_MSVW07_1_MSVW07_DW0) This field determines which reset signal in addition to RESET_SYS resets SRC[3:0] in this register:\n      3=PLTRST\n      2=RESET_SIO\n      1=RESET_SYS. This is the only reset signal that will reset the SRC fields.\n      0=RESET_ESPI. Position */
#define ESPI_MSVW07_1_MSVW07_DW0_MTOS_SRC_Msk (0x3U << ESPI_MSVW07_1_MSVW07_DW0_MTOS_SRC_Pos)  /**< (ESPI_MSVW07_1_MSVW07_DW0) This field determines which reset signal in addition to RESET_SYS resets SRC[3:0] in this register:\n      3=PLTRST\n      2=RESET_SIO\n      1=RESET_SYS. This is the only reset signal that will reset the SRC fields.\n      0=RESET_ESPI. Mask */
#define ESPI_MSVW07_1_MSVW07_DW0_MTOS_SRC(value) (ESPI_MSVW07_1_MSVW07_DW0_MTOS_SRC_Msk & ((value) << ESPI_MSVW07_1_MSVW07_DW0_MTOS_SRC_Pos))
#define ESPI_MSVW07_1_MSVW07_DW0_MTOS_R_STATE_Pos (12)                                           /**< (ESPI_MSVW07_1_MSVW07_DW0) The four bits in this field are loaded into SRC0, SRC1, SRC2 and SRC3 when the reset signal selected by M2S RESET SRC is\n      asserted. If MTOS_SRC is set for RESET_SYS, the SRC bits are set to the default value of this field, rather than its programmed value,\n      since this field is also reset on RESET_SYS. Position */
#define ESPI_MSVW07_1_MSVW07_DW0_MTOS_R_STATE_Msk (0xFU << ESPI_MSVW07_1_MSVW07_DW0_MTOS_R_STATE_Pos)  /**< (ESPI_MSVW07_1_MSVW07_DW0) The four bits in this field are loaded into SRC0, SRC1, SRC2 and SRC3 when the reset signal selected by M2S RESET SRC is\n      asserted. If MTOS_SRC is set for RESET_SYS, the SRC bits are set to the default value of this field, rather than its programmed value,\n      since this field is also reset on RESET_SYS. Mask */
#define ESPI_MSVW07_1_MSVW07_DW0_MTOS_R_STATE(value) (ESPI_MSVW07_1_MSVW07_DW0_MTOS_R_STATE_Msk & ((value) << ESPI_MSVW07_1_MSVW07_DW0_MTOS_R_STATE_Pos))
#define ESPI_MSVW07_1_MSVW07_DW0_Msk          (0x0000F3FFUL)                                 /**< (ESPI_MSVW07_1_MSVW07_DW0) Register Mask  */

/* -------- ESPI_MSVW07_1_MSVW07_DW1 : (ESPI_MSVW07_1 Offset: 0x04) (R/W 32) Master-to-Slave Virtual Wire 7 Register (DW 1) -------- */

typedef union
{
  struct
  {
    uint32_t SRC0_IRQ_SELECT:4;         /**< bit:   0..3  A change in the value of SRC0 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. */
    uint32_t :4;                        /**< bit:   4..7  Reserved                                      */
    uint32_t SRC1_IRQ_SELECT:4;         /**< bit:  8..11  A change in the value of SRC1 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. */
    uint32_t :4;                        /**< bit: 12..15  Reserved                                      */
    uint32_t SRC2_IRQ_SELECT:4;         /**< bit: 16..19  A change in the value of SRC2 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. */
    uint32_t :4;                        /**< bit: 20..23  Reserved                                      */
    uint32_t SRC3_IRQ_SELECT:4;         /**< bit: 24..27  A change in the value of SRC3 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. */
    uint32_t :4;                        /**< bit: 28..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_MSVW07_1_MSVW07_DW1_bits_t;
#define ESPI_MSVW07_1_MSVW07_DW1_RESETVALUE (0x4040404U)                                  /**<  (ESPI_MSVW07_1_MSVW07_DW1) Master-to-Slave Virtual Wire 7 Register (DW 1)  Reset Value */

#define ESPI_MSVW07_1_MSVW07_DW1_SRC0_IRQ_SELECT_Pos (0)                                            /**< (ESPI_MSVW07_1_MSVW07_DW1) A change in the value of SRC0 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW07_DW1_SRC0_IRQ_SELECT_Msk (0xFU << ESPI_MSVW07_1_MSVW07_DW1_SRC0_IRQ_SELECT_Pos)  /**< (ESPI_MSVW07_1_MSVW07_DW1) A change in the value of SRC0 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW07_DW1_SRC0_IRQ_SELECT(value) (ESPI_MSVW07_1_MSVW07_DW1_SRC0_IRQ_SELECT_Msk & ((value) << ESPI_MSVW07_1_MSVW07_DW1_SRC0_IRQ_SELECT_Pos))
#define ESPI_MSVW07_1_MSVW07_DW1_SRC1_IRQ_SELECT_Pos (8)                                            /**< (ESPI_MSVW07_1_MSVW07_DW1) A change in the value of SRC1 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW07_DW1_SRC1_IRQ_SELECT_Msk (0xFU << ESPI_MSVW07_1_MSVW07_DW1_SRC1_IRQ_SELECT_Pos)  /**< (ESPI_MSVW07_1_MSVW07_DW1) A change in the value of SRC1 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW07_DW1_SRC1_IRQ_SELECT(value) (ESPI_MSVW07_1_MSVW07_DW1_SRC1_IRQ_SELECT_Msk & ((value) << ESPI_MSVW07_1_MSVW07_DW1_SRC1_IRQ_SELECT_Pos))
#define ESPI_MSVW07_1_MSVW07_DW1_SRC2_IRQ_SELECT_Pos (16)                                           /**< (ESPI_MSVW07_1_MSVW07_DW1) A change in the value of SRC2 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW07_DW1_SRC2_IRQ_SELECT_Msk (0xFU << ESPI_MSVW07_1_MSVW07_DW1_SRC2_IRQ_SELECT_Pos)  /**< (ESPI_MSVW07_1_MSVW07_DW1) A change in the value of SRC2 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW07_DW1_SRC2_IRQ_SELECT(value) (ESPI_MSVW07_1_MSVW07_DW1_SRC2_IRQ_SELECT_Msk & ((value) << ESPI_MSVW07_1_MSVW07_DW1_SRC2_IRQ_SELECT_Pos))
#define ESPI_MSVW07_1_MSVW07_DW1_SRC3_IRQ_SELECT_Pos (24)                                           /**< (ESPI_MSVW07_1_MSVW07_DW1) A change in the value of SRC3 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW07_DW1_SRC3_IRQ_SELECT_Msk (0xFU << ESPI_MSVW07_1_MSVW07_DW1_SRC3_IRQ_SELECT_Pos)  /**< (ESPI_MSVW07_1_MSVW07_DW1) A change in the value of SRC3 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW07_DW1_SRC3_IRQ_SELECT(value) (ESPI_MSVW07_1_MSVW07_DW1_SRC3_IRQ_SELECT_Msk & ((value) << ESPI_MSVW07_1_MSVW07_DW1_SRC3_IRQ_SELECT_Pos))
#define ESPI_MSVW07_1_MSVW07_DW1_Msk          (0x0F0F0F0FUL)                                 /**< (ESPI_MSVW07_1_MSVW07_DW1) Register Mask  */

/* -------- ESPI_MSVW07_1_MSVW07_DW2 : (ESPI_MSVW07_1 Offset: 0x08) (R/W 32) Master-to-Slave Virtual Wire 7 Register (DW 2) -------- */

typedef union
{
  struct
  {
    uint32_t SRC0:1;                    /**< bit:      0  Master-to-Slave data for Bit Position 0 for the virtual wire associated with the index defined by INDEX. */
    uint32_t :7;                        /**< bit:   1..7  Reserved                                      */
    uint32_t SRC1:1;                    /**< bit:      8  Master-to-Slave data for Bit Position 1 for the virtual wire associated with the index defined by INDEX. */
    uint32_t :7;                        /**< bit:  9..15  Reserved                                      */
    uint32_t SRC2:1;                    /**< bit:     16  Master-to-Slave data for Bit Position 2 for the virtual wire associated with the index defined by INDEX. */
    uint32_t :7;                        /**< bit: 17..23  Reserved                                      */
    uint32_t SRC3:1;                    /**< bit:     24  Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. */
    uint32_t :7;                        /**< bit: 25..31  Reserved                                      */
  };
  struct
  {
    uint32_t SRC:4;                     /**< bit:   0..3  Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. */
    uint32_t :28;                       /**< bit:  4..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_MSVW07_1_MSVW07_DW2_bits_t;
#define ESPI_MSVW07_1_MSVW07_DW2_RESETVALUE (0x00U)                                       /**<  (ESPI_MSVW07_1_MSVW07_DW2) Master-to-Slave Virtual Wire 7 Register (DW 2)  Reset Value */

#define ESPI_MSVW07_1_MSVW07_DW2_SRC0_Pos     (0)                                            /**< (ESPI_MSVW07_1_MSVW07_DW2) Master-to-Slave data for Bit Position 0 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC0_Msk     (0x1U << ESPI_MSVW07_1_MSVW07_DW2_SRC0_Pos)    /**< (ESPI_MSVW07_1_MSVW07_DW2) Master-to-Slave data for Bit Position 0 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC1_Pos     (8)                                            /**< (ESPI_MSVW07_1_MSVW07_DW2) Master-to-Slave data for Bit Position 1 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC1_Msk     (0x1U << ESPI_MSVW07_1_MSVW07_DW2_SRC1_Pos)    /**< (ESPI_MSVW07_1_MSVW07_DW2) Master-to-Slave data for Bit Position 1 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC2_Pos     (16)                                           /**< (ESPI_MSVW07_1_MSVW07_DW2) Master-to-Slave data for Bit Position 2 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC2_Msk     (0x1U << ESPI_MSVW07_1_MSVW07_DW2_SRC2_Pos)    /**< (ESPI_MSVW07_1_MSVW07_DW2) Master-to-Slave data for Bit Position 2 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC3_Pos     (24)                                           /**< (ESPI_MSVW07_1_MSVW07_DW2) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC3_Msk     (0x1U << ESPI_MSVW07_1_MSVW07_DW2_SRC3_Pos)    /**< (ESPI_MSVW07_1_MSVW07_DW2) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW07_DW2_Msk          (0x01010101UL)                                 /**< (ESPI_MSVW07_1_MSVW07_DW2) Register Mask  */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC_Pos      (0)                                            /**< (ESPI_MSVW07_1_MSVW07_DW2 Position) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC_Msk      (0xFU << ESPI_MSVW07_1_MSVW07_DW2_SRC_Pos)     /**< (ESPI_MSVW07_1_MSVW07_DW2 Mask) SRC */
#define ESPI_MSVW07_1_MSVW07_DW2_SRC(value)   (ESPI_MSVW07_1_MSVW07_DW2_SRC_Msk & ((value) << ESPI_MSVW07_1_MSVW07_DW2_SRC_Pos))

/* -------- ESPI_MSVW07_1_MSVW08_DW0 : (ESPI_MSVW07_1 Offset: 0x0c) (R/W 32) Master-to-Slave Virtual Wire 8 Register (DW 0) -------- */

typedef union
{
  struct
  {
    uint32_t INDEX:8;                   /**< bit:   0..7  The Index for SRC0, SRC1, SRC2 and SRC3. When the Index field of an incoming Master-to-Slave Virtual Wire transaction\n      matches this value, the fields SRC0, SRC1, SRC2 and SRC3 are updated by the data contained in the respective bit positions in the\n      transaction. Setting the INDEX field to 0 disables the register from accepting any Virtual Wire traffic from the Master. Setting the\n      INDEX field to 1 is illegal, since INDEX=1 is reserved for Serial IRQ. */
    uint32_t MTOS_SRC:2;                /**< bit:   8..9  This field determines which reset signal in addition to RESET_SYS resets SRC[3:0] in this register:\n      3=PLTRST\n      2=RESET_SIO\n      1=RESET_SYS. This is the only reset signal that will reset the SRC fields.\n      0=RESET_ESPI. */
    uint32_t :2;                        /**< bit: 10..11  Reserved                                      */
    uint32_t MTOS_R_STATE:4;            /**< bit: 12..15  The four bits in this field are loaded into SRC0, SRC1, SRC2 and SRC3 when the reset signal selected by M2S RESET SRC is\n      asserted. If MTOS_SRC is set for RESET_SYS, the SRC bits are set to the default value of this field, rather than its programmed value,\n      since this field is also reset on RESET_SYS. */
    uint32_t :16;                       /**< bit: 16..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_MSVW07_1_MSVW08_DW0_bits_t;
#define ESPI_MSVW07_1_MSVW08_DW0_RESETVALUE (0x00U)                                       /**<  (ESPI_MSVW07_1_MSVW08_DW0) Master-to-Slave Virtual Wire 8 Register (DW 0)  Reset Value */

#define ESPI_MSVW07_1_MSVW08_DW0_INDEX_Pos    (0)                                            /**< (ESPI_MSVW07_1_MSVW08_DW0) The Index for SRC0, SRC1, SRC2 and SRC3. When the Index field of an incoming Master-to-Slave Virtual Wire transaction\n      matches this value, the fields SRC0, SRC1, SRC2 and SRC3 are updated by the data contained in the respective bit positions in the\n      transaction. Setting the INDEX field to 0 disables the register from accepting any Virtual Wire traffic from the Master. Setting the\n      INDEX field to 1 is illegal, since INDEX=1 is reserved for Serial IRQ. Position */
#define ESPI_MSVW07_1_MSVW08_DW0_INDEX_Msk    (0xFFU << ESPI_MSVW07_1_MSVW08_DW0_INDEX_Pos)  /**< (ESPI_MSVW07_1_MSVW08_DW0) The Index for SRC0, SRC1, SRC2 and SRC3. When the Index field of an incoming Master-to-Slave Virtual Wire transaction\n      matches this value, the fields SRC0, SRC1, SRC2 and SRC3 are updated by the data contained in the respective bit positions in the\n      transaction. Setting the INDEX field to 0 disables the register from accepting any Virtual Wire traffic from the Master. Setting the\n      INDEX field to 1 is illegal, since INDEX=1 is reserved for Serial IRQ. Mask */
#define ESPI_MSVW07_1_MSVW08_DW0_INDEX(value) (ESPI_MSVW07_1_MSVW08_DW0_INDEX_Msk & ((value) << ESPI_MSVW07_1_MSVW08_DW0_INDEX_Pos))
#define ESPI_MSVW07_1_MSVW08_DW0_MTOS_SRC_Pos (8)                                            /**< (ESPI_MSVW07_1_MSVW08_DW0) This field determines which reset signal in addition to RESET_SYS resets SRC[3:0] in this register:\n      3=PLTRST\n      2=RESET_SIO\n      1=RESET_SYS. This is the only reset signal that will reset the SRC fields.\n      0=RESET_ESPI. Position */
#define ESPI_MSVW07_1_MSVW08_DW0_MTOS_SRC_Msk (0x3U << ESPI_MSVW07_1_MSVW08_DW0_MTOS_SRC_Pos)  /**< (ESPI_MSVW07_1_MSVW08_DW0) This field determines which reset signal in addition to RESET_SYS resets SRC[3:0] in this register:\n      3=PLTRST\n      2=RESET_SIO\n      1=RESET_SYS. This is the only reset signal that will reset the SRC fields.\n      0=RESET_ESPI. Mask */
#define ESPI_MSVW07_1_MSVW08_DW0_MTOS_SRC(value) (ESPI_MSVW07_1_MSVW08_DW0_MTOS_SRC_Msk & ((value) << ESPI_MSVW07_1_MSVW08_DW0_MTOS_SRC_Pos))
#define ESPI_MSVW07_1_MSVW08_DW0_MTOS_R_STATE_Pos (12)                                           /**< (ESPI_MSVW07_1_MSVW08_DW0) The four bits in this field are loaded into SRC0, SRC1, SRC2 and SRC3 when the reset signal selected by M2S RESET SRC is\n      asserted. If MTOS_SRC is set for RESET_SYS, the SRC bits are set to the default value of this field, rather than its programmed value,\n      since this field is also reset on RESET_SYS. Position */
#define ESPI_MSVW07_1_MSVW08_DW0_MTOS_R_STATE_Msk (0xFU << ESPI_MSVW07_1_MSVW08_DW0_MTOS_R_STATE_Pos)  /**< (ESPI_MSVW07_1_MSVW08_DW0) The four bits in this field are loaded into SRC0, SRC1, SRC2 and SRC3 when the reset signal selected by M2S RESET SRC is\n      asserted. If MTOS_SRC is set for RESET_SYS, the SRC bits are set to the default value of this field, rather than its programmed value,\n      since this field is also reset on RESET_SYS. Mask */
#define ESPI_MSVW07_1_MSVW08_DW0_MTOS_R_STATE(value) (ESPI_MSVW07_1_MSVW08_DW0_MTOS_R_STATE_Msk & ((value) << ESPI_MSVW07_1_MSVW08_DW0_MTOS_R_STATE_Pos))
#define ESPI_MSVW07_1_MSVW08_DW0_Msk          (0x0000F3FFUL)                                 /**< (ESPI_MSVW07_1_MSVW08_DW0) Register Mask  */

/* -------- ESPI_MSVW07_1_MSVW08_DW1 : (ESPI_MSVW07_1 Offset: 0x10) (R/W 32) Master-to-Slave Virtual Wire 8 Register (DW 1) -------- */

typedef union
{
  struct
  {
    uint32_t SRC0_IRQ_SELECT:4;         /**< bit:   0..3  A change in the value of SRC0 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. */
    uint32_t :4;                        /**< bit:   4..7  Reserved                                      */
    uint32_t SRC1_IRQ_SELECT:4;         /**< bit:  8..11  A change in the value of SRC1 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. */
    uint32_t :4;                        /**< bit: 12..15  Reserved                                      */
    uint32_t SRC2_IRQ_SELECT:4;         /**< bit: 16..19  A change in the value of SRC2 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. */
    uint32_t :4;                        /**< bit: 20..23  Reserved                                      */
    uint32_t SRC3_IRQ_SELECT:4;         /**< bit: 24..27  A change in the value of SRC3 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. */
    uint32_t :4;                        /**< bit: 28..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_MSVW07_1_MSVW08_DW1_bits_t;
#define ESPI_MSVW07_1_MSVW08_DW1_RESETVALUE (0x4040404U)                                  /**<  (ESPI_MSVW07_1_MSVW08_DW1) Master-to-Slave Virtual Wire 8 Register (DW 1)  Reset Value */

#define ESPI_MSVW07_1_MSVW08_DW1_SRC0_IRQ_SELECT_Pos (0)                                            /**< (ESPI_MSVW07_1_MSVW08_DW1) A change in the value of SRC0 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW08_DW1_SRC0_IRQ_SELECT_Msk (0xFU << ESPI_MSVW07_1_MSVW08_DW1_SRC0_IRQ_SELECT_Pos)  /**< (ESPI_MSVW07_1_MSVW08_DW1) A change in the value of SRC0 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW08_DW1_SRC0_IRQ_SELECT(value) (ESPI_MSVW07_1_MSVW08_DW1_SRC0_IRQ_SELECT_Msk & ((value) << ESPI_MSVW07_1_MSVW08_DW1_SRC0_IRQ_SELECT_Pos))
#define ESPI_MSVW07_1_MSVW08_DW1_SRC1_IRQ_SELECT_Pos (8)                                            /**< (ESPI_MSVW07_1_MSVW08_DW1) A change in the value of SRC1 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW08_DW1_SRC1_IRQ_SELECT_Msk (0xFU << ESPI_MSVW07_1_MSVW08_DW1_SRC1_IRQ_SELECT_Pos)  /**< (ESPI_MSVW07_1_MSVW08_DW1) A change in the value of SRC1 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW08_DW1_SRC1_IRQ_SELECT(value) (ESPI_MSVW07_1_MSVW08_DW1_SRC1_IRQ_SELECT_Msk & ((value) << ESPI_MSVW07_1_MSVW08_DW1_SRC1_IRQ_SELECT_Pos))
#define ESPI_MSVW07_1_MSVW08_DW1_SRC2_IRQ_SELECT_Pos (16)                                           /**< (ESPI_MSVW07_1_MSVW08_DW1) A change in the value of SRC2 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW08_DW1_SRC2_IRQ_SELECT_Msk (0xFU << ESPI_MSVW07_1_MSVW08_DW1_SRC2_IRQ_SELECT_Pos)  /**< (ESPI_MSVW07_1_MSVW08_DW1) A change in the value of SRC2 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW08_DW1_SRC2_IRQ_SELECT(value) (ESPI_MSVW07_1_MSVW08_DW1_SRC2_IRQ_SELECT_Msk & ((value) << ESPI_MSVW07_1_MSVW08_DW1_SRC2_IRQ_SELECT_Pos))
#define ESPI_MSVW07_1_MSVW08_DW1_SRC3_IRQ_SELECT_Pos (24)                                           /**< (ESPI_MSVW07_1_MSVW08_DW1) A change in the value of SRC3 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW08_DW1_SRC3_IRQ_SELECT_Msk (0xFU << ESPI_MSVW07_1_MSVW08_DW1_SRC3_IRQ_SELECT_Pos)  /**< (ESPI_MSVW07_1_MSVW08_DW1) A change in the value of SRC3 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW08_DW1_SRC3_IRQ_SELECT(value) (ESPI_MSVW07_1_MSVW08_DW1_SRC3_IRQ_SELECT_Msk & ((value) << ESPI_MSVW07_1_MSVW08_DW1_SRC3_IRQ_SELECT_Pos))
#define ESPI_MSVW07_1_MSVW08_DW1_Msk          (0x0F0F0F0FUL)                                 /**< (ESPI_MSVW07_1_MSVW08_DW1) Register Mask  */

/* -------- ESPI_MSVW07_1_MSVW08_DW2 : (ESPI_MSVW07_1 Offset: 0x14) (R/W 32) Master-to-Slave Virtual Wire 8 Register (DW 2) -------- */

typedef union
{
  struct
  {
    uint32_t SRC0:1;                    /**< bit:      0  Master-to-Slave data for Bit Position 0 for the virtual wire associated with the index defined by INDEX. */
    uint32_t :7;                        /**< bit:   1..7  Reserved                                      */
    uint32_t SRC1:1;                    /**< bit:      8  Master-to-Slave data for Bit Position 1 for the virtual wire associated with the index defined by INDEX. */
    uint32_t :7;                        /**< bit:  9..15  Reserved                                      */
    uint32_t SRC2:1;                    /**< bit:     16  Master-to-Slave data for Bit Position 2 for the virtual wire associated with the index defined by INDEX. */
    uint32_t :7;                        /**< bit: 17..23  Reserved                                      */
    uint32_t SRC3:1;                    /**< bit:     24  Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. */
    uint32_t :7;                        /**< bit: 25..31  Reserved                                      */
  };
  struct
  {
    uint32_t SRC:4;                     /**< bit:   0..3  Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. */
    uint32_t :28;                       /**< bit:  4..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_MSVW07_1_MSVW08_DW2_bits_t;
#define ESPI_MSVW07_1_MSVW08_DW2_RESETVALUE (0x00U)                                       /**<  (ESPI_MSVW07_1_MSVW08_DW2) Master-to-Slave Virtual Wire 8 Register (DW 2)  Reset Value */

#define ESPI_MSVW07_1_MSVW08_DW2_SRC0_Pos     (0)                                            /**< (ESPI_MSVW07_1_MSVW08_DW2) Master-to-Slave data for Bit Position 0 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC0_Msk     (0x1U << ESPI_MSVW07_1_MSVW08_DW2_SRC0_Pos)    /**< (ESPI_MSVW07_1_MSVW08_DW2) Master-to-Slave data for Bit Position 0 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC1_Pos     (8)                                            /**< (ESPI_MSVW07_1_MSVW08_DW2) Master-to-Slave data for Bit Position 1 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC1_Msk     (0x1U << ESPI_MSVW07_1_MSVW08_DW2_SRC1_Pos)    /**< (ESPI_MSVW07_1_MSVW08_DW2) Master-to-Slave data for Bit Position 1 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC2_Pos     (16)                                           /**< (ESPI_MSVW07_1_MSVW08_DW2) Master-to-Slave data for Bit Position 2 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC2_Msk     (0x1U << ESPI_MSVW07_1_MSVW08_DW2_SRC2_Pos)    /**< (ESPI_MSVW07_1_MSVW08_DW2) Master-to-Slave data for Bit Position 2 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC3_Pos     (24)                                           /**< (ESPI_MSVW07_1_MSVW08_DW2) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC3_Msk     (0x1U << ESPI_MSVW07_1_MSVW08_DW2_SRC3_Pos)    /**< (ESPI_MSVW07_1_MSVW08_DW2) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW08_DW2_Msk          (0x01010101UL)                                 /**< (ESPI_MSVW07_1_MSVW08_DW2) Register Mask  */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC_Pos      (0)                                            /**< (ESPI_MSVW07_1_MSVW08_DW2 Position) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC_Msk      (0xFU << ESPI_MSVW07_1_MSVW08_DW2_SRC_Pos)     /**< (ESPI_MSVW07_1_MSVW08_DW2 Mask) SRC */
#define ESPI_MSVW07_1_MSVW08_DW2_SRC(value)   (ESPI_MSVW07_1_MSVW08_DW2_SRC_Msk & ((value) << ESPI_MSVW07_1_MSVW08_DW2_SRC_Pos))

/* -------- ESPI_MSVW07_1_MSVW09_DW0 : (ESPI_MSVW07_1 Offset: 0x18) (R/W 32) Master-to-Slave Virtual Wire 9 Register (DW 0) -------- */

typedef union
{
  struct
  {
    uint32_t INDEX:8;                   /**< bit:   0..7  The Index for SRC0, SRC1, SRC2 and SRC3. When the Index field of an incoming Master-to-Slave Virtual Wire transaction\n      matches this value, the fields SRC0, SRC1, SRC2 and SRC3 are updated by the data contained in the respective bit positions in the\n      transaction. Setting the INDEX field to 0 disables the register from accepting any Virtual Wire traffic from the Master. Setting the\n      INDEX field to 1 is illegal, since INDEX=1 is reserved for Serial IRQ. */
    uint32_t MTOS_SRC:2;                /**< bit:   8..9  This field determines which reset signal in addition to RESET_SYS resets SRC[3:0] in this register:\n      3=PLTRST\n      2=RESET_SIO\n      1=RESET_SYS. This is the only reset signal that will reset the SRC fields.\n      0=RESET_ESPI. */
    uint32_t :2;                        /**< bit: 10..11  Reserved                                      */
    uint32_t MTOS_R_STATE:4;            /**< bit: 12..15  The four bits in this field are loaded into SRC0, SRC1, SRC2 and SRC3 when the reset signal selected by M2S RESET SRC is\n      asserted. If MTOS_SRC is set for RESET_SYS, the SRC bits are set to the default value of this field, rather than its programmed value,\n      since this field is also reset on RESET_SYS. */
    uint32_t :16;                       /**< bit: 16..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_MSVW07_1_MSVW09_DW0_bits_t;
#define ESPI_MSVW07_1_MSVW09_DW0_RESETVALUE (0x00U)                                       /**<  (ESPI_MSVW07_1_MSVW09_DW0) Master-to-Slave Virtual Wire 9 Register (DW 0)  Reset Value */

#define ESPI_MSVW07_1_MSVW09_DW0_INDEX_Pos    (0)                                            /**< (ESPI_MSVW07_1_MSVW09_DW0) The Index for SRC0, SRC1, SRC2 and SRC3. When the Index field of an incoming Master-to-Slave Virtual Wire transaction\n      matches this value, the fields SRC0, SRC1, SRC2 and SRC3 are updated by the data contained in the respective bit positions in the\n      transaction. Setting the INDEX field to 0 disables the register from accepting any Virtual Wire traffic from the Master. Setting the\n      INDEX field to 1 is illegal, since INDEX=1 is reserved for Serial IRQ. Position */
#define ESPI_MSVW07_1_MSVW09_DW0_INDEX_Msk    (0xFFU << ESPI_MSVW07_1_MSVW09_DW0_INDEX_Pos)  /**< (ESPI_MSVW07_1_MSVW09_DW0) The Index for SRC0, SRC1, SRC2 and SRC3. When the Index field of an incoming Master-to-Slave Virtual Wire transaction\n      matches this value, the fields SRC0, SRC1, SRC2 and SRC3 are updated by the data contained in the respective bit positions in the\n      transaction. Setting the INDEX field to 0 disables the register from accepting any Virtual Wire traffic from the Master. Setting the\n      INDEX field to 1 is illegal, since INDEX=1 is reserved for Serial IRQ. Mask */
#define ESPI_MSVW07_1_MSVW09_DW0_INDEX(value) (ESPI_MSVW07_1_MSVW09_DW0_INDEX_Msk & ((value) << ESPI_MSVW07_1_MSVW09_DW0_INDEX_Pos))
#define ESPI_MSVW07_1_MSVW09_DW0_MTOS_SRC_Pos (8)                                            /**< (ESPI_MSVW07_1_MSVW09_DW0) This field determines which reset signal in addition to RESET_SYS resets SRC[3:0] in this register:\n      3=PLTRST\n      2=RESET_SIO\n      1=RESET_SYS. This is the only reset signal that will reset the SRC fields.\n      0=RESET_ESPI. Position */
#define ESPI_MSVW07_1_MSVW09_DW0_MTOS_SRC_Msk (0x3U << ESPI_MSVW07_1_MSVW09_DW0_MTOS_SRC_Pos)  /**< (ESPI_MSVW07_1_MSVW09_DW0) This field determines which reset signal in addition to RESET_SYS resets SRC[3:0] in this register:\n      3=PLTRST\n      2=RESET_SIO\n      1=RESET_SYS. This is the only reset signal that will reset the SRC fields.\n      0=RESET_ESPI. Mask */
#define ESPI_MSVW07_1_MSVW09_DW0_MTOS_SRC(value) (ESPI_MSVW07_1_MSVW09_DW0_MTOS_SRC_Msk & ((value) << ESPI_MSVW07_1_MSVW09_DW0_MTOS_SRC_Pos))
#define ESPI_MSVW07_1_MSVW09_DW0_MTOS_R_STATE_Pos (12)                                           /**< (ESPI_MSVW07_1_MSVW09_DW0) The four bits in this field are loaded into SRC0, SRC1, SRC2 and SRC3 when the reset signal selected by M2S RESET SRC is\n      asserted. If MTOS_SRC is set for RESET_SYS, the SRC bits are set to the default value of this field, rather than its programmed value,\n      since this field is also reset on RESET_SYS. Position */
#define ESPI_MSVW07_1_MSVW09_DW0_MTOS_R_STATE_Msk (0xFU << ESPI_MSVW07_1_MSVW09_DW0_MTOS_R_STATE_Pos)  /**< (ESPI_MSVW07_1_MSVW09_DW0) The four bits in this field are loaded into SRC0, SRC1, SRC2 and SRC3 when the reset signal selected by M2S RESET SRC is\n      asserted. If MTOS_SRC is set for RESET_SYS, the SRC bits are set to the default value of this field, rather than its programmed value,\n      since this field is also reset on RESET_SYS. Mask */
#define ESPI_MSVW07_1_MSVW09_DW0_MTOS_R_STATE(value) (ESPI_MSVW07_1_MSVW09_DW0_MTOS_R_STATE_Msk & ((value) << ESPI_MSVW07_1_MSVW09_DW0_MTOS_R_STATE_Pos))
#define ESPI_MSVW07_1_MSVW09_DW0_Msk          (0x0000F3FFUL)                                 /**< (ESPI_MSVW07_1_MSVW09_DW0) Register Mask  */

/* -------- ESPI_MSVW07_1_MSVW09_DW1 : (ESPI_MSVW07_1 Offset: 0x1c) (R/W 32) Master-to-Slave Virtual Wire 9 Register (DW 1) -------- */

typedef union
{
  struct
  {
    uint32_t SRC0_IRQ_SELECT:4;         /**< bit:   0..3  A change in the value of SRC0 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. */
    uint32_t :4;                        /**< bit:   4..7  Reserved                                      */
    uint32_t SRC1_IRQ_SELECT:4;         /**< bit:  8..11  A change in the value of SRC1 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. */
    uint32_t :4;                        /**< bit: 12..15  Reserved                                      */
    uint32_t SRC2_IRQ_SELECT:4;         /**< bit: 16..19  A change in the value of SRC2 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. */
    uint32_t :4;                        /**< bit: 20..23  Reserved                                      */
    uint32_t SRC3_IRQ_SELECT:4;         /**< bit: 24..27  A change in the value of SRC3 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. */
    uint32_t :4;                        /**< bit: 28..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_MSVW07_1_MSVW09_DW1_bits_t;
#define ESPI_MSVW07_1_MSVW09_DW1_RESETVALUE (0x4040404U)                                  /**<  (ESPI_MSVW07_1_MSVW09_DW1) Master-to-Slave Virtual Wire 9 Register (DW 1)  Reset Value */

#define ESPI_MSVW07_1_MSVW09_DW1_SRC0_IRQ_SELECT_Pos (0)                                            /**< (ESPI_MSVW07_1_MSVW09_DW1) A change in the value of SRC0 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW09_DW1_SRC0_IRQ_SELECT_Msk (0xFU << ESPI_MSVW07_1_MSVW09_DW1_SRC0_IRQ_SELECT_Pos)  /**< (ESPI_MSVW07_1_MSVW09_DW1) A change in the value of SRC0 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW09_DW1_SRC0_IRQ_SELECT(value) (ESPI_MSVW07_1_MSVW09_DW1_SRC0_IRQ_SELECT_Msk & ((value) << ESPI_MSVW07_1_MSVW09_DW1_SRC0_IRQ_SELECT_Pos))
#define ESPI_MSVW07_1_MSVW09_DW1_SRC1_IRQ_SELECT_Pos (8)                                            /**< (ESPI_MSVW07_1_MSVW09_DW1) A change in the value of SRC1 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW09_DW1_SRC1_IRQ_SELECT_Msk (0xFU << ESPI_MSVW07_1_MSVW09_DW1_SRC1_IRQ_SELECT_Pos)  /**< (ESPI_MSVW07_1_MSVW09_DW1) A change in the value of SRC1 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW09_DW1_SRC1_IRQ_SELECT(value) (ESPI_MSVW07_1_MSVW09_DW1_SRC1_IRQ_SELECT_Msk & ((value) << ESPI_MSVW07_1_MSVW09_DW1_SRC1_IRQ_SELECT_Pos))
#define ESPI_MSVW07_1_MSVW09_DW1_SRC2_IRQ_SELECT_Pos (16)                                           /**< (ESPI_MSVW07_1_MSVW09_DW1) A change in the value of SRC2 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW09_DW1_SRC2_IRQ_SELECT_Msk (0xFU << ESPI_MSVW07_1_MSVW09_DW1_SRC2_IRQ_SELECT_Pos)  /**< (ESPI_MSVW07_1_MSVW09_DW1) A change in the value of SRC2 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW09_DW1_SRC2_IRQ_SELECT(value) (ESPI_MSVW07_1_MSVW09_DW1_SRC2_IRQ_SELECT_Msk & ((value) << ESPI_MSVW07_1_MSVW09_DW1_SRC2_IRQ_SELECT_Pos))
#define ESPI_MSVW07_1_MSVW09_DW1_SRC3_IRQ_SELECT_Pos (24)                                           /**< (ESPI_MSVW07_1_MSVW09_DW1) A change in the value of SRC3 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW09_DW1_SRC3_IRQ_SELECT_Msk (0xFU << ESPI_MSVW07_1_MSVW09_DW1_SRC3_IRQ_SELECT_Pos)  /**< (ESPI_MSVW07_1_MSVW09_DW1) A change in the value of SRC3 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW09_DW1_SRC3_IRQ_SELECT(value) (ESPI_MSVW07_1_MSVW09_DW1_SRC3_IRQ_SELECT_Msk & ((value) << ESPI_MSVW07_1_MSVW09_DW1_SRC3_IRQ_SELECT_Pos))
#define ESPI_MSVW07_1_MSVW09_DW1_Msk          (0x0F0F0F0FUL)                                 /**< (ESPI_MSVW07_1_MSVW09_DW1) Register Mask  */

/* -------- ESPI_MSVW07_1_MSVW09_DW2 : (ESPI_MSVW07_1 Offset: 0x20) (R/W 32) Master-to-Slave Virtual Wire 9 Register (DW 2) -------- */

typedef union
{
  struct
  {
    uint32_t SRC0:1;                    /**< bit:      0  Master-to-Slave data for Bit Position 0 for the virtual wire associated with the index defined by INDEX. */
    uint32_t :7;                        /**< bit:   1..7  Reserved                                      */
    uint32_t SRC1:1;                    /**< bit:      8  Master-to-Slave data for Bit Position 1 for the virtual wire associated with the index defined by INDEX. */
    uint32_t :7;                        /**< bit:  9..15  Reserved                                      */
    uint32_t SRC2:1;                    /**< bit:     16  Master-to-Slave data for Bit Position 2 for the virtual wire associated with the index defined by INDEX. */
    uint32_t :7;                        /**< bit: 17..23  Reserved                                      */
    uint32_t SRC3:1;                    /**< bit:     24  Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. */
    uint32_t :7;                        /**< bit: 25..31  Reserved                                      */
  };
  struct
  {
    uint32_t SRC:4;                     /**< bit:   0..3  Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. */
    uint32_t :28;                       /**< bit:  4..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_MSVW07_1_MSVW09_DW2_bits_t;
#define ESPI_MSVW07_1_MSVW09_DW2_RESETVALUE (0x00U)                                       /**<  (ESPI_MSVW07_1_MSVW09_DW2) Master-to-Slave Virtual Wire 9 Register (DW 2)  Reset Value */

#define ESPI_MSVW07_1_MSVW09_DW2_SRC0_Pos     (0)                                            /**< (ESPI_MSVW07_1_MSVW09_DW2) Master-to-Slave data for Bit Position 0 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC0_Msk     (0x1U << ESPI_MSVW07_1_MSVW09_DW2_SRC0_Pos)    /**< (ESPI_MSVW07_1_MSVW09_DW2) Master-to-Slave data for Bit Position 0 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC1_Pos     (8)                                            /**< (ESPI_MSVW07_1_MSVW09_DW2) Master-to-Slave data for Bit Position 1 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC1_Msk     (0x1U << ESPI_MSVW07_1_MSVW09_DW2_SRC1_Pos)    /**< (ESPI_MSVW07_1_MSVW09_DW2) Master-to-Slave data for Bit Position 1 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC2_Pos     (16)                                           /**< (ESPI_MSVW07_1_MSVW09_DW2) Master-to-Slave data for Bit Position 2 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC2_Msk     (0x1U << ESPI_MSVW07_1_MSVW09_DW2_SRC2_Pos)    /**< (ESPI_MSVW07_1_MSVW09_DW2) Master-to-Slave data for Bit Position 2 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC3_Pos     (24)                                           /**< (ESPI_MSVW07_1_MSVW09_DW2) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC3_Msk     (0x1U << ESPI_MSVW07_1_MSVW09_DW2_SRC3_Pos)    /**< (ESPI_MSVW07_1_MSVW09_DW2) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW09_DW2_Msk          (0x01010101UL)                                 /**< (ESPI_MSVW07_1_MSVW09_DW2) Register Mask  */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC_Pos      (0)                                            /**< (ESPI_MSVW07_1_MSVW09_DW2 Position) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC_Msk      (0xFU << ESPI_MSVW07_1_MSVW09_DW2_SRC_Pos)     /**< (ESPI_MSVW07_1_MSVW09_DW2 Mask) SRC */
#define ESPI_MSVW07_1_MSVW09_DW2_SRC(value)   (ESPI_MSVW07_1_MSVW09_DW2_SRC_Msk & ((value) << ESPI_MSVW07_1_MSVW09_DW2_SRC_Pos))

/* -------- ESPI_MSVW07_1_MSVW10_DW0 : (ESPI_MSVW07_1 Offset: 0x24) (R/W 32) Master-to-Slave Virtual Wire 10 Register (DW 0) -------- */

typedef union
{
  struct
  {
    uint32_t INDEX:8;                   /**< bit:   0..7  The Index for SRC0, SRC1, SRC2 and SRC3. When the Index field of an incoming Master-to-Slave Virtual Wire transaction\n      matches this value, the fields SRC0, SRC1, SRC2 and SRC3 are updated by the data contained in the respective bit positions in the\n      transaction. Setting the INDEX field to 0 disables the register from accepting any Virtual Wire traffic from the Master. Setting the\n      INDEX field to 1 is illegal, since INDEX=1 is reserved for Serial IRQ. */
    uint32_t MTOS_SRC:2;                /**< bit:   8..9  This field determines which reset signal in addition to RESET_SYS resets SRC[3:0] in this register:\n      3=PLTRST\n      2=RESET_SIO\n      1=RESET_SYS. This is the only reset signal that will reset the SRC fields.\n      0=RESET_ESPI. */
    uint32_t :2;                        /**< bit: 10..11  Reserved                                      */
    uint32_t MTOS_R_STATE:4;            /**< bit: 12..15  The four bits in this field are loaded into SRC0, SRC1, SRC2 and SRC3 when the reset signal selected by M2S RESET SRC is\n      asserted. If MTOS_SRC is set for RESET_SYS, the SRC bits are set to the default value of this field, rather than its programmed value,\n      since this field is also reset on RESET_SYS. */
    uint32_t :16;                       /**< bit: 16..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_MSVW07_1_MSVW10_DW0_bits_t;
#define ESPI_MSVW07_1_MSVW10_DW0_RESETVALUE (0x00U)                                       /**<  (ESPI_MSVW07_1_MSVW10_DW0) Master-to-Slave Virtual Wire 10 Register (DW 0)  Reset Value */

#define ESPI_MSVW07_1_MSVW10_DW0_INDEX_Pos    (0)                                            /**< (ESPI_MSVW07_1_MSVW10_DW0) The Index for SRC0, SRC1, SRC2 and SRC3. When the Index field of an incoming Master-to-Slave Virtual Wire transaction\n      matches this value, the fields SRC0, SRC1, SRC2 and SRC3 are updated by the data contained in the respective bit positions in the\n      transaction. Setting the INDEX field to 0 disables the register from accepting any Virtual Wire traffic from the Master. Setting the\n      INDEX field to 1 is illegal, since INDEX=1 is reserved for Serial IRQ. Position */
#define ESPI_MSVW07_1_MSVW10_DW0_INDEX_Msk    (0xFFU << ESPI_MSVW07_1_MSVW10_DW0_INDEX_Pos)  /**< (ESPI_MSVW07_1_MSVW10_DW0) The Index for SRC0, SRC1, SRC2 and SRC3. When the Index field of an incoming Master-to-Slave Virtual Wire transaction\n      matches this value, the fields SRC0, SRC1, SRC2 and SRC3 are updated by the data contained in the respective bit positions in the\n      transaction. Setting the INDEX field to 0 disables the register from accepting any Virtual Wire traffic from the Master. Setting the\n      INDEX field to 1 is illegal, since INDEX=1 is reserved for Serial IRQ. Mask */
#define ESPI_MSVW07_1_MSVW10_DW0_INDEX(value) (ESPI_MSVW07_1_MSVW10_DW0_INDEX_Msk & ((value) << ESPI_MSVW07_1_MSVW10_DW0_INDEX_Pos))
#define ESPI_MSVW07_1_MSVW10_DW0_MTOS_SRC_Pos (8)                                            /**< (ESPI_MSVW07_1_MSVW10_DW0) This field determines which reset signal in addition to RESET_SYS resets SRC[3:0] in this register:\n      3=PLTRST\n      2=RESET_SIO\n      1=RESET_SYS. This is the only reset signal that will reset the SRC fields.\n      0=RESET_ESPI. Position */
#define ESPI_MSVW07_1_MSVW10_DW0_MTOS_SRC_Msk (0x3U << ESPI_MSVW07_1_MSVW10_DW0_MTOS_SRC_Pos)  /**< (ESPI_MSVW07_1_MSVW10_DW0) This field determines which reset signal in addition to RESET_SYS resets SRC[3:0] in this register:\n      3=PLTRST\n      2=RESET_SIO\n      1=RESET_SYS. This is the only reset signal that will reset the SRC fields.\n      0=RESET_ESPI. Mask */
#define ESPI_MSVW07_1_MSVW10_DW0_MTOS_SRC(value) (ESPI_MSVW07_1_MSVW10_DW0_MTOS_SRC_Msk & ((value) << ESPI_MSVW07_1_MSVW10_DW0_MTOS_SRC_Pos))
#define ESPI_MSVW07_1_MSVW10_DW0_MTOS_R_STATE_Pos (12)                                           /**< (ESPI_MSVW07_1_MSVW10_DW0) The four bits in this field are loaded into SRC0, SRC1, SRC2 and SRC3 when the reset signal selected by M2S RESET SRC is\n      asserted. If MTOS_SRC is set for RESET_SYS, the SRC bits are set to the default value of this field, rather than its programmed value,\n      since this field is also reset on RESET_SYS. Position */
#define ESPI_MSVW07_1_MSVW10_DW0_MTOS_R_STATE_Msk (0xFU << ESPI_MSVW07_1_MSVW10_DW0_MTOS_R_STATE_Pos)  /**< (ESPI_MSVW07_1_MSVW10_DW0) The four bits in this field are loaded into SRC0, SRC1, SRC2 and SRC3 when the reset signal selected by M2S RESET SRC is\n      asserted. If MTOS_SRC is set for RESET_SYS, the SRC bits are set to the default value of this field, rather than its programmed value,\n      since this field is also reset on RESET_SYS. Mask */
#define ESPI_MSVW07_1_MSVW10_DW0_MTOS_R_STATE(value) (ESPI_MSVW07_1_MSVW10_DW0_MTOS_R_STATE_Msk & ((value) << ESPI_MSVW07_1_MSVW10_DW0_MTOS_R_STATE_Pos))
#define ESPI_MSVW07_1_MSVW10_DW0_Msk          (0x0000F3FFUL)                                 /**< (ESPI_MSVW07_1_MSVW10_DW0) Register Mask  */

/* -------- ESPI_MSVW07_1_MSVW10_DW1 : (ESPI_MSVW07_1 Offset: 0x28) (R/W 32) Master-to-Slave Virtual Wire 10 Register (DW 1) -------- */

typedef union
{
  struct
  {
    uint32_t SRC0_IRQ_SELECT:4;         /**< bit:   0..3  A change in the value of SRC0 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. */
    uint32_t :4;                        /**< bit:   4..7  Reserved                                      */
    uint32_t SRC1_IRQ_SELECT:4;         /**< bit:  8..11  A change in the value of SRC1 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. */
    uint32_t :4;                        /**< bit: 12..15  Reserved                                      */
    uint32_t SRC2_IRQ_SELECT:4;         /**< bit: 16..19  A change in the value of SRC2 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. */
    uint32_t :4;                        /**< bit: 20..23  Reserved                                      */
    uint32_t SRC3_IRQ_SELECT:4;         /**< bit: 24..27  A change in the value of SRC3 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. */
    uint32_t :4;                        /**< bit: 28..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_MSVW07_1_MSVW10_DW1_bits_t;
#define ESPI_MSVW07_1_MSVW10_DW1_RESETVALUE (0x4040404U)                                  /**<  (ESPI_MSVW07_1_MSVW10_DW1) Master-to-Slave Virtual Wire 10 Register (DW 1)  Reset Value */

#define ESPI_MSVW07_1_MSVW10_DW1_SRC0_IRQ_SELECT_Pos (0)                                            /**< (ESPI_MSVW07_1_MSVW10_DW1) A change in the value of SRC0 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW10_DW1_SRC0_IRQ_SELECT_Msk (0xFU << ESPI_MSVW07_1_MSVW10_DW1_SRC0_IRQ_SELECT_Pos)  /**< (ESPI_MSVW07_1_MSVW10_DW1) A change in the value of SRC0 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW10_DW1_SRC0_IRQ_SELECT(value) (ESPI_MSVW07_1_MSVW10_DW1_SRC0_IRQ_SELECT_Msk & ((value) << ESPI_MSVW07_1_MSVW10_DW1_SRC0_IRQ_SELECT_Pos))
#define ESPI_MSVW07_1_MSVW10_DW1_SRC1_IRQ_SELECT_Pos (8)                                            /**< (ESPI_MSVW07_1_MSVW10_DW1) A change in the value of SRC1 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW10_DW1_SRC1_IRQ_SELECT_Msk (0xFU << ESPI_MSVW07_1_MSVW10_DW1_SRC1_IRQ_SELECT_Pos)  /**< (ESPI_MSVW07_1_MSVW10_DW1) A change in the value of SRC1 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW10_DW1_SRC1_IRQ_SELECT(value) (ESPI_MSVW07_1_MSVW10_DW1_SRC1_IRQ_SELECT_Msk & ((value) << ESPI_MSVW07_1_MSVW10_DW1_SRC1_IRQ_SELECT_Pos))
#define ESPI_MSVW07_1_MSVW10_DW1_SRC2_IRQ_SELECT_Pos (16)                                           /**< (ESPI_MSVW07_1_MSVW10_DW1) A change in the value of SRC2 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW10_DW1_SRC2_IRQ_SELECT_Msk (0xFU << ESPI_MSVW07_1_MSVW10_DW1_SRC2_IRQ_SELECT_Pos)  /**< (ESPI_MSVW07_1_MSVW10_DW1) A change in the value of SRC2 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW10_DW1_SRC2_IRQ_SELECT(value) (ESPI_MSVW07_1_MSVW10_DW1_SRC2_IRQ_SELECT_Msk & ((value) << ESPI_MSVW07_1_MSVW10_DW1_SRC2_IRQ_SELECT_Pos))
#define ESPI_MSVW07_1_MSVW10_DW1_SRC3_IRQ_SELECT_Pos (24)                                           /**< (ESPI_MSVW07_1_MSVW10_DW1) A change in the value of SRC3 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Position */
#define ESPI_MSVW07_1_MSVW10_DW1_SRC3_IRQ_SELECT_Msk (0xFU << ESPI_MSVW07_1_MSVW10_DW1_SRC3_IRQ_SELECT_Pos)  /**< (ESPI_MSVW07_1_MSVW10_DW1) A change in the value of SRC3 will generate an interrupt to the EC. Changes in the SRC register value caused by a Reset Event\n      do not generate an interrupt. Mask */
#define ESPI_MSVW07_1_MSVW10_DW1_SRC3_IRQ_SELECT(value) (ESPI_MSVW07_1_MSVW10_DW1_SRC3_IRQ_SELECT_Msk & ((value) << ESPI_MSVW07_1_MSVW10_DW1_SRC3_IRQ_SELECT_Pos))
#define ESPI_MSVW07_1_MSVW10_DW1_Msk          (0x0F0F0F0FUL)                                 /**< (ESPI_MSVW07_1_MSVW10_DW1) Register Mask  */

/* -------- ESPI_MSVW07_1_MSVW10_DW2 : (ESPI_MSVW07_1 Offset: 0x2c) (R/W 32) Master-to-Slave Virtual Wire 10 Register (DW 2) -------- */

typedef union
{
  struct
  {
    uint32_t SRC0:1;                    /**< bit:      0  Master-to-Slave data for Bit Position 0 for the virtual wire associated with the index defined by INDEX. */
    uint32_t :7;                        /**< bit:   1..7  Reserved                                      */
    uint32_t SRC1:1;                    /**< bit:      8  Master-to-Slave data for Bit Position 1 for the virtual wire associated with the index defined by INDEX. */
    uint32_t :7;                        /**< bit:  9..15  Reserved                                      */
    uint32_t SRC2:1;                    /**< bit:     16  Master-to-Slave data for Bit Position 2 for the virtual wire associated with the index defined by INDEX. */
    uint32_t :7;                        /**< bit: 17..23  Reserved                                      */
    uint32_t SRC3:1;                    /**< bit:     24  Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. */
    uint32_t :7;                        /**< bit: 25..31  Reserved                                      */
  };
  struct
  {
    uint32_t SRC:4;                     /**< bit:   0..3  Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. */
    uint32_t :28;                       /**< bit:  4..31  Reserved                                      */
  };
  uint32_t w;
} __ESPI_MSVW07_1_MSVW10_DW2_bits_t;
#define ESPI_MSVW07_1_MSVW10_DW2_RESETVALUE (0x00U)                                       /**<  (ESPI_MSVW07_1_MSVW10_DW2) Master-to-Slave Virtual Wire 10 Register (DW 2)  Reset Value */

#define ESPI_MSVW07_1_MSVW10_DW2_SRC0_Pos     (0)                                            /**< (ESPI_MSVW07_1_MSVW10_DW2) Master-to-Slave data for Bit Position 0 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC0_Msk     (0x1U << ESPI_MSVW07_1_MSVW10_DW2_SRC0_Pos)    /**< (ESPI_MSVW07_1_MSVW10_DW2) Master-to-Slave data for Bit Position 0 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC1_Pos     (8)                                            /**< (ESPI_MSVW07_1_MSVW10_DW2) Master-to-Slave data for Bit Position 1 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC1_Msk     (0x1U << ESPI_MSVW07_1_MSVW10_DW2_SRC1_Pos)    /**< (ESPI_MSVW07_1_MSVW10_DW2) Master-to-Slave data for Bit Position 1 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC2_Pos     (16)                                           /**< (ESPI_MSVW07_1_MSVW10_DW2) Master-to-Slave data for Bit Position 2 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC2_Msk     (0x1U << ESPI_MSVW07_1_MSVW10_DW2_SRC2_Pos)    /**< (ESPI_MSVW07_1_MSVW10_DW2) Master-to-Slave data for Bit Position 2 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC3_Pos     (24)                                           /**< (ESPI_MSVW07_1_MSVW10_DW2) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. Position */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC3_Msk     (0x1U << ESPI_MSVW07_1_MSVW10_DW2_SRC3_Pos)    /**< (ESPI_MSVW07_1_MSVW10_DW2) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. Mask */
#define ESPI_MSVW07_1_MSVW10_DW2_Msk          (0x01010101UL)                                 /**< (ESPI_MSVW07_1_MSVW10_DW2) Register Mask  */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC_Pos      (0)                                            /**< (ESPI_MSVW07_1_MSVW10_DW2 Position) Master-to-Slave data for Bit Position 3 for the virtual wire associated with the index defined by INDEX. */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC_Msk      (0xFU << ESPI_MSVW07_1_MSVW10_DW2_SRC_Pos)     /**< (ESPI_MSVW07_1_MSVW10_DW2 Mask) SRC */
#define ESPI_MSVW07_1_MSVW10_DW2_SRC(value)   (ESPI_MSVW07_1_MSVW10_DW2_SRC_Msk & ((value) << ESPI_MSVW07_1_MSVW10_DW2_SRC_Pos))

/** \brief ESPI_MSVW07_1 register offsets definitions */
#define ESPI_MSVW07_1_MSVW07_DW0_OFFSET (0x00)         /**< (ESPI_MSVW07_1_MSVW07_DW0) Master-to-Slave Virtual Wire 7 Register (DW 0) Offset */
#define ESPI_MSVW07_1_MSVW07_DW1_OFFSET (0x04)         /**< (ESPI_MSVW07_1_MSVW07_DW1) Master-to-Slave Virtual Wire 7 Register (DW 1) Offset */
#define ESPI_MSVW07_1_MSVW07_DW2_OFFSET (0x08)         /**< (ESPI_MSVW07_1_MSVW07_DW2) Master-to-Slave Virtual Wire 7 Register (DW 2) Offset */
#define ESPI_MSVW07_1_MSVW08_DW0_OFFSET (0x0C)         /**< (ESPI_MSVW07_1_MSVW08_DW0) Master-to-Slave Virtual Wire 8 Register (DW 0) Offset */
#define ESPI_MSVW07_1_MSVW08_DW1_OFFSET (0x10)         /**< (ESPI_MSVW07_1_MSVW08_DW1) Master-to-Slave Virtual Wire 8 Register (DW 1) Offset */
#define ESPI_MSVW07_1_MSVW08_DW2_OFFSET (0x14)         /**< (ESPI_MSVW07_1_MSVW08_DW2) Master-to-Slave Virtual Wire 8 Register (DW 2) Offset */
#define ESPI_MSVW07_1_MSVW09_DW0_OFFSET (0x18)         /**< (ESPI_MSVW07_1_MSVW09_DW0) Master-to-Slave Virtual Wire 9 Register (DW 0) Offset */
#define ESPI_MSVW07_1_MSVW09_DW1_OFFSET (0x1C)         /**< (ESPI_MSVW07_1_MSVW09_DW1) Master-to-Slave Virtual Wire 9 Register (DW 1) Offset */
#define ESPI_MSVW07_1_MSVW09_DW2_OFFSET (0x20)         /**< (ESPI_MSVW07_1_MSVW09_DW2) Master-to-Slave Virtual Wire 9 Register (DW 2) Offset */
#define ESPI_MSVW07_1_MSVW10_DW0_OFFSET (0x24)         /**< (ESPI_MSVW07_1_MSVW10_DW0) Master-to-Slave Virtual Wire 10 Register (DW 0) Offset */
#define ESPI_MSVW07_1_MSVW10_DW1_OFFSET (0x28)         /**< (ESPI_MSVW07_1_MSVW10_DW1) Master-to-Slave Virtual Wire 10 Register (DW 1) Offset */
#define ESPI_MSVW07_1_MSVW10_DW2_OFFSET (0x2C)         /**< (ESPI_MSVW07_1_MSVW10_DW2) Master-to-Slave Virtual Wire 10 Register (DW 2) Offset */

/** \brief ESPI_MSVW07_1 register API structure */
typedef struct
{  /* The Virtual Wire Channel permits the System to emulate a set of wires that interconnect the system Core Logic with the EC. */
  __IO  __ESPI_MSVW07_1_MSVW07_DW0_bits_t MSVW07_DW0;    /**< Offset: 0x00 (R/W  32) Master-to-Slave Virtual Wire 7 Register (DW 0) */
  __IO  __ESPI_MSVW07_1_MSVW07_DW1_bits_t MSVW07_DW1;    /**< Offset: 0x04 (R/W  32) Master-to-Slave Virtual Wire 7 Register (DW 1) */
  __IO  __ESPI_MSVW07_1_MSVW07_DW2_bits_t MSVW07_DW2;    /**< Offset: 0x08 (R/W  32) Master-to-Slave Virtual Wire 7 Register (DW 2) */
  __IO  __ESPI_MSVW07_1_MSVW08_DW0_bits_t MSVW08_DW0;    /**< Offset: 0x0C (R/W  32) Master-to-Slave Virtual Wire 8 Register (DW 0) */
  __IO  __ESPI_MSVW07_1_MSVW08_DW1_bits_t MSVW08_DW1;    /**< Offset: 0x10 (R/W  32) Master-to-Slave Virtual Wire 8 Register (DW 1) */
  __IO  __ESPI_MSVW07_1_MSVW08_DW2_bits_t MSVW08_DW2;    /**< Offset: 0x14 (R/W  32) Master-to-Slave Virtual Wire 8 Register (DW 2) */
  __IO  __ESPI_MSVW07_1_MSVW09_DW0_bits_t MSVW09_DW0;    /**< Offset: 0x18 (R/W  32) Master-to-Slave Virtual Wire 9 Register (DW 0) */
  __IO  __ESPI_MSVW07_1_MSVW09_DW1_bits_t MSVW09_DW1;    /**< Offset: 0x1C (R/W  32) Master-to-Slave Virtual Wire 9 Register (DW 1) */
  __IO  __ESPI_MSVW07_1_MSVW09_DW2_bits_t MSVW09_DW2;    /**< Offset: 0x20 (R/W  32) Master-to-Slave Virtual Wire 9 Register (DW 2) */
  __IO  __ESPI_MSVW07_1_MSVW10_DW0_bits_t MSVW10_DW0;    /**< Offset: 0x24 (R/W  32) Master-to-Slave Virtual Wire 10 Register (DW 0) */
  __IO  __ESPI_MSVW07_1_MSVW10_DW1_bits_t MSVW10_DW1;    /**< Offset: 0x28 (R/W  32) Master-to-Slave Virtual Wire 10 Register (DW 1) */
  __IO  __ESPI_MSVW07_1_MSVW10_DW2_bits_t MSVW10_DW2;    /**< Offset: 0x2C (R/W  32) Master-to-Slave Virtual Wire 10 Register (DW 2) */
} espimsvw071_registers_t;
/** @}  end of The Virtual Wire Channel permits the System to emulate a set of wires that interconnect the system Core Logic with the EC. */

#endif /* _PIC32CX_0525SG12_ESPI_MSVW07_1_COMPONENT_H_ */
