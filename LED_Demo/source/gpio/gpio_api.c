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
/** @file gpio_api.c
* \brief GPIO API Source file
* \author pramans
* 
* This file implements the GPIO API functions  
******************************************************************************/

/** @defgroup GPIO
 *  @{
 */

#include "../common/common_lib.h"
#include "gpio_api.h"


#ifdef __cplusplus
extern "C" {
#endif
 

/* ------------------------------------------------------------------------------ */
/*                      Function to initialize gpio pin                           */
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
                   GPIO_OUTDRV new_obuf, GPIO_INTDET new_idet, GPIO_PWRGATE new_pwrg, GPIO_PUD new_pud )
{   
    if ( p_gpio_is_valid(pin) )
    {
        uint32_t init_value = new_mux + new_pol + new_dir + new_obuf + new_idet + new_pwrg + new_pud;

        p_gpio_ctrl_set( pin, init_value );
        return 1u;
    }
    else
    {
        return 0u;
    }
}


/* ------------------------------------------------------------------------------ */
/*                      Function to set gpio property                             */
/* ------------------------------------------------------------------------------ */
/**
 * gpio_property_set - updates the configuration of the specified gpio pin
 * at run time. 
 * @param 0-based GPIO ID
 * @param property type that is to be changed
 * @param new value
 * @return uint8_t 1(success), 0(fail).
 */
uint8_t gpio_property_set( GPIO_PIN pin, GPIO_PROPERTY gpio_prop, const uint32_t new_prop_val )
{
    if ( p_gpio_is_valid(pin) )
    {
        switch ( gpio_prop )
        {
            case GPIO_PROP_PU_PD:
                p_gpio_pud_set( pin, (GPIO_PUD)new_prop_val );
                break;

            case GPIO_PROP_PWR_GATE:
                p_gpio_pwrgate_set( pin, (GPIO_PWRGATE)new_prop_val );
                break;

            case GPIO_PROP_INT_DET:
                p_gpio_idet_set( pin, (GPIO_INTDET)new_prop_val );
                break;
            
            case GPIO_PROP_OBUFF_TYPE:
                p_gpio_obuff_set( pin, (GPIO_OUTDRV)new_prop_val );
                break;
            
            case GPIO_PROP_DIR:
                p_gpio_dir_set( pin, (GPIO_DIR)new_prop_val );
                break;
            
            case GPIO_PROP_OUT_SRC:
                p_gpio_output_write_enable( pin, (GPIO_ALT_OUT)new_prop_val );
                break;
            
            case GPIO_PROP_POLARITY:
                p_gpio_polarity_set( pin, (GPIO_POLARITY)new_prop_val );
                break;
            
            case GPIO_PROP_MUX_SEL:
                p_gpio_mux_set( pin, (GPIO_MUX)new_prop_val );
                break;
            
            case GPIO_PROP_ALL:
                p_gpio_ctrl_set( pin, new_prop_val );
                break;
            
            default:
                break;
        }
        
        return 1u;
    }
    else
    {
        return 0u;
    }
}


/* ------------------------------------------------------------------------------ */
/*                       Function to read gpio property                           */
/* ------------------------------------------------------------------------------ */
/**
 * gpio_property_get - reads the current configuration of the 
 * specified pin. 
 * @param 0-based GPIO ID
 * @param property type that needs to be read
 * @return uint8_t current configuration, 0xFF(fail).
 */
uint8_t gpio_property_get( GPIO_PIN pin, GPIO_PROPERTY gpio_prop )
{
    if ( p_gpio_is_valid(pin) )
    {
        uint32_t temp;
        
        switch ( gpio_prop )
        {
            case GPIO_PROP_PU_PD:
                temp = p_gpio_ctrl_get( pin );
                temp &= GPIO_PU_PD_Msk;
                return (uint8_t)temp;

            case GPIO_PROP_PWR_GATE:
                temp = p_gpio_ctrl_get( pin );
                temp &= GPIO_POWER_GATING_Msk;
                return (uint8_t)(temp >> GPIO_POWER_GATING_Pos);

            case GPIO_PROP_INT_DET:
                temp = p_gpio_ctrl_get( pin );
                temp &= GPIO_INTERRUPT_DETECTION_Msk;
                return (uint8_t)(temp >> GPIO_INTERRUPT_DETECTION_Pos);
            
            case GPIO_PROP_OBUFF_TYPE:
                temp = p_gpio_ctrl_get( pin );
                temp &= GPIO_OUTPUT_BUFFER_TYPE_Msk;
                return (uint8_t)(temp >> GPIO_OUTPUT_BUFFER_TYPE_Pos);
            
            case GPIO_PROP_DIR:
                temp = p_gpio_ctrl_get( pin );
                temp &= GPIO_DIRECTION_Msk;
                return (uint8_t)(temp >> GPIO_DIRECTION_Pos);
            
            case GPIO_PROP_OUT_SRC:
                temp = p_gpio_ctrl_get( pin );
                temp &= GPIO_OUTPUT_SELECT_Msk;
                return (uint8_t)(temp >> GPIO_OUTPUT_SELECT_Pos);
            
            case GPIO_PROP_POLARITY:
                temp = p_gpio_ctrl_get( pin );
                temp &= GPIO_POLARITY_Msk;
                return (uint8_t)(temp >> GPIO_POLARITY_Pos);
            
            case GPIO_PROP_MUX_SEL:
                temp = p_gpio_ctrl_get( pin );
                temp &= GPIO_MUX_CONTROL_Msk;
                return (uint8_t)(temp >> GPIO_MUX_CONTROL_Pos);
            
            default:
                return 0xFFu;
        }
    }
    else
    {
        return 0xFFu;
    }
}


