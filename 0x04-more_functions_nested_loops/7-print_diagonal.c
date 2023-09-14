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
	putchar('\n');
	}
	else
	{
	for (dl1 = 0; dl1 < n; dl1++)
	{
	for (dl2 = 0; dl2 < n; dl2++)
	{
	if (dl2 == dl1)
		putchar('\\');
	else if (dl2 < dl1)
		putchar(' ');
	}
	putchar('\n');
	}
	}
}
