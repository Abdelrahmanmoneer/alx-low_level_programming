#include "main.h"
/**
  * _strspn - Write a function that gets the length of a prefix substring
  * @accept: the bytes
  * @s: number of string
  * Return: the number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bod, mon;

	for (bod = 0; s[bod] != '\0'; bod++)
	{
		for (mon = 0; s[bod] != accept[mon]; mon++)
		{
			if (accept[mon] == '\0')
			{
				return (bod);
			}
		}
	}
	return (bod);
}
