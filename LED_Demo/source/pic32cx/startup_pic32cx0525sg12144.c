/**
 * \file
 *
 * \brief MPLAB(R) XC32 - Startup code for PIC32CX0525SG12144
 *
 * Copyright (c) 2018 Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
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
 * \license_stop
 *
 */

#include "pic32cx0525sg12144.h"
//#include <xc.h>
#include <libpic32c.h>
#include <sys/cdefs.h>
#include <stdbool.h>


/*
 *  Define the __XC32_RESET_HANDLER_NAME macro on the command line when you
 *  want to use a different name for the Reset Handler function.
 */
#ifndef __XC32_RESET_HANDLER_NAME
#define __XC32_RESET_HANDLER_NAME Reset_Handler
#endif /* __XC32_RESET_HANDLER_NAME */



/* Initialize segments */
extern uint32_t __svectors;
extern uint32_t _stack;
extern uint32_t _dinit_size;
extern uint32_t _dinit_addr;
extern uint32_t _sbss, _ebss;
extern uint32_t _sfixed;

/** \cond DOXYGEN_SHOULD_SKIP_THIS */
int main(void);
/** \endcond */

extern void __attribute__((long_call)) __libc_init_array(void);

/* Default empty handler */
void __attribute__((weak, used, optimize("-O1"), long_call, externally_visible)) Dummy_Handler(void);

/* Reset handler and application-provided reset handler */
void __attribute__((weak, optimize("-O1"), long_call, naked, externally_visible)) Reset_Handler(void);
extern void __attribute__((weak, used, long_call)) __XC32_RESET_HANDLER_NAME(void);

