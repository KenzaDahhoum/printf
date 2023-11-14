#include <stdint.h>
#include <stddef.h>
#include "main.h"

char nibbleToHexChar(uintptr_t nibble) {
    if (nibble < 10) {
        return '0' + nibble;
    } else {
        return 'a' + (nibble - 10);
    }
}

int print_address(void *ptr) {
    uintptr_t address = (uintptr_t)ptr;
    const size_t numNibbles = sizeof(uintptr_t) * 2;
    int i, count = 0, leadingZero = 1;

    _putchar('0');
    _putchar('x');
    count += 2;

    for (i = numNibbles - 1; i >= 0; i--) {
        char hexChar = nibbleToHexChar((address >> (i * 4)) & 0xF);
        if (leadingZero && hexChar == '0' && i != 0) {
            continue;
        }
        leadingZero = 0;
        _putchar(hexChar);
        count++;
    }
    return count;
}

