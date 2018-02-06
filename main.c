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
    INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    
    double x = 5000.0 / 4096.0 ; // convert 12-bit result to 16 bit
    
//    uint16_t timer_prev, timer_diff ;
//    uint16_t timer_cur = TMR1_ReadTimer() ;
    
    uint8_t up_sol_L, up_sol_H, clutch_sol_L, clutch_sol_H, 
            radiator_L, radiator_H, fuel_pump_L, fuel_pump_H,
            ewp_L, ewp_H, drs_L, drs_H, down_sol_L, down_sol_H, 
            battery_L, battery_H;
    
    adc_result_t ADCResult ;
    
    while (1)
    {
        if (TMR2_GetTransmit()){
            // compute current values from ADC results
            // all current values multiplied by 10 except battery (multiplied by 5)
            // as the battery current value might be out of range
            ADCResult = ADC_GetConversion(up) * x ;
            up_sol_L = ADCResult;
            up_sol_H = ADCResult >> 8;
            ADCResult = ADC_GetConversion(clutch) * x ;
            clutch_sol_L = ADCResult;
            clutch_sol_H = ADCResult >> 8;
            ADCResult = ADC_GetConversion(battery) * x ;
            battery_L = ADCResult;
            battery_H = ADCResult >> 8;
            ADCResult = ADC_GetConversion(radiator) * x ;
            radiator_L = ADCResult;
            radiator_H = ADCResult >> 8;
            ADCResult = ADC_GetConversion(fuel_pump) * x ;
            fuel_pump_L = ADCResult;
            fuel_pump_H = ADCResult >> 8;
            ADCResult = ADC_GetConversion(ewp) * x ;
            ewp_L = ADCResult;
            ewp_H = ADCResult >> 8;
            ADCResult = ADC_GetConversion(drs) * x ;
            drs_L = ADCResult;
            drs_H = ADCResult >> 8;
            ADCResult = ADC_GetConversion(down) * x ;
            down_sol_L = ADCResult;
            down_sol_H = ADCResult >> 8;
            
            uCAN_MSG cur_data1 ;
            cur_data1.frame.idType = dSTANDARD_CAN_MSG_ID_2_0B;
            cur_data1.frame.id = 0x470;
            cur_data1.frame.dlc = 8;
            cur_data1.frame.data0 = battery_H;
            cur_data1.frame.data1 = battery_L;
            cur_data1.frame.data2 = radiator_H;
            cur_data1.frame.data3 = radiator_L;
            cur_data1.frame.data4 = ewp_H;
            cur_data1.frame.data5 = ewp_L;
            cur_data1.frame.data6 = fuel_pump_H;
            cur_data1.frame.data7 = fuel_pump_L;
            
            uCAN_MSG cur_data2;
            cur_data2.frame.idType = dSTANDARD_CAN_MSG_ID_2_0B;
            cur_data2.frame.id = 0x474;
            cur_data2.frame.dlc = 8;
            cur_data2.frame.data0 = up_sol_H;
            cur_data2.frame.data1 = up_sol_L;
            cur_data2.frame.data2 = down_sol_H;
            cur_data2.frame.data3 = down_sol_L;
            cur_data2.frame.data4 = clutch_sol_H;
            cur_data2.frame.data5 = clutch_sol_L;
            cur_data2.frame.data6 = drs_H;
            cur_data2.frame.data7 = drs_L;

            CAN_transmit(&cur_data1);
            CAN_transmit(&cur_data2);
            TMR2_ClearTransmit();
            INTERRUPT_PeripheralInterruptEnable();
        }
    }
}
/**
 End of File
*/