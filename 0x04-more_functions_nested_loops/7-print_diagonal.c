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
	int ch, sp;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ch = 1; ch <= n; ch++)
		{
			for (sp = 1; sp <= ch; sp++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
