#include "main.h"
/**
  * factorial - a function return the factorial of a number
  * @n: int
  * Return: factorial of the number
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
