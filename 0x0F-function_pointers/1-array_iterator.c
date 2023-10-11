#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator -  a function that executes a function given
 *  as a parameter on each element of an array.
 *  @array: int array
 *  @size: the size of the array
 *  @action: the pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *da;

	da = array + size - 1;
	if (array && size && action)
	{
		while (array <= da)
		{
			action(*array++);
		}
	}
}
