#include "main.h"
/**
  * _sqrt_recursion - a function that returns
  * the natural square root of a number
  * @n: input
  * @bod: input
  * Return: int
*/

int sqr(int n, int bod);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
  * sqr - squar root
  * @n:input
  * @bod: input
  * Return: int
*/

int sqr(int n, int bod)
{
	if (bod * bod == n)
	{
		return (bod);
	}
	else if (bod * bod < n)
	{
		return (sqr(n, bod + 1));
	}
	else
		return (-1);
}
