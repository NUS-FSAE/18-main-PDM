/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs 

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs  - 1.45
        Device            :  PIC18F45K80
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    
//    CIOCONbits.CANCAP = 1;
    CIOCONbits.CLKSEL = 1;
    CIOCONbits.ENDRHI = 1;

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable high priority global interrupts
    //INTERRUPT_GlobalInterruptHighEnable();

    // Enable low priority global interrupts.
    //INTERRUPT_GlobalInterruptLowEnable();

    // Disable high priority global interrupts
    //INTERRUPT_GlobalInterruptHighDisable();

    // Disable low priority global interrupts.
    //INTERRUPT_GlobalInterruptLowDisable();

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    
    double x = 256.0 / 4096.0 ; // convert 12-bit result to 8 bit
    
//    uint16_t timer_prev, timer_diff ;
//    uint16_t timer_cur = TMR1_ReadTimer() ;
    
    uint8_t up_sol = 0x00, clutch_sol = 0x00 , radiator = 0x00, 
            fuel_pump = 0x00, ewp = 0x00, drs = 0x00, down_sol = 0x00;
    int8_t battery = 0x00;
    
    adc_result_t ADCResult ;
    
    while (1)
    {
        // compute current values from ADC results
        // all current values multiplied by 10 except battery (multiplied by 5)
        // as the battery current value might be out of range
        up_sol = ADC_GetConversion(up) * x ;
        clutch_sol = ADC_GetConversion(clutch) * x ;
        battery = ADC_GetConversion(battery) * x ;
        radiator = ADC_GetConversion(radiator) * x ;
        fuel_pump = ADC_GetConversion(fuel_pump) * x ;
        ewp = ADC_GetConversion(ewp) * x ;
        drs = ADC_GetConversion(drs) * x ;
        down_sol = ADC_GetConversion(down) * x ;
        
        uCAN_MSG cur_data1 ;
        cur_data1.frame.idType = dSTANDARD_CAN_MSG_ID_2_0B ;
        cur_data1.frame.id = 0x470;
        cur_data1.frame.dlc = 8 ;
        cur_data1.frame.data0 = up_sol ;
        cur_data1.frame.data1 = clutch_sol ;
        cur_data1.frame.data2 = battery ;
        cur_data1.frame.data3 = radiator ;
        cur_data1.frame.data4 = fuel_pump ;
        cur_data1.frame.data5 = ewp ;
        cur_data1.frame.data6 = drs ;
        cur_data1.frame.data7 = down_sol ;
        
        CAN_transmit(&cur_data1) ;
    }
}
/**
 End of File
*/