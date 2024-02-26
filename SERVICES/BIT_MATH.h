/*
 * BIT_MATH.h
 *
 *  Created on: 24 Feb 2024
 *      Author: hp
 */

#ifndef SERVICES_BIT_MATH_H_
#define SERVICES_BIT_MATH_H_

#define SET_BIT(VAR, BIT_NO) (VAR |= (1 << BIT_NO))
#define CLR_BIT(VAR, BIT_NO) (VAR &= ~(1 << BIT_NO))
#define TOG_BIT(VAR, BIT_NO) (VAR ^= (1 << BIT_NO))
#define GET_BIT(VAR, BIT_NO) ((VAR >> BIT_NO) & 1)

#endif /* SERVICES_BIT_MATH_H_ */
