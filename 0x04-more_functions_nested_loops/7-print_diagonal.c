#include "main.h"
/**
 * print_diagonal - draws a diagonal
 * @n: number of \ printed
*/
void print_diagonal(int n)
{
	int dl1, dl2;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (dl1 = 0; dl1 < n; dl1++)
	{
	for (dl2 = 0; dl2 < n; dl2++)
	{
	if (dl2 == dl1)
		_putchar('\\');
	else if (dl2 < dl1)
		_putchar(' ');
	}
	_putchar('\n');
	}
	}
}
