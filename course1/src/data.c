
/**
 * @file data.c 
 * @brief Contatins two functions to do ASCII to integer conversion and vice versa
 *
 * @author Cesar Alfaro
 * @date August 2, 2018
 *
 */

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base){
    uint32_t digit, i = 0;
    uint32_t original = data;
    
//Start writing the NULL at the end
    *ptr = NULL;
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
    if (data<0) {   
        *ptr = 45;
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
    if (*ptr = '-') {
        negative = true;
        ptr++;
        digits--;
    }
    while (digits--) {
        if (*ptr >= '0' && *ptr <= '9')
            result += (*ptr - '0') * pow(base, digits-1);
        else
            result += (*ptr - 55) * pow(base, digits-1);
    }
    if (negative)
        result = -result;
    return result;
}
