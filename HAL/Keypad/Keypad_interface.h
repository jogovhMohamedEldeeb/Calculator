/*
 * Keypad_interface.h
 *
 *  Created on: 24 Feb 2024
 *      Author: hp
 */

#ifndef HAL_KEYPAD_KEYPAD_INTERFACE_H_
#define HAL_KEYPAD_KEYPAD_INTERFACE_H_



#include "../../MCAL/DIO/DIO_interface.h"
#include "../../SERVICES/BIT_MATH.h"
#include "../../SERVICES/STD_TYPES.h"
#include "Keypad_config.h"
#include "Keypad_private.h"

#include <util/delay.h>



ES_t Keypad_enuInit(void);
ES_t Keypad_u8GetPressedkey(u8 *Local_u8pPressedKey);
#endif /* HAL_KEYPAD_KEYPAD_INTERFACE_H_ */
