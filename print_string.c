#include "main.h"

int print_string(char *s)
{
    int j, count = 0;
    for (j = 0; s[j] != '\0'; j++) {
        _putchar(s[j]);
        count++;
    }
    return count;
}
