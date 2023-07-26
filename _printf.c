#include "main.h"

/**
  * _printf - Custom printf function.
  *
  * @format: The format string.
  * @...: Variable arguments (if any) based on format specifiers.
  *
  * Return: Number of characters printed.
  */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += handle_conversion_specifier(format, args);
		}
		else
		{
			count += print_char(*format);
		}

		format++;
	}

	va_end(args);

	return (count);
}
