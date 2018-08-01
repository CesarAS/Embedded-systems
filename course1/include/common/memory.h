/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file memory.h
 * @brief Abstraction of memory read and write operations
 *
 * This header file provides an abstraction of reading and
 * writing to memory via function calls. 
 *
 * @author Alex Fosdick
 * @date April 1 2017
 *
 */
#ifndef __MEMORY_H__
#define __MEMORY_H__

/**
 * @brief Sets a value of a data array 
 *
 * Given a pointer to a char data set, this will set a provided
 * index into that data set to the value provided.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 * @param value value to write the the locaiton
 *
 * @return void.
 */
void set_value(char * ptr, unsigned int index, char value);

/**
 * @brief Clear a value of a data array 
 *
 * Given a pointer to a char data set, this will clear a provided
 * index into that data set to the value zero.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 *
 * @return void.
 */
void clear_value(char * ptr, unsigned int index);

/**
 * @brief Returns a value of a data array 
 *
 * Given a pointer to a char data set, this will read the provided
 * index into that data set and return the value.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 *
 * @return Value to be read.
 */
char get_value(char * ptr, unsigned int index);

/**
 * @brief Sets data array elements to a value
 *
 * Given a pointer to a char data set, this will set a number of elements
 * from a provided data array to the given value. The length is determined
 * by the provided size parameter.
 *
 * @param ptr Pointer to data array
 * @param value value to write the the locaiton
 * @param size Number of elements to set to value
 *
 * @return void.
 */
void set_all(char * ptr, char value, unsigned int size);

/**
 * @brief Clears elements in a data array
 *
 * Given a pointer to a char data set, this will set a clear a number
 * of elements given the size provided. Clear means to set to zero. 
 *
 * @param ptr Pointer to data array
 * @param size Number of elements to set to zero
 *
 * @return void.
 */
void clear_all(char * ptr, unsigned int size);

/**
 * @brief Moves memory contents
 *
 * Given a source pointer and a destination pointer, moves a number
 * of elements given between them
 *
 * @param src Source pointer to move
 * @param dst Destination pointer to move
 * @param length Number of elements to move
 *
 * @return pointer to destionation.
 */

uint8_t * my_memmove(uint8_t * src, uint8_t * dst, size_t length);

/**
 * @brief Copy memory contents
 *
 * Given a source pointer and a destination pointer, copies a number
 * of elements given between them
 *
 * @param src Source pointer to copy
 * @param dst Destination pointer to copy
 * @param length Number of elements to copy
 *
 * @return pointer to destionation.
 */

uint8_t * my_memcopy(uint8_t * src, uint8_t * dst, size_t length);

/**
 * @brief Sets memory position
 *
 * Given a source pointer sets to a given value a number
 * of elements given
 *
 * @param src Source pointer to set values
 * @param length Number of memory positions to set
 * @param value Content to be set
 *
 * @return pointer to source.
 */

uint8_t * my_memset(uint8_t * src, size_t length, uint8_t value);

/**
 * @brief Sets memory position to zero
 *
 * Given a source pointer sets to zero a number
 * of elements given
 *
 * @param src Source pointer to set values
 * @param length Number of memory positions to set
 *
 * @return pointer to source.
 */

uint8_t * my_memzero(uint8_t * src, size_t length);

/**
 * @brief Reverses bytes order in memory
 *
 * Given a source pointer reverses the order of
 * a number of given elements
 *
 * @param src Source pointer to set values
 * @param length Number of memory positions to set
 *
 * @return pointer to source.
 */

uint8_t * my_reverse(uint8_t * src, size_t length);

/**
 * @brief Allocates words in dynamic memory
 *
 * Given a number of words, allocates
 * them in dynamic memory
 *
 * @param length Number of memory words to reserve
 *
 * @return pointer to memory if succeded and NULL pointer if fails.
 */

int32_t * reserve_words(size_t length);

/**
 * @brief Frees a dynamic memory allocation
 *
 * Given a  source pointer, frees a dynamic memory allocation
 *
 * @param src pointer to be free
 *
 * @return void
 */

void free_words(int32_t * src);

#endif /* __MEMORY_H__ */
