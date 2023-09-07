#include "main.h"
/**
  * _memset - filles memory with a constant byte
  * @S: pointer
  * @b: number
  * @n: bytes
  * Return: s
*/

char *_memset(char *S, char b, unsigned int n)
{
	char *bod = S;

	while (n--)
		*S++ = b;

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

	if (size == 0 || nmemb == 0)
		return (NULL);
	f = malloc(sizeof(int) * nmemb);

	if (f == 0)
		return (NULL);

	_memset(f, 0, sizeof(int) * nmemb);

	return (f);
}
