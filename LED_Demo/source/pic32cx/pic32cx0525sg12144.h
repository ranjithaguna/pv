/**
 * \brief Header file for PIC32CX0525SG12144
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
#ifndef _PIC32CX0525SG12144_H_
#define _PIC32CX0525SG12144_H_

/** \addtogroup PIC32CX0525SG12144_definitions PIC32CX0525SG12144 definitions
  This file defines all structures and symbols for PIC32CX0525SG12144:
    - registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions
 *  @{
 */

#ifdef __cplusplus
 extern "C" {
#endif

#include <stdint.h>

#define CAST(type, value) ((type *)(value)) /**< Pointer Type Conversion Macro for C/C++ */
#define VCAST(type, value) ((volatile type *)(value)) /**< Volatile Pointer Type Conversion Macro for C/C++ */

/** \addtogroup PIC32CX0525SG12144_cmsis CMSIS Definitions
 *  @{
 */
/* ************************************************************************** */
/*   CMSIS DEFINITIONS FOR PIC32CX0525SG12144                                 */
/* ************************************************************************** */
/** Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-M4 Processor Exceptions Numbers ******************************/
  Reset_IRQn                = -15, /**< 1   Reset Vector, invoked on Power up and warm reset  */
  NonMaskableInt_IRQn       = -14, /**< 2   Non maskable Interrupt, cannot be stopped or preempted  */
  HardFault_IRQn            = -13, /**< 3   Hard Fault, all classes of Fault     */
  BusFault_IRQn             = -11, /**< 5   Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory related Fault  */
  UsageFault_IRQn           = -10, /**< 6   Usage Fault, i.e. Undef Instruction, Illegal State Transition  */
  SVCall_IRQn               = -5 , /**< 11  System Service Call via SVC instruction  */
  DebugMonitor_IRQn         = -4 , /**< 12  Debug Monitor                        */
  PendSV_IRQn               = -2 , /**< 14  Pendable request for system service  */
  SysTick_IRQn              = -1 , /**< 15  System Tick Timer                    */
/******  PIC32CX0525SG12144 specific Interrupt Numbers ***********************************/
  GPIO_140_176_IRQn         = 0  , /**< 0   GPIO 140:176 Pin Control Registers (GPIO_140_176) */
  GPIO_100_137_IRQn         = 1  , /**< 1   GPIO 100:137 Pin Control Registers (GPIO_100_137) */
  GPIO_040_076_IRQn         = 2  , /**< 2   GPIO 040:076 Pin Control Registers (GPIO_040_076) */
  GPIO_000_036_IRQn         = 3  , /**< 3   GPIO 000:036 Pin Control Registers (GPIO_000_036) */
  GPIO_200_236_IRQn         = 4  , /**< 4   GPIO 200:236 Pin Control Registers (GPIO_200_236) */
  SWI_INT_0123_IRQn         = 14 , /**< 14  The RTOS Timer is a low-power, 32-bit timer designed to operate on the 32kHz oscillator which is available during all\n    chip sleep states. This allows firmware the option to sleep the processor, enter heavy or deep chip sleep states, and\n    wake after a programmed amount of time. The timer may be used as a one-shot timer or a continuous timer. When the\n    timer transitions to 0 it is capable of generating a wake-capable interrupt to the embedded controller. This timer may be\n    halted during debug by hardware or via a software control bit. (RTOS) */
  ESPI_MSVW00_06_IRQn       = 15 , /**< 15  The Virtual Wire Channel permits the System to emulate a set of wires that interconnect the system Core Logic with the EC. (ESPI_MSVW00_06) */
  ESPI_MSVW07_10_IRQn       = 16 , /**< 16  The Virtual Wire Channel permits the System to emulate a set of wires that interconnect the system Core Logic with the EC. (ESPI_MSVW07_10) */
  GPIO_240_276_IRQn         = 17 , /**< 17  GPIO 240:276 Pin Control Registers (GPIO_240_276) */
  SMB0_IRQn                 = 20 , /**< 20  The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB0) */
  SMB1_IRQn                 = 21 , /**< 21  The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB1) */
  SMB2_IRQn                 = 22 , /**< 22  The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB2) */
  SMB3_IRQn                 = 23 , /**< 23  The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB3) */
  DMA_CHAN00_IRQn           = 24 , /**< 24  DMA Channel 00 Registers (DMA_CHAN00) */
  DMA_CHAN01_IRQn           = 25 , /**< 25  DMA Channel 01 Registers (DMA_CHAN01) */
  DMA_CHAN02_IRQn           = 26 , /**< 26  DMA Channel 00 Registers (DMA_CHAN02) */
  DMA_CHAN03_IRQn           = 27 , /**< 27  DMA Channel 00 Registers (DMA_CHAN03) */
  DMA_CHAN04_IRQn           = 28 , /**< 28  DMA Channel 00 Registers (DMA_CHAN04) */
  DMA_CHAN05_IRQn           = 29 , /**< 29  DMA Channel 00 Registers (DMA_CHAN05) */
  DMA_CHAN06_IRQn           = 30 , /**< 30  DMA Channel 00 Registers (DMA_CHAN06) */
  DMA_CHAN07_IRQn           = 31 , /**< 31  DMA Channel 00 Registers (DMA_CHAN07) */
  DMA_CHAN08_IRQn           = 32 , /**< 32  DMA Channel 00 Registers (DMA_CHAN08) */
  DMA_CHAN09_IRQn           = 33 , /**< 33  DMA Channel 00 Registers (DMA_CHAN09) */
  DMA_CHAN10_IRQn           = 34 , /**< 34  DMA Channel 00 Registers (DMA_CHAN10) */
  DMA_CHAN11_IRQn           = 35 , /**< 35  DMA Channel 00 Registers (DMA_CHAN11) */
  UART0_IRQn                = 40 , /**< 40  The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n        full-function Two Pin Serial Port that supports the standard RS-232 Interface. (UART0) */
  UART1_IRQn                = 41 , /**< 41  The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n        full-function Two Pin Serial Port that supports the standard RS-232 Interface. (UART1) */
  EMI0_IRQn                 = 42 , /**< 42  The Embedded Memory Interface (EMI) provides a standard run-time mechanism\n        for the system host to communicate with the Embedded Controller (EC) and other logical components. (EMI0) */
  EMI1_IRQn                 = 43 , /**< 43  The Embedded Memory Interface (EMI) provides a standard run-time mechanism\n        for the system host to communicate with the Embedded Controller (EC) and other logical components. (EMI1) */
  UART2_IRQn                = 44 , /**< 44  The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n        full-function Two Pin Serial Port that supports the standard RS-232 Interface. (UART2) */
  IBF0_IRQn                 = 45 , /**< 45  The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. (ACPI_EC0) */
  OBF0_IRQn                 = 46 , /**< 46  The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. (ACPI_EC0) */
  IBF1_IRQn                 = 47 , /**< 47  The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. (ACPI_EC1) */
  OBF1_IRQn                 = 48 , /**< 48  The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. (ACPI_EC1) */
  IBF2_IRQn                 = 49 , /**< 49  The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. (ACPI_EC2) */
  OBF2_IRQn                 = 50 , /**< 50  The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. (ACPI_EC2) */
  IBF3_IRQn                 = 51 , /**< 51  The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. (ACPI_EC3) */
  OBF3_IRQn                 = 52 , /**< 52  The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. (ACPI_EC3) */
  ACPIPM1_CTL_IRQn          = 55 , /**< 55  The device implements the ACPI fixed registers but includes only those bits\n that apply to the power button\n    sleep button and RTC alarm events. The ACPI WAK_STS, SLP_TYP and SLP_EN bits are also supported. (PM1) */
  ACPIPM1_EN_IRQn           = 56 , /**< 56  The device implements the ACPI fixed registers but includes only those bits\n that apply to the power button\n    sleep button and RTC alarm events. The ACPI WAK_STS, SLP_TYP and SLP_EN bits are also supported. (PM1) */
  ACPIPM1_STS_IRQn          = 57 , /**< 57  The device implements the ACPI fixed registers but includes only those bits\n that apply to the power button\n    sleep button and RTC alarm events. The ACPI WAK_STS, SLP_TYP and SLP_EN bits are also supported. (PM1) */
  KBC8042_OBF_IRQn          = 58 , /**< 58  The keyboard controller uses the EC to produce a superset of the features provided by the\n        industry-standard 8042 keyboard controller. The 8042 Emulated Keyboard Controller is a Host/EC\n     Message Interface with hardware assists to emulate 8042 behavior and provide Legacy GATEA20 support. (KBC) */
  KBC8042_IBF_IRQn          = 59 , /**< 59  The keyboard controller uses the EC to produce a superset of the features provided by the\n        industry-standard 8042 keyboard controller. The 8042 Emulated Keyboard Controller is a Host/EC\n     Message Interface with hardware assists to emulate 8042 behavior and provide Legacy GATEA20 support. (KBC) */
  MBX_IRQn                  = 60 , /**< 60  The Mailbox provides a standard run-time mechanism for the host to communicate with the Embedded Controller (EC). (MBX) */
  PORT_80_DEBUG0_IRQn       = 62 , /**< 62  The Port 80 BIOS Debug Port emulates the functionality of a Port 80 ISA plug-in card. In addition, a timestamp for the debug data can be\n     optionally added. Diagnostic data is written by the Host Interface to the Port 80 BIOS Debug Port, which is located in the Host I/O address space.\n    The Port 80 BIOS Debug Port generates an interrupt to the EC when host data is available. The EC reads this data along with the timestamp, if enabled. (PORT_80_DEBUG0) */
  PORT_80_DEBUG1_IRQn       = 63 , /**< 63  The Port 80 BIOS Debug Port emulates the functionality of a Port 80 ISA plug-in card. In addition, a timestamp for the debug data can be\n     optionally added. Diagnostic data is written by the Host Interface to the Port 80 BIOS Debug Port, which is located in the Host I/O address space.\n    The Port 80 BIOS Debug Port generates an interrupt to the EC when host data is available. The EC reads this data along with the timestamp, if enabled. (PORT_80_DEBUG1) */
  PECI_IRQn                 = 70 , /**< 70  The PECI Interface allows the EC to retrieve temperature readings from PECI-compliant devices. (PECI) */
  TACH0_IRQn                = 71 , /**< 71  This block monitors TACH output signals (or locked rotor signals) from\n        various types of fans, and determines their speed. (TACH0) */
  TACH1_IRQn                = 72 , /**< 72  This block monitors TACH output signals (or locked rotor signals) from\n        various types of fans, and determines their speed. (TACH1) */
  TACH2_IRQn                = 73 , /**< 73  This block monitors TACH output signals (or locked rotor signals) from\n        various types of fans, and determines their speed. (TACH2) */
  SNGL_IRQn                 = 78 , /**< 78  This block is designed to convert external analog voltage readings into digital values. (ADC) */
  RPT_IRQn                  = 79 , /**< 79  This block is designed to convert external analog voltage readings into digital values. (ADC) */
  LED0_IRQn                 = 83 , /**< 83  The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n        clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n        PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. (LED0) */
  LED1_IRQn                 = 84 , /**< 84  The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n        clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n        PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. (LED1) */
  LED2_IRQn                 = 85 , /**< 85  The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n        clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n        PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. (LED2) */
  PROCHOT_MON_IRQn          = 87 , /**< 87  This block monitors the PROCHOT# signal generated by the host processor. It is designed to detect single assertions and monitor cumulative PROCHOT active time. (PROCHOT_MON) */
  SPI_SLAVE_IRQn            = 90 , /**< 90  SPI Slave Register. (SPI_SLAVE)     */
  QMSPI_IRQn                = 91 , /**< 91  The Quad SPI Master Controller may be used to communicate with various \n        peripheral devices that use a Serial Peripheral Interface, such as EEPROMS, DACs and ADCs.\n        The controller can be configured to support advanced SPI Flash devices with multi-phase access protocols. (QMSPI) */
  PS2_0_ACT_IRQn            = 100, /**< 100 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. (PS2_0) */
  PS2_1_ACT_IRQn            = 101, /**< 101 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. (PS2_1) */
  INTR_PC_IRQn              = 103, /**< 103 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. (ESPI_IO) */
  INTR_BM1_IRQn             = 104, /**< 104 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. (ESPI_IO) */
  INTR_BM2_IRQn             = 105, /**< 105 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. (ESPI_IO) */
  INTR_LTR_IRQn             = 106, /**< 106 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. (ESPI_IO) */
  INTR_OOB_UP_IRQn          = 107, /**< 107 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. (ESPI_IO) */
  INTR_OOB_DOWN_IRQn        = 108, /**< 108 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. (ESPI_IO) */
  INTR_FLASH_IRQn           = 109, /**< 109 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. (ESPI_IO) */
  ESPI_RESET_IRQn           = 110, /**< 110 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. (ESPI_IO) */
  TIMER_IRQn                = 111, /**< 111 The RTOS Timer is a low-power, 32-bit timer designed to operate on the 32kHz oscillator which is available during all\n    chip sleep states. This allows firmware the option to sleep the processor, enter heavy or deep chip sleep states, and\n    wake after a programmed amount of time. The timer may be used as a one-shot timer or a continuous timer. When the\n    timer transitions to 0 it is capable of generating a wake-capable interrupt to the embedded controller. This timer may be\n    halted during debug by hardware or via a software control bit. (RTOS) */
  HTM0_IRQn                 = 112, /**< 112 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n    This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n    in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. (HTM0) */
  HTM1_IRQn                 = 113, /**< 113 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n    This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n    in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. (HTM1) */
  ALARM_INT_IRQn            = 114, /**< 114 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. (WEEK) */
  SUB_WEEK_ALARM_IRQn       = 115, /**< 115 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. (WEEK) */
  ONE_SECOND_IRQn           = 116, /**< 116 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. (WEEK) */
  SUB_SECOND_IRQn           = 117, /**< 117 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. (WEEK) */
  SYSPWR_PRES_IRQn          = 118, /**< 118 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. (WEEK) */
  INT_IRQn                  = 119, /**< 119 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n    to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. (RTC) */
  ALARM_IRQn                = 120, /**< 120 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n    to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. (RTC) */
  OVRD_IN_IRQn              = 121, /**< 121 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  IN0_IRQn                  = 122, /**< 122 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  IN1_IRQn                  = 123, /**< 123 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  IN2_IRQn                  = 124, /**< 124 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  IN3_IRQn                  = 125, /**< 125 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  PS2_0A_WK_IRQn            = 129, /**< 129 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. (PS2_0) */
  PS2_0B_WK_IRQn            = 130, /**< 130 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. (PS2_0) */
  PS2_1B_WK_IRQn            = 132, /**< 132 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. (PS2_1) */
  KMS_IRQn                  = 135, /**< 135 The Keyboard Scan Interface block provides a register interface to the EC\n        to directly scan an external keyboard matrix of size up to 18x8. (KMS) */
  TIMER16_0_IRQn            = 136, /**< 136 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n    The name of the timer instance indicates the size of the timer. (TIMER16_0) */
  TIMER16_1_IRQn            = 137, /**< 137 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n    The name of the timer instance indicates the size of the timer. (TIMER16_1) */
  TIMER32_0_IRQn            = 140, /**< 140 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as \n    32 bits. The name of the timer instance indicates the size of the timer. (TIMER32_0) */
  TIMER32_1_IRQn            = 141, /**< 141 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as \n    32 bits. The name of the timer instance indicates the size of the timer. (TIMER32_1) */
  CAPTURE_TIMER_IRQn        = 146, /**< 146 This is a 16-bit auto-reloading timer/counter. (CAPTURE_COMPARE_TIMER) */
  CAPTURE_0_IRQn            = 147, /**< 147 This is a 16-bit auto-reloading timer/counter. (CAPTURE_COMPARE_TIMER) */
  CAPTURE_1_IRQn            = 148, /**< 148 This is a 16-bit auto-reloading timer/counter. (CAPTURE_COMPARE_TIMER) */
  CAPTURE_2_IRQn            = 149, /**< 149 This is a 16-bit auto-reloading timer/counter. (CAPTURE_COMPARE_TIMER) */
  CAPTURE_3_IRQn            = 150, /**< 150 This is a 16-bit auto-reloading timer/counter. (CAPTURE_COMPARE_TIMER) */
  CAPTURE_4_IRQn            = 151, /**< 151 This is a 16-bit auto-reloading timer/counter. (CAPTURE_COMPARE_TIMER) */
  CAPTURE_5_IRQn            = 152, /**< 152 This is a 16-bit auto-reloading timer/counter. (CAPTURE_COMPARE_TIMER) */
  COMPARE_0_IRQn            = 153, /**< 153 This is a 16-bit auto-reloading timer/counter. (CAPTURE_COMPARE_TIMER) */
  COMPARE_1_IRQn            = 154, /**< 154 This is a 16-bit auto-reloading timer/counter. (CAPTURE_COMPARE_TIMER) */
  VWIRE_ENABLE_IRQn         = 156, /**< 156 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. (ESPI_IO) */
  SMB4_IRQn                 = 158, /**< 158 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB4) */
  TACH3_IRQn                = 159, /**< 159 This block monitors TACH output signals (or locked rotor signals) from\n        various types of fans, and determines their speed. (TACH3) */
  HDMI_CEC_IRQn             = 160, /**< 160 The HDMI Consumer Electronics Control (CEC) Interface that provides high-level control functions between all of the        various audiovisual products in a users environment. (HDMI_CEC) */
  SGPIO0_IRQn               = 161, /**< 161 This is Serial General Purpous Input Output block (SGPIO0) */
  SGPIO1_IRQn               = 162, /**< 162 This is Serial General Purpous Input Output block (SGPIO1) */
  SGPIO2_IRQn               = 163, /**< 163 This is Serial General Purpous Input Output block (SGPIO2) */
  SGPIO3_IRQn               = 164, /**< 164 This is Serial General Purpous Input Output block (SGPIO3) */
  EC_CMPLTN_IRQn            = 166, /**< 166 SAF BRIDGE COMPONENT (SAFBC)        */
  ESPI_ERROR_IRQn           = 167, /**< 167 SAF BRIDGE COMPONENT (SAFBC)        */
  I2C0_IRQn                 = 168, /**< 168 The I2C interface can handle standard I2C interface. (I2C0) */
  I2C1_IRQn                 = 169, /**< 169 The I2C interface can handle standard I2C interface. (I2C1) */
  I2C2_IRQn                 = 170, /**< 170 The I2C interface can handle standard I2C interface. (I2C2) */

  PERIPH_COUNT_IRQn        = 171  /**< Number of peripheral IDs */
} IRQn_Type;

typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;
  /* Cortex-M handlers */
  void* pfnReset_Handler;                        /* -15 Reset Vector, invoked on Power up and warm reset  */
  void* pfnNonMaskableInt_Handler;               /* -14 Non maskable Interrupt, cannot be stopped or preempted  */
  void* pfnHardFault_Handler;                    /* -13 Hard Fault, all classes of Fault     */
  void* pvReservedC12;
  void* pfnBusFault_Handler;                     /* -11 Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory related Fault  */
  void* pfnUsageFault_Handler;                   /* -10 Usage Fault, i.e. Undef Instruction, Illegal State Transition  */
  void* pvReservedC9;
  void* pvReservedC8;
  void* pvReservedC7;
  void* pvReservedC6;
  void* pfnSVCall_Handler;                       /*  -5 System Service Call via SVC instruction  */
  void* pfnDebugMonitor_Handler;                 /*  -4 Debug Monitor                        */
  void* pvReservedC3;
  void* pfnPendSV_Handler;                       /*  -2 Pendable request for system service  */
  void* pfnSysTick_Handler;                      /*  -1 System Tick Timer                    */

  /* Peripheral handlers */
  void* pfnGPIO_140_176_Handler;                 /*   0 GPIO 140:176 Pin Control Registers (GPIO_140_176) */
  void* pfnGPIO_100_137_Handler;                 /*   1 GPIO 100:137 Pin Control Registers (GPIO_100_137) */
  void* pfnGPIO_040_076_Handler;                 /*   2 GPIO 040:076 Pin Control Registers (GPIO_040_076) */
  void* pfnGPIO_000_036_Handler;                 /*   3 GPIO 000:036 Pin Control Registers (GPIO_000_036) */
  void* pfnGPIO_200_236_Handler;                 /*   4 GPIO 200:236 Pin Control Registers (GPIO_200_236) */
  void* pvReserved5;
  void* pvReserved6;
  void* pvReserved7;
  void* pvReserved8;
  void* pvReserved9;
  void* pvReserved10;
  void* pvReserved11;
  void* pvReserved12;
  void* pvReserved13;
  void* pfnSWI_INT_0123_Handler;                 /*  14 The RTOS Timer is a low-power, 32-bit timer designed to operate on the 32kHz oscillator which is available during all\n    chip sleep states. This allows firmware the option to sleep the processor, enter heavy or deep chip sleep states, and\n    wake after a programmed amount of time. The timer may be used as a one-shot timer or a continuous timer. When the\n    timer transitions to 0 it is capable of generating a wake-capable interrupt to the embedded controller. This timer may be\n    halted during debug by hardware or via a software control bit. (RTOS) */
  void* pfnESPI_MSVW00_06_Handler;               /*  15 The Virtual Wire Channel permits the System to emulate a set of wires that interconnect the system Core Logic with the EC. (ESPI_MSVW00_06) */
  void* pfnESPI_MSVW07_10_Handler;               /*  16 The Virtual Wire Channel permits the System to emulate a set of wires that interconnect the system Core Logic with the EC. (ESPI_MSVW07_10) */
  void* pfnGPIO_240_276_Handler;                 /*  17 GPIO 240:276 Pin Control Registers (GPIO_240_276) */
  void* pvReserved18;
  void* pvReserved19;
  void* pfnSMB0_Handler;                         /*  20 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB0) */
  void* pfnSMB1_Handler;                         /*  21 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB1) */
  void* pfnSMB2_Handler;                         /*  22 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB2) */
  void* pfnSMB3_Handler;                         /*  23 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB3) */
  void* pfnDMA_CHAN00_Handler;                   /*  24 DMA Channel 00 Registers (DMA_CHAN00) */
  void* pfnDMA_CHAN01_Handler;                   /*  25 DMA Channel 01 Registers (DMA_CHAN01) */
  void* pfnDMA_CHAN02_Handler;                   /*  26 DMA Channel 00 Registers (DMA_CHAN02) */
  void* pfnDMA_CHAN03_Handler;                   /*  27 DMA Channel 00 Registers (DMA_CHAN03) */
  void* pfnDMA_CHAN04_Handler;                   /*  28 DMA Channel 00 Registers (DMA_CHAN04) */
  void* pfnDMA_CHAN05_Handler;                   /*  29 DMA Channel 00 Registers (DMA_CHAN05) */
  void* pfnDMA_CHAN06_Handler;                   /*  30 DMA Channel 00 Registers (DMA_CHAN06) */
  void* pfnDMA_CHAN07_Handler;                   /*  31 DMA Channel 00 Registers (DMA_CHAN07) */
  void* pfnDMA_CHAN08_Handler;                   /*  32 DMA Channel 00 Registers (DMA_CHAN08) */
  void* pfnDMA_CHAN09_Handler;                   /*  33 DMA Channel 00 Registers (DMA_CHAN09) */
  void* pfnDMA_CHAN10_Handler;                   /*  34 DMA Channel 00 Registers (DMA_CHAN10) */
  void* pfnDMA_CHAN11_Handler;                   /*  35 DMA Channel 00 Registers (DMA_CHAN11) */
  void* pvReserved36;
  void* pvReserved37;
  void* pvReserved38;
  void* pvReserved39;
  void* pfnUART0_Handler;                        /*  40 The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n        full-function Two Pin Serial Port that supports the standard RS-232 Interface. (UART0) */
  void* pfnUART1_Handler;                        /*  41 The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n        full-function Two Pin Serial Port that supports the standard RS-232 Interface. (UART1) */
  void* pfnEMI0_Handler;                         /*  42 The Embedded Memory Interface (EMI) provides a standard run-time mechanism\n        for the system host to communicate with the Embedded Controller (EC) and other logical components. (EMI0) */
  void* pfnEMI1_Handler;                         /*  43 The Embedded Memory Interface (EMI) provides a standard run-time mechanism\n        for the system host to communicate with the Embedded Controller (EC) and other logical components. (EMI1) */
  void* pfnUART2_Handler;                        /*  44 The 16550 UART (Universal Asynchronous Receiver/Transmitter) is a\n        full-function Two Pin Serial Port that supports the standard RS-232 Interface. (UART2) */
  void* pfnIBF0_Handler;                         /*  45 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. (ACPI_EC0) */
  void* pfnOBF0_Handler;                         /*  46 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. (ACPI_EC0) */
  void* pfnIBF1_Handler;                         /*  47 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. (ACPI_EC1) */
  void* pfnOBF1_Handler;                         /*  48 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. (ACPI_EC1) */
  void* pfnIBF2_Handler;                         /*  49 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. (ACPI_EC2) */
  void* pfnOBF2_Handler;                         /*  50 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. (ACPI_EC2) */
  void* pfnIBF3_Handler;                         /*  51 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. (ACPI_EC3) */
  void* pfnOBF3_Handler;                         /*  52 The ACPI Embedded Controller Interface (ACPI-ECI) provides a four byte full\n        duplex data interface which is a superset of the standard ACPI Embedded Controller Interface\n        (ACPI-ECI) one byte data interface. The ACPI Embedded Controller Interface (ACPI-ECI) defaults\n        to the standard one byte interface. (ACPI_EC3) */
  void* pvReserved53;
  void* pvReserved54;
  void* pfnACPIPM1_CTL_Handler;                  /*  55 The device implements the ACPI fixed registers but includes only those bits\n that apply to the power button\n    sleep button and RTC alarm events. The ACPI WAK_STS, SLP_TYP and SLP_EN bits are also supported. (PM1) */
  void* pfnACPIPM1_EN_Handler;                   /*  56 The device implements the ACPI fixed registers but includes only those bits\n that apply to the power button\n    sleep button and RTC alarm events. The ACPI WAK_STS, SLP_TYP and SLP_EN bits are also supported. (PM1) */
  void* pfnACPIPM1_STS_Handler;                  /*  57 The device implements the ACPI fixed registers but includes only those bits\n that apply to the power button\n    sleep button and RTC alarm events. The ACPI WAK_STS, SLP_TYP and SLP_EN bits are also supported. (PM1) */
  void* pfnKBC8042_OBF_Handler;                  /*  58 The keyboard controller uses the EC to produce a superset of the features provided by the\n        industry-standard 8042 keyboard controller. The 8042 Emulated Keyboard Controller is a Host/EC\n     Message Interface with hardware assists to emulate 8042 behavior and provide Legacy GATEA20 support. (KBC) */
  void* pfnKBC8042_IBF_Handler;                  /*  59 The keyboard controller uses the EC to produce a superset of the features provided by the\n        industry-standard 8042 keyboard controller. The 8042 Emulated Keyboard Controller is a Host/EC\n     Message Interface with hardware assists to emulate 8042 behavior and provide Legacy GATEA20 support. (KBC) */
  void* pfnMBX_Handler;                          /*  60 The Mailbox provides a standard run-time mechanism for the host to communicate with the Embedded Controller (EC). (MBX) */
  void* pvReserved61;
  void* pfnPORT_80_DEBUG0_Handler;               /*  62 The Port 80 BIOS Debug Port emulates the functionality of a Port 80 ISA plug-in card. In addition, a timestamp for the debug data can be\n     optionally added. Diagnostic data is written by the Host Interface to the Port 80 BIOS Debug Port, which is located in the Host I/O address space.\n    The Port 80 BIOS Debug Port generates an interrupt to the EC when host data is available. The EC reads this data along with the timestamp, if enabled. (PORT_80_DEBUG0) */
  void* pfnPORT_80_DEBUG1_Handler;               /*  63 The Port 80 BIOS Debug Port emulates the functionality of a Port 80 ISA plug-in card. In addition, a timestamp for the debug data can be\n     optionally added. Diagnostic data is written by the Host Interface to the Port 80 BIOS Debug Port, which is located in the Host I/O address space.\n    The Port 80 BIOS Debug Port generates an interrupt to the EC when host data is available. The EC reads this data along with the timestamp, if enabled. (PORT_80_DEBUG1) */
  void* pvReserved64;
  void* pvReserved65;
  void* pvReserved66;
  void* pvReserved67;
  void* pvReserved68;
  void* pvReserved69;
  void* pfnPECI_Handler;                         /*  70 The PECI Interface allows the EC to retrieve temperature readings from PECI-compliant devices. (PECI) */
  void* pfnTACH0_Handler;                        /*  71 This block monitors TACH output signals (or locked rotor signals) from\n        various types of fans, and determines their speed. (TACH0) */
  void* pfnTACH1_Handler;                        /*  72 This block monitors TACH output signals (or locked rotor signals) from\n        various types of fans, and determines their speed. (TACH1) */
  void* pfnTACH2_Handler;                        /*  73 This block monitors TACH output signals (or locked rotor signals) from\n        various types of fans, and determines their speed. (TACH2) */
  void* pvReserved74;
  void* pvReserved75;
  void* pvReserved76;
  void* pvReserved77;
  void* pfnSNGL_Handler;                         /*  78 This block is designed to convert external analog voltage readings into digital values. (ADC) */
  void* pfnRPT_Handler;                          /*  79 This block is designed to convert external analog voltage readings into digital values. (ADC) */
  void* pvReserved80;
  void* pvReserved81;
  void* pvReserved82;
  void* pfnLED0_Handler;                         /*  83 The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n        clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n        PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. (LED0) */
  void* pfnLED1_Handler;                         /*  84 The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n        clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n        PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. (LED1) */
  void* pfnLED2_Handler;                         /*  85 The blinking/breathing hardware is implemented using a PWM. The PWM can be driven either by the 48 MHz\n        clock or by a 32.768 KHz clock input. When driven by the 48 MHz clock, the PWM can be used as a standard 8-bit\n        PWM in order to control a fan. When used to drive blinking or breathing LEDs, the 32.768 KHz clock source is used. (LED2) */
  void* pvReserved86;
  void* pfnPROCHOT_MON_Handler;                  /*  87 This block monitors the PROCHOT# signal generated by the host processor. It is designed to detect single assertions and monitor cumulative PROCHOT active time. (PROCHOT_MON) */
  void* pvReserved88;
  void* pvReserved89;
  void* pfnSPI_SLAVE_Handler;                    /*  90 SPI Slave Register. (SPI_SLAVE) */
  void* pfnQMSPI_Handler;                        /*  91 The Quad SPI Master Controller may be used to communicate with various \n        peripheral devices that use a Serial Peripheral Interface, such as EEPROMS, DACs and ADCs.\n        The controller can be configured to support advanced SPI Flash devices with multi-phase access protocols. (QMSPI) */
  void* pvReserved92;
  void* pvReserved93;
  void* pvReserved94;
  void* pvReserved95;
  void* pvReserved96;
  void* pvReserved97;
  void* pvReserved98;
  void* pvReserved99;
  void* pfnPS2_0_ACT_Handler;                    /* 100 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. (PS2_0) */
  void* pfnPS2_1_ACT_Handler;                    /* 101 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. (PS2_1) */
  void* pvReserved102;
  void* pfnINTR_PC_Handler;                      /* 103 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. (ESPI_IO) */
  void* pfnINTR_BM1_Handler;                     /* 104 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. (ESPI_IO) */
  void* pfnINTR_BM2_Handler;                     /* 105 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. (ESPI_IO) */
  void* pfnINTR_LTR_Handler;                     /* 106 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. (ESPI_IO) */
  void* pfnINTR_OOB_UP_Handler;                  /* 107 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. (ESPI_IO) */
  void* pfnINTR_OOB_DOWN_Handler;                /* 108 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. (ESPI_IO) */
  void* pfnINTR_FLASH_Handler;                   /* 109 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. (ESPI_IO) */
  void* pfnESPI_RESET_Handler;                   /* 110 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. (ESPI_IO) */
  void* pfnTIMER_Handler;                        /* 111 The RTOS Timer is a low-power, 32-bit timer designed to operate on the 32kHz oscillator which is available during all\n    chip sleep states. This allows firmware the option to sleep the processor, enter heavy or deep chip sleep states, and\n    wake after a programmed amount of time. The timer may be used as a one-shot timer or a continuous timer. When the\n    timer transitions to 0 it is capable of generating a wake-capable interrupt to the embedded controller. This timer may be\n    halted during debug by hardware or via a software control bit. (RTOS) */
  void* pfnHTM0_Handler;                         /* 112 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n    This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n    in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. (HTM0) */
  void* pfnHTM1_Handler;                         /* 113 The Hibernation Timer can generate a wake event to the Embedded Controller (EC) when it is in a hibernation mode.\n    This block supports wake events up to 2 hours in duration. The timer is a 16-bit binary count-down timer that can be programmed\n    in 30.5us and 0.125 second increments for period ranges of 30.5us to 2s or 0.125s to 136.5 minutes, respectively. (HTM1) */
  void* pfnALARM_INT_Handler;                    /* 114 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. (WEEK) */
  void* pfnSUB_WEEK_ALARM_Handler;               /* 115 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. (WEEK) */
  void* pfnONE_SECOND_Handler;                   /* 116 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. (WEEK) */
  void* pfnSUB_SECOND_Handler;                   /* 117 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. (WEEK) */
  void* pfnSYSPWR_PRES_Handler;                  /* 118 The Week Alarm Interface provides two timekeeping functions: a Week Timer and a Sub-Week Timer. Both the Week Timer\n    and the Sub-Week Timer assert the Power-Up Event Output which automatically powers-up the system from the G3 state. (WEEK) */
  void* pfnINT_Handler;                          /* 119 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n    to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. (RTC) */
  void* pfnALARM_Handler;                        /* 120 This is the set of registers that are automatically counted by hardware every 1 second while the block is enabled\n    to run and to update. These registers are: Seconds, Minutes, Hours, Day of Week, Day of Month, Month, and Year. (RTC) */
  void* pfnOVRD_IN_Handler;                      /* 121 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  void* pfnIN0_Handler;                          /* 122 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  void* pfnIN1_Handler;                          /* 123 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  void* pfnIN2_Handler;                          /* 124 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  void* pfnIN3_Handler;                          /* 125 The VBAT-Powered Control Interface has VBAT-powered combinational logic and input and output signal pins.\n    The block interfaces with the RTC With Date and DST Adjustment as well as the Week Alarm. (VCI) */
  void* pvReserved126;
  void* pvReserved127;
  void* pvReserved128;
  void* pfnPS2_0A_WK_Handler;                    /* 129 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. (PS2_0) */
  void* pfnPS2_0B_WK_Handler;                    /* 130 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. (PS2_0) */
  void* pvReserved131;
  void* pfnPS2_1B_WK_Handler;                    /* 132 There are four PS/2 Ports which are directly controlled by the EC. The hardware implementation eliminates\n    the need to bit bang I/O ports to generate PS/2 traffic, however bit banging is available via the associated GPIO pins. (PS2_1) */
  void* pvReserved133;
  void* pvReserved134;
  void* pfnKMS_Handler;                          /* 135 The Keyboard Scan Interface block provides a register interface to the EC\n        to directly scan an external keyboard matrix of size up to 18x8. (KMS) */
  void* pfnTIMER16_0_Handler;                    /* 136 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n    The name of the timer instance indicates the size of the timer. (TIMER16_0) */
  void* pfnTIMER16_1_Handler;                    /* 137 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as 16 bits.\n    The name of the timer instance indicates the size of the timer. (TIMER16_1) */
  void* pvReserved138;
  void* pvReserved139;
  void* pfnTIMER32_0_Handler;                    /* 140 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as \n    32 bits. The name of the timer instance indicates the size of the timer. (TIMER32_0) */
  void* pfnTIMER32_1_Handler;                    /* 141 This timer block offers a simple mechanism for firmware to maintain a time base. This timer may be instantiated as \n    32 bits. The name of the timer instance indicates the size of the timer. (TIMER32_1) */
  void* pvReserved142;
  void* pvReserved143;
  void* pvReserved144;
  void* pvReserved145;
  void* pfnCAPTURE_TIMER_Handler;                /* 146 This is a 16-bit auto-reloading timer/counter. (CAPTURE_COMPARE_TIMER) */
  void* pfnCAPTURE_0_Handler;                    /* 147 This is a 16-bit auto-reloading timer/counter. (CAPTURE_COMPARE_TIMER) */
  void* pfnCAPTURE_1_Handler;                    /* 148 This is a 16-bit auto-reloading timer/counter. (CAPTURE_COMPARE_TIMER) */
  void* pfnCAPTURE_2_Handler;                    /* 149 This is a 16-bit auto-reloading timer/counter. (CAPTURE_COMPARE_TIMER) */
  void* pfnCAPTURE_3_Handler;                    /* 150 This is a 16-bit auto-reloading timer/counter. (CAPTURE_COMPARE_TIMER) */
  void* pfnCAPTURE_4_Handler;                    /* 151 This is a 16-bit auto-reloading timer/counter. (CAPTURE_COMPARE_TIMER) */
  void* pfnCAPTURE_5_Handler;                    /* 152 This is a 16-bit auto-reloading timer/counter. (CAPTURE_COMPARE_TIMER) */
  void* pfnCOMPARE_0_Handler;                    /* 153 This is a 16-bit auto-reloading timer/counter. (CAPTURE_COMPARE_TIMER) */
  void* pfnCOMPARE_1_Handler;                    /* 154 This is a 16-bit auto-reloading timer/counter. (CAPTURE_COMPARE_TIMER) */
  void* pvReserved155;
  void* pfnVWIRE_ENABLE_Handler;                 /* 156 The Enhanced Serial Peripheral Interface (eSPI) is used by the system host to configure the chip and communicate\n    with the logical devices implemented in the design through a series of read/write registers. It is Intel's successor to the\n    Low Pin Count (LPC) bus, used in previous devices to provide System Host access to devices internal to the Embedded Controller.\n    The I/O Component is one of two Logical Devices (along with the Memory Component) that provide access to all the registers in the device. (ESPI_IO) */
  void* pvReserved157;
  void* pfnSMB4_Handler;                         /* 158 The SMBus interface can handle standard SMBus 2.0 protocols as well as I2C interface. (SMB4) */
  void* pfnTACH3_Handler;                        /* 159 This block monitors TACH output signals (or locked rotor signals) from\n        various types of fans, and determines their speed. (TACH3) */
  void* pfnHDMI_CEC_Handler;                     /* 160 The HDMI Consumer Electronics Control (CEC) Interface that provides high-level control functions between all of the        various audiovisual products in a users environment. (HDMI_CEC) */
  void* pfnSGPIO0_Handler;                       /* 161 This is Serial General Purpous Input Output block (SGPIO0) */
  void* pfnSGPIO1_Handler;                       /* 162 This is Serial General Purpous Input Output block (SGPIO1) */
  void* pfnSGPIO2_Handler;                       /* 163 This is Serial General Purpous Input Output block (SGPIO2) */
  void* pfnSGPIO3_Handler;                       /* 164 This is Serial General Purpous Input Output block (SGPIO3) */
  void* pvReserved165;
  void* pfnEC_CMPLTN_Handler;                    /* 166 SAF BRIDGE COMPONENT (SAFBC) */
  void* pfnESPI_ERROR_Handler;                   /* 167 SAF BRIDGE COMPONENT (SAFBC) */
  void* pfnI2C0_Handler;                         /* 168 The I2C interface can handle standard I2C interface. (I2C0) */
  void* pfnI2C1_Handler;                         /* 169 The I2C interface can handle standard I2C interface. (I2C1) */
  void* pfnI2C2_Handler;                         /* 170 The I2C interface can handle standard I2C interface. (I2C2) */
} DeviceVectors;

