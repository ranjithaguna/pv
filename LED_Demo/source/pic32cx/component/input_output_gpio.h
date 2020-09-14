/**
 * \brief Component description for PIC32CX/0525SG12 INPUT_OUTPUT_GPIO
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
#ifndef _PIC32CX_0525SG12_INPUT_OUTPUT_GPIO_COMPONENT_H_
#define _PIC32CX_0525SG12_INPUT_OUTPUT_GPIO_COMPONENT_H_

/** \addtogroup PIC32CX_0525SG12_INPUT_OUTPUT_GPIO GPIO Input/Output Registers
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR INPUT_OUTPUT_GPIO */
/* ========================================================================== */

/* -------- INPUT_OUTPUT_GPIO_INPUT_GPIO_000_036 : (INPUT_OUTPUT_GPIO Offset: 0x00) (R/W 32) The GPIO Input Registers can always be used to read the state of a pin, even when the pin is in an output mode and/or when a\n     signal function other than the GPIO signal function is selected. -------- */

typedef union
{
  uint32_t w;
} __INPUT_OUTPUT_GPIO_INPUT_GPIO_000_036_bits_t;
#define INPUT_OUTPUT_GPIO_INPUT_GPIO_000_036_RESETVALUE (0x00U)                                       /**<  (INPUT_OUTPUT_GPIO_INPUT_GPIO_000_036) The GPIO Input Registers can always be used to read the state of a pin, even when the pin is in an output mode and/or when a\n     signal function other than the GPIO signal function is selected.  Reset Value */

#define INPUT_OUTPUT_GPIO_INPUT_GPIO_000_036_Msk (0x00000000UL)                                 /**< (INPUT_OUTPUT_GPIO_INPUT_GPIO_000_036) Register Mask  */

/* -------- INPUT_OUTPUT_GPIO_INPUT_GPIO_040_076 : (INPUT_OUTPUT_GPIO Offset: 0x04) (R/W 32) Input GPIO[040:076] -------- */

typedef union
{
  uint32_t w;
} __INPUT_OUTPUT_GPIO_INPUT_GPIO_040_076_bits_t;
#define INPUT_OUTPUT_GPIO_INPUT_GPIO_040_076_RESETVALUE (0x00U)                                       /**<  (INPUT_OUTPUT_GPIO_INPUT_GPIO_040_076) Input GPIO[040:076]  Reset Value */

#define INPUT_OUTPUT_GPIO_INPUT_GPIO_040_076_Msk (0x00000000UL)                                 /**< (INPUT_OUTPUT_GPIO_INPUT_GPIO_040_076) Register Mask  */

/* -------- INPUT_OUTPUT_GPIO_INPUT_GPIO_100_136 : (INPUT_OUTPUT_GPIO Offset: 0x08) (R/W 32) Input GPIO[100:136] -------- */

typedef union
{
  uint32_t w;
} __INPUT_OUTPUT_GPIO_INPUT_GPIO_100_136_bits_t;
#define INPUT_OUTPUT_GPIO_INPUT_GPIO_100_136_RESETVALUE (0x00U)                                       /**<  (INPUT_OUTPUT_GPIO_INPUT_GPIO_100_136) Input GPIO[100:136]  Reset Value */

#define INPUT_OUTPUT_GPIO_INPUT_GPIO_100_136_Msk (0x00000000UL)                                 /**< (INPUT_OUTPUT_GPIO_INPUT_GPIO_100_136) Register Mask  */

/* -------- INPUT_OUTPUT_GPIO_INPUT_GPIO_140_176 : (INPUT_OUTPUT_GPIO Offset: 0x0c) (R/W 32) Input GPIO[140:176] -------- */

typedef union
{
  uint32_t w;
} __INPUT_OUTPUT_GPIO_INPUT_GPIO_140_176_bits_t;
#define INPUT_OUTPUT_GPIO_INPUT_GPIO_140_176_RESETVALUE (0x00U)                                       /**<  (INPUT_OUTPUT_GPIO_INPUT_GPIO_140_176) Input GPIO[140:176]  Reset Value */

#define INPUT_OUTPUT_GPIO_INPUT_GPIO_140_176_Msk (0x00000000UL)                                 /**< (INPUT_OUTPUT_GPIO_INPUT_GPIO_140_176) Register Mask  */

/* -------- INPUT_OUTPUT_GPIO_INPUT_GPIO_200_236 : (INPUT_OUTPUT_GPIO Offset: 0x10) (R/W 32) Input GPIO[200:236] -------- */

