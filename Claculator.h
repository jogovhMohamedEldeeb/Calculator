/*
 * Claculator.h
 *
 *  Created on: 26 Feb 2024
 *      Author: hp
 */
//#include<stdio.h>
#include "MCAL/DIO/DIO_interface.h"
#include "HAL/LCD/LCD_interface.h"
#include "HAL/Keypad/Keypad_interface.h"
#include "SERVICES/STD_TYPES.h"

#define MAX_SIZE 20
#define StackEntry s16


#define DATA_SIZE 15

typedef struct stack
{
    int top;

    StackEntry Array[MAX_SIZE];
}Stack;


void CreateStack (Stack *Ps);
void Push(Stack*Ps,StackEntry element);
void Pop (Stack*Ps);
u8 Stack_Empty (Stack*Ps);
u8 Stack_Full (Stack*Ps);
StackEntry Stack_Top (Stack *ps);
u8 StackSize(Stack *Ps);
void Stack_Disply(Stack *Ps);

void input();
void process();
s16 calc( u8*data);
void reset_data(u8 *data);
void Clear_display();
u8 isOperator(u8 x);
u8 is_digit(u8 x);
