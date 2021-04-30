/**
 * @file Act_4.h
 * @author Raghavendra A M
 * @brief 
 * @version 0.1
 * @date 2021-04-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __Act_4_H__
#define __Act_4_H__
#include<avr/io.h>

void Initialize_UART(uint16_t ubrr); //Read characters from UART port
char UARTread();
void UART_write(char data);     //Write to UART port

#endif    //__Act_4_H__
