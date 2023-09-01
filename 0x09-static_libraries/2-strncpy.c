#include "main.h"
/**
  * _strncpy - a function that copies a string
  * @dest: input
  * @src: secound input
  * @n: number of bytes
  * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int s;

	for (s = 0; s < n && src[s] != '\0'; s++)
		dest[s] = src[s];
	while (s < n)
	{
		dest[s] = '\0';
		s++;
	}

	return (dest);
}
