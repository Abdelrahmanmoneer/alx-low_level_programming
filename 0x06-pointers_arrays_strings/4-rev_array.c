#include "main.h"
/**
  * reverse_array - a function that reverses
  * the content of an array of integers
  * @a: input
  * @n: the number of elements to swap
  *
  * Return: nothing.
*/

void reverse_array(int *a, int n)
{
	int d, j, c;

	for (d = 0, j = (n - 1); d < j; d++, j--)
	{
		c = a[d];
		a[d] = a[j];
		a[j] = c;
	}
}