typedef union
{
  uint32_t w;
} __INPUT_OUTPUT_GPIO_INPUT_GPIO_200_236_bits_t;
#define INPUT_OUTPUT_GPIO_INPUT_GPIO_200_236_RESETVALUE (0x00U)                                       /**<  (INPUT_OUTPUT_GPIO_INPUT_GPIO_200_236) Input GPIO[200:236]  Reset Value */

#define INPUT_OUTPUT_GPIO_INPUT_GPIO_200_236_Msk (0x00000000UL)                                 /**< (INPUT_OUTPUT_GPIO_INPUT_GPIO_200_236) Register Mask  */

/* -------- INPUT_OUTPUT_GPIO_INPUT_GPIO_240_276 : (INPUT_OUTPUT_GPIO Offset: 0x14) (R/W 32) Input GPIO[240:276] -------- */

typedef union
{
  uint32_t w;
} __INPUT_OUTPUT_GPIO_INPUT_GPIO_240_276_bits_t;
#define INPUT_OUTPUT_GPIO_INPUT_GPIO_240_276_RESETVALUE (0x00U)                                       /**<  (INPUT_OUTPUT_GPIO_INPUT_GPIO_240_276) Input GPIO[240:276]  Reset Value */

#define INPUT_OUTPUT_GPIO_INPUT_GPIO_240_276_Msk (0x00000000UL)                                 /**< (INPUT_OUTPUT_GPIO_INPUT_GPIO_240_276) Register Mask  */

/* -------- INPUT_OUTPUT_GPIO_OUTPUT_GPIO_000_036 : (INPUT_OUTPUT_GPIO Offset: 0x80) (R/W 32) If enabled by the Output GPIO Write Enable bit, the GPIO Output bits determine the level on the GPIO pin when the pin is\n     configured for the GPIO output function. On writes: If enabled via the Output GPIO Write Enable 0: GPIO[x] out = '0', 1: GPIO[x] out = '1'. -------- */

typedef union
{
  uint32_t w;
} __INPUT_OUTPUT_GPIO_OUTPUT_GPIO_000_036_bits_t;
#define INPUT_OUTPUT_GPIO_OUTPUT_GPIO_000_036_RESETVALUE (0x00U)                                       /**<  (INPUT_OUTPUT_GPIO_OUTPUT_GPIO_000_036) If enabled by the Output GPIO Write Enable bit, the GPIO Output bits determine the level on the GPIO pin when the pin is\n     configured for the GPIO output function. On writes: If enabled via the Output GPIO Write Enable 0: GPIO[x] out = '0', 1: GPIO[x] out = '1'.  Reset Value */

#define INPUT_OUTPUT_GPIO_OUTPUT_GPIO_000_036_Msk (0x00000000UL)                                 /**< (INPUT_OUTPUT_GPIO_OUTPUT_GPIO_000_036) Register Mask  */

/* -------- INPUT_OUTPUT_GPIO_OUPUT_GPIO_040_076 : (INPUT_OUTPUT_GPIO Offset: 0x84) (R/W 32) Output GPIO[040:076] -------- */

typedef union
{
  uint32_t w;
} __INPUT_OUTPUT_GPIO_OUPUT_GPIO_040_076_bits_t;
#define INPUT_OUTPUT_GPIO_OUPUT_GPIO_040_076_RESETVALUE (0x00U)                                       /**<  (INPUT_OUTPUT_GPIO_OUPUT_GPIO_040_076) Output GPIO[040:076]  Reset Value */

#define INPUT_OUTPUT_GPIO_OUPUT_GPIO_040_076_Msk (0x00000000UL)                                 /**< (INPUT_OUTPUT_GPIO_OUPUT_GPIO_040_076) Register Mask  */

/* -------- INPUT_OUTPUT_GPIO_OUTPUT_GPIO_100_136 : (INPUT_OUTPUT_GPIO Offset: 0x88) (R/W 32) Output GPIO[100:136] -------- */

typedef union
{
  uint32_t w;
} __INPUT_OUTPUT_GPIO_OUTPUT_GPIO_100_136_bits_t;
#define INPUT_OUTPUT_GPIO_OUTPUT_GPIO_100_136_RESETVALUE (0x00U)                                       /**<  (INPUT_OUTPUT_GPIO_OUTPUT_GPIO_100_136) Output GPIO[100:136]  Reset Value */

#define INPUT_OUTPUT_GPIO_OUTPUT_GPIO_100_136_Msk (0x00000000UL)                                 /**< (INPUT_OUTPUT_GPIO_OUTPUT_GPIO_100_136) Register Mask  */

/* -------- INPUT_OUTPUT_GPIO_OUTPUT_GPIO_140_176 : (INPUT_OUTPUT_GPIO Offset: 0x8c) (R/W 32) Output GPIO[140:176] -------- */

