#include "lists.h"

/**
 * free_listint2 - frees a list of ints
 * @head: address of pointer to first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	if (!head || !*head)
	{
		return;
	}
	for (listint_t *node = *head, *temp; node; node = temp)
	{
		temp = node->next;
		free(node);
	}
	*head = NULL;
}
