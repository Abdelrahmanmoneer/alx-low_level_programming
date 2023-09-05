#include "main.h"
/**
  * create_array - a function that creates an array of chars
  * and initializes it with a specific char
  * @size: size of array
  * @c: input
  * Return: 0 or 1
*/

char *create_array(unsigned int size, char c)
{
	char *b = malloc(size);

	if (size == 0 || b == 0)
	{
		return (0);
	}

	while (size--)

		b[size] = c;

	return (b);
}
