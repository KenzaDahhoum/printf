#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @u: unsigned integer to print
 * Return: number of characters printed
 */
int print_unsigned(unsigned int u) {
    char str[30];
    unsigned_itoa(u, str);
    return print_string(str);
}

/**
 * print_string - prints a string
 * @s: string to print
 * Return: number of characters printed
 */
int print_string(char *s) {
    int i, count = 0;
    for (i = 0; s[i] != '\0'; i++) {
        _putchar(s[i]);
        count++;
    }
    return count;
}

/**
 * print_special_string - prints a string, converting non-printable
 * characters to their ASCII hexadecimal value
 * @s: string to print
 * Return: number of characters printed
 */
int print_special_string(char *s) {
    int i, count = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if ((s[i] > 0 && s[i] < 32) || s[i] >= 127) {
            _putchar('\\');
            _putchar('x');
            count += 2 + charToHex(s[i]);
        } else {
            _putchar(s[i]);
            count++;
        }
    }
    return count;
}

/**
 * print_int - prints an integer
 * @di: integer to print
 * Return: number of characters printed
 */
int print_int(int di) {
    char str[30];
    _itoa(di, str);
    return print_string(str);
}

/**
 * print_pointer - prints a pointer address
 * @p: pointer to print
 * Return: number of characters printed
 */
int print_pointer(void *p) {
    return print_address(p);
}

