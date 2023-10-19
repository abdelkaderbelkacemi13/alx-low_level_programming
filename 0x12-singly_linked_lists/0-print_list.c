#include "lists.h"

/**
 * _strlen - a function that returns the length of a string
 * @len: the string to check its length
 *
 * Return: integer length of string
 */
int _strlen(char *len)
{
	int i;

	if (!len)
		return (0);

	for (i = 0; len[i] != '\0'; i++)
		;
	return (i);
}

/**
 * print_list - a function used to print a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (; h; h = h->next, i++)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
	}
	return (i);
}
