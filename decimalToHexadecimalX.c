#include "main.h"
int decimalToHexadecimalX(unsigned int n) {
    int hexaNum[32];
    int j, i = 0;
    int count = 0;

    if (n == 0) {
        _putchar('0');
        return 1;
    }
    while (n > 0) {
        hexaNum[i] = n % 16;
        n = n / 16;
        i++;
    }
    for (j = i - 1; j >= 0; j--) {
        if (hexaNum[j] < 10) {
            _putchar(hexaNum[j] + '0');
        } else {
            _putchar(hexaNum[j] - 10 + 'A');
        }
        count++;
    }   
    return count;    
}
