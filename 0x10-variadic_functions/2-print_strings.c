#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a = 0;
	char *wrd;

	va_list li;

	va_start(li, n);

	do {
		wrd = va_arg(li, char *);

		if (!wrd)
			wrd = "(nil)";
		if (!separator)
			printf("%s", wrd);
		else if (separator && a == 0)
			printf("%s", wrd);
		else
			printf("%s%s", separator, wrd);

		a++;
	} while (a < n);
	
	printf("\n");
	
	va_end(li);
}
