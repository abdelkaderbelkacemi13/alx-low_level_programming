#include "main.h"
/**
 * print_last_digit - Returns the value of the last digit
 * @n: the number that we will get its last degit
 * Return: last degit
*/

int print_last_digit(int n)
{
	int LD;

	if (n < 0)
	{
		n = -1 * n;
		LD = n % 10;
	}
	else
		LD = n % 10;

	_putchar(LD + '0');
	return (LD);
}