/* CORTEX-M4 exception handlers */
void Reset_Handler                 ( void );
void NonMaskableInt_Handler        ( void );
void HardFault_Handler             ( void );
void BusFault_Handler              ( void );
void UsageFault_Handler            ( void );
void SVCall_Handler                ( void );
void DebugMonitor_Handler          ( void );
void PendSV_Handler                ( void );
void SysTick_Handler               ( void );

/* Peripherals interrupt handlers */
void ACPIPM1_CTL_Handler           ( void );
void ACPIPM1_EN_Handler            ( void );
void ACPIPM1_STS_Handler           ( void );
void ALARM_Handler                 ( void );
void ALARM_INT_Handler             ( void );
void CAPTURE_0_Handler             ( void );
void CAPTURE_1_Handler             ( void );
void CAPTURE_2_Handler             ( void );
void CAPTURE_3_Handler             ( void );
void CAPTURE_4_Handler             ( void );
void CAPTURE_5_Handler             ( void );
void CAPTURE_TIMER_Handler         ( void );
void COMPARE_0_Handler             ( void );
void COMPARE_1_Handler             ( void );
void DMA_CHAN00_Handler            ( void );
void DMA_CHAN01_Handler            ( void );
void DMA_CHAN02_Handler            ( void );
void DMA_CHAN03_Handler            ( void );
void DMA_CHAN04_Handler            ( void );
void DMA_CHAN05_Handler            ( void );
void DMA_CHAN06_Handler            ( void );
void DMA_CHAN07_Handler            ( void );
void DMA_CHAN08_Handler            ( void );
void DMA_CHAN09_Handler            ( void );
void DMA_CHAN10_Handler            ( void );
void DMA_CHAN11_Handler            ( void );
void EC_CMPLTN_Handler             ( void );
void EMI0_Handler                  ( void );
void EMI1_Handler                  ( void );
void ESPI_ERROR_Handler            ( void );
void ESPI_MSVW00_06_Handler        ( void );
void ESPI_MSVW07_10_Handler        ( void );
void ESPI_RESET_Handler            ( void );
void GPIO_000_036_Handler          ( void );
void GPIO_040_076_Handler          ( void );
void GPIO_100_137_Handler          ( void );
void GPIO_140_176_Handler          ( void );
void GPIO_200_236_Handler          ( void );
void GPIO_240_276_Handler          ( void );
void HDMI_CEC_Handler              ( void );
void HTM0_Handler                  ( void );
void HTM1_Handler                  ( void );
void I2C0_Handler                  ( void );
void I2C1_Handler                  ( void );
void I2C2_Handler                  ( void );
void IBF0_Handler                  ( void );
void IBF1_Handler                  ( void );
void IBF2_Handler                  ( void );
void IBF3_Handler                  ( void );
void IN0_Handler                   ( void );
void IN1_Handler                   ( void );
void IN2_Handler                   ( void );
void IN3_Handler                   ( void );
void INTR_BM1_Handler              ( void );
void INTR_BM2_Handler              ( void );
void INTR_FLASH_Handler            ( void );
void INTR_LTR_Handler              ( void );
void INTR_OOB_DOWN_Handler         ( void );
void INTR_OOB_UP_Handler           ( void );
void INTR_PC_Handler               ( void );
void INT_Handler                   ( void );
void KBC8042_IBF_Handler           ( void );
void KBC8042_OBF_Handler           ( void );
void KMS_Handler                   ( void );
void LED0_Handler                  ( void );
void LED1_Handler                  ( void );
void LED2_Handler                  ( void );
void MBX_Handler                   ( void );
void OBF0_Handler                  ( void );
void OBF1_Handler                  ( void );
void OBF2_Handler                  ( void );
void OBF3_Handler                  ( void );
void ONE_SECOND_Handler            ( void );
void OVRD_IN_Handler               ( void );
void PECI_Handler                  ( void );
void PORT_80_DEBUG0_Handler        ( void );
void PORT_80_DEBUG1_Handler        ( void );
void PROCHOT_MON_Handler           ( void );
void PS2_0A_WK_Handler             ( void );
void PS2_0B_WK_Handler             ( void );
void PS2_0_ACT_Handler             ( void );
void PS2_1B_WK_Handler             ( void );
void PS2_1_ACT_Handler             ( void );
void QMSPI_Handler                 ( void );
void RPT_Handler                   ( void );
void SGPIO0_Handler                ( void );
void SGPIO1_Handler                ( void );
void SGPIO2_Handler                ( void );
void SGPIO3_Handler                ( void );
void SMB0_Handler                  ( void );
void SMB1_Handler                  ( void );
void SMB2_Handler                  ( void );
void SMB3_Handler                  ( void );
void SMB4_Handler                  ( void );
void SNGL_Handler                  ( void );
void SPI_SLAVE_Handler             ( void );
void SUB_SECOND_Handler            ( void );
void SUB_WEEK_ALARM_Handler        ( void );
void SWI_INT_0123_Handler          ( void );
void SYSPWR_PRES_Handler           ( void );
void TACH0_Handler                 ( void );
void TACH1_Handler                 ( void );
void TACH2_Handler                 ( void );
void TACH3_Handler                 ( void );
void TIMER16_0_Handler             ( void );
void TIMER16_1_Handler             ( void );
void TIMER32_0_Handler             ( void );
void TIMER32_1_Handler             ( void );
void TIMER_Handler                 ( void );
void UART0_Handler                 ( void );
void UART1_Handler                 ( void );
void UART2_Handler                 ( void );
void VWIRE_ENABLE_Handler          ( void );

