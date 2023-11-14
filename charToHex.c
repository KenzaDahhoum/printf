#include "main.h"
int  charToHex(unsigned char c) 
{
    unsigned char higher_nibble = c >> 4;
    unsigned char lower_nibble = c & 0xF;
    
    if (higher_nibble < 10) {

	    _putchar(higher_nibble + '0');
    } else {
        _putchar(higher_nibble - 10 + 'A');
    }
    if (lower_nibble < 10) {
        _putchar(lower_nibble + '0');
    } else {
        _putchar(lower_nibble - 10 + 'A');
    }
    return (2);
}
