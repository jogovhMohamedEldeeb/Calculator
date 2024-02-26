/*
 * LCD_interface.h
 *
 *  Created on: 24 Feb 2024
 *      Author: hp
 */

#ifndef HAL_LCD_LCD_INTERFACE_H_
#define HAL_LCD_LCD_INTERFACE_H_

#include "../../MCAL/DIO/DIO_interface.h"
#include "../../SERVICES/BIT_MATH.h"
#include "../../SERVICES/STD_TYPES.h"
#include "LCD_config.h"
#include "LCD_private.h"
#include <util/delay.h>


ES_t LCD_enuInit(void);

ES_t LCD_enuDisplayChar(u8 Copy_u8Data);

ES_t LCD_enuSendCommand(u8 Copy_u8Command);


ES_t LCD_enuDisplayExtraChar(u8* Copy_pu8Character,u8 Copy_u8CharNum ,u8 Copy_u8Position , u8 Copy_u8Entry);


ES_t LCD_enuDisplayIntegerNum(s32 Copy_s32Num);

#endif /* HAL_LCD_LCD_INTERFACE_H_ */