typedef union
{
  uint32_t w;
} __INPUT_OUTPUT_GPIO_OUTPUT_GPIO_140_176_bits_t;
#define INPUT_OUTPUT_GPIO_OUTPUT_GPIO_140_176_RESETVALUE (0x00U)                                       /**<  (INPUT_OUTPUT_GPIO_OUTPUT_GPIO_140_176) Output GPIO[140:176]  Reset Value */

#define INPUT_OUTPUT_GPIO_OUTPUT_GPIO_140_176_Msk (0x00000000UL)                                 /**< (INPUT_OUTPUT_GPIO_OUTPUT_GPIO_140_176) Register Mask  */

/* -------- INPUT_OUTPUT_GPIO_OUTPUT_GPIO_200_236 : (INPUT_OUTPUT_GPIO Offset: 0x90) (R/W 32) Output GPIO[200:236] -------- */

typedef union
{
  uint32_t w;
} __INPUT_OUTPUT_GPIO_OUTPUT_GPIO_200_236_bits_t;
#define INPUT_OUTPUT_GPIO_OUTPUT_GPIO_200_236_RESETVALUE (0x00U)                                       /**<  (INPUT_OUTPUT_GPIO_OUTPUT_GPIO_200_236) Output GPIO[200:236]  Reset Value */

#define INPUT_OUTPUT_GPIO_OUTPUT_GPIO_200_236_Msk (0x00000000UL)                                 /**< (INPUT_OUTPUT_GPIO_OUTPUT_GPIO_200_236) Register Mask  */

/* -------- INPUT_OUTPUT_GPIO_OUTPUT_GPIO_240_276 : (INPUT_OUTPUT_GPIO Offset: 0x94) (R/W 32) Output GPIO[240:276] -------- */

typedef union
{
  uint32_t w;
} __INPUT_OUTPUT_GPIO_OUTPUT_GPIO_240_276_bits_t;
#define INPUT_OUTPUT_GPIO_OUTPUT_GPIO_240_276_RESETVALUE (0x00U)                                       /**<  (INPUT_OUTPUT_GPIO_OUTPUT_GPIO_240_276) Output GPIO[240:276]  Reset Value */

#define INPUT_OUTPUT_GPIO_OUTPUT_GPIO_240_276_Msk (0x00000000UL)                                 /**< (INPUT_OUTPUT_GPIO_OUTPUT_GPIO_240_276) Register Mask  */

/** \brief INPUT_OUTPUT_GPIO register offsets definitions */
#define INPUT_OUTPUT_GPIO_INPUT_GPIO_000_036_OFFSET (0x00)         /**< (INPUT_OUTPUT_GPIO_INPUT_GPIO_000_036) The GPIO Input Registers can always be used to read the state of a pin, even when the pin is in an output mode and/or when a\n     signal function other than the GPIO signal function is selected. Offset */
#define INPUT_OUTPUT_GPIO_INPUT_GPIO_040_076_OFFSET (0x04)         /**< (INPUT_OUTPUT_GPIO_INPUT_GPIO_040_076) Input GPIO[040:076] Offset */
#define INPUT_OUTPUT_GPIO_INPUT_GPIO_100_136_OFFSET (0x08)         /**< (INPUT_OUTPUT_GPIO_INPUT_GPIO_100_136) Input GPIO[100:136] Offset */
#define INPUT_OUTPUT_GPIO_INPUT_GPIO_140_176_OFFSET (0x0C)         /**< (INPUT_OUTPUT_GPIO_INPUT_GPIO_140_176) Input GPIO[140:176] Offset */
#define INPUT_OUTPUT_GPIO_INPUT_GPIO_200_236_OFFSET (0x10)         /**< (INPUT_OUTPUT_GPIO_INPUT_GPIO_200_236) Input GPIO[200:236] Offset */
#define INPUT_OUTPUT_GPIO_INPUT_GPIO_240_276_OFFSET (0x14)         /**< (INPUT_OUTPUT_GPIO_INPUT_GPIO_240_276) Input GPIO[240:276] Offset */
#define INPUT_OUTPUT_GPIO_OUTPUT_GPIO_000_036_OFFSET (0x80)         /**< (INPUT_OUTPUT_GPIO_OUTPUT_GPIO_000_036) If enabled by the Output GPIO Write Enable bit, the GPIO Output bits determine the level on the GPIO pin when the pin is\n     configured for the GPIO output function. On writes: If enabled via the Output GPIO Write Enable 0: GPIO[x] out = '0', 1: GPIO[x] out = '1'. Offset */
#define INPUT_OUTPUT_GPIO_OUPUT_GPIO_040_076_OFFSET (0x84)         /**< (INPUT_OUTPUT_GPIO_OUPUT_GPIO_040_076) Output GPIO[040:076] Offset */
#define INPUT_OUTPUT_GPIO_OUTPUT_GPIO_100_136_OFFSET (0x88)         /**< (INPUT_OUTPUT_GPIO_OUTPUT_GPIO_100_136) Output GPIO[100:136] Offset */
#define INPUT_OUTPUT_GPIO_OUTPUT_GPIO_140_176_OFFSET (0x8C)         /**< (INPUT_OUTPUT_GPIO_OUTPUT_GPIO_140_176) Output GPIO[140:176] Offset */
#define INPUT_OUTPUT_GPIO_OUTPUT_GPIO_200_236_OFFSET (0x90)         /**< (INPUT_OUTPUT_GPIO_OUTPUT_GPIO_200_236) Output GPIO[200:236] Offset */
#define INPUT_OUTPUT_GPIO_OUTPUT_GPIO_240_276_OFFSET (0x94)         /**< (INPUT_OUTPUT_GPIO_OUTPUT_GPIO_240_276) Output GPIO[240:276] Offset */

