#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
*/
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	i = 1;
	while (i <= size)
	{
		j = 1;
		while (j <= size - i)
		{
			_putchar(' ');
			j++;
		}
		j = 1;
		while (j <= i)
		{
			_putchar('#');
			j++;
		}
		i++;
		_putchar('\n');
	}
	}
}
