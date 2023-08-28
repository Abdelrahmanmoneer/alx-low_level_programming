#include "main.h"
/**
  * print_chessboard - a function that prints the chessboard
  * @a: input
  * Return: nothing
*/

void print_chessboard(char (*a)[8])
{
	int boss, body;

	for (boss = 0; boss < 8; boss++)
	{
		for (body = 0; body < 8; body++)
			_putchar(a[boss][body]);
		_putchar('\n');
	}
}

