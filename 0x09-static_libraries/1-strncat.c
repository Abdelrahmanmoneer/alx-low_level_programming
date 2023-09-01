#include "main.h"
/**
  * _strncat - a function that concatenates two strings
  * @dest: input
  * @src: secound input
  * @n: most number of bytes
  * Return: a pointer to the resulting string @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a])
		a++;

	for (b = 0; b < n && src[b] != '\0'; b++)

		dest[a + b] = src[b];
	dest[a + b] = '\0';

	return (dest);
}
