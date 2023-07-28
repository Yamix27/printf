#include "main.h"

/**
  * print_hexadecimal - Prints a hexadecimal number (supports 'x' and 'X' specifiers).
  *
  * @num: The unsigned integer to be printed in hexadecimal.
  * @uppercase: 1 for uppercase (X), 0 for lowercase (x).
  *
  * Return: The number of characters printed.
  */

int print_hexadecimal(unsigned int num, int uppercase)
{
	int count = 0;
	int num_digits = 0;
	char hex_chars[] = "0123456789abcdef";
	char hex_chars_upper[] = "0123456789ABCDEF";
	char *hex_array = uppercase ? hex_chars_upper : hex_chars;
	unsigned int temp;

	if (num == 0)
	{
		count += print_char('0');
		return (count);
	}

	temp = num;
	while (temp)
	{
		temp /= 16;
		num_digits++;
	}

	temp = num;
	while (num_digits)
	{
		unsigned int divisor = 1;
		int i;

		for (i = 1; i < num_digits; i++)
			divisor *= 16;

		unsigned int digit = temp / divisor;
		temp %= divisor;

		count += print_char(hex_array[digit]);
		num_digits--;
	}

	return (count);
}
