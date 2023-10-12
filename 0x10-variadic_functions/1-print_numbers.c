#include "variadic_functions.h"

/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list li;

	va_start(li, n);
	a = 0;
	while (a < n)
	{
	if (!separator)
		printf("%d", va_arg(li, int));
	else if (separator && a == 0)
		printf("%d", va_arg(li, int));
	else
		printf("%s%d", separator, va_arg(li, int));
	a++;
	}
	printf("\n");
	va_end(li);
}
