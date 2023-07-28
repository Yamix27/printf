#include "main.h"

/**
  * _printf - Custom implementation of printf.
  *
  * @format: The format string.
  *
  * Return: The number of characters printed.
  */

int _printf(const char *format, ...)
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
			char c = *format++;

			switch (c)
			{
				case 'c':
					count += print_char((char)va_arg(args, int));
					break;
				case 's':
					count += print_string(va_arg(args, const char*));
					break;
				case '%':
					count += print_char('%');
					break;
				case 'd':
				case 'i':
				case 'u':
				case 'o':
				case 'x':
				case 'X':
					if (c == 'u' || c == 'o' || c == 'x' || c == 'X')
						count += print_unsigned(va_arg(args, unsigned int));
					else
						count += print_integer(va_arg(args, int));
					break;
				case 'p':
					count += print_pointer(va_arg(args, void*));
					break;
				default:
					count += print_char('%');
					count += print_char(c);
			}
		}
	}
	va_end(args);
	return (count);
}
