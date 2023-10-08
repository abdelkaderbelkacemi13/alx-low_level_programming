#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: number of bytes
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *po = malloc(b);

	if (po == NULL)
	{
		exit(98);
	}
	return (po);
}
