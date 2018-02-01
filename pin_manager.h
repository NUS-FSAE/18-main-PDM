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
        Device            :  PIC18F46K80
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

// get/set up aliases
#define up_TRIS               TRISAbits.TRISA0
#define up_LAT                LATAbits.LATA0
#define up_PORT               PORTAbits.RA0
#define up_ANS                ANCON0bits.ANSEL0
#define up_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define up_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define up_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define up_GetValue()           PORTAbits.RA0
#define up_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define up_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define up_SetAnalogMode()  do { ANCON0bits.ANSEL0 = 1; } while(0)
#define up_SetDigitalMode() do { ANCON0bits.ANSEL0 = 0; } while(0)

// get/set clutch aliases
#define clutch_TRIS               TRISAbits.TRISA1
#define clutch_LAT                LATAbits.LATA1
#define clutch_PORT               PORTAbits.RA1
#define clutch_ANS                ANCON0bits.ANSEL1
#define clutch_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define clutch_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define clutch_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define clutch_GetValue()           PORTAbits.RA1
#define clutch_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define clutch_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define clutch_SetAnalogMode()  do { ANCON0bits.ANSEL1 = 1; } while(0)
#define clutch_SetDigitalMode() do { ANCON0bits.ANSEL1 = 0; } while(0)

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

// get/set battery aliases
#define battery_TRIS               TRISAbits.TRISA5
#define battery_LAT                LATAbits.LATA5
#define battery_PORT               PORTAbits.RA5
#define battery_ANS                ANCON0bits.ANSEL4
#define battery_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define battery_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define battery_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define battery_GetValue()           PORTAbits.RA5
#define battery_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define battery_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define battery_SetAnalogMode()  do { ANCON0bits.ANSEL4 = 1; } while(0)
#define battery_SetDigitalMode() do { ANCON0bits.ANSEL4 = 0; } while(0)

// get/set drs aliases
#define drs_TRIS               TRISBbits.TRISB0
#define drs_LAT                LATBbits.LATB0
#define drs_PORT               PORTBbits.RB0
#define drs_WPU                WPUBbits.WPUB0
#define drs_ANS                ANCON1bits.ANSEL10
#define drs_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define drs_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define drs_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define drs_GetValue()           PORTBbits.RB0
#define drs_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define drs_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define drs_SetPullup()      do { WPUBbits.WPUB0 = 1; } while(0)
#define drs_ResetPullup()    do { WPUBbits.WPUB0 = 0; } while(0)
#define drs_SetAnalogMode()  do { ANCON1bits.ANSEL10 = 1; } while(0)
#define drs_SetDigitalMode() do { ANCON1bits.ANSEL10 = 0; } while(0)

// get/set RB1 aliases
#define RB1_TRIS               TRISBbits.TRISB1
#define RB1_LAT                LATBbits.LATB1
#define RB1_PORT               PORTBbits.RB1
#define RB1_WPU                WPUBbits.WPUB1
#define RB1_ANS                ANCON1bits.ANSEL8
#define RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define RB1_GetValue()           PORTBbits.RB1
#define RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define RB1_SetPullup()      do { WPUBbits.WPUB1 = 1; } while(0)
#define RB1_ResetPullup()    do { WPUBbits.WPUB1 = 0; } while(0)
#define RB1_SetAnalogMode()  do { ANCON1bits.ANSEL8 = 1; } while(0)
#define RB1_SetDigitalMode() do { ANCON1bits.ANSEL8 = 0; } while(0)

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

// get/set down aliases
#define down_TRIS               TRISBbits.TRISB4
#define down_LAT                LATBbits.LATB4
#define down_PORT               PORTBbits.RB4
#define down_WPU                WPUBbits.WPUB4
#define down_ANS                ANCON1bits.ANSEL9
#define down_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define down_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define down_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define down_GetValue()           PORTBbits.RB4
#define down_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define down_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define down_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define down_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define down_SetAnalogMode()  do { ANCON1bits.ANSEL9 = 1; } while(0)
#define down_SetDigitalMode() do { ANCON1bits.ANSEL9 = 0; } while(0)

// get/set radiator aliases
#define radiator_TRIS               TRISEbits.TRISE0
#define radiator_LAT                LATEbits.LATE0
#define radiator_PORT               PORTEbits.RE0
#define radiator_ANS                ANCON0bits.ANSEL5
#define radiator_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define radiator_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define radiator_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define radiator_GetValue()           PORTEbits.RE0
#define radiator_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define radiator_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define radiator_SetAnalogMode()  do { ANCON0bits.ANSEL5 = 1; } while(0)
#define radiator_SetDigitalMode() do { ANCON0bits.ANSEL5 = 0; } while(0)

// get/set fuel_pump aliases
#define fuel_pump_TRIS               TRISEbits.TRISE1
#define fuel_pump_LAT                LATEbits.LATE1
#define fuel_pump_PORT               PORTEbits.RE1
#define fuel_pump_ANS                ANCON0bits.ANSEL6
#define fuel_pump_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define fuel_pump_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define fuel_pump_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define fuel_pump_GetValue()           PORTEbits.RE1
#define fuel_pump_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define fuel_pump_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define fuel_pump_SetAnalogMode()  do { ANCON0bits.ANSEL6 = 1; } while(0)
#define fuel_pump_SetDigitalMode() do { ANCON0bits.ANSEL6 = 0; } while(0)

// get/set ewp aliases
#define ewp_TRIS               TRISEbits.TRISE2
#define ewp_LAT                LATEbits.LATE2
#define ewp_PORT               PORTEbits.RE2
#define ewp_ANS                ANCON0bits.ANSEL7
#define ewp_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define ewp_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define ewp_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define ewp_GetValue()           PORTEbits.RE2
#define ewp_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define ewp_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define ewp_SetAnalogMode()  do { ANCON0bits.ANSEL7 = 1; } while(0)
#define ewp_SetDigitalMode() do { ANCON0bits.ANSEL7 = 0; } while(0)

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