#include "main.h"
/**
  * *_realloc - a function that reallocates
  * a memory block using malloc and free
  * @ptr: pointer
  * @old_size: old size in bytes
  * @new_size: new size in bytes
  * Return: NULL or ptr
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;
	unsigned int s;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);
		return (a);
	}
	if (new_size > old_size)
	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);
		for (s = 0; s < old_size && s < new_size; s++)
			*((char *)a + s) = *((char *)ptr + s);
		free(ptr);
	}
	return (a);
}
