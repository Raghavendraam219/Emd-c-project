/**
 * @file Main.c
 * @author Raghavendra A M
 * @brief 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Act_1.h"
#include "Act_2.h"
#include "Act_3.h"
#include "Act_4.h"
#include<avr/io.h>
void peripheral_init(void)
{
    
    LED(); //Configure LED and Switch pins
    
    Initilize_ADC(); //Configure ADC registers and pins
   
    Initialize_PWM(); //Configure PWM registers and pins
    
    Initialize_UART(103); //Configure UART serial communication pin
}
    
   
uint16_t temp;
char temp_data;
int main(void)
{
    // Initialize peripherals
    peripheral_init();
    while(1)
    {
        if(SENSOR_ON) //If switch_1 is ON
        {
            if(HEAT_ON) //If switch_2 is ON
            {
                state1(LED_ON);//LED is ON
                temp=Read_ADC(0);
                temp_data = Output_PWM(temp);
                UART_write(temp_data);
            }
            else
            {  
                state1(LED_RESET);
            }
        }
        else
        {
            state1(LED_RESET);//LED is OFF
            OCR1A=0;
        }
    }
    return 0;
}
