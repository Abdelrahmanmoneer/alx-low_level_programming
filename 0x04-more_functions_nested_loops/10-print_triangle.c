#include "main.h"
/**
  * print_triangle -  a function that prints a triangle, followed by a new line
  *
  * @size: the size of the triangle
  *
  * Return: Always 0
*/

void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = 1; y <= size; y++)
		{
			for (x = size - y; x > 0; x--)
			{
				_putchar(' ');
			}
			for (x = 0; x < y; x++)
			{
				_putchar('#');
			}
			if (y == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}

