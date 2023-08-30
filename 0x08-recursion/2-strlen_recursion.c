#include "main.h"
/**
  * _strlen_recursion - a function that returns the length of a string
  * @s: input
  * Return: int
*/

int _strlen_recursion(char *s)
{
	int bod = 0;

	if (*s > '\0')
	{
		bod += _strlen_recursion(s + 1) + 1;
	}
	return (bod);
}