/* ------------------------------------------------------------------------------ */
/*                          Function to write to the pad                          */
/* ------------------------------------------------------------------------------ */
/**
 * gpio_output_set - writes the output value to the specified 
 * pin depending upon the output source register.
 * @param 0-based GPIO ID
 * @param output source register
 * @param new output value
 * @return uint8_t 1(success), 0(fail).
 * 
 */

uint8_t gpio_output_set( GPIO_PIN pin, GPIO_ALT_OUT out_src, const uint32_t gpio_state )
{
    if ( p_gpio_is_valid(pin) )
    {
        p_gpio_output_write_enable( pin, out_src );

        if ( out_src )
        {
            p_gpio_output_set( pin, gpio_state );
        }
        else
        {
            p_gpio_alt_out( pin, (uint8_t)gpio_state );
        }
        
        return 1u;
    }
    else
    {
        return 0u;
    }
}

/* ------------------------------------------------------------------------------ */
/*               Function to read the pad input using the input register          */
/* ------------------------------------------------------------------------------ */
/**
 * gpio_input_get - reads the input from the specified gpio pin
 * using the input register.
 * @param 0-based GPIO ID
 * @return uint8_t current input value, 0xFF(fail).
 */
uint8_t gpio_input_get( GPIO_PIN pin )
{
    if ( p_gpio_is_valid(pin) )
    {
        return p_gpio_input_get( pin );
    }
    else
    {
        return 0xFFu;
    }        
}


/* ------------------------------------------------------------------------------ */
/*                      Function to read the gpio slew rate value                 */
/* ------------------------------------------------------------------------------ */
/**
 * gpio_slewRate_get - returns the current slew rate setting of the
 * specified gpio pin. 
 * @param 0-based GPIO ID
 * @return uint8_t current slew rate setting, 0xFF(fail).
 */
uint8_t gpio_slewRate_get( GPIO_PIN pin )
{
    if ( p_gpio_is_valid(pin) )
    {
        return p_gpio_ctrl2_get( pin ) & GPIO_SLEW_RATE_Msk;
    }
    else
    {
        return 0xFFu;
    }
}


/* ------------------------------------------------------------------------------ */
/*                      Function to configure gpio slew rate value                */
/* ------------------------------------------------------------------------------ */
/**
 * gpio_slewRate_set - sets the slew rate setting of the
 * specified gpio pin.
 * @param 0-based GPIO ID
 * @param new slew value
 * @return uint8_t 1(success), 0(fail).
 */
uint8_t gpio_slewRate_set( GPIO_PIN pin, GPIO_SLEW new_slew )
{
    if ( p_gpio_is_valid(pin) )
    {
        uint8_t temp = p_gpio_ctrl2_get( pin );
        
        temp &= ~GPIO_SLEW_RATE_Msk;
        temp |= (new_slew & GPIO_SLEW_RATE_Msk);
        
        p_gpio_ctrl2_set( pin, temp );

        return 1u;
    }
    else
    {
        return 0u;
    }
}


/* ------------------------------------------------------------------------------ */
/*                  Function to read the gpio drive strength value                */
/* ------------------------------------------------------------------------------ */
/**
 * gpio_drvStr_get - reads the current drive strength setting of the
 * specified gpio pin.
 * @param 0-based GPIO ID
 * @return uint8_t 0, 1, 2, 3(drive strength value), 0xFF(fail).
 */
uint8_t gpio_drvStr_get( GPIO_PIN pin )
{
    if ( p_gpio_is_valid(pin) )
    {
        return ( p_gpio_ctrl2_get(pin) & GPIO_DRIVE_STRENGTH_Msk ) >> GPIO_DRIVE_STRENGTH_Pos;
    }
    else
    {
        return 0xFFu;
    }
}


/* ------------------------------------------------------------------------------ */
/*                  Function to configure gpio drive strength value               */
/* ------------------------------------------------------------------------------ */
/**
 * gpio_drvStr_set -sets the drive strength setting of the 
 * specified gpio pin.
 * @param 0-based GPIO ID
 * @param new drive strength setting
 * @return uint8_t 1(success), 0(fail).
 */
uint8_t gpio_drvStr_set( GPIO_PIN pin, GPIO_DRV drv_str )
{
    if ( p_gpio_is_valid(pin) )
    {
        uint8_t temp = p_gpio_ctrl2_get( pin );
        
        temp &= ~GPIO_DRIVE_STRENGTH_Pos;
        temp |= (drv_str & GPIO_DRIVE_STRENGTH_Pos);
        
        p_gpio_ctrl2_set( pin, temp );
        
        return 1u;
    }
    else
    {
        return 0u;
    }
}


#ifdef __cplusplus
}
#endif

/* end of gpio_api.c */
/**   @}
 */
