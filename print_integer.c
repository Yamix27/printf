#include "main.h"

/**
  * print_integer - Prints an integer (supports 'd' and 'i' specifiers).
  *
  * @num: The integer to be printed.
  *
  * Return: The number of characters printed.
  */

int print_integer(int num)
{
	int tmp;
	int count = 0;
	int num_digits = 0;

	if (num == 0)
	{
		count += print_char('0');
		return (count);
	}

	if (num < 0)
	{
		count += print_char('-');
		num = -num;
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
		int i, digit;
		int divisor = 1;

		for (i = 1; i < num_digits; i++)
			divisor *= 10;

		digit = temp / divisor;
		temp %= divisor;

		count += print_char('0' + digit);
		num_digits--;
	}

	return (count);
}
