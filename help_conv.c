#include "main.h"

/**
 * print_octal - converts an unsigned integer to octal and prints it
 * @o: unsigned integer to convert
 * Return: number of characters printed
 */
int print_octal(unsigned int o) {
    return decimalToOctal(o);
}

/**
 * print_hexadecimal - converts an unsigned integer to hexadecimal (in uppercase or lowercase) and prints it
 * @x: unsigned integer to convert
 * @uppercase: flag to determine if the hexadecimal should be printed in uppercase
 * Return: number of characters printed
 */
int print_hexadecimal(unsigned int x, int uppercase) {
    if (uppercase) {
        return decimalToHexadecimalX(x);
    } else {
        return decimalToHexadecimalx(x);
    }
}

/**
 * print_binary - converts an unsigned integer to binary and prints it
 * @bi: unsigned integer to convert
 * Return: number of characters printed
 */
int print_binary(unsigned int bi) {
    return decimalToBinary(bi);
}

/**
 * print_reversed_string - reverses a string and prints it
 * @s: string to reverse and print
 * Return: number of characters printed
 */
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

