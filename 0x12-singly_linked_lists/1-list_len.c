#include "lists.h"

/**
  * list_len -  a function that returns
  * the number of elements in a linked list_t lis
  * @h: pointer to the first node
  * Return: the nimber of nodes
*/

size_t list_len(const list_t *h)
{
	size_t f = 0;

	while (h)
	{
		h = h->next;
		f++;
	}
	return (f);
}
