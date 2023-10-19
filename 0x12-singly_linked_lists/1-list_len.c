#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h)
	{
		do {
			h = h->next;
			i++;
		} while (h);
	}
	return (i);
}
