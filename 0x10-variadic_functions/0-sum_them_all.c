#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of integers
 * @...: integers
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum, i;
	va_list li;

	sum = 0;
	i = n;
	if (!n)
	{
		return (0);
	}
	va_start(li, n);
	while (i--)
	{
		sum += va_arg(li, int);
	}
	va_end(li);
	return (sum);
}
