#include "main.h"

/**
  * handle_conversion_specifier - Handle conversion specifier %c, %s, and %%.
  *
  * @format: The format string, pointing to the conversion specifier.
  * @args: The variable argument list.
  *
  * Return: Number of characters printed.
  */

int handle_conversion_specifier(const char *format, va_list args)
{
	int count = 0;
	char specifier = *format;

	switch (specifier)
	{
		case 'c':
			count += print_char(va_arg(args, int));
			break;
		case 's':
			count += print_string(va_arg(args, const char *));
			break;
		case '%':
			count += print_char('%');
			break;
		default:
			count += print_char('%');
			count += print_char(specifier);
		break;
	}

	return (count);
}
