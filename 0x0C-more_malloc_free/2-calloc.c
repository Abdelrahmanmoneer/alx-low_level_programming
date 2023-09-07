#include "main.h"
/**
  * _memset - filles memory with a constant byte
  * @s: pointer
  * @b: number
  * @n: bytes
  * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *bod = s;

	while (n--)
		*s++ = b;

	return (bod);
}

/**
  * *_calloc - a function that allocates memory for an array, using malloc
  * @nmemb: length
  * @size: size
  * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *f;

	if (nmemb == 0 || size == 0)
		return (NULL);
	f = malloc(sizeof(int) * nmemb);
	if (f == 0)
		return (NULL);
	_memset(f, 0, sizeof(int) * nmemb);

	return (f);
}
