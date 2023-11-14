#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
void _itoa(int num, char *str);
int decimalToBinary(unsigned int n);
void unsigned_itoa(unsigned int num, char *str);
int decimalToOctal(unsigned int n);
int decimalToHexadecimalx(unsigned int n);
int decimalToHexadecimalX(unsigned int n);
int charToHex(unsigned char c);
int print_address(void *ptr);

/*HELPER FUNCTIONS */
int print_char(char c);
int print_string(char *s);
int print_special_string(char *s);
int print_int(int di);
int print_binary(unsigned int bi);
int print_unsigned(unsigned int u);
int print_octal(unsigned int o);
int print_hexadecimal(unsigned int x, int uppercase);
int print_pointer(void *p);


/* */

#endif /* MAIN.H*/
