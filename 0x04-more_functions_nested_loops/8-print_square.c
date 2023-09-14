#include "main.h"
/**
 * print_square - use it to print a square using #
 * @size: the square size
 */
void print_square(int size)
{
	{

	int r, c;

	r = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (r = 0)
		{
			if (r < size)
			{
				for (c = 0; c < size; c++)
					_putchar('#');
			}
		r++;
		}
	}
	_putchar('\n');
}
