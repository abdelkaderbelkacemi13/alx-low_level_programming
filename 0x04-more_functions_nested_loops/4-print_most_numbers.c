#include "main.h"
/**
 * print_most_numbers - prin form 0 to 9 except 2 & 4
*/
void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number == 2 || number == 4)
			continue;
		_putchar(number + '0');

	}
	_putchar('\n');
}
