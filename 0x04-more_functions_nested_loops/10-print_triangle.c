#include "main.h"
/**
 * print_triangle - prints a triangle
 * @tablesize: size of the triangle
*/
void print_triangle(int tablesize)
{
	int i, j;

	tabelsize = 10;
	i = 1;
	while (i <= tabelsize)
	{
		j = 1;
		while (j <= tabelsize - i)
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
		_putchar('\n');
		i++;
	}
}
