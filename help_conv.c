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
