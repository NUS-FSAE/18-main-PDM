/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26
        Device            :  PIC18F45K80
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set channel_AN0 aliases
#define channel_AN0_TRIS               TRISAbits.TRISA0
#define channel_AN0_LAT                LATAbits.LATA0
#define channel_AN0_PORT               PORTAbits.RA0
#define channel_AN0_ANS                ANCON0bits.ANSEL0
#define channel_AN0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define channel_AN0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define channel_AN0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define channel_AN0_GetValue()           PORTAbits.RA0
#define channel_AN0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define channel_AN0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define channel_AN0_SetAnalogMode()  do { ANCON0bits.ANSEL0 = 1; } while(0)
#define channel_AN0_SetDigitalMode() do { ANCON0bits.ANSEL0 = 0; } while(0)

// get/set channel_AN1 aliases
#define channel_AN1_TRIS               TRISAbits.TRISA1
#define channel_AN1_LAT                LATAbits.LATA1
#define channel_AN1_PORT               PORTAbits.RA1
#define channel_AN1_ANS                ANCON0bits.ANSEL1
#define channel_AN1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define channel_AN1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define channel_AN1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define channel_AN1_GetValue()           PORTAbits.RA1
#define channel_AN1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define channel_AN1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define channel_AN1_SetAnalogMode()  do { ANCON0bits.ANSEL1 = 1; } while(0)
#define channel_AN1_SetDigitalMode() do { ANCON0bits.ANSEL1 = 0; } while(0)

// get/set RA2 procedures
#define RA2_SetHigh()    do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()   do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()   do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()         PORTAbits.RA2
#define RA2_SetDigitalInput()   do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()  do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetAnalogMode() do { ANCON0bits.ANSEL2 = 1; } while(0)
#define RA2_SetDigitalMode()do { ANCON0bits.ANSEL2 = 0; } while(0)

// get/set RA3 procedures
#define RA3_SetHigh()    do { LATAbits.LATA3 = 1; } while(0)
#define RA3_SetLow()   do { LATAbits.LATA3 = 0; } while(0)
#define RA3_Toggle()   do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define RA3_GetValue()         PORTAbits.RA3
#define RA3_SetDigitalInput()   do { TRISAbits.TRISA3 = 1; } while(0)
#define RA3_SetDigitalOutput()  do { TRISAbits.TRISA3 = 0; } while(0)
#define RA3_SetAnalogMode() do { ANCON0bits.ANSEL3 = 1; } while(0)
#define RA3_SetDigitalMode()do { ANCON0bits.ANSEL3 = 0; } while(0)

// get/set channel_AN4 aliases
#define channel_AN4_TRIS               TRISAbits.TRISA5
#define channel_AN4_LAT                LATAbits.LATA5
#define channel_AN4_PORT               PORTAbits.RA5
#define channel_AN4_ANS                ANCON0bits.ANSEL4
#define channel_AN4_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define channel_AN4_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define channel_AN4_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define channel_AN4_GetValue()           PORTAbits.RA5
#define channel_AN4_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define channel_AN4_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define channel_AN4_SetAnalogMode()  do { ANCON0bits.ANSEL4 = 1; } while(0)
#define channel_AN4_SetDigitalMode() do { ANCON0bits.ANSEL4 = 0; } while(0)

// get/set channel_AN10 aliases
#define channel_AN10_TRIS               TRISBbits.TRISB0
#define channel_AN10_LAT                LATBbits.LATB0
#define channel_AN10_PORT               PORTBbits.RB0
#define channel_AN10_WPU                WPUBbits.WPUB0
#define channel_AN10_ANS                ANCON1bits.ANSEL10
#define channel_AN10_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define channel_AN10_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define channel_AN10_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define channel_AN10_GetValue()           PORTBbits.RB0
#define channel_AN10_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define channel_AN10_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define channel_AN10_SetPullup()      do { WPUBbits.WPUB0 = 1; } while(0)
#define channel_AN10_ResetPullup()    do { WPUBbits.WPUB0 = 0; } while(0)
#define channel_AN10_SetAnalogMode()  do { ANCON1bits.ANSEL10 = 1; } while(0)
#define channel_AN10_SetDigitalMode() do { ANCON1bits.ANSEL10 = 0; } while(0)

// get/set channel_AN8 aliases
#define channel_AN8_TRIS               TRISBbits.TRISB1
#define channel_AN8_LAT                LATBbits.LATB1
#define channel_AN8_PORT               PORTBbits.RB1
#define channel_AN8_WPU                WPUBbits.WPUB1
#define channel_AN8_ANS                ANCON1bits.ANSEL8
#define channel_AN8_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define channel_AN8_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define channel_AN8_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define channel_AN8_GetValue()           PORTBbits.RB1
#define channel_AN8_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define channel_AN8_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define channel_AN8_SetPullup()      do { WPUBbits.WPUB1 = 1; } while(0)
#define channel_AN8_ResetPullup()    do { WPUBbits.WPUB1 = 0; } while(0)
#define channel_AN8_SetAnalogMode()  do { ANCON1bits.ANSEL8 = 1; } while(0)
#define channel_AN8_SetDigitalMode() do { ANCON1bits.ANSEL8 = 0; } while(0)

