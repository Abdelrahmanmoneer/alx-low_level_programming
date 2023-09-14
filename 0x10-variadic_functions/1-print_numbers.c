#include "variadic_functions.h"
/**
  * print_numbers -  a function that prints numbers
  * followed by a new line
  * @separator : is the string to be printed between numbers
  * @n: the number of int
  * @. . .:int to print
  *
  * Return: int
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int bod;

	va_start(ap, n);

	for (bod = 0; bod < n; bod++)
	{
		printf("%d", va_arg(ap, int));

		if (bod != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}


