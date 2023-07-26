#include "main.h"

/**
  * print_string - Print a string.
  *
  * @str: The string to be printed.
  *
  * Return: Number of characters printed.
  */

int print_string(const char *str)
{
	int count = 0;

	while (*str)
	{
		count += putchar(*str);
		str++;
	}

	return (count);
}
