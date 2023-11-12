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
void charToHex(unsigned char c);


#endif /* MAIN.H*/