// get/set RB2 procedures
#define RB2_SetHigh()    do { LATBbits.LATB2 = 1; } while(0)
#define RB2_SetLow()   do { LATBbits.LATB2 = 0; } while(0)
#define RB2_Toggle()   do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RB2_GetValue()         PORTBbits.RB2
#define RB2_SetDigitalInput()   do { TRISBbits.TRISB2 = 1; } while(0)
#define RB2_SetDigitalOutput()  do { TRISBbits.TRISB2 = 0; } while(0)
#define RB2_SetPullup()     do { WPUBbits.WPUB2 = 1; } while(0)
#define RB2_ResetPullup()   do { WPUBbits.WPUB2 = 0; } while(0)

// get/set RB3 procedures
#define RB3_SetHigh()    do { LATBbits.LATB3 = 1; } while(0)
#define RB3_SetLow()   do { LATBbits.LATB3 = 0; } while(0)
#define RB3_Toggle()   do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RB3_GetValue()         PORTBbits.RB3
#define RB3_SetDigitalInput()   do { TRISBbits.TRISB3 = 1; } while(0)
#define RB3_SetDigitalOutput()  do { TRISBbits.TRISB3 = 0; } while(0)
#define RB3_SetPullup()     do { WPUBbits.WPUB3 = 1; } while(0)
#define RB3_ResetPullup()   do { WPUBbits.WPUB3 = 0; } while(0)

// get/set channel_AN9 aliases
#define channel_AN9_TRIS               TRISBbits.TRISB4
#define channel_AN9_LAT                LATBbits.LATB4
#define channel_AN9_PORT               PORTBbits.RB4
#define channel_AN9_WPU                WPUBbits.WPUB4
#define channel_AN9_ANS                ANCON1bits.ANSEL9
#define channel_AN9_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define channel_AN9_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define channel_AN9_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define channel_AN9_GetValue()           PORTBbits.RB4
#define channel_AN9_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define channel_AN9_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define channel_AN9_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define channel_AN9_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define channel_AN9_SetAnalogMode()  do { ANCON1bits.ANSEL9 = 1; } while(0)
#define channel_AN9_SetDigitalMode() do { ANCON1bits.ANSEL9 = 0; } while(0)

// get/set channel_AN5 aliases
#define channel_AN5_TRIS               TRISEbits.TRISE0
#define channel_AN5_LAT                LATEbits.LATE0
#define channel_AN5_PORT               PORTEbits.RE0
#define channel_AN5_ANS                ANCON0bits.ANSEL5
#define channel_AN5_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define channel_AN5_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define channel_AN5_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define channel_AN5_GetValue()           PORTEbits.RE0
#define channel_AN5_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define channel_AN5_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define channel_AN5_SetAnalogMode()  do { ANCON0bits.ANSEL5 = 1; } while(0)
#define channel_AN5_SetDigitalMode() do { ANCON0bits.ANSEL5 = 0; } while(0)

// get/set channel_AN6 aliases
#define channel_AN6_TRIS               TRISEbits.TRISE1
#define channel_AN6_LAT                LATEbits.LATE1
#define channel_AN6_PORT               PORTEbits.RE1
#define channel_AN6_ANS                ANCON0bits.ANSEL6
#define channel_AN6_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define channel_AN6_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define channel_AN6_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define channel_AN6_GetValue()           PORTEbits.RE1
#define channel_AN6_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define channel_AN6_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define channel_AN6_SetAnalogMode()  do { ANCON0bits.ANSEL6 = 1; } while(0)
#define channel_AN6_SetDigitalMode() do { ANCON0bits.ANSEL6 = 0; } while(0)

// get/set channel_AN7 aliases
#define channel_AN7_TRIS               TRISEbits.TRISE2
#define channel_AN7_LAT                LATEbits.LATE2
#define channel_AN7_PORT               PORTEbits.RE2
#define channel_AN7_ANS                ANCON0bits.ANSEL7
#define channel_AN7_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define channel_AN7_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define channel_AN7_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define channel_AN7_GetValue()           PORTEbits.RE2
#define channel_AN7_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define channel_AN7_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define channel_AN7_SetAnalogMode()  do { ANCON0bits.ANSEL7 = 1; } while(0)
#define channel_AN7_SetDigitalMode() do { ANCON0bits.ANSEL7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/