/*
 * \brief Configuration of the CORTEX-M4 Processor and Core Peripherals
 */
#define __FPU_PRESENT                  1 /**< FPU present or not                                                        */
#define __MPU_PRESENT                  0 /**< MPU present or not                                                        */
#define __CM4_REV                 0x0100 /**< CM4 Core Revision                                                         */
#define __NVIC_PRIO_BITS               3 /**< Number of Bits used for Priority Levels                                   */
#define __Vendor_SysTickConfig         0 /**< Set to 1 if different SysTick Config is used                              */
#define __ARCH_ARM                     1
#define __ARCH_ARM_CORTEX_M            1
#define __DEVICE_IS_SAM                0

/*
 * \brief CMSIS includes
 */
#include <core_cm4.h>
#if !defined DONT_USE_CMSIS_INIT
#include "system_0525sg12.h"
#endif /* DONT_USE_CMSIS_INIT */

/** @}  end of PIC32CX0525SG12144_cmsis CMSIS Definitions */

/** \defgroup PIC32CX0525SG12144_api Peripheral Software API
 *  @{
 */

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR PIC32CX0525SG12144                */
/* ************************************************************************** */
#include "component/pcr.h"
#include "component/dma_main.h"
#include "component/dma_chan0.h"
#include "component/dma_chan01.h"
#include "component/dma_chan02.h"
#include "component/ints.h"
#include "component/espi_io.h"
#include "component/espi_memory.h"
#include "component/espi_msvw00_06.h"
#include "component/espi_msvw07_1.h"
#include "component/espi_smvw00_1.h"
#include "component/gcr.h"
#include "component/kbc.h"
#include "component/port92.h"
#include "component/acpi_ec.h"
#include "component/pm1.h"
#include "component/emi.h"
#include "component/mbx.h"
//#include "component/uart.h"
#include "component/gpio_000_036.h"
#include "component/gpio_040_076.h"
#include "component/gpio_100_137.h"
#include "component/gpio_140_176.h"
#include "component/gpio_200_236.h"
#include "component/gpio_240_276.h"
#include "component/input_output_gpio.h"
#include "component/gpio_pin_control_2.h"
#include "component/wdt.h"
#include "component/timer16.h"
#include "component/timer32.h"
#include "component/capture_compare_timer.h"
#include "component/htm.h"
#include "component/rtos.h"
#include "component/rtc.h"
#include "component/week.h"
#include "component/tach.h"
#include "component/pwm.h"
#include "component/peci.h"
#include "component/adc.h"
#include "component/prochot_mon.h"
#include "component/led.h"
#include "component/kms.h"
#include "component/smb.h"
#include "component/i2c.h"
#include "component/qmspi.h"
#include "component/ps2.h"
#include "component/tfdp.h"
#include "component/port_80_debug.h"
#include "component/vci.h"
#include "component/vbat_ram.h"
#include "component/vbat.h"
#include "component/ec_reg_bank.h"
#include "component/espi_scratch.h"
#include "component/hdmi_cec.h"
#include "component/safbc.h"
#include "component/safcomm.h"
#include "component/sgpio.h"
#include "component/spi_slave.h"
/** @}  end of Peripheral Software API */

