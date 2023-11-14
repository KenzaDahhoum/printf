#include "main.h"

int print_octal(unsigned int o) {
    return decimalToOctal(o);
}

int print_hexadecimal(unsigned int x, int uppercase) {
    if (uppercase) {
        return decimalToHexadecimalX(x);
    } else {
        return decimalToHexadecimalx(x);
    }
}

int print_binary(unsigned int bi) {
    return decimalToBinary(bi);
}


int print_reversed_string(char *s) {
    int length = 0;
    int i, count = 0;

    while (s[length] != '\0') {
        length++;
    }

    
    for (i = 0; i < length / 2; i++) {
        
        char temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }

    
    for (i = 0; i < length; i++) {
        _putchar(s[i]);
        count++;
    }

    return count; 
}
