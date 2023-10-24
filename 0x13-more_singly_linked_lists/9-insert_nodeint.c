#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given index
 * @head: address of pointer to first node
 * @idx: index to insert new node
 * @n: n value of new node
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_node = malloc(sizeof(listint_t));
	unsigned int i;

	if (!head || !new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	node = *head;

	for (i = 0; node && i < idx - 1; i++)
	{
		node = node->next;
	}
	if (i == idx - 1)
	{
		new_node->next = node->next;
		node->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