/** \addtogroup PIC32CX0525SG12144_id Peripheral Ids Definitions
 *  @{
 */

/* ************************************************************************** */
/*  PERIPHERAL ID DEFINITIONS FOR PIC32CX0525SG12144                          */
/* ************************************************************************** */

/** @}   */

/** \addtogroup PIC32CX0525SG12144_base Peripheral Base Address Definitions
 *  @{
 */

/* ************************************************************************** */
/*   REGISTER STRUCTURE ADDRESS DEFINITIONS FOR PIC32CX0525SG12144            */
/* ************************************************************************** */
#define _PCR_REGS                        CAST(pcr_registers_t, 0x40080100)             /**< \brief PCR Registers Address        */
#define _DMA_MAIN_REGS                   CAST(dmamain_registers_t, 0x40002400)         /**< \brief DMA_MAIN Registers Address   */
#define _DMA_CHAN00_REGS                 CAST(dmachan0_registers_t, 0x40002440)        /**< \brief DMA_CHAN00 Registers Address */
#define _DMA_CHAN01_REGS                 CAST(dmachan01_registers_t, 0x40002480)       /**< \brief DMA_CHAN01 Registers Address */
#define _DMA_CHAN02_REGS                 CAST(dmachan02_registers_t, 0x400024c0)       /**< \brief DMA_CHAN02 Registers Address */
#define _DMA_CHAN03_REGS                 CAST(dmachan02_registers_t, 0x40002500)       /**< \brief DMA_CHAN03 Registers Address */
#define _DMA_CHAN04_REGS                 CAST(dmachan02_registers_t, 0x40002540)       /**< \brief DMA_CHAN04 Registers Address */
#define _DMA_CHAN05_REGS                 CAST(dmachan02_registers_t, 0x40002580)       /**< \brief DMA_CHAN05 Registers Address */
#define _DMA_CHAN06_REGS                 CAST(dmachan02_registers_t, 0x400025c0)       /**< \brief DMA_CHAN06 Registers Address */
#define _DMA_CHAN07_REGS                 CAST(dmachan02_registers_t, 0x40002600)       /**< \brief DMA_CHAN07 Registers Address */
#define _DMA_CHAN08_REGS                 CAST(dmachan02_registers_t, 0x40002640)       /**< \brief DMA_CHAN08 Registers Address */
#define _DMA_CHAN09_REGS                 CAST(dmachan02_registers_t, 0x40002680)       /**< \brief DMA_CHAN09 Registers Address */
#define _DMA_CHAN10_REGS                 CAST(dmachan02_registers_t, 0x400026c0)       /**< \brief DMA_CHAN10 Registers Address */
#define _DMA_CHAN11_REGS                 CAST(dmachan02_registers_t, 0x40002700)       /**< \brief DMA_CHAN11 Registers Address */
#define _INTS_REGS                       CAST(ints_registers_t, 0x4000e000)            /**< \brief INTS Registers Address       */
#define _ESPI_IO_REGS                    CAST(espiio_registers_t, 0x400f3400)          /**< \brief ESPI_IO Registers Address    */
#define _ESPI_MEMORY_REGS                CAST(espimemory_registers_t, 0x400f3800)      /**< \brief ESPI_MEMORY Registers Address */
#define _ESPI_MSVW00_06_REGS             CAST(espimsvw0006_registers_t, 0x400f9c00)    /**< \brief ESPI_MSVW00_06 Registers Address */
#define _ESPI_MSVW07_10_REGS             CAST(espimsvw071_registers_t, 0x400f9c54)     /**< \brief ESPI_MSVW07_10 Registers Address */
#define _ESPI_SMVW00_10_REGS             CAST(espismvw001_registers_t, 0x400f9e00)     /**< \brief ESPI_SMVW00_10 Registers Address */
#define _GCR_REGS                        CAST(gcr_registers_t, 0x400fff00)             /**< \brief GCR Registers Address        */
#define _KBC_REGS                        CAST(kbc_registers_t, 0x400f0400)             /**< \brief KBC Registers Address        */
#define _PORT92_REGS                     CAST(port92_registers_t, 0x400f2000)          /**< \brief PORT92 Registers Address     */
#define _ACPI_EC0_REGS                   CAST(acpiec_registers_t, 0x400f0800)          /**< \brief ACPI_EC0 Registers Address   */
#define _ACPI_EC1_REGS                   CAST(acpiec_registers_t, 0x400f0c00)          /**< \brief ACPI_EC1 Registers Address   */
#define _ACPI_EC2_REGS                   CAST(acpiec_registers_t, 0x400f1000)          /**< \brief ACPI_EC2 Registers Address   */
#define _ACPI_EC3_REGS                   CAST(acpiec_registers_t, 0x400f1400)          /**< \brief ACPI_EC3 Registers Address   */
#define _PM1_REGS                        CAST(pm1_registers_t, 0x400f1c00)             /**< \brief PM1 Registers Address        */
#define _EMI0_REGS                       CAST(emi_registers_t, 0x400f4000)             /**< \brief EMI0 Registers Address       */
#define _EMI1_REGS                       CAST(emi_registers_t, 0x400f4400)             /**< \brief EMI1 Registers Address       */
#define _MBX_REGS                        CAST(mbx_registers_t, 0x400f0000)             /**< \brief MBX Registers Address        */
#define _UART0_REGS                      CAST(uart_registers_t, 0x400f2400)            /**< \brief UART0 Registers Address      */
#define _UART1_REGS                      CAST(uart_registers_t, 0x400f2800)            /**< \brief UART1 Registers Address      */
#define _UART2_REGS                      CAST(uart_registers_t, 0x400f2c00)            /**< \brief UART2 Registers Address      */
#define _GPIO_000_036_REGS               CAST(gpio000036_registers_t, 0x40081000)      /**< \brief GPIO_000_036 Registers Address */
#define _GPIO_040_076_REGS               CAST(gpio040076_registers_t, 0x40081080)      /**< \brief GPIO_040_076 Registers Address */
#define _GPIO_100_137_REGS               CAST(gpio100137_registers_t, 0x40081100)      /**< \brief GPIO_100_137 Registers Address */
#define _GPIO_140_176_REGS               CAST(gpio140176_registers_t, 0x40081180)      /**< \brief GPIO_140_176 Registers Address */
#define _GPIO_200_236_REGS               CAST(gpio200236_registers_t, 0x40081200)      /**< \brief GPIO_200_236 Registers Address */
#define _GPIO_240_276_REGS               CAST(gpio240276_registers_t, 0x40081280)      /**< \brief GPIO_240_276 Registers Address */
#define _INPUT_OUTPUT_GPIO_REGS          CAST(inputoutputgpio_registers_t, 0x40081300) /**< \brief INPUT_OUTPUT_GPIO Registers Address */
#define _GPIO_PIN_CONTROL_2_REGS         CAST(gpiopincontrol2_registers_t, 0x40081500) /**< \brief GPIO_PIN_CONTROL_2 Registers Address */
#define _WDT_REGS                        CAST(wdt_registers_t, 0x40000400)             /**< \brief WDT Registers Address        */
#define _TIMER16_0_REGS                  CAST(timer16_registers_t, 0x40000c00)         /**< \brief TIMER16_0 Registers Address  */
#define _TIMER16_1_REGS                  CAST(timer16_registers_t, 0x40000c20)         /**< \brief TIMER16_1 Registers Address  */
#define _TIMER32_0_REGS                  CAST(timer32_registers_t, 0x40000c80)         /**< \brief TIMER32_0 Registers Address  */
#define _TIMER32_1_REGS                  CAST(timer32_registers_t, 0x40000ca0)         /**< \brief TIMER32_1 Registers Address  */
#define _CAPTURE_COMPARE_TIMER_REGS      CAST(capturecomparetimer_registers_t, 0x40001000) /**< \brief CAPTURE_COMPARE_TIMER Registers Address */
#define _HTM0_REGS                       CAST(htm_registers_t, 0x40009800)             /**< \brief HTM0 Registers Address       */
#define _HTM1_REGS                       CAST(htm_registers_t, 0x40009820)             /**< \brief HTM1 Registers Address       */
#define _RTOS_REGS                       CAST(rtos_registers_t, 0x40007400)            /**< \brief RTOS Registers Address       */
#define _RTC_REGS                        CAST(rtc_registers_t, 0x400f5000)             /**< \brief RTC Registers Address        */
#define _WEEK_REGS                       CAST(week_registers_t, 0x4000ac80)            /**< \brief WEEK Registers Address       */
#define _TACH0_REGS                      CAST(tach_registers_t, 0x40006000)            /**< \brief TACH0 Registers Address      */
#define _TACH1_REGS                      CAST(tach_registers_t, 0x40006010)            /**< \brief TACH1 Registers Address      */
#define _TACH2_REGS                      CAST(tach_registers_t, 0x40006020)            /**< \brief TACH2 Registers Address      */
#define _TACH3_REGS                      CAST(tach_registers_t, 0x40006030)            /**< \brief TACH3 Registers Address      */
#define _PWM0_REGS                       CAST(pwm_registers_t, 0x40005800)             /**< \brief PWM0 Registers Address       */
#define _PWM1_REGS                       CAST(pwm_registers_t, 0x40005810)             /**< \brief PWM1 Registers Address       */
#define _PWM2_REGS                       CAST(pwm_registers_t, 0x40005820)             /**< \brief PWM2 Registers Address       */
#define _PWM3_REGS                       CAST(pwm_registers_t, 0x40005830)             /**< \brief PWM3 Registers Address       */
#define _PWM4_REGS                       CAST(pwm_registers_t, 0x40005840)             /**< \brief PWM4 Registers Address       */
#define _PWM5_REGS                       CAST(pwm_registers_t, 0x40005850)             /**< \brief PWM5 Registers Address       */
#define _PWM6_REGS                       CAST(pwm_registers_t, 0x40005860)             /**< \brief PWM6 Registers Address       */
#define _PWM7_REGS                       CAST(pwm_registers_t, 0x40005870)             /**< \brief PWM7 Registers Address       */
#define _PWM8_REGS                       CAST(pwm_registers_t, 0x40005880)             /**< \brief PWM8 Registers Address       */
#define _PECI_REGS                       CAST(peci_registers_t, 0x40006400)            /**< \brief PECI Registers Address       */
#define _ADC_REGS                        CAST(adc_registers_t, 0x40007c00)             /**< \brief ADC Registers Address        */
#define _PROCHOT_MON_REGS                CAST(prochotmon_registers_t, 0x40003400)      /**< \brief PROCHOT_MON Registers Address */
#define _LED0_REGS                       CAST(led_registers_t, 0x4000b800)             /**< \brief LED0 Registers Address       */
#define _LED1_REGS                       CAST(led_registers_t, 0x4000b900)             /**< \brief LED1 Registers Address       */
#define _LED2_REGS                       CAST(led_registers_t, 0x4000ba00)             /**< \brief LED2 Registers Address       */
#define _KMS_REGS                        CAST(kms_registers_t, 0x40009c00)             /**< \brief KMS Registers Address        */
#define _SMB0_REGS                       CAST(smb_registers_t, 0x40004000)             /**< \brief SMB0 Registers Address       */
#define _SMB1_REGS                       CAST(smb_registers_t, 0x40004400)             /**< \brief SMB1 Registers Address       */
#define _SMB2_REGS                       CAST(smb_registers_t, 0x40004800)             /**< \brief SMB2 Registers Address       */
#define _SMB3_REGS                       CAST(smb_registers_t, 0x40004c00)             /**< \brief SMB3 Registers Address       */
#define _SMB4_REGS                       CAST(smb_registers_t, 0x40005000)             /**< \brief SMB4 Registers Address       */
#define _I2C0_REGS                       CAST(i2c_registers_t, 0x40005100)             /**< \brief I2C0 Registers Address       */
#define _I2C1_REGS                       CAST(i2c_registers_t, 0x40005200)             /**< \brief I2C1 Registers Address       */
#define _I2C2_REGS                       CAST(i2c_registers_t, 0x40005300)             /**< \brief I2C2 Registers Address       */
#define _QMSPI_REGS                      CAST(qmspi_registers_t, 0x40070000)           /**< \brief QMSPI Registers Address      */
#define _PS2_0_REGS                      CAST(ps2_registers_t, 0x40009000)             /**< \brief PS2_0 Registers Address      */
#define _PS2_1_REGS                      CAST(ps2_registers_t, 0x40009040)             /**< \brief PS2_1 Registers Address      */
#define _TFDP_REGS                       CAST(tfdp_registers_t, 0x40008c00)            /**< \brief TFDP Registers Address       */
#define _PORT_80_DEBUG0_REGS             CAST(port80debug_registers_t, 0x400f8000)     /**< \brief PORT_80_DEBUG0 Registers Address */
#define _PORT_80_DEBUG1_REGS             CAST(port80debug_registers_t, 0x400f8400)     /**< \brief PORT_80_DEBUG1 Registers Address */
#define _VCI_REGS                        CAST(vci_registers_t, 0x4000ae00)             /**< \brief VCI Registers Address        */
#define _VBAT_RAM_REGS                   CAST(vbatram_registers_t, 0x4000a800)         /**< \brief VBAT_RAM Registers Address   */
#define _VBAT_REGS                       CAST(vbat_registers_t, 0x4000a400)            /**< \brief VBAT Registers Address       */
#define _EC_REG_BANK_REGS                CAST(ecregbank_registers_t, 0x4000fc00)       /**< \brief EC_REG_BANK Registers Address */
#define _ESPI_SCRATCH_REGS               CAST(espiscratch_registers_t, 0x400fbc00)     /**< \brief ESPI_SCRATCH Registers Address */
#define _HDMI_CEC_REGS                   CAST(hdmicec_registers_t, 0x40006800)         /**< \brief HDMI_CEC Registers Address   */
#define _SAFBC_REGS                      CAST(safbc_registers_t, 0x40008000)           /**< \brief SAFBC Registers Address      */
#define _SAFCOMM_REGS                    CAST(safcomm_registers_t, 0x40071000)         /**< \brief SAFCOMM Registers Address    */
#define _SGPIO0_REGS                     CAST(sgpio_registers_t, 0x4000a000)           /**< \brief SGPIO0 Registers Address     */
#define _SGPIO1_REGS                     CAST(sgpio_registers_t, 0x4000a100)           /**< \brief SGPIO1 Registers Address     */
#define _SGPIO2_REGS                     CAST(sgpio_registers_t, 0x4000a200)           /**< \brief SGPIO2 Registers Address     */
#define _SGPIO3_REGS                     CAST(sgpio_registers_t, 0x4000a300)           /**< \brief SGPIO3 Registers Address     */
#define _SPI_SLAVE_REGS                  CAST(spislave_registers_t, 0x40007000)        /**< \brief SPI_SLAVE Registers Address  */

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR PIC32CX0525SG12144                          */
/* ************************************************************************** */