/** \brief INPUT_OUTPUT_GPIO register API structure */
typedef struct
{  /* GPIO Input/Output Registers */
  __IO  __INPUT_OUTPUT_GPIO_INPUT_GPIO_000_036_bits_t INPUT_GPIO_000_036; /**< Offset: 0x00 (R/W  32) The GPIO Input Registers can always be used to read the state of a pin, even when the pin is in an output mode and/or when a\n     signal function other than the GPIO signal function is selected. */
  __IO  __INPUT_OUTPUT_GPIO_INPUT_GPIO_040_076_bits_t INPUT_GPIO_040_076; /**< Offset: 0x04 (R/W  32) Input GPIO[040:076] */
  __IO  __INPUT_OUTPUT_GPIO_INPUT_GPIO_100_136_bits_t INPUT_GPIO_100_136; /**< Offset: 0x08 (R/W  32) Input GPIO[100:136] */
  __IO  __INPUT_OUTPUT_GPIO_INPUT_GPIO_140_176_bits_t INPUT_GPIO_140_176; /**< Offset: 0x0C (R/W  32) Input GPIO[140:176] */
  __IO  __INPUT_OUTPUT_GPIO_INPUT_GPIO_200_236_bits_t INPUT_GPIO_200_236; /**< Offset: 0x10 (R/W  32) Input GPIO[200:236] */
  __IO  __INPUT_OUTPUT_GPIO_INPUT_GPIO_240_276_bits_t INPUT_GPIO_240_276; /**< Offset: 0x14 (R/W  32) Input GPIO[240:276] */
  __IO  __INPUT_OUTPUT_GPIO_OUTPUT_GPIO_000_036_bits_t OUTPUT_GPIO_000_036; /**< Offset: 0x80 (R/W  32) If enabled by the Output GPIO Write Enable bit, the GPIO Output bits determine the level on the GPIO pin when the pin is\n     configured for the GPIO output function. On writes: If enabled via the Output GPIO Write Enable 0: GPIO[x] out = '0', 1: GPIO[x] out = '1'. */
  __IO  __INPUT_OUTPUT_GPIO_OUPUT_GPIO_040_076_bits_t OUPUT_GPIO_040_076; /**< Offset: 0x84 (R/W  32) Output GPIO[040:076] */
  __IO  __INPUT_OUTPUT_GPIO_OUTPUT_GPIO_100_136_bits_t OUTPUT_GPIO_100_136; /**< Offset: 0x88 (R/W  32) Output GPIO[100:136] */
  __IO  __INPUT_OUTPUT_GPIO_OUTPUT_GPIO_140_176_bits_t OUTPUT_GPIO_140_176; /**< Offset: 0x8C (R/W  32) Output GPIO[140:176] */
  __IO  __INPUT_OUTPUT_GPIO_OUTPUT_GPIO_200_236_bits_t OUTPUT_GPIO_200_236; /**< Offset: 0x90 (R/W  32) Output GPIO[200:236] */
  __IO  __INPUT_OUTPUT_GPIO_OUTPUT_GPIO_240_276_bits_t OUTPUT_GPIO_240_276; /**< Offset: 0x94 (R/W  32) Output GPIO[240:276] */
} inputoutputgpio_registers_t;
/** @}  end of GPIO Input/Output Registers */

#endif /* _PIC32CX_0525SG12_INPUT_OUTPUT_GPIO_COMPONENT_H_ */
