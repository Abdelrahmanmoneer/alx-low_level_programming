#include "main.h"
/**
  * _strchr - a function that locates a character in a string
  * @s: pointer
  * @c: character
  * Return: pointer s
*/

char *_strchr(char *s, char c)
{
	int bod;

	for (bod = 0; s[bod] >= '\0'; bod++)
	{
		if (s[bod] == c)
		{
			return (s + bod);
		}
	}
	return ('\0');
}
