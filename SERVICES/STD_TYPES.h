/*
 * STD_TYPES.h
 *
 *  Created on: 24 Feb 2024
 *      Author: hp
 */

#ifndef SERVICES_STD_TYPES_H_
#define SERVICES_STD_TYPES_H_

typedef signed char s8;
typedef signed short s16;
typedef signed long s32;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef float f32;
typedef double f64;


typedef enum
{
	ES_NOK,
	ES_OK,
	ES_NULL_POINTER,
	ES_OUT_OF_RANGE
}ES_t;

#endif /* SERVICES_STD_TYPES_H_ */
