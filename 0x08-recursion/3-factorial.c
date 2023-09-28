#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the number
 * Return: 1 if n is = 0 and -1 if n < 0 (error)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

