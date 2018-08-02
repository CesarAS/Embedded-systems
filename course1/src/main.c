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
 * @file main.c
 * @brief Main entry point to the final assesment
 *
 * This main function will call a different function depending on a 
 * compile time switch to start different codes
 *
 * @author Cesar Alfaro
 * @date July 10 2018
 *
 */



//#include "platform.h"
//#include "memory.h"
#include "course1.h"

int main () {
	#ifdef COURSE1
  	course1();
  	return 1;
	#endif
	return 0;
}

