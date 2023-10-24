#include "lists.h"

/**
 * free_listint - frees a list of ints
 * @head: pointer to first node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	for (listint_t *node; head; free(node))
	{
		node = head;
		head = head->next;
	}
}
