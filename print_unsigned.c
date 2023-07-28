#include "main.h"

/**
  * print_unsigned - Prints an unsigned integer.
  *
  * @num: The unsigned integer to be printed.
  *
  * Return: The number of characters printed.
  */

int print_unsigned(unsigned int num)
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
		temp /= 10;
		num_digits++;
	}

	temp = num;
	while (num_digits)
	{
		unsigned int divisor = 1;
		int i;

		for (i = 1; i < num_digits; i++)
			divisor *= 10;

		unsigned int digit = temp / divisor;
		temp %= divisor;

		count += print_char('0' + digit);
		num_digits--;
	}

	return (count);
}
