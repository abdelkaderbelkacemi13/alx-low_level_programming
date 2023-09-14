#include "main.h"
/**
 * print_square - use it to print a square using #
 * @size: the square size
 */
void print_square(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i, j;

		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				putchar('#');
				j++;
			}
			i++;
			putchar('\n');
		}
	}
}