#define _PCR_BASE_ADDRESS                (0x40080100UL)                                /**< \brief PCR Base Address             */
#define _DMA_MAIN_BASE_ADDRESS           (0x40002400UL)                                /**< \brief DMA_MAIN Base Address        */
#define _DMA_CHAN00_BASE_ADDRESS         (0x40002440UL)                                /**< \brief DMA_CHAN00 Base Address      */
#define _DMA_CHAN01_BASE_ADDRESS         (0x40002480UL)                                /**< \brief DMA_CHAN01 Base Address      */
#define _DMA_CHAN02_BASE_ADDRESS         (0x400024c0UL)                                /**< \brief DMA_CHAN02 Base Address      */
#define _DMA_CHAN03_BASE_ADDRESS         (0x40002500UL)                                /**< \brief DMA_CHAN03 Base Address      */
#define _DMA_CHAN04_BASE_ADDRESS         (0x40002540UL)                                /**< \brief DMA_CHAN04 Base Address      */
#define _DMA_CHAN05_BASE_ADDRESS         (0x40002580UL)                                /**< \brief DMA_CHAN05 Base Address      */
#define _DMA_CHAN06_BASE_ADDRESS         (0x400025c0UL)                                /**< \brief DMA_CHAN06 Base Address      */
#define _DMA_CHAN07_BASE_ADDRESS         (0x40002600UL)                                /**< \brief DMA_CHAN07 Base Address      */
#define _DMA_CHAN08_BASE_ADDRESS         (0x40002640UL)                                /**< \brief DMA_CHAN08 Base Address      */
#define _DMA_CHAN09_BASE_ADDRESS         (0x40002680UL)                                /**< \brief DMA_CHAN09 Base Address      */
#define _DMA_CHAN10_BASE_ADDRESS         (0x400026c0UL)                                /**< \brief DMA_CHAN10 Base Address      */
#define _DMA_CHAN11_BASE_ADDRESS         (0x40002700UL)                                /**< \brief DMA_CHAN11 Base Address      */
#define _INTS_BASE_ADDRESS               (0x4000e000UL)                                /**< \brief INTS Base Address            */
#define _ESPI_IO_BASE_ADDRESS            (0x400f3400UL)                                /**< \brief ESPI_IO Base Address         */
#define _ESPI_MEMORY_BASE_ADDRESS        (0x400f3800UL)                                /**< \brief ESPI_MEMORY Base Address     */
#define _ESPI_MSVW00_06_BASE_ADDRESS     (0x400f9c00UL)                                /**< \brief ESPI_MSVW00_06 Base Address  */
#define _ESPI_MSVW07_10_BASE_ADDRESS     (0x400f9c54UL)                                /**< \brief ESPI_MSVW07_10 Base Address  */
#define _ESPI_SMVW00_10_BASE_ADDRESS     (0x400f9e00UL)                                /**< \brief ESPI_SMVW00_10 Base Address  */
#define _GCR_BASE_ADDRESS                (0x400fff00UL)                                /**< \brief GCR Base Address             */
#define _KBC_BASE_ADDRESS                (0x400f0400UL)                                /**< \brief KBC Base Address             */
#define _PORT92_BASE_ADDRESS             (0x400f2000UL)                                /**< \brief PORT92 Base Address          */
#define _ACPI_EC0_BASE_ADDRESS           (0x400f0800UL)                                /**< \brief ACPI_EC0 Base Address        */
#define _ACPI_EC1_BASE_ADDRESS           (0x400f0c00UL)                                /**< \brief ACPI_EC1 Base Address        */
#define _ACPI_EC2_BASE_ADDRESS           (0x400f1000UL)                                /**< \brief ACPI_EC2 Base Address        */
#define _ACPI_EC3_BASE_ADDRESS           (0x400f1400UL)                                /**< \brief ACPI_EC3 Base Address        */
#define _PM1_BASE_ADDRESS                (0x400f1c00UL)                                /**< \brief PM1 Base Address             */
#define _EMI0_BASE_ADDRESS               (0x400f4000UL)                                /**< \brief EMI0 Base Address            */
#define _EMI1_BASE_ADDRESS               (0x400f4400UL)                                /**< \brief EMI1 Base Address            */
#define _MBX_BASE_ADDRESS                (0x400f0000UL)                                /**< \brief MBX Base Address             */
#define _UART0_BASE_ADDRESS              (0x400f2400UL)                                /**< \brief UART0 Base Address           */
#define _UART1_BASE_ADDRESS              (0x400f2800UL)                                /**< \brief UART1 Base Address           */
#define _UART2_BASE_ADDRESS              (0x400f2c00UL)                                /**< \brief UART2 Base Address           */
#define _GPIO_000_036_BASE_ADDRESS       (0x40081000UL)                                /**< \brief GPIO_000_036 Base Address    */
#define _GPIO_040_076_BASE_ADDRESS       (0x40081080UL)                                /**< \brief GPIO_040_076 Base Address    */
#define _GPIO_100_137_BASE_ADDRESS       (0x40081100UL)                                /**< \brief GPIO_100_137 Base Address    */
#define _GPIO_140_176_BASE_ADDRESS       (0x40081180UL)                                /**< \brief GPIO_140_176 Base Address    */
#define _GPIO_200_236_BASE_ADDRESS       (0x40081200UL)                                /**< \brief GPIO_200_236 Base Address    */
#define _GPIO_240_276_BASE_ADDRESS       (0x40081280UL)                                /**< \brief GPIO_240_276 Base Address    */
#define _INPUT_OUTPUT_GPIO_BASE_ADDRESS  (0x40081300UL)                                /**< \brief INPUT_OUTPUT_GPIO Base Address */
#define _GPIO_PIN_CONTROL_2_BASE_ADDRESS (0x40081500UL)                                /**< \brief GPIO_PIN_CONTROL_2 Base Address */
#define _WDT_BASE_ADDRESS                (0x40000400UL)                                /**< \brief WDT Base Address             */
#define _TIMER16_0_BASE_ADDRESS          (0x40000c00UL)                                /**< \brief TIMER16_0 Base Address       */
#define _TIMER16_1_BASE_ADDRESS          (0x40000c20UL)                                /**< \brief TIMER16_1 Base Address       */
#define _TIMER32_0_BASE_ADDRESS          (0x40000c80UL)                                /**< \brief TIMER32_0 Base Address       */
#define _TIMER32_1_BASE_ADDRESS          (0x40000ca0UL)                                /**< \brief TIMER32_1 Base Address       */
#define _CAPTURE_COMPARE_TIMER_BASE_ADDRESS (0x40001000UL)                                /**< \brief CAPTURE_COMPARE_TIMER Base Address */
#define _HTM0_BASE_ADDRESS               (0x40009800UL)                                /**< \brief HTM0 Base Address            */
#define _HTM1_BASE_ADDRESS               (0x40009820UL)                                /**< \brief HTM1 Base Address            */
#define _RTOS_BASE_ADDRESS               (0x40007400UL)                                /**< \brief RTOS Base Address            */
#define _RTC_BASE_ADDRESS                (0x400f5000UL)                                /**< \brief RTC Base Address             */
#define _WEEK_BASE_ADDRESS               (0x4000ac80UL)                                /**< \brief WEEK Base Address            */
#define _TACH0_BASE_ADDRESS              (0x40006000UL)                                /**< \brief TACH0 Base Address           */
#define _TACH1_BASE_ADDRESS              (0x40006010UL)                                /**< \brief TACH1 Base Address           */
#define _TACH2_BASE_ADDRESS              (0x40006020UL)                                /**< \brief TACH2 Base Address           */
#define _TACH3_BASE_ADDRESS              (0x40006030UL)                                /**< \brief TACH3 Base Address           */
#define _PWM0_BASE_ADDRESS               (0x40005800UL)                                /**< \brief PWM0 Base Address            */
#define _PWM1_BASE_ADDRESS               (0x40005810UL)                                /**< \brief PWM1 Base Address            */
#define _PWM2_BASE_ADDRESS               (0x40005820UL)                                /**< \brief PWM2 Base Address            */
#define _PWM3_BASE_ADDRESS               (0x40005830UL)                                /**< \brief PWM3 Base Address            */
#define _PWM4_BASE_ADDRESS               (0x40005840UL)                                /**< \brief PWM4 Base Address            */
#define _PWM5_BASE_ADDRESS               (0x40005850UL)                                /**< \brief PWM5 Base Address            */
#define _PWM6_BASE_ADDRESS               (0x40005860UL)                                /**< \brief PWM6 Base Address            */
#define _PWM7_BASE_ADDRESS               (0x40005870UL)                                /**< \brief PWM7 Base Address            */
#define _PWM8_BASE_ADDRESS               (0x40005880UL)                                /**< \brief PWM8 Base Address            */
#define _PECI_BASE_ADDRESS               (0x40006400UL)                                /**< \brief PECI Base Address            */
#define _ADC_BASE_ADDRESS                (0x40007c00UL)                                /**< \brief ADC Base Address             */
#define _PROCHOT_MON_BASE_ADDRESS        (0x40003400UL)                                /**< \brief PROCHOT_MON Base Address     */
#define _LED0_BASE_ADDRESS               (0x4000b800UL)                                /**< \brief LED0 Base Address            */
#define _LED1_BASE_ADDRESS               (0x4000b900UL)                                /**< \brief LED1 Base Address            */
#define _LED2_BASE_ADDRESS               (0x4000ba00UL)                                /**< \brief LED2 Base Address            */
#define _KMS_BASE_ADDRESS                (0x40009c00UL)                                /**< \brief KMS Base Address             */
#define _SMB0_BASE_ADDRESS               (0x40004000UL)                                /**< \brief SMB0 Base Address            */
#define _SMB1_BASE_ADDRESS               (0x40004400UL)                                /**< \brief SMB1 Base Address            */
#define _SMB2_BASE_ADDRESS               (0x40004800UL)                                /**< \brief SMB2 Base Address            */
#define _SMB3_BASE_ADDRESS               (0x40004c00UL)                                /**< \brief SMB3 Base Address            */
#define _SMB4_BASE_ADDRESS               (0x40005000UL)                                /**< \brief SMB4 Base Address            */
#define _I2C0_BASE_ADDRESS               (0x40005100UL)                                /**< \brief I2C0 Base Address            */
#define _I2C1_BASE_ADDRESS               (0x40005200UL)                                /**< \brief I2C1 Base Address            */
#define _I2C2_BASE_ADDRESS               (0x40005300UL)                                /**< \brief I2C2 Base Address            */
#define _QMSPI_BASE_ADDRESS              (0x40070000UL)                                /**< \brief QMSPI Base Address           */
#define _PS2_0_BASE_ADDRESS              (0x40009000UL)                                /**< \brief PS2_0 Base Address           */
#define _PS2_1_BASE_ADDRESS              (0x40009040UL)                                /**< \brief PS2_1 Base Address           */
#define _TFDP_BASE_ADDRESS               (0x40008c00UL)                                /**< \brief TFDP Base Address            */
#define _PORT_80_DEBUG0_BASE_ADDRESS     (0x400f8000UL)                                /**< \brief PORT_80_DEBUG0 Base Address  */
#define _PORT_80_DEBUG1_BASE_ADDRESS     (0x400f8400UL)                                /**< \brief PORT_80_DEBUG1 Base Address  */
#define _VCI_BASE_ADDRESS                (0x4000ae00UL)                                /**< \brief VCI Base Address             */
#define _VBAT_RAM_BASE_ADDRESS           (0x4000a800UL)                                /**< \brief VBAT_RAM Base Address        */
#define _VBAT_BASE_ADDRESS               (0x4000a400UL)                                /**< \brief VBAT Base Address            */
#define _EC_REG_BANK_BASE_ADDRESS        (0x4000fc00UL)                                /**< \brief EC_REG_BANK Base Address     */
#define _ESPI_SCRATCH_BASE_ADDRESS       (0x400fbc00UL)                                /**< \brief ESPI_SCRATCH Base Address    */
#define _HDMI_CEC_BASE_ADDRESS           (0x40006800UL)                                /**< \brief HDMI_CEC Base Address        */
#define _SAFBC_BASE_ADDRESS              (0x40008000UL)                                /**< \brief SAFBC Base Address           */
#define _SAFCOMM_BASE_ADDRESS            (0x40071000UL)                                /**< \brief SAFCOMM Base Address         */
#define _SGPIO0_BASE_ADDRESS             (0x4000a000UL)                                /**< \brief SGPIO0 Base Address          */
#define _SGPIO1_BASE_ADDRESS             (0x4000a100UL)                                /**< \brief SGPIO1 Base Address          */
#define _SGPIO2_BASE_ADDRESS             (0x4000a200UL)                                /**< \brief SGPIO2 Base Address          */
#define _SGPIO3_BASE_ADDRESS             (0x4000a300UL)                                /**< \brief SGPIO3 Base Address          */
#define _SPI_SLAVE_BASE_ADDRESS          (0x40007000UL)                                /**< \brief SPI_SLAVE Base Address       */

