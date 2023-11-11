#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
/**
 * _printf - Custom printf function to format and print data
 * @format: Format string containing the characters and specifiers
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int counter = 0;
	int i;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				char c = va_arg(args, int);

				counter += print_char(c);
				i++;
			}
			else if (format[i + 1] == 's')
			{
				char *s = va_arg(args, char*);

				counter += print_string(s);
				i++;
			}
			else if (format[i + 1] == '%')
			{
				counter += print_percent();
				i++;
			}
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				int di = va_arg(args, int);

				counter += print_int(di);
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			counter++;
		}
	}

	va_end(args);
	return (counter);
}
