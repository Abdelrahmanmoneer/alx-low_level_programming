#include "main.h"
/**
  * print_line - a function that draws a straight line in the terminal
  *
  * @n: input
  *
  * Return: Always 0
*/

void print_line(int n)
{
	int ch;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ch = 1; ch <= n; ch++)
			_putchar('_');
		_putchar('\n');
	}
}
