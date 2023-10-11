#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer.
 * @array: the array
 * @size: the size of the array
 * @cmp: the  pointer to the function to be used to compare.
 * Return: the integer index.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && size && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]))
				return (a);
		}
	}
	return (-1);
}
