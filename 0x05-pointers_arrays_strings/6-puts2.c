#include "main.h"

/**
 * puts2 -  prints every other character of a string.
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		if (len % 2 == 0)
			_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
