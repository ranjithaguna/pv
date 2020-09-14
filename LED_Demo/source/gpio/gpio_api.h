/*****************************************************************************
* © 2015 Microchip Technology Inc. and its subsidiaries.
* You may use this software and any derivatives exclusively with
* Microchip products.
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".
* NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
* INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
* AND FITNESS FOR A PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP
* PRODUCTS, COMBINATION WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.
* TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL
* CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF
* FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
* MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE
* OF THESE TERMS.
******************************************************************************

Version Control Information (Perforce)
******************************************************************************
$Revision: #1 $ 
$DateTime: 2019/09/25 06:21:47 $ 
$Author: i20905 $
Last Change:    None
******************************************************************************/
/** @file gpio.h
* \brief GPIO Peripheral Header File
* \author pramans
* 
* This file is the header file for GPIO Peripheral 
******************************************************************************/

/** @defgroup GPIO
 *  @{
 */

#ifndef _GPIO_H
#define _GPIO_H


#ifdef __cplusplus
 extern "C" {
#endif 

     

//
// Logical IDs for all the gpio ports 
//
#define GPIO_PORTA          0u
#define GPIO_PORTB          1u
#define GPIO_PORTC          2u
#define GPIO_PORTD          3u
#define GPIO_PORTE          4u
#define GPIO_PORTF          5u
#define GPIO_MAX_PORT       6u

#define NUM_GPIO_PORTS      6u
#define MAX_NUM_GPIO        (NUM_GPIO_PORTS * 32)  

//
// Logical bit map representation of each ports
//
#define GPIO_BANK0_BITMAP (0x7FFFFF9Dul) /* 0000 - 0037 */
#define GPIO_BANK1_BITMAP (0x7FFFFFFDul) /* 0040 - 0077 */
#define GPIO_BANK2_BITMAP (0x07FFFCF7ul) /* 0100 - 0137 */
#define GPIO_BANK3_BITMAP (0x272EFFFFul) /* 0140 - 0177 */
#define GPIO_BANK4_BITMAP (0x00DE0FFFul) /* 0200 - 0237 */
#define GPIO_BANK5_BITMAP (0x0001FF7Ful) /* 0240 - 0277 */

#define GPIO_BANK0_DRVSTR_BITMAP (0x7FFFFF9Dul)
#define GPIO_BANK1_DRVSTR_BITMAP (0x7FFFFFFDul)
#define GPIO_BANK2_DRVSTR_BITMAP (0x07FFFCF7ul)
#define GPIO_BANK3_DRVSTR_BITMAP (0x272EFFFFul)
#define GPIO_BANK4_DRVSTR_BITMAP (0x00DE0FFFul)
#define GPIO_BANK5_DRVSTR_BITMAP (0x0001FF7Ful)

//
// Control 1 register bit and mask definations
//

typedef enum {
    GPIO_MUX_GPIO = 0ul,
    GPIO_MUX_ALT_FUNC1 = (1ul << 12),
    GPIO_MUX_ALT_FUNC2 = (2ul << 12),
    GPIO_MUX_ALT_FUNC3 = (3ul << 12),
} GPIO_MUX;

typedef enum {
    GPIO_NON_INVERTED = 0ul,
    GPIO_INVERTED = (1ul << 11),
} GPIO_POLARITY;

typedef enum {
    GPIO_ALT_OUT_EN = 0ul,
    GPIO_ALT_OUT_DIS = (1ul << 10),
} GPIO_ALT_OUT;

typedef enum {
    GPIO_INPUT_CNTRL = 0ul,
    GPIO_OUTPUT = (1ul << 9),
} GPIO_DIR;

typedef enum {
    GPIO_PUSH_PULL = 0ul,
    GPIO_OPEN_DRAIN = (1ul << 8),
} GPIO_OUTDRV;

typedef enum {
    GPIO_INTDET_LVL_LO = 0ul,
    GPIO_INTDET_LVL_HI = (1ul << 4),
    GPIO_INTDET_DISABLED = (1ul << 6),
    GPIO_INTDET_EDG_RISE = 0xD0ul,
    GPIO_INTDET_EDG_FALL = 0xE0ul,
    GPIO_INTDET_EDG_BOTH = 0xF0ul,
} GPIO_INTDET;

typedef enum {
    GPIO_PWR_VTR = 0ul,
    GPIO_PWR_VCC = (1ul << 2),
    GPIO_PWR_UNPWRD = (2ul << 2),
    GPIO_PWR_VTR_OUT_ONLY = (3ul << 2)
} GPIO_PWRGATE;

typedef enum {
    GPIO_PUD_NONE = 0ul,
    GPIO_PU = 1ul,
    GPIO_PD = 2ul,
    GPIO_KEEPER = 3ul,
} GPIO_PUD;

#define GPIO_PU_PD_Pos                 0ul        
#define GPIO_PU_PD_Msk                 0x3ul            
#define GPIO_POWER_GATING_Pos          2ul
#define GPIO_POWER_GATING_Msk          0xCul
#define GPIO_INTERRUPT_DETECTION_Pos   4ul
#define GPIO_INTERRUPT_DETECTION_Msk   0xF0ul  // takes bit[7:4] into account 
#define GPIO_EDGE_ENABLE_Pos           7ul
#define GPIO_OUTPUT_BUFFER_TYPE_Pos    8ul
#define GPIO_OUTPUT_BUFFER_TYPE_Msk    0x100ul
#define GPIO_DIRECTION_Pos             9ul
#define GPIO_DIRECTION_Msk             0x200ul
#define GPIO_OUTPUT_SELECT_Pos         10ul
#define GPIO_OUTPUT_SELECT_Msk         0x400ul
#define GPIO_POLARITY_Pos              11ul
#define GPIO_POLARITY_Msk              0x800ul
#define GPIO_MUX_CONTROL_Pos           12ul
#define GPIO_MUX_CONTROL_Msk           0x3000ul
#define GPIO_ALTERNATE_GPIO_DATA_Pos   16ul
#define GPIO_ALTERNATE_GPIO_DATA_Msk   0x10000ul
#define GPIO_INPUT_Pos                 24ul
#define GPIO_INPUT_Msk                 0x1000000ul

//
// Control 2 register bits and mask definations
//
typedef enum {
    GPIO_DRV_2MA = 0ul,
    GPIO_DRV_4MA = (1ul << 4),
    GPIO_DRV_8MA = (2ul << 4),
    GPIO_DRV_12MA = (3ul << 4),
} GPIO_DRV;

typedef enum {
    GPIO_SLEW_SLOW = 0ul,
    GPIO_SLEW_FAST,
} GPIO_SLEW;

#define GPIO_SLEW_RATE_Pos       0ul
#define GPIO_SLEW_RATE_Msk       0x1ul
#define GPIO_DRIVE_STRENGTH_Pos  4ul 
#define GPIO_DRIVE_STRENGTH_Msk  0x30ul

//
// GPIO pin - property list
//
typedef enum {
    GPIO_PROP_PU_PD = 0ul,      
    GPIO_PROP_PWR_GATE,     
    GPIO_PROP_INT_DET,  
    GPIO_PROP_OBUFF_TYPE,
    GPIO_PROP_DIR,
    GPIO_PROP_OUT_SRC,
    GPIO_PROP_POLARITY,
    GPIO_PROP_MUX_SEL,
    GPIO_PROP_ALL,
} GPIO_PROPERTY;

//
// Logical representation of the gpio pins
//
typedef enum {
    PIN_0000,     // 00h: Begin Port A
    PIN_0001,
    PIN_0002,
    PIN_0003,
    PIN_0004,
    PIN_0005,
    PIN_0006,
    PIN_0007,
    //
    PIN_0010,    // 08h
    PIN_0011,
    PIN_0012,
    PIN_0013,
    PIN_0014,
    PIN_0015,
    PIN_0016,
    PIN_0017,
    //
    PIN_0020,    // 10h
    PIN_0021,
    PIN_0022,
    PIN_0023,
    PIN_0024,
    PIN_0025,
    PIN_0026,
    PIN_0027,
    //
    PIN_0030,    // 18h
    PIN_0031,
    PIN_0032,
    PIN_0033,
    PIN_0034,
    PIN_0035,
    PIN_0036,   // End Port A
    //
    PIN_0040 = 0x20,    // Begin Port B
    PIN_0041,
    PIN_0042,
    PIN_0043,
    PIN_0044,
    PIN_0045,
    PIN_0046,
    PIN_0047,
    //
    PIN_0050,    // 28h
    PIN_0051,
    PIN_0052,
    PIN_0053,
    PIN_0054,
    PIN_0055,
    PIN_0056,
    PIN_0057,
    //
    PIN_0060,    // 30h
    PIN_0061,
    PIN_0062,
    PIN_0063,
    PIN_0064,
    PIN_0065,
    PIN_0066,
    PIN_0067,
    //
    PIN_0070,    // 38h
    PIN_0071,
    PIN_0072,
    PIN_0073,
    PIN_0074,
    PIN_0075,
    PIN_0076,   // End Port B
    //
    PIN_0100 = 0x40,    // 40h: Begin Port C
    PIN_0101,
    PIN_0102,
    PIN_0103,
    PIN_0104,
    PIN_0105,
    PIN_0106,
    PIN_0107,
    //
    PIN_0110,    // 48h
    PIN_0111,
    PIN_0112,
    PIN_0113,
    PIN_0114,
    PIN_0115,
    PIN_0116,
    PIN_0117,
    //
    PIN_0120,    // 50h
    PIN_0121,
    PIN_0122,
    PIN_0123,
    PIN_0124,
    PIN_0125,
    PIN_0126,
    PIN_0127,
    //
    PIN_0130,    // 58h
    PIN_0131,
    PIN_0132,
    PIN_0133,
    PIN_0134,
    PIN_0135,
    PIN_0136,   // End Port C
    //
    PIN_0140 = 0x60,    // Begin Port D
    PIN_0141,
    PIN_0142,
    PIN_0143,
    PIN_0144,
    PIN_0145,
    PIN_0146,
    PIN_0147,
    //
    PIN_0150,    // 68h
    PIN_0151,
    PIN_0152,
    PIN_0153,
    PIN_0154,
    PIN_0155,
    PIN_0156,
    PIN_0157,
    //
    PIN_0160,    // 70h
    PIN_0161,
    PIN_0162,
    PIN_0163,
    PIN_0164,
    PIN_0165,
    PIN_0166,
    PIN_0167,
    //
    PIN_0170,    // 78h
    PIN_0171,
    PIN_0172,
    PIN_0173,
    PIN_0174,
    PIN_0175,
    PIN_0176,   // End Port D
    //
    PIN_0200 = 0x80,    // Begin Port E
    PIN_0201,
    PIN_0202,
    PIN_0203,
    PIN_0204,
    PIN_0205,
    PIN_0206,
    PIN_0207,
    //
    PIN_0210,    // 88h
    PIN_0211,
    PIN_0212,
    PIN_0213, 
    PIN_0214,
    PIN_0215,
    PIN_0216,
    PIN_0217,
    //
    PIN_0220,   // 90h
    PIN_0221,
    PIN_0222,
    PIN_0223,
    PIN_0224,
    PIN_0225,
    PIN_0226,
    PIN_0227,
    //
    PIN_0230,   // 98h
    PIN_0231,
    PIN_0232,
    PIN_0233,
    PIN_0234,
    PIN_0235,
    PIN_0236,   // 9Eh
    //
    PIN_0240 = 0xA0,   // A0h
    PIN_0241,
    PIN_0242,
    PIN_0243,
    PIN_0244,
    PIN_0245,
    PIN_0246,
    PIN_0247,   // 0xA7
    //
    PIN_0250,   // A8h
    PIN_0251,
    PIN_0252,
    PIN_0253,
    PIN_0254,   // ACh
    PIN_0255,
    PIN_0256,   // AEh
    PIN_0257,   // AFh
    
 //   PIN_0260,   // B0h
    //
    MAX_PIN     // B1h
} GPIO_PIN;


/* ------------------------------------------------------------------------------ */
/*  API Function - Function to initialize gpio pin                                */
/* ------------------------------------------------------------------------------ */
/**
 * gpio_init - inititializes the specified gpio pin.
 * @param 0-based GPIO ID
 * @param control mux mode
 * @param pin polarity
 * @param direction of the pin
 * @param output buffer type
 * @param interrupt detection mode
 * @param power gate source
 * @param internal resistor mode
 * @return uint8_t 1(success), 0(fail).
 */
uint8_t gpio_init( GPIO_PIN pin, GPIO_MUX new_mux, GPIO_POLARITY new_pol, GPIO_DIR new_dir, \
                   GPIO_OUTDRV new_obuf, GPIO_INTDET new_idet, GPIO_PWRGATE new_pwrg, GPIO_PUD new_pud );
        

/* ------------------------------------------------------------------------------ */
/*  API Function - Function to set gpio property                                  */
/* ------------------------------------------------------------------------------ */
/**
 * gpio_property_set - updates the configuration of the specified gpio pin
 * at run time. 
 * @param 0-based GPIO ID
 * @param property type that is to be changed
 * @param new value
 * @return uint8_t 1(success), 0(fail).
 */
uint8_t gpio_property_set( GPIO_PIN pin, GPIO_PROPERTY gpio_prop, const uint32_t new_prop_val );


/* ------------------------------------------------------------------------------ */
/*  API Function - Function to read gpio property                                 */
/* ------------------------------------------------------------------------------ */
/**
 * gpio_property_get - reads the current configuration of the 
 * specified pin. 
 * @param 0-based GPIO ID
 * @param property type that needs to be read
 * @return uint8_t current configuration, 0xFF(fail).
 */
uint8_t gpio_property_get( GPIO_PIN pin, GPIO_PROPERTY gpio_prop );


/* ------------------------------------------------------------------------------ */
/*  API Function - Function to write to the pad                                   */
/* ------------------------------------------------------------------------------ */
/**
 * gpio_output_set - writes the output value to the specified 
 * pin depending upon the output source register.
 * @param 0-based GPIO ID
 * @param output source register
 * @param new output value
 * @return uint8_t 1(success), 0(fail).
 */
uint8_t gpio_output_set( GPIO_PIN pin, GPIO_ALT_OUT out_src, const uint32_t gpio_state );


/* ------------------------------------------------------------------------------ */
/*  API Function - Function to read the pad input using the input register        */
/* ------------------------------------------------------------------------------ */
/**
 * gpio_input_get - reads the input from the specified gpio pin
 * using the input register.
 * @param 0-based GPIO ID
 * @return uint8_t current input value, 0xFF(fail).
 */
uint8_t gpio_input_get( GPIO_PIN pin );


/* ------------------------------------------------------------------------------ */
/*  API Function - Function to read the gpio slew rate value                      */
/* ------------------------------------------------------------------------------ */
/**
 * gpio_slewRate_get - returns the current slew rate setting of the
 * specified gpio pin. 
 * @param 0-based GPIO ID
 * @return uint8_t current slew rate setting, 0xFF(fail).
 */
uint8_t gpio_slewRate_get( GPIO_PIN pin );


/* ------------------------------------------------------------------------------ */
/*  API Function - Function to set the gpio slew rate value                       */
/* ------------------------------------------------------------------------------ */
/**
 * gpio_slewRate_set - sets the slew rate setting of the
 * specified gpio pin.
 * @param 0-based GPIO ID
 * @param new slew value
 * @return uint8_t 1(success), 0(fail).
 */
uint8_t gpio_slewRate_set( GPIO_PIN pin, GPIO_SLEW new_slew );


/* ------------------------------------------------------------------------------ */
/*  API Function - Function to read the gpio drive strength value                 */
/* ------------------------------------------------------------------------------ */
/**
 * gpio_drvStr_get - reads the current drive strength setting of the
 * specified gpio pin.
 * @param 0-based GPIO ID
 * @return uint8_t 0, 1, 2, 3(drive strength value), 0xFF(fail).
 */
uint8_t gpio_drvStr_get( GPIO_PIN pin );


/* ------------------------------------------------------------------------------ */
/*  API Function - Function to set the gpio drive strength value                  */
/* ------------------------------------------------------------------------------ */
/**
 * gpio_drvStr_set -sets the drive strength setting of the 
 * specified gpio pin.
 * @param 0-based GPIO ID
 * @param new drive strength setting
 * @return uint8_t 1(success), 0(fail).
 */
uint8_t gpio_drvStr_set( GPIO_PIN pin, GPIO_DRV drv_str );


/* ------------------------------------------------------------------------------ */
/*  Peripheral Function - Function to get control 1 register aaddress             */
/* ------------------------------------------------------------------------------ */
/**
 * p_gpio_ctrl_addr_get - Returns the address of the control 1 register
 * of the specified gpio pin.
 * @param pin 0-based GPIO ID
 * @return uint32_t control 1 register address.
 */
uint32_t p_gpio_ctrl_addr_get( GPIO_PIN pin );


/* ------------------------------------------------------------------------------ */
/*  Peripheral Function - Function to get control 2 register address              */
/* ------------------------------------------------------------------------------ */
/**
 * p_gpio_ctrl2_addr_get - Returns the address of the control 2 register
 * of the specified gpio pin. 
 * @param pin 0-based GPIO ID
 * @return uint32_t control 2 register address.
 */
uint32_t p_gpio_ctrl2_addr_get( GPIO_PIN pin );


/* ------------------------------------------------------------------------------ */
/*  Peripheral Function - Function to check if the gpio pin is a valid one        */
/* ------------------------------------------------------------------------------ */
/**
 * p_gpio_is_valid - Checks if GPIO pin is implemented in this hardware. 
 * @param 0-based GPIO ID
 * @return uint8_t 1(GPIO Pin implemented), 0(not implemented).
 */
uint8_t p_gpio_is_valid( GPIO_PIN pin );


/* ------------------------------------------------------------------------------ */
/*  Peripheral Function - Function to read control 1 register                     */
/* ------------------------------------------------------------------------------ */
/**
 * p_gpio_ctrl_get - Reads the control 1 register of the 
 * specified gpio pin.  
 * @param 0-based GPIO ID
 * @return uint32_t control 1 register contents.
 */
uint32_t p_gpio_ctrl_get( GPIO_PIN pin );


/* ------------------------------------------------------------------------------ */
/*  Peripheral Function - Function to write to control 1 register                 */
/* ------------------------------------------------------------------------------ */
/**
 * p_gpio_ctrl_set - Writes to the control 1 register of the 
 * specified gpio pin. 
 * @param 0-based GPIO ID
 * @param new configuration value
 * @return None.
 */
void p_gpio_ctrl_set( GPIO_PIN pin, uint32_t new_ctrl );


/* ------------------------------------------------------------------------------ */
/*  Peripheral Function - Function to read control 2 register                     */
/* ------------------------------------------------------------------------------ */
/**
 * p_gpio_ctrl2_get - Reads the gpio control 2 register of the
 * specifed gpio pin.
 * @param 0-based GPIO ID
 * @return uint8_t control 2 register contents.
 */
uint8_t p_gpio_ctrl2_get( GPIO_PIN pin );


/* ------------------------------------------------------------------------------ */
/*  Peripheral Function - Function to write to the control 2register              */
/* ------------------------------------------------------------------------------ */
/**
 * p_gpio_ctrl2_set - Writes to the control 2 register of the
 * specified gpio pin.
 * @param 0-based GPIO ID
 * @param new configuration value
 * @return None.
 */
void p_gpio_ctrl2_set( GPIO_PIN pin, uint8_t new_ctrl2 );


/* ------------------------------------------------------------------------------ */
/*  Peripheral Function - Function to read from the pad using control 1 register  */
/* ------------------------------------------------------------------------------ */
/**
 * p_gpio_pad_get - reads the specified gpio pin's input using
 * the control 1 register.
 * @param 0-based GPIO ID
 * @return uint8_t 0(GPIO Low), 1(GPIO High).
 */
uint8_t p_gpio_pad_get(GPIO_PIN pin );


/* ----------------------------------------------------------------------------- */
/*  Peripheral Function - Function to write to the pad using control 1 register  */
/* ----------------------------------------------------------------------------- */
/**
 * p_gpio_alt_out - writes to the specified gpio pin using
 * control 1 register. 
 * @param 0-based GPIO ID
 * @param new output value
 * @return None
 * @note Bit[10] of the control 1 register must be cleared before using
 *       this function.
 */
void p_gpio_alt_out( GPIO_PIN pin, uint8_t new_val );


/* -------------------------------------------------------------------------- */
/*  Peripheral Function - Function to read from the pad using input register  */
/* -------------------------------------------------------------------------- */
/**
 * p_gpio_input_get - reads from the input register of the
 * specified gpio pin.
 * @param 0-based GPIO ID
 * @return uint8_t 0, 1(input value), 0xFF(fail)
 */
uint8_t p_gpio_input_get( GPIO_PIN pin );


/* -------------------------------------------------------------------------- */
/*  Peripheral Function - Function to write to the pad using output register  */
/* -------------------------------------------------------------------------- */
/**
 * p_gpio_output_set - writes to the output register of the 
 * specified gpio pin.
 * @param 0-based GPIO ID
 * @param new output value
 * @return None
 * @note Bit[10] of the control 1 register should be set before using
 *       this function.
 */
void p_gpio_output_set( GPIO_PIN pin, const uint32_t new_val );


/* ----------------------------------------------------------------------- */
/*  Peripheral Function - Function to select the multiplexing option       */
/* ----------------------------------------------------------------------- */
/**
 * p_gpio_mux_set - sets the control mux mode for the 
 * specified gpio pin. 
 * @param 0-based GPIO ID
 * @param gpio mux selection setting
 * @return None.
 */
void p_gpio_mux_set( GPIO_PIN pin, GPIO_MUX new_mux );


/* ----------------------------------------------------------------------- */
/*  Peripheral Function - Function to select the polarity of the pin       */
/* ----------------------------------------------------------------------- */
/**
 * p_gpio_polarity_set - sets the polarity of the specified gpio pin. 
 * @param 0-based GPIO ID
 * @param gpio polarity setting 
 * @return None.
 */
void p_gpio_polarity_set( GPIO_PIN pin, GPIO_POLARITY invert);


/* ----------------------------------------------------------------------- */
/*  Peripheral Function - Function to select output source for the pin     */
/* ----------------------------------------------------------------------- */
/**
 * p_gpio_output_write_enable - selects output source register for
 * the specified gpio pin. 
 * @param 0-based GPIO ID
 * @param gpio output register selection 
 * @return None.
 */
void p_gpio_output_write_enable( GPIO_PIN pin, GPIO_ALT_OUT enable_par_out );


/* ----------------------------------------------------------------------- */
/*  Peripheral Function - Function to select the gpio pin direction        */
/* ----------------------------------------------------------------------- */
/**
 * p_gpio_dir_set - sets the direction of the specifed gpio pin. 
 * @param 0-based GPIO ID
 * @param gpio direction setting
 * @return None.
 */
void p_gpio_dir_set( GPIO_PIN pin, GPIO_DIR dir_output );


/* ----------------------------------------------------------------------- */
/*  Peripheral Function - Function to select the gpio driving buffer       */
/* ----------------------------------------------------------------------- */
/**
 * p_gpio_obuff_set - sets the ouput buffer type of the
 * specified gpio pin.
 * @param 0-based GPIO ID
 * @param output buffer selection setting
 * @return None.
 */
void p_gpio_obuff_set( GPIO_PIN pin, GPIO_OUTDRV new_obuf );


/* ----------------------------------------------------------------------- */
/*  Peripheral Function - Function to select the interrupt detection mode  */
/* ----------------------------------------------------------------------- */
/**
 * p_gpio_idet_set - sets the interrupt detection mode for the 
 * specified gpio pin. 
 * @param 0-based GPIO ID
 * @param interrupt detection mode setting 
 * @return None.
 */
void p_gpio_idet_set( GPIO_PIN pin, GPIO_INTDET new_idet );


/* ---------------------------------------------------------------------- */
/*  Peripheral Function - Function to select the power well source        */
/* ---------------------------------------------------------------------- */
/**
 * p_gpio_pwrgate_set - sets the power gate source for the gpio pin.
 * @param 0-based GPIO ID
 * @param new power gate source configuration
 * @return None.
 */
void p_gpio_pwrgate_set( GPIO_PIN pin, GPIO_PWRGATE new_pwrg );


/* ---------------------------------------------------------------------- */
/*  Peripheral Function - Function to select the internal resistor mode   */
/* ---------------------------------------------------------------------- */
/**
 * p_gpio_pud_set - sets the internal resistor mode for the
 * specified gpio pin.
 * @param 0-based GPIO ID
 * @param new internal resistor selection
 * @return None.
 */
void p_gpio_pud_set( GPIO_PIN pin, GPIO_PUD new_pud );


#ifdef __cplusplus
}
#endif

#endif

/* end of gpio.h */
/**   @}
 */
