#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#define BUFFER_SIZE 1024
/**
 * _printf - Custom implementation of the printf function
 * @format: The format string containing the characters and specifiers
 * Description: This function mimics the standard printf function,
 *              supporting format specifiers like %c, %s, %d, %i, and %%.
 *              It prints to the standard output.
 * Return: Number of characters printed (excluding the null byte)
 */
char buffer[BUFFER_SIZE];
    int buffer_index = 0;

     void flush_buffer() {
        for (int k = 0; k < buffer_index; k++) {
            _putchar(buffer[k]);
        }
        buffer_index = 0;
    }
void add_to_buffer(char ch) {
        if (buffer_index == BUFFER_SIZE) {
            flush_buffer();
        }
        buffer[buffer_index++] = ch;
        counter++;
    }

int _printf(const char *format, ...)
{
	int i, j;
	int counter = 0;
	char c;
	char *s;
	char str[30];
	int di;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			c = va_arg(args, int);
			 add_to_buffer(c);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			s = va_arg(args, char*);
			for (j = 0; s[j] != '\0'; j++)
			{
				 add_to_buffer(s[j]);
			}
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			 add_to_buffer('%');
			i++;
		}
		else if ((format[i] == '%' && format[i + 1] == 'd')
				|| (format[i] == '%' && format[i + 1] == 'i'))
		{
			di = va_arg(args, int);
			_itoa(di, str);
			for (j = 0; str[j] != '\0'; j++)
			{
				 add_to_buffer(str[j]);
			}
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'b')
		{
			unsigned int bi = va_arg(args, unsigned int);

			counter += decimalToBinary(bi);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'u')
		{
			unsigned int u = va_arg(args, unsigned int);

				unsigned_itoa(u, str);
				for (j = 0; str[j] != '\0'; j++)
				{
					 add_to_buffer(str[j]);
				}
				i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'o')
		{
			unsigned int o = va_arg(args, unsigned int);

			counter+= decimalToOctal(o);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'x')
		{
			unsigned int x = va_arg(args, unsigned int);
			counter+= decimalToHexadecimalx(x);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'X')
		{
			unsigned int X = va_arg(args, unsigned int);
                        counter+= decimalToHexadecimalX(X);
                        i++;
		}
		else
		{
			 add_to_buffer(format[i]);
		}
	}
flush_buffer(); 
	va_end(args);
	return (counter);
}
