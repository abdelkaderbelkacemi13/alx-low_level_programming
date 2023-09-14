#include "main.h"
/**
 * print_most_numbers - prin form 0 to 9 except 2 & 4
*/
void print_most_numbers(void)
{
	int number;

	number = 0;
	while (number < 10)
	{
		if (number == 2 || number == 4)
			continue;
		_putchar(number + '0');
		number++;
	}
	_putchar('\n');
}
