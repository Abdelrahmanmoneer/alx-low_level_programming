#include "variadic_functions.h"

/**
  * print_strings - a function that prints strings, followed by a new line
  * @separator: is the string to be printed between the strings
  * @n: number of string
  * @. . .: string to print
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list bod;
	char *str;
	unsigned int s;

	va_start(bod, n);

	for (s = 0; s < n; s++)
	{
		str = va_arg(bod, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (s != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(bod);
}
