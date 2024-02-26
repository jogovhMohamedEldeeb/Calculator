/*
 * LCD_private.h
 *
 *  Created on: 24 Feb 2024
 *      Author: hp
 */

#ifndef HAL_LCD_LCD_PRIVATE_H_
#define HAL_LCD_LCD_PRIVATE_H_

#include "../../SERVICES/STD_TYPES.h"


#define  EIGHT_BIT  9
#define  FOUR_BIT   10

//local periodic function prototype

static inline void LCD_invidSendCommend(u8 Copy_u8Command);

static void LCD_vidLatch(u8 Copy_u8Data);

#endif /* HAL_LCD_LCD_PRIVATE_H_ */
