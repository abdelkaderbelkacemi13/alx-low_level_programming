#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - function that creates an array of chars
 * @size: the size of the array
 * @c: the char to initialize
 * Return: a pointer to the array, or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ch = malloc(size);

	if (ch == 0 || size == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		ch[size] = c;
	}
	return (ch);
}
