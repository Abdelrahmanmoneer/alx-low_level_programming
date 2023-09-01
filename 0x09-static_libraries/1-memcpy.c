#include "main.h"
/**
  * _memcpy - a function that copies memory area
  * @src: source
  * @dest: memory area
  * @n: length of src to be copied
  * Return: the pointer of dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int mon;

	for (mon = 0; mon < n; mon++)
	{
		dest[mon] = src[mon];
	}
	return (dest);
}
