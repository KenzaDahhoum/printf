#include "main.h"

int decimalToBinary(unsigned int n)
{
    int binaryNum[32];
    int j, i = 0;
    int count = 0;

    if (n == 0) {
        _putchar('0');
        return (0);
    }
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (j = i - 1; j >= 0; j--) {
        _putchar(binaryNum[j] + '0');
 count++;
      }
    return (count);
}
