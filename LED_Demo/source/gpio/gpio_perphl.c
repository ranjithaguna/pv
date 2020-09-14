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
/** @file gpio_perphl.c
* \brief GPIO Peripheral Source file
* \author pramans
* 
* This file implements the GPIO Peripheral functions  
******************************************************************************/

/** @defgroup GPIO
 *  @{
 */

#include "../common/common_lib.h"
#include "gpio_api.h"


#ifdef __cplusplus
extern "C" {
#endif 

    
// 
// GPIO Port bitmap
//
static const uint32_t valid_ctrl_masks[NUM_GPIO_PORTS] = {
    (GPIO_BANK0_BITMAP),
    (GPIO_BANK1_BITMAP),
    (GPIO_BANK2_BITMAP),
    (GPIO_BANK3_BITMAP),
    (GPIO_BANK4_BITMAP),
    (GPIO_BANK5_BITMAP)
};


#define INPUT_OUTPUT_GPIO   0x40081300U
#define x 0x2U
#define y 0x2U

// 
// Drive Strength Register bitmap
//
static const uint32_t valid_ctrl2_masks[NUM_GPIO_PORTS] = {
    (GPIO_BANK0_DRVSTR_BITMAP),
    (GPIO_BANK1_DRVSTR_BITMAP),
    (GPIO_BANK2_DRVSTR_BITMAP),
    (GPIO_BANK3_DRVSTR_BITMAP),
    (GPIO_BANK4_DRVSTR_BITMAP),
    (GPIO_BANK5_DRVSTR_BITMAP)
};


/* ------------------------------------------------------------------------------ */
/*  Local Helper Function - Do not use                                            */
/* ------------------------------------------------------------------------------ */
static uint8_t p_gpio_bank_num( GPIO_PIN pin )
{
    return (uint8_t)(pin) >> 5;
}


/* ------------------------------------------------------------------------------ */
/*  Local Helper Function - Do not use                                            */
/* ------------------------------------------------------------------------------ */
static uint8_t p_gpio_pin_num( GPIO_PIN pin )
{
    return (uint8_t)(pin) & 0x1Fu;   
}


/* ------------------------------------------------------------------------------ */
/*  Local Helper Function - Do not use                                            */
/* ------------------------------------------------------------------------------ */
/**
 * p_gpio_ctrl_addr_get - Returns the address of the control 1 register
 * of the specified gpio pin.
 * @param pin 0-based GPIO ID
 * @return uint32_t control 1 register address.
 */
uint32_t p_gpio_ctrl_addr_get( GPIO_PIN pin )
{
    uint32_t reg_addr = 0ul;

    if ( pin < MAX_PIN ) 
    {
       uint16_t bit_num = (uint16_t)(pin) & 0x1Ful;
        
        if ( valid_ctrl_masks[((uint32_t)pin) >> 5u] & (1ul << bit_num) ) 
        {
            reg_addr = (uint32_t)(_GPIO_000_036_BASE_ADDRESS) + ((uint32_t)(pin) << 2u);
        }
    }

    return reg_addr;
}



/* ------------------------------------------------------------------------------ */
/*  Local Helper Function - Do not use                                            */
/* ------------------------------------------------------------------------------ */
/**
 * p_gpio_ctrl2_addr_get - Returns the address of the control 2 register
 * of the specified gpio pin. 
 * @param pin 0-based GPIO ID
 * @return uint32_t control 2 register address.
 */
uint32_t p_gpio_ctrl2_addr_get( GPIO_PIN pin )
{
    uint32_t reg_addr = 0ul;

    if ( pin < MAX_PIN )
    {
        uint16_t bit_num = (uint16_t)(pin) & 0x1Ful;
        
        if ( valid_ctrl2_masks[((uint32_t)pin) >> 5u] & (1ul << bit_num) ) 
        {
            reg_addr = (uint32_t)(_GPIO_PIN_CONTROL_2_BASE_ADDRESS) + ((uint32_t)(pin) << 2u);
        }
    }

    return reg_addr;
}


/* ------------------------------------------------------------------------------ */
/*                  Function to check if the gpio pin is a valid one              */
/* ------------------------------------------------------------------------------ */
/**
 * p_gpio_is_valid - Checks if GPIO pin is implemented in this hardware. 
 * @param 0-based GPIO ID
 * @return uint8_t 1(GPIO Pin implemented), 0(not implemented).
 */
uint8_t p_gpio_is_valid( GPIO_PIN pin )
{
    uint16_t gp_bank = 0u;

    if ( pin < MAX_PIN )
    {
        gp_bank = (uint16_t)pin >> 5;

        if ( valid_ctrl_masks[gp_bank] & (1 << (pin & 0x001Fu)) )
        { 
            return 1u;
        }
    }

    return 0u;
}


/* ------------------------------------------------------------------------------ */
/*                  Function to read control 1 register                           */
/* ------------------------------------------------------------------------------ */
/**
 * p_gpio_ctrl_get - Reads the control 1 register of the 
 * specified gpio pin.  
 * @param 0-based GPIO ID
 * @return uint32_t control 1 register contents.
 */
uint32_t p_gpio_ctrl_get( GPIO_PIN pin )
{
    uint32_t ba = p_gpio_ctrl_addr_get(pin);
    
    return *(volatile uint32_t *)(ba);
}


/* ------------------------------------------------------------------------------ */
/*                  Function to write to control 1 register                       */
/* ------------------------------------------------------------------------------ */
/**
 * p_gpio_ctrl_set - Writes to the control 1 register of the 
 * specified gpio pin. 
 * @param 0-based GPIO ID
 * @param new configuration value
 * @return None.
 */
void p_gpio_ctrl_set( GPIO_PIN pin, uint32_t new_ctrl )
{
    uint32_t ba = p_gpio_ctrl_addr_get(pin);
    
    *(volatile uint32_t *)(ba) = new_ctrl;
}


/* ------------------------------------------------------------------------------ */
/*                  Function to read control 2 register                           */
/* ------------------------------------------------------------------------------ */
/**
 * p_gpio_ctrl2_get - Reads the gpio control 2 register of the
 * specifed gpio pin.
 * @param 0-based GPIO ID
 * @return uint8_t control 2 register contents.
 */
uint8_t p_gpio_ctrl2_get( GPIO_PIN pin )
{
    uint32_t ba = p_gpio_ctrl2_addr_get(pin);
    
    return (uint8_t)(*(volatile uint32_t *)(ba));
}


/* ------------------------------------------------------------------------------ */
/*                  Function to write to the control 2register                    */
/* ------------------------------------------------------------------------------ */
/**
 * p_gpio_ctrl2_set - Writes to the control 2 register of the
 * specified gpio pin.
 * @param 0-based GPIO ID
 * @param new configuration value
 * @return None.
 */
void p_gpio_ctrl2_set( GPIO_PIN pin, uint8_t new_ctrl2 )
{
    uint32_t ba = p_gpio_ctrl2_addr_get(pin);
    
    if ( 0ul != ba )
    {
        *(volatile uint8_t *)(ba) = new_ctrl2; 
    }    
}


/* ------------------------------------------------------------------------------ */
/*                  Function to read from the pad using control 1 register        */
/* ------------------------------------------------------------------------------ */
/**
 * p_gpio_pad_get - reads the specified gpio pin's input using
 * the control 1 register.
 * @param 0-based GPIO ID
 * @return uint8_t 0(GPIO Low), 1(GPIO High).
 */
uint8_t p_gpio_pad_get( GPIO_PIN pin )
{
    uint32_t ba = p_gpio_ctrl_addr_get(pin);
    
    return ( *(volatile uint8_t *)(ba + 3ul) & 0x01 );
}


/* ----------------------------------------------------------------------------- */
/*                  Function to write to the pad using control 1 register        */
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
void p_gpio_alt_out( GPIO_PIN pin, const uint8_t new_val )
{
    uint32_t ba = p_gpio_ctrl_addr_get(pin);
    
    *(volatile uint8_t *)(ba + 2ul) = ( new_val & 0x01 );
}


/* -------------------------------------------------------------------------- */
/*                  Function to read from the pad using input register        */
/* -------------------------------------------------------------------------- */
/**
 * p_gpio_input_get - reads from the input register of the
 * specified gpio pin.
 * @param 0-based GPIO ID
 * @return uint8_t 0, 1(input value), 0xFF(fail).
 */
uint8_t p_gpio_input_get( GPIO_PIN pin )
{
    uint32_t bank, bitpos, reg_addr;
    
    reg_addr = 0ul;
    bank = p_gpio_bank_num(pin);
    bitpos = p_gpio_pin_num(pin);
    
    if ( valid_ctrl_masks[bank] & (1ul << bitpos) )
    {
      reg_addr = (uint32_t)(_INPUT_OUTPUT_GPIO_BASE_ADDRESS) + ((uint32_t)(bank) << 2);
        
        return (uint8_t)((*(volatile uint32_t *)(reg_addr) >> bitpos) & 0x01);
    }
    
    return 0xFFu;
}


/* -------------------------------------------------------------------------- */
/*                  Function to write to the pad using output register        */
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
void p_gpio_output_set( GPIO_PIN pin, const uint32_t new_val )
{
    uint32_t bank, bitpos, reg_addr, r;
    
    reg_addr = 0ul;
    if ( pin < MAX_PIN )
    {
        bank = p_gpio_bank_num(pin);
        bitpos = p_gpio_pin_num(pin);
        
        if ( valid_ctrl_masks[bank] & (1ul << bitpos) )
        {
            reg_addr = ( uint32_t)(0x40081300ul + 0x80ul) + ((uint32_t)(bank) << 2);
          //  reg_addr = 0x40081390;
            r = *(volatile uint32_t *)(reg_addr) & ~(0x01 << bitpos);
            
            *(volatile uint32_t *)(reg_addr) = (r | (new_val << bitpos));
        }
    }
}


/* ----------------------------------------------------------------------- */
/*                  Function to select the multiplexing option             */
/* ----------------------------------------------------------------------- */
/**
 * p_gpio_mux_set - sets the control mux mode for the 
 * specified gpio pin. 
 * @param 0-based GPIO ID
 * @param gpio mux selection setting
 * @return None.
 */
void p_gpio_mux_set( GPIO_PIN pin, GPIO_MUX new_mux )
{ 
    uint32_t ba = p_gpio_ctrl_addr_get(pin);
    
    uint16_t r = *(volatile uint16_t *)(ba) & ~(GPIO_MUX_CONTROL_Msk);
    
    *(volatile uint16_t *)(ba) = (r | (new_mux & (GPIO_MUX_CONTROL_Msk)));
}


/* ----------------------------------------------------------------------- */
/*                  Function to select the polarity of the pin             */
/* ----------------------------------------------------------------------- */
/**
 * p_gpio_polarity_set - sets the polarity of the specified gpio pin. 
 * @param 0-based GPIO ID
 * @param gpio polarity setting 
 * @return None.
 */
void p_gpio_polarity_set( GPIO_PIN pin, GPIO_POLARITY invert)
{ 
    uint32_t ba = p_gpio_ctrl_addr_get(pin);
    
    uint16_t r = *(volatile uint16_t *)(ba) & ~(GPIO_POLARITY_Msk);
    
    if ( invert )
    {
        r |= invert;
    }

    *(volatile uint16_t *)(ba) = r;
}


/* ----------------------------------------------------------------------- */
/*                  Function to select output source for the pin           */
/* ----------------------------------------------------------------------- */
/**
 * p_gpio_output_write_enable - selects output source register for
 * the specified gpio pin. 
 * @param 0-based GPIO ID
 * @param gpio output register selection 
 * @return None.
 */
void p_gpio_output_write_enable( GPIO_PIN pin, GPIO_ALT_OUT enable_par_out )
{ 
    uint32_t ba = p_gpio_ctrl_addr_get(pin);
    
    uint16_t r = *(volatile uint16_t *)(ba) & ~(GPIO_OUTPUT_SELECT_Msk);
    
    if ( enable_par_out )
    {
        r |= enable_par_out;
    }

    *(volatile uint16_t *)(ba) = r;
}


/* ----------------------------------------------------------------------- */
/*                  Function to select the gpio pin direction              */
/* ----------------------------------------------------------------------- */
/**
 * p_gpio_dir_set - sets the direction of the specifed gpio pin. 
 * @param 0-based GPIO ID
 * @param gpio direction setting
 * @return None.
 */
void p_gpio_dir_set( GPIO_PIN pin, GPIO_DIR dir_output )
{
    uint32_t ba = p_gpio_ctrl_addr_get(pin);
    
    uint16_t r = *(volatile uint16_t *)(ba) & ~(GPIO_DIRECTION_Msk);
    
    if ( dir_output )
    {
        r |= dir_output;
    }

    *(volatile uint16_t *)(ba) = r;
}


/* ----------------------------------------------------------------------- */
/*                  Function to select the gpio driving buffer             */
/* ----------------------------------------------------------------------- */
/**
 * p_gpio_obuff_set - sets the ouput buffer type of the
 * specified gpio pin.
 * @param 0-based GPIO ID
 * @param output buffer selection setting
 * @return None.
 */
void p_gpio_obuff_set( GPIO_PIN pin, GPIO_OUTDRV new_obuf )
{ 
    uint32_t ba = p_gpio_ctrl_addr_get(pin);
    
    uint16_t r = *(volatile uint16_t *)(ba) & ~(GPIO_OUTPUT_BUFFER_TYPE_Msk);
    
    *(volatile uint16_t *)(ba) = (r | (new_obuf & (GPIO_OUTPUT_BUFFER_TYPE_Msk)));
}


/* ----------------------------------------------------------------------- */
/*           Function to select the interrupt detection mode               */
/* ----------------------------------------------------------------------- */
/**
 * p_gpio_idet_set - sets the interrupt detection mode for the 
 * specified gpio pin. 
 * @param 0-based GPIO ID
 * @param interrupt detection mode setting 
 * @return None.
 */
void p_gpio_idet_set( GPIO_PIN pin, GPIO_INTDET new_idet )
{
    uint32_t ba = p_gpio_ctrl_addr_get(pin);
    
    uint16_t r = *(volatile uint16_t *)(ba) & ~(GPIO_INTERRUPT_DETECTION_Msk);
    
    *(volatile uint16_t *)(ba) = (r | (new_idet & (GPIO_INTERRUPT_DETECTION_Msk)));
}


/* ---------------------------------------------------------------------- */
/*           Function to select the power well source                     */
/* ---------------------------------------------------------------------- */
/**
 * p_gpio_pwrgate_set - sets the power gate source for the gpio pin.
 * @param 0-based GPIO ID
 * @param new power gate source configuration
 * @return None.
 */
void p_gpio_pwrgate_set( GPIO_PIN pin, GPIO_PWRGATE new_pwrg )
{
    uint32_t ba = p_gpio_ctrl_addr_get(pin);
    
    uint16_t r = *(volatile uint16_t *)(ba) & ~(GPIO_POWER_GATING_Msk);
    
    *(volatile uint16_t *)(ba) = (r | (new_pwrg & (GPIO_POWER_GATING_Msk)));
}


/* ---------------------------------------------------------------------- */
/*           Function to select the internal resistor mode                */
/* ---------------------------------------------------------------------- */
/**
 * p_gpio_pud_set - sets the internal resistor mode for the
 * specified gpio pin.
 * @param 0-based GPIO ID
 * @param new internal resistor selection
 * @return None.
 */
void p_gpio_pud_set( GPIO_PIN pin, GPIO_PUD new_pud )
{
    uint32_t ba = p_gpio_ctrl_addr_get(pin);
    
    uint16_t r = *(volatile uint16_t *)(ba) & ~(GPIO_PU_PD_Msk);
    
    *(volatile uint16_t *)(ba) = (r | (new_pud & (GPIO_PU_PD_Msk)));
}


#ifdef __cplusplus
}
#endif 

/* end of gpio_perphl.c */
/**   @}
 */
