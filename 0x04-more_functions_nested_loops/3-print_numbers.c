#include "main.h"
/**
 * print_numbers -print number from 0 to 9
 * followed by a new line
*/
void print_numbers(void)
{
	int number;

	number = 0;
	while (number < 10)
	{
	_putchar(number + '0');
	number++;
	}
	_putchar('\n');
}