/* Cortex-M4 core handlers */
void NonMaskableInt_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HardFault_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void BusFault_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UsageFault_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SVCall_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DebugMonitor_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PendSV_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SysTick_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Peripherals handlers */
void GPIO_140_176_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GPIO_100_137_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GPIO_040_076_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GPIO_000_036_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GPIO_200_236_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved5_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved6_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved7_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved8_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved9_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved10_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved11_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved12_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved13_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SWI_INT_0123_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ESPI_MSVW00_06_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ESPI_MSVW07_10_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GPIO_240_276_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved18_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved19_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SMB0_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SMB1_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SMB2_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SMB3_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CHAN00_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CHAN01_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CHAN02_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CHAN03_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CHAN04_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CHAN05_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CHAN06_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CHAN07_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CHAN08_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CHAN09_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CHAN10_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMA_CHAN11_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved36_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved37_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved38_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved39_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART0_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART1_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EMI0_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EMI1_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART2_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void IBF0_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void OBF0_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void IBF1_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void OBF1_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void IBF2_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void OBF2_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void IBF3_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void OBF3_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved53_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved54_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ACPIPM1_CTL_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ACPIPM1_EN_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ACPIPM1_STS_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void KBC8042_OBF_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void KBC8042_IBF_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MBX_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved61_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PORT_80_DEBUG0_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PORT_80_DEBUG1_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved64_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved65_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved66_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved67_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved68_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved69_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PECI_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TACH0_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TACH1_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TACH2_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved74_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved75_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved76_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved77_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SNGL_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RPT_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved80_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved81_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved82_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void LED0_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void LED1_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void LED2_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved86_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PROCHOT_MON_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved88_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved89_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SPI_SLAVE_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void QMSPI_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved92_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved93_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved94_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved95_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved96_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved97_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved98_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved99_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PS2_0_ACT_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PS2_1_ACT_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved102_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void INTR_PC_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void INTR_BM1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void INTR_BM2_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void INTR_LTR_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void INTR_OOB_UP_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void INTR_OOB_DOWN_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void INTR_FLASH_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ESPI_RESET_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TIMER_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HTM0_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HTM1_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ALARM_INT_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUB_WEEK_ALARM_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ONE_SECOND_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUB_SECOND_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SYSPWR_PRES_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void INT_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ALARM_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void OVRD_IN_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void IN0_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void IN1_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void IN2_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void IN3_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved126_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved127_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved128_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PS2_0A_WK_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PS2_0B_WK_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved131_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PS2_1B_WK_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved133_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved134_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void KMS_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TIMER16_0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TIMER16_1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved138_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved139_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TIMER32_0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TIMER32_1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved142_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved143_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved144_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved145_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CAPTURE_TIMER_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CAPTURE_0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CAPTURE_1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CAPTURE_2_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CAPTURE_3_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CAPTURE_4_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CAPTURE_5_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void COMPARE_0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void COMPARE_1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved155_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void VWIRE_ENABLE_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved157_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SMB4_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TACH3_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HDMI_CEC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SGPIO0_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SGPIO1_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SGPIO2_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SGPIO3_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved165_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EC_CMPLTN_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ESPI_ERROR_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void I2C0_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void I2C1_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void I2C2_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Exception Table */
__attribute__ ((section(".vectors.default"), weak, externally_visible))
const DeviceVectors exception_table=
{
        /* Configure Initial Stack Pointer, using linker-generated symbols */
        .pvStack = (void*) (&_stack),

        .pfnReset_Handler              = (void*) __XC32_RESET_HANDLER_NAME,
        /* .pfnNonMaskableInt_Handler = */ (void*) NonMaskableInt_Handler,
        .pfnHardFault_Handler          = (void*) HardFault_Handler,
        /* .pvReservedC12           = */ (void*) (0UL), /* Reserved */
        .pfnBusFault_Handler           = (void*) BusFault_Handler,
        .pfnUsageFault_Handler         = (void*) UsageFault_Handler,
        /* .pvReservedC9            = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC8            = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC7            = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC6            = */ (void*) (0UL), /* Reserved */
        /* .pfnSVCall_Handler       = */ (void*) SVCall_Handler,
        .pfnDebugMonitor_Handler       = (void*) DebugMonitor_Handler,
        /* .pvReservedC3            = */ (void*) (0UL), /* Reserved */
        .pfnPendSV_Handler             = (void*) PendSV_Handler,
        .pfnSysTick_Handler            = (void*) SysTick_Handler,

#if (HEADER_FORMAT_VERSION_MAJOR > 1) /* include_mcc header file */
        /* Configurable interrupts with MCC names */
        /* .pfnGPIO_140_176_Handler = */ (void*) GPIO_140_176_Handler, /* 0  GPIO 140:176 Pin Control Registers */
        /* .pfnGPIO_100_137_Handler = */ (void*) GPIO_100_137_Handler, /* 1  GPIO 100:137 Pin Control Registers */
        /* .pfnGPIO_040_076_Handler = */ (void*) GPIO_040_076_Handler, /* 2  GPIO 040:076 Pin Control Registers */
        /* .pfnGPIO_000_036_Handler = */ (void*) GPIO_000_036_Handler, /* 3  GPIO 000:036 Pin Control Registers */
        /* .pfnGPIO_200_236_Handler = */ (void*) GPIO_200_236_Handler, /* 4  GPIO 200:236 Pin Control Registers */
        /* .pvReserved5             = */ (void*) (0UL),               /* 5  Reserved */
        /* .pvReserved6             = */ (void*) (0UL),               /* 6  Reserved */
        /* .pvReserved7             = */ (void*) (0UL),               /* 7  Reserved */
        /* .pvReserved8             = */ (void*) (0UL),               /* 8  Reserved */
        /* .pvReserved9             = */ (void*) (0UL),               /* 9  Reserved */
        /* .pvReserved10            = */ (void*) (0UL),               /* 10 Reserved */
        /* .pvReserved11            = */ (void*) (0UL),               /* 11 Reserved */
        /* .pvReserved12            = */ (void*) (0UL),               /* 12 Reserved */
        /* .pvReserved13            = */ (void*) (0UL),               /* 13 Reserved */
        /* .pfnSWI_INT_0123_Handler = */ (void*) SWI_INT_0123_Handler, /* 14 The RTOS Timer is a low-power, 32-bit timer designed to operate on the 32kHz oscillator which is available during all\n    chip sleep states. This allows firmware the option to sleep the processor, enter heavy or deep chip sleep states, and\n    wake after a programmed amount of time. The timer may be used as a one-shot timer or a continuous timer. When the\n    timer transitions to 0 it is capable of generating a wake-capable interrupt to the embedded controller. This timer may be\n    halted during debug by hardware or via a software control bit. */
        /* .pfnESPI_MSVW00_06_Handler = */ (void*) ESPI_MSVW00_06_Handler, /* 15 The Virtual Wire Channel permits the System to emulate a set of wires that interconnect the system Core Logic with the EC. */
        /* .pfnESPI_MSVW07_10_Handler = */ (void*) ESPI_MSVW07_10_Handler, /* 16 The Virtual Wire Channel permits the System to emulate a set of wires that interconnect the system Core Logic with the EC. */
        /* .pfnGPIO_240_276_Handler = */ (void*) GPIO_240_276_Handler, /* 17 GPIO 240:276 Pin Control Registers */
        /* .pvReserved18            = */ (void*) (0UL),               /* 18 Reserved */
        /* .pvReserved19            = */ (void*) (0UL),               /* 19 Reserved */
        /* .pfnSMB0_Handler         = */ (void*) SMB0_Handler,        /* 20 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        /* .pfnSMB1_Handler         = */ (void*) SMB1_Handler,        /* 21 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        /* .pfnSMB2_Handler         = */ (void*) SMB2_Handler,        /* 22 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        /* .pfnSMB3_Handler         = */ (void*) SMB3_Handler,        /* 23 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        /* .pfnDMA_CHAN00_Handler   = */ (void*) DMA_CHAN00_Handler,  /* 24 DMA Channel 00 Registers */
        /* .pfnDMA_CHAN01_Handler   = */ (void*) DMA_CHAN01_Handler,  /* 25 DMA Channel 01 Registers */
        /* .pfnDMA_CHAN02_Handler   = */ (void*) DMA_CHAN02_Handler,  /* 26 DMA Channel 00 Registers */
        /* .pfnDMA_CHAN03_Handler   = */ (void*) DMA_CHAN03_Handler,  /* 27 DMA Channel 00 Registers */
        /* .pfnDMA_CHAN04_Handler   = */ (void*) DMA_CHAN04_Handler,  /* 28 DMA Channel 00 Registers */
        /* .pfnDMA_CHAN05_Handler   = */ (void*) DMA_CHAN05_Handler,  /* 29 DMA Channel 00 Registers */
        /* .pfnDMA_CHAN06_Handler   = */ (void*) DMA_CHAN06_Handler,  /* 30 DMA Channel 00 Registers */
        /* .pfnDMA_CHAN07_Handler   = */ (void*) DMA_CHAN07_Handler,  /* 31 DMA Channel 00 Registers */
        /* .pfnDMA_CHAN08_Handler   = */ (void*) DMA_CHAN08_Handler,  /* 32 DMA Channel 00 Registers */
        /* .pfnDMA_CHAN09_Handler   = */ (void*) DMA_CHAN09_Handler,  /* 33 DMA Channel 00 Registers */
        /* .pfnDMA_CHAN10_Handler   = */ (void*) DMA_CHAN10_Handler,  /* 34 DMA Channel 00 Registers */
        /* .pfnDMA_CHAN11_Handler   = */ (void*) DMA_CHAN11_Handler,  /* 35 DMA Channel 00 Registers */
        /* .pvReserved36            = */ (void*) (0UL),               /* 36 Reserved */
        /* .pvReserved37            = */ (void*) (0UL),               /* 37 Reserved */
        /* .pvReserved38            = */ (void*) (0UL),               /* 38 Reserved */
        /* .pvReserved39            = */ (void*) (0UL),               /* 39 Reserved */
        /* .pfnUART0_Handler        = */ (void*) UART0_Handler,       /* 40 The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n        full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
        /* .pfnUART1_Handler        = */ (void*) UART1_Handler,       /* 41 The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n        full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
        /* .pfnEMI0_Handler         = */ (void*) EMI0_Handler,        /* 42 The Embedded Memory Interface (EMI) provides a standard run-time mechanism\n        for the system host to communicate with the Embedded Controller (EC) and other logical components. */
        /* .pfnEMI1_Handler         = */ (void*) EMI1_Handler,        /* 43 The Embedded Memory Interface (EMI) provides a standard run-time mechanism\n        for the system host to communicate with the Embedded Controller (EC) and other logical components. */
        /* .pfnUART2_Handler        = */ (void*) UART2_Handler,       /* 44 The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n        full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
        /* .pfnIBF0_Handler         = */ (void*) IBF0_Handler,        /* 45 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. */
        /* .pfnOBF0_Handler         = */ (void*) OBF0_Handler,        /* 46 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. */
        /* .pfnIBF1_Handler         = */ (void*) IBF1_Handler,        /* 47 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. */
        /* .pfnOBF1_Handler         = */ (void*) OBF1_Handler,        /* 48 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. */
        /* .pfnIBF2_Handler         = */ (void*) IBF2_Handler,        /* 49 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. */
        /* .pfnOBF2_Handler         = */ (void*) OBF2_Handler,        /* 50 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. */
        /* .pfnIBF3_Handler         = */ (void*) IBF3_Handler,        /* 51 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. */
        /* .pfnOBF3_Handler         = */ (void*) OBF3_Handler,        /* 52 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. */
        /* .pvReserved53            = */ (void*) (0UL),               /* 53 Reserved */
        /* .pvReserved54            = */ (void*) (0UL),               /* 54 Reserved */
        /* .pfnACPIPM1_CTL_Handler  = */ (void*) ACPIPM1_CTL_Handler, /* 55 The device implements the ACPI fixed registers but includes only those bits\n that apply to the power button\n    sleep button and RTC alarm events. The ACPI WAK_STS, SLP_TYP and SLP_EN bits are also supported. */
        /* .pfnACPIPM1_EN_Handler   = */ (void*) ACPIPM1_EN_Handler,  /* 56 The device implements the ACPI fixed registers but includes only those bits\n that apply to the power button\n    sleep button and RTC alarm events. The ACPI WAK_STS, SLP_TYP and SLP_EN bits are also supported. */
        /* .pfnACPIPM1_STS_Handler  = */ (void*) ACPIPM1_STS_Handler, /* 57 The device implements the ACPI fixed registers but includes only those bits\n that apply to the power button\n    sleep button and RTC alarm events. The ACPI WAK_STS, SLP_TYP and SLP_EN bits are also supported. */
        /* .pfnKBC8042_OBF_Handler  = */ (void*) KBC8042_OBF_Handler, /* 58 The keyboard controller uses the EC to produce a superset of the features provided by the\n        industry-standard 8042 keyboard controller. The 8042 Emulated Keyboard Controller is a Host/EC\n     Message Interface with hardware assists to emulate 8042 behavior and provide Legacy GATEA20 support. */
        /* .pfnKBC8042_IBF_Handler  = */ (void*) KBC8042_IBF_Handler, /* 59 The keyboard controller uses the EC to produce a superset of the features provided by the\n        industry-standard 8042 keyboard controller. The 8042 Emulated Keyboard Controller is a Host/EC\n     Message Interface with hardware assists to emulate 8042 behavior and provide Legacy GATEA20 support. */
        /* .pfnMBX_Handler          = */ (void*) MBX_Handler,         /* 60 The Mailbox provides a standard run-time mechanism for the host to communicate with the Embedded Controller (EC). */
        /* .pvReserved61            = */ (void*) (0UL),               /* 61 Reserved */
        /* .pfnPORT_80_DEBUG0_Handler = */ (void*) PORT_80_DEBUG0_Handler, /* 62 The Port 80 BIOS Debug Port emulates the functionality of a Port 80 ISA plug-in card. In addition, a timestamp for the debug data can be\n     optionally added. Diagnostic data is written by the Host Interface to the Port 80 BIOS Debug Port, which is located in the Host I/O address space.\n    The Port 80 BIOS Debug Port generates an interrupt to the EC when host data is available. The EC reads this data along with the timestamp, if enabled. */
        /* .pfnPORT_80_DEBUG1_Handler = */ (void*) PORT_80_DEBUG1_Handler, /* 63 The Port 80 BIOS Debug Port emulates the functionality of a Port 80 ISA plug-in card. In addition, a timestamp for the debug data can be\n     optionally added. Diagnostic data is written by the Host Interface to the Port 80 BIOS Debug Port, which is located in the Host I/O address space.\n    The Port 80 BIOS Debug Port generates an interrupt to the EC when host data is available. The EC reads this data along with the timestamp, if enabled. */
        /* .pvReserved64            = */ (void*) (0UL),               /* 64 Reserved */
        /* .pvReserved65            = */ (void*) (0UL),               /* 65 Reserved */
        /* .pvReserved66            = */ (void*) (0UL),               /* 66 Reserved */
        /* .pvReserved67            = */ (void*) (0UL),               /* 67 Reserved */
        /* .pvReserved68            = */ (void*) (0UL),               /* 68 Reserved */
        /* .pvReserved69            = */ (void*) (0UL),               /* 69 Reserved */
        /* .pfnPECI_Handler         = */ (void*) PECI_Handler,        /* 70 The PECI Interface allows the EC to retrieve temperature readings from PECI-compliant devices. */
        /* .pfnTACH0_Handler        = */ (void*) TACH0_Handler,       /* 71 This block monitors TACH output signals (or locked rotor signals) from\n        various types of fans, and determines their speed. */
        /* .pfnTACH1_Handler        = */ (void*) TACH1_Handler,       /* 72 This block monitors TACH output signals (or locked rotor signals) from\n        various types of fans, and determines their speed. */
        /* .pfnTACH2_Handler        = */ (void*) TACH2_Handler,       /* 73 This block monitors TACH output signals (or locked rotor signals) from\n        various types of fans, and determines their speed. */
        /* .pvReserved74            = */ (void*) (0UL),               /* 74 Reserved */
        /* .pvReserved75            = */ (void*) (0UL),               /* 75 Reserved */
        /* .pvReserved76            = */ (void*) (0UL),               /* 76 Reserved */
        /* .pvReserved77            = */ (void*) (0UL),               /* 77 Reserved */
        /* .pfnSNGL_Handler         = */ (void*) SNGL_Handler,        /* 78 This block is designed to convert external analog voltage readings into digital values. */
        /* .pfnRPT_Handler          = */ (void*) RPT_Handler,         /* 79 This block is designed to convert external analog voltage readings into digital values. */
        /* .pvReserved80            = */ (void*) (0UL),               /* 80 Reserved */
        /* .pvReserved81            = */ (void*) (0UL),               /* 81 Reserved */
        /* .pvReserved82            = */ (void*) (0UL),               /* 82 Reserved */
        /* .pfnLED0_Handler         = */ (void*) LED0_Handler,        /* 83 The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n        clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n        PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. */
        /* .pfnLED1_Handler         = */ (void*) LED1_Handler,        /* 84 The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n        clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n        PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. */
        /* .pfnLED2_Handler         = */ (void*) LED2_Handler,        /* 85 The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n        clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n        PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. */
        /* .pvReserved86            = */ (void*) (0UL),               /* 86 Reserved */
        /* .pfnPROCHOT_MON_Handler  = */ (void*) PROCHOT_MON_Handler, /* 87 This block monitors the PROCHOT# signal generated by the host processor. It is designed to detect single assertions and monitor cumulative PROCHOT active time. */
        /* .pvReserved88            = */ (void*) (0UL),               /* 88 Reserved */
        /* .pvReserved89            = */ (void*) (0UL),               /* 89 Reserved */
        /* .pfnSPI_SLAVE_Handler    = */ (void*) SPI_SLAVE_Handler,   /* 90 SPI Slave Register. */
        /* .pfnQMSPI_Handler        = */ (void*) QMSPI_Handler,       /* 91 The Quad SPI Master Controller may be used to communicate with various \n        peripheral devices that use a Serial Peripheral Interface, such as EEPROMS, DACs and ADCs.\n        The controller can be configured to support advanced SPI Flash devices with multi-phase access protocols. */
        /* .pvReserved92            = */ (void*) (0UL),               /* 92 Reserved */
        /* .pvReserved93            = */ (void*) (0UL),               /* 93 Reserved */
        /* .pvReserved94            = */ (void*) (0UL),               /* 94 Reserved */
        /* .pvReserved95            = */ (void*) (0UL),               /* 95 Reserved */
        /* .pvReserved96            = */ (void*) (0UL),               /* 96 Reserved */
        /* .pvReserved97            = */ (void*) (0UL),               /* 97 Reserved */
        /* .pvReserved98            = */ (void*) (0UL),               /* 98 Reserved */
        /* .pvReserved99            = */ (void*) (0UL),               /* 99 Reserved */
        /* .pfnPS2_0_ACT_Handler    = */ (void*) PS2_0_ACT_Handler,   /* 100 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. */
        /* .pfnPS2_1_ACT_Handler    = */ (void*) PS2_1_ACT_Handler,   /* 101 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. */
        /* .pvReserved102           = */ (void*) (0UL),               /* 102 Reserved */
        /* .pfnINTR_PC_Handler      = */ (void*) INTR_PC_Handler,     /* 103 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. */
        /* .pfnINTR_BM1_Handler     = */ (void*) INTR_BM1_Handler,    /* 104 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. */
        /* .pfnINTR_BM2_Handler     = */ (void*) INTR_BM2_Handler,    /* 105 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. */
        /* .pfnINTR_LTR_Handler     = */ (void*) INTR_LTR_Handler,    /* 106 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. */
        /* .pfnINTR_OOB_UP_Handler  = */ (void*) INTR_OOB_UP_Handler, /* 107 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. */
        /* .pfnINTR_OOB_DOWN_Handler = */ (void*) INTR_OOB_DOWN_Handler, /* 108 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. */
        /* .pfnINTR_FLASH_Handler   = */ (void*) INTR_FLASH_Handler,  /* 109 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. */
        /* .pfnESPI_RESET_Handler   = */ (void*) ESPI_RESET_Handler,  /* 110 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. */
        /* .pfnTIMER_Handler        = */ (void*) TIMER_Handler,       /* 111 The RTOS Timer is a low-power, 32-bit timer designed to operate on the 32kHz oscillator which is available during all\n    chip sleep states. This allows firmware the option to sleep the processor, enter heavy or deep chip sleep states, and\n    wake after a programmed amount of time. The timer may be used as a one-shot timer or a continuous timer. When the\n    timer transitions to 0 it is capable of generating a wake-capable interrupt to the embedded controller. This timer may be\n    halted during debug by hardware or via a software control bit. */
        /* .pfnHTM0_Handler         = */ (void*) HTM0_Handler,        /* 112 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n    This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n    in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. */
        /* .pfnHTM1_Handler         = */ (void*) HTM1_Handler,        /* 113 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n    This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n    in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. */
        /* .pfnALARM_INT_Handler    = */ (void*) ALARM_INT_Handler,   /* 114 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        /* .pfnSUB_WEEK_ALARM_Handler = */ (void*) SUB_WEEK_ALARM_Handler, /* 115 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        /* .pfnONE_SECOND_Handler   = */ (void*) ONE_SECOND_Handler,  /* 116 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        /* .pfnSUB_SECOND_Handler   = */ (void*) SUB_SECOND_Handler,  /* 117 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        /* .pfnSYSPWR_PRES_Handler  = */ (void*) SYSPWR_PRES_Handler, /* 118 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        /* .pfnINT_Handler          = */ (void*) INT_Handler,         /* 119 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n    to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. */
        /* .pfnALARM_Handler        = */ (void*) ALARM_Handler,       /* 120 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n    to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. */
        /* .pfnOVRD_IN_Handler      = */ (void*) OVRD_IN_Handler,     /* 121 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN0_Handler          = */ (void*) IN0_Handler,         /* 122 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN1_Handler          = */ (void*) IN1_Handler,         /* 123 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN2_Handler          = */ (void*) IN2_Handler,         /* 124 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN3_Handler          = */ (void*) IN3_Handler,         /* 125 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pvReserved126           = */ (void*) (0UL),               /* 126 Reserved */
        /* .pvReserved127           = */ (void*) (0UL),               /* 127 Reserved */
        /* .pvReserved128           = */ (void*) (0UL),               /* 128 Reserved */
        /* .pfnPS2_0A_WK_Handler    = */ (void*) PS2_0A_WK_Handler,   /* 129 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. */
        /* .pfnPS2_0B_WK_Handler    = */ (void*) PS2_0B_WK_Handler,   /* 130 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. */
        /* .pvReserved131           = */ (void*) (0UL),               /* 131 Reserved */
        /* .pfnPS2_1B_WK_Handler    = */ (void*) PS2_1B_WK_Handler,   /* 132 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. */
        /* .pvReserved133           = */ (void*) (0UL),               /* 133 Reserved */
        /* .pvReserved134           = */ (void*) (0UL),               /* 134 Reserved */
        /* .pfnKMS_Handler          = */ (void*) KMS_Handler,         /* 135 The Keyboard Scan Interface block provides a register interface to the EC\n        to directly scan an external keyboard matrix of size up to 18x8. */
        /* .pfnTIMER16_0_Handler    = */ (void*) TIMER16_0_Handler,   /* 136 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n    The name of the timer instance indicates the size of the timer. */
        /* .pfnTIMER16_1_Handler    = */ (void*) TIMER16_1_Handler,   /* 137 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n    The name of the timer instance indicates the size of the timer. */
        /* .pvReserved138           = */ (void*) (0UL),               /* 138 Reserved */
        /* .pvReserved139           = */ (void*) (0UL),               /* 139 Reserved */
        /* .pfnTIMER32_0_Handler    = */ (void*) TIMER32_0_Handler,   /* 140 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as \n    32 bits. The name of the timer instance indicates the size of the timer. */
        /* .pfnTIMER32_1_Handler    = */ (void*) TIMER32_1_Handler,   /* 141 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as \n    32 bits. The name of the timer instance indicates the size of the timer. */
        /* .pvReserved142           = */ (void*) (0UL),               /* 142 Reserved */
        /* .pvReserved143           = */ (void*) (0UL),               /* 143 Reserved */
        /* .pvReserved144           = */ (void*) (0UL),               /* 144 Reserved */
        /* .pvReserved145           = */ (void*) (0UL),               /* 145 Reserved */
        /* .pfnCAPTURE_TIMER_Handler = */ (void*) CAPTURE_TIMER_Handler, /* 146 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_0_Handler    = */ (void*) CAPTURE_0_Handler,   /* 147 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_1_Handler    = */ (void*) CAPTURE_1_Handler,   /* 148 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_2_Handler    = */ (void*) CAPTURE_2_Handler,   /* 149 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_3_Handler    = */ (void*) CAPTURE_3_Handler,   /* 150 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_4_Handler    = */ (void*) CAPTURE_4_Handler,   /* 151 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_5_Handler    = */ (void*) CAPTURE_5_Handler,   /* 152 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCOMPARE_0_Handler    = */ (void*) COMPARE_0_Handler,   /* 153 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCOMPARE_1_Handler    = */ (void*) COMPARE_1_Handler,   /* 154 This is a 16-bit auto-reloading timer/counter. */
        /* .pvReserved155           = */ (void*) (0UL),               /* 155 Reserved */
        /* .pfnVWIRE_ENABLE_Handler = */ (void*) VWIRE_ENABLE_Handler, /* 156 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. */
        /* .pvReserved157           = */ (void*) (0UL),               /* 157 Reserved */
        /* .pfnSMB4_Handler         = */ (void*) SMB4_Handler,        /* 158 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        /* .pfnTACH3_Handler        = */ (void*) TACH3_Handler,       /* 159 This block monitors TACH output signals (or locked rotor signals) from\n        various types of fans, and determines their speed. */
        /* .pfnHDMI_CEC_Handler     = */ (void*) HDMI_CEC_Handler,    /* 160 The HDMI Consumer Electronics Control (CEC) Interface that provides high-level control functions between all of the        various audiovisual products in a users environment. */
        /* .pfnSGPIO0_Handler       = */ (void*) SGPIO0_Handler,      /* 161 This is Serial General Purpous Input Output block */
        /* .pfnSGPIO1_Handler       = */ (void*) SGPIO1_Handler,      /* 162 This is Serial General Purpous Input Output block */
        /* .pfnSGPIO2_Handler       = */ (void*) SGPIO2_Handler,      /* 163 This is Serial General Purpous Input Output block */
        /* .pfnSGPIO3_Handler       = */ (void*) SGPIO3_Handler,      /* 164 This is Serial General Purpous Input Output block */
        /* .pvReserved165           = */ (void*) (0UL),               /* 165 Reserved */
        /* .pfnEC_CMPLTN_Handler    = */ (void*) EC_CMPLTN_Handler,   /* 166 SAF BRIDGE COMPONENT */
        /* .pfnESPI_ERROR_Handler   = */ (void*) ESPI_ERROR_Handler,  /* 167 SAF BRIDGE COMPONENT */
        /* .pfnI2C0_Handler         = */ (void*) I2C0_Handler,        /* 168 The I2C interface can handle standard I2C interface. */
        /* .pfnI2C1_Handler         = */ (void*) I2C1_Handler,        /* 169 The I2C interface can handle standard I2C interface. */
        /* .pfnI2C2_Handler         = */ (void*) I2C2_Handler         /* 170 The I2C interface can handle standard I2C interface. */

#else /* Legacy defined(_PIC32CX0525SG12144_H) */
        /* Configurable interrupts with Legacy names */
        /* .pfnGPIO_140_176_Handler = */ (void*) GPIO_140_176_Handler, /* 0  GPIO 140:176 Pin Control Registers */
        /* .pfnGPIO_100_137_Handler = */ (void*) GPIO_100_137_Handler, /* 1  GPIO 100:137 Pin Control Registers */
        /* .pfnGPIO_040_076_Handler = */ (void*) GPIO_040_076_Handler, /* 2  GPIO 040:076 Pin Control Registers */
        /* .pfnGPIO_000_036_Handler = */ (void*) GPIO_000_036_Handler, /* 3  GPIO 000:036 Pin Control Registers */
        /* .pfnGPIO_200_236_Handler = */ (void*) GPIO_200_236_Handler, /* 4  GPIO 200:236 Pin Control Registers */
        /* .pvReserved5             = */ (void*) (0UL),               /* 5  Reserved */
        /* .pvReserved6             = */ (void*) (0UL),               /* 6  Reserved */
        /* .pvReserved7             = */ (void*) (0UL),               /* 7  Reserved */
        /* .pvReserved8             = */ (void*) (0UL),               /* 8  Reserved */
        /* .pvReserved9             = */ (void*) (0UL),               /* 9  Reserved */
        /* .pvReserved10            = */ (void*) (0UL),               /* 10 Reserved */
        /* .pvReserved11            = */ (void*) (0UL),               /* 11 Reserved */
        /* .pvReserved12            = */ (void*) (0UL),               /* 12 Reserved */
        /* .pvReserved13            = */ (void*) (0UL),               /* 13 Reserved */
        /* .pfnSWI_INT_0123_Handler = */ (void*) SWI_INT_0123_Handler, /* 14 The RTOS Timer is a low-power, 32-bit timer designed to operate on the 32kHz oscillator which is available during all\n    chip sleep states. This allows firmware the option to sleep the processor, enter heavy or deep chip sleep states, and\n    wake after a programmed amount of time. The timer may be used as a one-shot timer or a continuous timer. When the\n    timer transitions to 0 it is capable of generating a wake-capable interrupt to the embedded controller. This timer may be\n    halted during debug by hardware or via a software control bit. */
        /* .pfnESPI_MSVW00_06_Handler = */ (void*) ESPI_MSVW00_06_Handler, /* 15 The Virtual Wire Channel permits the System to emulate a set of wires that interconnect the system Core Logic with the EC. */
        /* .pfnESPI_MSVW07_10_Handler = */ (void*) ESPI_MSVW07_10_Handler, /* 16 The Virtual Wire Channel permits the System to emulate a set of wires that interconnect the system Core Logic with the EC. */
        /* .pfnGPIO_240_276_Handler = */ (void*) GPIO_240_276_Handler, /* 17 GPIO 240:276 Pin Control Registers */
        /* .pvReserved18            = */ (void*) (0UL),               /* 18 Reserved */
        /* .pvReserved19            = */ (void*) (0UL),               /* 19 Reserved */
        /* .pfnSMB0_Handler         = */ (void*) SMB0_Handler,        /* 20 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        /* .pfnSMB1_Handler         = */ (void*) SMB1_Handler,        /* 21 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        /* .pfnSMB2_Handler         = */ (void*) SMB2_Handler,        /* 22 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        /* .pfnSMB3_Handler         = */ (void*) SMB3_Handler,        /* 23 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        /* .pfnDMA_CHAN00_Handler   = */ (void*) DMA_CHAN00_Handler,  /* 24 DMA Channel 00 Registers */
        /* .pfnDMA_CHAN01_Handler   = */ (void*) DMA_CHAN01_Handler,  /* 25 DMA Channel 01 Registers */
        /* .pfnDMA_CHAN02_Handler   = */ (void*) DMA_CHAN02_Handler,  /* 26 DMA Channel 00 Registers */
        /* .pfnDMA_CHAN03_Handler   = */ (void*) DMA_CHAN03_Handler,  /* 27 DMA Channel 00 Registers */
        /* .pfnDMA_CHAN04_Handler   = */ (void*) DMA_CHAN04_Handler,  /* 28 DMA Channel 00 Registers */
        /* .pfnDMA_CHAN05_Handler   = */ (void*) DMA_CHAN05_Handler,  /* 29 DMA Channel 00 Registers */
        /* .pfnDMA_CHAN06_Handler   = */ (void*) DMA_CHAN06_Handler,  /* 30 DMA Channel 00 Registers */
        /* .pfnDMA_CHAN07_Handler   = */ (void*) DMA_CHAN07_Handler,  /* 31 DMA Channel 00 Registers */
        /* .pfnDMA_CHAN08_Handler   = */ (void*) DMA_CHAN08_Handler,  /* 32 DMA Channel 00 Registers */
        /* .pfnDMA_CHAN09_Handler   = */ (void*) DMA_CHAN09_Handler,  /* 33 DMA Channel 00 Registers */
        /* .pfnDMA_CHAN10_Handler   = */ (void*) DMA_CHAN10_Handler,  /* 34 DMA Channel 00 Registers */
        /* .pfnDMA_CHAN11_Handler   = */ (void*) DMA_CHAN11_Handler,  /* 35 DMA Channel 00 Registers */
        /* .pvReserved36            = */ (void*) (0UL),               /* 36 Reserved */
        /* .pvReserved37            = */ (void*) (0UL),               /* 37 Reserved */
        /* .pvReserved38            = */ (void*) (0UL),               /* 38 Reserved */
        /* .pvReserved39            = */ (void*) (0UL),               /* 39 Reserved */
        /* .pfnUART0_Handler        = */ (void*) UART0_Handler,       /* 40 The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n        full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
        /* .pfnUART1_Handler        = */ (void*) UART1_Handler,       /* 41 The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n        full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
        /* .pfnEMI0_Handler         = */ (void*) EMI0_Handler,        /* 42 The Embedded Memory Interface (EMI) provides a standard run-time mechanism\n        for the system host to communicate with the Embedded Controller (EC) and other logical components. */
        /* .pfnEMI1_Handler         = */ (void*) EMI1_Handler,        /* 43 The Embedded Memory Interface (EMI) provides a standard run-time mechanism\n        for the system host to communicate with the Embedded Controller (EC) and other logical components. */
        /* .pfnUART2_Handler        = */ (void*) UART2_Handler,       /* 44 The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n        full-function Two Pin Serial Port that supports the standard RS-232 Interface. */
        /* .pfnIBF0_Handler         = */ (void*) IBF0_Handler,        /* 45 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. */
        /* .pfnOBF0_Handler         = */ (void*) OBF0_Handler,        /* 46 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. */
        /* .pfnIBF1_Handler         = */ (void*) IBF1_Handler,        /* 47 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. */
        /* .pfnOBF1_Handler         = */ (void*) OBF1_Handler,        /* 48 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. */
        /* .pfnIBF2_Handler         = */ (void*) IBF2_Handler,        /* 49 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. */
        /* .pfnOBF2_Handler         = */ (void*) OBF2_Handler,        /* 50 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. */
        /* .pfnIBF3_Handler         = */ (void*) IBF3_Handler,        /* 51 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. */
        /* .pfnOBF3_Handler         = */ (void*) OBF3_Handler,        /* 52 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. */
        /* .pvReserved53            = */ (void*) (0UL),               /* 53 Reserved */
        /* .pvReserved54            = */ (void*) (0UL),               /* 54 Reserved */
        /* .pfnACPIPM1_CTL_Handler  = */ (void*) ACPIPM1_CTL_Handler, /* 55 The device implements the ACPI fixed registers but includes only those bits\n that apply to the power button\n    sleep button and RTC alarm events. The ACPI WAK_STS, SLP_TYP and SLP_EN bits are also supported. */
        /* .pfnACPIPM1_EN_Handler   = */ (void*) ACPIPM1_EN_Handler,  /* 56 The device implements the ACPI fixed registers but includes only those bits\n that apply to the power button\n    sleep button and RTC alarm events. The ACPI WAK_STS, SLP_TYP and SLP_EN bits are also supported. */
        /* .pfnACPIPM1_STS_Handler  = */ (void*) ACPIPM1_STS_Handler, /* 57 The device implements the ACPI fixed registers but includes only those bits\n that apply to the power button\n    sleep button and RTC alarm events. The ACPI WAK_STS, SLP_TYP and SLP_EN bits are also supported. */
        /* .pfnKBC8042_OBF_Handler  = */ (void*) KBC8042_OBF_Handler, /* 58 The keyboard controller uses the EC to produce a superset of the features provided by the\n        industry-standard 8042 keyboard controller. The 8042 Emulated Keyboard Controller is a Host/EC\n     Message Interface with hardware assists to emulate 8042 behavior and provide Legacy GATEA20 support. */
        /* .pfnKBC8042_IBF_Handler  = */ (void*) KBC8042_IBF_Handler, /* 59 The keyboard controller uses the EC to produce a superset of the features provided by the\n        industry-standard 8042 keyboard controller. The 8042 Emulated Keyboard Controller is a Host/EC\n     Message Interface with hardware assists to emulate 8042 behavior and provide Legacy GATEA20 support. */
        /* .pfnMBX_Handler          = */ (void*) MBX_Handler,         /* 60 The Mailbox provides a standard run-time mechanism for the host to communicate with the Embedded Controller (EC). */
        /* .pvReserved61            = */ (void*) (0UL),               /* 61 Reserved */
        /* .pfnPORT_80_DEBUG0_Handler = */ (void*) PORT_80_DEBUG0_Handler, /* 62 The Port 80 BIOS Debug Port emulates the functionality of a Port 80 ISA plug-in card. In addition, a timestamp for the debug data can be\n     optionally added. Diagnostic data is written by the Host Interface to the Port 80 BIOS Debug Port, which is located in the Host I/O address space.\n    The Port 80 BIOS Debug Port generates an interrupt to the EC when host data is available. The EC reads this data along with the timestamp, if enabled. */
        /* .pfnPORT_80_DEBUG1_Handler = */ (void*) PORT_80_DEBUG1_Handler, /* 63 The Port 80 BIOS Debug Port emulates the functionality of a Port 80 ISA plug-in card. In addition, a timestamp for the debug data can be\n     optionally added. Diagnostic data is written by the Host Interface to the Port 80 BIOS Debug Port, which is located in the Host I/O address space.\n    The Port 80 BIOS Debug Port generates an interrupt to the EC when host data is available. The EC reads this data along with the timestamp, if enabled. */
        /* .pvReserved64            = */ (void*) (0UL),               /* 64 Reserved */
        /* .pvReserved65            = */ (void*) (0UL),               /* 65 Reserved */
        /* .pvReserved66            = */ (void*) (0UL),               /* 66 Reserved */
        /* .pvReserved67            = */ (void*) (0UL),               /* 67 Reserved */
        /* .pvReserved68            = */ (void*) (0UL),               /* 68 Reserved */
        /* .pvReserved69            = */ (void*) (0UL),               /* 69 Reserved */
        /* .pfnPECI_Handler         = */ (void*) PECI_Handler,        /* 70 The PECI Interface allows the EC to retrieve temperature readings from PECI-compliant devices. */
        /* .pfnTACH0_Handler        = */ (void*) TACH0_Handler,       /* 71 This block monitors TACH output signals (or locked rotor signals) from\n        various types of fans, and determines their speed. */
        /* .pfnTACH1_Handler        = */ (void*) TACH1_Handler,       /* 72 This block monitors TACH output signals (or locked rotor signals) from\n        various types of fans, and determines their speed. */
        /* .pfnTACH2_Handler        = */ (void*) TACH2_Handler,       /* 73 This block monitors TACH output signals (or locked rotor signals) from\n        various types of fans, and determines their speed. */
        /* .pvReserved74            = */ (void*) (0UL),               /* 74 Reserved */
        /* .pvReserved75            = */ (void*) (0UL),               /* 75 Reserved */
        /* .pvReserved76            = */ (void*) (0UL),               /* 76 Reserved */
        /* .pvReserved77            = */ (void*) (0UL),               /* 77 Reserved */
        /* .pfnSNGL_Handler         = */ (void*) SNGL_Handler,        /* 78 This block is designed to convert external analog voltage readings into digital values. */
        /* .pfnRPT_Handler          = */ (void*) RPT_Handler,         /* 79 This block is designed to convert external analog voltage readings into digital values. */
        /* .pvReserved80            = */ (void*) (0UL),               /* 80 Reserved */
        /* .pvReserved81            = */ (void*) (0UL),               /* 81 Reserved */
        /* .pvReserved82            = */ (void*) (0UL),               /* 82 Reserved */
        /* .pfnLED0_Handler         = */ (void*) LED0_Handler,        /* 83 The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n        clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n        PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. */
        /* .pfnLED1_Handler         = */ (void*) LED1_Handler,        /* 84 The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n        clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n        PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. */
        /* .pfnLED2_Handler         = */ (void*) LED2_Handler,        /* 85 The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n        clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n        PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. */
        /* .pvReserved86            = */ (void*) (0UL),               /* 86 Reserved */
        /* .pfnPROCHOT_MON_Handler  = */ (void*) PROCHOT_MON_Handler, /* 87 This block monitors the PROCHOT# signal generated by the host processor. It is designed to detect single assertions and monitor cumulative PROCHOT active time. */
        /* .pvReserved88            = */ (void*) (0UL),               /* 88 Reserved */
        /* .pvReserved89            = */ (void*) (0UL),               /* 89 Reserved */
        /* .pfnSPI_SLAVE_Handler    = */ (void*) SPI_SLAVE_Handler,   /* 90 SPI Slave Register. */
        /* .pfnQMSPI_Handler        = */ (void*) QMSPI_Handler,       /* 91 The Quad SPI Master Controller may be used to communicate with various \n        peripheral devices that use a Serial Peripheral Interface, such as EEPROMS, DACs and ADCs.\n        The controller can be configured to support advanced SPI Flash devices with multi-phase access protocols. */
        /* .pvReserved92            = */ (void*) (0UL),               /* 92 Reserved */
        /* .pvReserved93            = */ (void*) (0UL),               /* 93 Reserved */
        /* .pvReserved94            = */ (void*) (0UL),               /* 94 Reserved */
        /* .pvReserved95            = */ (void*) (0UL),               /* 95 Reserved */
        /* .pvReserved96            = */ (void*) (0UL),               /* 96 Reserved */
        /* .pvReserved97            = */ (void*) (0UL),               /* 97 Reserved */
        /* .pvReserved98            = */ (void*) (0UL),               /* 98 Reserved */
        /* .pvReserved99            = */ (void*) (0UL),               /* 99 Reserved */
        /* .pfnPS2_0_ACT_Handler    = */ (void*) PS2_0_ACT_Handler,   /* 100 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. */
        /* .pfnPS2_1_ACT_Handler    = */ (void*) PS2_1_ACT_Handler,   /* 101 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. */
        /* .pvReserved102           = */ (void*) (0UL),               /* 102 Reserved */
        /* .pfnINTR_PC_Handler      = */ (void*) INTR_PC_Handler,     /* 103 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. */
        /* .pfnINTR_BM1_Handler     = */ (void*) INTR_BM1_Handler,    /* 104 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. */
        /* .pfnINTR_BM2_Handler     = */ (void*) INTR_BM2_Handler,    /* 105 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. */
        /* .pfnINTR_LTR_Handler     = */ (void*) INTR_LTR_Handler,    /* 106 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. */
        /* .pfnINTR_OOB_UP_Handler  = */ (void*) INTR_OOB_UP_Handler, /* 107 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. */
        /* .pfnINTR_OOB_DOWN_Handler = */ (void*) INTR_OOB_DOWN_Handler, /* 108 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. */
        /* .pfnINTR_FLASH_Handler   = */ (void*) INTR_FLASH_Handler,  /* 109 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. */
        /* .pfnESPI_RESET_Handler   = */ (void*) ESPI_RESET_Handler,  /* 110 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. */
        /* .pfnTIMER_Handler        = */ (void*) TIMER_Handler,       /* 111 The RTOS Timer is a low-power, 32-bit timer designed to operate on the 32kHz oscillator which is available during all\n    chip sleep states. This allows firmware the option to sleep the processor, enter heavy or deep chip sleep states, and\n    wake after a programmed amount of time. The timer may be used as a one-shot timer or a continuous timer. When the\n    timer transitions to 0 it is capable of generating a wake-capable interrupt to the embedded controller. This timer may be\n    halted during debug by hardware or via a software control bit. */
        /* .pfnHTM0_Handler         = */ (void*) HTM0_Handler,        /* 112 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n    This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n    in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. */
        /* .pfnHTM1_Handler         = */ (void*) HTM1_Handler,        /* 113 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n    This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n    in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. */
        /* .pfnALARM_INT_Handler    = */ (void*) ALARM_INT_Handler,   /* 114 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        /* .pfnSUB_WEEK_ALARM_Handler = */ (void*) SUB_WEEK_ALARM_Handler, /* 115 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        /* .pfnONE_SECOND_Handler   = */ (void*) ONE_SECOND_Handler,  /* 116 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        /* .pfnSUB_SECOND_Handler   = */ (void*) SUB_SECOND_Handler,  /* 117 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        /* .pfnSYSPWR_PRES_Handler  = */ (void*) SYSPWR_PRES_Handler, /* 118 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. */
        /* .pfnINT_Handler          = */ (void*) INT_Handler,         /* 119 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n    to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. */
        /* .pfnALARM_Handler        = */ (void*) ALARM_Handler,       /* 120 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n    to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. */
        /* .pfnOVRD_IN_Handler      = */ (void*) OVRD_IN_Handler,     /* 121 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN0_Handler          = */ (void*) IN0_Handler,         /* 122 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN1_Handler          = */ (void*) IN1_Handler,         /* 123 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN2_Handler          = */ (void*) IN2_Handler,         /* 124 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pfnIN3_Handler          = */ (void*) IN3_Handler,         /* 125 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. */
        /* .pvReserved126           = */ (void*) (0UL),               /* 126 Reserved */
        /* .pvReserved127           = */ (void*) (0UL),               /* 127 Reserved */
        /* .pvReserved128           = */ (void*) (0UL),               /* 128 Reserved */
        /* .pfnPS2_0A_WK_Handler    = */ (void*) PS2_0A_WK_Handler,   /* 129 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. */
        /* .pfnPS2_0B_WK_Handler    = */ (void*) PS2_0B_WK_Handler,   /* 130 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. */
        /* .pvReserved131           = */ (void*) (0UL),               /* 131 Reserved */
        /* .pfnPS2_1B_WK_Handler    = */ (void*) PS2_1B_WK_Handler,   /* 132 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. */
        /* .pvReserved133           = */ (void*) (0UL),               /* 133 Reserved */
        /* .pvReserved134           = */ (void*) (0UL),               /* 134 Reserved */
        /* .pfnKMS_Handler          = */ (void*) KMS_Handler,         /* 135 The Keyboard Scan Interface block provides a register interface to the EC\n        to directly scan an external keyboard matrix of size up to 18x8. */
        /* .pfnTIMER16_0_Handler    = */ (void*) TIMER16_0_Handler,   /* 136 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n    The name of the timer instance indicates the size of the timer. */
        /* .pfnTIMER16_1_Handler    = */ (void*) TIMER16_1_Handler,   /* 137 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n    The name of the timer instance indicates the size of the timer. */
        /* .pvReserved138           = */ (void*) (0UL),               /* 138 Reserved */
        /* .pvReserved139           = */ (void*) (0UL),               /* 139 Reserved */
        /* .pfnTIMER32_0_Handler    = */ (void*) TIMER32_0_Handler,   /* 140 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as \n    32 bits. The name of the timer instance indicates the size of the timer. */
        /* .pfnTIMER32_1_Handler    = */ (void*) TIMER32_1_Handler,   /* 141 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as \n    32 bits. The name of the timer instance indicates the size of the timer. */
        /* .pvReserved142           = */ (void*) (0UL),               /* 142 Reserved */
        /* .pvReserved143           = */ (void*) (0UL),               /* 143 Reserved */
        /* .pvReserved144           = */ (void*) (0UL),               /* 144 Reserved */
        /* .pvReserved145           = */ (void*) (0UL),               /* 145 Reserved */
        /* .pfnCAPTURE_TIMER_Handler = */ (void*) CAPTURE_TIMER_Handler, /* 146 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_0_Handler    = */ (void*) CAPTURE_0_Handler,   /* 147 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_1_Handler    = */ (void*) CAPTURE_1_Handler,   /* 148 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_2_Handler    = */ (void*) CAPTURE_2_Handler,   /* 149 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_3_Handler    = */ (void*) CAPTURE_3_Handler,   /* 150 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_4_Handler    = */ (void*) CAPTURE_4_Handler,   /* 151 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCAPTURE_5_Handler    = */ (void*) CAPTURE_5_Handler,   /* 152 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCOMPARE_0_Handler    = */ (void*) COMPARE_0_Handler,   /* 153 This is a 16-bit auto-reloading timer/counter. */
        /* .pfnCOMPARE_1_Handler    = */ (void*) COMPARE_1_Handler,   /* 154 This is a 16-bit auto-reloading timer/counter. */
        /* .pvReserved155           = */ (void*) (0UL),               /* 155 Reserved */
        /* .pfnVWIRE_ENABLE_Handler = */ (void*) VWIRE_ENABLE_Handler, /* 156 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. */
        /* .pvReserved157           = */ (void*) (0UL),               /* 157 Reserved */
        /* .pfnSMB4_Handler         = */ (void*) SMB4_Handler,        /* 158 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. */
        /* .pfnTACH3_Handler        = */ (void*) TACH3_Handler,       /* 159 This block monitors TACH output signals (or locked rotor signals) from\n        various types of fans, and determines their speed. */
        /* .pfnHDMI_CEC_Handler     = */ (void*) HDMI_CEC_Handler,    /* 160 The HDMI Consumer Electronics Control (CEC) Interface that provides high-level control functions between all of the        various audiovisual products in a users environment. */
        /* .pfnSGPIO0_Handler       = */ (void*) SGPIO0_Handler,      /* 161 This is Serial General Purpous Input Output block */
        /* .pfnSGPIO1_Handler       = */ (void*) SGPIO1_Handler,      /* 162 This is Serial General Purpous Input Output block */
        /* .pfnSGPIO2_Handler       = */ (void*) SGPIO2_Handler,      /* 163 This is Serial General Purpous Input Output block */
        /* .pfnSGPIO3_Handler       = */ (void*) SGPIO3_Handler,      /* 164 This is Serial General Purpous Input Output block */
        /* .pvReserved165           = */ (void*) (0UL),               /* 165 Reserved */
        /* .pfnEC_CMPLTN_Handler    = */ (void*) EC_CMPLTN_Handler,   /* 166 SAF BRIDGE COMPONENT */
        /* .pfnESPI_ERROR_Handler   = */ (void*) ESPI_ERROR_Handler,  /* 167 SAF BRIDGE COMPONENT */
        /* .pfnI2C0_Handler         = */ (void*) I2C0_Handler,        /* 168 The I2C interface can handle standard I2C interface. */
        /* .pfnI2C1_Handler         = */ (void*) I2C1_Handler,        /* 169 The I2C interface can handle standard I2C interface. */
        /* .pfnI2C2_Handler         = */ (void*) I2C2_Handler         /* 170 The I2C interface can handle standard I2C interface. */
#endif
};

 
/* Optional application-provided functions */
extern void __attribute__((weak,long_call)) _on_reset(void);
extern void __attribute__((weak,long_call)) _on_bootstrap(void);

