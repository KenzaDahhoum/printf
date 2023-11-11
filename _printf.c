#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...) {
    int i, j;
    int counter = 0;
    char c;
    char *s;
    va_list args;
    va_start(args, format);

    for (i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%' && format[i + 1] == 'c') {
            c = va_arg(args, int);
            _putchar(c);
            counter++;
            i++;
        } else if (format[i] == '%' && format[i + 1] == 's') {
            s = va_arg(args, char*);
            for (j = 0; s[j] != '\0'; j++) {
                _putchar(s[j]);
                counter++;
            }
            i++;
        } else if (format[i] == '%' && format[i + 1] == '%') {
            _putchar('%');
            counter++;
            i++;
        }
    }

    va_end(args);
    return counter;
}
