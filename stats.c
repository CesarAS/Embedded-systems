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
 * @file stats.c 
 * @brief Code for array statistics calculation
 *
 * This implements 7 functions to do several statistic calculations and print the results
 *
 * @author Cesar Alfaro
 * @date 20/04/2018
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */

void print_statistics (unsigned char* data, unsigned int length){
	printf("Minimum value = %d", find_minimum(data,length));
	printf("Maximum value = %d", find_maximum(data,length));
	printf("Mean value = %d", find_mean(data,length));
	printf("Median value = %d", find_median(data,length));
}


void print_array (unsigned char* data, unsigned int length){
	unsigned char i;
	for (i=0;i<length;i++){
		printf ("Array[%d] = %d\n", i, data[i]);
	}
}

unsigned char find_median (unsigned char* data, unsigned int length){

}

float find_mean (unsigned char* data, unsigned int length){
	unsigned char i, sum = 0;
	float mean;
	for (i=0;i<length;i++){
		sum = sum + data[i];
	}
	mean = sum/length;
	return mean;
}

unsigned char find_maximum (unsigned char* data, unsigned int length){
	unsigned char i, max;
	max = data[0];
	for (i=0;i<length;i++){
		if (data[i]>max)
			max = data[i];
	}
	return max;
}

unsigned char find_minimum (unsigned char* data, unsigned int length){
	unsigned char i, min;
	min = data[0];
	for (i=0;i<length;i++){
		if (data[i]<min)
			min = data[i];
	}
	return min;
}

void sort_array (unsigned char* data, unsigned int length){
	unsigned char i, j, new_index, equal; 
	unsigned char sorted_array[length];
	for (i=0;i<length;i++){
		new_index = 0;
		equal = 0;
		for (j=0;j<length;j++){
			if(data[i]<data[j])
				new_index++;
			else if (data[i] == data[j])
				equal++;
		}
		sorted_array[new_index] = data[i];
	}