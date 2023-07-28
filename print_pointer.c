#include "main.h"

/**
  * print_pointer - Prints a pointer (supports 'p' specifier).
  *
  * @ptr: The pointer to be printed.
  *
  * Return: The number of characters printed.
  */

int print_pointer(void *ptr)
{
	printf("%p", ptr);

	return (sizeof(void *) * 2);
}
