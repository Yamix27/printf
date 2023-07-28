#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>


int _printf(const char *format, ...);

/****************** FUNCTIONS ******************/
int print_char(char c);
int print_string(const char *str);
int print_integer(int num);
int print_unsigned(unsigned int num);
int print_octal(unsigned int num);
int print_hexadecimal(unsigned int num, int uppercase);
int print_pointer(void *ptr);


#endif /* PRINTF_H */