/* ************************************************************************** */
/*   HARMONY MODULES DEFINITIONS FOR PIC32CX0525SG12144                       */
/* ************************************************************************** */

typedef enum
{
  PCR_ID_0 = ((uint32_t)_PCR_BASE_ADDRESS),
  PCR_NUMBER_OF_MODULES = 1
} PCR_MODULE_ID;

typedef enum
{
  DMA_MAIN_ID_0 = ((uint32_t)_DMA_MAIN_BASE_ADDRESS),
  DMA_MAIN_NUMBER_OF_MODULES = 1
} DMA_MAIN_MODULE_ID;

typedef enum
{
  DMA_CHAN0_ID_0 = ((uint32_t)_DMA_CHAN00_BASE_ADDRESS),
  DMA_CHAN0_NUMBER_OF_MODULES = 1
} DMA_CHAN0_MODULE_ID;

typedef enum
{
  DMA_CHAN01_ID_0 = ((uint32_t)_DMA_CHAN01_BASE_ADDRESS),
  DMA_CHAN01_NUMBER_OF_MODULES = 1
} DMA_CHAN01_MODULE_ID;

typedef enum
{
  DMA_CHAN02_ID_0 = ((uint32_t)_DMA_CHAN02_BASE_ADDRESS),
  DMA_CHAN02_ID_1 = ((uint32_t)_DMA_CHAN03_BASE_ADDRESS),
  DMA_CHAN02_ID_2 = ((uint32_t)_DMA_CHAN04_BASE_ADDRESS),
  DMA_CHAN02_ID_3 = ((uint32_t)_DMA_CHAN05_BASE_ADDRESS),
  DMA_CHAN02_ID_4 = ((uint32_t)_DMA_CHAN06_BASE_ADDRESS),
  DMA_CHAN02_ID_5 = ((uint32_t)_DMA_CHAN07_BASE_ADDRESS),
  DMA_CHAN02_ID_6 = ((uint32_t)_DMA_CHAN08_BASE_ADDRESS),
  DMA_CHAN02_ID_7 = ((uint32_t)_DMA_CHAN09_BASE_ADDRESS),
  DMA_CHAN02_ID_8 = ((uint32_t)_DMA_CHAN10_BASE_ADDRESS),
  DMA_CHAN02_ID_9 = ((uint32_t)_DMA_CHAN11_BASE_ADDRESS),
  DMA_CHAN02_NUMBER_OF_MODULES = 10
} DMA_CHAN02_MODULE_ID;

typedef enum
{
  INTS_ID_0 = ((uint32_t)_INTS_BASE_ADDRESS),
  INTS_NUMBER_OF_MODULES = 1
} INTS_MODULE_ID;

typedef enum
{
  ESPI_IO_ID_0 = ((uint32_t)_ESPI_IO_BASE_ADDRESS),
  ESPI_IO_NUMBER_OF_MODULES = 1
} ESPI_IO_MODULE_ID;

typedef enum
{
  ESPI_MEMORY_ID_0 = ((uint32_t)_ESPI_MEMORY_BASE_ADDRESS),
  ESPI_MEMORY_NUMBER_OF_MODULES = 1
} ESPI_MEMORY_MODULE_ID;

typedef enum
{
  ESPI_MSVW00_06_ID_0 = ((uint32_t)_ESPI_MSVW00_06_BASE_ADDRESS),
  ESPI_MSVW00_06_NUMBER_OF_MODULES = 1
} ESPI_MSVW00_06_MODULE_ID;

typedef enum
{
  ESPI_MSVW07_1_ID_0 = ((uint32_t)_ESPI_MSVW07_10_BASE_ADDRESS),
  ESPI_MSVW07_1_NUMBER_OF_MODULES = 1
} ESPI_MSVW07_1_MODULE_ID;

typedef enum
{
  ESPI_SMVW00_1_ID_0 = ((uint32_t)_ESPI_SMVW00_10_BASE_ADDRESS),
  ESPI_SMVW00_1_NUMBER_OF_MODULES = 1
} ESPI_SMVW00_1_MODULE_ID;

typedef enum
{
  GCR_ID_0 = ((uint32_t)_GCR_BASE_ADDRESS),
  GCR_NUMBER_OF_MODULES = 1
} GCR_MODULE_ID;

typedef enum
{
  KBC_ID_0 = ((uint32_t)_KBC_BASE_ADDRESS),
  KBC_NUMBER_OF_MODULES = 1
} KBC_MODULE_ID;

typedef enum
{
  PORT92_ID_0 = ((uint32_t)_PORT92_BASE_ADDRESS),
  PORT92_NUMBER_OF_MODULES = 1
} PORT92_MODULE_ID;

typedef enum
{
  ACPI_EC_ID_0 = ((uint32_t)_ACPI_EC0_BASE_ADDRESS),
  ACPI_EC_ID_1 = ((uint32_t)_ACPI_EC1_BASE_ADDRESS),
  ACPI_EC_ID_2 = ((uint32_t)_ACPI_EC2_BASE_ADDRESS),
  ACPI_EC_ID_3 = ((uint32_t)_ACPI_EC3_BASE_ADDRESS),
  ACPI_EC_NUMBER_OF_MODULES = 4
} ACPI_EC_MODULE_ID;

typedef enum
{
  PM1_ID_0 = ((uint32_t)_PM1_BASE_ADDRESS),
  PM1_NUMBER_OF_MODULES = 1
} PM1_MODULE_ID;

typedef enum
{
  EMI_ID_0 = ((uint32_t)_EMI0_BASE_ADDRESS),
  EMI_ID_1 = ((uint32_t)_EMI1_BASE_ADDRESS),
  EMI_NUMBER_OF_MODULES = 2
} EMI_MODULE_ID;

typedef enum
{
  MBX_ID_0 = ((uint32_t)_MBX_BASE_ADDRESS),
  MBX_NUMBER_OF_MODULES = 1
} MBX_MODULE_ID;

typedef enum
{
  UART_ID_0 = ((uint32_t)_UART0_BASE_ADDRESS),
  UART_ID_1 = ((uint32_t)_UART1_BASE_ADDRESS),
  UART_ID_2 = ((uint32_t)_UART2_BASE_ADDRESS),
  UART_NUMBER_OF_MODULES = 3
} UART_MODULE_ID;

typedef enum
{
  GPIO_000_036_ID_0 = ((uint32_t)_GPIO_000_036_BASE_ADDRESS),
  GPIO_000_036_NUMBER_OF_MODULES = 1
} GPIO_000_036_MODULE_ID;

typedef enum
{
  GPIO_040_076_ID_0 = ((uint32_t)_GPIO_040_076_BASE_ADDRESS),
  GPIO_040_076_NUMBER_OF_MODULES = 1
} GPIO_040_076_MODULE_ID;

typedef enum
{
  GPIO_100_137_ID_0 = ((uint32_t)_GPIO_100_137_BASE_ADDRESS),
  GPIO_100_137_NUMBER_OF_MODULES = 1
} GPIO_100_137_MODULE_ID;

typedef enum
{
  GPIO_140_176_ID_0 = ((uint32_t)_GPIO_140_176_BASE_ADDRESS),
  GPIO_140_176_NUMBER_OF_MODULES = 1
} GPIO_140_176_MODULE_ID;

typedef enum
{
  GPIO_200_236_ID_0 = ((uint32_t)_GPIO_200_236_BASE_ADDRESS),
  GPIO_200_236_NUMBER_OF_MODULES = 1
} GPIO_200_236_MODULE_ID;

typedef enum
{
  GPIO_240_276_ID_0 = ((uint32_t)_GPIO_240_276_BASE_ADDRESS),
  GPIO_240_276_NUMBER_OF_MODULES = 1
} GPIO_240_276_MODULE_ID;

typedef enum
{
  INPUT_OUTPUT_GPIO_ID_0 = ((uint32_t)_INPUT_OUTPUT_GPIO_BASE_ADDRESS),
  INPUT_OUTPUT_GPIO_NUMBER_OF_MODULES = 1
} INPUT_OUTPUT_GPIO_MODULE_ID;

