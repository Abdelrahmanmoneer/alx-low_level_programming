#include "main.h"
/**
  * print_square - a function that prints a square, followed by a new line
  *
  * @size: is the size of the squar
  *
  * Return: Always 0
*/

void print_square(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
			_putchar('#');
		_putchar('\n');
	}
}
