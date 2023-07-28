#include "main.h"

/**
  * print_string - Prints a string.
  *
  * @str: The string to be printed.
  *
  * Return: The number of characters printed.
  */

int print_string(const char *str)
{
	int count = 0;

	while (*str)
	{
		count += print_char(*str);
		str++;
	}

	return (count);
}
