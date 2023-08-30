#include "main.h"
#include <stdio.h>
/**
  * is_prime_number - check the prime number
  * @n: input
  * @bos: input
  * Return: 1 or 0
*/

int check(int n, int bos);
int is_prime_number(int n)
{
	return (check(n, 2));
}

/**
  * check - check all numbers
  * @n: input
  * @bos: input
  * Return: 1 or 0
*/

int check(int n, int bos)
{
	if (bos >= n && n >= 2)
	{
		return (1);
	}
	else if (n % bos == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (check(n, bos + 1));
}
