#include "main.h"
/**
  * *array_range - a function that creates an array of integers
  * @min: first int
  * @max: last int
  * Return: array
*/

int *array_range(int min, int max)
{
	int length, i;
	int *bod;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	bod = malloc(sizeof(int) * length);
	if (bod == 0)
		return (NULL);
	for (i = 0; i < length; i++)
		bod[i] = min++;
	return (bod);
}
