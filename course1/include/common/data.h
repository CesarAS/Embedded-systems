
 /*****************************************************************************/
/**
 * @file data.h
 * @brief Provides functions to make data conversion
 *
 * This header file provides a couple of funtions to do integer
 * to ASCII conversions and vice versa
 *
 * @author César Alfaro
 * @date August 1 2018
 *
 */

#ifndef __DATA_H__
#define __DATA_H__

#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
/**
 * @brief Makes integer to ASCII conversion
 *
 * Given an integer data to convert and a base in which is written
 * converts to ASCII and passes the data to a pointer
 *
 * @param data Integer to be converted
 * @param ptr Pointer to copy the result
 * @param base The base in which the data is written, from 2 to 16
 *
 * @return length of the converted data.
 */

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);

/**
 * @brief Makes ASCII to integer conversion
 *
 * Given a an ASCII data to convert and a base in which is written
 * converts to integer and passes the data to a pointer
 *
 * @param ptr Pointer to the ASCII to be converted
 * @param digits Number of ASCII digits to convert
 * @param base The base in which the data is written, from 2 to 16
 *
 * @return converted value.
 */

int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);


#endif /* __DATA_H__ */