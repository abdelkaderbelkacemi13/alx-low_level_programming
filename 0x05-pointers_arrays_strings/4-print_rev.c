#include "main.h"
/**
 * print_rev - used to prints a string in reverse.
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
