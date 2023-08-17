#include "main.h"
/**
  * print_diagonal - a function that draws a diagonal line on the terminal
  *
  * @n: input
  *
  * Return: Always 0
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int j, i;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < ch; j++)
			{
				if (j == i)
				_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
