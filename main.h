#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
int print_char(char c);
int print_string(char *s);
int print_int(int di);
int print_percent();
int _printf(const char *format, ...);
int _putchar(char c);
void _itoa(int num, char *str);

#endif /* MAIN.H*/
