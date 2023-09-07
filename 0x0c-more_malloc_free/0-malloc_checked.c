#include "main.h"
/**
   * *malloc_checked - a function that allocates memory using malloc
   * @b: unsigned int
   * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	 int *s = malloc(b);

	if (s == 0)
		exit(98);

	return (s);
}
