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
	int count = 0;
	char c;
	va_list args;

	va_start(args, format);

	while ((c = *format++))
	{
		if (c != '%')
		{
			count += print_char(c);
		}
		else
		{
			c = *format++;
			switch (c)
			{
				case 'c':
					char ch = (char)va_arg(args, int);

					count += print_char(ch);
					break;
				case 's':
					const char *str = va_arg(args, const char*);

					count += print_string(str);
					break;
				case '%':
					count += print_char('%');
					break;
				case 'd':
				case 'i':
					int num = va_arg(args, int);

					count += print_integer(num);
					break;
				case 'u':
					unsigned int num = va_arg(args, unsigned int);

					count += print_unsigned(num);
					break;
				case 'o':
					unsigned int num = va_arg(args, unsigned int);

					count += print_octal(num);
					break;
				case 'x':
				case 'X':
					unsigned int num = va_arg(args, unsigned int);
					int uppercase = (c == 'X') ? 1 : 0;

					count += print_hexadecimal(num, uppercase);
					break;
				case 'p':
					void *ptr = va_arg(args, void*);

					count += print_pointer(ptr);
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
