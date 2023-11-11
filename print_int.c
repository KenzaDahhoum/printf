#include "main.h"

int print_int(int di) {
    char str[30];
    int j, count = 0;
    _itoa(di, str);
    for (j = 0; str[j] != '\0'; j++) {
        _putchar(str[j]);
        count++;
    }
    return count;
}
