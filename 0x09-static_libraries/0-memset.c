#include "main.h"
/**
  * _memset -  a function that fills memory with a constant byte
  * @s: first input
  * @b: input2
  * @n: input3
  * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mon;

	for (mon = 0; n > 0; mon++, n--)
	{
		s[mon] = b;
	}
	return (s);
}
