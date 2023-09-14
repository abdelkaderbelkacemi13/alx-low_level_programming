#include "main.h"
/**
 * print_line - draws a line
 * @n: how many _ printed
*/
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int numline;

		for (numline = 1; numline <= n; numline++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
