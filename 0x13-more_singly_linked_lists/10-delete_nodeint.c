#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: address of pointer to first node
 * @index: index of node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		listint_t *node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	listint_t *prev_node = *head;
	listint_t *node = (*head)->next;

	for (unsigned int i = 1; node; i++)
	{
		if (i == index)
		{
			prev_node->next = node->next;
			free(node);
			return (1);
		}
		prev_node = node;
		node = node->next;
	}
	return (-1);
}
