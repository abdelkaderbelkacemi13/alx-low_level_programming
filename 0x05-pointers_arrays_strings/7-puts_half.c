#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len, k;

	for (len = 0; str[len] != '\0'; len++)
		;
	len++;
	k = len /= 2;
	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
