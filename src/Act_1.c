/**
 * @file Act_1.c
 * @author Raghavendra A M 
 * @version 0.1
 * @date 2021-04-25
 * @copyright Copyright (c) 2021
 */

#include<avr/io.h>
#include "Act_1.h"

void state1(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}
void LED(void)
{
	DDRB = DDRB | (1<<PB0);
    DDRD = DDRD & (~(1<<PD0));
    PORTD = PORTD | (1<<PD0);
    PORTD = PORTD | (1<<PD1);
}