#include "function_pointers.h"
/**
  * int_index - a function that searches for an integer
  * @size: the number of elements
  * @array: the array of int
  * @cmp: pointer
  *
  * Return: int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (size && array && cmp)
		while (a < size)
		{
			if (cmp(array[a]))
				return (a);
			a++;
		}
	return (-1);
}
