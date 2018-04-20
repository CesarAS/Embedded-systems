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
 * @file <stats.h> 
 * @brief <This is the header file for stats.c >
 *
 * <This included the needed function prototipes for doing statistics operations over an array>
 *
 * @author <Cesar Alfaro>
 * @date <19/04/2018>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints statistics of array
 *
 * <This function takes an input array to calculate and print its maximum value, minimum value, median and mean>
 *
 * @param <data> <array to do calculations on>
 * @param <length> <length of the given array>
 *
 * @return void
 */

void print_statistics (unsigned char* data, unsigned int length);



/**
 * @brief <Prints an array>
 *
 * <This function prints on screen a given input array>
 *
 * @param <data> <array to do calculations on>
 * @param <length> <length of the given array>
 *
 * @return void
 */

void print_array (unsigned char* data, unsigned int length);



/**
 * @brief <Calculates median>
 *
 * <This function obtains the median value of a given input array>
 *
 * @param <data> <array to do calculations on>
 * @param <length> <length of the given array>
 *
 * @return median value of the array
 */

unsigned char find_median (unsigned char* data, unsigned int length);



/**
 * @brief <Calculates mean>
 *
 * <This function obtains the mean value of a given input array>
 *
 * @param <data> <array to do calculations on>
 * @param <length> <length of the given array>
 *
 * @return mean value of the array
 */

float find_mean (unsigned char* data, unsigned int length);



/**
 * @brief <Calculates maximum value>
 *
 * <This function obtains the maximum value of a given input array>
 *
 * @param <data> <array to do calculations on>
 * @param <length> <length of the given array>
 *
 * @return maximum value of the array
 */

unsigned char find_maximum (unsigned char* data, unsigned int length);



/**
 * @brief <Calculates minimum value>
 *
 * <This function obtains the minimum value of a given input array>
 *
 * @param <data> <array to do calculations on>
 * @param <length> <length of the given array>
 *
 * @return minimum value of the array
 */

unsigned char find_minimum (unsigned char* data, unsigned int length);



/**
 * @brief <Sorts array>
 *
 * <This function sorts the values inside a given array from the biggest one to the smallest one>
 *
 * @param <data> <array to do calculations on>
 * @param <length> <length of the given array>
 *
 * @return void
 */

void sort_array (unsigned char* data, unsigned int length);

#endif /* __STATS_H__ */
