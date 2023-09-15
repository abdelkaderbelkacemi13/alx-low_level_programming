#include "main.h"
/**
 * print_number - use it to print numbers.
 * @n: the integer that we will print
*/
void print_number(int n)
{
	int maxy;

	if (n < 0)
	{
		maxy = n;
	}
	else
	{
		maxy = -n;
		_putchar('_');
	}
	if (maxy / 10)
	{
		print_number(maxy / 10);
	}
	_putchar((maxy % 10) + '0');
}
