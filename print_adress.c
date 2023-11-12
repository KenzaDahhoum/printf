#include <stdint.h>
#include <stddef.h>
#include "main.h"

char nibbleToHexChar(uintptr_t nibble) {
    if (nibble < 10) {
        return '0' + nibble;
    } else {
        return 'A' + (nibble - 10);
    }
}
int count = 0;
int print_address(void *ptr) {
    uintptr_t address = (uintptr_t)ptr;
    const size_t numNibbles = sizeof(uintptr_t) *2;
    int i;

    _putchar('0');
    _putchar('x');
    for (i = numNibbles - 1; i >= 0; i--) {
        char hexChar = nibbleToHexChar((address >> (i * 4)) & 0xF);
        _putchar(hexChar);
	count ++;
    }
    return (count);
}
