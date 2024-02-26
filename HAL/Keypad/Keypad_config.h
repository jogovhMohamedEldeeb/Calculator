/*
 * Keypad_config.h
 *
 *  Created on: 24 Feb 2024
 *      Author: hp
 */

#ifndef HAL_KEYPAD_KEYPAD_CONFIG_H_
#define HAL_KEYPAD_KEYPAD_CONFIG_H_

#include "../../SERVICES/STD_TYPES.h"
#include "Keypad_private.h"


#define KPD_Arr_Val  {{'7','8','9','/'},{'4','5','6','*'}, {'1','2','3','-'}, {'C','0','=','+'} }

#define Keypad_R1PORT DIO_PORTA
#define Keypad_R1PIN  DIO_PIN0

#define Keypad_R2PORT DIO_PORTA
#define Keypad_R2PIN  DIO_PIN1

#define Keypad_R3PORT DIO_PORTA
#define Keypad_R3PIN  DIO_PIN2

#define Keypad_R4PORT DIO_PORTA
#define Keypad_R4PIN  DIO_PIN3

#define Keypad_C1PORT DIO_PORTA
#define Keypad_C1PIN  DIO_PIN4

#define Keypad_C2PORT DIO_PORTA
#define Keypad_C2PIN  DIO_PIN5

#define Keypad_C3PORT DIO_PORTA
#define Keypad_C3PIN  DIO_PIN6

#define Keypad_C4PORT DIO_PORTA
#define Keypad_C4PIN  DIO_PIN7

#define NOT_PRESSED 20

#endif /* HAL_KEYPAD_KEYPAD_CONFIG_H_ */