typedef enum
{
  GPIO_PIN_CONTROL_2_ID_0 = ((uint32_t)_GPIO_PIN_CONTROL_2_BASE_ADDRESS),
  GPIO_PIN_CONTROL_2_NUMBER_OF_MODULES = 1
} GPIO_PIN_CONTROL_2_MODULE_ID;

typedef enum
{
  WDT_ID_0 = ((uint32_t)_WDT_BASE_ADDRESS),
  WDT_NUMBER_OF_MODULES = 1
} WDT_MODULE_ID;

typedef enum
{
  TIMER16_ID_0 = ((uint32_t)_TIMER16_0_BASE_ADDRESS),
  TIMER16_ID_1 = ((uint32_t)_TIMER16_1_BASE_ADDRESS),
  TIMER16_NUMBER_OF_MODULES = 2
} TIMER16_MODULE_ID;

typedef enum
{
  TIMER32_ID_0 = ((uint32_t)_TIMER32_0_BASE_ADDRESS),
  TIMER32_ID_1 = ((uint32_t)_TIMER32_1_BASE_ADDRESS),
  TIMER32_NUMBER_OF_MODULES = 2
} TIMER32_MODULE_ID;

typedef enum
{
  CAPTURE_COMPARE_TIMER_ID_0 = ((uint32_t)_CAPTURE_COMPARE_TIMER_BASE_ADDRESS),
  CAPTURE_COMPARE_TIMER_NUMBER_OF_MODULES = 1
} CAPTURE_COMPARE_TIMER_MODULE_ID;

typedef enum
{
  HTM_ID_0 = ((uint32_t)_HTM0_BASE_ADDRESS),
  HTM_ID_1 = ((uint32_t)_HTM1_BASE_ADDRESS),
  HTM_NUMBER_OF_MODULES = 2
} HTM_MODULE_ID;

typedef enum
{
  RTOS_ID_0 = ((uint32_t)_RTOS_BASE_ADDRESS),
  RTOS_NUMBER_OF_MODULES = 1
} RTOS_MODULE_ID;

typedef enum
{
  RTC_ID_0 = ((uint32_t)_RTC_BASE_ADDRESS),
  RTC_NUMBER_OF_MODULES = 1
} RTC_MODULE_ID;

typedef enum
{
  WEEK_ID_0 = ((uint32_t)_WEEK_BASE_ADDRESS),
  WEEK_NUMBER_OF_MODULES = 1
} WEEK_MODULE_ID;

typedef enum
{
  TACH_ID_0 = ((uint32_t)_TACH0_BASE_ADDRESS),
  TACH_ID_1 = ((uint32_t)_TACH1_BASE_ADDRESS),
  TACH_ID_2 = ((uint32_t)_TACH2_BASE_ADDRESS),
  TACH_ID_3 = ((uint32_t)_TACH3_BASE_ADDRESS),
  TACH_NUMBER_OF_MODULES = 4
} TACH_MODULE_ID;

typedef enum
{
  PWM_ID_0 = ((uint32_t)_PWM0_BASE_ADDRESS),
  PWM_ID_1 = ((uint32_t)_PWM1_BASE_ADDRESS),
  PWM_ID_2 = ((uint32_t)_PWM2_BASE_ADDRESS),
  PWM_ID_3 = ((uint32_t)_PWM3_BASE_ADDRESS),
  PWM_ID_4 = ((uint32_t)_PWM4_BASE_ADDRESS),
  PWM_ID_5 = ((uint32_t)_PWM5_BASE_ADDRESS),
  PWM_ID_6 = ((uint32_t)_PWM6_BASE_ADDRESS),
  PWM_ID_7 = ((uint32_t)_PWM7_BASE_ADDRESS),
  PWM_ID_8 = ((uint32_t)_PWM8_BASE_ADDRESS),
  PWM_NUMBER_OF_MODULES = 9
} PWM_MODULE_ID;

typedef enum
{
  PECI_ID_0 = ((uint32_t)_PECI_BASE_ADDRESS),
  PECI_NUMBER_OF_MODULES = 1
} PECI_MODULE_ID;

typedef enum
{
  ADC_ID_0 = ((uint32_t)_ADC_BASE_ADDRESS),
  ADC_NUMBER_OF_MODULES = 1
} ADC_MODULE_ID;

typedef enum
{
  PROCHOT_MON_ID_0 = ((uint32_t)_PROCHOT_MON_BASE_ADDRESS),
  PROCHOT_MON_NUMBER_OF_MODULES = 1
} PROCHOT_MON_MODULE_ID;

typedef enum
{
  LED_ID_0 = ((uint32_t)_LED0_BASE_ADDRESS),
  LED_ID_1 = ((uint32_t)_LED1_BASE_ADDRESS),
  LED_ID_2 = ((uint32_t)_LED2_BASE_ADDRESS),
  LED_NUMBER_OF_MODULES = 3
} LED_MODULE_ID;

typedef enum
{
  KMS_ID_0 = ((uint32_t)_KMS_BASE_ADDRESS),
  KMS_NUMBER_OF_MODULES = 1
} KMS_MODULE_ID;

typedef enum
{
  SMB_ID_0 = ((uint32_t)_SMB0_BASE_ADDRESS),
  SMB_ID_1 = ((uint32_t)_SMB1_BASE_ADDRESS),
  SMB_ID_2 = ((uint32_t)_SMB2_BASE_ADDRESS),
  SMB_ID_3 = ((uint32_t)_SMB3_BASE_ADDRESS),
  SMB_ID_4 = ((uint32_t)_SMB4_BASE_ADDRESS),
  SMB_NUMBER_OF_MODULES = 5
} SMB_MODULE_ID;

typedef enum
{
  I2C_ID_0 = ((uint32_t)_I2C0_BASE_ADDRESS),
  I2C_ID_1 = ((uint32_t)_I2C1_BASE_ADDRESS),
  I2C_ID_2 = ((uint32_t)_I2C2_BASE_ADDRESS),
  I2C_NUMBER_OF_MODULES = 3
} I2C_MODULE_ID;

typedef enum
{
  QMSPI_ID_0 = ((uint32_t)_QMSPI_BASE_ADDRESS),
  QMSPI_NUMBER_OF_MODULES = 1
} QMSPI_MODULE_ID;

typedef enum
{
  PS2_ID_0 = ((uint32_t)_PS2_0_BASE_ADDRESS),
  PS2_ID_1 = ((uint32_t)_PS2_1_BASE_ADDRESS),
  PS2_NUMBER_OF_MODULES = 2
} PS2_MODULE_ID;

typedef enum
{
  TFDP_ID_0 = ((uint32_t)_TFDP_BASE_ADDRESS),
  TFDP_NUMBER_OF_MODULES = 1
} TFDP_MODULE_ID;

typedef enum
{
  PORT_80_DEBUG_ID_0 = ((uint32_t)_PORT_80_DEBUG0_BASE_ADDRESS),
  PORT_80_DEBUG_ID_1 = ((uint32_t)_PORT_80_DEBUG1_BASE_ADDRESS),
  PORT_80_DEBUG_NUMBER_OF_MODULES = 2
} PORT_80_DEBUG_MODULE_ID;

typedef enum
{
  VCI_ID_0 = ((uint32_t)_VCI_BASE_ADDRESS),
  VCI_NUMBER_OF_MODULES = 1
} VCI_MODULE_ID;

typedef enum
{
  VBAT_RAM_ID_0 = ((uint32_t)_VBAT_RAM_BASE_ADDRESS),
  VBAT_RAM_NUMBER_OF_MODULES = 1
} VBAT_RAM_MODULE_ID;

typedef enum
{
  VBAT_ID_0 = ((uint32_t)_VBAT_BASE_ADDRESS),
  VBAT_NUMBER_OF_MODULES = 1
} VBAT_MODULE_ID;

typedef enum
{
  EC_REG_BANK_ID_0 = ((uint32_t)_EC_REG_BANK_BASE_ADDRESS),
  EC_REG_BANK_NUMBER_OF_MODULES = 1
} EC_REG_BANK_MODULE_ID;

typedef enum
{
  ESPI_SCRATCH_ID_0 = ((uint32_t)_ESPI_SCRATCH_BASE_ADDRESS),
  ESPI_SCRATCH_NUMBER_OF_MODULES = 1
} ESPI_SCRATCH_MODULE_ID;

typedef enum
{
  HDMI_CEC_ID_0 = ((uint32_t)_HDMI_CEC_BASE_ADDRESS),
  HDMI_CEC_NUMBER_OF_MODULES = 1
} HDMI_CEC_MODULE_ID;

typedef enum
{
  SAFBC_ID_0 = ((uint32_t)_SAFBC_BASE_ADDRESS),
  SAFBC_NUMBER_OF_MODULES = 1
} SAFBC_MODULE_ID;

typedef enum
{
  SAFCOMM_ID_0 = ((uint32_t)_SAFCOMM_BASE_ADDRESS),
  SAFCOMM_NUMBER_OF_MODULES = 1
} SAFCOMM_MODULE_ID;

typedef enum
{
  SGPIO_ID_0 = ((uint32_t)_SGPIO0_BASE_ADDRESS),
  SGPIO_ID_1 = ((uint32_t)_SGPIO1_BASE_ADDRESS),
  SGPIO_ID_2 = ((uint32_t)_SGPIO2_BASE_ADDRESS),
  SGPIO_ID_3 = ((uint32_t)_SGPIO3_BASE_ADDRESS),
  SGPIO_NUMBER_OF_MODULES = 4
} SGPIO_MODULE_ID;

typedef enum
{
  SPI_SLAVE_ID_0 = ((uint32_t)_SPI_SLAVE_BASE_ADDRESS),
  SPI_SLAVE_NUMBER_OF_MODULES = 1
} SPI_SLAVE_MODULE_ID;

/** @}  end of Peripheral Base Address Definitions */

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR PIC32CX0525SG12144                        */
/* ************************************************************************** */

#define CODE_SRAM_SIZE                 (0x00037fffU)       /*  223kB Memory segment type: ram */
#define DATA_SRAM_SIZE                 (0x00007fffU)       /*   31kB Memory segment type: ram */
#define DATA_SRAM_ALIAS_SIZE           (0x00007fffU)       /*   31kB Memory segment type: ram */
#define EC_DEVICE_REGISTERS_SIZE       (0x0001ffffU)       /*  127kB Memory segment type: io */
#define GPIO_REGISTERS_SIZE            (0x0000ffffU)       /*   63kB Memory segment type: io */
#define HOST_DEVICE_REGISTERS_SIZE     (0x000fffffU)       /* 1023kB Memory segment type: io */
#define CRYPTO_RAM_SIZE                (0x00005fffU)       /*   23kB Memory segment type: ram */
#define SCS_SIZE                       (0x00001000U)       /*    4kB Memory segment type: io */

#define CODE_SRAM_ADDR                 (0x000e0000U)       /**< CODE_SRAM base address (type: ram)*/
#define DATA_SRAM_ADDR                 (0x00118000U)       /**< DATA_SRAM base address (type: ram)*/
#define DATA_SRAM_ALIAS_ADDR           (0x20000000U)       /**< DATA_SRAM_ALIAS base address (type: ram)*/
#define EC_DEVICE_REGISTERS_ADDR       (0x40000000U)       /**< EC_DEVICE_REGISTERS base address (type: io)*/
#define GPIO_REGISTERS_ADDR            (0x40080000U)       /**< GPIO_REGISTERS base address (type: io)*/
#define HOST_DEVICE_REGISTERS_ADDR     (0x400f0000U)       /**< HOST_DEVICE_REGISTERS base address (type: io)*/
#define CRYPTO_RAM_ADDR                (0x40100000U)       /**< CRYPTO_RAM base address (type: ram)*/
#define SCS_ADDR                       (0xe000e000U)       /**< SCS base address (type: io)*/

/* ************************************************************************** */
/**  DEVICE SIGNATURES FOR PIC32CX0525SG12144                                 */
/* ************************************************************************** */

/* ************************************************************************** */
/**  ELECTRICAL DEFINITIONS FOR PIC32CX0525SG12144 */
/* ************************************************************************** */

#ifdef __cplusplus
}
#endif

/** @}  end of PIC32CX0525SG12144 definitions */


#endif /* _PIC32CX0525SG12144_H_ */
