#include "main.h"
/**
  * _strcat - a function that concatenates two strings
  * @dest: input
  * @src: secound input
  * Return: a pointer to the resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int a1, a2;

	a1 = 0;

	while (dest[a1])
		a1++;

	for (a2 = 0; src[a2]; a2++)

		dest[a1++] = src[a2];

	return (dest);
}
