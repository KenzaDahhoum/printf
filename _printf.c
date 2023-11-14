#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include "main.h"

/**
 * _printf - Custom implementation of the printf function
 * @format: The format string containing the characters and specifiers
 * Description: This function mimics the standard printf function,
 *              supporting format specifiers like %c, %s, %d, %i, and %%.
 *              It prints to the standard output.
 * Return: Number of characters printed (excluding the null byte)
 */
int print_char(char c) {
	return _putchar(c);
}

int _printf(const char *format, ...)
{
	int i, counter = 0;
	va_list args;
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++) {
		if (format[i] == '%') {
			switch (format[++i]) {
				case 'c': counter += print_char(va_arg(args, int)); break;
				case 's': counter += print_string(va_arg(args, char*)); break;
				case 'S': counter += print_special_string(va_arg(args, char*)); break;
				case '%': counter += _putchar('%'); break;
				case 'd':
				case 'i': counter += print_int(va_arg(args, int)); break;
				case 'b': counter += print_binary(va_arg(args, unsigned int)); break;
				case 'u': counter += print_unsigned(va_arg(args, unsigned int)); break;
				case 'o': counter += print_octal(va_arg(args, unsigned int)); break;
				case 'x': counter += print_hexadecimal(va_arg(args, unsigned int), 0); break;
				case 'X': counter += print_hexadecimal(va_arg(args, unsigned int), 1); break;
				case 'p': counter += print_pointer(va_arg(args, void*)); break;
				case 'r': counter += print_reversed_string(va_arg(args, char*)); break;
				default:  counter += _putchar('%'); counter += _putchar(format[i]); break;
			}
		} else {
			counter += _putchar(format[i]);
		}
	}

	va_end(args);
	return counter;
}

