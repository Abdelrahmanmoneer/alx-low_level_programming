#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - a function that prints the sum of
  * the two diagonals of a square matrix of integers
  * @a: input
  * @size : the size
*/

void print_diagsums(int *a, int size)
{
	int bod, b1 = 0, b2 = 0;

	for (bod = 0; bod < size; bod++)
	{
		b1 += a[bod];
		b2 += a[size - bod - 1];
		a += size;
	}
	printf("%d, ", b1);
	printf("%d\n", b2);
}

