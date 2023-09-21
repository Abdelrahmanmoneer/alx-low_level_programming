#include "lists.h"

/**
  * _strlen - a function that returns the length of string
  * @a: string to be checked
  * Return: the length of the string
*/

int _strlen(char *a)
{
	int f = 0;

	if (!a)
		return (0);
	while (*a++)
		f++;
	return (f);
}

/**
  * print_list - a function that prints
  * all the elements of a list_t list
  * @h: pointer to first node
  * Return: size
*/

size_t print_list(const list_t *h)
{
	size_t f = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		f++;
	}
	return (f);
}

