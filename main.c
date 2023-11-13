#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
 
    int test_val = 123;
    char *test_str = "Hello, World!";
    void *ptr = &test_val;
unsigned int number = 123;

    _printf("Number as octal: %o\n", number);
    _printf("Number as octal with #: %#o\n", number);

 
    _printf("Number as hexadecimal : %x\n", number);
    _printf("Number as hexadecimal with #: %#x\n", number);

  
    _printf("Number as HEXADECIMAL: %X\n", number);
    _printf("Number as HEXADECIMAL with #: %#X\n", number);
    _printf("Test string: %s\n", test_str);

  
    _printf("Test integer: %+d\n", test_val);
_printf("Test integer: %+i\n", test_val);
_printf("Test integer: %d\n", -20);
   
    _printf("Test pointer: %p\n", ptr);
printf("Number with + flag: %+d\n", 42);
   _printf("Number with + flag: %+d\n", -42);
   _printf("Number with + flag: %+d\n", 0);
   
    printf("Standard printf - Test pointer: %p\n", ptr);
    return (0);
}
