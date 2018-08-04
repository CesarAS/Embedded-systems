
/**
 * @file data.c 
 * @brief Contatins two functions to do ASCII to integer conversion and vice versa
 *
 * @author Cesar Alfaro
 * @date August 2, 2018
 *
 */

#include "data.h"
#include "memory.h"

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base){
    uint32_t digit, i = 0;
    uint32_t original_data = data;
    //uint8_t *original_ptr = ptr;
    
//Start writing the NULL (0 in ASCII table) at the end
    *ptr = 0;
    ptr++;
    i++;

//This converts all the digits to ASCII, starting by the less valuable digit
    do {
        digit = data % base;
        if (digit<10)
            *ptr = digit + 48;
        else 
            *ptr = digit + 55;
        ptr++;
        i++;
        data = data / base;
    } while (data>0);

// This will add the sign if needed
    if (original_data<0) {   
        *ptr = '-';
        ptr++;
        i++;
    }

//Finally the order of the bytes is reversed
    ptr = my_reverse (ptr-i,i);

    return i;
}


int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base){
    bool negative = false;
    int32_t result = 0;
    if (*ptr == '-') {
        negative = true;
        ptr++;
        digits--;
    }
    
    do{
        if (*ptr >= '0' && *ptr <= '9')
            result += (*ptr - '0') * power(base,digits-2);
        else
            result += (*ptr - 55) * power(base,digits-2);
        ptr++;
        digits--;
    } while (digits>1);

    if (negative)
        result = -result;
    
    return result;
}

int32_t power (int32_t base, uint32_t exp){
    int32_t pow = base;
    if (exp == 0)
        return 1;
    else {
        while (exp>1){
            pow *= base;
            exp--;
        }
        return pow;
    }
}