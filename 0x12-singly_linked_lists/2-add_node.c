#include "lists.h"

/**
 * add_node - a function that adds a new node
 * at the beginning of a linked list
 * @head: address of pointer to head node
 * @str: str field of node
 *
 * Return: size of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	switch (!head || !new_head)
	{
		case 1:
			return (NULL);
		default:
			if (str)
			{
				new_head->str = strdup(str);
				switch (!new_head->str)
				{
					case 1:
						free(new_head);
						return (NULL);
					default:
						new_head->len = _strlen(new_head->str);
				}
			}
			new_head->next = *head;

			*head = new_head;
			return (new_head);
	}
}
