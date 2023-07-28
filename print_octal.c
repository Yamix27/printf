#include "main.h"

/**
  * print_octal - Prints an octal number (supports 'o' specifier).
  *
  * @num: The unsigned integer to be printed in octal.
  *
  * Return: The number of characters printed.
  */

int print_octal(unsigned int num)
{
	unsigned int temp;
	int count = 0;
	int num_digits = 0;

	if (num == 0)
	{
		count += print_char('0');
		return (count);
	}
	temp = num;
	while (temp)
	{
		temp /= 8;
		num_digits++;
	}
	temp = num;
	while (num_digits)
	{
		unsigned int divisor = 1;
		int i;

		for (i = 1; i < num_digits; i++)
			divisor *= 8;

		unsigned int digit = temp / divisor;

		temp %= divisor;

		count += print_char('0' + digit);
		num_digits--;
	}
	return (count);
}
