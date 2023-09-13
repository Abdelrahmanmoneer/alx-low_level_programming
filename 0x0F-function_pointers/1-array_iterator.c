#include "function_pointers.h"
/**
  * array_iterator - a function that executes a function
  * given as a parameter on each element of an array
  * @size: the size of array
  * @action: a pointer
  * @array: array of int
  *
  * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *bod = array + size - 1;

	if (array && action && size)
		while (array <= bod)
			action(*array++);
}

