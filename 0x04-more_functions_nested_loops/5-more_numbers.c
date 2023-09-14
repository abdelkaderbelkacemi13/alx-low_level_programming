#include "main.h"
/**
 * more_numbers - print number from 0 to 14, 10 times
 * followed by a new line
*/
void more_numbers(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10 ; num1++)
	{
	for (num2 = 0; num2 < 15 ; num2++)
	{
	if (num2 >= 10)
	{
	putchar(num2 / 10 + '0');
	}
	putchar(num2 % 10 + '0');
	}
	putchar('\n');
	}
}
