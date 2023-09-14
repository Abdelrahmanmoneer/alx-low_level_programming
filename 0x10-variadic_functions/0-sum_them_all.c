#include "variadic_functions.h"
/**
  * sum_them_all - a function that returns
  * the sum of all its parameters
  * @n: number of int
  * @. . .: the int
  *
  * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int a = 0, b = n;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while (b--)
		a += va_arg(ap, int);
	va_end(ap);
	return (a);
}
