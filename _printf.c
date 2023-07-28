#include "main.h"

/**
 * _printf - Custom implementation of printf.
 *
 * @format: The format string.
 *
 * Return: The number of characters printed.
 */

unsigned int _printf(const char *format, ...)
{
	unsigned int count = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
			count += print_char(*format++);
		else
		{
			format++;
			count += parse_format(format, &args);
			format++;
		}
	}
	va_end(args);
	return (count);
}

/**
 * parse_format - Parses and handles the format specifier.
 *
 * @format: Pointer to the format specifier.
 * @args: The argument list.
 *
 * Return: The number of characters printed for this specifier.
 */
unsigned int parse_format(const char *format, va_list *args)
{
	unsigned int count = 0;
	char c = *format;

	switch (c)
	{
		case 'c':
			count += print_char((char)va_arg(*args, int));
			break;
		case 's':
			count += print_string(va_arg(*args, const char *));
			break;
		case '%':
			count += print_char('%');
			break;
		case 'd':
		case 'i':
			count += print_integer(va_arg(*args, int));
			break;
		case 'u':
			count += print_unsigned(va_arg(*args, unsigned int));
			break;
		case 'o':
			count += print_octal(va_arg(*args, unsigned int));
			break;
		case 'x':
			count += print_hex(va_arg(*args, unsigned int), 0);
			break;
		case 'X':
			count += print_hex(va_arg(*args, unsigned int), 1);
			break;
		case 'p':
			count += print_pointer(va_arg(*args, void *));
			break;
		default:
			count += print_char('%');
			count += print_char(c);
	}

	return (count);
}
