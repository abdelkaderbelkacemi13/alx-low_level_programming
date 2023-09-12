#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int num, mult, result;

	for (num = 0; num < 10; num++)
	{
		for (mult = 0; mult < 10; mult++)
		{
			result = mult * num;
			if (mult == 0)
			{
				_putchar(result + '0');
			}

			if (result < 10 && mult != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			} else if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
