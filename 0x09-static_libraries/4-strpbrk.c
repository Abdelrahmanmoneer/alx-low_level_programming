#include "main.h"
/**
  * _strpbrk - function that searches a string for any of a set of bytes
  * @s: the wanted string
  * @accept: the string we search at
  * Return: the result of searching
*/

char *_strpbrk(char *s, char *accept)
{
	int mon, bod;
	char *b;

	mon = 0;
	while (s[mon] != '\0')
	{
		bod = 0;
		while (accept[bod] != '\0')
		{
			if (s[mon] == accept[bod])
			{
				b = &s[mon];
				return (b);
			}
			bod++;
		}
		mon++;
	}
	return (0);
}
