#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>

int print_char(char c);
int print_string(const char *str);
int handle_conversion_specifier(const char *format, va_list args);
int _printf(const char *format, ...);


#endif /* MAIN_H */
