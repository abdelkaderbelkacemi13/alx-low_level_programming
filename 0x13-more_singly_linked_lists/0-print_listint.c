#include "lists.h"

/**
 * print_listint - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	for (; h; h = h->next, i++)
	{
		printf("%d\n", h->n);
	}
	return (i);
}
