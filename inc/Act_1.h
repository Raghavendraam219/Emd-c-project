#ifndef __ACT_1_H__
#define __ACT_1_H__
/**
 * @file Act_1.h
 * @author Raghavendra A M
 * @brief 
 * @version 0.1
 * @date 2021-04-25
 * @copyright Copyright (c) 2021 
 */

#include <avr/io.h>
#include "Act_1.h"

//Macro definition 
#define LED_ON 	(0x01)		//led set
#define LED_OFF	(0x00)		//led reset

#define LED_PORT (PORTB)    
#define LED_PIN  (PORTB0)   
#define SENSOR_ON !(PIND&(1<<PD0))   // Switch1 SET
#define HEAT_ON !(PIND&(1<<PD1))     // Switch2 SET
void state1(uint8_t state);  //led state
void LED(void);             //Initialize LED

#endif //__ACT_1_H_