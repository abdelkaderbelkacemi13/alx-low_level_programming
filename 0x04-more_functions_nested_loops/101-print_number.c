#include "main.h"
/**
 * print_number - use it to print numbers.
 * @n: the integer that we will print
*/
void print_number(int n)
{
	unsigned int mi;

	if (mi < 0)
	{
		mi = -n;
		_putchar('-');
	} else
	{
		mi = n;
	}

	if (mi / 10)
	{
		print_number(mi / 10);
	}

	_putchar((mi % 10) + '0');
}