/* Reserved for use by the MPLAB XC32 Compiler */
extern void __attribute__((weak,long_call)) __xc32_on_reset(void);
extern void __attribute__((weak,long_call)) __xc32_on_bootstrap(void);


/**
 * \brief This is the code that gets called on processor reset.
 * To initialize the device, and call the main() routine.
 */
void __attribute__((weak, optimize("-O1"), section(".text.Reset_Handler"), long_call,
                    naked, externally_visible))
Reset_Handler(void)
{
    uint32_t *pSrc;
    const uint32_t *pEnd;

    /* Initialize SP from linker-defined _stack symbol. */
    __asm__ volatile ("ldr sp, =_stack" : : : "sp");

    /* Buy stack for locals */
    __asm__ volatile ("sub sp, sp, #8" : : : "sp");
    __asm__ volatile ("add r7, sp, #0" : : : "r7");

    /* Call the optional application-provided _on_reset() function. */
    if (_on_reset)
      _on_reset();

    /* Reserved for use by MPLAB XC32. */
    if (__xc32_on_reset)
      __xc32_on_reset();

    /* Clear the COMMON section */
    pEnd = (uint32_t*) &_ebss;
    for (pSrc = (uint32_t*) &_sbss; pSrc != pEnd; ++pSrc)
        *pSrc = 0;

    __pic32c_data_initialization();

#ifdef SCB_VTOR_TBLOFF_Msk
    /* Set the vector-table base address. */
    pSrc = (uint32_t *) & _sfixed;
    SCB->VTOR = ((uint32_t) pSrc & SCB_VTOR_TBLOFF_Msk);
#endif 

    /* Initialize the C library */
    __libc_init_array();

    /* Call the optional application-provided _on_bootstrap() function. */
    if (_on_bootstrap)
      _on_bootstrap();

    /* Reserved for use by MPLAB XC32. */
    if (__xc32_on_bootstrap)
      __xc32_on_bootstrap();

    /* Branch to application's main function */
    main();

#if (defined(__DEBUG) || defined(__DEBUG_D)) && defined(__THUMB2__)
    __builtin_software_breakpoint();
#endif
    /* Infinite loop */
    while (1) {}
}

/**
* \brief Default interrupt handler for unused IRQs.
*/
void __attribute__((weak, optimize("-O1"), section(".text.Dummy_Handler"),
                    long_call, externally_visible))
Dummy_Handler(void)
{
#if (defined(__DEBUG) || defined(__DEBUG_D)) && defined(__THUMB2__)
    __builtin_software_breakpoint();
#endif
    while (1) {}
}
